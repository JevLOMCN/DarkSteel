// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// ~FWaitForFTestsToFinish @ 148c81060

void __thiscall FWaitForFTestsToFinish::~FWaitForFTestsToFinish(FWaitForFTestsToFinish *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148c8108a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 148ca0f20

bool __thiscall FWaitForFTestsToFinish::Update(FWaitForFTestsToFinish *this)

{
  char cVar1;
  IFunctionalTestingModule *pIVar2;
  
  pIVar2 = IFunctionalTestingModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2);
  return cVar1 == '\0';
}

