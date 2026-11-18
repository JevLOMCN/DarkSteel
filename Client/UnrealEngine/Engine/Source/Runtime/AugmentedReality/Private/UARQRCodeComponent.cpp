// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 21

// StaticClass @ 14cf32e70

UClass * __cdecl UARQRCodeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARQRCodeComponent",
               &Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton,
               StaticRegisterNativesUARQRCodeComponent,0x390,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARQRCodeComponent>,
               InternalVTableHelperCtorCaller<UARQRCodeComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton;
}

// UARQRCodeComponent @ 14cf424b0

UARQRCodeComponent * __thiscall
UARQRCodeComponent::UARQRCodeComponent(UARQRCodeComponent *this,FVTableHelper *param_1)

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
  (this->ReplicatedPayload).Extents.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).Extents.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).Extents.field0_0x0._s_0.Z = 0.0;
  (this->ReplicatedPayload).QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedPayload).QRCode.Data.ArrayNum = 0;
  (this->ReplicatedPayload).QRCode.Data.ArrayMax = 0;
  return this;
}

// UARQRCodeComponent @ 14cf42580

UARQRCodeComponent * __thiscall UARQRCodeComponent::UARQRCodeComponent(UARQRCodeComponent *this)

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
  (this->ReplicatedPayload).Extents.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).Extents.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).Extents.field0_0x0._s_0.Z = 0.0;
  (this->ReplicatedPayload).QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedPayload).QRCode.Data.ArrayNum = 0;
  (this->ReplicatedPayload).QRCode.Data.ArrayMax = 0;
  return this;
}

// ~UARQRCodeComponent @ 14cf44700

void __thiscall UARQRCodeComponent::~UARQRCodeComponent(UARQRCodeComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).QRCode.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetDebugMode @ 14cf50b50

int __cdecl UARQRCodeComponent::GetDebugMode(void)

{
  return GQRCodeComponentDebugMode;
}

