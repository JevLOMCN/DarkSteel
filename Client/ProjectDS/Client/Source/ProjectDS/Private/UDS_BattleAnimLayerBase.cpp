// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b428dc0

UClass * __cdecl UDS_BattleAnimLayerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BattleAnimLayerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BattleAnimLayerBase",
               &Z_Registration_Info_UClass_UDS_BattleAnimLayerBase.InnerSingleton,
               StaticRegisterNativesUDS_BattleAnimLayerBase,0x460,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_BattleAnimLayerBase>,
               InternalVTableHelperCtorCaller<UDS_BattleAnimLayerBase>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BattleAnimLayerBase.InnerSingleton;
}

// UDS_BattleAnimLayerBase @ 14b42ab30

UDS_BattleAnimLayerBase * __thiscall
UDS_BattleAnimLayerBase::UDS_BattleAnimLayerBase
          (UDS_BattleAnimLayerBase *this,FVTableHelper *param_1)

{
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_BattleAnimLayerBase__6B_;
  (this->BattleAnim).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_BattleAnimLayerBase @ 14b42b680

void __thiscall UDS_BattleAnimLayerBase::~UDS_BattleAnimLayerBase(UDS_BattleAnimLayerBase *this)

{
  this->_padding_ = (longlong)&___7UDS_BattleAnimLayerBase__6B_;
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b42d8d0

UClass * __cdecl UDS_BattleAnimLayerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BattleAnimLayerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BattleAnimLayerBase",
               &Z_Registration_Info_UClass_UDS_BattleAnimLayerBase.InnerSingleton,
               StaticRegisterNativesUDS_BattleAnimLayerBase,0x460,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_BattleAnimLayerBase>,
               InternalVTableHelperCtorCaller<UDS_BattleAnimLayerBase>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BattleAnimLayerBase.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b42e1a0

bool __thiscall UDS_BattleAnimLayerBase::ShouldChangeCharStateEvent(UDS_BattleAnimLayerBase *this)

{
  return true;
}

// StaticRegisterNativesUDS_BattleAnimLayerBase @ 14b42e1d0

void __cdecl UDS_BattleAnimLayerBase::StaticRegisterNativesUDS_BattleAnimLayerBase(void)

{
  return;
}

// UDS_BattleAnimLayerBase @ 14b8649e0

UDS_BattleAnimLayerBase * __thiscall
UDS_BattleAnimLayerBase::UDS_BattleAnimLayerBase
          (UDS_BattleAnimLayerBase *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_BattleAnimLayerBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BattleAnim).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// GetBattleAnimSharedData @ 14b876500

FDS_BattleAnimSharedData * __thiscall
UDS_BattleAnimLayerBase::GetBattleAnimSharedData(UDS_BattleAnimLayerBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->BattleAnim).WeakPtr);
  if (!bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        InvalidData.HitDirection2D = UE::Math::TVector2<double>::ZeroVector;
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &InvalidData;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->BattleAnim).WeakPtr);
  return (FDS_BattleAnimSharedData *)&pUVar2[0x2b].field_0x20;
}

// IsValidReferencedPtr @ 14b87e8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_BattleAnimLayerBase::IsValidReferencedPtr(UDS_BattleAnimLayerBase *this)

{
  bool bVar1;
  
  bVar1 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if (bVar1) {
        bVar1 = FWeakObjectPtr::IsValid(&(this->BattleAnim).WeakPtr);
        return bVar1;
      }
    }
  }
  return false;
}

// OnBindAnimationEvents @ 14b8811d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_BattleAnimLayerBase::OnBindAnimationEvents(UDS_BattleAnimLayerBase *this)

{
  FGameplayTag *pFVar1;
  int iVar2;
  char cVar3;
  UObject *pUVar4;
  FDS_ChangedCharStateInfo *pFVar5;
  FGameplayTag *pFVar6;
  bool abStackX_8 [8];
  FName FStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  FDS_ChangedCharStateInfo FStack_48;
  
  cVar3 = (**(code **)(this->_padding_ + 0x3d0))();
  if (cVar3 == '\x01') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_AnimInstanceBase>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_AnimInstanceBase *)abStackX_8,(pmf_2d1e6189)this);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar6 = *(FGameplayTag **)&pUVar4[2].field_0x8;
    iVar2 = *(int *)&pUVar4[2].field_0x10;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (*(int *)&pUVar4[2].field_0x10 != iVar2) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(abStackX_8);
      }
      if (pFVar6 == pFVar1) break;
      abStackX_8[0] = true;
      pFVar5 = UDS_CharStateData::GetChangedCharStateInfo(&FStack_48,pFVar6,abStackX_8);
      FStack_78 = (pFVar5->StateTag).TagName;
      uStack_70 = *(undefined8 *)&pFVar5->bIsStateTagOn;
      uStack_68 = (undefined4)pFVar5->AddedCharState;
      uStack_64 = *(undefined4 *)((longlong)&pFVar5->AddedCharState + 4);
      uStack_60 = (undefined4)pFVar5->RemovedCharState;
      uStack_5c = *(undefined4 *)((longlong)&pFVar5->RemovedCharState + 4);
      uStack_58._0_4_ = pFVar5->AddedCharDetailState;
      uStack_58._4_4_ = pFVar5->RemovedCharDetailState;
      (**(code **)(this->_padding_ + 0x3d8))(this,this->_padding_,&FStack_78);
      pFVar6 = pFVar6 + 1;
    }
  }
  return;
}

// OnChangedCharState @ 14b8856f0

void __thiscall
UDS_BattleAnimLayerBase::OnChangedCharState
          (UDS_BattleAnimLayerBase *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  return;
}

// OnClearVariables @ 14b8878b0

void __thiscall UDS_BattleAnimLayerBase::OnClearVariables(UDS_BattleAnimLayerBase *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  UDS_AnimLayerBase::OnClearVariables((UDS_AnimLayerBase *)this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->BattleAnim).WeakPtr = local_res8;
  return;
}

// OnInitVariables @ 14b8898a0

void __thiscall UDS_BattleAnimLayerBase::OnInitVariables(UDS_BattleAnimLayerBase *this)

{
  int iVar1;
  UClass *pUVar2;
  UObject *local_res8;
  
  UDS_AnimLayerBase::OnInitVariables((UDS_AnimLayerBase *)this);
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (local_res8 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_BattleAnim_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14b8898eb;
  }
  local_res8 = (UObject *)0x0;
LAB_14b8898eb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->BattleAnim).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// OnUnBindAnimationEvents @ 14b894110

void __thiscall UDS_BattleAnimLayerBase::OnUnBindAnimationEvents(UDS_BattleAnimLayerBase *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    return;
  }
  return;
}

