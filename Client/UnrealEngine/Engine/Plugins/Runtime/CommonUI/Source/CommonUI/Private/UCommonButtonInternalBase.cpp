// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 26

// StaticClass @ 14a7842a0

UClass * __cdecl UCommonButtonInternalBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonInternalBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonInternalBase",
               &Z_Registration_Info_UClass_UCommonButtonInternalBase.InnerSingleton,
               StaticRegisterNativesUCommonButtonInternalBase,0x730,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonButtonInternalBase>,
               InternalVTableHelperCtorCaller<UCommonButtonInternalBase>,local_res8,
               UButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonInternalBase.InnerSingleton;
}

// UCommonButtonInternalBase @ 14a7ad120

UCommonButtonInternalBase * __thiscall
UCommonButtonInternalBase::UCommonButtonInternalBase
          (UCommonButtonInternalBase *this,FVTableHelper *param_1)

{
  UButton::UButton((UButton *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->HandleDoubleClicked = 0;
  *(undefined8 *)&(this->HandleDoubleClicked).field_0x8 = 0;
  *(undefined4 *)&(this->HandleDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClicked = 0;
  *(undefined8 *)&(this->OnDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnDoubleClicked).field_0x10 = 0;
  (this->MyBox).Object = (SBox *)0x0;
  (this->MyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyCommonButton).Object = (SCommonButton *)0x0;
  (this->MyCommonButton).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCommonButtonInternalBase @ 14a7ad1a0

UCommonButtonInternalBase * __thiscall
UCommonButtonInternalBase::UCommonButtonInternalBase
          (UCommonButtonInternalBase *this,FObjectInitializer *param_1)

{
  ISlateStyle *pIVar1;
  FButtonStyle *this_00;
  FName *pFVar2;
  FButtonStyle *pFVar3;
  FName local_res8;
  
  UButton::UButton((UButton *)this,param_1);
  pFVar3 = (FButtonStyle *)0x0;
  this->bButtonEnabled = true;
  this->bInteractionEnabled = true;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->HandleDoubleClicked = 0;
  *(undefined8 *)&(this->HandleDoubleClicked).field_0x8 = 0;
  *(undefined4 *)&(this->HandleDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClicked = 0;
  *(undefined8 *)&(this->OnDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnDoubleClicked).field_0x10 = 0;
  (this->MyBox).Object = (SBox *)0x0;
  (this->MyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyCommonButton).Object = (SCommonButton *)0x0;
  (this->MyCommonButton).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (bUseTransparentButtonStyleAsDefault != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        this_00 = ::operator_new(0x390);
        pIVar1 = FUMGCoreStyle::Instance.Object;
        if (this_00 != (FButtonStyle *)0x0) {
          pFVar2 = ::FName::FName(&local_res8,"NoBorder");
          pFVar3 = (FButtonStyle *)
                   (**(code **)((longlong)*pIVar1 + 0xa0))
                             (pIVar1,FButtonStyle::TypeName,*pFVar2,0,1);
          if (pFVar3 == (FButtonStyle *)0x0) {
            pFVar3 = FButtonStyle::GetDefault();
          }
          pFVar3 = FButtonStyle::FButtonStyle(this_00,pFVar3);
        }
        TransparentButtonStyle = pFVar3;
        _Init_thread_footer(&::_TSS0);
      }
    }
    UButton::SetStyle((UButton *)this,TransparentButtonStyle);
  }
  return this;
}

// ~UCommonButtonInternalBase @ 14a7b2960

void __thiscall
UCommonButtonInternalBase::~UCommonButtonInternalBase(UCommonButtonInternalBase *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyCommonButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBox).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnDoubleClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HandleDoubleClicked);
  pvVar1 = *(void **)&(this->HandleDoubleClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HandleDoubleClicked);
  UButton::~UButton((UButton *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e5230

UClass * __cdecl UCommonButtonInternalBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonInternalBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonInternalBase",
               &Z_Registration_Info_UClass_UCommonButtonInternalBase.InnerSingleton,
               StaticRegisterNativesUCommonButtonInternalBase,0x730,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonButtonInternalBase>,
               InternalVTableHelperCtorCaller<UCommonButtonInternalBase>,local_res8,
               UButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonInternalBase.InnerSingleton;
}

// IsHovered @ 14a7f5b10

bool __thiscall UCommonButtonInternalBase::IsHovered(UCommonButtonInternalBase *this)

{
  SCommonButton *pSVar1;
  
  pSVar1 = (this->MyCommonButton).Object;
  if (pSVar1 != (SCommonButton *)0x0) {
    return (bool)*(undefined1 *)((longlong)&pSVar1->_padding_ + 3);
  }
  return false;
}

// IsPressed @ 14a7f6650

bool __thiscall UCommonButtonInternalBase::IsPressed(UCommonButtonInternalBase *this)

{
  SCommonButton *pSVar1;
  
  pSVar1 = (this->MyCommonButton).Object;
  if ((pSVar1 != (SCommonButton *)0x0) &&
     (((pSVar1->_padding_ & 0x200000000) != 0 ||
      (*(char *)((longlong)&pSVar1->_padding_ + 4) != '\0')))) {
    return true;
  }
  return false;
}

// RebuildWidget @ 14a807c70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonButtonInternalBase::RebuildWidget
          (UCommonButtonInternalBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SCommonButton,1> *pTVar2;
  SCommonButton *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SBox *pSVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  Type TVar13;
  Type TVar14;
  int iVar15;
  FArguments *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FButtonStyle *pFVar19;
  TSharedRef<SWidget,1> *pTVar20;
  FArguments *pFVar21;
  TSharedRef<SCommonButton,1> *pTVar22;
  TSharedRef<SBox,1> *pTVar23;
  UButtonSlot *this_00;
  UClass *pUVar24;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  longlong lStack_c50;
  TSharedRef<SBox,1> local_c48;
  FLLMScope local_c38 [2];
  undefined1 local_c30 [8];
  FDelegateAllocation local_c28;
  undefined1 local_c18 [8];
  FDelegateAllocation local_c10;
  undefined1 local_c00 [8];
  FDelegateAllocation local_bf8;
  undefined1 local_be8 [8];
  FDelegateAllocation local_be0;
  undefined1 local_bd0 [8];
  FDelegateAllocation local_bc8;
  undefined1 local_bb8 [8];
  FDelegateAllocation local_bb0;
  undefined1 local_ba0 [8];
  FDelegateAllocation local_b98;
  undefined1 local_b88 [8];
  FDelegateAllocation local_b80;
  undefined1 local_b70 [8];
  FDelegateAllocation local_b68;
  undefined1 local_b58 [8];
  FDelegateAllocation local_b50;
  undefined1 local_b40 [8];
  FDelegateAllocation local_b38;
  float local_b28;
  undefined1 local_b24;
  undefined1 local_b20 [8];
  ForAnyElementType FStack_b18;
  ulonglong local_b10;
  float local_b08;
  undefined1 local_b04;
  undefined1 local_b00 [8];
  ForAnyElementType FStack_af8;
  ulonglong local_af0;
  float local_ae8;
  undefined1 local_ae4;
  undefined1 local_ae0 [8];
  ForAnyElementType FStack_ad8;
  ulonglong local_ad0;
  float local_ac8;
  undefined1 local_ac4;
  undefined1 local_ac0 [8];
  ForAnyElementType FStack_ab8;
  ulonglong local_ab0;
  SCommonButton *local_aa8;
  FSharedReferencer<1> local_aa0;
  TSlateDecl<SCommonButton,RequiredArgs::T0RequiredArgs> local_a98;
  undefined8 local_a80;
  FSharedReferencer<1> local_a78;
  undefined8 local_a70;
  FSharedReferencer<1> local_a68;
  UCommonButtonInternalBase *local_a60;
  UCommonButtonInternalBase *local_a58;
  UCommonButtonInternalBase *local_a50;
  UCommonButtonInternalBase *local_a48;
  UCommonButtonInternalBase *local_a40;
  UCommonButtonInternalBase *local_a38;
  UCommonButtonInternalBase *local_a30;
  UCommonButtonInternalBase *local_a28;
  UCommonButtonInternalBase *local_a20;
  UCommonButtonInternalBase *local_a18;
  FName local_a10;
  FMemScope local_a08;
  FName local_a00;
  FMemScope local_9f8;
  UCommonButtonInternalBase *local_9f0;
  TSharedRef<SButton,1> local_9e8;
  FDestructionSentinel local_9d8;
  FDestructionSentinel local_9c0;
  FDestructionSentinel local_9a8;
  FDestructionSentinel local_990;
  FDestructionSentinel local_978;
  FDestructionSentinel local_960;
  FDestructionSentinel local_948;
  FDestructionSentinel local_930;
  FDestructionSentinel local_918;
  FDestructionSentinel local_900;
  FDestructionSentinel local_8e8;
  FDestructionSentinel local_8d0;
  FDestructionSentinel local_8b8;
  FDestructionSentinel local_8a0;
  FDestructionSentinel local_888;
  FDestructionSentinel local_870;
  FDelegateAllocation *local_858;
  FDestructionSentinel local_850;
  FDelegateAllocation *local_838;
  FDestructionSentinel local_830;
  FDelegateAllocation *local_818;
  FDestructionSentinel local_810;
  FDelegateAllocation *local_7f8;
  FDestructionSentinel local_7f0;
  FDelegateAllocation *local_7d8;
  FDestructionSentinel local_7d0;
  FDelegateAllocation *local_7b8;
  FDestructionSentinel local_7b0;
  FDelegateAllocation *local_798;
  FDestructionSentinel local_790;
  FDelegateAllocation *local_778;
  FDestructionSentinel local_770;
  FDelegateAllocation *local_758;
  FDestructionSentinel local_750;
  FDelegateAllocation *local_738;
  FDestructionSentinel local_730;
  FDelegateAllocation *local_718;
  TSharedRef<SCommonButton,1> local_710;
  TSharedRef<SCommonButton,1> local_700;
  TSharedRef<SBox,1> local_6f0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6e0;
  FArguments local_6c8;
  FArguments local_390;
  
  local_res10 = __return_storage_ptr__;
  pFVar16 = SCommonButton::FArguments::FArguments(&local_6c8);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_c18 = (undefined1  [8])0x0;
  local_c10.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c10.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c18,
             (FWriteAccessScope *)&local_870);
  local_858 = &local_c10;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_c10);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a60 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a60);
    puVar17[4] = _vcall__816__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_870.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_870.Accessor,&local_870);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnClicked,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c18);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_c30 = (undefined1  [8])0x0;
  local_c28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c28.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c30,
             (FWriteAccessScope *)&local_850);
  local_838 = &local_c28;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_c28);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a58 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a58);
    puVar17[4] = _vcall__840__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850.Accessor,&local_850);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnDoubleClicked,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c30);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_b40 = (undefined1  [8])0x0;
  local_b38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b38.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b40,
             (FWriteAccessScope *)&local_830);
  local_818 = &local_b38;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_b38);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a50 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a50);
    puVar17[4] = _vcall__824__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_830.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_830.Accessor,&local_830);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnPressed,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b40);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_b58 = (undefined1  [8])0x0;
  local_b50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b58,
             (FWriteAccessScope *)&local_810);
  local_7f8 = &local_b50;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_b50);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a48 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a48);
    puVar17[4] = _vcall__832__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_810.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnReleased,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b58);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_b70 = (undefined1  [8])0x0;
  local_b68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b70,
             (FWriteAccessScope *)&local_7f0);
  local_7d8 = &local_b68;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_b68);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a40 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a40);
    puVar17[4] = _vcall__848__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_7f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f0.Accessor,&local_7f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnSlateButtonDragDetected,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b70);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_b88 = (undefined1  [8])0x0;
  local_b80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b88,
             (FWriteAccessScope *)&local_7d0);
  local_7b8 = &local_b80;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_b80);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a38 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a38);
    puVar17[4] = _vcall__856__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_7d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d0.Accessor,&local_7d0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnSlateButtonDragEnter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b88);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_ba0 = (undefined1  [8])0x0;
  local_b98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b98.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ba0,
             (FWriteAccessScope *)&local_7b0);
  local_798 = &local_b98;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_b98);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a30 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a30);
    puVar17[4] = _vcall__864__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_7b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnSlateButtonDragLeave,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ba0);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_bb8 = (undefined1  [8])0x0;
  local_bb0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_bb0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bb8,
             (FWriteAccessScope *)&local_790);
  local_778 = &local_bb0;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_bb0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_9f0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_9f0);
    puVar17[4] = _vcall__872__flat______;
    puVar17[5] = lStack_c50;
  }
  if (local_790.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnSlateButtonDragOver,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bb8);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_bd0 = (undefined1  [8])0x0;
  local_bc8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_bc8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bd0,
             (FWriteAccessScope *)&local_770);
  local_758 = &local_bc8;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_bc8);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a28 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonButtonInternalBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a28);
    puVar17[4] = UButton::SlateHandleDrop;
    puVar17[5] = lStack_c50;
  }
  if (local_770.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_770.Accessor,&local_770);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnSlateButtonDrop,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bd0);
  pFVar19 = UButton::GetStyle((UButton *)this);
  pFVar16->_ButtonStyle = pFVar19;
  TVar13 = UButton::GetClickMethod((UButton *)this);
  pFVar16->_ClickMethod = TVar13;
  TVar14 = UButton::GetTouchMethod((UButton *)this);
  pFVar16->_TouchMethod = TVar14;
  bVar10 = UButton::GetIsFocusable((UButton *)this);
  pFVar16->_IsFocusable = bVar10;
  pFVar16->_IsButtonEnabled = this->bButtonEnabled;
  pFVar16->_IsInteractionEnabled = this->bInteractionEnabled;
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_be8 = (undefined1  [8])0x0;
  local_be0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_be0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_be8,
             (FWriteAccessScope *)&local_750);
  local_738 = &local_be0;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_be0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a20);
    puVar17[4] = UButton::SlateHandleOnReceivedFocus;
    puVar17[5] = lStack_c50;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnReceivedFocus,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8);
  lStack_c50 = (ulonglong)local_c48.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_c00 = (undefined1  [8])0x0;
  local_bf8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_bf8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c00,
             (FWriteAccessScope *)&local_730);
  local_718 = &local_bf8;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_bf8);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_a18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_a18);
    puVar17[4] = UButton::SlateHandleOnLostFocus;
    puVar17[5] = lStack_c50;
  }
  if (local_730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnLostFocus,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c00);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a08,&local_a10,true);
  TSlateDecl<SCommonButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonButton,RequiredArgs::T0RequiredArgs>
            (&local_a98,"SCommonButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonButtonBase.cpp"
             ,0x113,local_res8);
  FMemScope::~FMemScope(&local_a08);
  FLLMScope::~FLLMScope(local_res20);
  pSVar3 = local_a98._Widget.Object;
  if ((local_a98._Widget.Object == (SCommonButton *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar6)();
    return pTVar20;
  }
  SWidget::SWidgetConstruct((SWidget *)local_a98._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SCommonButton::Construct(local_a98._Widget.Object,pFVar16);
  if ((local_a98._Widget.Object == (SCommonButton *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar6)();
    return pTVar20;
  }
  if (((local_a98._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_a98._Widget.Object)->_padding_ + 0x228))(local_a98._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_14a808832;
  }
  else {
LAB_14a808832:
    bVar12 = 0x20;
  }
  FVar9.ReferenceController = local_a98._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_a98._Widget.Object)->_padding_ =
       (byte)(local_a98._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a98._Widget.Object)->_padding_ =
       (byte)(local_a98._Widget.Object)->_padding_ | bVar12;
  pbVar1 = (byte *)((longlong)&(local_a98._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_a98._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a98._Widget.Object = (SCommonButton *)0x0;
  if ((pSVar3 == (SCommonButton *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar6)();
    return pTVar20;
  }
  local_aa8 = pSVar3;
  local_aa0.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->MyCommonButton;
  if (pTVar2 != (TSharedPtr<SCommonButton,1> *)&local_aa8) {
    pTVar2->Object = pSVar3;
    local_aa8 = (SCommonButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCommonButton).SharedReferenceCount,&local_aa0);
  }
  FVar8.ReferenceController = local_aa0.ReferenceController;
  local_a78.ReferenceController = (this->MyCommonButton).SharedReferenceCount.ReferenceController;
  pSVar3 = pTVar2->Object;
  if (local_a78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a78.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a78.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&this->field_0x6a8 != &local_a80) {
    *(SCommonButton **)&this->field_0x6a8 = pSVar3;
    local_a80 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x6b0,&local_a78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a78.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c00,
             (FWriteAccessScope *)&local_888);
  if ((local_bf8.DelegateSize != 0) &&
     (local_bf8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_bf8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_bf8,0,0,0x10);
    local_bf8.DelegateSize = 0;
  }
  if (local_888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_888.Accessor,&local_888);
  }
  if (local_bf8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_bf8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_be8,
             (FWriteAccessScope *)&local_9d8);
  if ((local_be0.DelegateSize != 0) &&
     (local_be0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_be0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_be0,0,0,0x10);
    local_be0.DelegateSize = 0;
  }
  if (local_9d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9d8.Accessor,&local_9d8);
  }
  if (local_be0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_be0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_be8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bd0,
             (FWriteAccessScope *)&local_9c0);
  if ((local_bc8.DelegateSize != 0) &&
     (local_bc8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_bc8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_bc8,0,0,0x10);
    local_bc8.DelegateSize = 0;
  }
  if (local_9c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9c0.Accessor,&local_9c0);
  }
  if (local_bc8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_bc8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_bd0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bb8,
             (FWriteAccessScope *)&local_9a8);
  if ((local_bb0.DelegateSize != 0) &&
     (local_bb0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_bb0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_bb0,0,0,0x10);
    local_bb0.DelegateSize = 0;
  }
  if (local_9a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a8.Accessor,&local_9a8);
  }
  if (local_bb0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_bb0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_bb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ba0,
             (FWriteAccessScope *)&local_990);
  if ((local_b98.DelegateSize != 0) &&
     (local_b98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b98,0,0,0x10);
    local_b98.DelegateSize = 0;
  }
  if (local_990.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_990.Accessor,&local_990);
  }
  if (local_b98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b98.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ba0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b88,
             (FWriteAccessScope *)&local_978);
  if ((local_b80.DelegateSize != 0) &&
     (local_b80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b80,0,0,0x10);
    local_b80.DelegateSize = 0;
  }
  if (local_978.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_978.Accessor,&local_978);
  }
  if (local_b80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b70,
             (FWriteAccessScope *)&local_960);
  if ((local_b68.DelegateSize != 0) &&
     (local_b68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b68,0,0,0x10);
    local_b68.DelegateSize = 0;
  }
  if (local_960.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_960.Accessor,&local_960);
  }
  if (local_b68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b58,
             (FWriteAccessScope *)&local_948);
  if ((local_b50.DelegateSize != 0) &&
     (local_b50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b50,0,0,0x10);
    local_b50.DelegateSize = 0;
  }
  if (local_948.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_948.Accessor,&local_948);
  }
  if (local_b50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b40,
             (FWriteAccessScope *)&local_930);
  if ((local_b38.DelegateSize != 0) &&
     (local_b38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b38,0,0,0x10);
    local_b38.DelegateSize = 0;
  }
  if (local_930.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_930.Accessor,&local_930);
  }
  if (local_b38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c30,
             (FWriteAccessScope *)&local_918);
  if ((local_c28.DelegateSize != 0) &&
     (local_c28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c28.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c28,0,0,0x10);
    local_c28.DelegateSize = 0;
  }
  if (local_918.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
  }
  if (local_c28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c28.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c18,
             (FWriteAccessScope *)&local_900);
  if ((local_c10.DelegateSize != 0) &&
     (local_c10.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c10.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c10,0,0,0x10);
    local_c10.DelegateSize = 0;
  }
  if (local_900.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_900.Accessor,&local_900);
  }
  if (local_c10.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c10.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c18);
  SCommonButton::FArguments::~FArguments(&local_6c8);
  pFVar21 = SBox::FArguments::FArguments(&local_390);
  local_ac4 = 1;
  local_ac8 = (float)this->MinWidth;
  local_ab0 = 0;
  local_ac0 = (undefined1  [8])0x0;
  FStack_ab8.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_MinDesiredWidth).Value.Size = local_ac8;
  (pFVar21->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ac0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ac0,
             (FWriteAccessScope *)&local_8e8);
  if (((int)local_ab0 != 0) && (FStack_ab8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ab8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ab8,0,0,0x10);
    local_ab0 = local_ab0 & 0xffffffff00000000;
  }
  if (local_8e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8e8.Accessor,&local_8e8);
  }
  if (FStack_ab8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ab8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ac0);
  local_ae4 = 1;
  local_ae8 = (float)this->MinHeight;
  local_ad0 = 0;
  local_ae0 = (undefined1  [8])0x0;
  FStack_ad8.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_MinDesiredHeight).Value.Size = local_ae8;
  (pFVar21->_MinDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_MinDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ae0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ae0,
             (FWriteAccessScope *)&local_8d0);
  if (((int)local_ad0 != 0) && (FStack_ad8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ad8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ad8,0,0,0x10);
    local_ad0 = local_ad0 & 0xffffffff00000000;
  }
  if (local_8d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8d0.Accessor,&local_8d0);
  }
  if (FStack_ad8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ad8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ae0);
  local_b08 = FOptionalSize::Unspecified;
  if (0 < this->MaxWidth) {
    local_b08 = (float)this->MaxWidth;
  }
  local_b04 = 1;
  local_b00 = (undefined1  [8])0x0;
  FStack_af8.Data = (FScriptContainerElement *)0x0;
  local_af0 = 0;
  (pFVar21->_MaxDesiredWidth).Value.Size = local_b08;
  (pFVar21->_MaxDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_MaxDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b00,
             (FWriteAccessScope *)&local_8b8);
  if (((int)local_af0 != 0) && (FStack_af8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_af8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_af8,0,0,0x10);
    local_af0 = local_af0 & 0xffffffff00000000;
  }
  if (local_8b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8b8.Accessor,&local_8b8);
  }
  if (FStack_af8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_af8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b00);
  local_b28 = FOptionalSize::Unspecified;
  if (0 < this->MaxHeight) {
    local_b28 = (float)this->MaxHeight;
  }
  local_b24 = 1;
  local_b20 = (undefined1  [8])0x0;
  FStack_b18.Data = (FScriptContainerElement *)0x0;
  local_b10 = 0;
  (pFVar21->_MaxDesiredHeight).Value.Size = local_b28;
  (pFVar21->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b20,
             (FWriteAccessScope *)&local_8a0);
  if (((int)local_b10 != 0) && (FStack_b18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b18,0,0,0x10);
    local_b10 = local_b10 & 0xffffffff00000000;
  }
  if (local_8a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8a0.Accessor,&local_8a0);
  }
  if (FStack_b18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b20);
  pFVar21->_HAlign = HAlign_Fill;
  pFVar21->_VAlign = VAlign_Fill;
  pTVar22 = TSharedPtr<SCommonButton,1>::ToSharedRef(&this->MyCommonButton,&local_700);
  pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar22->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar21->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(local_c38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9f8,&local_a00,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_6e0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonButtonBase.cpp"
             ,0x126,local_res18);
  FMemScope::~FMemScope(&local_9f8);
  FLLMScope::~FLLMScope(local_c38);
  pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6e0,&local_6f0,pFVar21);
  local_a68.ReferenceController = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (local_a68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyBox != (TSharedPtr<SBox,1> *)&local_a70) {
    (this->MyBox).Object = pSVar5;
    local_a70 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBox).SharedReferenceCount,&local_a68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_390);
  iVar15 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar15 < 1) goto LAB_14a80941a;
  this_00 = (UButtonSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (this_00 == (UButtonSlot *)0x0) {
LAB_14a8093c4:
    this_00 = (UButtonSlot *)0x0;
  }
  else {
    pUVar24 = Z_Construct_UClass_UButtonSlot_NoRegister();
    iVar15 = (int)pUVar24->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a8093c4;
  }
  pTVar22 = TSharedPtr<SCommonButton,1>::ToSharedRef(&this->MyCommonButton,&local_710);
  local_9e8.Object = (SButton *)pTVar22->Object;
  local_9e8.SharedReferenceCount.ReferenceController =
       (pTVar22->SharedReferenceCount).ReferenceController;
  if (local_9e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UButtonSlot::BuildSlot(this_00,&local_9e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_710.SharedReferenceCount.ReferenceController);
LAB_14a80941a:
  pTVar23 = TSharedPtr<SBox,1>::ToSharedRef(&this->MyBox,&local_c48);
  pTVar20 = local_res10;
  local_res10->Object = (SWidget *)pTVar23->Object;
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_c48.SharedReferenceCount.ReferenceController._4_4_,
                      local_c48.SharedReferenceCount.ReferenceController._0_4_));
  return pTVar20;
}

