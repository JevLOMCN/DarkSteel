// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 2

// ~FAITestCommand_TearDownTest @ 14704b750

void __thiscall
FAITestCommand_TearDownTest::~FAITestCommand_TearDownTest(FAITestCommand_TearDownTest *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014704b77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 14705a430

bool __thiscall FAITestCommand_TearDownTest::Update(FAITestCommand_TearDownTest *this)

{
  FAITestBase *pFVar1;
  
  if (this->AITest != (FAITestBase *)0x0) {
    (**(code **)(this->AITest->_padding_ + 0x38))();
    pFVar1 = this->AITest;
    if (pFVar1 != (FAITestBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    this->AITest = (FAITestBase *)0x0;
  }
  return true;
}

