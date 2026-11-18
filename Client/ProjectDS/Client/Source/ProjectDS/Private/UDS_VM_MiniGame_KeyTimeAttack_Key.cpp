// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b6953c0

UClass * __cdecl UDS_VM_MiniGame_KeyTimeAttack_Key::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack_Key.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MiniGame_KeyTimeAttack_Key",
               &Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack_Key.InnerSingleton,
               StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack_Key,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MiniGame_KeyTimeAttack_Key>,
               InternalVTableHelperCtorCaller<UDS_VM_MiniGame_KeyTimeAttack_Key>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack_Key.InnerSingleton;
}

// UDS_VM_MiniGame_KeyTimeAttack_Key @ 14b69a110

UDS_VM_MiniGame_KeyTimeAttack_Key * __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::UDS_VM_MiniGame_KeyTimeAttack_Key
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MiniGame_KeyTimeAttack_Key__6B_;
  FText::FText(&this->KeyInput);
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->KeyData).Object = (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0;
  (this->KeyData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_VM_MiniGame_KeyTimeAttack_Key @ 14b69a1b0

UDS_VM_MiniGame_KeyTimeAttack_Key * __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::UDS_VM_MiniGame_KeyTimeAttack_Key
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MiniGame_KeyTimeAttack_Key__6B_;
  FText::FText(&this->KeyInput);
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->KeyData).Object = (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0;
  (this->KeyData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_VM_MiniGame_KeyTimeAttack_Key @ 14b69b3d0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::~UDS_VM_MiniGame_KeyTimeAttack_Key
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MiniGame_KeyTimeAttack_Key__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeyData).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  pIVar2 = (this->KeyInput).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d6b0

IClassDescriptor * __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::GetFieldNotificationDescriptor
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MiniGame_KeyTimeAttack_Key::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69e3e0

UClass * __cdecl UDS_VM_MiniGame_KeyTimeAttack_Key::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack_Key.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MiniGame_KeyTimeAttack_Key",
               &Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack_Key.InnerSingleton,
               StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack_Key,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MiniGame_KeyTimeAttack_Key>,
               InternalVTableHelperCtorCaller<UDS_VM_MiniGame_KeyTimeAttack_Key>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack_Key.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack_Key @ 14b69e7f0

void __cdecl
UDS_VM_MiniGame_KeyTimeAttack_Key::StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack_Key(void)

{
  return;
}

// BindModel @ 14bed7c30

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::BindModel(UDS_VM_MiniGame_KeyTimeAttack_Key *this)

{
  int iVar1;
  FDS_MiniGame_KeyTimeAttack_KeyData *pFVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_InputEvent *pUVar10;
  UDS_VM_MiniGame_KeyTimeAttack_Key *local_res8;
  UDS_VM_MiniGame_KeyTimeAttack_Key *local_res10;
  UDS_VM_MiniGame_KeyTimeAttack_Key *local_res18 [2];
  uint uStack_ac;
  FName local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  undefined8 uStack_90;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pFVar2 = (this->KeyData).Object;
  if (pFVar2 != (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
    local_a8 = (FName)OnIconIndexChanged;
    uStack_9c = uStack_90._4_4_;
    iStack_a0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->IconIndexChanged,
               (FWriteAccessScope *)&local_88);
    local_70 = &(pFVar2->IconIndexChanged).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_70);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack_Key____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
      *(FName *)(puVar8 + 4) = local_a8;
      puVar8[5] = CONCAT44(uStack_9c,iStack_a0);
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = FFieldNotificationClassDescriptor::IconIndex.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IconIndex.FieldName;
    iVar1 = ((this->KeyData).Object)->IconIndex;
    if (this->IconIndex != iVar1) {
      this->IconIndex = iVar1;
      iStack_a0 = iVar5;
      local_a8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = uStack_90;
    pFVar2 = (this->KeyData).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->KeyActionTypeChanged,(FWriteAccessScope *)&local_68);
    local_50 = &(pFVar2->KeyActionTypeChanged).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXW4EDS_KeyActionType___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack_Key____A6AXW4EDS_KeyActionType___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res10);
      puVar8[4] = OnKeyActionTypeChanged;
      puVar8[5] = uVar6 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    OnKeyActionTypeChanged(this,((this->KeyData).Object)->KeyActionType);
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->KeyData).Object;
    uStack_ac = uStack_90._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->KeyStateChanged,
               (FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->KeyStateChanged).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXW4EDS_KeyTimeAttack_KeyState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack_Key____A6AXW4EDS_KeyTimeAttack_KeyState___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res18[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)local_res18);
      puVar8[4] = OnKeyStateChanged;
      puVar8[5] = (ulonglong)uStack_90._4_4_ << 0x20;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    OnKeyStateChanged(this,((this->KeyData).Object)->KeyState);
  }
  pUVar10 = UDS_InputEvent::GetEvent();
  if (pUVar10 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar10->OnChangeInputDeviceType,this);
    uStack_90 = (ulonglong)uStack_ac << 0x20;
    local_98 = OnChangedInputDeviceType;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_MiniGame_KeyTimeAttack_Key>
              (&pUVar10->OnChangeInputDeviceType,
               (UDS_VM_MiniGame_KeyTimeAttack_Key *)(local_res18 + 1),(pmf_f5bb595b *)this);
  }
  return;
}

