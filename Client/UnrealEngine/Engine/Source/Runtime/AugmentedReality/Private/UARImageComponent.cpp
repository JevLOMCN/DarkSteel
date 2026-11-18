// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 21

// StaticClass @ 14cf32c30

UClass * __cdecl UARImageComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARImageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARImageComponent",
               &Z_Registration_Info_UClass_UARImageComponent.InnerSingleton,
               StaticRegisterNativesUARImageComponent,0x380,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARImageComponent>,
               InternalVTableHelperCtorCaller<UARImageComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARImageComponent.InnerSingleton;
}

// UARImageComponent @ 14cf41990

UARImageComponent * __thiscall
UARImageComponent::UARImageComponent(UARImageComponent *this,FVTableHelper *param_1)

{
  UARComponent::UARComponent((UARComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedPayload).SessionPayload.ConfigFlags = 0;
  (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  *&(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ReplicatedPayload).DetectedImage.field0_0x0.DebugPtr = (UARCandidateImage *)0x0;
  (this->ReplicatedPayload).EstimatedSize.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// UARImageComponent @ 14cf41a50

UARImageComponent * __thiscall UARImageComponent::UARImageComponent(UARImageComponent *this)

{
  UARComponent::UARComponent((UARComponent *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedPayload).SessionPayload.ConfigFlags = 0;
  (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  *&(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ReplicatedPayload).DetectedImage.field0_0x0.DebugPtr = (UARCandidateImage *)0x0;
  (this->ReplicatedPayload).EstimatedSize.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// ~UARImageComponent @ 14cf44410

void __thiscall UARImageComponent::~UARImageComponent(UARImageComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetDebugMode @ 14cf50b20

int __cdecl UARImageComponent::GetDebugMode(void)

{
  return GImageComponentDebugMode;
}

// GetLifetimeReplicatedProps @ 14cf51710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARImageComponent::GetLifetimeReplicatedProps
          (UARImageComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FString local_38;
  FDoRepLifetimeParams local_28;
  
  UARComponent::GetLifetimeReplicatedProps((UARComponent *)this,param_1);
  local_28.Condition = COND_SkipOwner;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(local_res18,0x11,L"ReplicatedPayload",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 14cf548c0

UClass * __cdecl UARImageComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARImageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARImageComponent",
               &Z_Registration_Info_UClass_UARImageComponent.InnerSingleton,
               StaticRegisterNativesUARImageComponent,0x380,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARImageComponent>,
               InternalVTableHelperCtorCaller<UARImageComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARImageComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf58e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARImageComponent::OnRep_Payload(UARImageComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 auStack_d8 [32];
  FARImageUpdatePayload local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if ((char)this->_padding_ == '\0') {
    ReceiveUpdate(this,&this->ReplicatedPayload);
  }
  else {
    local_b8.WorldTransform.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_b8.WorldTransform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_b8.WorldTransform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8.WorldTransform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_b8.SessionPayload.ConfigFlags = 0;
    local_b8.WorldTransform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_b8.EstimatedSize.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_b8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_b8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_b8.DetectedImage.field0_0x0.DebugPtr = (TObjectPtr<UARCandidateImage>_u_0)0x0;
    FARImageUpdatePayload::operator=(&local_b8,&this->ReplicatedPayload);
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARImageComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_b8);
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARImageComponent::ReceiveAdd(UARImageComponent *this,FARImageUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_d8 [32];
  FARImageUpdatePayload local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_b8.WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_b8.WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_b8.WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_b8.SessionPayload.ConfigFlags = 0;
  local_b8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_b8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_b8.WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_b8.DetectedImage.field0_0x0.DebugPtr = (TObjectPtr<UARCandidateImage>_u_0)0x0;
  local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.EstimatedSize.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FARImageUpdatePayload::operator=(&local_b8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARImageComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_b8);
  return;
}

// ReceiveUpdate @ 14cf5b350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARImageComponent::ReceiveUpdate(UARImageComponent *this,FARImageUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_d8 [32];
  FARImageUpdatePayload local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_b8.WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_b8.WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_b8.WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_b8.SessionPayload.ConfigFlags = 0;
  local_b8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_b8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_b8.WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_b8.DetectedImage.field0_0x0.DebugPtr = (TObjectPtr<UARCandidateImage>_u_0)0x0;
  local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.EstimatedSize.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FARImageUpdatePayload::operator=(&local_b8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARImageComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_b8);
  return;
}

// ServerUpdatePayload @ 14cf5dd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARImageComponent::ServerUpdatePayload(UARImageComponent *this,FARImageUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_d8 [32];
  FARImageUpdatePayload local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_b8.WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_b8.WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_b8.WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_b8.SessionPayload.ConfigFlags = 0;
  local_b8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_b8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_b8.WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_b8.DetectedImage.field0_0x0.DebugPtr = (TObjectPtr<UARCandidateImage>_u_0)0x0;
  local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.EstimatedSize.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FARImageUpdatePayload::operator=(&local_b8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARImageComponent_ServerUpdatePayload);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_b8);
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e390

void __thiscall
UARImageComponent::ServerUpdatePayload_Implementation
          (UARImageComponent *this,FARImageUpdatePayload *param_1)

{
  FARImageUpdatePayload::operator=(&this->ReplicatedPayload,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e570

bool __thiscall
UARImageComponent::ServerUpdatePayload_Validate
          (UARImageComponent *this,FARImageUpdatePayload *param_1)

{
  return true;
}

// SetImageComponentDebugMode @ 14cf5fdd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode param_1)

{
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarImageComponentDebugMode._8_8_,(uint)param_1,ECVF_SetByCode,
             (FName)0x0);
  return;
}

// StaticRegisterNativesUARImageComponent @ 14cf61170

void __cdecl UARImageComponent::StaticRegisterNativesUARImageComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARImageComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cf62760

/* WARNING: Type propagation algorithm not settling */
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
UARImageComponent::TickComponent
          (UARImageComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UARCandidateImage *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_f8 [8];
  double local_f0;
  TRotator<double> local_e8;
  FLinearColor_u_0 local_c8;
  double local_b8;
  TVector<double>_u_0 local_a8;
  FName local_88 [2];
  TQuat<double> local_78 [3];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (GImageComponentDebugMode != 0) {
    pUVar1 = (this->ReplicatedPayload).DetectedImage.field0_0x0.DebugPtr;
    local_f8 = (undefined1  [8])0x0;
    local_f0 = 0.0;
    if (pUVar1 == (UARCandidateImage *)0x0) {
      ::FString::operator=((FString *)local_f8,L"Unknown");
    }
    else {
      local_88[0] = (FName)pUVar1->_padding_;
      ::FName::ToString(local_88,(FString *)&local_c8._s_0);
      ::FString::PrintfImpl((FString *)&local_e8,L"%s (%s)");
      if (local_f8 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_f8);
      }
      local_f8 = (undefined1  [8])local_e8.Pitch;
      local_f0 = local_e8.Yaw;
      local_e8.Yaw = 0.0;
      local_e8.Pitch = 0.0;
      if ((void *)local_c8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._0_8_);
      }
    }
    local_78[0].X = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0];
    local_78[0].Y = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1];
    local_78[0].Z = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0];
    local_78[0].W = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(local_78,(TRotator<double> *)&local_c8._s_0);
    local_a8._s_0.Z = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    local_a8._0_16_ =
         *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64;
    local_e8.Pitch = (double)local_c8._0_8_;
    local_e8.Yaw = (double)local_c8._8_8_;
    local_e8.Roll = local_b8;
    local_78[0].Z = local_a8._s_0.Z;
    UKismetSystemLibrary::DrawDebugCoordinateSystem
              ((UObject *)this,(TVector<double> *)&local_a8._s_0,&local_e8,__real_41700000,0.0,0.0,
               World);
    auVar16 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64;
    dVar4 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] * 0.0;
    dVar5 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] * 0.0;
    uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar9 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    dVar6 = __real_4030000000000000 *
            (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar8 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = uVar17;
    dVar3 = auVar16._0_8_;
    auVar11 = blendpd(auVar9,auVar16,2);
    auVar19._0_8_ = auVar18._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
    auVar19._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
    auVar20._8_4_ = SUB84(dVar5,0);
    auVar20._0_8_ = dVar4;
    auVar20._12_4_ = uVar17;
    auVar9._8_4_ = SUB84(dVar7,0);
    auVar9._0_8_ = dVar6;
    auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar9 = blendpd(auVar20,auVar9,2);
    auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
    auVar10._8_8_ = auVar9._8_8_ * auVar16._8_8_ - auVar11._8_8_ * dVar7;
    auVar9 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar20 = blendpd(auVar19,auVar10,2);
    dVar7 = auVar19._8_8_ + auVar19._8_8_;
    dVar2 = auVar10._0_8_ + auVar10._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar14._8_4_ = SUB84(dVar2,0);
    auVar14._0_8_ = dVar7;
    auVar14._12_4_ = uVar17;
    auVar12._8_4_ = SUB84(dVar2,0);
    auVar12._0_8_ = dVar7;
    auVar12._12_4_ = uVar17;
    auVar20 = blendpd(auVar12,auVar21,2);
    auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
    auVar15._8_8_ = auVar21._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
    auVar11._8_4_ = SUB84(auVar15._8_8_,0);
    auVar11._0_8_ = auVar15._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar9 = blendpd(auVar9,auVar16,2);
    auVar13._0_8_ = auVar20._0_8_ * dVar3 - auVar9._0_8_ * auVar21._0_8_;
    auVar13._8_8_ = auVar20._8_8_ * auVar16._8_8_ - auVar9._8_8_ * auVar21._8_8_;
    dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_ +
            (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    auVar16 = blendpd(auVar15,auVar13,2);
    local_c8 = FLinearColor::Yellow.field0_0x0;
    local_a8._s_0.Z =
         auVar21._0_8_ * dVar8 + dVar6 + auVar16._0_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    local_a8._8_4_ = SUB84(dVar3,0);
    local_a8._0_8_ =
         dVar7 * dVar8 + dVar4 + auVar11._8_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    local_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    UKismetSystemLibrary::DrawDebugString
              ((UObject *)this,(TVector<double> *)&local_a8._s_0,(FString *)local_f8,(AActor *)0x0,
               (FLinearColor *)&local_c8._s_0,0.0);
    if (local_f8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_f8);
    }
  }
  return;
}

// Update @ 14cf648f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARImageComponent::Update(UARImageComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  UMRMeshComponent *pUVar2;
  code *pcVar3;
  TObjectPtr<UMaterialInterface> TVar4;
  TObjectPtr<UMaterialInterface> TVar5;
  TObjectPtr<UARCandidateImage> TVar6;
  bool bVar7;
  TTransform<double> *pTVar8;
  UFunction *pUVar9;
  UClass *pUVar10;
  UARTrackedGeometry *this_00;
  wchar_t *pwVar11;
  undefined1 auStack_228 [32];
  FScriptContainerElement *local_208;
  FName local_1f8;
  FName local_1f0;
  FString local_1e8;
  FString local_1d8;
  FARImageUpdatePayload local_1c8;
  int local_128 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TObjectPtr<UARCandidateImage>_u_0 local_a8;
  double local_a0;
  double dStack_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb4,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar10 = UARTrackedImage::StaticClass();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar10->_padding_)) goto LAB_14cf64958;
  }
  this_00 = (UARTrackedGeometry *)0x0;
