// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 20

// StaticClass @ 14cf349d0

UClass * __cdecl UARGeoAnchorComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoAnchorComponent",
               &Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton,
               StaticRegisterNativesUARGeoAnchorComponent,0x380,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARGeoAnchorComponent>,
               InternalVTableHelperCtorCaller<UARGeoAnchorComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton;
}

// UARGeoAnchorComponent @ 14cf41690

UARGeoAnchorComponent * __thiscall
UARGeoAnchorComponent::UARGeoAnchorComponent(UARGeoAnchorComponent *this,FVTableHelper *param_1)

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
  (this->ReplicatedPayload).AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedPayload).AnchorName.Data.ArrayNum = 0;
  (this->ReplicatedPayload).AnchorName.Data.ArrayMax = 0;
  (this->ReplicatedPayload).Longitude = 0.0;
  (this->ReplicatedPayload).Latitude = 0.0;
  (this->ReplicatedPayload).AltitudeMeters = 0.0;
  (this->ReplicatedPayload).AltitudeSource = Unknown;
  return this;
}

// UARGeoAnchorComponent @ 14cf41760

UARGeoAnchorComponent * __thiscall
UARGeoAnchorComponent::UARGeoAnchorComponent(UARGeoAnchorComponent *this)

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
  (this->ReplicatedPayload).AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedPayload).AnchorName.Data.ArrayNum = 0;
  (this->ReplicatedPayload).AnchorName.Data.ArrayMax = 0;
  (this->ReplicatedPayload).Longitude = 0.0;
  (this->ReplicatedPayload).Latitude = 0.0;
  (this->ReplicatedPayload).AltitudeMeters = 0.0;
  (this->ReplicatedPayload).AltitudeSource = Unknown;
  return this;
}

// ~UARGeoAnchorComponent @ 14cf442f0

void __thiscall UARGeoAnchorComponent::~UARGeoAnchorComponent(UARGeoAnchorComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).AnchorName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetDebugMode @ 14cf50b10

int __cdecl UARGeoAnchorComponent::GetDebugMode(void)

{
  return GGeoAnchorComponentDebugMode;
}

