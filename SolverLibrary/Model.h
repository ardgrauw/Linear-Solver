#include "OsiCbcSolverInterface.hpp";
#include "CelModel.h"

class LinearVariable;

class CBCModel
{
public:
	CBCModel();
	void addVariable(LinearVariable var);
	void SolveModel();

private:
	void initiateModel();

	OsiCbcSolverInterface *solver;
	rehearse::CelModel *model;
};


