#include "Model.h";
#include "LinearVariable.h";


CBCModel::CBCModel()
{
	initiateModel();
}

void CBCModel::initiateModel()
{
	solver = new OsiCbcSolverInterface();
	
}

void CBCModel::addVariable(LinearVariable var)
{
	var.addToModel(model);
}

void CBCModel::SolveModel()
{

}