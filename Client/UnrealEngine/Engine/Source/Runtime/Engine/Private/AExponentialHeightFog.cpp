// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 14727de00

UClass * __cdecl AExponentialHeightFog::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AExponentialHeightFog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExponentialHeightFog",
               &Z_Registration_Info_UClass_AExponentialHeightFog.InnerSingleton,
               StaticRegisterNativesAExponentialHeightFog,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AExponentialHeightFog>,
               InternalVTableHelperCtorCaller<AExponentialHeightFog>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AExponentialHeightFog.InnerSingleton;
}

// AExponentialHeightFog @ 14727f400

AExponentialHeightFog * __thiscall
AExponentialHeightFog::AExponentialHeightFog(AExponentialHeightFog *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AExponentialHeightFog__6B_;
  (this->Component).field0_0x0.DebugPtr = (UExponentialHeightFogComponent *)0x0;
  return this;
}

// ~AExponentialHeightFog @ 14727faf0

void __thiscall AExponentialHeightFog::~AExponentialHeightFog(AExponentialHeightFog *this)

{
  this->_padding_ = (longlong)&___7AExponentialHeightFog__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 1472807e0

UClass * __cdecl AExponentialHeightFog::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AExponentialHeightFog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExponentialHeightFog",
               &Z_Registration_Info_UClass_AExponentialHeightFog.InnerSingleton,
               StaticRegisterNativesAExponentialHeightFog,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AExponentialHeightFog>,
               InternalVTableHelperCtorCaller<AExponentialHeightFog>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AExponentialHeightFog.InnerSingleton;
}

// StaticRegisterNativesAExponentialHeightFog @ 147281450

void __cdecl AExponentialHeightFog::StaticRegisterNativesAExponentialHeightFog(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AExponentialHeightFog_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 147281600

void __thiscall
AExponentialHeightFog::ValidateGeneratedRepEnums
          (AExponentialHeightFog *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_bEnabled,L"bEnabled");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0xb) {
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
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_bEnabled != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ExponentialHeightFog.gen.cpp"
                       ,0xbc,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AExponentialHeightFog"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execOnRep_bEnabled @ 1472838a0

void __cdecl
AExponentialHeightFog::execOnRep_bEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001472838b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// AExponentialHeightFog @ 1478a57d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AExponentialHeightFog * __thiscall
AExponentialHeightFog::AExponentialHeightFog
          (AExponentialHeightFog *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UExponentialHeightFogComponent *pUVar4;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AExponentialHeightFog__6B_;
  (this->Component).field0_0x0.DebugPtr = (UExponentialHeightFogComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"HeightFogComponent0");
  FVar1 = *pFVar2;
  pUVar3 = UExponentialHeightFogComponent::StaticClass();
  pUVar4 = (UExponentialHeightFogComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UExponentialHeightFogComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Component).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UExponentialHeightFogComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->Component).field0_0x0;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// GetLifetimeReplicatedProps @ 1478d5050

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
AExponentialHeightFog::GetLifetimeReplicatedProps
          (AExponentialHeightFog *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,8,L"bEnabled",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_AExponentialHeightFog_NoRegister();
  Z_Construct_UClass_AExponentialHeightFog_NoRegister();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// OnRep_bEnabled @ 1478e6280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AExponentialHeightFog::OnRep_bEnabled(AExponentialHeightFog *this)

{
  USceneComponent::SetVisibility
            ((USceneComponent *)(this->Component).field0_0x0.DebugPtr,this->bEnabled,DirtyOnly);
  return;
}

// PostInitializeComponents @ 1478e7510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AExponentialHeightFog::PostInitializeComponents(AExponentialHeightFog *this)

{
  AActor::PostInitializeComponents((AActor *)this);
  *(uint *)&this->field_0x2c8 =
       ((uint)((byte)((this->Component).field0_0x0.DebugPtr)->field_0x1a8 >> 5) ^
       ZPULL(*(undefined4 *)&this->field_0x2c8,0,1)) & 1 ^ *(undefined4 *)&this->field_0x2c8;
  return;
}

