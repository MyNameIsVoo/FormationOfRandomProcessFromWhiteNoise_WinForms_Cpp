#pragma once

void Rav(std::ofstream &out, int N, float *Rav)
{
	out << setprecision(3) << "\n\t\tРаспределение\n\n";
	for (int i = 0; i < N; i++)
		out << "\t " << Rav[i];

	out << "\n\n\t\t\n\n";
	float mx = 0;
	for (int i = 0; i < N; i++)
		mx += Rav[i];
	mx = mx * (1.0 / (float)N);
	out << "\t\tМатематическое ожидание [mx] = " << mx << endl;

	float D = 0;
	for (int i = 0; i < N; i++)
		D += pow((Rav[i] - mx), 2.0);
	D = D * (1.0 / ((float)N - 1.0));
	out << "\t\tДисперция [D] = " << D << endl;

	float sigma = sqrt(D);
	out << "\t\tПлотность [sigma] = " << sigma << endl;

	float sigma_m = sigma / (pow(N, 0.5));
	out << "\t\tsigma_m = " << sigma_m << endl;

	float sigma_D = (D * sqrt(2)) / sqrt(N - 1.0);
	out << "\t\tsigma_D = " << sigma_D << endl;
}
