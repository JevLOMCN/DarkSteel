// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// ~FTriggerFTest @ 148c80fc0

void __thiscall FTriggerFTest::~FTriggerFTest(FTriggerFTest *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FTriggerFTest__6B_;
  pFVar3 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148c81010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Update @ 148ca0e30

bool __thiscall FTriggerFTest::Update(FTriggerFTest *this)

{
  char cVar1;
  IFunctionalTestingModule *pIVar2;
  
  pIVar2 = IFunctionalTestingModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2);
    if (cVar1 != '\0') {
      pIVar2 = IFunctionalTestingModule::Get();
      (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,0);
      return true;
    }
    pIVar2 = IFunctionalTestingModule::Get();
    (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,&this->TestName,0,0);
  }
  return true;
}

