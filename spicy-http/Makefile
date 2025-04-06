NAME = spicy_http
CC = clang++
CXXFLAGS = -Wall -Wextra -std=c++17 #-fsanitize=address -g -Werror
CXXFLAGS += $(shell spicy-config --cxxflags)
LDFLAGS  := $(shell spicy-config --ldflags)
DEPFLAGS = -MMD -MP -MF $(DEP_DIR)$*.d

SRC_DIR		= src/
OBJ_DIR		= obj/
DEP_DIR		= dep/
SRCS = main.cc spicy_http.cc my_http_MyHTTP.cc my_http___linker__.cc
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:%.cc=%.o))
DEPS = $(addprefix $(DEP_DIR), $(SRCS:%.cc=%.d))

SPICY = src/my_http*

INCLUDES = -I./include
vpath %.cc $(SRC_DIR)

# Alternative way to build
# all:
# 	spicy-build -S -o a.out src/main.cc src/spicy_http.cc my_http.spicy

all :  $(OBJ_DIR) $(DEP_DIR) $(NAME)

$(OBJ_DIR) $(DEP_DIR) :
	@mkdir -p $@

$(OBJ_DIR)%.o: %.cc
	$(CC) $(CXXFLAGS) $(DEPFLAGS) $(INCLUDES) -c $< -o $@

$(NAME) : $(OBJS) $(SPICY)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME) $(LDFLAGS)

$(SPICY) : my_http.spicy
	spicyc -x ./src/my_http my_http.spicy

clean : 
	rm -rf $(OBJS) $(DEPS) $(DEP_DIR) $(OBJ_DIR)
	rm -rf build

fclean : clean
	rm -f $(NAME)

re : fclean all

test:
	cmake -S . -B build
	cmake --build build
	./build/Spicy_HTTP-googletest

-include $(DEPS)

.PHONY : clean fclean re all test