LAB_14cf64958:
  if (this_00 == (UARTrackedGeometry *)0x0) {
    if (2 < (byte)LogAR._0_1_) {
      if ((param_1->AnchorName).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_1->AnchorName).Data.AllocatorInstance.Data;
      }
      pUVar10 = UARTrackedImage::StaticClass();
      local_1f8 = (FName)pUVar10->_padding_;
      ::FName::ToString(&local_1f8,&local_1d8);
      pUVar10 = StaticClass();
      local_1f0 = (FName)pUVar10->_padding_;
      ::FName::ToString(&local_1f0,&local_1e8);
      local_208 = (FScriptContainerElement *)pwVar11;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_1c8.SessionPayload.ConfigFlags = 0;
    local_1c8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_1c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    pTVar8 = UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_88);
    local_1c8.WorldTransform.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
    local_1c8.WorldTransform.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
    local_1c8.WorldTransform.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
    local_1c8.WorldTransform.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
    local_1c8.WorldTransform.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
    local_1c8.WorldTransform.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
    local_1c8.WorldTransform.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
    local_1c8.WorldTransform.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
    local_1c8.WorldTransform.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
    local_1c8.WorldTransform.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
    local_1c8.WorldTransform.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
    local_1c8.WorldTransform.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)&this_00->field_0x158 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)&this_00->field_0x158);
    }
    local_1c8.EstimatedSize.field0_0x0._s_0.X = (double)*(undefined8 *)(this_00 + 1);
    local_1c8.EstimatedSize.field0_0x0._s_0.Y = (double)*(undefined8 *)&this_00[1].field_0x8;
    local_1c8.DetectedImage.field0_0x0 =
         (TObjectPtr<UARCandidateImage>_u_0)
         *(TObjectPtr<UARCandidateImage>_u_0 *)&this_00->field_0x158;
    UARTrackedGeometry::UpdateSessionPayload(this_00,&local_1c8.SessionPayload);
    ReceiveUpdate(this,&local_1c8);
    TVar4.field0_0x0 =
         (TObjectPtr<UMaterialInterface>_u_0)local_1c8.SessionPayload.DefaultMeshMaterial;
    if ((char)this->_padding_ != '\0') {
      local_128[0] = local_1c8.SessionPayload.ConfigFlags;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1c8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1c8.SessionPayload.DefaultMeshMaterial.field0_0x0);
      }
      TVar5.field0_0x0 =
           (TObjectPtr<UMaterialInterface>_u_0)local_1c8.SessionPayload.DefaultWireframeMeshMaterial
      ;
      local_120 = TVar4.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)local_1c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0);
      }
      TVar6.field0_0x0 = (TObjectPtr<UARCandidateImage>_u_0)local_1c8.DetectedImage;
      local_108 = local_1c8.WorldTransform.Rotation.XY.m128d_f64[0];
      dStack_100 = local_1c8.WorldTransform.Rotation.XY.m128d_f64[1];
      local_f8 = local_1c8.WorldTransform.Rotation.ZW.m128d_f64[0];
      dStack_f0 = local_1c8.WorldTransform.Rotation.ZW.m128d_f64[1];
      local_e8 = local_1c8.WorldTransform.Translation.XY.m128d_f64[0];
      dStack_e0 = local_1c8.WorldTransform.Translation.XY.m128d_f64[1];
      local_d8 = local_1c8.WorldTransform.Translation.ZW.m128d_f64[0];
      dStack_d0 = local_1c8.WorldTransform.Translation.ZW.m128d_f64[1];
      local_118 = TVar5.field0_0x0;
      local_c8 = local_1c8.WorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_c0 = local_1c8.WorldTransform.Scale3D.XY.m128d_f64[1];
      local_b8 = local_1c8.WorldTransform.Scale3D.ZW.m128d_f64[0];
      dStack_b0 = local_1c8.WorldTransform.Scale3D.ZW.m128d_f64[1];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1c8.DetectedImage.field0_0x0.DebugPtr != (TObjectPtr<UARCandidateImage>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1c8.DetectedImage.field0_0x0);
      }
      local_a8 = TVar6.field0_0x0;
      local_a0 = local_1c8.EstimatedSize.field0_0x0._s_0.X;
      dStack_98 = local_1c8.EstimatedSize.field0_0x0._s_0.Y;
      pUVar9 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARImageComponent_ServerUpdatePayload);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar9,local_128);
      if (*(char *)(this->_padding_ + 0x168) != '\x03') {
        FARImageUpdatePayload::operator=(&this->ReplicatedPayload,&local_1c8);
        (**(code **)(this->_padding_ + 0x658))(this);
      }
    }
    pUVar2 = (UMRMeshComponent *)this->_padding_;
    if (pUVar2 != (UMRMeshComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this_00->UnderlyingMesh).field0_0x0.DebugPtr = pUVar2;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UARTrackedGeometry *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->_padding_ = (longlong)param_1;
  }
  return;
}

