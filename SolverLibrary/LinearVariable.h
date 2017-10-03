class OsiCbcSolverInterface;


class LinearVariable
{
public:
	virtual void addToModel(OsiCbcSolverInterface *model) = 0;
};

class LinearIntVariable : LinearVariable
{
public:
	void addToModel(OsiCbcSolverInterface *model);
};

class LinearFloatVariable : LinearVariable
{
public:
	void addToModel(OsiCbcSolverInterface *model);
};