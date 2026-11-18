// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// ~TSharedInstanceProvider<TSmoothie<1>_> @ 141cf1220

void __thiscall
TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>::~TSharedInstanceProvider<TSmoothie<1>_>
          (TSharedInstanceProvider<TSmoothie<1>_> *this)

{
  this->_padding_ =
       (longlong)&___7__TSharedInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TSharedInstanceProvider<FBanana> @ 141cf1260

void __thiscall
TTypeContainer<1>::TSharedInstanceProvider<FBanana>::~TSharedInstanceProvider<FBanana>
          (TSharedInstanceProvider<FBanana> *this)

{
  this->_padding_ = (longlong)&___7__TSharedInstanceProvider_UFBanana_____TTypeContainer__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TSharedInstanceProvider<FStrawberry> @ 141cf12a0

void __thiscall
TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>::~TSharedInstanceProvider<FStrawberry>
          (TSharedInstanceProvider<FStrawberry> *this)

{
  this->_padding_ =
       (longlong)&___7__TSharedInstanceProvider_UFStrawberry_____TTypeContainer__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TSharedInstanceProvider<IBerry> @ 141cf12e0

void __thiscall
TTypeContainer<1>::TSharedInstanceProvider<IBerry>::~TSharedInstanceProvider<IBerry>
          (TSharedInstanceProvider<IBerry> *this)

{
  this->_padding_ = (longlong)&___7__TSharedInstanceProvider_UIBerry_____TTypeContainer__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TSharedInstanceProvider<IFruit> @ 141cf1320

void __thiscall
TTypeContainer<1>::TSharedInstanceProvider<IFruit>::~TSharedInstanceProvider<IFruit>
          (TSharedInstanceProvider<IFruit> *this)

{
  this->_padding_ = (longlong)&___7__TSharedInstanceProvider_UIFruit_____TTypeContainer__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// GetInstance @ 141d00560

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>::GetInstance
          (TSharedInstanceProvider<TSmoothie<1>_> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInstance @ 141d00590

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TSharedInstanceProvider<FBanana>::GetInstance
          (TSharedInstanceProvider<FBanana> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInstance @ 141d005c0

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>::GetInstance
          (TSharedInstanceProvider<FStrawberry> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInstance @ 141d005f0

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TSharedInstanceProvider<IBerry>::GetInstance
          (TSharedInstanceProvider<IBerry> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInstance @ 141d00620

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TSharedInstanceProvider<IFruit>::GetInstance
          (TSharedInstanceProvider<IFruit> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

