# Secure User Authentication System

A full-stack web application implementing secure user registration and login functionality with a C++ backend, frontend interface, and SQLite database.

## 📋 Features

✅ **User Registration** - Create new user accounts with password validation  
✅ **Secure Login** - Authenticate users with username and password  
✅ **Password Confirmation** - Verify passwords during registration  
✅ **Responsive UI** - Clean, modern interface for desktop and mobile  
✅ **Backend API** - RESTful C++ backend using Crow framework  
✅ **Database Integration** - SQLite for persistent user data storage  
✅ **Form Validation** - Client-side and server-side validation  

## 🛠️ Technology Stack

### Frontend
- **HTML5** - Structure
- **CSS3** - Styling & Responsive Design
- **JavaScript** - Form handling and API communication

### Backend
- **C++** - Core backend logic
- **Crow Framework** - Web framework for RESTful API
- **SQLite3** - Database

## 📁 Project Structure

```
Login Form Project/
│
├── Frontend/
│   ├── index.html           # Login page
│   ├── register.html        # Registration page
│   ├── Dashboard.html       # User dashboard (after login)
│   ├── script.js            # JavaScript logic for frontend
│   └── style.css            # Styling
│
├── backend/
│   ├── main.cpp             # Main backend application
│   ├── Login.cpp            # Login functionality
│   ├── userManager.h        # User management header
│   ├── user.h               # User model
│   ├── database.h           # Database operations
│   ├── crow_all.h           # Crow framework
│   ├── sqlite3.h            # SQLite header
│   ├── sqlite3.c            # SQLite source
│   └── server.exe           # Compiled server executable
│
├── database/                # Database files
│
└── README.md                # This file
```

## 🚀 Getting Started

### Prerequisites
- **C++ Compiler** (GCC, Clang, or MSVC)
- **Node.js** (optional, for running a local server)
- **SQLite3** (included in the project)
- **Git** (for version control)

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/Anmol2112-sys/User-Registration-an-Login-_cpp.git
   cd "Login Form Project"
   ```

2. **Compile the backend** (if needed)
   ```bash
   cd backend
   g++ -o server main.cpp Login.cpp -std=c++11 -lstdc++fs
   ```

3. **Run the backend server**
   ```bash
   cd backend
   ./server.exe
   # or
   ./server
   ```
   The server will start on `http://localhost:8080`

4. **Open the frontend** in your browser
   ```
   Open Frontend/Frontend/index.html in your web browser
   ```

## 📖 Usage

### Registration
1. Click "Register" on the login page
2. Enter username and password
3. Confirm your password
4. Click "Register" button
5. Account is created and stored in the database

### Login
1. Enter your username on the login page
2. Enter your password
3. Click "Login" button
4. On successful login, access the dashboard

## 🔌 API Endpoints

| Method | Endpoint | Description |
|--------|----------|-------------|
| POST | `/api/register` | Register a new user |
| POST | `/api/login` | Authenticate user |
| GET | `/api/dashboard` | Get user dashboard |

### Request/Response Examples

**Register User**
```json
POST /api/register
{
  "username": "john_doe",
  "password": "secure_password",
  "confirmPassword": "secure_password"
}
```

**Login User**
```json
POST /api/login
{
  "username": "john_doe",
  "password": "secure_password"
}
```

## 🔐 Security Features

- Password validation on both client and server
- SQLite database for secure data storage
- Form validation to prevent invalid input
- Session management for authenticated users

## 📝 Database Schema

### Users Table
```sql
CREATE TABLE users (
  id INTEGER PRIMARY KEY,
  username TEXT UNIQUE NOT NULL,
  password TEXT NOT NULL,
  created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
```

## 🐛 Troubleshooting

### Port Already in Use
If port 8080 is already in use, modify the port in `backend/main.cpp`:
```cpp
auto app = crow::SimpleApp();
// Change port in listen()
app.port(8080).multithreaded().run();
```

### CORS Issues
Make sure your backend is configured to accept requests from your frontend URL.

### Database Errors
Ensure the `database/` directory exists and has write permissions.

## 🤝 Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is open source and available under the MIT License.

## 👤 Author

**Anmol**  
GitHub: [@Anmol2112-sys](https://github.com/Anmol2112-sys)

## 📧 Contact & Support

For issues, questions, or suggestions, please:
- Open an issue on GitHub
- Contact the maintainer

---

**Last Updated:** August 16, 2026  
**Version:** 1.0.0
