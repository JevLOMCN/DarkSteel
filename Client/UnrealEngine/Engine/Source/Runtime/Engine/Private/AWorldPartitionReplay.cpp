// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 148aa9e20

UClass * __cdecl AWorldPartitionReplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionReplay",
               &Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton,
               StaticRegisterNativesAWorldPartitionReplay,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionReplay>,
               InternalVTableHelperCtorCaller<AWorldPartitionReplay>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton;
}

// AWorldPartitionReplay @ 148ab3540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionReplay * __thiscall
AWorldPartitionReplay::AWorldPartitionReplay(AWorldPartitionReplay *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWorldPartitionReplay__6B_;
  (this->StreamingSourceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSourceNames).ArrayNum = 0;
  (this->StreamingSourceNames).ArrayMax = 0;
  (this->ReplaySamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplaySamples).ArrayNum = 0;
  (this->ReplaySamples).ArrayMax = 0;
  return this;
}

// AWorldPartitionReplay @ 148ab3590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionReplay * __thiscall
AWorldPartitionReplay::AWorldPartitionReplay
          (AWorldPartitionReplay *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint uVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  
  AActor::AActor((AActor *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&___7AWorldPartitionReplay__6B_;
  (this->StreamingSourceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSourceNames).ArrayNum = 0;
  (this->StreamingSourceNames).ArrayMax = 0;
  (this->ReplaySamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplaySamples).ArrayNum = 0;
  (this->ReplaySamples).ArrayMax = 0;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  uVar2 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  this->_padding_ = (ulonglong)uVar2;
  return this;
}

// ~AWorldPartitionReplay @ 148ab6ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionReplay::~AWorldPartitionReplay(AWorldPartitionReplay *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWorldPartitionReplay__6B_;
  DestructItems<FWorldPartitionReplaySample,int>
            ((FWorldPartitionReplaySample *)(this->ReplaySamples).AllocatorInstance.Data,
             (this->ReplaySamples).ArrayNum);
  pFVar1 = (this->ReplaySamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamingSourceNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetLifetimeReplicatedProps @ 148acdd90

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
AWorldPartitionReplay::GetLifetimeReplicatedProps
          (AWorldPartitionReplay *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FString local_38;
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  local_28.Condition = COND_ReplayOnly;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(local_res18,0x14,L"StreamingSourceNames",FNAME_Add);
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

// GetPrivateStaticClass @ 148acee40

UClass * __cdecl AWorldPartitionReplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionReplay",
               &Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton,
               StaticRegisterNativesAWorldPartitionReplay,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionReplay>,
               InternalVTableHelperCtorCaller<AWorldPartitionReplay>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton;
}

// GetRecordingStreamingSources @ 148acff10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> * __thiscall
AWorldPartitionReplay::GetRecordingStreamingSources
          (AWorldPartitionReplay *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  int iVar1;
  FWorldPartitionStreamingSource *pFVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar6;
  UWorldPartition *pUVar7;
  
  pUVar5 = AActor::GetWorld((AActor *)this);
  if (pUVar5 == (UWorld *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                       ,0x106,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pUVar5 = AActor::GetWorld((AActor *)this);
  pUVar7 = UWorld::GetWorldPartition(pUVar5);
  if (pUVar7 == (UWorldPartition *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()->GetWorldPartition()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                       ,0x107,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pUVar5 = AActor::GetWorld((AActor *)this);
  pUVar7 = UWorld::GetWorldPartition(pUVar5);
  pTVar6 = UWorldPartition::GetStreamingSources(pUVar7);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar6->ArrayNum;
  pFVar2 = (FWorldPartitionStreamingSource *)(pTVar6->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x160,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FWorldPartitionStreamingSource,FWorldPartitionStreamingSource,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetReplayStreamingSources @ 148ad0020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AWorldPartitionReplay::GetReplayStreamingSources
          (AWorldPartitionReplay *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FWorldPartitionReplaySample,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  FName FVar5;
  FName FVar6;
  double dVar7;
  FName FVar8;
  double dVar9;
  double dVar10;
  FName FVar11;
  EStreamingSourcePriority EVar12;
  EStreamingSourceTargetState EVar13;
  UDemoNetDriver *this_00;
  FWorldPartitionReplaySample *pFVar14;
  FBitReader *this_01;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  FWorldPartitionStreamingSource *pFVar18;
  code *pcVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [12];
  FName FVar26;
  FName FVar27;
  bool bVar28;
  undefined1 uVar29;
  int iVar30;
  uint uVar31;
  UWorld *this_02;
  UWorldPartition *pUVar32;
  TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *pTVar33;
  longlong lVar34;
  TQuat<double> *pTVar35;
  TRotator<double> *pTVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong *plVar40;
  longlong lVar41;
  FWorldPartitionStreamingSource *pFVar42;
  ulonglong uVar43;
  FName *pFVar44;
  uint uVar45;
  FScriptContainerElement *pFVar46;
  ulonglong uVar47;
  double dVar48;
  undefined1 auVar50 [16];
  double dVar49;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStackY_3a8 [32];
  FWorldPartitionReplaySample local_340;
  double local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  TRotator<double> local_2a8;
  TQuat<double> local_288;
  TQuat<double> local_268;
  undefined1 local_248 [104];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  TBitArray<FDefaultBitArrayAllocator> local_1d0;
  undefined8 uStack_1b0;
  ForElementType<FSetElementId> local_1a0;
  int local_198;
  undefined1 local_190 [32];
  void *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ForElementType<FSetElementId> local_150;
  int local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  undefined2 local_130;
  bool local_12e;
  undefined8 local_12c;
  TVector<double>_u_0 local_120;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  this_02 = AActor::GetWorld((AActor *)this);
  if (((((GUseReplayStreamingSources == 0) || (bVar28 = UWorld::IsPlayingReplay(this_02), !bVar28))
       || (pUVar32 = UWorld::GetWorldPartition(this_02), pUVar32 == (UWorldPartition *)0x0)) ||
      (pUVar32->Replay == (AWorldPartitionReplay *)0x0)) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsPlaybackEnabled(World)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                          ,0xb9,L""), bVar28)) {
    pcVar19 = (code *)swi(3);
    uVar29 = (*pcVar19)();
    return (bool)uVar29;
  }
  this_00 = (this_02->DemoNetDriver).field0_0x0.DebugPtr;
  if ((this_00 == (UDemoNetDriver *)0x0) ||
     (bVar28 = UDemoNetDriver::IsPlaying(this_00), fVar59 = __real_3f800000, !bVar28)) {
    bVar28 = false;
  }
  else {
    uVar39 = 0;
    fVar3 = (this_00->ReplayHelper).DemoCurrentTime;
    if (0 < (this->ReplaySamples).ArrayNum) {
      fVar57 = fVar3 - __real_3f800000;
      pTVar1 = &this->ReplaySamples;
      do {
        if (((this->ReplaySamples).ArrayNum < 1) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar19 = (code *)swi(3);
          uVar29 = (*pcVar19)();
          return (bool)uVar29;
        }
        if (fVar57 < *(float *)((pTVar1->AllocatorInstance).Data + 0x28)) break;
        if (((this->ReplaySamples).ArrayNum < 1) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar19 = (code *)swi(3);
          uVar29 = (*pcVar19)();
          return (bool)uVar29;
        }
        pFVar46 = (pTVar1->AllocatorInstance).Data;
        DestructItems<FWorldPartitionReplayStreamingSource,int>
                  (*(FWorldPartitionReplayStreamingSource **)(pFVar46 + 0x10),
                   *(int *)(pFVar46 + 0x18));
        if (*(void **)(pFVar46 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar46 + 0x10));
        }
        if (*(void **)pFVar46 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar46);
        }
        iVar30 = (this->ReplaySamples).ArrayNum + -1;
        if (iVar30 != 0) {
          memmove(pFVar46,pFVar46 + 0x30,(longlong)iVar30 * 0x30);
        }
        piVar2 = &(this->ReplaySamples).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&pTVar1->AllocatorInstance,(this->ReplaySamples).ArrayNum,
                   &(this->ReplaySamples).ArrayMax);
      } while (0 < (this->ReplaySamples).ArrayNum);
    }
    pTVar33 = UDemoNetDriver::GetExternalDataArrayForObject(this_00,(UObject *)this);
    if ((pTVar33 != (TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *)0x0) &&
       (0 < (pTVar33->Array).ArrayNum)) {
      pTVar1 = &this->ReplaySamples;
      uVar43 = uVar39;
      do {
        FWorldPartitionReplaySample::FWorldPartitionReplaySample(&local_340,this);
        uVar37 = (uint)uVar39;
        uVar31 = 0;
        if ((int)uVar37 < (pTVar33->Array).ArrayNum) {
          uVar31 = ~uVar37 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar19 = (code *)swi(3);
          uVar29 = (*pcVar19)();
          return (bool)uVar29;
        }
        ::operator<<(*(FArchive **)((pTVar33->Array).AllocatorInstance.Data + uVar43),&local_340);
        uVar31 = 0;
        if ((int)uVar37 < (pTVar33->Array).ArrayNum) {
          uVar31 = ~uVar37 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar19 = (code *)swi(3);
          uVar29 = (*pcVar19)();
          return (bool)uVar29;
        }
        local_340.TimeSeconds =
             *(float *)(*(longlong *)((pTVar33->Array).AllocatorInstance.Data + uVar43) + 0xb0);
        pFVar14 = (FWorldPartitionReplaySample *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar14 <= &local_340) && (&local_340 < pFVar14 + (this->ReplaySamples).ArrayMax)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar19 = (code *)swi(3);
          uVar29 = (*pcVar19)();
          return (bool)uVar29;
        }
        iVar30 = (this->ReplaySamples).ArrayNum;
        if (iVar30 == (this->ReplaySamples).ArrayMax) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar1->AllocatorInstance,&(this->ReplaySamples).ArrayMax);
        }
        (this->ReplaySamples).ArrayNum = iVar30 + 1;
        FWorldPartitionReplaySample::FWorldPartitionReplaySample
                  ((FWorldPartitionReplaySample *)
                   ((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x30),&local_340);
        DestructItems<FWorldPartitionReplayStreamingSource,int>
                  ((FWorldPartitionReplayStreamingSource *)
                   local_340.StreamingSources.AllocatorInstance.Data,
                   local_340.StreamingSources.ArrayNum);
        if ((FWorldPartitionReplayStreamingSource *)
            local_340.StreamingSources.AllocatorInstance.Data !=
            (FWorldPartitionReplayStreamingSource *)0x0) {
          FMemory::Free(local_340.StreamingSources.AllocatorInstance.Data);
        }
        if (local_340.StreamingSourceNameIndices.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.StreamingSourceNameIndices.AllocatorInstance.Data);
        }
        iVar30 = (pTVar33->Array).ArrayNum;
        uVar39 = (ulonglong)(uVar37 + 1);
        uVar43 = uVar43 + 8;
      } while ((int)(uVar37 + 1) < iVar30);
      pFVar46 = (pTVar33->Array).AllocatorInstance.Data;
      for (; iVar30 != 0; iVar30 = iVar30 + -1) {
        this_01 = *(FBitReader **)pFVar46;
        if (this_01 != (FBitReader *)0x0) {
          FBitReader::~FBitReader(this_01);
          ::operator_delete(this_01,0xb8);
        }
        pFVar46 = pFVar46 + 8;
      }
      piVar2 = &(pTVar33->Array).ArrayMax;
      (pTVar33->Array).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pTVar33,0,piVar2);
      }
    }
    uVar47 = 0;
    uVar39 = uVar47;
    uVar43 = uVar47;
    if (0 < (this->ReplaySamples).ArrayNum + -1) {
      do {
        uVar38 = (uint)uVar39;
        uVar37 = 0;
        uVar31 = uVar37;
        if ((int)uVar38 < (this->ReplaySamples).ArrayNum) {
          uVar31 = ~uVar38 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar19 = (code *)swi(3);
          uVar29 = (*pcVar19)();
          return (bool)uVar29;
        }
        if (*(float *)((this->ReplaySamples).AllocatorInstance.Data + uVar43 + 0x28) <= fVar3) {
          uVar45 = ~(uVar38 + 1) >> 0x1f;
          uVar31 = uVar37;
          if ((int)(uVar38 + 1) < (this->ReplaySamples).ArrayNum) {
            uVar31 = uVar45;
          }
          if ((uVar31 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar19 = (code *)swi(3);
            uVar29 = (*pcVar19)();
            return (bool)uVar29;
          }
          pFVar46 = (this->ReplaySamples).AllocatorInstance.Data + uVar43 + 0x58;
          if (fVar3 < *(float *)pFVar46 || fVar3 == *(float *)pFVar46) {
            uVar31 = uVar37;
            if ((int)uVar38 < (this->ReplaySamples).ArrayNum) {
              uVar31 = ~uVar38 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar19 = (code *)swi(3);
              uVar29 = (*pcVar19)();
              return (bool)uVar29;
            }
            pFVar46 = (this->ReplaySamples).AllocatorInstance.Data;
            if ((int)(uVar38 + 1) < (this->ReplaySamples).ArrayNum) {
              uVar37 = uVar45;
            }
            if ((uVar37 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar19 = (code *)swi(3);
              uVar29 = (*pcVar19)();
              return (bool)uVar29;
            }
            lVar34 = (longlong)(int)uVar38 + 1;
            pFVar15 = (this->ReplaySamples).AllocatorInstance.Data;
            if (0 < *(int *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x18)) {
              uVar60 = (undefined4)__real_3ff0000000000000;
              uVar61 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              fVar57 = __real_322bcc77;
              do {
                plVar16 = *(longlong **)(pFVar15 + lVar34 * 0x30 + 0x10);
                iVar30 = *(int *)(pFVar15 + lVar34 * 0x30 + 0x18);
                uVar31 = (uint)uVar47;
                if (plVar16 != plVar16 + (longlong)iVar30 * 0x2c) {
                  plVar40 = plVar16;
                  do {
                    uVar37 = 0;
                    if ((int)uVar31 < *(int *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x18)) {
                      uVar37 = ~uVar31 >> 0x1f;
                    }
                    if ((uVar37 == 0) &&
                       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar28)) {
                      pcVar19 = (code *)swi(3);
                      uVar29 = (*pcVar19)();
                      return (bool)uVar29;
                    }
                    if (*plVar40 ==
                        *(longlong *)
                         (*(longlong *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x10) +
                         (longlong)(int)uVar31 * 0x160)) {
                      uVar37 = (uint)(((longlong)plVar40 - (longlong)plVar16) / 0x160);
                      goto LAB_148ad0719;
                    }
                    plVar40 = plVar40 + 0x2c;
                  } while (plVar40 != plVar16 + (longlong)iVar30 * 0x2c);
                }
                uVar37 = 0xffffffff;
LAB_148ad0719:
                if (uVar37 == 0xffffffff) {
                  uVar37 = 0;
                  if ((int)uVar31 < *(int *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x18)) {
                    uVar37 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar37 == 0) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar28)) {
                    pcVar19 = (code *)swi(3);
                    uVar29 = (*pcVar19)();
                    return (bool)uVar29;
                  }
                  pFVar18 = (FWorldPartitionStreamingSource *)(param_1->AllocatorInstance).Data;
                  piVar2 = &param_1->ArrayMax;
                  pFVar42 = (FWorldPartitionStreamingSource *)
                            ((longlong)(int)uVar31 * 0x160 +
                            *(longlong *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x10));
                  if (((pFVar18 <= pFVar42) && (pFVar42 < pFVar18 + *piVar2)) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar28)) {
                    pcVar19 = (code *)swi(3);
                    uVar29 = (*pcVar19)();
                    return (bool)uVar29;
                  }
                  iVar30 = param_1->ArrayNum;
                  if (iVar30 == *piVar2) {
                    iVar30 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x160,8,&param_1->AllocatorInstance,piVar2);
                  }
                  param_1->ArrayNum = iVar30 + 1;
                  FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
                            ((FWorldPartitionStreamingSource *)
                             ((param_1->AllocatorInstance).Data + (longlong)iVar30 * 0x160),pFVar42)
                  ;
                }
                else {
                  uVar45 = 0;
                  if ((int)uVar31 < *(int *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x18)) {
                    uVar45 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar28)) {
                    pcVar19 = (code *)swi(3);
                    uVar29 = (*pcVar19)();
                    return (bool)uVar29;
                  }
                  pFVar44 = (FName *)((longlong)(int)uVar31 * 0x160 +
                                     *(longlong *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x10));
                  uVar45 = 0;
                  if ((int)uVar37 < *(int *)(pFVar15 + lVar34 * 0x30 + 0x18)) {
                    uVar45 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar28)) {
                    pcVar19 = (code *)swi(3);
                    uVar29 = (*pcVar19)();
                    return (bool)uVar29;
                  }
                  fVar4 = *(float *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x28);
                  auVar55 = ZEXT416((uint)fVar4);
                  lVar41 = (longlong)(int)uVar37 * 0x160 +
                           *(longlong *)(pFVar15 + lVar34 * 0x30 + 0x10);
                  fVar58 = fVar59;
                  if (fVar57 < *(float *)(pFVar15 + lVar34 * 0x30 + 0x28) - fVar4) {
                    fVar58 = (fVar3 - fVar4) / (*(float *)(pFVar15 + lVar34 * 0x30 + 0x28) - fVar4);
                    if (fVar59 <= fVar58) {
                      fVar58 = fVar59;
                    }
                    if (fVar58 <= 0.0) {
                      fVar58 = 0.0;
                    }
                  }
                  FVar5 = pFVar44[3];
                  FVar6 = pFVar44[1];
                  dVar7 = *(double *)(lVar41 + 8);
                  FVar8 = pFVar44[2];
                  dVar9 = *(double *)(lVar41 + 0x10);
                  dVar10 = *(double *)(lVar41 + 0x18);
                  pTVar35 = UE::Math::TRotator<double>::Quaternion
                                      ((TRotator<double> *)(lVar41 + 0x20),&local_288);
                  dVar21 = pTVar35->X;
                  dVar49 = pTVar35->Y;
                  auVar56._0_8_ = pTVar35->Z;
                  auVar56._8_8_ = pTVar35->W;
                  local_2e8 = dVar21;
                  dStack_2e0 = dVar49;
                  local_2d8 = auVar56;
                  pTVar35 = UE::Math::TRotator<double>::Quaternion
                                      ((TRotator<double> *)(pFVar44 + 4),&local_268);
                  auVar25._4_8_ = auVar55._8_8_;
                  auVar25._0_4_ = (int)((ulonglong)auVar56._0_8_ >> 0x20);
                  auVar55._0_8_ = auVar25._0_8_ << 0x20;
                  auVar55._8_4_ = (int)auVar56._8_8_;
                  auVar55._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
                  local_2b8 = pTVar35->Z;
                  dStack_2b0 = pTVar35->W;
                  local_2c8._0_8_ = pTVar35->X;
                  local_2c8._8_8_ = pTVar35->Y;
                  dVar48 = __real_bff0000000000000;
                  if (__real_0000000000000000 <=
                      (double)auVar56._0_8_ * local_2b8 + auVar55._8_8_ * dStack_2b0 +
                      dVar49 * (double)local_2c8._8_8_ + dVar21 * (double)local_2c8._0_8_) {
                    dVar48 = (double)CONCAT44(uVar61,uVar60);
                  }
                  dVar24 = (double)fVar58;
                  dVar48 = (double)(fVar59 - fVar58) * dVar48;
                  dVar22 = dVar48 * local_2b8 + (double)auVar56._0_8_ * dVar24;
                  dVar23 = dVar48 * dStack_2b0 + (double)auVar56._8_8_ * dVar24;
                  auVar50._8_4_ = SUB84(dVar23,0);
                  auVar50._0_8_ = dVar22;
                  auVar50._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                  dVar53 = dVar48 * (double)local_2c8._0_8_ + dVar21 * dVar24;
                  dVar54 = dVar48 * (double)local_2c8._8_8_ + dVar49 * dVar24;
                  dVar49 = dVar22 * dVar22 + dVar53 * dVar53;
                  dVar48 = auVar50._8_8_ * dVar23 + dVar54 * dVar54;
                  dVar21 = dVar48 + dVar49;
                  dVar49 = dVar49 + dVar48;
                  auVar20._8_4_ = SUB84(dVar49,0);
                  auVar20._0_8_ = dVar21;
                  auVar20._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                  auVar55 = sqrtpd(local_2c8,auVar20);
                  local_310 = __real_3e45798ee0000000;
                  auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar55);
                  uVar47 = -(ulonglong)(__real_3e45798ee0000000 <= dVar21);
                  uVar43 = -(ulonglong)(__real_3e45798ee0000000 <= dVar49);
                  uVar37 = (uint)(uVar47 >> 0x20);
                  uVar45 = (uint)(uVar43 >> 0x20);
                  local_308._0_8_ = uVar47 & (ulonglong)(auVar56._0_8_ * dVar53);
                  uVar39 = uVar43 & (ulonglong)(auVar56._8_8_ * dVar54);
                  local_308._8_4_ = (undefined4)uVar39;
                  local_308._12_4_ = (undefined4)(uVar39 >> 0x20);
                  auVar51._0_4_ =
                       ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar51._4_4_ =
                       ~uVar37 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar51._8_4_ =
                       ~(uint)uVar43 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar51._12_4_ =
                       ~uVar45 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  local_308 = local_308 | auVar51;
                  auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar55);
                  local_2f8._0_4_ =
                       ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  local_2f8._4_4_ =
                       ~uVar37 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  local_2f8._8_4_ =
                       ~(uint)uVar43 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  local_2f8._12_4_ =
                       ~uVar45 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  auVar52._0_8_ = (ulonglong)(auVar55._0_8_ * dVar22) & uVar47;
                  uVar43 = (ulonglong)(auVar55._8_8_ * dVar23) & uVar43;
                  auVar52._8_4_ = (undefined4)uVar43;
                  auVar52._12_4_ = (undefined4)(uVar43 >> 0x20);
                  local_2f8 = local_2f8 | auVar52;
                  dVar21 = *(double *)(lVar41 + 0x50);
                  FVar11 = pFVar44[10];
                  dVar49 = *(double *)(lVar41 + 0x40);
                  dVar48 = *(double *)(lVar41 + 0x48);
                  EVar12 = *(EStreamingSourcePriority *)
                            ((longlong)&pFVar44[7].ComparisonIndex.Value + 2);
                  FVar26 = pFVar44[8];
                  FVar27 = pFVar44[9];
                  uVar29 = *(undefined1 *)((longlong)&pFVar44[7].ComparisonIndex.Value + 1);
                  EVar13 = (EStreamingSourceTargetState)pFVar44[7].ComparisonIndex.Value;
                  pTVar36 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_308,&local_2a8);
                  local_248._0_8_ = *pFVar44;
                  local_248._8_8_ = dVar24 * (dVar7 - (double)FVar6) + (double)FVar6;
                  local_248._16_8_ = dVar24 * (dVar9 - (double)FVar8) + (double)FVar8;
                  local_248._24_8_ = dVar24 * (dVar10 - (double)FVar5) + (double)FVar5;
                  local_248._32_8_ = pTVar36->Pitch;
                  local_248._40_8_ = pTVar36->Yaw;
                  local_248._48_8_ = pTVar36->Roll;
                  pFVar17 = (param_1->AllocatorInstance).Data;
                  piVar2 = &param_1->ArrayMax;
                  local_248[0x58] = false;
                  local_248._92_4_ = 0;
                  local_248[0x60] = Include;
                  local_1e0.Data = (FScriptContainerElement *)0x0;
                  local_1d8 = 0;
                  local_1d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
                  local_1a0 = (ForElementType<FSetElementId>)0x0;
                  local_198 = 0;
                  local_190._0_8_ = (FScriptContainerElement *)0x0;
                  local_1d0.NumBits = ___xmm_00000000ffffffff0000008000000000;
                  local_1d0.MaxBits = _UNK_150631d94;
                  uStack_1b0 = _UNK_150631d98;
                  local_190._8_8_ = 0;
                  local_170 = (void *)0x0;
                  local_168._0_4_ = ___xmm_00000000ffffffff0000008000000000;
                  local_168._4_4_ = _UNK_150631d94;
                  uStack_160 = _UNK_150631d98;
                  local_150 = (ForElementType<FSetElementId>)0x0;
                  local_148 = 0;
                  local_140.Data = (FScriptContainerElement *)0x0;
                  local_138._0_4_ = 0;
                  local_138._4_4_ = 0;
                  local_12e = false;
                  local_12c._0_4_ = 0;
                  local_12c._4_4_ = 0;
                  dVar7 = (dVar48 - (double)FVar27) * dVar24 + (double)FVar27;
                  local_248._80_8_ = (dVar21 - (double)FVar11) * dVar24 + (double)FVar11;
                  local_248._72_4_ = SUB84(dVar7,0);
                  local_248._64_8_ = (dVar49 - (double)FVar26) * dVar24 + (double)FVar26;
                  local_248._76_4_ = (int)((ulonglong)dVar7 >> 0x20);
                  local_108 = pTVar36->Pitch;
                  dStack_100 = pTVar36->Yaw;
                  local_f8 = pTVar36->Roll;
                  local_f0._0_4_ = 0.0;
                  local_f0._4_4_ = 0.0;
                  local_130._0_1_ = true;
                  local_130._1_1_ = false;
                  local_248[0x38] = EVar13;
                  local_248[0x39] = uVar29;
                  local_248[0x3a] = EVar12;
                  local_120._s_0.X = (double)local_248._8_8_;
                  local_120._s_0.Y = (double)local_248._16_8_;
                  local_120._s_0.Z = (double)local_248._24_8_;
                  if (((pFVar17 <= (FScriptContainerElement *)local_248) &&
                      ((FScriptContainerElement *)local_248 < pFVar17 + (longlong)*piVar2 * 0x160))
                     && (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar28)) {
                    pcVar19 = (code *)swi(3);
                    uVar29 = (*pcVar19)();
                    return (bool)uVar29;
                  }
                  iVar30 = param_1->ArrayNum;
                  if (iVar30 == *piVar2) {
                    iVar30 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x160,8,&param_1->AllocatorInstance,piVar2);
                  }
                  param_1->ArrayNum = iVar30 + 1;
                  FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
                            ((FWorldPartitionStreamingSource *)
                             ((param_1->AllocatorInstance).Data + (longlong)iVar30 * 0x160),
                             (FWorldPartitionStreamingSource *)local_248);
                  if (local_140.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_140.Data);
                  }
                  local_148 = 0;
                  if (local_150 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_150);
                  }
                  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::DestroyElements((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                     *)local_190,0,local_190._8_4_);
                  iVar30 = SUB84(local_190._8_8_,4);
                  local_190._8_8_ = local_190._8_8_ & 0xffffffff00000000;
                  if (iVar30 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,0,(ForAnyElementType *)local_190,0,(int *)(local_190 + 0xc));
                  }
                  uVar37 = local_168._4_4_;
                  uStack_160 = 0xffffffff;
                  local_168 = (ulonglong)local_168._4_4_ << 0x20;
                  if (0x80 < uVar37) {
                    local_168 = 0x8000000000;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_190 + 0x10),0);
                  }
                  if (local_170 != (void *)0x0) {
                    FMemory::Free(local_170);
                  }
                  if ((FScriptContainerElement *)local_190._0_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_190._0_8_);
                  }
                  local_198 = 0;
                  if (local_1a0 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_1a0);
                  }
                  uVar39 = local_1d8 >> 0x20;
                  local_1d8 = local_1d8 & 0xffffffff00000000;
                  if ((int)uVar39 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,4,0,&local_1e0,0,(int *)((longlong)&local_1d8 + 4));
                  }
                  iVar30 = local_1d0.MaxBits;
                  uStack_1b0 = 0xffffffff;
                  local_1d0._24_8_ = (ulonglong)(uint)local_1d0.MaxBits << 0x20;
                  if (0x80 < (uint)iVar30) {
                    local_1d0.NumBits = 0;
                    local_1d0.MaxBits = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1d0,0);
                  }
                  if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
                     ) {
                    FMemory::Free((void *)local_1d0.AllocatorInstance.SecondaryData);
                  }
                  if (local_1e0.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1e0.Data);
                  }
                  uVar60 = (undefined4)__real_3ff0000000000000;
                  uVar61 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                  fVar59 = __real_3f800000;
                  fVar57 = __real_322bcc77;
                }
                uVar47 = (ulonglong)(uVar31 + 1);
              } while ((int)(uVar31 + 1) < *(int *)(pFVar46 + (longlong)(int)uVar38 * 0x30 + 0x18));
            }
            break;
          }
        }
        uVar39 = (ulonglong)(uVar38 + 1);
        uVar43 = uVar43 + 0x30;
      } while ((int)(uVar38 + 1) < (this->ReplaySamples).ArrayNum + -1);
    }
    bVar28 = true;
  }
  return bVar28;
}

