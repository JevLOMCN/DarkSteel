// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 25

// StaticClass @ 14cf30500

UClass * __cdecl UARPlaneComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPlaneComponent",
               &Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton,
               StaticRegisterNativesUARPlaneComponent,0x3b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPlaneComponent>,
               InternalVTableHelperCtorCaller<UARPlaneComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton;
}

// UARPlaneComponent @ 14cf421b0

UARPlaneComponent * __thiscall
UARPlaneComponent::UARPlaneComponent(UARPlaneComponent *this,FVTableHelper *param_1)

{
  UARComponent::UARComponent((UARComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FARPlaneUpdatePayload::FARPlaneUpdatePayload(&this->ReplicatedPayload);
  return this;
}

// UARPlaneComponent @ 14cf42200

UARPlaneComponent * __thiscall UARPlaneComponent::UARPlaneComponent(UARPlaneComponent *this)

{
  UARComponent::UARComponent((UARComponent *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FARPlaneUpdatePayload::FARPlaneUpdatePayload(&this->ReplicatedPayload);
  return this;
}

// ~UARPlaneComponent @ 14cf445f0

void __thiscall UARPlaneComponent::~UARPlaneComponent(UARPlaneComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).BoundaryVertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetDebugMode @ 14cf50b30

int __cdecl UARPlaneComponent::GetDebugMode(void)

{
  return GPlaneComponentDebugMode;
}

// GetLifetimeReplicatedProps @ 14cf519b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARPlaneComponent::GetLifetimeReplicatedProps
          (UARPlaneComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetObjectClassificationDebugColors @ 14cf53080

TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
* __cdecl UARPlaneComponent::GetObjectClassificationDebugColors(void)

{
  return &ClassificationColors;
}

// GetPrivateStaticClass @ 14cf54de0

UClass * __cdecl UARPlaneComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPlaneComponent",
               &Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton,
               StaticRegisterNativesUARPlaneComponent,0x3b0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPlaneComponent>,
               InternalVTableHelperCtorCaller<UARPlaneComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf591e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UARPlaneComponent::OnRep_Payload(UARPlaneComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 auStack_108 [32];
  FARPlaneUpdatePayload local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if ((char)this->_padding_ == '\0') {
    ReceiveUpdate(this,&this->ReplicatedPayload);
  }
  else {
    FARPlaneUpdatePayload::FARPlaneUpdatePayload(&local_e8);
    FARPlaneUpdatePayload::operator=(&local_e8,&this->ReplicatedPayload);
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPlaneComponent_ReceiveAdd);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_e8);
    if (local_e8.BoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.BoundaryVertices.AllocatorInstance.Data);
    }
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// ReceiveAdd @ 14cf5add0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARPlaneComponent::ReceiveAdd(UARPlaneComponent *this,FARPlaneUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_108 [32];
  FARPlaneUpdatePayload local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FARPlaneUpdatePayload::FARPlaneUpdatePayload(&local_e8);
  FARPlaneUpdatePayload::operator=(&local_e8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPlaneComponent_ReceiveAdd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_e8);
  if (local_e8.BoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.BoundaryVertices.AllocatorInstance.Data);
  }
  return;
}

// ReceiveUpdate @ 14cf5b630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARPlaneComponent::ReceiveUpdate(UARPlaneComponent *this,FARPlaneUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_108 [32];
  FARPlaneUpdatePayload local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FARPlaneUpdatePayload::FARPlaneUpdatePayload(&local_e8);
  FARPlaneUpdatePayload::operator=(&local_e8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPlaneComponent_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_e8);
  if (local_e8.BoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.BoundaryVertices.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload @ 14cf5e020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARPlaneComponent::ServerUpdatePayload(UARPlaneComponent *this,FARPlaneUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 auStack_108 [32];
  FARPlaneUpdatePayload local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FARPlaneUpdatePayload::FARPlaneUpdatePayload(&local_e8);
  FARPlaneUpdatePayload::operator=(&local_e8,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPlaneComponent_ServerUpdatePayload);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_e8);
  if (local_e8.BoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.BoundaryVertices.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e450

void __thiscall
UARPlaneComponent::ServerUpdatePayload_Implementation
          (UARPlaneComponent *this,FARPlaneUpdatePayload *param_1)

{
  FARPlaneUpdatePayload::operator=(&this->ReplicatedPayload,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cf5e470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x658))(this);
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e5a0

bool __thiscall
UARPlaneComponent::ServerUpdatePayload_Validate
          (UARPlaneComponent *this,FARPlaneUpdatePayload *param_1)

{
  return true;
}

// SetObjectClassificationDebugColors @ 14cf60730

void __cdecl
UARPlaneComponent::SetObjectClassificationDebugColors
          (TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
           *param_1)

{
  TMap<enum_EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FLinearColor,0>_>
  ::operator=(&ClassificationColors,param_1);
  return;
}

// SetPlaneComponentDebugMode @ 14cf60790

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode param_1)

{
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)CVarPlaneComponentDebugMode._8_8_,(uint)param_1,ECVF_SetByCode,
             (FName)0x0);
  return;
}

// StaticRegisterNativesUARPlaneComponent @ 14cf61300

void __cdecl UARPlaneComponent::StaticRegisterNativesUARPlaneComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UARPlaneComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cf62ad0

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
UARPlaneComponent::TickComponent
          (UARPlaneComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  double dVar1;
  EARObjectClassification EVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  FString *pFVar12;
  EARObjectClassification *pEVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStackY_2f8 [32];
  EARObjectClassification local_2b8 [16];
  TVector<double>_u_0 local_2a8;
  FString local_288;
  FLinearColor_u_0 local_278;
  double local_268;
  TVector<double>_u_0 local_258;
  double dStack_240;
  undefined4 local_238;
  FString local_230;
  double local_220;
  initializer_list<TPairInitializer<EARObjectClassification_const_&,FString_const_&>_> local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TPairInitializer<EARObjectClassification_const_&,FString_const_&> local_168;
  EARObjectClassification *local_158;
  TVector<double>_u_0 *local_150;
  EARObjectClassification *local_148;
  TVector<double>_u_0 *local_140;
  EARObjectClassification *local_138;
  FString *local_130;
  EARObjectClassification *local_128;
  FString *local_120;
  EARObjectClassification *local_118;
  FString *local_110;
  EARObjectClassification *local_108;
  FString *local_100;
  EARObjectClassification *local_f8;
  FString *local_f0;
  EARObjectClassification *local_e8;
  FString *local_e0;
  EARObjectClassification *local_d8;
  FString *local_d0;
  EARObjectClassification *local_c8;
  FString *local_c0;
  EARObjectClassification *local_b8;
  FString *local_b0;
  EARObjectClassification *local_a8;
  FString *local_a0;
  EARObjectClassification *local_98;
  FString *local_90;
  TPairInitializer<EARObjectClassification_const_&,FString_const_&> local_88 [6];
  
  local_88[0].Key = (EARObjectClassification *)(__security_cookie.value ^ (ulonglong)auStackY_2f8);
  local_238 = 0;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (GPlaneComponentDebugMode != 0) {
    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Data.ArrayNum = 0;
    local_288.Data.ArrayMax = 0;
    if (GPlaneComponentDebugMode == 1) {
      pwVar14 = L"Remote";
      if (this->_padding_ != 0) {
        pwVar14 = L"Local";
      }
      ::FString::operator=(&local_288,pwVar14);
    }
    else if (GPlaneComponentDebugMode == 2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_2b8[0] = NotApplicable;
        ::FString::FString((FString *)&local_278._s_0,L"NotApplicable");
        local_168.Key = local_2b8;
        local_2b8[1] = 1;
        local_168.Value = (FString *)&local_278;
        ::FString::FString((FString *)&local_2a8._s_0,L"Unknown");
        local_158 = local_2b8 + 1;
        local_2b8[2] = 2;
        local_150 = &local_2a8;
        ::FString::FString((FString *)&local_258._s_0,L"Wall");
        local_148 = local_2b8 + 2;
        local_2b8[3] = 3;
        local_140 = &local_258;
        ::FString::FString(&local_230,L"Ceiling");
        local_138 = local_2b8 + 3;
        local_2b8[4] = 4;
        local_130 = &local_230;
        ::FString::FString(&local_178,L"Floor");
        local_128 = local_2b8 + 4;
        local_2b8[5] = 5;
        local_120 = &local_178;
        ::FString::FString(&local_188,L"Table");
        local_118 = local_2b8 + 5;
        local_2b8[6] = 6;
        local_110 = &local_188;
        ::FString::FString(&local_198,L"Seat");
        local_108 = local_2b8 + 6;
        local_2b8[7] = 7;
        local_100 = &local_198;
        ::FString::FString(&local_1a8,L"Face");
        local_f8 = local_2b8 + 7;
        local_2b8[8] = 8;
        local_f0 = &local_1a8;
        ::FString::FString(&local_1b8,L"Image");
        local_e8 = local_2b8 + 8;
        local_2b8[9] = 9;
        local_e0 = &local_1b8;
        ::FString::FString(&local_1c8,L"World");
        local_d8 = local_2b8 + 9;
        local_2b8[10] = 10;
        local_d0 = &local_1c8;
        ::FString::FString(&local_1d8,L"SceneObject");
        local_c8 = local_2b8 + 10;
        local_2b8[0xb] = 0xb;
        local_c0 = &local_1d8;
        ::FString::FString(&local_1e8,L"HandMesh");
        local_b8 = local_2b8 + 0xb;
        local_2b8[0xc] = 0xc;
        local_b0 = &local_1e8;
        ::FString::FString(&local_1f8,L"Door");
        local_a8 = local_2b8 + 0xc;
        local_2b8[0xd] = 0xd;
        local_a0 = &local_1f8;
        ::FString::FString(&local_208,L"Window");
        local_98 = local_2b8 + 0xd;
        local_90 = &local_208;
        local_218._First = &local_168;
        local_218._Last = local_88;
        TMap<enum_EARObjectClassification,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FString,0>_>
        ::
        TMap<enum_EARObjectClassification,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FString,0>_>
                  (&ClassificationNames,&local_218);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        if ((void *)local_258._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_258._s_0.X);
        }
        if ((void *)local_2a8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_2a8._s_0.X);
        }
        if ((void *)local_278._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_278._0_8_);
        }
        atexit(`UARPlaneComponent::TickComponent'::__l12::
               _dynamic_atexit_destructor_for__ClassificationNames__);
        _Init_thread_footer(&::_TSS0);
      }
      EVar2 = (this->ReplicatedPayload).ObjectClassification;
      if (ClassificationNames._8_4_ != ClassificationNames._52_4_) {
        lVar15 = 0x155352818;
        if (ClassificationNames._64_8_ != 0) {
          lVar15 = ClassificationNames._64_8_;
        }
        uVar32 = *(int *)(lVar15 + ((ulonglong)(ClassificationNames._72_4_ - 1) & (ulonglong)EVar2)
                                   * 4);
        while (uVar32 != 0xffffffff) {
          pEVar13 = (EARObjectClassification *)
                    ((longlong)(int)uVar32 * 0x20 + ClassificationNames._0_8_);
          if (*pEVar13 == EVar2) {
            pFVar12 = (FString *)(pEVar13 + 8);
            if (pEVar13 == (EARObjectClassification *)0x0) {
              pFVar12 = (FString *)0x0;
            }
            if (pFVar12 != (FString *)0x0) {
              pFVar12 = ::FString::FString((FString *)&local_2a8._s_0,pFVar12);
              bVar11 = true;
              bVar10 = false;
              goto LAB_14cf62c20;
            }
            break;
          }
          uVar32 = *(undefined4 *)(pEVar13 + 0x18);
        }
      }
      pFVar12 = ::FString::FString((FString *)&local_278._s_0,L"Unknown");
      bVar11 = false;
      bVar10 = true;
LAB_14cf62c20:
      iVar3 = (pFVar12->Data).ArrayNum;
      iVar16 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar16 = 0;
      }
      ::FString::AssignRange(&local_288,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar16);
      if ((bVar10) && ((void *)local_278._0_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_278._0_8_);
      }
      if ((bVar11) && ((void *)local_2a8._s_0.X != (void *)0x0)) {
        FMemory::Free((void *)local_2a8._s_0.X);
      }
    }
    auVar29 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64;
    dVar7 = (this->ReplicatedPayload).Center.field0_0x0._s_0.Z *
            (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dVar8 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar9 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    dVar5 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0] *
            (this->ReplicatedPayload).Center.field0_0x0._s_0.X;
    dVar6 = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1] *
            (this->ReplicatedPayload).Center.field0_0x0._s_0.Y;
    uVar32 = (undefined4)((ulonglong)dVar6 >> 0x20);
                    /* WARNING: Load size is inaccurate */
    local_278 = *(FLinearColor_u_0 *)(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar22 = blendpd((undefined1  [16])local_278,auVar29,2);
    auVar33._8_4_ = SUB84(dVar6,0);
    auVar33._0_8_ = dVar5;
    auVar33._12_4_ = uVar32;
    dVar1 = auVar29._0_8_;
    auVar34._0_8_ = auVar33._8_8_ * local_278._0_8_ - local_278._8_8_ * dVar5;
    auVar34._8_8_ = dVar7 * local_278._8_8_ - dVar1 * dVar6;
    auVar35._8_4_ = SUB84(dVar6,0);
    auVar35._0_8_ = dVar5;
    auVar35._12_4_ = uVar32;
    auVar17._8_4_ = SUB84(dVar8,0);
    auVar17._0_8_ = dVar7;
    auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar17 = blendpd(auVar35,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar1 - auVar22._0_8_ * dVar7;
    auVar18._8_8_ = auVar17._8_8_ * auVar29._8_8_ - auVar22._8_8_ * dVar8;
    auVar17 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar35 = blendpd(auVar34,auVar18,2);
    dVar8 = auVar34._8_8_ + auVar34._8_8_;
    dVar4 = auVar18._0_8_ + auVar18._0_8_;
    uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    auVar27._8_4_ = SUB84(dVar4,0);
    auVar27._0_8_ = dVar8;
    auVar27._12_4_ = uVar32;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar8;
    auVar23._12_4_ = uVar32;
    auVar35 = blendpd(auVar23,auVar36,2);
    auVar28._0_8_ = auVar27._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar8;
    auVar28._8_8_ = auVar36._0_8_ * auVar17._8_8_ - dVar1 * dVar4;
    auVar17 = blendpd(auVar17,auVar29,2);
    local_258._0_16_ =
         *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar22._8_4_ = SUB84(auVar28._8_8_,0);
    auVar22._0_8_ = auVar28._0_8_;
    auVar22._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar24._0_8_ = auVar35._0_8_ * dVar1 - auVar17._0_8_ * auVar36._0_8_;
    auVar24._8_8_ = auVar35._8_8_ * auVar29._8_8_ - auVar17._8_8_ * auVar36._8_8_;
    local_258._s_0.Z = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0];
    dStack_240 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    dVar1 = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    dVar4 = dVar4 * dVar9 + dVar6 + auVar24._0_8_ +
            (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    auVar29 = blendpd(auVar28,auVar24,2);
    local_2a8._s_0.Z =
         auVar36._0_8_ * dVar9 + dVar7 + auVar29._0_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    UE::Math::TQuat<double>::Rotator
              ((TQuat<double> *)&local_258._s_0,(TRotator<double> *)&local_278._s_0);
    local_2a8._0_16_ = (undefined1  [16])local_278;
    local_220 = local_2a8._s_0.Z;
    local_258._s_0.Z = local_2a8._s_0.Z;
    local_2a8._s_0.Z = local_268;
    local_258._8_4_ = SUB84(dVar4,0);
    local_258._s_0.X = dVar8 * dVar9 + dVar5 + auVar22._8_8_ + dVar1;
    local_258._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    UKismetSystemLibrary::DrawDebugCoordinateSystem
              ((UObject *)this,(TVector<double> *)&local_258._s_0,
               (TRotator<double> *)&local_2a8._s_0,__real_41700000,0.0,0.0,World);
    local_268 = (this->ReplicatedPayload).Center.field0_0x0._s_0.Z + __real_4030000000000000;
    auVar29 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    dVar9 = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
    dVar5 = (this->ReplicatedPayload).Center.field0_0x0._s_0.X *
            (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0];
    dVar6 = (this->ReplicatedPayload).Center.field0_0x0._s_0.Y *
            (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1];
    uVar32 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar17 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64;
    auVar37._8_4_ = SUB84(dVar6,0);
    auVar37._0_8_ = dVar5;
    auVar37._12_4_ = uVar32;
    dVar7 = local_268 * (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
    dVar8 = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar35 = blendpd(auVar29,auVar17,2);
    dVar1 = auVar17._0_8_;
    auVar38._0_8_ = auVar37._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar5;
    auVar38._8_8_ = dVar7 * auVar29._8_8_ - dVar1 * dVar6;
    auVar19._8_4_ = SUB84(dVar6,0);
    auVar19._0_8_ = dVar5;
    auVar19._12_4_ = uVar32;
    auVar29._8_4_ = SUB84(dVar8,0);
    auVar29._0_8_ = dVar7;
    auVar29._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar29 = blendpd(auVar19,auVar29,2);
    auVar20._0_8_ = auVar29._0_8_ * dVar1 - auVar35._0_8_ * dVar7;
    auVar20._8_8_ = auVar29._8_8_ * auVar17._8_8_ - auVar35._8_8_ * dVar8;
    auVar29 = *(undefined1 (*) [16])(this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64;
    auVar35 = blendpd(auVar38,auVar20,2);
    dVar8 = auVar38._8_8_ + auVar38._8_8_;
    dVar4 = auVar20._0_8_ + auVar20._0_8_;
    uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar39._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar39._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    auVar30._8_4_ = SUB84(dVar4,0);
    auVar30._0_8_ = dVar8;
    auVar30._12_4_ = uVar32;
    auVar25._8_4_ = SUB84(dVar4,0);
    auVar25._0_8_ = dVar8;
    auVar25._12_4_ = uVar32;
    auVar35 = blendpd(auVar25,auVar39,2);
    auVar31._0_8_ = auVar30._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar8;
    auVar31._8_8_ = auVar39._0_8_ * auVar29._8_8_ - dVar1 * dVar4;
    auVar21._8_4_ = SUB84(auVar31._8_8_,0);
    auVar21._0_8_ = auVar31._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    auVar29 = blendpd(auVar29,auVar17,2);
    auVar26._0_8_ = auVar35._0_8_ * dVar1 - auVar29._0_8_ * auVar39._0_8_;
    auVar26._8_8_ = auVar35._8_8_ * auVar17._8_8_ - auVar29._8_8_ * auVar39._8_8_;
    dVar1 = dVar4 * dVar9 + dVar6 + auVar26._0_8_ +
            (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
    auVar29 = blendpd(auVar31,auVar26,2);
    local_2a8._8_4_ = SUB84(dVar1,0);
    local_2a8._s_0.X =
         dVar8 * dVar9 + dVar5 + auVar21._8_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
    local_2a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_2a8._s_0.Z =
         auVar39._0_8_ * dVar9 + dVar7 + auVar29._0_8_ +
         (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
    local_278 = FLinearColor::Yellow.field0_0x0;
    UKismetSystemLibrary::DrawDebugString
              ((UObject *)this,(TVector<double> *)&local_2a8._s_0,&local_288,(AActor *)0x0,
               (FLinearColor *)&local_278._s_0,0.0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Update @ 14cf65250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARPlaneComponent::Update(UARPlaneComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  UMRMeshComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  wchar_t *pwVar7;
  UARTrackedGeometry *this_00;
  undefined1 auStack_368 [32];
  FScriptContainerElement *local_348;
  FName local_338;
  FName local_330;
  FString local_328;
  FString local_318;
  FARPlaneUpdatePayload local_308;
  TTransform<double> local_238;
  FARPlaneUpdatePayload local_1d8;
  FARPlaneUpdatePayload local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_368;
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar6 = UARPlaneGeometry::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar6->_padding_)) goto LAB_14cf652de;
  }
  this_00 = (UARTrackedGeometry *)0x0;
LAB_14cf652de:
  if (this_00 == (UARTrackedGeometry *)0x0) {
    if ((byte)LogAR._0_1_ < 3) {
      return;
    }
    if ((param_1->AnchorName).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->AnchorName).Data.AllocatorInstance.Data;
    }
    pUVar6 = UARPlaneGeometry::StaticClass();
    local_338 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_338,&local_318);
    pUVar6 = StaticClass();
    local_330 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_330,&local_328);
    local_348 = (FScriptContainerElement *)pwVar7;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_308.Center.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_308.Center.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_308.Extents.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_308.Extents.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_308.SessionPayload.ConfigFlags = 0;
    local_308.SessionPayload.DefaultMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_308.SessionPayload.DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
         (TObjectPtr<UMaterialInterface>_u_0)0x0;
    local_308.Center.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_308.Extents.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_308.BoundaryVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.BoundaryVertices.ArrayNum = 0;
    local_308.BoundaryVertices.ArrayMax = 0;
    local_308.ObjectClassification = Unknown;
    UARTrackedGeometry::GetLocalToWorldTransform(this_00,&local_238);
    local_308.WorldTransform.Rotation.XY.m128d_f64[0] = local_238.Rotation.XY.m128d_f64[0];
    local_308.WorldTransform.Rotation.XY.m128d_f64[1] = local_238.Rotation.XY.m128d_f64[1];
    local_308.WorldTransform.Rotation.ZW.m128d_f64[0] = local_238.Rotation.ZW.m128d_f64[0];
    local_308.WorldTransform.Rotation.ZW.m128d_f64[1] = local_238.Rotation.ZW.m128d_f64[1];
    local_308.WorldTransform.Translation.XY.m128d_f64[0] = local_238.Translation.XY.m128d_f64[0];
    local_308.WorldTransform.Translation.XY.m128d_f64[1] = local_238.Translation.XY.m128d_f64[1];
    local_308.WorldTransform.Translation.ZW.m128d_f64[0] = local_238.Translation.ZW.m128d_f64[0];
    local_308.WorldTransform.Translation.ZW.m128d_f64[1] = local_238.Translation.ZW.m128d_f64[1];
    local_308.WorldTransform.Scale3D.XY.m128d_f64[0] = local_238.Scale3D.XY.m128d_f64[0];
    local_308.WorldTransform.Scale3D.XY.m128d_f64[1] = local_238.Scale3D.XY.m128d_f64[1];
    local_308.Center.field0_0x0._s_0.X = (double)*(undefined8 *)(this_00 + 1);
    local_308.Center.field0_0x0._s_0.Y = (double)*(undefined8 *)&this_00[1].field_0x8;
    local_308.WorldTransform.Scale3D.ZW.m128d_f64[0] = local_238.Scale3D.ZW.m128d_f64[0];
    local_308.WorldTransform.Scale3D.ZW.m128d_f64[1] = local_238.Scale3D.ZW.m128d_f64[1];
    local_308.Center.field0_0x0._s_0.Z = (double)*(undefined8 *)&this_00[1].field_0x10;
    local_308.Extents.field0_0x0._s_0.X = (double)*(undefined8 *)&this_00[1].field_0x18;
    local_308.Extents.field0_0x0._s_0.Y = (double)*(undefined8 *)&this_00[1].field_0x20;
    local_308.Extents.field0_0x0._s_0.Z = (double)*(undefined8 *)&this_00[1].UniqueId;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              (&local_308.BoundaryVertices,
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               &this_00[1].UniqueId.C);
    local_308.ObjectClassification = this_00->ObjectClassification;
    UARTrackedGeometry::UpdateSessionPayload(this_00,&local_308.SessionPayload);
    FARPlaneUpdatePayload::FARPlaneUpdatePayload(&local_1d8);
    FARPlaneUpdatePayload::operator=(&local_1d8,&local_308);
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPlaneComponent_ReceiveUpdate);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_1d8);
    if (local_1d8.BoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.BoundaryVertices.AllocatorInstance.Data);
    }
    if ((char)this->_padding_ != '\0') {
      FARPlaneUpdatePayload::FARPlaneUpdatePayload(&local_108);
      FARPlaneUpdatePayload::operator=(&local_108,&local_308);
      pUVar5 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UARPlaneComponent_ServerUpdatePayload);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_108);
      if (local_108.BoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.BoundaryVertices.AllocatorInstance.Data);
      }
      if (*(char *)(this->_padding_ + 0x168) != '\x03') {
        FARPlaneUpdatePayload::operator=(&this->ReplicatedPayload,&local_308);
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
    local_318.Data.AllocatorInstance.Data = local_308.BoundaryVertices.AllocatorInstance.Data;
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateVisualization_Implementation @ 14cf683d0

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

void __thiscall UARPlaneComponent::UpdateVisualization_Implementation(UARPlaneComponent *this)

{
  EARObjectClassification EVar1;
  float fVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  UMRMeshComponent *pUVar7;
  FLinearColor *pFVar8;
  FLinearColor_u_0 *pFVar9;
  longlong lVar10;
  FLinearColor_u_0 *pFVar11;
  FLinearColor_u_0 *pFVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_e8;
  undefined4 local_d8;
  int local_d4;
  int local_d0 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_98;
  FLinearColor_u_0 local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TQuat<double> local_48;
  
  bVar15 = GPlaneComponentDebugMode != 0;
  if (this->_padding_ == 0) {
    pUVar7 = CreateMRMeshComponent
                       ((AActor *)this->_padding_,&(this->ReplicatedPayload).SessionPayload,
                        (UMaterialInterface *)this->_padding_,(UMaterialInterface *)this->_padding_,
                        bVar15);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UMRMeshComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    this->_padding_ = (longlong)pUVar7;
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy> *)
               &this->_padding_,pUVar7);
  }
  if ((UMRMeshComponent *)this->_padding_ != (UMRMeshComponent *)0x0) {
    uVar6 = (this->ReplicatedPayload).BoundaryVertices.ArrayNum;
    pFVar12 = (FLinearColor_u_0 *)0x0;
    if (uVar6 == 0) {
      UpdatePlaneMesh((UMRMeshComponent *)this->_padding_,&(this->ReplicatedPayload).WorldTransform,
                      &(this->ReplicatedPayload).Center,&(this->ReplicatedPayload).Extents);
    }
    else {
      _Src = (this->ReplicatedPayload).BoundaryVertices.AllocatorInstance.Data;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = uVar6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar6,0,&local_c8.AllocatorInstance,uVar6,&local_c8.ArrayMax);
      memcpy(local_c8.AllocatorInstance.Data,_Src,(longlong)(int)uVar6 * 0x18);
      iVar4 = local_c8.ArrayNum;
      uVar14 = (ulonglong)(uint)local_c8.ArrayNum;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayMax = 0;
      uVar6 = local_c8.ArrayNum * 3;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < 1) {
        local_e8.ArrayNum = 0;
        pFVar11 = pFVar12;
      }
      else {
        local_e8.ArrayNum = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar6,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
        pFVar11 = (FLinearColor_u_0 *)(ulonglong)(uint)local_e8.ArrayNum;
      }
      if (0 < iVar4) {
        iVar13 = 2;
        while( true ) {
          local_d8 = 0;
          uVar6 = (uint)pFVar11;
          if (((local_e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), uVar6 = local_e8.ArrayNum, bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar6 == local_e8.ArrayMax) {
            uVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
          }
          local_e8.ArrayNum = uVar6 + 1;
          *(undefined4 *)(local_e8.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = local_d8;
          local_d4 = (iVar13 + -1) % iVar4;
          if (((local_e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d4) &&
              ((FScriptContainerElement *)&local_d4 <
               local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_e8.ArrayNum == local_e8.ArrayMax) {
            local_e8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
          }
          uVar6 = local_e8.ArrayNum + 1;
          *(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 4) = local_d4;
          local_d0[0] = iVar13 % iVar4;
          local_e8.ArrayNum = uVar6;
          if (((local_e8.AllocatorInstance.Data <= (FScriptContainerElement *)local_d0) &&
              ((FScriptContainerElement *)local_d0 <
               local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_e8.ArrayNum == local_e8.ArrayMax) {
            local_e8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
          }
          uVar6 = local_e8.ArrayNum + 1;
          iVar13 = iVar13 + 1;
          *(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 4) = local_d0[0];
          uVar14 = uVar14 - 1;
          local_e8.ArrayNum = uVar6;
          if (uVar14 == 0) break;
          pFVar11 = (FLinearColor_u_0 *)(ulonglong)uVar6;
        }
      }
      local_78._s_0.X = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[0];
      local_78._s_0.Y = (this->ReplicatedPayload).WorldTransform.Scale3D.XY.m128d_f64[1];
      local_78._s_0.Z = (this->ReplicatedPayload).WorldTransform.Scale3D.ZW.m128d_f64[0];
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Z = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[0];
      local_48.W = (this->ReplicatedPayload).WorldTransform.Rotation.ZW.m128d_f64[1];
      local_48.X = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[0];
      local_48.Y = (this->ReplicatedPayload).WorldTransform.Rotation.XY.m128d_f64[1];
      local_60._s_0.X = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[0];
      local_60._s_0.Y = (this->ReplicatedPayload).WorldTransform.Translation.XY.m128d_f64[1];
      local_60._s_0.Z = (this->ReplicatedPayload).WorldTransform.Translation.ZW.m128d_f64[0];
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      UMRMeshComponent::UpdateMesh
                ((UMRMeshComponent *)this->_padding_,(TVector<double> *)&local_60._s_0,&local_48,
                 (TVector<double> *)&local_78._s_0,&local_c8,&local_e8,&local_98,&local_a8,&local_b8
                );
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
    UARComponent::ManageMeshComponentForDebugMode
              ((UARComponent *)this,bVar15,&(this->ReplicatedPayload).SessionPayload);
    if ((bVar15) && ((UMRMeshComponent *)this->_padding_ != (UMRMeshComponent *)0x0)) {
      if (GPlaneComponentDebugMode == 1) {
        pFVar8 = &FLinearColor::Red;
        if (this->_padding_ != 0) {
          pFVar8 = &FLinearColor::Green;
        }
        local_88._0_8_ = *(undefined8 *)&pFVar8->field0_0x0;
        local_88._8_8_ = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
        pFVar12 = &local_88;
      }
      else {
        if (GPlaneComponentDebugMode != 2) {
          return;
        }
        EVar1 = (this->ReplicatedPayload).ObjectClassification;
        pFVar11 = pFVar12;
        if (ClassificationColors._8_4_ != ClassificationColors._52_4_) {
          lVar10 = 0x1553522d8;
          if (ClassificationColors._64_8_ != 0) {
            lVar10 = ClassificationColors._64_8_;
          }
          fVar2 = *(float *)(lVar10 + ((ulonglong)(ClassificationColors._72_4_ - 1) &
                                      (ulonglong)EVar1) * 4);
          while ((pFVar11 = pFVar12, fVar2 != -NAN &&
                 (pFVar11 = (FLinearColor_u_0 *)
                            ((longlong)(int)fVar2 * 0x1c + ClassificationColors._0_8_),
                 *(EARObjectClassification *)&(pFVar11->_s_0).R != EVar1))) {
            fVar2 = pFVar11[1]._s_0.G;
          }
        }
        pFVar9 = (FLinearColor_u_0 *)&(pFVar11->_s_0).G;
        if (pFVar11 == (FLinearColor_u_0 *)0x0) {
          pFVar9 = pFVar12;
        }
        pFVar12 = &FLinearColor::White.field0_0x0;
        if (pFVar9 != (FLinearColor_u_0 *)0x0) {
          pFVar12 = pFVar9;
        }
      }
      UMRMeshComponent::SetWireframeColor
                ((UMRMeshComponent *)this->_padding_,(FLinearColor *)&pFVar12->_s_0);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf691b0

void __thiscall
UARPlaneComponent::ValidateGeneratedRepEnums
          (UARPlaneComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0x7c6,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPlaneComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execGetObjectClassificationDebugColors @ 14cf6f300

void __cdecl
UARPlaneComponent::execGetObjectClassificationDebugColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMap<enum_EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FLinearColor,0>_>
  ::operator=(param_3,&ClassificationColors);
  return;
}

// execServerUpdatePayload @ 14cf72e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARPlaneComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  void *local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8[0] = 0;
  local_c8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_a8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_b8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_88 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_98 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_e0 = 0;
  local_d8 = 0;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_e8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_e8);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetObjectClassificationDebugColors @ 14cf742a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARPlaneComponent::execSetObjectClassificationDebugColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
  *pTVar3;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pTVar3 = (TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
            *)local_68;
  if ((TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
       *)0x0) {
    pTVar3 = (TMap<EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARObjectClassification,FLinearColor,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMap<enum_EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FLinearColor,0>_>
  ::operator=(&ClassificationColors,pTVar3);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// execSetPlaneComponentDebugMode @ 14cf74410

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UARPlaneComponent::execSetPlaneComponentDebugMode(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((IConsoleVariable *)CVarPlaneComponentDebugMode._8_8_,(uint)local_res10[0],
             ECVF_SetByCode,(FName)0x0);
  return;
}