// GetLifetimeReplicatedProps @ 14cf51630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARGeoAnchorComponent::GetLifetimeReplicatedProps
          (UARGeoAnchorComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf54690

UClass * __cdecl UARGeoAnchorComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoAnchorComponent",
               &Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton,
               StaticRegisterNativesUARGeoAnchorComponent,0x380,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARGeoAnchorComponent>,
               InternalVTableHelperCtorCaller<UARGeoAnchorComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf58d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARGeoAnchorComponent::OnRep_Payload(UARGeoAnchorComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 auStack_d8 [32];
  FARGeoAnchorUpdatePayload local_b8;
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
    local_b8.WorldTransform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8.WorldTransform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_b8.WorldTransform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_b8.WorldTransform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_b8.SessionPayload.ConfigFlags = 0;
    local_b8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_b8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_b8.Longitude = 0.0;
    local_b8.Latitude = 0.0;
    local_b8.AltitudeMeters = 0.0;
    local_b8.AltitudeSource = Unknown;
    local_b8.AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.AnchorName.Data.ArrayNum = 0;
    local_b8.AnchorName.Data.ArrayMax = 0;
    FARGeoAnchorUpdatePayload::operator=(&local_b8,&this->ReplicatedPayload);
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARGeoAnchorComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_b8);
    if (local_b8.AnchorName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AnchorName.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5aa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARGeoAnchorComponent::ReceiveAdd(UARGeoAnchorComponent *this,FARGeoAnchorUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_d8 [32];
  FARGeoAnchorUpdatePayload local_b8;
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
  local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.Longitude = 0.0;
  local_b8.Latitude = 0.0;
  local_b8.AltitudeMeters = 0.0;
  local_b8.AltitudeSource = Unknown;
  local_b8.AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AnchorName.Data.ArrayNum = 0;
  local_b8.AnchorName.Data.ArrayMax = 0;
  FARGeoAnchorUpdatePayload::operator=(&local_b8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARGeoAnchorComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_b8);
  if (local_b8.AnchorName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AnchorName.Data.AllocatorInstance.Data);
  }
  return;
}

// ReceiveUpdate @ 14cf5b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARGeoAnchorComponent::ReceiveUpdate(UARGeoAnchorComponent *this,FARGeoAnchorUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_d8 [32];
  FARGeoAnchorUpdatePayload local_b8;
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
  local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.Longitude = 0.0;
  local_b8.Latitude = 0.0;
  local_b8.AltitudeMeters = 0.0;
  local_b8.AltitudeSource = Unknown;
  local_b8.AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AnchorName.Data.ArrayNum = 0;
  local_b8.AnchorName.Data.ArrayMax = 0;
  FARGeoAnchorUpdatePayload::operator=(&local_b8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARGeoAnchorComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_b8);
  if (local_b8.AnchorName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AnchorName.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload @ 14cf5dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARGeoAnchorComponent::ServerUpdatePayload
          (UARGeoAnchorComponent *this,FARGeoAnchorUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_d8 [32];
  FARGeoAnchorUpdatePayload local_b8;
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
  local_b8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.Longitude = 0.0;
  local_b8.Latitude = 0.0;
  local_b8.AltitudeMeters = 0.0;
  local_b8.AltitudeSource = Unknown;
  local_b8.AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AnchorName.Data.ArrayNum = 0;
  local_b8.AnchorName.Data.ArrayMax = 0;
  FARGeoAnchorUpdatePayload::operator=(&local_b8,param_1);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UARGeoAnchorComponent_ServerUpdatePayload);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_b8);
  if (local_b8.AnchorName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AnchorName.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e360

void __thiscall
UARGeoAnchorComponent::ServerUpdatePayload_Implementation
          (UARGeoAnchorComponent *this,FARGeoAnchorUpdatePayload *param_1)

{
  FARGeoAnchorUpdatePayload::operator=(&this->ReplicatedPayload,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e560

bool __thiscall
UARGeoAnchorComponent::ServerUpdatePayload_Validate
          (UARGeoAnchorComponent *this,FARGeoAnchorUpdatePayload *param_1)

{
  return true;
}

// SetGeoAnchorComponentDebugMode @ 14cf5fda0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode param_1)

{
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarGeoAnchorComponentDebugMode._8_8_,(uint)param_1,ECVF_SetByCode,
             (FName)0x0);
  return;
}

// StaticRegisterNativesUARGeoAnchorComponent @ 14cf610b0

void __cdecl UARGeoAnchorComponent::StaticRegisterNativesUARGeoAnchorComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARGeoAnchorComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cf621d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UARGeoAnchorComponent::TickComponent
          (UARGeoAnchorComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  EARAltitudeSource EVar1;
  undefined4 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  longlong lVar10;
  EARAltitudeSource *pEVar11;
  double dVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_288 [32];
  EARAltitudeSource local_248 [16];
  initializer_list<TPairInitializer<EARAltitudeSource_const_&,FString_const_&>_> local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  undefined1 local_1d8 [16];
  double local_1c8;
  double local_1b0;
  FLinearColor_u_0 local_1a8;
  TVector<double>_u_0 local_198;
  TRotator<double> local_178;
  TRotator<double> local_158;
  TVector<double>_u_0 local_138;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  TPairInitializer<EARAltitudeSource_const_&,FString_const_&> local_d8;
  EARAltitudeSource *local_c8;
  FString *local_c0;
  EARAltitudeSource *local_b8;
  FString *local_b0;
  EARAltitudeSource *local_a8;
  FString *local_a0;
  TPairInitializer<EARAltitudeSource_const_&,FString_const_&> local_98 [7];
  
  local_98[0].Key = (EARAltitudeSource *)(__security_cookie.value ^ (ulonglong)auStackY_288);
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (GGeoAnchorComponentDebugMode == 1) {
    auVar14 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64;
    dVar16 = auVar14._0_8_;
    local_e8 = __real_4024000000000000;
    dVar8 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    dVar22 = __real_4024000000000000 *
             (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dVar5 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_118 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64
    ;
    dVar15 = local_118._8_8_;
    auVar17 = blendpd(local_118,auVar14,2);
    local_f8 = 0;
    uStack_f0 = 0;
    dVar6 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] * 0.0;
    dVar7 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] * 0.0;
    dVar4 = dVar22 * dVar15 - dVar16 * dVar7;
    auVar19._8_4_ = SUB84(dVar7,0);
    auVar19._0_8_ = dVar6;
    auVar19._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar22;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar12 = blendpd(auVar19,auVar12,2);
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar7 * local_118._0_8_ - dVar15 * dVar6;
    auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar13._0_8_ = auVar12._0_8_ * dVar16 - auVar17._0_8_ * dVar22;
    auVar13._8_8_ = auVar12._8_8_ * auVar14._8_8_ - auVar17._8_8_ * dVar5;
    auVar12 = blendpd(auVar23,auVar13,2);
    auVar24._0_8_ = auVar12._0_8_ + auVar12._0_8_;
    auVar24._8_8_ = auVar12._8_8_ + auVar12._8_8_;
    dVar4 = dVar4 + dVar4;
    dVar5 = auVar13._0_8_ + auVar13._0_8_;
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar19 = blendpd(auVar18,auVar24,2);
    auVar12 = blendpd(local_118,auVar14,2);
    dVar21 = auVar24._0_8_ * dVar15 - dVar16 * dVar5;
    auVar17._8_4_ = SUB84(dVar21,0);
    auVar17._0_8_ = dVar5 * local_118._0_8_ - dVar15 * dVar4;
    auVar17._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ * dVar16 - auVar12._0_8_ * auVar24._0_8_;
    auVar20._8_8_ = auVar19._8_8_ * auVar14._8_8_ - auVar12._8_8_ * auVar24._8_8_;
    auVar14 = blendpd(auVar17,auVar20,2);
    dVar22 = auVar24._0_8_ * dVar8 + dVar22 + auVar14._0_8_ +
             (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    dVar4 = dVar8 * dVar4 + dVar6 + dVar21 +
            (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    dVar5 = dVar8 * dVar5 + dVar7 + auVar20._0_8_ +
            (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    uVar25 = SUB84(dVar5,0);
    uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
    local_1d8._8_4_ = uVar25;
    local_1d8._0_8_ = dVar4;
    local_1d8._12_4_ = uVar26;
    local_1c8 = dVar22;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_248[0] = Precise;
      ::FString::FString(&local_1f8,L"Precise");
      local_d8.Key = local_248;
      local_248[1] = 1;
      local_d8.Value = &local_1f8;
      ::FString::FString(&local_208,L"Coarse");
      local_c8 = local_248 + 1;
      local_248[2] = 2;
      local_c0 = &local_208;
      ::FString::FString(&local_218,L"UserDefined");
      local_b8 = local_248 + 2;
      local_248[3] = 3;
      local_b0 = &local_218;
      ::FString::FString(&local_228,L"Unknown");
      local_a8 = local_248 + 3;
      local_a0 = &local_228;
      local_238._First = &local_d8;
      local_238._Last = local_98;
      TMap<enum_EARAltitudeSource,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARAltitudeSource,FString,0>_>
      ::
      TMap<enum_EARAltitudeSource,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARAltitudeSource,FString,0>_>
                (&AltitudeSourceNames,&local_238);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      atexit(`UARGeoAnchorComponent::TickComponent'::__l5::
             _dynamic_atexit_destructor_for__AltitudeSourceNames__);
      _Init_thread_footer(&::_TSS0);
    }
    EVar1 = (this->ReplicatedPayload).AltitudeSource;
    if (AltitudeSourceNames._8_4_ != AltitudeSourceNames._52_4_) {
      lVar10 = 0x155352878;
      if (AltitudeSourceNames._64_8_ != 0) {
        lVar10 = AltitudeSourceNames._64_8_;
      }
      uVar2 = *(int *)(lVar10 + ((ulonglong)(AltitudeSourceNames._72_4_ - 1) & (ulonglong)EVar1) * 4
                      );
      while (uVar2 != 0xffffffff) {
        pEVar11 = (EARAltitudeSource *)((longlong)(int)uVar2 * 0x20 + AltitudeSourceNames._0_8_);
        if (*pEVar11 == EVar1) {
          if (pEVar11 != (EARAltitudeSource *)0x0) goto LAB_14cf62466;
          break;
        }
        uVar2 = *(undefined4 *)(pEVar11 + 0x18);
      }
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14cf62466:
    ::FString::PrintfImpl
              (&local_1e8,
               L"%s: Longitude (%f), Latitude (%f), AltitudeMeters (%f), AltitudeSource (%s)");
    local_1a8 = FLinearColor::Yellow.field0_0x0;
    local_198._8_4_ = uVar25;
    local_198._0_8_ = dVar4;
    local_198._12_4_ = uVar26;
    local_198._s_0.Z = dVar22;
    UKismetSystemLibrary::DrawDebugString
              ((UObject *)this,(TVector<double> *)&local_198._s_0,&local_1e8,(AActor *)0x0,
               (FLinearColor *)&local_1a8._s_0,0.0);
    local_118 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64
    ;
    local_108 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0];
    dStack_100 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_118,&local_178);
    local_1b0 = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    local_138._s_0.X = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    local_138._s_0.Y = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    local_158.Pitch = local_178.Pitch;
    local_158.Yaw = local_178.Yaw;
    local_158.Roll = local_178.Roll;
    local_138._s_0.Z = local_1b0;
    UKismetSystemLibrary::DrawDebugCoordinateSystem
              ((UObject *)this,(TVector<double> *)&local_138._s_0,&local_158,__real_41700000,0.0,0.0
               ,World);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Update @ 14cf64480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARGeoAnchorComponent::Update(UARGeoAnchorComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  UMRMeshComponent *pUVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TTransform<double> *pTVar5;
  UFunction *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  UARTrackedGeometry *this_00;
  undefined1 auStackY_248 [32];
  FName local_208;
  FName local_200;
  FString local_1f8;
  FString local_1e8;
  FARGeoAnchorUpdatePayload local_1d8;
  int local_138 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_130;
  TObjectPtr<UMaterialInterface>_u_0 local_128;
  double local_118;
  double dStack_110;
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
  float local_b8;
  float local_b4;
  float local_b0;
  EARAltitudeSource local_ac;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xba,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar7 = UARGeoAnchor::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar7->_padding_)) goto LAB_14cf6450d;
  }
  this_00 = (UARTrackedGeometry *)0x0;
LAB_14cf6450d:
  if (this_00 == (UARTrackedGeometry *)0x0) {
    if ((byte)LogAR._0_1_ < 3) {
      return;
    }
    pUVar7 = UARGeoAnchor::StaticClass();
    local_208 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_208,&local_1e8);
    pUVar7 = StaticClass();
    local_200 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_200,&local_1f8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_1d8.WorldTransform.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1d8.WorldTransform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1d8.WorldTransform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1d8.WorldTransform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_1d8.WorldTransform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1d8.WorldTransform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_1d8.SessionPayload.ConfigFlags = 0;
    local_1d8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_1d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_1d8.Longitude = 0.0;
    local_1d8.Latitude = 0.0;
    local_1d8.AltitudeMeters = 0.0;
    local_1d8.AltitudeSource = Unknown;
    local_1d8.AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.AnchorName.Data.ArrayNum = 0;
    local_1d8.AnchorName.Data.ArrayMax = 0;
    UARTrackedGeometry::UpdateSessionPayload(this_00,&local_1d8.SessionPayload);
    pTVar5 = UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_98);
    local_1d8.WorldTransform.Rotation.XY.m128d_f64 = *&(pTVar5->Rotation).XY.m128d_f64;
    local_1d8.WorldTransform.Rotation.ZW.m128d_f64 = *&(pTVar5->Rotation).ZW.m128d_f64;
    local_1d8.WorldTransform.Translation.XY.m128d_f64 = *&(pTVar5->Translation).XY.m128d_f64;
    local_1d8.WorldTransform.Translation.ZW.m128d_f64 = *&(pTVar5->Translation).ZW.m128d_f64;
    local_1d8.WorldTransform.Scale3D.XY.m128d_f64 = *&(pTVar5->Scale3D).XY.m128d_f64;
    local_1d8.WorldTransform.Scale3D.ZW.m128d_f64 = *&(pTVar5->Scale3D).ZW.m128d_f64;
    local_1d8.AltitudeSource = this_00[1].field_0x4;
    local_1d8.AltitudeMeters = *(float *)(this_00 + 1);
    local_1d8.Longitude = *(float *)&this_00->field_0x158;
    local_1d8.Latitude = *(float *)&this_00->field_0x15c;
    ::FString::operator=(&local_1d8.AnchorName,&this_00->AnchorName);
    ReceiveUpdate(this,&local_1d8);
    if ((char)this->_padding_ != '\0') {
      local_138[0] = local_1d8.SessionPayload.ConfigFlags;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_9c = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1d8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1d8.SessionPayload.DefaultMeshMaterial.field0_0x0);
      }
      local_130 = local_1d8.SessionPayload.DefaultMeshMaterial.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)local_1d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0);
      }
      _Src.Data = local_1d8.AnchorName.Data.AllocatorInstance.Data;
      iVar1 = local_1d8.AnchorName.Data.ArrayNum;
      lVar8 = (longlong)local_1d8.AnchorName.Data.ArrayNum;
      local_118 = local_1d8.WorldTransform.Rotation.XY.m128d_f64[0];
      dStack_110 = local_1d8.WorldTransform.Rotation.XY.m128d_f64[1];
      local_f8 = local_1d8.WorldTransform.Translation.XY.m128d_f64[0];
      dStack_f0 = local_1d8.WorldTransform.Translation.XY.m128d_f64[1];
      local_108 = local_1d8.WorldTransform.Rotation.ZW.m128d_f64[0];
      dStack_100 = local_1d8.WorldTransform.Rotation.ZW.m128d_f64[1];
      local_d8 = local_1d8.WorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_d0 = local_1d8.WorldTransform.Scale3D.XY.m128d_f64[1];
      local_e8 = local_1d8.WorldTransform.Translation.ZW.m128d_f64[0];
      dStack_e0 = local_1d8.WorldTransform.Translation.ZW.m128d_f64[1];
      local_b8 = local_1d8.Longitude;
      local_c8 = local_1d8.WorldTransform.Scale3D.ZW.m128d_f64[0];
      dStack_c0 = local_1d8.WorldTransform.Scale3D.ZW.m128d_f64[1];
      local_b0 = local_1d8.AltitudeMeters;
      local_b4 = local_1d8.Latitude;
      local_ac = local_1d8.AltitudeSource;
      local_a0 = local_1d8.AnchorName.Data.ArrayNum;
      local_128 = local_1d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0;
      if (((local_1d8.AnchorName.Data.ArrayNum != 0) || (local_9c != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d8.AnchorName.Data.ArrayNum,local_9c,&local_a8,
                     local_1d8.AnchorName.Data.ArrayNum,&local_9c), iVar1 != 0)) {
        memcpy(local_a8.Data,_Src.Data,lVar8 * 2);
      }
      pUVar6 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARGeoAnchorComponent_ServerUpdatePayload);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar6,local_138);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (*(char *)(this->_padding_ + 0x168) != '\x03') {
        FARGeoAnchorUpdatePayload::operator=(&this->ReplicatedPayload,&local_1d8);
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
    local_1e8.Data.AllocatorInstance.Data = local_1d8.AnchorName.Data.AllocatorInstance.Data;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf68d70

void __thiscall
UARGeoAnchorComponent::ValidateGeneratedRepEnums
          (UARGeoAnchorComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0x150a,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARGeoAnchorComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf72980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARGeoAnchorComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined4 local_30;
  undefined1 local_2c;
  void *local_28;
  undefined8 local_20;
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
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_38 = 0;
  local_30 = 0;
  local_2c = 3;
  local_28 = (void *)0x0;
  local_20 = 0;
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
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetGeoAnchorComponentDebugMode @ 14cf740f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARGeoAnchorComponent::execSetGeoAnchorComponentDebugMode
          (UObject *param_1,FFrame *param_2,void *param_3)

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
            ((IConsoleVariable *)CVarGeoAnchorComponentDebugMode._8_8_,(uint)local_res10[0],
             ECVF_SetByCode,(FName)0x0);
  return;
}

