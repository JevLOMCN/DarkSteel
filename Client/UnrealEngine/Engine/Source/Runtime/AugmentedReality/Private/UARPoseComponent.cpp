// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 20

// StaticClass @ 14cf33c70

UClass * __cdecl UARPoseComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPoseComponent",
               &Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton,
               StaticRegisterNativesUARPoseComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPoseComponent>,
               InternalVTableHelperCtorCaller<UARPoseComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton;
}

// UARPoseComponent @ 14cf42350

UARPoseComponent * __thiscall
UARPoseComponent::UARPoseComponent(UARPoseComponent *this,FVTableHelper *param_1)

{
  UARComponent::UARComponent((UARComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
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
  (this->ReplicatedPayload).JointTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedPayload).JointTransforms.ArrayNum = 0;
  (this->ReplicatedPayload).JointTransforms.ArrayMax = 0;
  return this;
}

// UARPoseComponent @ 14cf42400

UARPoseComponent * __thiscall UARPoseComponent::UARPoseComponent(UARPoseComponent *this)

{
  UARComponent::UARComponent((UARComponent *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
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
  (this->ReplicatedPayload).JointTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedPayload).JointTransforms.ArrayNum = 0;
  (this->ReplicatedPayload).JointTransforms.ArrayMax = 0;
  return this;
}

// ~UARPoseComponent @ 14cf446b0

void __thiscall UARPoseComponent::~UARPoseComponent(UARPoseComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).JointTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetDebugMode @ 14cf50b40

int __cdecl UARPoseComponent::GetDebugMode(void)

{
  return GPoseComponentDebugMode;
}

// GetLifetimeReplicatedProps @ 14cf51b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARPoseComponent::GetLifetimeReplicatedProps
          (UARPoseComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf55020

UClass * __cdecl UARPoseComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPoseComponent",
               &Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton,
               StaticRegisterNativesUARPoseComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPoseComponent>,
               InternalVTableHelperCtorCaller<UARPoseComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf59340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UARPoseComponent::OnRep_Payload(UARPoseComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if ((char)this->_padding_ == '\0') {
    ReceiveUpdate(this,&this->ReplicatedPayload);
  }
  else {
    local_88 = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0];
    dStack_80 = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1];
    local_78 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0];
    dStack_70 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68 = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    dStack_60 = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_58 = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    dStack_50 = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[1];
    local_48 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0];
    dStack_40 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1];
    local_38 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dStack_30 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1];
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&local_28,&(this->ReplicatedPayload).JointTransforms);
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPoseComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_88);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5aeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARPoseComponent::ReceiveAdd(UARPoseComponent *this,FARPoseUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  dStack_80 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  local_78 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_70 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_68 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  dStack_60 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  local_58 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  dStack_50 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  local_48 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_40 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_38 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_30 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_28,&param_1->JointTransforms);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPoseComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_88);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ReceiveUpdate @ 14cf5b710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARPoseComponent::ReceiveUpdate(UARPoseComponent *this,FARPoseUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  dStack_80 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  local_78 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_70 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_68 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  dStack_60 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  local_58 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  dStack_50 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  local_48 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_40 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_38 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_30 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_28,&param_1->JointTransforms);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPoseComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_88);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload @ 14cf5e100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARPoseComponent::ServerUpdatePayload(UARPoseComponent *this,FARPoseUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  dStack_80 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  local_78 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_70 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_68 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  dStack_60 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  local_58 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  dStack_50 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  local_48 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_40 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_38 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_30 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_28,&param_1->JointTransforms);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPoseComponent_ServerUpdatePayload);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_88);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e490

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UARPoseComponent::ServerUpdatePayload_Implementation
          (UARPoseComponent *this,FARPoseUpdatePayload *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] = dVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ReplicatedPayload).JointTransforms,&param_1->JointTransforms);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e5c0

