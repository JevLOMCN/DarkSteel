// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FWaitForMapToLoadCommand @ 14880cfd0

void __thiscall FWaitForMapToLoadCommand::~FWaitForMapToLoadCommand(FWaitForMapToLoadCommand *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014880cffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 148860370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FWaitForMapToLoadCommand::Update(FWaitForMapToLoadCommand *this)

{
  AGameStateBase *pAVar1;
  bool bVar2;
  char cVar3;
  UWorld *this_00;
  
  this_00 = AutomationCommon::GetAnyGameWorld();
  if (this_00 != (UWorld *)0x0) {
    bVar2 = UWorld::AreActorsInitialized(this_00);
    if ((bVar2) &&
       (pAVar1 = (this_00->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
      cVar3 = (**(code **)(pAVar1->_padding_ + 0x778))();
      return cVar3 != '\0';
    }
  }
  return false;
}

