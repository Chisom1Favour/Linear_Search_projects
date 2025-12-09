# This code finds the user id in a changing list using linear search

Sessions = [
        {"user_id": 12, "socket": conn1},
        {"user_id": 44, "socket": conn2},
        ]

def find_session(user_id):
    for s in Sessions:
        if s["user_id"] == user_id:
            return s
        return None
