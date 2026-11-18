// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// ~FTriggerFTests @ 148c81020

void __thiscall FTriggerFTests::~FTriggerFTests(FTriggerFTests *this)

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
                    /* WARNING: Could not recover jumptable at 0x000148c8104a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 148ca0ec0

bool __thiscall FTriggerFTests::Update(FTriggerFTests *this)

{
  char cVar1;
  IFunctionalTestingModule *pIVar2;
  
  pIVar2 = IFunctionalTestingModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2);
    if (cVar1 != '\0') {
      (**(code **)((longlong)*pIVar2 + 0x80))();
      return true;
    }
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,0,0);
  }
  return true;
}