// ReleaseSlateResources @ 14a811db0

void __thiscall
UCommonButtonInternalBase::ReleaseSlateResources(UCommonButtonInternalBase *this,bool param_1)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UButton::ReleaseSlateResources((UButton *)this,param_1);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyCommonButton != (TSharedPtr<SCommonButton,1> *)&local_28) {
    (this->MyCommonButton).Object = (SCommonButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCommonButton).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyBox != (TSharedPtr<SBox,1> *)&local_18) {
    (this->MyBox).Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetButtonEnabled @ 14a8174e0

void __thiscall
UCommonButtonInternalBase::SetButtonEnabled(UCommonButtonInternalBase *this,bool param_1)

{
  SCommonButton *pSVar1;
  
  pSVar1 = (this->MyCommonButton).Object;
  this->bButtonEnabled = param_1;
  if (pSVar1 != (SCommonButton *)0x0) {
    pSVar1->bIsButtonEnabled = param_1;
  }
  return;
}

// SetButtonFocusable @ 14a817500

void __thiscall
UCommonButtonInternalBase::SetButtonFocusable(UCommonButtonInternalBase *this,bool param_1)

{
  byte *pbVar1;
  SCommonButton *pSVar2;
  
  UButton::InitIsFocusable((UButton *)this,param_1);
  pSVar2 = (this->MyCommonButton).Object;
  if (pSVar2 != (SCommonButton *)0x0) {
    pbVar1 = (byte *)((longlong)&pSVar2->_padding_ + 4);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&pSVar2->_padding_ + 4);
    *pbVar1 = *pbVar1 | param_1;
  }
  return;
}

