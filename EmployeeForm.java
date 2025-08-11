import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

public class EmployeeForm extends JFrame implements ActionListener {
    JTextField txtID, txtName, txtSalary;
    JRadioButton rbMale, rbFemale;
    JButton btnInsert, btnDel, btnClose;
    JTextArea textArea;

    Connection conn;

    public EmployeeForm() {
        super("Employee");

        // ===== Connect to MySQL =====
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection(
                "jdbc:mysql://localhost:3637/mydatabase", "root", "1234567");
            System.out.println("Database connected!");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(this, "DB Connection Failed: " + e.getMessage());
        }

        // ===== UI Components =====
        setLayout(new FlowLayout());

        add(new JLabel("ID :"));
        txtID = new JTextField(20);
        add(txtID);

        add(new JLabel("Name :"));
        txtName = new JTextField(20);
        add(txtName);

        add(new JLabel("Sex :"));
        rbMale = new JRadioButton("Male", true);
        rbFemale = new JRadioButton("Female");
        ButtonGroup bg = new ButtonGroup();
        bg.add(rbMale);
        bg.add(rbFemale);
        add(rbMale);
        add(rbFemale);

        add(new JLabel("Salary :"));
        txtSalary = new JTextField(20);
        add(txtSalary);

        btnInsert = new JButton("INSERT");
        btnDel = new JButton("DEL");
        btnClose = new JButton("CLOSE");

        btnInsert.addActionListener(this);
        btnDel.addActionListener(this);
        btnClose.addActionListener(this);

        add(btnInsert);
        add(btnDel);
        add(btnClose);

        textArea = new JTextArea(10, 30);
        add(new JScrollPane(textArea));

        setSize(400, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btnInsert) {
            insertEmployee();
        } else if (e.getSource() == btnDel) {
            deleteEmployee();
        } else if (e.getSource() == btnClose) {
            closeApp();
        }
    }

    private void insertEmployee() {
        try {
            String id = txtID.getText();
            String name = txtName.getText();
            String sex = rbMale.isSelected() ? "Male" : "Female";
            double salary = Double.parseDouble(txtSalary.getText());

            String sql = "INSERT INTO myemp (id, name, sex, salary) VALUES (?, ?, ?, ?)";
            PreparedStatement ps = conn.prepareStatement(sql);
            ps.setInt(1, Integer.parseInt(id));
            ps.setString(2, name);
            ps.setString(3, sex);
            ps.setDouble(4, salary);

            int rows = ps.executeUpdate();
            if (rows > 0) {
                textArea.append("Inserted: " + id + " - " + name + "\n");
            }
        } catch (Exception ex) {
            textArea.append("Error: " + ex.getMessage() + "\n");
        }
    }

    private void deleteEmployee() {
        try {
            String id = txtID.getText();
            String sql = "DELETE FROM myemp WHERE id = ?";
            PreparedStatement ps = conn.prepareStatement(sql);
            ps.setInt(1, Integer.parseInt(id));

            int rows = ps.executeUpdate();
            if (rows > 0) {
                textArea.append("Deleted ID: " + id + "\n");
            } else {
                textArea.append("No record found with ID: " + id + "\n");
            }
        } catch (Exception ex) {
            textArea.append("Error: " + ex.getMessage() + "\n");
        }
    }

    private void closeApp() {
        try {
            if (conn != null) conn.close();
        } catch (Exception ex) {
            // ignore
        }
        System.exit(0);
    }

    public static void main(String[] args) {
        new EmployeeForm();
    }
}
