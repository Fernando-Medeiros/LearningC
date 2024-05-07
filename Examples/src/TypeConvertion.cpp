static void TypeConvertion() {
	int x = 10;
	char l = 'F';
	float y = 0.5f;

	x = static_cast<int>(11.33f);
	y = static_cast<float>(9);
	l = static_cast<char>(22);
}