// SetInteractionEnabled @ 14a818dc0

void __thiscall
UCommonButtonInternalBase::SetInteractionEnabled(UCommonButtonInternalBase *this,bool param_1)

{
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *this_00;
  byte *pbVar1;
  SCommonButton *this_01;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (this->bInteractionEnabled != param_1) {
    this_01 = (this->MyCommonButton).Object;
    this->bInteractionEnabled = param_1;
    if ((this_01 != (SCommonButton *)0x0) && (this_01->bIsInteractionEnabled != param_1)) {
      this_00 = (TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                 *)((longlong)&this_01->_padding_ + 3);
      this_01->bIsInteractionEnabled = param_1;
      if ((this_01->bHovered == false) || (!param_1)) {
        local_30[0] = false;
      }
      else {
        local_30[0] = true;
      }
      if (this_00->Value != local_30[0]) {
        local_30[1] = true;
        pbVar1 = (byte *)((longlong)&this_01->_padding_ + 1);
        *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this_01->_padding_ + 1) ^ 8) & 8;
        local_18 = 0;
        local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_20.Data = (FScriptContainerElement *)0x0;
        SlateAttributePrivate::
        TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        ::Assign(this_00,(SWidget *)this_01,(TAttribute<bool> *)local_30,None);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_28,(FWriteAccessScope *)&local_48);
        if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_20.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
          local_18 = local_18 & 0xffffffff00000000;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (FStack_20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_20.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
        SButton::ExecuteHoverStateChanged((SButton *)this_01,false);
      }
    }
  }
  return;
}

