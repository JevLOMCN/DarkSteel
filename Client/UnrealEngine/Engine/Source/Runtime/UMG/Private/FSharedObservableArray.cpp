// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// FSharedObservableArray<UObject_*> @ 146981830

FSharedObservableArray<UObject_*> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::FSharedObservableArray<UObject_*>
          (FSharedObservableArray<UObject_*> *this,TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ = (longlong)&___7__FSharedObservableArray_PEAVUObject___ItemsSource_Slate_UE__6B_;
  (this->ItemsSource).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ItemsSource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<UObject_*> *)&stack0x00000008,(pmf_b6cf61f7)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<FName> @ 1469818e0

FSharedObservableArray<FName> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<FName>::FSharedObservableArray<FName>
          (FSharedObservableArray<FName> *this,TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<FName>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ = (longlong)&___7__FSharedObservableArray_VFName___ItemsSource_Slate_UE__6B_;
  (this->ItemsSource).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ItemsSource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<FName>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<FName> *)&stack0x00000008,(pmf_87de3803)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSharedObservableArray<UObject_*> @ 14698f420

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::~FSharedObservableArray<UObject_*>
          (FSharedObservableArray<UObject_*> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ = (longlong)&___7__FSharedObservableArray_PEAVUObject___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  return;
}

// ~FSharedObservableArray<FName> @ 14698f480

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<FName>::~FSharedObservableArray<FName>
          (FSharedObservableArray<FName> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ = (longlong)&___7__FSharedObservableArray_VFName___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  return;
}

// GetItems @ 1469d1a90

TArrayView<UObject_*_const,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::GetItems
          (FSharedObservableArray<UObject_*> *this,
          TArrayView<UObject_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<UObject_*> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UObject_*_const,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr = (UObject **)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UObject_*_const,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 1469d1af0

TArrayView<FName_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<FName>::GetItems
          (FSharedObservableArray<FName> *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<FName> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr = (FName *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 1469dac70

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::HandleArrayChanged
          (FSharedObservableArray<UObject_*> *this,TObservableArrayChangedArgs<UObject_*> *param_1)

{
  STableViewBase *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469daca0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ListViewOwner).Object;
    if (pSVar1 != (STableViewBase *)0x0) {
      (**(code **)(*(longlong *)pSVar1 + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1469daca0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 1469dace0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<FName>::HandleArrayChanged
          (FSharedObservableArray<FName> *this,TObservableArrayChangedArgs<FName> *param_1)

{
  STableViewBase *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469dad10;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ListViewOwner).Object;
    if (pSVar1 != (STableViewBase *)0x0) {
      (**(code **)(*(longlong *)pSVar1 + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1469dad10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 1469e35f0

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::IsSame
          (FSharedObservableArray<UObject_*> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 1469e3600

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<FName>::IsSame
          (FSharedObservableArray<FName> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

