#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

#include "lib.h"

const char *get_reg_name_str(uint16_t reg)
{
	static const char *str[] = {
		"r0",
		"r1",
		"r2",
		"r3",
		"r4",
		"r5",
		"r6",
		"r7"};
	return str[reg];
}

#define MEMORY_SIZE 64
#define REGISTERS_COUNT 8

#define OP_ADD 0
#define OP_SUB 1
#define OP_MUL 2
#define OP_DIV 3
#define OP_CMP_EQUAL 4
#define OP_CMP_NEQ 5
#define OP_CMP_LESS 6
#define OP_CMP_GREATER 7
#define OP_CMP_LESS_EQ 8
#define OP_CMP_GREATER_EQ 9
#define OP_AND 10
#define OP_OR 11
#define OP_XOR 12
#define OP_SHL 13
#define OP_SHR 14
#define OP_LOAD 15
#define OP_STORE 16

typedef struct
{
	uint8_t opcode;
	uint8_t rd;
	uint8_t rs1;
	uint8_t rs2;
	int32_t imm;
} Instruction;

int16_t memory[64];
int16_t registers[8];

void execute_instruction(Instruction instr)
{

	reg[Instruction.rs1] = 10;
	reg[Instruction.rs2] = 10;

	switch (instr.opcode)
	{
	case 0:
		printf("Operação de soma, opcode: %d", instr.opcode);
		reg[Instruction.rd] = reg[Instruction.rs1] + reg[Instruction.rs2];
		printf("Resultado: %d", reg[Instruction.rd]);
		break;
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	case 7:

		break;
	case 8:

		break;
	case 9:

		break;
	case 10:

		break;
	case 11:

		break;
	case 12:

		break;
	case 13:

		break;
	case 14:

		break;
	case 15:

		break;
	case 16:

		break;
	default:
		printf("Instrução desconhecida!\n");
	}
}

int main()
{

	int escolha;
	printf("Exit: -1");
	printf("Escolha uma ação: ");
	scanf("%d", &escolha);

	if (escolha == -1)
	{
		break;
	}
	else if (escolha >= 0 and escolha <= 16)
	{
		Instruction instr;
		instr.opcode = escolha;
		execute_instruction(instr);
	}
	else
		printf("Opção inválida");

	return 0;
}