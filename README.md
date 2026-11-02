# Workflow
# Task Manager API

A simple RESTful API built using **ASP.NET Core Web API** and **Entity Framework Core** that allows users to manage their daily tasks.

## Features

- Create new tasks
- Retrieve all tasks
- Retrieve a task by its ID
- Update existing tasks
- Delete tasks
- Store task data in SQL Server
- Validate incoming requests

## Technologies Used

- C#
- ASP.NET Core Web API
- Entity Framework Core
- SQL Server
- Swagger / OpenAPI

## Project Structure

```text
TaskManagerAPI/
│
├── Controllers/
│   └── TasksController.cs
│
├── Models/
│   └── TaskItem.cs
│
├── Data/
│   └── AppDbContext.cs
│
├── DTOs/
│   └── CreateTaskDto.cs
│
├── Program.cs
├── appsettings.json
└── README.md
```

## Getting Started

### Prerequisites

Make sure you have the following installed:

- .NET SDK
- SQL Server
- Visual Studio or VS Code

### Installation

1. Clone the repository:

```bash
git clone https://github.com/username/TaskManagerAPI.git
```

2. Navigate to the project directory:

```bash
cd TaskManagerAPI
```

3. Restore dependencies:

```bash
dotnet restore
```

4. Apply database migrations:

```bash
dotnet ef database update
```

5. Run the application:

```bash
dotnet run
```

## API Endpoints

| Method | Endpoint | Description |
|---|---|---|
| GET | `/api/tasks` | Get all tasks |
| GET | `/api/tasks/{id}` | Get task by ID |
| POST | `/api/tasks` | Create a task |
| PUT | `/api/tasks/{id}` | Update a task |
| DELETE | `/api/tasks/{id}` | Delete a task |

## Example Request

**POST** `/api/tasks`

```json
{
  "title": "Complete programming assignment",
  "description": "Finish the C# assignment",
  "isCompleted": false
}
```

## Future Improvements

- User authentication and authorization
- Pagination and filtering
- Task deadlines and priorities
- Unit testing

## Author

Muhammad Hussain

GitHub: [MuhammadHussainCS](https://github.com/MuhammadHussainCS)

## License

This project is open-source and available under the MIT License.
