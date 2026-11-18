// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 16

// StaticClass @ 14cf34340

UClass * __cdecl UARObjectComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARObjectComponent",
               &Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton,
               StaticRegisterNativesUARObjectComponent,0x340,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARObjectComponent>,
               InternalVTableHelperCtorCaller<UARObjectComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton;
}

// UARObjectComponent @ 14cf41e30

UARObjectComponent * __thiscall
UARObjectComponent::UARObjectComponent(UARObjectComponent *this,FVTableHelper *param_1)

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
  return this;
}

// UARObjectComponent @ 14cf41ed0

UARObjectComponent * __thiscall UARObjectComponent::UARObjectComponent(UARObjectComponent *this)

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
  return this;
}

// ~UARObjectComponent @ 14cf44530

void __thiscall UARObjectComponent::~UARObjectComponent(UARObjectComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetLifetimeReplicatedProps @ 14cf518d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARObjectComponent::GetLifetimeReplicatedProps
          (UARObjectComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf54c70

UClass * __cdecl UARObjectComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARObjectComponent",
               &Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton,
               StaticRegisterNativesUARObjectComponent,0x340,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARObjectComponent>,
               InternalVTableHelperCtorCaller<UARObjectComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf59110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UARObjectComponent::OnRep_Payload(UARObjectComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 auStack_98 [32];
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
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if ((char)this->_padding_ == '\0') {
    ReceiveUpdate(this,&this->ReplicatedPayload);
  }
  else {
    local_78 = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0];
    dStack_70 = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1];
    local_68 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0];
    dStack_60 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    local_58 = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    dStack_50 = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    local_48 = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    dStack_40 = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[1];
    local_38 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0];
    dStack_30 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1];
    local_28 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dStack_20 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1];
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARObjectComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_78);
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5ad30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARObjectComponent::ReceiveAdd(UARObjectComponent *this,FARObjectUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_98 [32];
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
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  dStack_70 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  local_68 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_60 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_58 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  dStack_50 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  local_48 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  dStack_40 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  local_38 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_30 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_28 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_20 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARObjectComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_78);
  return;
}

// ReceiveUpdate @ 14cf5b590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARObjectComponent::ReceiveUpdate(UARObjectComponent *this,FARObjectUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_98 [32];
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
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  dStack_70 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  local_68 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_60 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_58 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  dStack_50 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  local_48 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  dStack_40 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  local_38 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_30 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_28 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_20 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARObjectComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_78);
  return;
}

