// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b7603f0

UClass * __cdecl UDS_WarpDeviceAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpDeviceAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpDeviceAnim",
               &Z_Registration_Info_UClass_UDS_WarpDeviceAnim.InnerSingleton,
               StaticRegisterNativesUDS_WarpDeviceAnim,0x470,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_WarpDeviceAnim>,
               InternalVTableHelperCtorCaller<UDS_WarpDeviceAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpDeviceAnim.InnerSingleton;
}

// UDS_WarpDeviceAnim @ 14b764330

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

UDS_WarpDeviceAnim * __thiscall
UDS_WarpDeviceAnim::UDS_WarpDeviceAnim(UDS_WarpDeviceAnim *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  this->DeviceState = None;
  this->bIsWarpDeviceActivating = false;
  *(undefined ***)this = &___7UDS_WarpDeviceAnim__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  return this;
}

// ~UDS_WarpDeviceAnim @ 14b765160

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

void __thiscall UDS_WarpDeviceAnim::~UDS_WarpDeviceAnim(UDS_WarpDeviceAnim *this)

{
  *(undefined ***)this = &___7UDS_WarpDeviceAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b766490

UClass * __cdecl UDS_WarpDeviceAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpDeviceAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpDeviceAnim",
               &Z_Registration_Info_UClass_UDS_WarpDeviceAnim.InnerSingleton,
               StaticRegisterNativesUDS_WarpDeviceAnim,0x470,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_WarpDeviceAnim>,
               InternalVTableHelperCtorCaller<UDS_WarpDeviceAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpDeviceAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_WarpDeviceAnim @ 14b766ce0

void __cdecl UDS_WarpDeviceAnim::StaticRegisterNativesUDS_WarpDeviceAnim(void)

{
  return;
}

// UDS_WarpDeviceAnim @ 14b8655c0

UDS_WarpDeviceAnim * __thiscall
UDS_WarpDeviceAnim::UDS_WarpDeviceAnim(UDS_WarpDeviceAnim *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->DeviceState = None;
  this->bIsWarpDeviceActivating = false;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined ***)this = &___7UDS_WarpDeviceAnim__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  return this;
}

// OnClearVariables @ 14b887bd0

void __thiscall UDS_WarpDeviceAnim::OnClearVariables(UDS_WarpDeviceAnim *this)

{
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  return;
}

// OnInitVariables @ 14b88a0f0

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

void __thiscall UDS_WarpDeviceAnim::OnInitVariables(UDS_WarpDeviceAnim *this)

{
  char cVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar2 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0x430);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar2.WeakPtr;
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88bd10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_WarpDeviceAnim::OnNativeThreadSafeUpdateAnimation(UDS_WarpDeviceAnim *this,float param_1)

{
  int iVar1;
  bool bVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res18 [2];
  
  pAVar3 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if (pAVar3 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_StuffWarpDevice_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UDS_StuffWarpDeviceData::GetData((ulong64)local_res18);
      bVar2 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar2) {
        this->bIsWarpDeviceActivating = false;
        if (this->DeviceState != None) {
          pUVar5 = FWeakObjectPtr::Get(local_res18);
          if (this->DeviceState != pUVar5[0xb].field_0x10) {
            this->bIsWarpDeviceActivating = true;
          }
        }
        pUVar5 = FWeakObjectPtr::Get(local_res18);
        this->DeviceState = pUVar5[0xb].field_0x10;
      }
    }
  }
  return;
}

