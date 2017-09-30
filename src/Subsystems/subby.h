#ifndef subby_H
#define subby_H

#include <Commands/Subsystem.h>

class subby : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	subby();
	void InitDefaultCommand();
};

#endif  // subby_H
