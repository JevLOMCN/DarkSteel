// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FWidgetRunInfo @ 142846dd0

FWidgetRunInfo * __thiscall
FSlateWidgetRun::FWidgetRunInfo::FWidgetRunInfo(FWidgetRunInfo *this,FWidgetRunInfo *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  double dVar3;
  
  (this->Widget).Object = (param_1->Widget).Object;
  pTVar2 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Baseline).Value = (param_1->Baseline).Value;
  (this->Baseline).bIsSet = (param_1->Baseline).bIsSet;
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Baseline).Getter,&(param_1->Baseline).Getter);
  (this->Size).bIsSet = false;
  bVar1 = (param_1->Size).bIsSet;
  (this->Size).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_1->Size).TypedValue.field0_0x0._s_0.Y;
    (this->Size).TypedValue.field0_0x0._s_0.X = (param_1->Size).TypedValue.field0_0x0._s_0.X;
    (this->Size).TypedValue.field0_0x0._s_0.Y = dVar3;
  }
  return this;
}

