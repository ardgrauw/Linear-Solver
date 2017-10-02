#include "OsiCbcSolverInterface.hpp";
#include "CelModel.h"

class CBCModel
{
public:
	CBCModel();

private:
	void initiateModel();

	OsiCbcSolverInterface *solver;
	rehearse::CelModel *model;
};


