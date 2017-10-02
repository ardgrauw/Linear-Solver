#include "Model.h";


CBCModel::CBCModel()
{
	initiateModel();
}

void CBCModel::initiateModel()
{
	solver = new OsiCbcSolverInterface();
	
}