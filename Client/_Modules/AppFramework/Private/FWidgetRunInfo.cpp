// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FWidgetRunInfo @ 14305ccb0

FWidgetRunInfo * __thiscall
FSlateWidgetRun::FWidgetRunInfo::FWidgetRunInfo
          (FWidgetRunInfo *this,TSharedRef<SWidget,1> *param_1,TAttribute<short> *param_2,
          TOptional<UE::Math::TVector2<double>_> *param_3)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  double dVar3;
  
  (this->Widget).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Baseline).Value = param_2->Value;
  (this->Baseline).bIsSet = param_2->bIsSet;
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Baseline).Getter,&param_2->Getter);
  (this->Size).bIsSet = false;
  bVar1 = param_3->bIsSet;
  (this->Size).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_3->TypedValue).field0_0x0._s_0.Y;
    (this->Size).TypedValue.field0_0x0._s_0.X = (param_3->TypedValue).field0_0x0._s_0.X;
    (this->Size).TypedValue.field0_0x0._s_0.Y = dVar3;
  }
  return this;
}