// OnChangedInputDeviceType @ 14bef7cb0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::OnChangedInputDeviceType
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,EDS_InputDeviceType *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  OnKeyActionTypeChanged(this,((this->KeyData).Object)->KeyActionType);
  return;
}

// OnIconIndexChanged @ 14befde10

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::OnIconIndexChanged
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconIndex.FieldName;
  if (this->IconIndex != param_1) {
    this->IconIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnKeyActionTypeChanged @ 14befe7c0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::OnKeyActionTypeChanged
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,EDS_KeyActionType param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FName local_58;
  int local_50;
  FText local_48;
  FKey local_38;
  
  DS_InputUtil::GetMainKey(&local_38,param_1);
  iVar4 = FFieldNotificationClassDescriptor::KeyInput.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::KeyInput.FieldName;
  pFVar6 = FKey::GetDisplayName(&local_38,&local_48,true);
  bVar5 = FText::IdenticalTo(&this->KeyInput,pFVar6,None);
  if (!bVar5) {
    pIVar1 = (pFVar6->TextData).Reference;
    pIVar2 = (this->KeyInput).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->KeyInput).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->KeyInput).Flags = pFVar6->Flags;
    local_58 = FVar3;
    local_50 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// OnKeyStateAnimFinish @ 14befe8e0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::OnKeyStateAnimFinish(UDS_VM_MiniGame_KeyTimeAttack_Key *this)

{
  FDS_MiniGame_KeyTimeAttack_KeyData *pFVar1;
  
  pFVar1 = (this->KeyData).Object;
  if (pFVar1 != (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
    if (this->StateIndex == 2) {
      if (pFVar1->bIsLastKey == true) {
        TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&pFVar1->OnLastKeyAnimFinish,true);
        return;
      }
    }
    else if (this->StateIndex == 3) {
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&pFVar1->OnLastKeyAnimFinish,false);
      return;
    }
  }
  return;
}

// OnKeyStateChanged @ 14befe930

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::OnKeyStateChanged
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,EDS_KeyTimeAttack_KeyState param_1)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  char *pcVar6;
  FName local_res8;
  FName local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  iVar2 = FFieldNotificationClassDescriptor::StateIndex.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::StateIndex.FieldName;
  if (this->StateIndex != param_1) {
    this->StateIndex = param_1;
    iStack_40 = iVar2;
    local_48 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  if (param_1 == Success) {
    pcVar6 = "Success_Anim";
  }
  else {
    if (param_1 != Fail) {
      return;
    }
    pcVar6 = "Fail_Anim";
  }
  pFVar3 = ::FName::FName(&local_res8,pcVar6);
  iStack_40 = 0;
  local_48 = (FName)OnKeyStateAnimFinish;
  (this->AnimationEvent).AnimationName = *pFVar3;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_38);
  local_20 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack_Key____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar4 + 4) = local_48;
    puVar4[5] = CONCAT44(uStack_3c,iStack_40);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  iStack_40 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_48 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  return;
}

// OnSetViewModel @ 14bf05e60

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::OnSetViewModel
          (UDS_VM_MiniGame_KeyTimeAttack_Key *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_MiniGame_KeyTimeAttack_KeyData *pFVar2;
  TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack_Key,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  FDS_MiniGame_KeyTimeAttack_KeyData *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MiniGame_KeyTimeAttack_Key>(&local_38,&local_28);
  if (local_38.Object != (FDS_ViewModelContext_MiniGame_KeyTimeAttack_Key *)0x0) {
    pFVar2 = ((local_38.Object)->KeyData).Object;
    pTVar1 = ((local_38.Object)->KeyData).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this->KeyData).Object;
    pTStack_10 = (this->KeyData).SharedReferenceCount.ReferenceController;
    (this->KeyData).Object = pFVar2;
    (this->KeyData).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bf1df80

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack_Key::UnbindModel(UDS_VM_MiniGame_KeyTimeAttack_Key *this)

{
  FDS_MiniGame_KeyTimeAttack_KeyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_InputEvent *pUVar4;
  
  pFVar1 = (this->KeyData).Object;
  if (pFVar1 != (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar1->IconIndexChanged);
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->KeyData).Object)->KeyActionTypeChanged);
    if ((this->KeyData).Object == (FDS_MiniGame_KeyTimeAttack_KeyData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->KeyData).Object)->KeyStateChanged);
  }
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnChangeInputDeviceType,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

