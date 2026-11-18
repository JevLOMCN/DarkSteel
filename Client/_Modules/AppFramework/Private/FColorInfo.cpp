// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FColorInfo @ 14301a9d0

FColorInfo * __thiscall FColorInfo::FColorInfo(FColorInfo *this,TSharedPtr<FLinearColor,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLinearColor *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FText *pFVar4;
  FText local_18;
  
  (this->Color).Object = (FLinearColor *)0x0;
  (this->Color).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&this->Label);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Color).SharedReferenceCount.ReferenceController;
  (this->Color).Object = pFVar2;
  (this->Color).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar4 = FText::FText(&local_18);
  FText::operator=(&this->Label,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

