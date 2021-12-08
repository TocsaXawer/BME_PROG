double integral(@/* double (*fx)(double) */@
                @double fx(double)@,
                double a, double b, unsigned n) {
...
sum += @fx(x)@ * dx;
...
}

printf("%f\n", integral(@xsquare@, 1.0, 5.0, 100));