// SetMaxDesiredHeight @ 14a81a300

void __thiscall
UCommonButtonInternalBase::SetMaxDesiredHeight(UCommonButtonInternalBase *this,int param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->MaxHeight = param_1;
  this_00 = (this->MyBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    if (0 < param_1) {
      local_28.Value.Size = (float)param_1;
    }
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxDesiredHeight(this_00,&local_28);
  }
  return;
}

// SetMaxDesiredWidth @ 14a81a360

void __thiscall
UCommonButtonInternalBase::SetMaxDesiredWidth(UCommonButtonInternalBase *this,int param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->MaxWidth = param_1;
  this_00 = (this->MyBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = FOptionalSize::Unspecified;
    if (0 < param_1) {
      local_28.Value.Size = (float)param_1;
    }
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMaxDesiredWidth(this_00,&local_28);
  }
  return;
}

// SetMinDesiredHeight @ 14a81a3e0

void __thiscall
UCommonButtonInternalBase::SetMinDesiredHeight(UCommonButtonInternalBase *this,int param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->MinHeight = param_1;
  this_00 = (this->MyBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = (float)param_1;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinDesiredHeight(this_00,&local_28);
  }
  return;
}

// SetMinDesiredWidth @ 14a81a440

void __thiscall
UCommonButtonInternalBase::SetMinDesiredWidth(UCommonButtonInternalBase *this,int param_1)

