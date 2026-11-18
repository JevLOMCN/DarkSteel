// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 21

// StaticClass @ 14cf30b10

UClass * __cdecl UARFaceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARFaceComponent",
               &Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton,
               StaticRegisterNativesUARFaceComponent,0x370,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARFaceComponent>,
               InternalVTableHelperCtorCaller<UARFaceComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton;
}

// UARFaceComponent @ 14cf411f0

UARFaceComponent * __thiscall
UARFaceComponent::UARFaceComponent(UARFaceComponent *this,FVTableHelper *param_1)

{
  UARComponent::UARComponent((UARComponent *)this,param_1);
  this->TransformSetting = TrackingOnly;
  this->bUpdateVertexNormal = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedPayload).SessionPayload.ConfigFlags = 0;
  (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Z = 0.0;
  (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Z = 0.0;
  (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Z = 0.0;
  (this->AccumulatedNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedNormals).ArrayNum = 0;
  (this->AccumulatedNormals).ArrayMax = 0;
  (this->TangentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentData).ArrayNum = 0;
  (this->TangentData).ArrayMax = 0;
  this->bFaceOutOfScreen = true;
  return this;
}

// UARFaceComponent @ 14cf412b0

UARFaceComponent * __thiscall UARFaceComponent::UARFaceComponent(UARFaceComponent *this)

{
  UARComponent::UARComponent((UARComponent *)this);
  this->TransformSetting = TrackingOnly;
  this->bUpdateVertexNormal = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedPayload).SessionPayload.ConfigFlags = 0;
  (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Z = 0.0;
  (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Z = 0.0;
  (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.X = 0.0;
  (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Y = 0.0;
  (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Z = 0.0;
  (this->AccumulatedNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedNormals).ArrayNum = 0;
  (this->AccumulatedNormals).ArrayMax = 0;
  (this->TangentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentData).ArrayNum = 0;
  (this->TangentData).ArrayMax = 0;
  this->bFaceOutOfScreen = true;
  return this;
}

// ~UARFaceComponent @ 14cf441e0

void __thiscall UARFaceComponent::~UARFaceComponent(UARFaceComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->TangentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccumulatedNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetDebugMode @ 14cf50b00

int __cdecl UARFaceComponent::GetDebugMode(void)

{
  return GFaceComponentDebugMode;
}

// GetLifetimeReplicatedProps @ 14cf51550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARFaceComponent::GetLifetimeReplicatedProps
          (UARFaceComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf54450

UClass * __cdecl UARFaceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARFaceComponent",
               &Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton,
               StaticRegisterNativesUARFaceComponent,0x370,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARFaceComponent>,
               InternalVTableHelperCtorCaller<UARFaceComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf58be0

void __thiscall UARFaceComponent::OnRep_Payload(UARFaceComponent *this)

{
  UMaterialInterface *pUVar1;
  bool bVar2;
  UFunction *pUVar3;
  int local_68 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_60;
  TObjectPtr<UMaterialInterface>_u_0 local_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  bVar2 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar2) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if (this->field_0x2c8 != '\0') {
    local_68[0] = (this->ReplicatedPayload).SessionPayload.ConfigFlags;
    local_50 = 0.0;
    dStack_48 = 0.0;
    dStack_40 = 0.0;
    local_38 = 0.0;
    dStack_30 = 0.0;
    local_28 = 0.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
    dStack_10 = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr,
       pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_60 = (this->ReplicatedPayload).SessionPayload.DefaultMeshMaterial.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.
                 DebugPtr, pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_50 = (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.X;
    dStack_48 = (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Y;
    local_58 = (this->ReplicatedPayload).SessionPayload.DefaultWireframeMeshMaterial.field0_0x0;
    dStack_40 = (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Z;
    local_38 = (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.X;
    dStack_30 = (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Y;
    local_28 = (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Z;
    dStack_20 = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.X;
    local_18 = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Y;
    dStack_10 = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Z;
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_UARFaceComponent_ReceiveAdd);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,local_68);
    this->field_0x2c8 = 0;
    return;
  }
  ReceiveUpdate(this,&this->ReplicatedPayload);
  return;
}

// ReceiveAdd @ 14cf5a900

void __thiscall UARFaceComponent::ReceiveAdd(UARFaceComponent *this,FARFaceUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UFunction *pUVar2;
  int local_68 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_60;
  TObjectPtr<UMaterialInterface>_u_0 local_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_68[0] = (param_1->SessionPayload).ConfigFlags;
  local_50 = 0.0;
  dStack_48 = 0.0;
  dStack_40 = 0.0;
  local_38 = 0.0;
  dStack_30 = 0.0;
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = 0.0;
  dStack_10 = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_60 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_50 = (param_1->LeftEyePosition).field0_0x0._s_0.X;
  dStack_48 = (param_1->LeftEyePosition).field0_0x0._s_0.Y;
  local_58 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  dStack_40 = (param_1->LeftEyePosition).field0_0x0._s_0.Z;
  local_38 = (param_1->RightEyePosition).field0_0x0._s_0.X;
  dStack_30 = (param_1->RightEyePosition).field0_0x0._s_0.Y;
  local_28 = (param_1->RightEyePosition).field0_0x0._s_0.Z;
  dStack_20 = (param_1->LookAtTarget).field0_0x0._s_0.X;
  local_18 = (param_1->LookAtTarget).field0_0x0._s_0.Y;
  dStack_10 = (param_1->LookAtTarget).field0_0x0._s_0.Z;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARFaceComponent_ReceiveAdd);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_68);
  return;
}

// ReceiveUpdate @ 14cf5b160

void __thiscall
UARFaceComponent::ReceiveUpdate(UARFaceComponent *this,FARFaceUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UFunction *pUVar2;
  int local_68 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_60;
  TObjectPtr<UMaterialInterface>_u_0 local_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_68[0] = (param_1->SessionPayload).ConfigFlags;
  local_50 = 0.0;
  dStack_48 = 0.0;
  dStack_40 = 0.0;
  local_38 = 0.0;
  dStack_30 = 0.0;
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = 0.0;
  dStack_10 = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_60 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_50 = (param_1->LeftEyePosition).field0_0x0._s_0.X;
  dStack_48 = (param_1->LeftEyePosition).field0_0x0._s_0.Y;
  local_58 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  dStack_40 = (param_1->LeftEyePosition).field0_0x0._s_0.Z;
  local_38 = (param_1->RightEyePosition).field0_0x0._s_0.X;
  dStack_30 = (param_1->RightEyePosition).field0_0x0._s_0.Y;
  local_28 = (param_1->RightEyePosition).field0_0x0._s_0.Z;
  dStack_20 = (param_1->LookAtTarget).field0_0x0._s_0.X;
  local_18 = (param_1->LookAtTarget).field0_0x0._s_0.Y;
  dStack_10 = (param_1->LookAtTarget).field0_0x0._s_0.Z;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARFaceComponent_ReceiveUpdate);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_68);
  return;
}

// ServerUpdatePayload @ 14cf5db50

void __thiscall
UARFaceComponent::ServerUpdatePayload(UARFaceComponent *this,FARFaceUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UFunction *pUVar2;
  int local_68 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_60;
  TObjectPtr<UMaterialInterface>_u_0 local_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_68[0] = (param_1->SessionPayload).ConfigFlags;
  local_50 = 0.0;
  dStack_48 = 0.0;
  dStack_40 = 0.0;
  local_38 = 0.0;
  dStack_30 = 0.0;
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = 0.0;
  dStack_10 = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_60 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_50 = (param_1->LeftEyePosition).field0_0x0._s_0.X;
  dStack_48 = (param_1->LeftEyePosition).field0_0x0._s_0.Y;
  local_58 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  dStack_40 = (param_1->LeftEyePosition).field0_0x0._s_0.Z;
  local_38 = (param_1->RightEyePosition).field0_0x0._s_0.X;
  dStack_30 = (param_1->RightEyePosition).field0_0x0._s_0.Y;
  local_28 = (param_1->RightEyePosition).field0_0x0._s_0.Z;
  dStack_20 = (param_1->LookAtTarget).field0_0x0._s_0.X;
  local_18 = (param_1->LookAtTarget).field0_0x0._s_0.Y;
  dStack_10 = (param_1->LookAtTarget).field0_0x0._s_0.Z;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARFaceComponent_ServerUpdatePayload);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_68);
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e330

void __thiscall
UARFaceComponent::ServerUpdatePayload_Implementation
          (UARFaceComponent *this,FARFaceUpdatePayload *param_1)

{
  FARFaceUpdatePayload::operator=(&this->ReplicatedPayload,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e550

bool __thiscall
UARFaceComponent::ServerUpdatePayload_Validate(UARFaceComponent *this,FARFaceUpdatePayload *param_1)

{
  return true;
}

// SetFaceComponentDebugMode @ 14cf5fd40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode param_1)

{
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarFaceComponentDebugMode._8_8_,(uint)param_1,ECVF_SetByCode,
             (FName)0x0);
  return;
}

// StaticRegisterNativesUARFaceComponent @ 14cf60ff0

void __cdecl UARFaceComponent::StaticRegisterNativesUARFaceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARFaceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cf62070

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
UARFaceComponent::TickComponent
          (UARFaceComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FLinearColor *pFVar1;
  FLinearColor *pFVar2;
  FLinearColor_u_0 local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (GFaceComponentDebugMode == 1) {
    local_58._s_0.X = (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.X;
    local_58._s_0.Y = (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Y;
    pFVar2 = &FLinearColor::Red;
    local_38[0]._0_8_ = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.X;
    local_38[0]._8_8_ = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Y;
    pFVar1 = &FLinearColor::Red;
    if (*(longlong *)&this->field_0x2c0 != 0) {
      pFVar1 = &FLinearColor::Green;
    }
    local_68._0_8_ = *(undefined8 *)&pFVar1->field0_0x0;
    local_68._8_8_ = *(undefined8 *)((longlong)&pFVar1->field0_0x0 + 8);
    local_58._s_0.Z = (this->ReplicatedPayload).LeftEyePosition.field0_0x0._s_0.Z;
    local_38[0]._16_8_ = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Z;
    UKismetSystemLibrary::DrawDebugLine
              ((UObject *)this,(TVector<double> *)&local_38[0]._s_0,
               (TVector<double> *)&local_58._s_0,(FLinearColor *)&local_68._s_0,0.0,0.0,World);
    local_38[0]._0_8_ = (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.X;
    local_38[0]._8_8_ = (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Y;
    if (*(longlong *)&this->field_0x2c0 != 0) {
      pFVar2 = &FLinearColor::Green;
    }
    local_58._s_0.X = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.X;
    local_58._s_0.Y = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Y;
    local_68._0_8_ = *(undefined8 *)&pFVar2->field0_0x0;
    local_68._8_8_ = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
    local_38[0]._16_8_ = (this->ReplicatedPayload).RightEyePosition.field0_0x0._s_0.Z;
    local_58._s_0.Z = (this->ReplicatedPayload).LookAtTarget.field0_0x0._s_0.Z;
    UKismetSystemLibrary::DrawDebugLine
              ((UObject *)this,(TVector<double> *)&local_58._s_0,
               (TVector<double> *)&local_38[0]._s_0,(FLinearColor *)&local_68._s_0,0.0,0.0,World);
  }
  return;
}

// Update @ 14cf641a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARFaceComponent::Update(UARFaceComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  TObjectPtr<UMaterialInterface> TVar4;
  TObjectPtr<UMaterialInterface> TVar5;
  bool bVar6;
  UFunction *pUVar7;
  UClass *pUVar8;
  UARFaceGeometry *this_00;
  FName local_res10;
  FName local_res18;
  FString local_f8;
  FString local_e8;
  FARFaceUpdatePayload local_d8;
  int local_78 [2];
  TObjectPtr<UMaterialInterface>_u_0 local_70;
  TObjectPtr<UMaterialInterface>_u_0 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb3,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar8 = UARFaceGeometry::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = (UARFaceGeometry *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar8->_padding_)) goto LAB_14cf641f4;
  }
  this_00 = (UARFaceGeometry *)0x0;
LAB_14cf641f4:
  if (this_00 == (UARFaceGeometry *)0x0) {
    if (2 < (byte)LogAR._0_1_) {
      pUVar8 = UARFaceGeometry::StaticClass();
      local_res10 = (FName)pUVar8->_padding_;
      ::FName::ToString(&local_res10,&local_e8);
      pUVar8 = StaticClass();
      local_res18 = (FName)pUVar8->_padding_;
      ::FName::ToString(&local_res18,&local_f8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_d8.SessionPayload.ConfigFlags = 0;
    local_d8.LeftEyePosition.field0_0x0._s_0.X = 0.0;
    local_d8.LeftEyePosition.field0_0x0._s_0.Y = 0.0;
    local_d8.LeftEyePosition.field0_0x0._s_0.Z = 0.0;
    local_d8.RightEyePosition.field0_0x0._s_0.X = 0.0;
    local_d8.RightEyePosition.field0_0x0._s_0.Y = 0.0;
    local_d8.RightEyePosition.field0_0x0._s_0.Z = 0.0;
    local_d8.LookAtTarget.field0_0x0._s_0.X = 0.0;
    local_d8.LookAtTarget.field0_0x0._s_0.Y = 0.0;
    local_d8.LookAtTarget.field0_0x0._s_0.Z = 0.0;
    local_d8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    UARFaceGeometry::GetNetworkPayload(this_00,&local_d8);
    ReceiveUpdate(this,&local_d8);
    TVar4.field0_0x0 =
         (TObjectPtr<UMaterialInterface>_u_0)local_d8.SessionPayload.DefaultMeshMaterial;
    if (this->field_0x2a0 != '\0') {
      local_78[0] = local_d8.SessionPayload.ConfigFlags;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_d8.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_d8.SessionPayload.DefaultMeshMaterial.field0_0x0);
      }
      TVar5.field0_0x0 =
           (TObjectPtr<UMaterialInterface>_u_0)local_d8.SessionPayload.DefaultWireframeMeshMaterial;
      local_70 = TVar4.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr !=
          (TObjectPtr<UMaterialInterface>_u_0)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)local_d8.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0);
      }
      local_60 = local_d8.LeftEyePosition.field0_0x0._s_0.X;
      dStack_58 = local_d8.LeftEyePosition.field0_0x0._s_0.Y;
      local_68 = TVar5.field0_0x0;
      local_50 = local_d8.LeftEyePosition.field0_0x0._s_0.Z;
      local_48 = local_d8.RightEyePosition.field0_0x0._s_0.X;
      dStack_40 = local_d8.RightEyePosition.field0_0x0._s_0.Y;
      local_38 = local_d8.RightEyePosition.field0_0x0._s_0.Z;
      local_30 = local_d8.LookAtTarget.field0_0x0._s_0.X;
      dStack_28 = local_d8.LookAtTarget.field0_0x0._s_0.Y;
      local_20 = local_d8.LookAtTarget.field0_0x0._s_0.Z;
      pUVar7 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARFaceComponent_ServerUpdatePayload);
      (**(code **)(*(longlong *)this + 0x260))(this,pUVar7,local_78);
      if (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) != '\x03') {
        FARFaceUpdatePayload::operator=(&this->ReplicatedPayload,&local_d8);
        (**(code **)(*(longlong *)this + 0x658))(this);
      }
    }
    pUVar2 = *(UObject **)&this->field_0x2b8;
    if (pUVar2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      this_00->_padding_ = (longlong)pUVar2;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UARTrackedGeometry *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UARTrackedGeometry **)&this->field_0x2c0 = param_1;
  }
  return;
}

// UpdateVisualization_Implementation @ 14cf67820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARFaceComponent::UpdateVisualization_Implementation(UARFaceComponent *this)

{
  EARFaceTransformMixing EVar1;
  int iVar2;
  undefined4 uVar3;
  UARTrackedGeometry *this_00;
  void *pvVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_UpdateFaceComponent> FVar12;
  UMRMeshComponent *pUVar13;
  UClass *pUVar14;
  TQuat<double> *pTVar15;
  FName FVar16;
  longlong lVar17;
  ulonglong uVar18;
  FName FVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStackY_3f8 [32];
  FName local_390;
  int local_388;
  int iStack_384;
  FColor_u_0 local_380 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_378;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_368;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_358;
  FName local_348;
  FName local_340;
  UARFaceComponent *local_330;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_328;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> local_318;
  FName local_308;
  undefined8 local_300;
  FName local_2f8;
  TRotator<double> local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TQuat<double> local_288;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  TQuat<double> local_248;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_380[0].Bits = 0;
  FVar12 = StatPtr_STAT_UpdateFaceComponent;
  local_330 = this;
  if (StatPtr_STAT_UpdateFaceComponent == (FThreadSafeStaticStat<FStat_STAT_UpdateFaceComponent>)0x0
     ) {
    pFVar11 = ::FName::FName(&local_2f8,"STAT_UpdateFaceComponent");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_UpdateFaceComponent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateFaceComponent,*pFVar11,
                        L"Update FaceComponent","STATGROUP_ARComponent","STATCAT_Advanced",
                        L"ARComponent",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar7 = false;
  bVar8 = false;
  local_340.ComparisonIndex.Value = 0;
  local_340.Number = 0;
  bVar9 = false;
  bVar22 = false;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_14cf67997:
    bVar8 = bVar22;
    bVar7 = bVar9;
    bVar9 = false;
    FVar16 = local_340;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_380[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_380[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_348.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_348.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_348,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                   ,0x284);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cf67997;
    local_390 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar9 = true;
  }
  bVar22 = GFaceComponentDebugMode == 2;
  if (*(longlong *)&this->field_0x2b8 == 0) {
    pUVar13 = CreateMRMeshComponent
                        (*(AActor **)&this->field_0xa8,&(this->ReplicatedPayload).SessionPayload,
                         *(UMaterialInterface **)&this->field_0x2a8,
                         *(UMaterialInterface **)&this->field_0x2b0,bVar22);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UMRMeshComponent *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    *(UMRMeshComponent **)&this->field_0x2b8 = pUVar13;
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy> *)
               &this->field_0x260,pUVar13);
    if (*(longlong *)&this->field_0x2b8 == 0) goto LAB_14cf681e6;
  }
  UARComponent::ManageMeshComponentForDebugMode
            ((UARComponent *)this,bVar22,&(this->ReplicatedPayload).SessionPayload);
  if ((*(longlong *)&this->field_0x2b8 == 0) || (*(longlong *)&this->field_0x2c0 == 0))
  goto LAB_14cf681e6;
  pUVar14 = UARFaceGeometry::StaticClass();
  bVar22 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x2c0,pUVar14);
  if ((!bVar22) ||
     (this_00 = *(UARTrackedGeometry **)&this->field_0x2c0, this_00 == (UARTrackedGeometry *)0x0))
  goto LAB_14cf681e6;
  local_228.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_228.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_228.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_228.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_228.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_228.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_108);
  EVar1 = this->TransformSetting;
  if (EVar1 == ComponentOnly) {
    local_228.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
    local_228.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x1f8;
    local_228.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
    local_228.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x208;
    local_228.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
    local_228.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
    local_228.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
    local_228.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
    local_108.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
    local_108.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
    local_108.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
    local_108.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
LAB_14cf67c9e:
    local_228.Scale3D.XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
    local_228.Scale3D.XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
    local_228.Scale3D.ZW.m128d_f64 = local_108.Scale3D.ZW.m128d_f64;
  }
  else {
    if (EVar1 != ComponentLocationTrackedRotation) {
      if (EVar1 == ComponentWithTracked) {
        local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_1c8,(TTransform<double> *)&this->field_0x1f0,&local_108);
        local_228.Rotation.XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
        local_228.Rotation.XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
        local_228.Rotation.ZW.m128d_f64[1] = local_1c8.Rotation.ZW.m128d_f64[1];
        local_228.Rotation.ZW.m128d_f64[0] = local_1c8.Rotation.ZW.m128d_f64[0];
        local_228.Translation.XY.m128d_f64[1] = local_1c8.Translation.XY.m128d_f64[1];
        local_228.Translation.XY.m128d_f64[0] = local_1c8.Translation.XY.m128d_f64[0];
        local_228.Translation.ZW.m128d_f64[1] = local_1c8.Translation.ZW.m128d_f64[1];
        local_228.Translation.ZW.m128d_f64[0] = local_1c8.Translation.ZW.m128d_f64[0];
        local_108.Scale3D.ZW.m128d_f64[1] = local_1c8.Scale3D.ZW.m128d_f64[1];
        local_108.Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.ZW.m128d_f64[0];
        local_108.Scale3D.XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
        local_108.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
      }
      else {
        if (EVar1 != TrackingOnly) goto LAB_14cf67cac;
        local_228.Rotation.XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
        local_228.Rotation.XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
        local_228.Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
        local_228.Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
        local_228.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
        local_228.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
        local_228.Translation.ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
        local_228.Translation.ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
      }
      goto LAB_14cf67c9e;
    }
    local_228.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
    local_228.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
    local_228.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
    local_228.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
    local_228.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
    local_228.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
    local_228.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
    local_228.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
    local_228.Rotation.XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
    local_228.Rotation.XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
    local_228.Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    local_228.Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
  }
