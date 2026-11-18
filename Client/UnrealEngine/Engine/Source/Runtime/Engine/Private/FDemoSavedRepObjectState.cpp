// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDemoSavedRepObjectState @ 147abb5c0

FDemoSavedRepObjectState * __thiscall
FDemoSavedRepObjectState::FDemoSavedRepObjectState
          (FDemoSavedRepObjectState *this,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_1,
          TSharedRef<FRepLayout_const_,1> *param_2,FRepStateStaticBuffer *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Object).WeakPtr = param_1->WeakPtr;
  (this->RepLayout).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->RepLayout).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PropertyData).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).Buffer.AllocatorInstance.Data = (param_3->Buffer).AllocatorInstance.Data;
  (param_3->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).Buffer.ArrayNum = (param_3->Buffer).ArrayNum;
  (this->PropertyData).Buffer.ArrayMax = (param_3->Buffer).ArrayMax;
  (param_3->Buffer).ArrayNum = 0;
  (param_3->Buffer).ArrayMax = 0;
  (this->PropertyData).RepLayout.Object = (param_3->RepLayout).Object;
  pTVar1 = (param_3->RepLayout).SharedReferenceCount.ReferenceController;
  (this->PropertyData).RepLayout.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FDemoSavedRepObjectState @ 147abef40

void __thiscall FDemoSavedRepObjectState::~FDemoSavedRepObjectState(FDemoSavedRepObjectState *this)

{
  FRepStateStaticBuffer::~FRepStateStaticBuffer(&this->PropertyData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RepLayout).SharedReferenceCount.ReferenceController);
  return;
}

