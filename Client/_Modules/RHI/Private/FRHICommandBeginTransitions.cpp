// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9ec00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandBeginTransitions::Execute(FRHICommandBeginTransitions *this,FRHICommandListBase *param_1)

{
  FRHITransition **ppFVar1;
  ERHIPipeline EVar2;
  ERHIPipeline EVar3;
  FRHITransition *this_00;
  code *pcVar4;
  bool bVar5;
  ERHIPipeline EVar6;
  IRHIComputeContext *pIVar7;
  FRHITransition **ppFVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  pIVar7 = FRHICommandListBase::GetComputeContext(param_1);
  local_28 = *(undefined4 *)&(this->Transitions).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(this->Transitions).DataPtr + 4);
  iStack_20 = (this->Transitions).ArrayNum;
  uStack_1c = *(undefined4 *)&(this->Transitions).field_0xc;
  (**(code **)(pIVar7->_padding_ + 0x48))(pIVar7,&local_28);
  ppFVar8 = (this->Transitions).DataPtr;
  ppFVar1 = ppFVar8 + (this->Transitions).ArrayNum;
  while( true ) {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    EVar3 = param_1->ActivePipelines;
    this_00 = *ppFVar8;
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
    if (((this_00->AllowedSrc & EVar3) != EVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(AllowedSrc, Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x213,
                           L"Transition is being used on a source pipeline that it wasn\'t created for."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar6 = this_00->State;
    do {
      LOCK();
      EVar2 = this_00->State;
      bVar5 = EVar6 == EVar2;
      if (bVar5) {
        this_00->State = EVar6 & ~EVar3;
        EVar2 = EVar6;
      }
      EVar6 = EVar2;
      UNLOCK();
    } while (!bVar5);
    if (((EVar6 & EVar3) != EVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(PreviousValue & Mask) == Mask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x218,
                           L"RHIBeginTransitions has been called twice on this transition for at least one pipeline."
                          ), bVar5)) break;
    if (EVar6 == EVar3) {
      FRHITransition::Cleanup(this_00);
    }
    ppFVar8 = ppFVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

