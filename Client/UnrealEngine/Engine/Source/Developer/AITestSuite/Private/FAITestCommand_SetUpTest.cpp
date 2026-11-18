// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 2

// ~FAITestCommand_SetUpTest @ 14704b710

void __thiscall FAITestCommand_SetUpTest::~FAITestCommand_SetUpTest(FAITestCommand_SetUpTest *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014704b73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 14705a400

bool __thiscall FAITestCommand_SetUpTest::Update(FAITestCommand_SetUpTest *this)

{
  char cVar1;
  
  if (this->AITest != (FAITestBase *)0x0) {
    cVar1 = (**(code **)(this->AITest->_padding_ + 0x18))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

