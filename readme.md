## A Simple Quotes Generator 
### Description
This project is a simple quotes generator written in C++. It uses an SQLite3 database to store and retrieve quotes.

### Installation
To run this project, ensure you have the SQLite3 library installed on your system. You can install it using the following commands:

```sh
sudo apt-get update
sudo apt-get install sqlite3 libsqlite3-dev
```

### Usage
1. Clone the repository:
    ```sh
    git clone https://github.com/nanda-gopal-sb/quotes-cpp
    cd quotes
    ```
2. Compile the project:
    ```sh
    g++ -o quotes_generator main.cpp -lsqlite3
    ```
3. Run the executable:
    ```sh
    ./quotes_generator
    ```

### References
- [Kaggle Quotes Dataset](https://www.kaggle.com/datasets/manann/quotes-500k) - This project uses the Kaggle dataset containing 500k quotes.