bool __thiscall
UARPoseComponent::ServerUpdatePayload_Validate(UARPoseComponent *this,FARPoseUpdatePayload *param_1)

{
  return true;
}

// SetPoseComponentDebugMode @ 14cf607c0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode param_1)

{
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarPoseComponentDebugMode._8_8_,(uint)param_1,ECVF_SetByCode,
             (FName)0x0);
  return;
}

// StaticRegisterNativesUARPoseComponent @ 14cf613c0

void __cdecl UARPoseComponent::StaticRegisterNativesUARPoseComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARPoseComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cf63380

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
UARPoseComponent::TickComponent
          (UARPoseComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  FLinearColor *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 local_108 [16];
  FLinearColor_u_0 local_f8;
  double local_e8;
  TVector<double>_u_0 local_d8 [2];
  double local_a8;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  fVar9 = __real_40000000;
  if (GPoseComponentDebugMode == 1) {
    iVar1 = (this->ReplicatedPayload).JointTransforms.ArrayNum;
    pFVar11 = (this->ReplicatedPayload).JointTransforms.AllocatorInstance.Data;
    pFVar13 = pFVar11 + 0x20;
    pFVar12 = pFVar11 + (longlong)iVar1 * 0x60;
    while( true ) {
      if ((this->ReplicatedPayload).JointTransforms.ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_108);
      }
      if (pFVar11 == pFVar12) break;
      auVar22 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64
      ;
      auVar14 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64
      ;
      auVar18 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64
      ;
      dVar4 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar13;
      dVar5 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] *
              *(double *)(pFVar13 + 8);
      uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar6 = *(double *)(pFVar13 + 0x10) *
              (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
      dVar7 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar8 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = dVar4;
      auVar24._12_4_ = uVar23;
      dVar3 = auVar22._0_8_;
      auVar16 = blendpd(auVar14,auVar22,2);
      auVar25._0_8_ = auVar24._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar4;
      auVar25._8_8_ = dVar6 * auVar14._8_8_ - dVar3 * dVar5;
      auVar19._8_4_ = SUB84(dVar5,0);
      auVar19._0_8_ = dVar4;
      auVar19._12_4_ = uVar23;
      auVar14._8_4_ = SUB84(dVar7,0);
      auVar14._0_8_ = dVar6;
      auVar14._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar14 = blendpd(auVar19,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar3 - auVar16._0_8_ * dVar6;
      auVar15._8_8_ = auVar14._8_8_ * auVar22._8_8_ - auVar16._8_8_ * dVar7;
      auVar14 = blendpd(auVar25,auVar15,2);
      dVar7 = auVar25._8_8_ + auVar25._8_8_;
      dVar2 = auVar15._0_8_ + auVar15._0_8_;
      uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar26._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar26._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar20._8_4_ = SUB84(dVar2,0);
      auVar20._0_8_ = dVar7;
      auVar20._12_4_ = uVar23;
      auVar17._8_4_ = SUB84(dVar2,0);
      auVar17._0_8_ = dVar7;
      auVar17._12_4_ = uVar23;
      auVar14 = blendpd(auVar17,auVar26,2);
      auVar21._0_8_ = auVar20._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar7;
      auVar21._8_8_ = auVar26._0_8_ * auVar18._8_8_ - dVar3 * dVar2;
      auVar16._8_4_ = SUB84(auVar21._8_8_,0);
      auVar16._0_8_ = auVar21._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
      auVar19 = blendpd(auVar18,auVar22,2);
      auVar18._0_8_ = auVar14._0_8_ * dVar3 - auVar19._0_8_ * auVar26._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar26._8_8_;
      auVar22 = blendpd(auVar21,auVar18,2);
      local_e8 = auVar26._0_8_ * dVar8 + dVar6 + auVar22._0_8_ +
                 (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
      dVar3 = dVar2 * dVar8 + dVar5 + auVar18._0_8_ +
              (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
      pFVar10 = &FLinearColor::Red;
      if (this->_padding_ != 0) {
        pFVar10 = &FLinearColor::Green;
      }
      local_d8[0]._8_4_ = SUB84(dVar3,0);
      local_d8[0]._0_8_ =
           dVar7 * dVar8 + dVar4 + auVar16._8_8_ +
           (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
      local_d8[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_f8._0_8_ = *(undefined8 *)&pFVar10->field0_0x0;
      local_f8._8_8_ = *(undefined8 *)((longlong)&pFVar10->field0_0x0 + 8);
      local_d8[0]._16_8_ = local_e8;
      local_a8 = local_e8;
      UKismetSystemLibrary::DrawDebugPoint
                ((UObject *)this,(TVector<double> *)&local_d8[0]._s_0,fVar9,
                 (FLinearColor *)&local_f8._s_0,0.0,World);
      pFVar11 = pFVar11 + 0x60;
      pFVar13 = pFVar13 + 0x60;
    }
  }
  return;
}

// Update @ 14cf657c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARPoseComponent::Update(UARPoseComponent *this,UARTrackedGeometry *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UMRMeshComponent *pUVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  UFunction *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  UARTrackedGeometry *this_00;
  undefined1 auStackY_1f8 [32];
  FName local_1b8;
  FName local_1b0;
  FString local_1a8;
  FString local_198;
  FARPoseUpdatePayload local_188;
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
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb6,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar10 = UARTrackedPose::StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
       &pUVar10->_padding_)) goto LAB_14cf6584b;
  }
  this_00 = (UARTrackedGeometry *)0x0;
LAB_14cf6584b:
  if (this_00 == (UARTrackedGeometry *)0x0) {
    if ((byte)LogAR._0_1_ < 3) {
      return;
    }
    pUVar10 = UARTrackedPose::StaticClass();
    local_1b8 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_1b8,&local_198);
    pUVar10 = StaticClass();
    local_1b0 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_1b0,&local_1a8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_188.JointTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.JointTransforms.ArrayNum = 0;
    local_188.JointTransforms.ArrayMax = 0;
    UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_a8);
    local_188.WorldTransform.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
    local_188.WorldTransform.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
    local_188.WorldTransform.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
    local_188.WorldTransform.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
    local_188.WorldTransform.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
    local_188.WorldTransform.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
    local_188.WorldTransform.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
    local_188.WorldTransform.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
    local_188.WorldTransform.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
    local_188.WorldTransform.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
    local_188.WorldTransform.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
    local_188.WorldTransform.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&local_188.JointTransforms,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               &this_00[1].field_0x20);
    ReceiveUpdate(this,&local_188);
    FVar6.Data = local_188.JointTransforms.AllocatorInstance.Data;
    if ((char)this->_padding_ != '\0') {
      lVar11 = (longlong)local_188.JointTransforms.ArrayNum;
      local_118 = local_188.WorldTransform.Rotation.XY.m128d_f64[0];
      dStack_110 = local_188.WorldTransform.Rotation.XY.m128d_f64[1];
      local_108 = local_188.WorldTransform.Rotation.ZW.m128d_f64[0];
      dStack_100 = local_188.WorldTransform.Rotation.ZW.m128d_f64[1];
      local_f8 = local_188.WorldTransform.Translation.XY.m128d_f64[0];
      dStack_f0 = local_188.WorldTransform.Translation.XY.m128d_f64[1];
      local_e8 = local_188.WorldTransform.Translation.ZW.m128d_f64[0];
      dStack_e0 = local_188.WorldTransform.Translation.ZW.m128d_f64[1];
      local_d8 = local_188.WorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_d0 = local_188.WorldTransform.Scale3D.XY.m128d_f64[1];
      local_c8 = local_188.WorldTransform.Scale3D.ZW.m128d_f64[0];
      dStack_c0 = local_188.WorldTransform.Scale3D.ZW.m128d_f64[1];
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_ac = 0;
      local_b0 = local_188.JointTransforms.ArrayNum;
      if (local_188.JointTransforms.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_188.JointTransforms.ArrayNum,0,&local_b8,
                   local_188.JointTransforms.ArrayNum,&local_ac);
        memcpy(local_b8.Data,FVar6.Data,lVar11 * 0x60);
      }
      pUVar9 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARPoseComponent_ServerUpdatePayload);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&local_118);
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      FVar6.Data = local_188.JointTransforms.AllocatorInstance.Data;
      if (*(char *)(this->_padding_ + 0x168) != '\x03') {
        pTVar2 = &(this->ReplicatedPayload).JointTransforms;
        (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0] =
             local_188.WorldTransform.Rotation.XY.m128d_f64[0];
        (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1] =
             local_188.WorldTransform.Rotation.XY.m128d_f64[1];
        (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0] =
             local_188.WorldTransform.Rotation.ZW.m128d_f64[0];
        (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1] =
             local_188.WorldTransform.Rotation.ZW.m128d_f64[1];
        (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0] =
             local_188.WorldTransform.Translation.XY.m128d_f64[0];
        (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1] =
             local_188.WorldTransform.Translation.XY.m128d_f64[1];
        (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0] =
             local_188.WorldTransform.Translation.ZW.m128d_f64[0];
        (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[1] =
             local_188.WorldTransform.Translation.ZW.m128d_f64[1];
        *(undefined4 *)(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 =
             local_188.WorldTransform.Scale3D.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 + 4)
             = local_188.WorldTransform.Scale3D.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)((this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 + 1) =
             local_188.WorldTransform.Scale3D.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)
         ((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 + 0xc) =
             local_188.WorldTransform.Scale3D.XY.m128d_f64[1]._4_4_;
        (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0] =
             local_188.WorldTransform.Scale3D.ZW.m128d_f64[0];
        (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] =
             local_188.WorldTransform.Scale3D.ZW.m128d_f64[1];
        if (pTVar2 != &local_188.JointTransforms) {
          iVar7 = local_188.JointTransforms.ArrayNum;
          lVar11 = (longlong)local_188.JointTransforms.ArrayNum;
          piVar1 = &(this->ReplicatedPayload).JointTransforms.ArrayMax;
          iVar3 = *piVar1;
          (this->ReplicatedPayload).JointTransforms.ArrayNum = local_188.JointTransforms.ArrayNum;
          if ((local_188.JointTransforms.ArrayNum == 0) && (iVar3 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,local_188.JointTransforms.ArrayNum,iVar3,&pTVar2->AllocatorInstance
                       ,local_188.JointTransforms.ArrayNum,piVar1);
            if (iVar7 != 0) {
              memcpy((pTVar2->AllocatorInstance).Data,FVar6.Data,lVar11 * 0x60);
            }
          }
        }
        (**(code **)(this->_padding_ + 0x658))(this);
      }
    }
    pUVar4 = (UMRMeshComponent *)this->_padding_;
    if (pUVar4 != (UMRMeshComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this_00->UnderlyingMesh).field0_0x0.DebugPtr = pUVar4;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UARTrackedGeometry *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->_padding_ = (longlong)param_1;
    local_198.Data.AllocatorInstance.Data = local_188.JointTransforms.AllocatorInstance.Data;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf693d0

void __thiscall
UARPoseComponent::ValidateGeneratedRepEnums
          (UARPoseComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0xfe0,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPoseComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf730b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARPoseComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  void *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_28 = (void *)0x0;
  local_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_88);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_88);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetPoseComponentDebugMode @ 14cf744a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARPoseComponent::execSetPoseComponentDebugMode(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((IConsoleVariable *)CVarPoseComponentDebugMode._8_8_,(uint)local_res10[0],
             ECVF_SetByCode,(FName)0x0);
  return;
}

