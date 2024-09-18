double average(int* salary, int salarySize) {
    double sum = 0;
    double minSalary = 1000000;
    double maxSalary = 0;
    // printf("%d", salarySize);
    if (salarySize < 0 || salarySize > 100) {
        return 0;
    }
    for (int i = 0; i < salarySize; i++) {
        int thisSalary = salary[i];
        if (thisSalary >= 1000 && thisSalary <= 1000000) {
            sum += thisSalary;
            if (thisSalary < minSalary) {
                minSalary = thisSalary;
            }
            if (thisSalary > maxSalary) {
                maxSalary = thisSalary;
            }
        }
    }
    sum -= minSalary + maxSalary;
    double avg = sum /( salarySize - 2);
    return avg;
}
