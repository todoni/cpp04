CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MD
NAME = ex_00
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)

#%.o : %.cc
#	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean :
	rm -f $(OBJS)
	rm -f $(OBJS:.o=.d)

fclean :
	rm -f $(OBJS)
	rm -f $(OBJS:.o=.d)
	rm -f $(NAME)
re :
	rm -f $(OBJS)
	rm -f $(OBJS:.o=.d)
	rm -f $(NAME)
	make $(NAME)

.PHONY : all clean fclean re

-include $(OBJS:.o=.d)
