// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 148005af0

UClass * __cdecl ABandwidthTestActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BandwidthTestActor",
               &Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton,
               StaticRegisterNativesABandwidthTestActor,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ABandwidthTestActor>,
               InternalVTableHelperCtorCaller<ABandwidthTestActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton;
}

// ABandwidthTestActor @ 148013980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABandwidthTestActor * __thiscall
ABandwidthTestActor::ABandwidthTestActor(ABandwidthTestActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ABandwidthTestActor__6B_;
  (this->BandwidthGenerator).ReplicatedBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BandwidthGenerator).ReplicatedBuffers.ArrayNum = 0;
  (this->BandwidthGenerator).ReplicatedBuffers.ArrayMax = 0;
  (this->BandwidthGenerator).TimeForNextSpike = 0.0;
  (this->BandwidthGenerator).SpikePeriodInSec = 0.0;
  return this;
}

// ABandwidthTestActor @ 1480139d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABandwidthTestActor * __thiscall ABandwidthTestActor::ABandwidthTestActor(ABandwidthTestActor *this)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  this->_padding_ = (longlong)&___7ABandwidthTestActor__6B_;
  (this->BandwidthGenerator).ReplicatedBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BandwidthGenerator).ReplicatedBuffers.ArrayNum = 0;
  (this->BandwidthGenerator).ReplicatedBuffers.ArrayMax = 0;
  (this->BandwidthGenerator).TimeForNextSpike = 0.0;
  (this->BandwidthGenerator).SpikePeriodInSec = 0.0;
  AActor::SetReplicatingMovement((AActor *)this,false);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  return this;
}

// ~ABandwidthTestActor @ 148017cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ABandwidthTestActor::~ABandwidthTestActor(ABandwidthTestActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ABandwidthTestActor__6B_;
  DestructItems<FBandwidthTestItem,int>
            ((FBandwidthTestItem *)
             (this->BandwidthGenerator).ReplicatedBuffers.AllocatorInstance.Data,
             (this->BandwidthGenerator).ReplicatedBuffers.ArrayNum);
  pFVar1 = (this->BandwidthGenerator).ReplicatedBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetLifetimeReplicatedProps @ 148035eb0

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
ABandwidthTestActor::GetLifetimeReplicatedProps
          (ABandwidthTestActor *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0x12,L"BandwidthGenerator",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
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

// GetPrivateStaticClass @ 1480367e0

UClass * __cdecl ABandwidthTestActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BandwidthTestActor",
               &Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton,
               StaticRegisterNativesABandwidthTestActor,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ABandwidthTestActor>,
               InternalVTableHelperCtorCaller<ABandwidthTestActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton;
}

// StartBandwidthSpike @ 1480640e0

void __thiscall
ABandwidthTestActor::StartBandwidthSpike(ABandwidthTestActor *this,float param_1,int param_2)

{
  if ((0.0 < param_1) && (0 < param_2)) {
    FBandwidthTestGenerator::FillBufferForSize
              (&this->BandwidthGenerator,(int)(param_1 * __real_447a0000));
    (this->BandwidthGenerator).SpikePeriodInSec = (double)param_2 * __real_3f50624dd2f1a9fc;
    FBandwidthTestGenerator::OnSpikePeriod(&this->BandwidthGenerator);
    return;
  }
  FBandwidthTestGenerator::FillBufferForSize(&this->BandwidthGenerator,0);
  (this->BandwidthGenerator).SpikePeriodInSec = 0.0;
  return;
}

// StartGeneratingBandwidth @ 148064180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ABandwidthTestActor::StartGeneratingBandwidth(ABandwidthTestActor *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  if (0.0 < param_1) {
    fVar2 = (float)(**(code **)(GEngine->_padding_ + 0x310))(GEngine,0,0);
    if (fVar2 <= 0.0) {
      return;
    }
    iVar1 = (int)((param_1 / fVar2) * __real_447a0000);
  }
  else {
    iVar1 = 0;
  }
  FBandwidthTestGenerator::FillBufferForSize(&this->BandwidthGenerator,iVar1);
  (this->BandwidthGenerator).SpikePeriodInSec = 0.0;
  return;
}

// StaticRegisterNativesABandwidthTestActor @ 148065350

void __cdecl ABandwidthTestActor::StaticRegisterNativesABandwidthTestActor(void)

{
  return;
}

// StopGeneratingBandwidth @ 1480653d0

void __thiscall ABandwidthTestActor::StopGeneratingBandwidth(ABandwidthTestActor *this)

{
  FBandwidthTestGenerator::FillBufferForSize(&this->BandwidthGenerator,0);
  (this->BandwidthGenerator).SpikePeriodInSec = 0.0;
  return;
}

// ValidateGeneratedRepEnums @ 148071850

void __thiscall
ABandwidthTestActor::ValidateGeneratedRepEnums
          (ABandwidthTestActor *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_BandwidthGenerator,L"BandwidthGenerator");
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
  if (Name_BandwidthGenerator != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\BandwidthTestActor.gen.cpp"
                       ,0x104,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABandwidthTestActor"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