// Initialize @ 148ad20d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AWorldPartitionReplay::Initialize(UWorld *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorldPartition *pUVar4;
  UClass *pUVar5;
  AWorldPartitionReplay *pAVar6;
  FString *pFVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_d8 [32];
  FString local_a8;
  FString local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar3 = UWorld::IsGameWorld(param_1);
  if (bVar3) {
    pUVar4 = UWorld::GetWorldPartition(param_1);
    pwVar9 = L"";
    if ((pUVar4 == (UWorldPartition *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorldPartition",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                           ,0x69,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pUVar4->Replay != (AWorldPartitionReplay *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!WorldPartition->Replay",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                           ,0x6a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
    pUVar5 = StaticClass();
    local_88._0_8_ = pUVar5->_padding_;
    pUVar5 = StaticClass();
    pAVar6 = (AWorldPartitionReplay *)
             UWorld::SpawnActor(param_1,pUVar5,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_88);
    if (pAVar6 == (AWorldPartitionReplay *)0x0) {
      pAVar6 = (AWorldPartitionReplay *)0x0;
    }
    else {
      pUVar5 = StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pFVar7 = GetTypeName<AWorldPartitionReplay>(&local_a8);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<AActor>(&local_98,(AActor *)pAVar6);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar9,pwVar10);
      }
    }
    pUVar4->Replay = pAVar6;
    if (local_88._64_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x50);
      if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// IsPlaybackEnabled @ 148ad45e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl AWorldPartitionReplay::IsPlaybackEnabled(UWorld *param_1)

{
  bool bVar1;
  UWorldPartition *pUVar2;
  
  if (GUseReplayStreamingSources != 0) {
    bVar1 = UWorld::IsPlayingReplay(param_1);
    if (bVar1) {
      pUVar2 = UWorld::GetWorldPartition(param_1);
      if (pUVar2 != (UWorldPartition *)0x0) {
        return pUVar2->Replay != (AWorldPartitionReplay *)0x0;
      }
    }
  }
  return false;
}

// IsRecordingEnabled @ 148ad4630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl AWorldPartitionReplay::IsRecordingEnabled(UWorld *param_1)

{
  bool bVar1;
  UWorldPartition *pUVar2;
  
  if (GRecordReplayStreamingSources != 0) {
    bVar1 = UWorld::IsRecordingReplay(param_1);
    if (bVar1) {
      pUVar2 = UWorld::GetWorldPartition(param_1);
      if (pUVar2 != (UWorldPartition *)0x0) {
        return pUVar2->Replay != (AWorldPartitionReplay *)0x0;
      }
    }
  }
  return false;
}

// PreReplication @ 148ad63c0

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
AWorldPartitionReplay::PreReplication
          (AWorldPartitionReplay *this,IRepChangedPropertyTracker *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UWorldPartition *pUVar5;
  UGameInstance *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UReplaySubsystem *this_00;
  FWorldPartitionReplaySample local_f8;
  FBitWriter local_c8;
  
  pUVar4 = AActor::GetWorld((AActor *)this);
  bVar3 = UWorld::IsRecordingReplay(pUVar4);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorld()->IsRecordingReplay()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                         ,0xa2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AActor::PreReplication((AActor *)this,param_1);
  pUVar4 = AActor::GetWorld((AActor *)this);
  pUVar5 = UWorld::GetWorldPartition(pUVar4);
  if ((pUVar5 == (UWorldPartition *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorld()->IsPartitionedWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                         ,0xa5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FWorldPartitionReplaySample::FWorldPartitionReplaySample(&local_f8,this);
  if (local_f8.StreamingSources.ArrayNum == 0) goto LAB_148ad6588;
  FBitWriter::FBitWriter(&local_c8,0x400,true);
  ::operator<<((FArchive *)&local_c8,&local_f8);
  if ((CONCAT44(local_c8.Num._4_4_,(int)local_c8.Num) != 0) &&
     (pUVar6 = AActor::GetGameInstance((AActor *)this), pUVar6 != (UGameInstance *)0x0)) {
    pUVar7 = Z_Construct_UClass_UReplaySubsystem_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar7 != (UClass *)0x0) goto LAB_148ad64e0;
LAB_148ad650e:
      pUVar7 = (UClass *)0x0;
    }
    else {
      if (pUVar7 == (UClass *)0x0) goto LAB_148ad650e;
      UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_148ad64e0:
      pUVar8 = Z_Construct_UClass_UReplaySubsystem_NoRegister();
      if (pUVar8 == (UClass *)0x0) goto LAB_148ad650e;
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_148ad650e;
    }
    this_00 = (UReplaySubsystem *)
              FSubsystemCollectionBase::GetSubsystemInternal
                        ((FSubsystemCollectionBase *)&pUVar6->SubsystemCollection,pUVar7);
    if (this_00 != (UReplaySubsystem *)0x0) {
      if (((local_c8._padding_._1_1_ & 2) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                             ,0x49,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UReplaySubsystem::SetExternalDataForObject
                (this_00,(UObject *)this,(uchar *)local_c8.Buffer.AllocatorInstance.Data,
                 (int)local_c8.Num);
    }
  }
  FBitWriter::~FBitWriter(&local_c8);
LAB_148ad6588:
  DestructItems<FWorldPartitionReplayStreamingSource,int>
            ((FWorldPartitionReplayStreamingSource *)
             local_f8.StreamingSources.AllocatorInstance.Data,local_f8.StreamingSources.ArrayNum);
  if ((FWorldPartitionReplayStreamingSource *)local_f8.StreamingSources.AllocatorInstance.Data !=
      (FWorldPartitionReplayStreamingSource *)0x0) {
    FMemory::Free(local_f8.StreamingSources.AllocatorInstance.Data);
  }
  if (local_f8.StreamingSourceNameIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_f8.StreamingSourceNameIndices.AllocatorInstance.Data);
  }
  return;
}

// RewindForReplay @ 148ada870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionReplay::RewindForReplay(AWorldPartitionReplay *this)

{
  int *piVar1;
  
  AActor::RewindForReplay((AActor *)this);
  DestructItems<FWorldPartitionReplaySample,int>
            ((FWorldPartitionReplaySample *)(this->ReplaySamples).AllocatorInstance.Data,
             (this->ReplaySamples).ArrayNum);
  piVar1 = &(this->ReplaySamples).ArrayMax;
  (this->ReplaySamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->ReplaySamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// StaticRegisterNativesAWorldPartitionReplay @ 148adb7f0

void __cdecl AWorldPartitionReplay::StaticRegisterNativesAWorldPartitionReplay(void)

{
  return;
}

// Uninitialize @ 148adceb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AWorldPartitionReplay::Uninitialize(UWorld *param_1)

{
  AWorldPartitionReplay *pAVar1;
  code *pcVar2;
  bool bVar3;
  UWorldPartition *pUVar4;
  UPackage *pUVar5;
  
  bVar3 = UWorld::IsGameWorld(param_1);
  if (bVar3) {
    pUVar4 = UWorld::GetWorldPartition(param_1);
    if ((pUVar4 != (UWorldPartition *)0x0) && (pUVar4->Replay != (AWorldPartitionReplay *)0x0)) {
      UWorld::DestroyActor(param_1,(AActor *)pUVar4->Replay,false,true);
      pAVar1 = pUVar4->Replay;
      pcVar2 = *(code **)(pAVar1->_padding_ + 0x170);
      pUVar5 = GetTransientPackage();
      (*pcVar2)(pAVar1,0,pUVar5,0x30);
      pUVar4->Replay = (AWorldPartitionReplay *)0x0;
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1262764812165709942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                       ,0x76,"WorldPartition && WorldPartition->Replay");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 148ae0890

void __thiscall
AWorldPartitionReplay::ValidateGeneratedRepEnums
          (AWorldPartitionReplay *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_StreamingSourceNames,L"StreamingSourceNames");
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
  if (Name_StreamingSourceNames != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\WorldPartitionReplay.gen.cpp"
                       ,0x7b,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldPartitionReplay"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