LAB_14cf67cac:
  if (this->bFaceOutOfScreen != true) {
    local_2f0.Roll = 0.0;
    local_2f0.Pitch = ___xmm_40668000000000000000000000000000;
    local_2f0.Yaw = _UNK_15076bfd8;
    pTVar15 = UE::Math::TRotator<double>::Quaternion(&local_2f0,&local_248);
    local_258 = pTVar15->Z;
    dStack_250 = pTVar15->W;
    local_268 = pTVar15->X;
    dStack_260 = pTVar15->Y;
    local_a8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_168.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_168.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_168.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_168.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_168.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_a8.Rotation.XY.m128d_f64[0] = local_268;
    local_a8.Rotation.XY.m128d_f64[1] = dStack_260;
    local_a8.Rotation.ZW.m128d_f64[0] = local_258;
    local_a8.Rotation.ZW.m128d_f64[1] = dStack_250;
    UE::Math::TTransform<double>::Multiply(&local_168,&local_a8,&local_228);
    local_228.Rotation.XY.m128d_f64[1] = local_168.Rotation.XY.m128d_f64[1];
    local_228.Rotation.XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
    local_228.Rotation.ZW.m128d_f64[1] = local_168.Rotation.ZW.m128d_f64[1];
    local_228.Rotation.ZW.m128d_f64[0] = local_168.Rotation.ZW.m128d_f64[0];
    local_228.Translation.XY.m128d_f64[1] = local_168.Translation.XY.m128d_f64[1];
    local_228.Translation.XY.m128d_f64[0] = local_168.Translation.XY.m128d_f64[0];
    local_228.Translation.ZW.m128d_f64[1] = local_168.Translation.ZW.m128d_f64[1];
    local_228.Translation.ZW.m128d_f64[0] = local_168.Translation.ZW.m128d_f64[0];
    local_228.Scale3D.ZW.m128d_f64[1] = local_168.Scale3D.ZW.m128d_f64[1];
    local_228.Scale3D.ZW.m128d_f64[0] = local_168.Scale3D.ZW.m128d_f64[0];
    local_228.Scale3D.XY.m128d_f64[1] = local_168.Scale3D.XY.m128d_f64[1];
    local_228.Scale3D.XY.m128d_f64[0] = local_168.Scale3D.XY.m128d_f64[0];
  }
  local_368.ArrayNum = *(int *)this_00[1].LocalToTrackingTransform.Translation.ZW.m128d_f64;
  lVar17 = (longlong)local_368.ArrayNum;
  uVar18 = 0;
  pvVar4 = (void *)this_00[1].LocalToTrackingTransform.Translation.XY.m128d_f64[1];
  local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_368.ArrayNum == 0) {
    local_368.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_368.ArrayNum,0,&local_368.AllocatorInstance,local_368.ArrayNum,
               &local_368.ArrayMax);
    memcpy(local_368.AllocatorInstance.Data,pvVar4,lVar17 * 0x18);
  }
  if (local_368.ArrayNum != 0) {
    iVar2 = *(int *)this_00[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64;
    local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.ArrayNum = 0;
    local_378.ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,&local_378.AllocatorInstance,&local_378.ArrayNum,&local_378.ArrayMax);
    uVar21 = uVar18;
    if (0 < iVar2) {
      do {
        uVar20 = (uint)uVar18;
        uVar10 = 0;
        if ((int)uVar20 < *(int *)this_00[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined4 *)
                 ((longlong)this_00[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[1] +
                 uVar21 * 4);
        uVar10 = 0;
        if ((int)uVar20 < local_378.ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = (ulonglong)(uVar20 + 1);
        *(undefined4 *)(local_378.AllocatorInstance.Data + uVar21 * 4) = uVar3;
        uVar21 = uVar21 + 1;
        this = local_330;
      } while ((longlong)uVar21 < (longlong)iVar2);
    }
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
    bVar6 = false;
    bVar22 = true;
    if (this->bUpdateVertexNormal != false) {
      local_2d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FAccumulatedNormal::CalculateVertexNormals<UE::Math::TVector<double>_>
                (&this->AccumulatedNormals,&local_368,&local_378,&this->TangentData,
                 (TVector<double> *)&local_2d8._s_0,__real_42c80000);
    }
    local_318.AllocatorInstance.Data._0_4_ = 0;
    local_318.AllocatorInstance.Data._4_4_ = 0;
    pUVar13 = *(UMRMeshComponent **)&this->field_0x2b8;
    local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.ArrayNum = 0;
    local_328.ArrayMax = 0;
    if (this->bUpdateVertexNormal == false) {
      local_300 = 0;
      pFVar11 = &local_308;
    }
    else {
      iVar2 = (this->TangentData).ArrayNum;
      _Src = (this->TangentData).AllocatorInstance.Data;
      local_390.ComparisonIndex.Value = 0;
      local_390.Number = 0;
      local_388 = iVar2;
      if (iVar2 == 0) {
        iStack_384 = 0;
        pFVar11 = &local_390;
        bVar6 = true;
        bVar22 = false;
        local_318.AllocatorInstance.Data = (FScriptContainerElement *)FVar19;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)&local_390,iVar2,&iStack_384);
        memcpy((void *)local_390,_Src,(longlong)iVar2 << 2);
        pFVar11 = &local_390;
        bVar6 = true;
        bVar22 = false;
        local_318.AllocatorInstance.Data = (FScriptContainerElement *)local_390;
      }
    }
    iVar2 = *(int *)this_00[1].LocalToTrackingTransform.Scale3D.ZW.m128d_f64;
    pvVar4 = (void *)this_00[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[1];
    pFVar11->ComparisonIndex = 0;
    pFVar11->Number = 0;
    local_318.ArrayNum = pFVar11[1].ComparisonIndex.Value;
    local_318.ArrayMax = pFVar11[1].Number;
    pFVar11[1].ComparisonIndex = 0;
    pFVar11[1].Number = 0;
    local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_358.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&local_358.AllocatorInstance,iVar2,&local_358.ArrayMax);
      memcpy(local_358.AllocatorInstance.Data,pvVar4,(longlong)iVar2 << 4);
    }
    local_2b8._s_0.X = local_228.Scale3D.XY.m128d_f64[0];
    local_2b8._s_0.Y = local_228.Scale3D.XY.m128d_f64[1];
    local_2b8._s_0.Z = local_228.Scale3D.ZW.m128d_f64[0];
    local_288.X = local_228.Rotation.XY.m128d_f64[0];
    local_288.Y = local_228.Rotation.XY.m128d_f64[1];
    local_288.Z = local_228.Rotation.ZW.m128d_f64[0];
    local_288.W = local_228.Rotation.ZW.m128d_f64[1];
    local_2a0._s_0.X = local_228.Translation.XY.m128d_f64[0];
    local_2a0._s_0.Y = local_228.Translation.XY.m128d_f64[1];
    local_2a0._s_0.Z = local_228.Translation.ZW.m128d_f64[0];
    UMRMeshComponent::UpdateMesh
              (pUVar13,(TVector<double> *)&local_2a0._s_0,&local_288,
               (TVector<double> *)&local_2b8._s_0,&local_368,&local_378,&local_358,&local_318,
               &local_328);
    if ((bVar22) && (local_308 != (FName)0x0)) {
      FMemory::Free((void *)local_308);
    }
    if ((bVar6) && (local_390 != (FName)0x0)) {
      FMemory::Free((void *)local_390);
    }
    if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.AllocatorInstance.Data);
    }
  }
  if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.AllocatorInstance.Data);
  }
LAB_14cf681e6:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf68c60

void __thiscall
UARFaceComponent::ValidateGeneratedRepEnums
          (UARFaceComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0xb00,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARFaceComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf728a0

void __cdecl
UARFaceComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_50 = 0;
  local_68[0] = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_68);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_68);
  }
  return;
}

// execSetFaceComponentDebugMode @ 14cf73e50

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARFaceComponent::execSetFaceComponentDebugMode(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((IConsoleVariable *)CVarFaceComponentDebugMode._8_8_,(uint)local_res10[0],
             ECVF_SetByCode,(FName)0x0);
  return;
}

