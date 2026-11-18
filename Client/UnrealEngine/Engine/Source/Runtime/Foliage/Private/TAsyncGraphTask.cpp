// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// ~TAsyncGraphTask<UProceduralFoliageTile_*> @ 145ed9900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAsyncGraphTask<UProceduralFoliageTile_*>::~TAsyncGraphTask<UProceduralFoliageTile_*>
          (TAsyncGraphTask<UProceduralFoliageTile_*> *this)

{
  TFutureState<UProceduralFoliageTile_*> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<UProceduralFoliageTile_*> *)0x0) && (pTVar1->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar5 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000145ed9967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