{
  SBox *this_00;
  TAttribute<FOptionalSize> local_28;
  
  this->MinWidth = param_1;
  this_00 = (this->MyBox).Object;
  if (this_00 != (SBox *)0x0) {
    local_28.Value.Size = (float)param_1;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBox::SetMinDesiredWidth(this_00,&local_28);
  }
  return;
}

// SlateHandleClickedOverride @ 14a81dc60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonInternalBase::SlateHandleClickedOverride
          (UCommonButtonInternalBase *this,FReply *__return_storage_ptr__)

{
  UButton::SlateHandleClicked((UButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SlateHandleDoubleClicked @ 14a81dc80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonInternalBase::SlateHandleDoubleClicked
          (UCommonButtonInternalBase *this,FReply *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  FReply::FReply(__return_storage_ptr__,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HandleDoubleClicked,
             &local_e8);
  if (((*(int *)&(this->HandleDoubleClicked).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->HandleDoubleClicked).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e8);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HandleDoubleClicked,
               &local_e8);
    if (*(int *)&(this->HandleDoubleClicked).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->HandleDoubleClicked).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    FReply::operator=(__return_storage_ptr__,&local_d0);
    FReply::~FReply(&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClicked,
             &local_e8);
  iVar1 = *(int *)&(this->OnDoubleClicked).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e8);
  if (0 < iVar1) {
    FOnButtonClickedEvent_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDoubleClicked);
    FReply::FReply(&local_d0,true);
    FReply::operator=(__return_storage_ptr__,&local_d0);
    FReply::~FReply(&local_d0);
  }
  return __return_storage_ptr__;
}

// SlateHandleDragDetectedOverride @ 14a81ddd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonInternalBase::SlateHandleDragDetectedOverride
          (UCommonButtonInternalBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x600,&local_28)
  ;
  if (((*(int *)&this->field_0x610 != 0) && (*(longlong **)&this->field_0x608 != (longlong *)0x0))
     && (cVar1 = (**(code **)(**(longlong **)&this->field_0x608 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x600,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SlateHandleDragEnterOverride @ 14a81de70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonInternalBase::SlateHandleDragEnterOverride
          (UCommonButtonInternalBase *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x618,&local_28)
  ;
  if ((*(int *)&this->field_0x628 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x620, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SlateHandleDragLeaveOverride @ 14a81dee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonInternalBase::SlateHandleDragLeaveOverride
          (UCommonButtonInternalBase *this,FDragDropEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x630,&local_28)
  ;
  if ((*(int *)&this->field_0x640 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x638, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SlateHandleDragOverOverride @ 14a81df40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonInternalBase::SlateHandleDragOverOverride
          (UCommonButtonInternalBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x648,&local_28)
  ;
  if (((*(int *)&this->field_0x658 != 0) && (*(longlong **)&this->field_0x650 != (longlong *)0x0))
     && (cVar1 = (**(code **)(**(longlong **)&this->field_0x650 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute((TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x648,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SlateHandleDropOverride @ 14a81dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonInternalBase::SlateHandleDropOverride
          (UCommonButtonInternalBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x660,&local_28)
  ;
  if (((*(int *)&this->field_0x670 != 0) && (*(longlong **)&this->field_0x668 != (longlong *)0x0))
     && (cVar1 = (**(code **)(**(longlong **)&this->field_0x668 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute((TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x660,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SlateHandlePressedOverride @ 14a81e080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonInternalBase::SlateHandlePressedOverride(UCommonButtonInternalBase *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x5a0,(void *)0x0)
  ;
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetPressedStateRegistration::Bit,true);
  return;
}

// SlateHandleReleasedOverride @ 14a81e090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonInternalBase::SlateHandleReleasedOverride(UCommonButtonInternalBase *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x5b8,(void *)0x0)
  ;
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetPressedStateRegistration::Bit,false);
  return;
}

// StaticRegisterNativesUCommonButtonInternalBase @ 14a81e4e0

void __cdecl UCommonButtonInternalBase::StaticRegisterNativesUCommonButtonInternalBase(void)

{
  return;
}