// ServerUpdatePayload @ 14cf5df80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARObjectComponent::ServerUpdatePayload(UARObjectComponent *this,FARObjectUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_98 [32];
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
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  dStack_70 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  local_68 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_60 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_58 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  dStack_50 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  local_48 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  dStack_40 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  local_38 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_30 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_28 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_20 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARObjectComponent_ServerUpdatePayload)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_78);
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e3f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UARObjectComponent::ServerUpdatePayload_Implementation
          (UARObjectComponent *this,FARObjectUpdatePayload *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  lVar1 = this->_padding_;
  (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[1] = dVar5;
  uVar2 = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.XY.m128d_f64 + 4);
  uVar3 = *(undefined4 *)((param_1->WorldTransform).Scale3D.XY.m128d_f64 + 1);
  uVar4 = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.XY.m128d_f64 + 0xc);
  *(undefined4 *)(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 =
       *(undefined4 *)(param_1->WorldTransform).Scale3D.XY.m128d_f64;
  *(undefined4 *)((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 + 4) =
       uVar2;
  *(undefined4 *)((this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64 + 0xc) =
       uVar4;
  uVar2 = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.ZW.m128d_f64 + 4);
  uVar3 = *(undefined4 *)((param_1->WorldTransform).Scale3D.ZW.m128d_f64 + 1);
  uVar4 = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
  *(undefined4 *)(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 =
       *(undefined4 *)(param_1->WorldTransform).Scale3D.ZW.m128d_f64;
  *(undefined4 *)((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 + 4) =
       uVar2;
  *(undefined4 *)((this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 + 0xc) =
       uVar4;
                    /* WARNING: Could not recover jumptable at 0x00014cf5e434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x658))();
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e590

bool __thiscall
UARObjectComponent::ServerUpdatePayload_Validate
          (UARObjectComponent *this,FARObjectUpdatePayload *param_1)

{
  return true;
}

// StaticRegisterNativesUARObjectComponent @ 14cf61280

void __cdecl UARObjectComponent::StaticRegisterNativesUARObjectComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARObjectComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 14cf64f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARObjectComponent::Update(UARObjectComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  longlong lVar2;
  UMRMeshComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UFunction *pUVar6;
  UClass *pUVar7;
  wchar_t *pwVar8;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  FName local_128;
  double dStack_120;
  FName local_118;
  double dStack_110;
  double local_108 [2];
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  FScriptContainerElement *local_88;
  double dStack_80;
  FScriptContainerElement *local_78;
  double dStack_70;
  FName local_68;
  double dStack_60;
  FName local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar7 = UARTrackedObject::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      local_138._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_138._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_148._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_148._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_118 = (FName)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      dStack_110 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_128 = (FName)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      dStack_120 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_108[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_108[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_f8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      uStack_f0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      local_e8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_e8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_c8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_c8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UARObjectComponent_ReceiveUpdate);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar6,local_e8);
      if ((char)this->_padding_ != '\0') {
        local_88 = (FScriptContainerElement *)local_138._0_8_;
        dStack_80 = (double)local_138._8_8_;
        local_78 = (FScriptContainerElement *)local_148._0_8_;
        dStack_70 = (double)local_148._8_8_;
        local_68 = local_118;
        dStack_60 = dStack_110;
        local_58 = local_128;
        dStack_50 = dStack_120;
        local_48 = local_108[0];
        dStack_40 = local_108[1];
        local_38 = (double)local_f8;
        dStack_30 = uStack_f0;
        pUVar6 = UObject::FindFunctionChecked
                           ((UObject *)this,NAME_UARObjectComponent_ServerUpdatePayload);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_88);
        if (*(char *)(this->_padding_ + 0x168) != '\x03') {
          lVar2 = this->_padding_;
          (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0] =
               (double)local_138._0_8_;
          (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1] =
               (double)local_138._8_8_;
          (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0] =
               (double)local_148._0_8_;
          (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1] =
               (double)local_148._8_8_;
          (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0] = (double)local_118;
          (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1] = dStack_110;
          (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0] = (double)local_128;
          (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[1] = dStack_120;
          (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] = local_108[0];
          (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] = local_108[1];
          *(undefined4 *)(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 =
               local_f8._0_4_;
          *(undefined4 *)
           ((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 + 4) =
               local_f8._4_4_;
          *(undefined4 *)((this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 + 1) =
               (undefined4)uStack_f0;
          *(undefined4 *)
           ((longlong)(this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64 + 0xc) =
               uStack_f0._4_4_;
          (**(code **)(lVar2 + 0x658))(this);
        }
      }
      pUVar3 = (UMRMeshComponent *)this->_padding_;
      if (pUVar3 != (UMRMeshComponent *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        (param_1->UnderlyingMesh).field0_0x0.DebugPtr = pUVar3;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      this->_padding_ = (longlong)param_1;
      return;
    }
  }
  if (2 < (byte)LogAR._0_1_) {
    if ((param_1->AnchorName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_1->AnchorName).Data.AllocatorInstance.Data;
    }
    pUVar7 = UARTrackedObject::StaticClass();
    local_128 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_128,(FString *)local_138);
    pUVar7 = StaticClass();
    local_118 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_118,(FString *)local_148);
    local_158 = (FScriptContainerElement *)pwVar8;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
    if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._0_8_);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf690a0

void __thiscall
UARObjectComponent::ValidateGeneratedRepEnums
          (UARObjectComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0x123c,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARObjectComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf72d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARObjectComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_78);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_78);
  }
  return;
}

