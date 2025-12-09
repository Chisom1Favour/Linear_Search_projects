/*
 * This code uses linear search to search for matching user id and returns the
 * location of the id if found
 */

#include <stdio.h>

typedef struct
{
	int user_id;
	int socket_fd;
} Session;

Session session[32];
int session_count = 0;

// This function loops through the sessions and returns a pointer to the matching user id

Session* find_session(int user_id)
{
	for (int = 0; i < session_count; i++)
	{
		if (session[i].userid == user.id)
		{
			return &session[i];
		}
	}
	return NULL;
}

int main()
{
	Session *s = find_session(42);
	if (s != NULL)
	{
		int fd = s->socket_fd;
		s->socket_fd = 99;
	}
	else
	{
		printf("Not found\n");
	}
	return 0;
}