// UpdateVisualization_Implementation @ 14cf68260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARImageComponent::UpdateVisualization_Implementation(UARImageComponent *this)

{
  double dVar1;
  UMRMeshComponent *pUVar2;
  bool bVar3;
  TVector<double>_u_0 local_28;
  
  bVar3 = GImageComponentDebugMode != 0;
  if (this->_padding_ == 0) {
    pUVar2 = CreateMRMeshComponent
                       ((AActor *)this->_padding_,&(this->ReplicatedPayload).SessionPayload,
                        (UMaterialInterface *)this->_padding_,(UMaterialInterface *)this->_padding_,
                        bVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMRMeshComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this->_padding_ = (longlong)pUVar2;
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy> *)
               &this->_padding_,pUVar2);
  }
  if ((UMRMeshComponent *)this->_padding_ != (UMRMeshComponent *)0x0) {
    dVar1 = (this->ReplicatedPayload).EstimatedSize.field0_0x0._s_0.Y * _UNK_150689678;
    local_28._8_4_ = SUB84(dVar1,0);
    local_28._0_8_ =
         (this->ReplicatedPayload).EstimatedSize.field0_0x0._s_0.X *
         ___xmm_3fe00000000000003fe0000000000000;
    local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_28._s_0.Z = 0.0;
    UpdatePlaneMesh((UMRMeshComponent *)this->_padding_,&(this->ReplicatedPayload).WorldTransform,
                    &UE::Math::TVector<double>::ZeroVector,(TVector<double> *)&local_28._s_0);
    UARComponent::ManageMeshComponentForDebugMode
              ((UARComponent *)this,bVar3,&(this->ReplicatedPayload).SessionPayload);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf68e80

void __thiscall
UARImageComponent::ValidateGeneratedRepEnums
          (UARImageComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_ReplicatedPayload,L"ReplicatedPayload");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x13) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x120);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_ReplicatedPayload != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AugmentedReality\\UHT\\ARComponent.gen.cpp"
                       ,0xca0,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARImageComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf72ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARImageComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  undefined8 local_38;
  TVector2<double>_u_0 local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_58 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_38 = 0;
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_30 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_b8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_b8);
  }
  return;
}

// execSetImageComponentDebugMode @ 14cf74180

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARImageComponent::execSetImageComponentDebugMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [16];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarImageComponentDebugMode._8_8_,(uint)local_res10[0],
             ECVF_SetByCode,(FName)0x0);
  return;
}

