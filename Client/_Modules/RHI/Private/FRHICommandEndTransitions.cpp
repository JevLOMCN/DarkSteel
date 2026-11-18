// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f7a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandEndTransitions::Execute(FRHICommandEndTransitions *this,FRHICommandListBase *param_1)

{
  FRHITransition **ppFVar1;
  byte bVar2;
  ERHIPipeline EVar3;
  FRHITransition *this_00;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  IRHIComputeContext *pIVar7;
  byte bVar8;
  FRHITransition **ppFVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  pIVar7 = FRHICommandListBase::GetComputeContext(param_1);
  local_28 = *(undefined4 *)&(this->Transitions).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(this->Transitions).DataPtr + 4);
  iStack_20 = (this->Transitions).ArrayNum;
  uStack_1c = *(undefined4 *)&(this->Transitions).field_0xc;
  (**(code **)(pIVar7->_padding_ + 0x50))(pIVar7,&local_28);
  ppFVar9 = (this->Transitions).DataPtr;
  ppFVar1 = ppFVar9 + (this->Transitions).ArrayNum;
  while( true ) {
    if (ppFVar9 == ppFVar1) {
      return;
    }
    EVar3 = param_1->ActivePipelines;
    this_00 = *ppFVar9;
    if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar3 = param_1->ActivePipelines;
    if (((this_00->AllowedDst & EVar3) != EVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(AllowedDst, Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x223,
                           L"Transition is being used on a destination pipeline that it wasn\'t created for."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = EVar3 << 2;
    bVar6 = this_00->State;
    do {
      LOCK();
      bVar2 = this_00->State;
      bVar5 = bVar6 == bVar2;
      if (bVar5) {
        this_00->State = bVar6 & ~bVar8;
        bVar2 = bVar6;
      }
      bVar6 = bVar2;
      UNLOCK();
    } while (!bVar5);
    if (((bVar8 & bVar6) != bVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(PreviousValue & Mask) == Mask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x228,
                           L"RHIEndTransitions has been called twice on this transition for at least one pipeline."
                          ), bVar5)) break;
    if (bVar6 == bVar8) {
      FRHITransition::Cleanup(this_00);
    }
    ppFVar9 = ppFVar9 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

