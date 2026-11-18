// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 16

// StaticClass @ 14cf30910

UClass * __cdecl UARPointComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPointComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPointComponent",
               &Z_Registration_Info_UClass_UARPointComponent.InnerSingleton,
               StaticRegisterNativesUARPointComponent,0x2f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPointComponent>,
               InternalVTableHelperCtorCaller<UARPointComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPointComponent.InnerSingleton;
}

// UARPointComponent @ 14cf422d0

UARPointComponent * __thiscall
UARPointComponent::UARPointComponent(UARPointComponent *this,FVTableHelper *param_1)

{
  UARComponent::UARComponent((UARComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UARPointComponent @ 14cf42310

UARPointComponent * __thiscall UARPointComponent::UARPointComponent(UARPointComponent *this)

{
  UARComponent::UARComponent((UARComponent *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UARPointComponent @ 14cf44680

void __thiscall UARPointComponent::~UARPointComponent(UARPointComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  return;
}

// GetLifetimeReplicatedProps @ 14cf51a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UARPointComponent::GetLifetimeReplicatedProps
          (UARPointComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

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

// GetPrivateStaticClass @ 14cf54f60

UClass * __cdecl UARPointComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPointComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPointComponent",
               &Z_Registration_Info_UClass_UARPointComponent.InnerSingleton,
               StaticRegisterNativesUARPointComponent,0x2f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPointComponent>,
               InternalVTableHelperCtorCaller<UARPointComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPointComponent.InnerSingleton;
}

// OnRep_Payload @ 14cf592b0

void __thiscall UARPointComponent::OnRep_Payload(UARPointComponent *this)

{
  bool bVar1;
  UFunction *pUVar2;
  undefined1 local_res8 [32];
  
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UARComponent::UpdateVisualization((UARComponent *)this);
  }
  if (this->field_0x2c8 != '\0') {
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPointComponent_ReceiveAdd);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_res8);
    this->field_0x2c8 = 0;
    return;
  }
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPointComponent_ReceiveUpdate);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_res8);
  return;
}

// ReceiveAdd @ 14cf5ae70

void __thiscall
UARPointComponent::ReceiveAdd(UARPointComponent *this,FARPointUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 local_res8 [32];
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPointComponent_ReceiveAdd);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveUpdate @ 14cf5b6d0

void __thiscall
UARPointComponent::ReceiveUpdate(UARPointComponent *this,FARPointUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 local_res8 [32];
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPointComponent_ReceiveUpdate);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// ServerUpdatePayload @ 14cf5e0c0

void __thiscall
UARPointComponent::ServerUpdatePayload(UARPointComponent *this,FARPointUpdatePayload *param_1)

{
  UFunction *pUVar1;
  undefined1 local_res8 [32];
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPointComponent_ServerUpdatePayload);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// ServerUpdatePayload_Implementation @ 14cf5e480

void __thiscall
UARPointComponent::ServerUpdatePayload_Implementation
          (UARPointComponent *this,FARPointUpdatePayload *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cf5e483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x658))();
  return;
}

// ServerUpdatePayload_Validate @ 14cf5e5b0

bool __thiscall
UARPointComponent::ServerUpdatePayload_Validate
          (UARPointComponent *this,FARPointUpdatePayload *param_1)

{
  return true;
}

// StaticRegisterNativesUARPointComponent @ 14cf61380

void __cdecl UARPointComponent::StaticRegisterNativesUARPointComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARPointComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 14cf655d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UARPointComponent::Update(UARPointComponent *this,UARTrackedGeometry *param_1)

{
  int iVar1;
  UMRMeshComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_48;
  FString local_40;
  FString local_30;
  
  if (param_1 == (UARTrackedGeometry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackedGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                       ,0xb2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar6 = UARTrackedPoint::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UARPointComponent_ReceiveUpdate);
      (**(code **)(*(longlong *)this + 0x260))(this,pUVar5,local_res10);
      if (this->field_0x2a0 != '\0') {
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this,NAME_UARPointComponent_ServerUpdatePayload);
        (**(code **)(*(longlong *)this + 0x260))(this,pUVar5,local_res18);
        if (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) != '\x03') {
          (**(code **)(*(longlong *)this + 0x658))(this);
        }
      }
      pUVar2 = *(UMRMeshComponent **)&this->field_0x2b8;
      if (pUVar2 != (UMRMeshComponent *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        (param_1->UnderlyingMesh).field0_0x0.DebugPtr = pUVar2;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(UARTrackedGeometry **)&this->field_0x2c0 = param_1;
      return;
    }
  }
  if (2 < (byte)LogAR._0_1_) {
    pUVar6 = UARTrackedPoint::StaticClass();
    local_res20 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res20,&local_30);
    pUVar6 = StaticClass();
    local_48 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_48,&local_40);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 14cf692c0

void __thiscall
UARPointComponent::ValidateGeneratedRepEnums
          (UARPointComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
                       ,0x8f4,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPointComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execServerUpdatePayload @ 14cf73000

void __cdecl
UARPointComponent::execServerUpdatePayload(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_res8 [8];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePayload_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_res8);
  return;
}

