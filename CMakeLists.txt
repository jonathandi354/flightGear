cmake_minimum_required(VERSION 3.12)
project(project)

set(CMAKE_CXX_STANDARD 14)

add_executable(project main.cpp Parser.cpp Parser.h Lexer.cpp Lexer.h Command.h Var.h DataControl.h OpenDataServer.cpp OpenDataServer.h DataReaderServer.cpp DataReaderServer.h Connect.cpp Connect.h Assign.cpp Assign.h print.h sleepComm.h ConditionParser.h whileLoop.h IfCondition.h DataControl.cpp Exit.h CalcExpression.h CalcExpression.cpp BinaryExpression.cpp BinaryExpression.h Expression.cpp Expression.h KindsOfExpression.cpp KindsOfExpression.h)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")