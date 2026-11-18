// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// TSmoothie<1> @ 141ce30b0

TSmoothie<1> * __thiscall
TSmoothie<1>::TSmoothie<1>
          (TSmoothie<1> *this,TSharedRef<IFruit,1> *param_1,TSharedRef<IBerry,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7__TSmoothie__00__6B_;
  (this->Berry).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Berry).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Fruit).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Fruit).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TSmoothie<1> @ 141cf1360

void __thiscall TSmoothie<1>::~TSmoothie<1>(TSmoothie<1> *this)

{
  this->_padding_ = (longlong)&___7__TSmoothie__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Fruit).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Berry).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7__ISmoothie__00__6B_;
  return;
}

// GetBerry @ 141cfeb30

TSharedRef<IBerry,1> * __thiscall
TSmoothie<1>::GetBerry(TSmoothie<1> *this,TSharedRef<IBerry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Berry).Object;
  pTVar1 = (this->Berry).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFruit @ 141d00030

TSharedRef<IFruit,1> * __thiscall
TSmoothie<1>::GetFruit(TSmoothie<1> *this,TSharedRef<IFruit,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Fruit).Object;
  pTVar1 = (this->Fruit).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

