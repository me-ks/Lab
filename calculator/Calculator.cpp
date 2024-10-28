#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

double executeOperation(double x, double y, char op) {
    switch (op) {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/':
        if (y != 0) return x / y;
        else {
            cerr << "Error: division by zero!" << endl;
            exit(1);
        }
    default:
        cerr << "Invalid operation!" << endl;
        exit(1);
    }
}

void parseExpression(const string& expr, vector<double>& values, vector<char>& ops) {
    stringstream stream(expr);
    double val;
    char op;

    stream >> val;
    values.push_back(val);

    while (stream >> op) {
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            cerr << "Error: invalid operation!" << endl;
            exit(1);
        }
        ops.push_back(op);
        stream >> val;
        values.push_back(val);
    }
}

int main() {
    string expr;
    cout << "Enter the expression: ";
    cin >> expr;

    vector<double> values;
    vector<char> ops;
    parseExpression(expr, values, ops);

    vector<double> temp_values;
    vector<char> temp_ops;
    temp_values.push_back(values[0]);

    for (size_t i = 0; i < ops.size(); ++i) {
        if (ops[i] == '*' || ops[i] == '/') {
            double intermediate_result = executeOperation(temp_values.back(), values[i + 1], ops[i]);
            temp_values.back() = intermediate_result;
        }
        else {
            temp_values.push_back(values[i + 1]);
            temp_ops.push_back(ops[i]);
        }
    }

    double final_result = temp_values[0];
    for (size_t i = 0; i < temp_ops.size(); ++i) {
        final_result = executeOperation(final_result, temp_values[i + 1], temp_ops[i]);
    }

    cout << "Final result: " << final_result << endl;
    return 0;
}
