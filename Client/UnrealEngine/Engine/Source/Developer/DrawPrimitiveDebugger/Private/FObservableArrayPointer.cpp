// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 5

// FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> @ 146d01bf0

FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
          (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00___ItemsSource_Slate_UE__6B_
  ;
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                      *)&stack0x00000008,(pmf_daaed41d)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> @ 146d03aa0

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
~FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
          (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146d03b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetItems @ 146d1e780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetItems
          (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          TArrayView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)(pTVar2->Array).AllocatorInstance.Data
  ;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_const_,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 146d22d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::HandleArrayChanged
          (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *param_1
          )

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
        goto LAB_146d22d80;
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
LAB_146d22d80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 146d24730

bool __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::IsSame
          (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          void *param_1)

{
  return param_1 == &this->ItemsSource;
}

