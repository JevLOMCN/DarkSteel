// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 17

// StaticClass @ 14cf34690

UClass * __cdecl UARMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARMeshComponent",
               &Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton,
               StaticRegisterNativesUARMeshComponent,0x370,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARMeshComponent>,
               InternalVTableHelperCtorCaller<UARMeshComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton;
}

// UARMeshComponent @ 14cf41c70

UARMeshComponent * __thiscall
UARMeshComponent::UARMeshComponent(UARMeshComponent *this,FVTableHelper *param_1)

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
  (this->ReplicatedPayload).ObjectClassification = Unknown;
  return this;
}

// UARMeshComponent @ 14cf41d20

UARMeshComponent * __thiscall UARMeshComponent::UARMeshComponent(UARMeshComponent *this)

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
  (this->ReplicatedPayload).ObjectClassification = Unknown;
  return this;
}

// ~UARMeshComponent @ 14cf444e0

void __thiscall UARMeshComponent::~UARMeshComponent(UARMeshComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetLifetimeReplicatedProps @ 14cf517f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARMeshComponent::GetLifetimeReplicatedProps
          (UARMeshComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf54af0

UClass * __cdecl UARMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARMeshComponent",
               &Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton,
               StaticRegisterNativesUARMeshComponent,0x370,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARMeshComponent>,
               InternalVTableHelperCtorCaller<UARMeshComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf58f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARMeshComponent::OnRep_Payload(UARMeshComponent *this)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  UFunction *pUVar3;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_a0;
  TObjectPtr<UMaterialInterface>_u_0 local_98;
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  EARObjectClassification local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar2) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if ((char)this->_padding_ == '\0') {
    ReceiveUpdate(this,&this->ReplicatedPayload);
  }
  else {
    local_a8[0] = (this->ReplicatedPayload).SessionPayload.ConfigFlags;
    local_88[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_88[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_78[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_78[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_68[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_68[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_58[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_58[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_48[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_48[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_38[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_38[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr,
       pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_a0 = (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.
                 DebugPtr, pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_88 = *&(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    local_98 = (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0;
    local_78 = *&(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64;
    local_68 = *&(this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64;
    local_28 = (this->ReplicatedPayload).ObjectClassification;
    local_58 = *&(this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64;
    local_48 = *&(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64;
    local_38 = *&(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64;
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_UARMeshComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,local_a8);
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5abd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARMeshComponent::ReceiveAdd(UARMeshComponent *this,FARMeshUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UFunction *pUVar2;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_a0;
  TObjectPtr<UMaterialInterface>_u_0 local_98;
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  EARObjectClassification local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (param_1->SessionPayload).ConfigFlags;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_a0 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_88 = *&(param_1->WorldTransform).Rotation.XY.m128d_f64;
  local_98 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  local_78 = *&(param_1->WorldTransform).Rotation.ZW.m128d_f64;
  local_68 = *&(param_1->WorldTransform).Translation.XY.m128d_f64;
  local_28 = param_1->ObjectClassification;
  local_58 = *&(param_1->WorldTransform).Translation.ZW.m128d_f64;
  local_48 = *&(param_1->WorldTransform).Scale3D.XY.m128d_f64;
  local_38 = *&(param_1->WorldTransform).Scale3D.ZW.m128d_f64;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARMeshComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_a8);
  return;
}

// ReceiveUpdate @ 14cf5b430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARMeshComponent::ReceiveUpdate(UARMeshComponent *this,FARMeshUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UFunction *pUVar2;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_a0;
  TObjectPtr<UMaterialInterface>_u_0 local_98;
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  EARObjectClassification local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (param_1->SessionPayload).ConfigFlags;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_a0 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_88 = *&(param_1->WorldTransform).Rotation.XY.m128d_f64;
  local_98 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  local_78 = *&(param_1->WorldTransform).Rotation.ZW.m128d_f64;
  local_68 = *&(param_1->WorldTransform).Translation.XY.m128d_f64;
  local_28 = param_1->ObjectClassification;
  local_58 = *&(param_1->WorldTransform).Translation.ZW.m128d_f64;
  local_48 = *&(param_1->WorldTransform).Scale3D.XY.m128d_f64;
  local_38 = *&(param_1->WorldTransform).Scale3D.ZW.m128d_f64;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARMeshComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_a8);
  return;
}

// ServerUpdatePayload @ 14cf5de20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARMeshComponent::ServerUpdatePayload(UARMeshComponent *this,FARMeshUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UFunction *pUVar2;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_a0;
  TObjectPtr<UMaterialInterface>_u_0 local_98;
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  EARObjectClassification local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (param_1->SessionPayload).ConfigFlags;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_a0 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_88 = *&(param_1->WorldTransform).Rotation.XY.m128d_f64;
  local_98 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  local_78 = *&(param_1->WorldTransform).Rotation.ZW.m128d_f64;
  local_68 = *&(param_1->WorldTransform).Translation.XY.m128d_f64;
  local_28 = param_1->ObjectClassification;
  local_58 = *&(param_1->WorldTransform).Translation.ZW.m128d_f64;
  local_48 = *&(param_1->WorldTransform).Scale3D.XY.m128d_f64;
  local_38 = *&(param_1->WorldTransform).Scale3D.ZW.m128d_f64;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARMeshComponent_ServerUpdatePayload);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_a8);
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e3c0

void __thiscall
UARMeshComponent::ServerUpdatePayload_Implementation
          (UARMeshComponent *this,FARMeshUpdatePayload *param_1)

{
  FARMeshUpdatePayload::operator=(&this->ReplicatedPayload,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e580

bool __thiscall
UARMeshComponent::ServerUpdatePayload_Validate(UARMeshComponent *this,FARMeshUpdatePayload *param_1)

{
  return true;
}

// StaticRegisterNativesUARMeshComponent @ 14cf61200

void __cdecl UARMeshComponent::StaticRegisterNativesUARMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 14cf64c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARMeshComponent::Update(UARMeshComponent *this,UARTrackedGeometry *param_1)

{
  UMRMeshComponent *pUVar1;
  code *pcVar2;
  TObjectPtr<UMaterialInterface> TVar3;
  TObjectPtr<UMaterialInterface> TVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  UFunction *pUVar7;
  UClass *pUVar8;
  UARTrackedGeometry *this_00;
  wchar_t *pwVar9;
  undefined1 auStack_208 [32];
  FScriptContainerElement *local_1e8;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FARMeshUpdatePayload local_1a8;
  int local_118 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_110;
  TObjectPtr<UMaterialInterface>_u_0 local_108;
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
  double local_a8;
  double dStack_a0;
  EARObjectClassification local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  if ((param_1 == (UARTrackedGeometry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrackedGeometry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                         ,0xb9,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = param_1;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    this_00 = (UARTrackedGeometry *)0x0;
  }
  if (this_00 == (UARTrackedGeometry *)0x0) {
    if (2 < (byte)LogAR._0_1_) {
      if ((param_1->AnchorName).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->AnchorName).Data.AllocatorInstance.Data;
      }
      pUVar8 = UARTrackedGeometry::StaticClass();
      local_1d8 = (FName)pUVar8->_padding_;
      ::FName::ToString(&local_1d8,&local_1b8);
      pUVar8 = StaticClass();
      local_1d0 = (FName)pUVar8->_padding_;
      ::FName::ToString(&local_1d0,&local_1c8);
      local_1e8 = (FScriptContainerElement *)pwVar9;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_1a8.SessionPayload.ConfigFlags = 0;
    local_1a8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_1a8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    pTVar6 = UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_88);
    local_1a8.WorldTransform.Rotation.XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
    local_1a8.WorldTransform.Rotation.XY.m128d_f64[1] = (pTVar6->Rotation).XY.m128d_f64[1];
    local_1a8.WorldTransform.Rotation.ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
    local_1a8.WorldTransform.Rotation.ZW.m128d_f64[1] = (pTVar6->Rotation).ZW.m128d_f64[1];
    local_1a8.WorldTransform.Translation.XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
    local_1a8.WorldTransform.Translation.XY.m128d_f64[1] = (pTVar6->Translation).XY.m128d_f64[1];
    local_1a8.WorldTransform.Translation.ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
    local_1a8.WorldTransform.Translation.ZW.m128d_f64[1] = (pTVar6->Translation).ZW.m128d_f64[1];
    local_1a8.WorldTransform.Scale3D.XY.m128d_f64[0] = (pTVar6->Scale3D).XY.m128d_f64[0];
    local_1a8.WorldTransform.Scale3D.XY.m128d_f64[1] = (pTVar6->Scale3D).XY.m128d_f64[1];
    local_1a8.WorldTransform.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
    local_1a8.WorldTransform.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
    local_1a8.ObjectClassification = this_00->ObjectClassification;
    UARTrackedGeometry::UpdateSessionPayload(this_00,&local_1a8.SessionPayload);
    ReceiveUpdate(this,&local_1a8);
    TVar3.field0_0x0 =
         (TObjectPtr<UMaterialInterface>_u_0)local_1a8.SessionPayload.DefaultMeshMaterial;
    if ((char)this->_padding_ != '\0') {
      local_118[0] = local_1a8.SessionPayload.ConfigFlags;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1a8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1a8.SessionPayload.DefaultMeshMaterial.field0_0x0);
      }
      TVar4.field0_0x0 =
           (TObjectPtr<UMaterialInterface>_u_0)local_1a8.SessionPayload.DefaultWireframeMeshMaterial
      ;
      local_110 = TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1a8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)local_1a8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0);
      }
      local_f8 = local_1a8.WorldTransform.Rotation.XY.m128d_f64[0];
      dStack_f0 = local_1a8.WorldTransform.Rotation.XY.m128d_f64[1];
      local_e8 = local_1a8.WorldTransform.Rotation.ZW.m128d_f64[0];
      dStack_e0 = local_1a8.WorldTransform.Rotation.ZW.m128d_f64[1];
      local_d8 = local_1a8.WorldTransform.Translation.XY.m128d_f64[0];
      dStack_d0 = local_1a8.WorldTransform.Translation.XY.m128d_f64[1];
      local_c8 = local_1a8.WorldTransform.Translation.ZW.m128d_f64[0];
      dStack_c0 = local_1a8.WorldTransform.Translation.ZW.m128d_f64[1];
      local_b8 = local_1a8.WorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_b0 = local_1a8.WorldTransform.Scale3D.XY.m128d_f64[1];
      local_a8 = local_1a8.WorldTransform.Scale3D.ZW.m128d_f64[0];
      dStack_a0 = local_1a8.WorldTransform.Scale3D.ZW.m128d_f64[1];
      local_108 = TVar4.field0_0x0;
      local_98 = local_1a8.ObjectClassification;
      pUVar7 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARMeshComponent_ServerUpdatePayload);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,local_118);
      if (*(char *)(this->_padding_ + 0x168) != '\x03') {
        FARMeshUpdatePayload::operator=(&this->ReplicatedPayload,&local_1a8);
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
  }
  return;
}

// UpdateVisualization_Implementation @ 14cf68350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARMeshComponent::UpdateVisualization_Implementation(UARMeshComponent *this)

{
  UMRMeshComponent *pUVar1;
  
  if (this->_padding_ == 0) {
    pUVar1 = CreateMRMeshComponent
                       ((AActor *)this->_padding_,&(this->ReplicatedPayload).SessionPayload,
                        (UMaterialInterface *)this->_padding_,(UMaterialInterface *)this->_padding_,
                        false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMRMeshComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy> *)
               &this->_padding_,pUVar1);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf68f90

void __thiscall
UARMeshComponent::ValidateGeneratedRepEnums
          (UARMeshComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0x136a,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARMeshComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf72c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARMeshComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_a8[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_28 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_a8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_a8);
  }
  return;
}

