int create_file(const char *filename, char *text_content)
{
	int t = open(filename, O_CREAT);

