/** Demonstrates how to use explicit casting to compute the fractional part of a float. **/

int main() {
    float f = 10.674538, frac_part;

    frac_part = f - (int) f;

    return 0;
}