// GetLifetimeReplicatedProps @ 14cf51c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARQRCodeComponent::GetLifetimeReplicatedProps
          (UARQRCodeComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf550e0

UClass * __cdecl UARQRCodeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARQRCodeComponent",
               &Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton,
               StaticRegisterNativesUARQRCodeComponent,0x390,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARQRCodeComponent>,
               InternalVTableHelperCtorCaller<UARQRCodeComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf59450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARQRCodeComponent::OnRep_Payload(UARQRCodeComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 auStack_e8 [32];
  FARQRCodeUpdatePayload local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if ((char)this->_padding_ == '\0') {
    ReceiveUpdate(this,&this->ReplicatedPayload);
  }
  else {
    local_c8.WorldTransform.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_c8.WorldTransform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_c8.WorldTransform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_c8.WorldTransform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_c8.WorldTransform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_c8.WorldTransform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_c8.Extents.field0_0x0._s_0.Z = 0.0;
    local_c8.Extents.field0_0x0._s_0.X = 0.0;
    local_c8.Extents.field0_0x0._s_0.Y = 0.0;
    local_c8.SessionPayload.ConfigFlags = 0;
    local_c8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_c8.QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.QRCode.Data.ArrayNum = 0;
    local_c8.QRCode.Data.ArrayMax = 0;
    FARQRCodeUpdatePayload::operator=(&local_c8,&this->ReplicatedPayload);
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARQRCodeComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_c8);
    if (local_c8.QRCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.QRCode.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5af80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARQRCodeComponent::ReceiveAdd(UARQRCodeComponent *this,FARQRCodeUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_e8 [32];
  FARQRCodeUpdatePayload local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_c8.WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_c8.WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_c8.WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_c8.SessionPayload.ConfigFlags = 0;
  local_c8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_c8.WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_c8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_c8.Extents.field0_0x0._s_0.Z = 0.0;
  local_c8.Extents.field0_0x0._s_0.X = 0.0;
  local_c8.Extents.field0_0x0._s_0.Y = 0.0;
  local_c8.QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.QRCode.Data.ArrayNum = 0;
  local_c8.QRCode.Data.ArrayMax = 0;
  FARQRCodeUpdatePayload::operator=(&local_c8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARQRCodeComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_c8);
  if (local_c8.QRCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.QRCode.Data.AllocatorInstance.Data);
  }
  return;
}

// ReceiveUpdate @ 14cf5b7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARQRCodeComponent::ReceiveUpdate(UARQRCodeComponent *this,FARQRCodeUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_e8 [32];
  FARQRCodeUpdatePayload local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_c8.WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_c8.WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_c8.WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_c8.SessionPayload.ConfigFlags = 0;
  local_c8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_c8.WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_c8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_c8.Extents.field0_0x0._s_0.Z = 0.0;
  local_c8.Extents.field0_0x0._s_0.X = 0.0;
  local_c8.Extents.field0_0x0._s_0.Y = 0.0;
  local_c8.QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.QRCode.Data.ArrayNum = 0;
  local_c8.QRCode.Data.ArrayMax = 0;
  FARQRCodeUpdatePayload::operator=(&local_c8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARQRCodeComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_c8);
  if (local_c8.QRCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.QRCode.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload @ 14cf5e1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARQRCodeComponent::ServerUpdatePayload(UARQRCodeComponent *this,FARQRCodeUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_e8 [32];
  FARQRCodeUpdatePayload local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.WorldTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_c8.WorldTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_c8.WorldTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_c8.WorldTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_c8.SessionPayload.ConfigFlags = 0;
  local_c8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_c8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (TObjectPtr<UMaterialInterface>_u_0)0x0;
  local_c8.WorldTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_c8.WorldTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_c8.Extents.field0_0x0._s_0.Z = 0.0;
  local_c8.Extents.field0_0x0._s_0.X = 0.0;
  local_c8.Extents.field0_0x0._s_0.Y = 0.0;
  local_c8.QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.QRCode.Data.ArrayNum = 0;
  local_c8.QRCode.Data.ArrayMax = 0;
  FARQRCodeUpdatePayload::operator=(&local_c8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARQRCodeComponent_ServerUpdatePayload)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_c8);
  if (local_c8.QRCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.QRCode.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e510

void __thiscall
UARQRCodeComponent::ServerUpdatePayload_Implementation
          (UARQRCodeComponent *this,FARQRCodeUpdatePayload *param_1)

{
  FARQRCodeUpdatePayload::operator=(&this->ReplicatedPayload,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e5d0

bool __thiscall
UARQRCodeComponent::ServerUpdatePayload_Validate
          (UARQRCodeComponent *this,FARQRCodeUpdatePayload *param_1)

{
  return true;
}

// SetQRCodeComponentDebugMode @ 14cf60860

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode param_1)

{
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarQRCodeComponentDebugMode._8_8_,(uint)param_1,ECVF_SetByCode,
             (FName)0x0);
  return;
}

// StaticRegisterNativesUARQRCodeComponent @ 14cf61400

void __cdecl UARQRCodeComponent::StaticRegisterNativesUARQRCodeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARQRCodeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cf63640

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
UARQRCodeComponent::TickComponent
          (UARQRCodeComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  FLinearColor_u_0 local_78;
  TVector<double>_u_0 local_68 [4];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (GQRCodeComponentDebugMode == 1) {
    auVar15 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64;
    dVar7 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    dVar3 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] * 0.0;
    dVar4 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] * 0.0;
    uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = __real_4024000000000000 *
            (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dVar6 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar8 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar3;
    auVar17._12_4_ = uVar16;
    dVar2 = auVar15._0_8_;
    auVar10 = blendpd(auVar8,auVar15,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar3;
    auVar18._8_8_ = dVar5 * auVar8._8_8_ - dVar2 * dVar4;
    auVar19._8_4_ = SUB84(dVar4,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = uVar16;
    auVar8._8_4_ = SUB84(dVar6,0);
    auVar8._0_8_ = dVar5;
    auVar8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar8 = blendpd(auVar19,auVar8,2);
    auVar9._0_8_ = auVar8._0_8_ * dVar2 - auVar10._0_8_ * dVar5;
    auVar9._8_8_ = auVar8._8_8_ * auVar15._8_8_ - auVar10._8_8_ * dVar6;
    auVar8 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar19 = blendpd(auVar18,auVar9,2);
    dVar6 = auVar18._8_8_ + auVar18._8_8_;
    dVar1 = auVar9._0_8_ + auVar9._0_8_;
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar13._8_4_ = SUB84(dVar1,0);
    auVar13._0_8_ = dVar6;
    auVar13._12_4_ = uVar16;
    auVar11._8_4_ = SUB84(dVar1,0);
    auVar11._0_8_ = dVar6;
    auVar11._12_4_ = uVar16;
    auVar19 = blendpd(auVar11,auVar20,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar6;
    auVar14._8_8_ = auVar20._0_8_ * auVar8._8_8_ - dVar2 * dVar1;
    auVar10._8_4_ = SUB84(auVar14._8_8_,0);
    auVar10._0_8_ = auVar14._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar15,2);
    auVar12._0_8_ = auVar19._0_8_ * dVar2 - auVar8._0_8_ * auVar20._0_8_;
    auVar12._8_8_ = auVar19._8_8_ * auVar15._8_8_ - auVar8._8_8_ * auVar20._8_8_;
    dVar2 = dVar1 * dVar7 + dVar4 + auVar12._0_8_ +
            (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    auVar15 = blendpd(auVar14,auVar12,2);
    local_78 = FLinearColor::Yellow.field0_0x0;
    local_68[0]._16_8_ =
         auVar20._0_8_ * dVar7 + dVar5 + auVar15._0_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    local_68[0]._8_4_ = SUB84(dVar2,0);
    local_68[0]._0_8_ =
         dVar6 * dVar7 + dVar3 + auVar10._8_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    local_68[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    UKismetSystemLibrary::DrawDebugString
              ((UObject *)this,(TVector<double> *)&local_68[0]._s_0,
               &(this->ReplicatedPayload).QRCode,(AActor *)0x0,(FLinearColor *)&local_78._s_0,0.0);
  }
  return;
}

// Update @ 14cf65ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARQRCodeComponent::Update(UARQRCodeComponent *this,UARTrackedGeometry *param_1)

{
  UMRMeshComponent *pUVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  UFunction *pUVar4;
  UClass *pUVar5;
  int iVar6;
  longlong lVar7;
  UARTrackedGeometry *this_00;
  undefined1 auStackY_288 [32];
  FName local_248;
  FName local_240;
  FString local_238;
  FString local_228 [3];
  FARQRCodeUpdatePayload local_1f8;
  int local_148 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_140;
  TObjectPtr<UMaterialInterface>_u_0 local_138;
  double local_128;
  double dStack_120;
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
  double local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4 [3];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar5 = UARTrackedQRCode::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
       &pUVar5->_padding_)) goto LAB_14cf65c2d;
  }
  this_00 = (UARTrackedGeometry *)0x0;
LAB_14cf65c2d:
  if (this_00 == (UARTrackedGeometry *)0x0) {
    if ((byte)LogAR._0_1_ < 3) {
      return;
    }
    pUVar5 = UARTrackedQRCode::StaticClass();
    local_248 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_248,local_228);
    pUVar5 = StaticClass();
    local_240 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_240,&local_238);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_1f8.SessionPayload.ConfigFlags = 0;
    local_1f8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_1f8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_1f8.QRCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.QRCode.Data.ArrayNum = 0;
    local_1f8.QRCode.Data.ArrayMax = 0;
    UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_98);
    local_1f8.WorldTransform.Rotation.ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
    local_1f8.WorldTransform.Rotation.ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
    local_1f8.WorldTransform.Translation.ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
    local_1f8.WorldTransform.Translation.ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
    iVar6 = *(int *)&this_00[1].field_0x18 + -1;
    if (*(int *)&this_00[1].field_0x18 == 0) {
      iVar6 = 0;
    }
    local_1f8.WorldTransform.Rotation.XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
    local_1f8.WorldTransform.Rotation.XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
    local_1f8.WorldTransform.Scale3D.ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
    local_1f8.WorldTransform.Scale3D.ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
    local_1f8.Extents.field0_0x0._s_0.X = (double)*(undefined8 *)(this_00 + 1);
    local_1f8.Extents.field0_0x0._s_0.Y = (double)*(undefined8 *)&this_00[1].field_0x8;
    local_1f8.WorldTransform.Translation.XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
    local_1f8.WorldTransform.Translation.XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
    local_1f8.WorldTransform.Scale3D.XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
    local_1f8.WorldTransform.Scale3D.XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
    local_1f8.Extents.field0_0x0._s_0.Z = 0.0;
    ::FString::AssignRange(&local_1f8.QRCode,*(wchar_t **)&this_00[1].field_0x10,iVar6);
    UARTrackedGeometry::UpdateSessionPayload(this_00,&local_1f8.SessionPayload);
    ReceiveUpdate(this,&local_1f8);
    if ((char)this->_padding_ != '\0') {
      local_148[0] = local_1f8.SessionPayload.ConfigFlags;
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a4[0] = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1f8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1f8.SessionPayload.DefaultMeshMaterial.field0_0x0);
      }
      local_140 = local_1f8.SessionPayload.DefaultMeshMaterial.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1f8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)local_1f8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0);
      }
      _Src.Data = local_1f8.QRCode.Data.AllocatorInstance.Data;
      iVar6 = local_1f8.QRCode.Data.ArrayNum;
      lVar7 = (longlong)local_1f8.QRCode.Data.ArrayNum;
      local_128 = local_1f8.WorldTransform.Rotation.XY.m128d_f64[0];
      dStack_120 = local_1f8.WorldTransform.Rotation.XY.m128d_f64[1];
      local_118 = local_1f8.WorldTransform.Rotation.ZW.m128d_f64[0];
      dStack_110 = local_1f8.WorldTransform.Rotation.ZW.m128d_f64[1];
      local_108 = local_1f8.WorldTransform.Translation.XY.m128d_f64[0];
      dStack_100 = local_1f8.WorldTransform.Translation.XY.m128d_f64[1];
      local_f8 = local_1f8.WorldTransform.Translation.ZW.m128d_f64[0];
      dStack_f0 = local_1f8.WorldTransform.Translation.ZW.m128d_f64[1];
      local_e8 = local_1f8.WorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_e0 = local_1f8.WorldTransform.Scale3D.XY.m128d_f64[1];
      local_d8 = local_1f8.WorldTransform.Scale3D.ZW.m128d_f64[0];
      dStack_d0 = local_1f8.WorldTransform.Scale3D.ZW.m128d_f64[1];
      local_c8 = local_1f8.Extents.field0_0x0._s_0.X;
      dStack_c0 = local_1f8.Extents.field0_0x0._s_0.Y;
      local_b8 = local_1f8.Extents.field0_0x0._s_0.Z;
      local_a8 = local_1f8.QRCode.Data.ArrayNum;
      local_138 = local_1f8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0;
      if (((local_1f8.QRCode.Data.ArrayNum != 0) || (local_a4[0] != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1f8.QRCode.Data.ArrayNum,local_a4[0],&local_b0,
                     local_1f8.QRCode.Data.ArrayNum,local_a4), iVar6 != 0)) {
        memcpy(local_b0.Data,_Src.Data,lVar7 * 2);
      }
      pUVar4 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARQRCodeComponent_ServerUpdatePayload);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar4,local_148);
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (*(char *)(this->_padding_ + 0x168) != '\x03') {
        FARQRCodeUpdatePayload::operator=(&this->ReplicatedPayload,&local_1f8);
        (**(code **)(this->_padding_ + 0x658))(this);
      }
    }
    pUVar1 = (UMRMeshComponent *)this->_padding_;
    if (pUVar1 != (UMRMeshComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      (this_00->UnderlyingMesh).field0_0x0.DebugPtr = pUVar1;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UARTrackedGeometry *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->_padding_ = (longlong)param_1;
    local_228[0].Data.AllocatorInstance.Data = local_1f8.QRCode.Data.AllocatorInstance.Data;
  }
  if (local_228[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228[0].Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateVisualization_Implementation @ 14cf68960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARQRCodeComponent::UpdateVisualization_Implementation(UARQRCodeComponent *this)

{
  UMRMeshComponent *pUVar1;
  bool bVar2;
  
  bVar2 = GQRCodeComponentDebugMode != 0;
  if (this->_padding_ == 0) {
    pUVar1 = CreateMRMeshComponent
                       ((AActor *)this->_padding_,&(this->ReplicatedPayload).SessionPayload,
                        (UMaterialInterface *)this->_padding_,(UMaterialInterface *)this->_padding_,
                        bVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMRMeshComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy> *)
               &this->_padding_,pUVar1);
  }
  if ((UMRMeshComponent *)this->_padding_ != (UMRMeshComponent *)0x0) {
    UpdatePlaneMesh((UMRMeshComponent *)this->_padding_,&(this->ReplicatedPayload).WorldTransform,
                    &UE::Math::TVector<double>::ZeroVector,&(this->ReplicatedPayload).Extents);
    UARComponent::ManageMeshComponentForDebugMode
              ((UARComponent *)this,bVar2,&(this->ReplicatedPayload).SessionPayload);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf694e0

void __thiscall
UARQRCodeComponent::ValidateGeneratedRepEnums
          (UARQRCodeComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0xe40,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARQRCodeComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf731f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARQRCodeComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_c8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_c8);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// execSetQRCodeComponentDebugMode @ 14cf74680

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARQRCodeComponent::execSetQRCodeComponentDebugMode(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((IConsoleVariable *)CVarQRCodeComponentDebugMode._8_8_,(uint)local_res10[0],
             ECVF_SetByCode,(FName)0x0);
  return;
}

