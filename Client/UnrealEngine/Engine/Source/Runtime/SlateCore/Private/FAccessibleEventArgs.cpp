// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FAccessibleEventArgs @ 1425bc470

FAccessibleEventArgs * __thiscall
FAccessibleEventArgs::FAccessibleEventArgs
          (FAccessibleEventArgs *this,TSharedRef<IAccessibleWidget,1> *param_1,
          EAccessibleEvent param_2,FVariant *param_3,FVariant *param_4,int param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  (this->Widget).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Event = param_2;
  FVariant::FVariant(&this->OldValue,param_3);
  FVariant::FVariant(&this->NewValue,param_4);
  this->UserIndex = param_5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar2 = (param_3->Value).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Value).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

