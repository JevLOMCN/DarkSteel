// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b47f550

UClass * __cdecl UDS_StuffAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffAnim",
               &Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton,
               StaticRegisterNativesUDS_StuffAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffAnim>,
               InternalVTableHelperCtorCaller<UDS_StuffAnim>,aFStackX_8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton;
}

// UDS_StuffAnim @ 14b5a9120

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

UDS_StuffAnim * __thiscall UDS_StuffAnim::UDS_StuffAnim(UDS_StuffAnim *this,FVTableHelper *param_1)

{
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  this->StuffState = None;
  this->GatherAction = false;
  this->_padding_ = (longlong)&___7UDS_StuffAnim__6B_;
  return this;
}

// ~UDS_StuffAnim @ 14b5a9800

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

void __thiscall UDS_StuffAnim::~UDS_StuffAnim(UDS_StuffAnim *this)

{
  this->_padding_ = (longlong)&___7UDS_StuffAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa860

UClass * __cdecl UDS_StuffAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffAnim",
               &Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton,
               StaticRegisterNativesUDS_StuffAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_StuffAnim>,
               InternalVTableHelperCtorCaller<UDS_StuffAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffAnim @ 14b5aafd0

void __cdecl UDS_StuffAnim::StaticRegisterNativesUDS_StuffAnim(void)

{
  return;
}

// UDS_StuffAnim @ 14b8653e0

UDS_StuffAnim * __thiscall
UDS_StuffAnim::UDS_StuffAnim(UDS_StuffAnim *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->StuffState = None;
  this->GatherAction = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_StuffAnim__6B_;
  return this;
}

// OnClearVariables @ 14b887b50

void __thiscall UDS_StuffAnim::OnClearVariables(UDS_StuffAnim *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// OnInitVariables @ 14b889fe0

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

void __thiscall UDS_StuffAnim::OnInitVariables(UDS_StuffAnim *this)

{
  char cVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar2 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)this->_padding_);
    this->_padding_ = *(longlong *)TVar2.WeakPtr;
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88baa0

void __thiscall UDS_StuffAnim::OnNativeThreadSafeUpdateAnimation(UDS_StuffAnim *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->_padding_ != 0) {
    UDS_StuffGatherData::GetData((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->StuffState = pUVar2[0xb].field_0x1d;
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->GatherAction = (bool)pUVar2[0xb].field_0x1c;
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      pUVar2[0xb].field_0x1c = 0;
    }
  }
  return;
}

// OnNativeUpdateAnimation @ 14b88be20

void __thiscall UDS_StuffAnim::OnNativeUpdateAnimation(UDS_StuffAnim *this,float param_1)

{
  int iVar1;
  bool bVar2;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  undefined4 uVar6;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_18 [2];
  
  if (this->_padding_ == 0) {
    return;
  }
  UDS_StuffGatherData::GetData((ulong64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  this_00 = (FWeakObjectPtr *)
            (**(code **)(*(longlong *)this->_padding_ + 0x150))
                      ((longlong *)this->_padding_,local_18);
  pUVar3 = FWeakObjectPtr::Get(this_00);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_StuffGather_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b88bea8;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b88bea8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
  bVar2 = TWeakObjectPtr<ADS_StuffGather,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_StuffGather,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar2) {
    local_res8 = (UObject *)((ulonglong)local_res8 & 0xffffffff00000000);
    pFVar5 = ::FName::FName(local_18,L"MaskValue");
    bVar2 = UAnimInstance::GetCurveValue((UAnimInstance *)this,*pFVar5,(float *)&local_res8);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      uVar6 = local_res8._0_4_;
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      uVar6 = __real_3f800000;
    }
    (**(code **)(*(longlong *)pUVar3 + 0x768))(pUVar3,uVar6);
  }
  return;
}

