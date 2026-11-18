// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 68

// StaticClass @ 146d39870

UClass * __cdecl AGameplayDebuggerCategoryReplicator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerCategoryReplicator",
               &Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton,
               StaticRegisterNativesAGameplayDebuggerCategoryReplicator,0x380,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayDebuggerCategoryReplicator>,
               InternalVTableHelperCtorCaller<AGameplayDebuggerCategoryReplicator>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton;
}

// AGameplayDebuggerCategoryReplicator @ 146d3f570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerCategoryReplicator * __thiscall
AGameplayDebuggerCategoryReplicator::AGameplayDebuggerCategoryReplicator
          (AGameplayDebuggerCategoryReplicator *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayDebuggerCategoryReplicator__6B_;
  (this->OwnerPC).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->ReplicatedData).Owner.field0_0x0.DebugPtr = (AGameplayDebuggerCategoryReplicator *)0x0;
  (this->ReplicatedData).SavedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedData).SavedData.ArrayNum = 0;
  (this->ReplicatedData).SavedData.ArrayMax = 0;
  (this->DebugActor).Actor.WeakPtr = (FWeakObjectPtr)0x0;
  (this->DebugActor).ActorName.ComparisonIndex = 0;
  (this->DebugActor).ActorName.Number = 0;
  (this->DebugActor).SyncCounter = 0;
  (this->VisLogSync).DeviceIDs.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisLogSync).DeviceIDs.Data.ArrayNum = 0;
  (this->VisLogSync).DeviceIDs.Data.ArrayMax = 0;
  (this->RenderingComp).field0_0x0.DebugPtr = (UGameplayDebuggerRenderingComponent *)0x0;
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  (this->Categories).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->ViewLocation).bIsSet = false;
  (this->ViewDirection).bIsSet = false;
  return this;
}

// AGameplayDebuggerCategoryReplicator @ 146d3f610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerCategoryReplicator * __thiscall
AGameplayDebuggerCategoryReplicator::AGameplayDebuggerCategoryReplicator
          (AGameplayDebuggerCategoryReplicator *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&___7AGameplayDebuggerCategoryReplicator__6B_;
  (this->OwnerPC).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->ReplicatedData).Owner.field0_0x0.DebugPtr = (AGameplayDebuggerCategoryReplicator *)0x0;
  (this->ReplicatedData).SavedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedData).SavedData.ArrayNum = 0;
  (this->ReplicatedData).SavedData.ArrayMax = 0;
  (this->DebugActor).Actor.WeakPtr = (FWeakObjectPtr)0x0;
  (this->DebugActor).ActorName.ComparisonIndex = 0;
  (this->DebugActor).ActorName.Number = 0;
  (this->DebugActor).SyncCounter = 0;
  (this->VisLogSync).DeviceIDs.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisLogSync).DeviceIDs.Data.ArrayNum = 0;
  (this->VisLogSync).DeviceIDs.Data.ArrayMax = 0;
  (this->RenderingComp).field0_0x0.DebugPtr = (UGameplayDebuggerRenderingComponent *)0x0;
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  (this->Categories).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->ViewLocation).bIsSet = false;
  (this->ViewDirection).bIsSet = false;
  bVar3 = *(byte *)((longlong)&this->_padding_ + 2);
  this->bIsEnabledLocal = 0;
  this->bIsEditorWorldReplicator = 0;
  this->bIsLocal = 0;
  this->bHasAuthority = 0;
  this->bIsEnabled = false;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar3 & 0xfb | 0xb;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (this->ReplicatedData).Owner.field0_0x0.DebugPtr = this;
  this->bSendDataPacksUsingRPC = 0;
  return this;
}

// ~AGameplayDebuggerCategoryReplicator @ 146d40f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::~AGameplayDebuggerCategoryReplicator
          (AGameplayDebuggerCategoryReplicator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AGameplayDebuggerCategoryReplicator__6B_;
  DestructItems<TSharedRef<FGameplayDebuggerExtension,1>,int>
            ((TSharedRef<FGameplayDebuggerExtension,1> *)(this->Extensions).AllocatorInstance.Data,
             (this->Extensions).ArrayNum);
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int>
            ((TSharedRef<FGameplayDebuggerCategory,1> *)(this->Categories).AllocatorInstance.Data,
             (this->Categories).ArrayNum);
  pFVar1 = (this->Categories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisLogSync).DeviceIDs.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayDebuggerCategoryData,int>
            ((FGameplayDebuggerCategoryData *)
             (this->ReplicatedData).SavedData.AllocatorInstance.Data,
             (this->ReplicatedData).SavedData.ArrayNum);
  pFVar1 = (this->ReplicatedData).SavedData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 146d432e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::BeginPlay(AGameplayDebuggerCategoryReplicator *this)

{
  APlayerController *pAVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ENetMode EVar5;
  uint uVar6;
  UWorld *this_00;
  
  AActor::BeginPlay((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerCategoryReplicator.cpp"
                       ,0x231,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UWorld::InternalGetNetMode(this_00);
  if (this_00 == (UWorld *)0x0) {
LAB_146d43361:
    uVar6 = 2;
  }
  else {
    EVar5 = UWorld::InternalGetNetMode(this_00);
    if (EVar5 != NM_Client) goto LAB_146d43361;
    bVar3 = UWorld::IsPlayingReplay(this_00);
    uVar6 = 0;
    if (bVar3) goto LAB_146d43361;
  }
  this->bHasAuthority = 0;
  *(uint *)&this->field_0x378 = *(uint *)&this->field_0x378 | uVar6;
  pAVar1 = (this->OwnerPC).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerController *)0x0) {
    uVar6 = 0;
    if ((pAVar1->_padding_ & 2) == 0) goto LAB_146d4339a;
    cVar4 = (**(code **)(pAVar1->_padding_ + 0x7f0))();
    uVar6 = 0;
    if (cVar4 == '\0') goto LAB_146d4339a;
  }
  uVar6 = 4;
LAB_146d4339a:
  this->bIsLocal = 0;
  *(uint *)&this->field_0x378 = *(uint *)&this->field_0x378 | uVar6;
  Init(this);
  return;
}

// ClientDataPackPacket @ 146d44f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ClientDataPackPacket
          (AGameplayDebuggerCategoryReplicator *this,FGameplayDebuggerDataPackRPCParams *param_1)

{
  UFunction *pUVar1;
  FName local_38;
  int local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_2c._0_2_ = (param_1->Header).DataVersion;
  local_2c._2_2_ = (param_1->Header).SyncCounter;
  local_2c._4_4_ = (param_1->Header).DataSize;
  uStack_24 = *(undefined8 *)&(param_1->Header).DataOffset;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_38 = param_1->CategoryName;
  local_30 = param_1->DataPackIdx;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&local_18,&param_1->Data);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_38);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ClientDataPackPacket_Implementation @ 146d44ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ClientDataPackPacket_Implementation
          (AGameplayDebuggerCategoryReplicator *this,FGameplayDebuggerDataPackRPCParams *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_b8 [48];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  uVar3 = TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_AGameplayDebuggerCategoryReplicator::ClientDataPackPacket_Implementation_::__l2::<lambda_1>_>
                    (&this->Categories,(<lambda_1>)param_1->CategoryName,(this->Categories).ArrayNum
                    );
  if (uVar3 != 0xffffffff) {
    local_b8._40_4_ = local_b8._40_4_ & 0xfffffff8;
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._16_2_ = (param_1->Header).DataVersion;
    local_b8._18_2_ = (param_1->Header).SyncCounter;
    local_b8._20_4_ = (param_1->Header).DataSize;
    local_b8._24_4_ = (param_1->Header).DataOffset;
    local_b8._28_4_ = *(undefined4 *)&(param_1->Header).field_0xc;
    local_b8._8_4_ = 0;
    local_b8._12_4_ = 0;
    local_b8._32_4_ = 0;
    local_b8._36_4_ = 0;
    local_b8[0x2c] = ResetOnTick;
    iVar6 = local_b8._20_4_ - (param_1->Header).DataOffset;
    local_78 = 0;
    if (FGameplayDebuggerDataPack::PacketSize < iVar6) {
      iVar6 = FGameplayDebuggerDataPack::PacketSize;
    }
    local_60 = 0;
    local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    if (0 < iVar6) {
      _Src = (param_1->Data).AllocatorInstance.Data;
      if ((_Src == (FScriptContainerElement *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar6,(ForAnyElementType *)local_b8,(int *)(local_b8 + 8),
                         (int *)(local_b8 + 0xc));
      memcpy((FScriptContainerElement *)(local_b8._0_8_ + (longlong)iVar4),_Src,(longlong)iVar6);
    }
    OnReceivedDataPackPacket(this,uVar3,param_1->DataPackIdx,(FGameplayDebuggerDataPack *)local_b8);
    uVar5 = 0;
    if ((int)uVar3 < (this->Categories).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (5 < (byte)LogGameplayDebugReplication._0_1_) {
      uVar5 = 0;
      if (param_1->DataPackIdx <
          *(int *)(*(longlong *)
                    ((this->Categories).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10) + 0x78
                  )) {
        uVar5 = (uint)~param_1->DataPackIdx >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_70,(FWriteAccessScope *)&local_58);
    if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_40);
    if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  return;
}

// CollectCategoryData @ 146d45340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::CollectCategoryData
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  UWorld *pUVar11;
  FVisualLogger *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FGameplayDebuggerDataPack *this_00;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  char local_res10;
  undefined8 local_res18;
  longlong local_res20;
  void *local_158;
  undefined8 local_150;
  FString local_148;
  FArchiveState local_138;
  undefined8 local_a8;
  void **local_a0;
  undefined8 local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  
  local_res10 = param_1;
  pUVar11 = AActor::GetWorld((AActor *)this);
  dVar3 = pUVar11->TimeSeconds;
  pFVar12 = FVisualLogger::Get();
  ::FString::Reset(&(this->VisLogSync).DeviceIDs,0);
  if (pFVar12->bIsRecordingToFile) {
    pFVar14 = (pFVar12->OutputDevices).AllocatorInstance.Data;
    iVar5 = (pFVar12->OutputDevices).ArrayNum;
    pFVar1 = pFVar14 + (longlong)iVar5 * 8;
    while( true ) {
      if ((pFVar12->OutputDevices).ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FVisualLogDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      param_1 = (bool)local_res10;
      if (pFVar14 == pFVar1) break;
      ::FString::PrintfImpl(&local_148,L"%u, ");
      iVar18 = local_148.Data.ArrayNum + -1;
      if (local_148.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      ::FString::AppendChars
                (&(this->VisLogSync).DeviceIDs,(wchar_t *)local_148.Data.AllocatorInstance.Data,
                 iVar18);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      pFVar14 = pFVar14 + 8;
    }
  }
  uVar19 = 0;
  if (0 < (this->Categories).ArrayNum) {
    local_res20 = 0;
    do {
      lVar7 = local_res20;
      uVar15 = 0;
      uVar10 = 0;
      if ((int)uVar19 < (this->Categories).ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar6 = *(longlong **)((this->Categories).AllocatorInstance.Data + lVar7);
      if ((((byte)*(undefined4 *)((longlong)plVar6 + 0x34) & 0xc0) == 0xc0) &&
         ((param_1 != false || ((double)*(float *)(plVar6 + 6) < dVar3 - (double)plVar6[8])))) {
        uVar17 = uVar15;
        if (0 < (int)plVar6[0xf]) {
          do {
            uVar16 = (uint)uVar17;
            uVar10 = 0;
            if ((int)uVar16 < (int)plVar6[0xf]) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = plVar6[0xe];
            puVar2 = (uint *)(uVar15 + 0x28 + lVar7);
            *puVar2 = *puVar2 & 0xfffffffe;
            cVar4 = *(char *)(uVar15 + 0x2c + lVar7);
            if ((cVar4 == '\x02') ||
               ((cVar4 == '\x01' &&
                (*(short *)(uVar15 + 0x12 + lVar7) != (this->DebugActor).SyncCounter)))) {
              lVar7 = uVar15 + lVar7;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar7 + 0x30),
                         &local_88);
              if (*(int *)(lVar7 + 0x40) == 0) {
                plVar13 = (longlong *)0x0;
              }
              else {
                plVar13 = *(longlong **)(lVar7 + 0x38);
              }
              (**(code **)(*plVar13 + 0x60))();
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_88);
            }
            uVar15 = uVar15 + 0x60;
            uVar17 = (ulonglong)(uVar16 + 1);
          } while ((int)(uVar16 + 1) < (int)plVar6[0xf]);
        }
        uVar15 = 0;
        if (*(int *)((longlong)plVar6 + 0x5c) < 0) {
          DestructItems<FString,int>((FString *)plVar6[10],(int)plVar6[0xb]);
          *(undefined4 *)(plVar6 + 0xb) = 0;
          if (*(int *)((longlong)plVar6 + 0x5c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(plVar6 + 10),0,
                       (int *)((longlong)plVar6 + 0x5c));
          }
        }
        else {
          DestructItems<FString,int>((FString *)plVar6[10],(int)plVar6[0xb]);
          *(undefined4 *)(plVar6 + 0xb) = 0;
        }
        if (*(int *)((longlong)plVar6 + 0x6c) < 0) {
          DestructItems<FGameplayDebuggerShape,int>
                    ((FGameplayDebuggerShape *)plVar6[0xc],(int)plVar6[0xd]);
          *(undefined4 *)(plVar6 + 0xd) = 0;
          if (*(int *)((longlong)plVar6 + 0x6c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,(ForAnyElementType *)(plVar6 + 0xc),0,
                       (int *)((longlong)plVar6 + 0x6c));
          }
        }
        else {
          DestructItems<FGameplayDebuggerShape,int>
                    ((FGameplayDebuggerShape *)plVar6[0xc],(int)plVar6[0xd]);
          *(undefined4 *)(plVar6 + 0xd) = 0;
        }
        pcVar8 = *(code **)(*plVar6 + 0x18);
        FWeakObjectPtr::Get((FWeakObjectPtr *)&this->DebugActor);
        (*pcVar8)(plVar6,(this->OwnerPC).field0_0x0.DebugPtr);
        plVar6[8] = (longlong)dVar3;
        uVar17 = uVar15;
        if (0 < (int)plVar6[0xf]) {
          do {
            uVar16 = (uint)uVar15;
            uVar10 = 0;
            if ((int)uVar16 < (int)plVar6[0xf]) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            this_00 = (FGameplayDebuggerDataPack *)(plVar6[0xe] + uVar17);
            if ((*(byte *)((longlong)plVar6 + 0x34) & 0x20) == 0) {
              bVar9 = FGameplayDebuggerDataPack::RequestReplication
                                (this_00,(this->DebugActor).SyncCounter);
              if (bVar9) {
                if (5 < (byte)LogGameplayDebugReplication._0_1_) {
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
                }
                if (this->bSendDataPacksUsingRPC != 0) {
                  SendDataPackPacket(this,*(FName *)(plVar6 + 9),uVar16,this_00);
                }
              }
            }
            else {
              local_158 = (void *)0x0;
              local_150 = 0;
              local_138._padding_ = 0;
              local_138.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
              local_res18 = 0;
              local_138.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
              local_138.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
              local_138.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
              local_138._40_8_ = 0;
              local_138.ArSerializingDefaults = 0;
              local_138.ArPortFlags = 0;
              local_138.ArMaxSerializeSize = 0;
              local_138.ArUEVer.FileVersionUE4 = 0;
              local_138.ArUEVer.FileVersionUE5 = 0;
              local_138.ArLicenseeUEVer = 0;
              local_138.ArEngineVer.Major = 0;
              local_138.ArEngineVer.Minor = 0;
              local_138.ArEngineVer.Patch = 0;
              local_138.ArEngineVer._6_2_ = 0;
              local_138.ArEngineVer.Changelist = 0;
              local_138.CustomVersionContainer = (FCustomVersionContainer *)0x0;
              local_138.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
              local_138.SavePackageData = (FArchiveSavePackageData *)0x0;
              local_138.SerializedProperty = (FProperty *)0x0;
              local_138.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
              local_138.bCustomVersionsAreReset = false;
              local_138._129_7_ = 0;
              local_138.NextProxy = (FArchiveState *)0x0;
              FArchiveState::FArchiveState(&local_138);
              local_a8 = 0;
              local_138._padding_ =
                   (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
              local_a0 = &local_158;
              local_98 = local_res18;
              FArchiveState::SetIsSaving(&local_138,true);
              (**(code **)(local_138._padding_ + 0x108))(&local_138,0);
              local_138._padding_ = (longlong)&___7FMemoryWriter__6B_;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &this_00->SerializeDelegate,local_70);
              plVar13 = (longlong *)0x0;
              if (*(int *)&(this_00->SerializeDelegate).field_0x10 != 0) {
                plVar13 = *(longlong **)&(this_00->SerializeDelegate).field_0x8;
              }
              (**(code **)(*plVar13 + 0x60))(plVar13,&local_138);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(local_70);
              uVar10 = (*FCrc::MemCrc32Func)(local_158,(int)local_150,0);
              if ((uVar10 == this_00->DataCRC) && (this_00->bIsDirty == 0)) {
                FArchive::~FArchive((FArchive *)&local_138);
                if (local_158 != (void *)0x0) {
                  FMemory::Free(local_158);
                }
              }
              else {
                this_00->DataCRC = uVar10;
                FArchive::~FArchive((FArchive *)&local_138);
                if (local_158 != (void *)0x0) {
                  FMemory::Free(local_158);
                }
                (**(code **)(*plVar6 + 0x30))(plVar6,uVar15);
              }
              if ((*(byte *)((longlong)plVar6 + 0x34) & 0x40) != 0) {
                (this_00->Header).SyncCounter = (this->DebugActor).SyncCounter;
              }
            }
            uVar15 = (ulonglong)(uVar16 + 1);
            uVar17 = uVar17 + 0x60;
          } while ((int)(uVar16 + 1) < (int)plVar6[0xf]);
        }
      }
      uVar19 = uVar19 + 1;
      local_res20 = local_res20 + 0x10;
      param_1 = (bool)local_res10;
    } while ((int)uVar19 < (this->Categories).ArrayNum);
  }
  return;
}

// EndPlay @ 146d4b290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::EndPlay(AGameplayDebuggerCategoryReplicator *this,Type param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res8;
  
  AActor::EndPlay((AActor *)this,param_1);
  SetReplicatorOwner(this,(APlayerController *)0x0);
  uVar7 = 0;
  if (0 < (this->Categories).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Categories).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
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
      (**(code **)(**(longlong **)((this->Categories).AllocatorInstance.Data + lVar8) + 0x10))();
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->Categories).ArrayNum);
  }
  uVar7 = 0;
  if (0 < (this->Extensions).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Extensions).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
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
      (**(code **)(**(longlong **)((this->Extensions).AllocatorInstance.Data + lVar8) + 0x10))();
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->Extensions).ArrayNum);
  }
  pFVar5 = ::FName::FName(&local_res8,"GameplayDebugger");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pIVar6 + 1),this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pIVar6 + 5),this);
  return;
}

// GetLifetimeReplicatedProps @ 146d4cc00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::GetLifetimeReplicatedProps
          (AGameplayDebuggerCategoryReplicator *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  UClass *pUVar5;
  FName local_res18 [2];
  FDoRepLifetimeParams local_38;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,7,L"OwnerPC",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,10,L"DebugActor",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,10,L"VisLogSync",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,10,L"bIsEnabled",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0xe,L"ReplicatedData",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,L"bHidden");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  pUVar5 = StaticClass();
  DisableReplicatedLifetimeProperty(pUVar5,pUVar3,FVar1,param_1);
  return;
}

// GetNetConnection @ 146d4d0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNetConnection * __thiscall
AGameplayDebuggerCategoryReplicator::GetNetConnection(AGameplayDebuggerCategoryReplicator *this)

{
  APlayerController *pAVar1;
  UNetConnection *pUVar2;
  
  pAVar1 = (this->OwnerPC).field0_0x0.DebugPtr;
  if ((pAVar1 != (APlayerController *)0x0) && (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146d4d10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UNetConnection *)
             (**(code **)(((this->OwnerPC).field0_0x0.DebugPtr)->_padding_ + 0x570))();
    return pUVar2;
  }
  return (UNetConnection *)0x0;
}

// GetNetOwner @ 146d4d120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall
AGameplayDebuggerCategoryReplicator::GetNetOwner(AGameplayDebuggerCategoryReplicator *this)

{
  return (AActor *)(this->OwnerPC).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146d4d700

UClass * __cdecl AGameplayDebuggerCategoryReplicator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerCategoryReplicator",
               &Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton,
               StaticRegisterNativesAGameplayDebuggerCategoryReplicator,0x380,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayDebuggerCategoryReplicator>,
               InternalVTableHelperCtorCaller<AGameplayDebuggerCategoryReplicator>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton;
}

// GetViewPoint @ 146d4de30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::GetViewPoint
          (AGameplayDebuggerCategoryReplicator *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  if (((this->ViewLocation).bIsSet != false) && ((this->ViewDirection).bIsSet != false)) {
    dVar2 = (this->ViewLocation).TypedValue.field0_0x0._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (this->ViewLocation).TypedValue.field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar2;
    (param_1->field0_0x0)._s_0.Z = (this->ViewLocation).TypedValue.field0_0x0._s_0.Z;
    if ((this->ViewDirection).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        bVar3 = (bool)(*pcVar1)();
        return bVar3;
      }
    }
    dVar2 = (this->ViewDirection).TypedValue.field0_0x0._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (this->ViewDirection).TypedValue.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar2;
    (param_2->field0_0x0)._s_0.Z = (this->ViewDirection).TypedValue.field0_0x0._s_0.Z;
    return true;
  }
  return false;
}

// Init @ 146d4e530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall AGameplayDebuggerCategoryReplicator::Init(AGameplayDebuggerCategoryReplicator *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  FName *pFVar5;
  FModuleManager *pFVar6;
  IModuleInterface *pIVar7;
  UClass *pUVar8;
  UGameplayDebuggerRenderingComponent *pUVar9;
  FGameplayDebuggerModule *this_00;
  AGameplayDebuggerPlayerManager *this_01;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  FName local_c8;
  undefined1 local_c0 [16];
  FName local_b0;
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar4 = AActor::GetWorld((AActor *)this);
  if (pUVar4 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerCategoryReplicator.cpp"
                       ,600,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = ::FName::FName(&local_c8,"GameplayDebugger");
  FVar1 = *pFVar5;
  pFVar6 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(pFVar6,FVar1);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<AGameplayDebuggerCategoryReplicator>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (pIVar7 + 1),(AGameplayDebuggerCategoryReplicator *)local_c0,(pmf_6245bad7)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<AGameplayDebuggerCategoryReplicator>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (pIVar7 + 5),(AGameplayDebuggerCategoryReplicator *)(local_c0 + 8),(pmf_6245bad7)this);
  OnCategoriesChanged(this);
  OnExtensionsChanged(this);
  (**(code **)(this->_padding_ + 0x368))(this);
  if (this->bIsLocal != 0) {
    pFVar5 = ::FName::FName(&local_b0,L"RenderingComp");
    FVar1 = *pFVar5;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = UGameplayDebuggerRenderingComponent::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar8);
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar9 = (UGameplayDebuggerRenderingComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar10 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UGameplayDebuggerRenderingComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->RenderingComp).field0_0x0.DebugPtr = pUVar9;
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)pUVar9,pUVar4,(FRegisterComponentContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 = (this->RenderingComp).field0_0x0.DebugPtr,
       pUVar9 != (UGameplayDebuggerRenderingComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)(this->RenderingComp).field0_0x0;
  }
  if (this->bHasAuthority != 0) {
    SetEnabled(this,false);
  }
  pFVar5 = ::FName::FName(local_a8,"GameplayDebugger");
  FVar1 = *pFVar5;
  pFVar6 = FModuleManager::Get();
  this_00 = (FGameplayDebuggerModule *)FModuleManager::LoadModuleChecked(pFVar6,FVar1);
  this_01 = FGameplayDebuggerModule::GetPlayerManager(this_00,pUVar4);
  AGameplayDebuggerPlayerManager::RegisterReplicator(this_01,this);
  return;
}

// IsCategoryEnabled @ 146d4f1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::IsCategoryEnabled
          (AGameplayDebuggerCategoryReplicator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Categories).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Categories).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((*(uint *)(*(longlong *)
                    ((this->Categories).AllocatorInstance.Data + (longlong)param_1 * 0x10) + 0x34)
         >> 7 & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsNetRelevantFor @ 146d4f5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::IsNetRelevantFor
          (AGameplayDebuggerCategoryReplicator *this,AActor *param_1,AActor *param_2,
          TVector<double> *param_3)

{
  APlayerController *pAVar1;
  
  pAVar1 = (this->OwnerPC).field0_0x0.DebugPtr;
  if (pAVar1 == (APlayerController *)0x0) {
    return param_1 == (AActor *)0x0;
  }
  return pAVar1 == (APlayerController *)param_1;
}

// NotifyCategoriesToolState @ 146d54d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::NotifyCategoriesToolState
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Categories).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Categories).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = **(longlong **)((this->Categories).AllocatorInstance.Data + lVar6);
      if (param_1) {
        (**(code **)(lVar1 + 8))();
      }
      else {
        (**(code **)(lVar1 + 0x10))();
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->Categories).ArrayNum);
  }
  return;
}

// NotifyExtensionsToolState @ 146d54e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::NotifyExtensionsToolState
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Extensions).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Extensions).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = **(longlong **)((this->Extensions).AllocatorInstance.Data + lVar6);
      if (param_1) {
        (**(code **)(lVar1 + 8))();
      }
      else {
        (**(code **)(lVar1 + 0x10))();
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->Extensions).ArrayNum);
  }
  return;
}

// OnCategoriesChanged @ 146d55070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::OnCategoriesChanged(AGameplayDebuggerCategoryReplicator *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FGameplayDebuggerCategoryData,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  uint uVar4;
  FName FVar5;
  FGameplayDebuggerCategoryData *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FModuleManager *pFVar11;
  IModuleInterface *pIVar12;
  UWorld *pUVar13;
  FGameplayDebuggerModule *this_01;
  AGameplayDebuggerPlayerManager *this_02;
  uint uVar14;
  FName local_res8;
  FName local_res10;
  
  pFVar10 = ::FName::FName(&local_res8,"GameplayDebugger");
  FVar5 = *pFVar10;
  pFVar11 = FModuleManager::Get();
  pIVar12 = FModuleManager::LoadModuleChecked(pFVar11,FVar5);
  FGameplayDebuggerAddonManager::CreateCategories
            ((FGameplayDebuggerAddonManager *)(pIVar12 + 1),this,&this->Categories);
  this_00 = &(this->ReplicatedData).SavedData;
  piVar1 = &(this->ReplicatedData).SavedData.ArrayMax;
  pFVar6 = (FGameplayDebuggerCategoryData *)(this_00->AllocatorInstance).Data;
  piVar2 = &(this->ReplicatedData).SavedData.ArrayNum;
  if ((this->ReplicatedData).SavedData.ArrayMax < 0) {
    DestructItems<FGameplayDebuggerCategoryData,int>(pFVar6,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FGameplayDebuggerCategoryData,int>(pFVar6,*piVar2);
    *piVar2 = 0;
  }
  iVar3 = *piVar2;
  uVar4 = (((this->ReplicatedData).Owner.field0_0x0.DebugPtr)->Categories).ArrayNum;
  if (iVar3 < (int)uVar4) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,uVar4 - iVar3,&this_00->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FGameplayDebuggerCategoryData,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x40,uVar4 - iVar3);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar3) {
      uVar14 = iVar3 - uVar4;
      if ((int)(uVar14 | uVar4) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar14 != 0) {
        TArray<FGameplayDebuggerCategoryData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar4,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&this_00->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  if (this->bIsLocal != 0) {
    pUVar13 = AActor::GetWorld((AActor *)this);
    pFVar10 = ::FName::FName(&local_res10,"GameplayDebugger");
    FVar5 = *pFVar10;
    pFVar11 = FModuleManager::Get();
    this_01 = (FGameplayDebuggerModule *)FModuleManager::LoadModuleChecked(pFVar11,FVar5);
    this_02 = FGameplayDebuggerModule::GetPlayerManager(this_01,pUVar13);
    AGameplayDebuggerPlayerManager::RefreshInputBindings(this_02,this);
  }
  return;
}

// OnExtensionsChanged @ 146d55e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::OnExtensionsChanged(AGameplayDebuggerCategoryReplicator *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *pFVar3;
  IModuleInterface *pIVar4;
  UWorld *pUVar5;
  FGameplayDebuggerModule *this_00;
  AGameplayDebuggerPlayerManager *this_01;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,"GameplayDebugger");
  FVar1 = *pFVar2;
  pFVar3 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(pFVar3,FVar1);
  FGameplayDebuggerAddonManager::CreateExtensions
            ((FGameplayDebuggerAddonManager *)(pIVar4 + 1),this,&this->Extensions);
  if (this->bIsLocal != 0) {
    pUVar5 = AActor::GetWorld((AActor *)this);
    pFVar2 = ::FName::FName(&local_res8,"GameplayDebugger");
    FVar1 = *pFVar2;
    pFVar3 = FModuleManager::Get();
    this_00 = (FGameplayDebuggerModule *)FModuleManager::LoadModuleChecked(pFVar3,FVar1);
    this_01 = FGameplayDebuggerModule::GetPlayerManager(this_00,pUVar5);
    AGameplayDebuggerPlayerManager::RefreshInputBindings(this_01,this);
  }
  return;
}

// OnReceivedDataPackPacket @ 146d561d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::OnReceivedDataPackPacket
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2,
          FGameplayDebuggerDataPack *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  short sVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FGameplayDebuggerDataPack *this_00;
  uint uVar11;
  longlong lVar12;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  
  if (param_1 < 0) {
    return;
  }
  if ((this->Categories).ArrayNum <= param_1) {
    return;
  }
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->Categories).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2 < 0) {
    return;
  }
  lVar12 = (longlong)param_1 * 0x10;
  if (*(int *)(*(longlong *)((this->Categories).AllocatorInstance.Data + lVar12) + 0x78) <= param_2)
  {
    return;
  }
  uVar9 = 0;
  if (param_1 < (this->Categories).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)((this->Categories).AllocatorInstance.Data + lVar12);
  uVar9 = 0;
  if (param_2 < *(int *)(lVar3 + 0x78)) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (FGameplayDebuggerDataPack *)(*(longlong *)(lVar3 + 0x70) + (longlong)param_2 * 0x60);
  if ((this_00->Header).DataVersion == (param_3->Header).DataVersion) {
    iVar2 = (this_00->Data).ArrayNum;
    piVar1 = &(this_00->Data).ArrayNum;
    if ((param_3->Header).DataSize <= iVar2) {
      return;
    }
    if ((param_3->Header).DataOffset != iVar2) {
      if ((byte)LogGameplayDebugReplication._0_1_ < 6) {
        return;
      }
      uVar9 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_60 = *(FName *)(*(longlong *)((this->Categories).AllocatorInstance.Data + lVar12) + 0x48
                           );
      ::FName::ToString(&local_60,&local_48);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      goto LAB_146d56675;
    }
    if ((this_00 == param_3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (param_3->Data).ArrayNum;
    if (iVar2 != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar2,(ForAnyElementType *)this_00,piVar1,&(this_00->Data).ArrayMax);
      memcpy((this_00->Data).AllocatorInstance.Data + iVar10,(param_3->Data).AllocatorInstance.Data,
             (longlong)iVar2);
    }
    (this_00->Header).DataOffset = *piVar1;
  }
  else {
    if ((param_3->Header).DataOffset != 0) {
      if ((byte)LogGameplayDebugReplication._0_1_ < 6) {
        return;
      }
      uVar9 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68 = *(FName *)(*(longlong *)((this->Categories).AllocatorInstance.Data + lVar12) + 0x48
                           );
      ::FName::ToString(&local_68,&local_58);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
LAB_146d56675:
      if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      return;
    }
    sVar6 = (param_3->Header).SyncCounter;
    iVar2 = (param_3->Header).DataSize;
    iVar10 = (param_3->Header).DataOffset;
    uVar7 = *(undefined4 *)&(param_3->Header).field_0xc;
    (this_00->Header).DataVersion = (param_3->Header).DataVersion;
    (this_00->Header).SyncCounter = sVar6;
    (this_00->Header).DataSize = iVar2;
    (this_00->Header).DataOffset = iVar10;
    *(undefined4 *)&(this_00->Header).field_0xc = uVar7;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this_00,&param_3->Data);
  }
  if ((this_00->Data).ArrayNum == (this_00->Header).DataSize) {
    if (5 < (byte)LogGameplayDebugReplication._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
    }
    FGameplayDebuggerDataPack::OnReplicated(this_00);
    uVar9 = 0;
    if (param_1 < (this->Categories).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)((this->Categories).AllocatorInstance.Data + lVar12);
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  return;
}

// OnRep_ReplicatedData @ 146d566c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::OnRep_ReplicatedData(AGameplayDebuggerCategoryReplicator *this)

{
  UReplicationSystem *pUVar1;
  
  pUVar1 = UE::Net::FReplicationSystemUtil::GetReplicationSystem((AActor *)this);
  if (pUVar1 != (UReplicationSystem *)0x0) {
    FGameplayDebuggerNetPack::ApplyToOwner(&this->ReplicatedData);
    return;
  }
  return;
}

// OnReplicationStartedForIris @ 146d56990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::OnReplicationStartedForIris
          (AGameplayDebuggerCategoryReplicator *this,FOnReplicationStartedParams *param_1)

{
  UReplicationSystem *pUVar1;
  
  pUVar1 = UE::Net::FReplicationSystemUtil::GetReplicationSystem((AActor *)this);
  if (pUVar1 != (UReplicationSystem *)0x0) {
    AActor::SetCallPreReplication((AActor *)this,true);
    this->bSendDataPacksUsingRPC = 1;
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  }
  AActor::OnReplicationStartedForIris((AActor *)this,param_1);
  return;
}

// PostNetReceive @ 146d57d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::PostNetReceive(AGameplayDebuggerCategoryReplicator *this)

{
  undefined4 uVar1;
  
  AActor::PostNetReceive((AActor *)this);
  uVar1 = *(undefined4 *)&this->field_0x378;
  if ((uint)this->bIsEnabled != ZPULL(uVar1,0,1)) {
    *(uint *)&this->field_0x378 = (this->bIsEnabledLocal ^ (uint)this->bIsEnabled) & 1 ^ uVar1;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
    return;
  }
  return;
}

// PreReplication @ 146d57d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::PreReplication
          (AGameplayDebuggerCategoryReplicator *this,IRepChangedPropertyTracker *param_1)

{
  FNetHandle FVar1;
  
  FVar1 = UE::Net::FReplicationSystemUtil::GetNetHandle((UObject *)&stack0x00000018);
  if ((*(int *)FVar1.field0_0x0 == 0) && (*(int *)((longlong)FVar1.field0_0x0 + 4) == 0)) {
    return;
  }
  FGameplayDebuggerNetPack::PopulateFromOwner(&this->ReplicatedData);
  return;
}

// ResetViewPoint @ 146d5aaa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ResetViewPoint(AGameplayDebuggerCategoryReplicator *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  if ((this->ViewLocation).bIsSet != false) {
    (this->ViewLocation).bIsSet = false;
  }
  if ((this->ViewDirection).bIsSet != false) {
    (this->ViewDirection).bIsSet = false;
  }
  if (this->bHasAuthority == 0) {
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,
                        NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint);
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146d5aaf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// SendCategoryInputEvent @ 146d5adc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SendCategoryInputEvent
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  UFunction *pUVar5;
  int local_res20;
  int local_res24;
  
  if (((-1 < param_2) && (-1 < param_1)) && (param_1 < (this->Categories).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Categories).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_2 < *(int *)(*(longlong *)
                             ((this->Categories).AllocatorInstance.Data + (longlong)param_1 * 0x10)
                           + 0x20)) &&
       ((this->bIsLocal == 0 || (bVar2 = IsCategoryEnabled(this,param_1), bVar2)))) {
      uVar3 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FGameplayDebuggerAddonBase::GetInputHandler
                         (*(FGameplayDebuggerAddonBase **)
                           ((this->Categories).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                          param_2);
      if ((pFVar4->Mode == Local) || (this->bHasAuthority != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&pFVar4->Delegate);
      }
      else {
        local_res20 = param_1;
        local_res24 = param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this,
                            NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_res20);
      }
    }
  }
  return;
}

// SendDataPackPacket @ 146d5af60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SendDataPackPacket
          (AGameplayDebuggerCategoryReplicator *this,FName param_1,int param_2,
          FGameplayDebuggerDataPack *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  UFunction *pUVar6;
  FScriptContainerElement *_Src_00;
  int iVar7;
  short local_6c;
  int iStack_64;
  ForAnyElementType local_58;
  int local_50 [2];
  FName local_48;
  int local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  uVar2._0_2_ = (param_3->Header).DataVersion;
  uVar2._2_2_ = (param_3->Header).SyncCounter;
  uVar2._4_4_ = (param_3->Header).DataSize;
  uVar3 = *(undefined8 *)&(param_3->Header).DataOffset;
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_3->Header).DataOffset;
  iVar7 = (param_3->Header).DataSize - iVar5;
  local_50[0] = 0;
  local_50[1] = 0;
  if (FGameplayDebuggerDataPack::PacketSize < iVar7) {
    iVar7 = FGameplayDebuggerDataPack::PacketSize;
  }
  if (0 < iVar7) {
    _Src_00 = (param_3->Data).AllocatorInstance.Data + iVar5;
    if ((_Src_00 == (FScriptContainerElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar7,&local_58,local_50,local_50 + 1);
    memcpy(local_58.Data + iVar5,_Src_00,(longlong)iVar7);
  }
  if (5 < (byte)LogGameplayDebugReplication._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
  }
  iVar5 = local_50[0];
  _Src.Data = local_58.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_1c = 0;
  local_48 = param_1;
  local_40 = param_2;
  local_3c = uVar2;
  uStack_34 = uVar3;
  local_20 = local_50[0];
  if (local_50[0] != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50[0],0,&local_28,local_50[0],&local_1c);
    memcpy(local_28.Data,_Src.Data,(longlong)iVar5);
  }
  pUVar6 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_48);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (param_3->bNeedsConfirmation == 1 && param_3->bReceived == 0) {
    iStack_64 = (int)uVar3;
    FGameplayDebuggerDataPack::OnPacketRequest(param_3,(undefined2)uVar2,iStack_64);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// SendExtensionInputEvent @ 146d5b180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SendExtensionInputEvent
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  UFunction *pUVar5;
  int local_res20;
  int local_res24;
  
  if (((-1 < param_2) && (-1 < param_1)) && (param_1 < (this->Extensions).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Extensions).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_2 < *(int *)(*(longlong *)
                            ((this->Extensions).AllocatorInstance.Data + (longlong)param_1 * 0x10) +
                          0x20)) {
      uVar3 = 0;
      if (param_1 < (this->Extensions).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FGameplayDebuggerAddonBase::GetInputHandler
                         (*(FGameplayDebuggerAddonBase **)
                           ((this->Extensions).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                          param_2);
      if ((pFVar4->Mode == Local) || (this->bHasAuthority != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&pFVar4->Delegate);
      }
      else {
        local_res20 = param_1;
        local_res24 = param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this,
                            NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_res20);
      }
    }
  }
  return;
}

// ServerResetViewPoint @ 146d5b380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerResetViewPoint(AGameplayDebuggerCategoryReplicator *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint)
  ;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146d5b3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ServerResetViewPoint_Implementation @ 146d5b3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerResetViewPoint_Implementation
          (AGameplayDebuggerCategoryReplicator *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  if ((this->ViewLocation).bIsSet != false) {
    (this->ViewLocation).bIsSet = false;
  }
  if ((this->ViewDirection).bIsSet != false) {
    (this->ViewDirection).bIsSet = false;
  }
  if (this->bHasAuthority == 0) {
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,
                        NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint);
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146d5b416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// ServerResetViewPoint_Validate @ 146d5b430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerResetViewPoint_Validate
          (AGameplayDebuggerCategoryReplicator *this)

{
  return true;
}

// ServerSendCategoryInputEvent @ 146d5b440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  UFunction *pUVar1;
  int local_res8;
  int local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// ServerSendCategoryInputEvent_Implementation @ 146d5b490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent_Implementation
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  UFunction *pUVar5;
  int iStackX_20;
  int iStackX_24;
  
  if (((-1 < param_2) && (-1 < param_1)) && (param_1 < (this->Categories).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Categories).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_2 < *(int *)(*(longlong *)
                             ((this->Categories).AllocatorInstance.Data + (longlong)param_1 * 0x10)
                           + 0x20)) &&
       ((this->bIsLocal == 0 || (bVar2 = IsCategoryEnabled(this,param_1), bVar2)))) {
      uVar3 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FGameplayDebuggerAddonBase::GetInputHandler
                         (*(FGameplayDebuggerAddonBase **)
                           ((this->Categories).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                          param_2);
      if ((pFVar4->Mode == Local) || (this->bHasAuthority != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&pFVar4->Delegate);
      }
      else {
        iStackX_20 = param_1;
        iStackX_24 = param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this,
                            NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&iStackX_20);
      }
    }
  }
  return;
}

// ServerSendCategoryInputEvent_Validate @ 146d5b4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent_Validate
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  return true;
}

// ServerSendExtensionInputEvent @ 146d5b4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  UFunction *pUVar1;
  int local_res8;
  int local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// ServerSendExtensionInputEvent_Implementation @ 146d5b500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent_Implementation
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  UFunction *pUVar5;
  int iStackX_20;
  int iStackX_24;
  
  if (((-1 < param_2) && (-1 < param_1)) && (param_1 < (this->Extensions).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Extensions).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_2 < *(int *)(*(longlong *)
                            ((this->Extensions).AllocatorInstance.Data + (longlong)param_1 * 0x10) +
                          0x20)) {
      uVar3 = 0;
      if (param_1 < (this->Extensions).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FGameplayDebuggerAddonBase::GetInputHandler
                         (*(FGameplayDebuggerAddonBase **)
                           ((this->Extensions).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                          param_2);
      if ((pFVar4->Mode == Local) || (this->bHasAuthority != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&pFVar4->Delegate);
      }
      else {
        iStackX_20 = param_1;
        iStackX_24 = param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this,
                            NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&iStackX_20);
      }
    }
  }
  return;
}

// ServerSendExtensionInputEvent_Validate @ 146d5b510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent_Validate
          (AGameplayDebuggerCategoryReplicator *this,int param_1,int param_2)

{
  return true;
}

// ServerSetCategoryEnabled @ 146d5b520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled
          (AGameplayDebuggerCategoryReplicator *this,int param_1,bool param_2)

{
  UFunction *pUVar1;
  int local_res8;
  undefined1 local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// ServerSetCategoryEnabled_Implementation @ 146d5b570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled_Implementation
          (AGameplayDebuggerCategoryReplicator *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UFunction *pUVar4;
  longlong lVar5;
  int iStackX_8;
  undefined1 uStackX_c;
  FName FStackX_20;
  FName FStack_48;
  FString FStack_40;
  FString FStack_30;
  
  lVar5 = (longlong)param_1;
  if (this->bHasAuthority == 0) {
    iStackX_8 = param_1;
    uStackX_c = param_2;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,
                        NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&iStackX_8);
  }
  else if ((-1 < param_1) && (param_1 < (this->Categories).ArrayNum)) {
    if (FVisualLogger::bIsRecording != 0) {
      uVar3 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStackX_20 = *(FName *)(*(longlong *)
                               ((this->Categories).AllocatorInstance.Data + lVar5 * 0x10) + 0x48);
      ::FName::ToString(&FStackX_20,&FStack_40);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,
                 L"SetCategoryEnabled[%d]:%d (%s)");
      if (FStack_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_40.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogGameplayDebugReplication._0_1_) {
      uVar3 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStack_48 = *(FName *)(*(longlong *)((this->Categories).AllocatorInstance.Data + lVar5 * 0x10)
                            + 0x48);
      ::FName::ToString(&FStack_48,&FStack_30);
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
      if (FStack_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = 0;
    if (param_1 < (this->Categories).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar5 = *(longlong *)((this->Categories).AllocatorInstance.Data + lVar5 * 0x10);
    *(uint *)(lVar5 + 0x34) = (uint)param_2 << 7 | *(uint *)(lVar5 + 0x34) & 0xffffff7f;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
    return;
  }
  AActor::MarkComponentsRenderStateDirty((AActor *)this);
  return;
}

// ServerSetCategoryEnabled_Validate @ 146d5b580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled_Validate
          (AGameplayDebuggerCategoryReplicator *this,int param_1,bool param_2)

{
  return true;
}

// ServerSetDebugActor @ 146d5b590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetDebugActor
          (AGameplayDebuggerCategoryReplicator *this,AActor *param_1,bool param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  undefined1 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ServerSetDebugActor_Implementation @ 146d5b5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetDebugActor_Implementation
          (AGameplayDebuggerCategoryReplicator *this,AActor *param_1,bool param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  UFunction *pUVar5;
  FName FStackX_8;
  undefined1 auStack_18 [16];
  
  if (FVisualLogger::bIsRecording != 0) {
    if (param_1 == (AActor *)0x0) {
      ::FString::FString((FString *)auStack_18,L"None");
    }
    else {
      FStackX_8 = (FName)param_1->_padding_;
      ::FName::ToString(&FStackX_8,(FString *)auStack_18);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,
               L"SetDebugActor %s");
    if ((FScriptContainerElement *)auStack_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_18._0_8_);
    }
  }
  if (4 < (byte)LogGameplayDebugReplication._0_1_) {
    if (param_1 == (AActor *)0x0) {
      ::FString::FString((FString *)auStack_18,L"None");
    }
    else {
      FStackX_8 = (FName)param_1->_padding_;
      ::FName::ToString(&FStackX_8,(FString *)auStack_18);
    }
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
    if ((FScriptContainerElement *)auStack_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_18._0_8_);
    }
  }
  if (this->bHasAuthority == 0) {
    auStack_18[8] = param_2;
    auStack_18._0_8_ = param_1;
    pUVar5 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor
                       );
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,auStack_18);
  }
  else {
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                      (&(this->DebugActor).Actor,param_1);
    if (!bVar4) {
      FStackX_8 = (FName)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (AActor *)0x0)) {
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->DebugActor,(FObjectPtr)&FStackX_8);
        if (param_1 == (AActor *)0x0) {
          psVar1 = &(this->DebugActor).SyncCounter;
          *psVar1 = *psVar1 + 1;
          (this->DebugActor).ActorName.ComparisonIndex = 0;
          (this->DebugActor).ActorName.Number = 0;
        }
        else {
          uVar2 = *(undefined4 *)&param_1->_padding_;
          uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
          psVar1 = &(this->DebugActor).SyncCounter;
          *psVar1 = *psVar1 + 1;
          (this->DebugActor).ActorName.ComparisonIndex = (FNameEntryId)uVar2;
          (this->DebugActor).ActorName.Number = uVar3;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)param_1);
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->DebugActor,(FObjectPtr)&FStackX_8);
        uVar2 = *(undefined4 *)&param_1->_padding_;
        uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
        psVar1 = &(this->DebugActor).SyncCounter;
        *psVar1 = *psVar1 + 1;
        (this->DebugActor).ActorName.ComparisonIndex = (FNameEntryId)uVar2;
        (this->DebugActor).ActorName.Number = uVar3;
      }
    }
  }
  return;
}

// ServerSetDebugActor_Validate @ 146d5b5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetDebugActor_Validate
          (AGameplayDebuggerCategoryReplicator *this,AActor *param_1,bool param_2)

{
  return true;
}

// ServerSetEnabled @ 146d5b600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetEnabled
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ServerSetEnabled_Implementation @ 146d5b640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetEnabled_Implementation
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 auStackX_10 [8];
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,L"SetEnabled %s")
    ;
  }
  if (4 < (byte)LogGameplayDebugReplication._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
  }
  if (ZPULL(*(undefined4 *)&this->field_0x378,1,1) == 0) {
    auStackX_10[0] = param_1;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,auStackX_10);
  }
  else {
    this->bIsEnabled = param_1;
    *(uint *)&this->field_0x378 = *(undefined4 *)&this->field_0x378 & 0xfffffffe | (uint)param_1;
    (**(code **)(this->_padding_ + 0x4a8))(this,param_1);
  }
  AActor::MarkComponentsRenderStateDirty((AActor *)this);
  NotifyCategoriesToolState(this,param_1);
  NotifyExtensionsToolState(this,param_1);
  return;
}

// ServerSetEnabled_Validate @ 146d5b650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetEnabled_Validate
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  return true;
}

// ServerSetViewPoint @ 146d5b660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetViewPoint
          (AGameplayDebuggerCategoryReplicator *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  UFunction *pUVar1;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  local_28 = (param_1->field0_0x0)._s_0.Z;
  local_20 = (param_2->field0_0x0)._s_0.X;
  dStack_18 = (param_2->field0_0x0)._s_0.Y;
  local_10 = (param_2->field0_0x0)._s_0.Z;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_38);
  return;
}

// ServerSetViewPoint_Implementation @ 146d5b6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetViewPoint_Implementation
          (AGameplayDebuggerCategoryReplicator *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  UFunction *pUVar2;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
  if ((TOptional<UE::Math::TVector<double>_> *)param_1 != &this->ViewLocation) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->ViewLocation).TypedValue.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->ViewLocation).TypedValue.field0_0x0._s_0.Y = dVar1;
    (this->ViewLocation).TypedValue.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    (this->ViewLocation).bIsSet = true;
  }
  if ((TOptional<UE::Math::TVector<double>_> *)param_2 != &this->ViewDirection) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->ViewDirection).TypedValue.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->ViewDirection).TypedValue.field0_0x0._s_0.Y = dVar1;
    (this->ViewDirection).TypedValue.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    (this->ViewDirection).bIsSet = true;
  }
  if (this->bHasAuthority == 0) {
    dStack_38 = (param_1->field0_0x0)._s_0.X;
    dStack_30 = (param_1->field0_0x0)._s_0.Y;
    dStack_28 = (param_1->field0_0x0)._s_0.Z;
    dStack_20 = (param_2->field0_0x0)._s_0.X;
    dStack_18 = (param_2->field0_0x0)._s_0.Y;
    dStack_10 = (param_2->field0_0x0)._s_0.Z;
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint)
    ;
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&dStack_38);
  }
  return;
}

// ServerSetViewPoint_Validate @ 146d5b6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameplayDebuggerCategoryReplicator::ServerSetViewPoint_Validate
          (AGameplayDebuggerCategoryReplicator *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  return true;
}

// SetCategoryEnabled @ 146d5b6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SetCategoryEnabled
          (AGameplayDebuggerCategoryReplicator *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UFunction *pUVar4;
  longlong lVar5;
  int local_res8;
  undefined1 local_resc;
  FName local_res20;
  FName local_48;
  FString local_40;
  FString local_30;
  
  lVar5 = (longlong)param_1;
  if (this->bHasAuthority == 0) {
    local_res8 = param_1;
    local_resc = param_2;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,
                        NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_res8);
  }
  else if ((-1 < param_1) && (param_1 < (this->Categories).ArrayNum)) {
    if (FVisualLogger::bIsRecording != 0) {
      uVar3 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res20 = *(FName *)(*(longlong *)
                                ((this->Categories).AllocatorInstance.Data + lVar5 * 0x10) + 0x48);
      ::FName::ToString(&local_res20,&local_40);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,
                 L"SetCategoryEnabled[%d]:%d (%s)");
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogGameplayDebugReplication._0_1_) {
      uVar3 = 0;
      if (param_1 < (this->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_48 = *(FName *)(*(longlong *)((this->Categories).AllocatorInstance.Data + lVar5 * 0x10)
                           + 0x48);
      ::FName::ToString(&local_48,&local_30);
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = 0;
    if (param_1 < (this->Categories).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar5 = *(longlong *)((this->Categories).AllocatorInstance.Data + lVar5 * 0x10);
    *(uint *)(lVar5 + 0x34) = (uint)param_2 << 7 | *(uint *)(lVar5 + 0x34) & 0xffffff7f;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
    return;
  }
  AActor::MarkComponentsRenderStateDirty((AActor *)this);
  return;
}

// SetDebugActor @ 146d5b990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SetDebugActor
          (AGameplayDebuggerCategoryReplicator *this,AActor *param_1,bool param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  UFunction *pUVar5;
  FName local_res8;
  undefined1 local_18 [16];
  
  if (FVisualLogger::bIsRecording != 0) {
    if (param_1 == (AActor *)0x0) {
      ::FString::FString((FString *)local_18,L"None");
    }
    else {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,(FString *)local_18);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,
               L"SetDebugActor %s");
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
  }
  if (4 < (byte)LogGameplayDebugReplication._0_1_) {
    if (param_1 == (AActor *)0x0) {
      ::FString::FString((FString *)local_18,L"None");
    }
    else {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,(FString *)local_18);
    }
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
  }
  if (this->bHasAuthority == 0) {
    local_18[8] = param_2;
    local_18._0_8_ = param_1;
    pUVar5 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor
                       );
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,local_18);
  }
  else {
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                      (&(this->DebugActor).Actor,param_1);
    if (!bVar4) {
      local_res8 = (FName)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (AActor *)0x0)) {
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->DebugActor,(FObjectPtr)&local_res8);
        if (param_1 == (AActor *)0x0) {
          psVar1 = &(this->DebugActor).SyncCounter;
          *psVar1 = *psVar1 + 1;
          (this->DebugActor).ActorName.ComparisonIndex = 0;
          (this->DebugActor).ActorName.Number = 0;
        }
        else {
          uVar2 = *(undefined4 *)&param_1->_padding_;
          uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
          psVar1 = &(this->DebugActor).SyncCounter;
          *psVar1 = *psVar1 + 1;
          (this->DebugActor).ActorName.ComparisonIndex = (FNameEntryId)uVar2;
          (this->DebugActor).ActorName.Number = uVar3;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)param_1);
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->DebugActor,(FObjectPtr)&local_res8);
        uVar2 = *(undefined4 *)&param_1->_padding_;
        uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
        psVar1 = &(this->DebugActor).SyncCounter;
        *psVar1 = *psVar1 + 1;
        (this->DebugActor).ActorName.ComparisonIndex = (FNameEntryId)uVar2;
        (this->DebugActor).ActorName.Number = uVar3;
      }
    }
  }
  return;
}

// SetEnabled @ 146d5bbd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SetEnabled
          (AGameplayDebuggerCategoryReplicator *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [8];
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,L"SetEnabled %s")
    ;
  }
  if (4 < (byte)LogGameplayDebugReplication._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
  }
  if (ZPULL(*(undefined4 *)&this->field_0x378,1,1) == 0) {
    local_res10[0] = param_1;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  }
  else {
    this->bIsEnabled = param_1;
    *(uint *)&this->field_0x378 = *(undefined4 *)&this->field_0x378 & 0xfffffffe | (uint)param_1;
    (**(code **)(this->_padding_ + 0x4a8))(this,param_1);
  }
  AActor::MarkComponentsRenderStateDirty((AActor *)this);
  NotifyCategoriesToolState(this,param_1);
  NotifyExtensionsToolState(this,param_1);
  return;
}

// SetReplicatorOwner @ 146d5c0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SetReplicatorOwner
          (AGameplayDebuggerCategoryReplicator *this,APlayerController *param_1)

{
  longlong *plVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TObjectPtr<APlayerController>_u_0 TVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  ENetMode EVar10;
  uint uVar11;
  UWorld *this_00;
  uint uVar12;
  longlong lVar13;
  TObjectPtr<APlayerController>_u_0 local_res8;
  APlayerController *local_res10;
  FName local_res18;
  FName local_res20;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  FDestructionSentinel local_80;
  void *local_68 [2];
  void *local_58 [3];
  
  bVar5 = false;
  bVar4 = false;
  local_res8.DebugPtr = local_res8.DebugPtr & 0xffffffff00000000;
  if (this->bIsEnabled != false) {
    return;
  }
  local_res10 = param_1;
  this_00 = AActor::GetWorld((AActor *)this);
  if (((this_00 != (UWorld *)0x0) &&
      (EVar10 = UWorld::InternalGetNetMode(this_00), EVar10 == NM_Client)) &&
     (bVar7 = UWorld::IsPlayingReplay(this_00), !bVar7)) {
    return;
  }
  local_res8 = (TObjectPtr<APlayerController>_u_0)(this->OwnerPC).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwnerPC).field0_0x0.DebugPtr = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NotifyDebuggerOwnerChange,
             (FWriteAccessScope *)&local_80);
  TVar6 = local_res8;
  bVar7 = false;
  NotifyDebuggerOwnerChange._28_4_ = NotifyDebuggerOwnerChange._28_4_ + 1;
  uVar12 = NotifyDebuggerOwnerChange._16_4_ - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar7 = false;
    do {
      uVar11 = 0;
      if ((int)uVar12 < (int)NotifyDebuggerOwnerChange._16_4_) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(NotifyDebuggerOwnerChange._8_8_ + 8 + lVar13) == 0) ||
          (plVar1 = *(longlong **)(NotifyDebuggerOwnerChange._8_8_ + lVar13),
          plVar1 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar1 + 0x68))(plVar1,this,TVar6.DebugPtr), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
      param_1 = local_res10;
    } while (-1 < (int)uVar12);
  }
  NotifyDebuggerOwnerChange._28_4_ = NotifyDebuggerOwnerChange._28_4_ + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&NotifyDebuggerOwnerChange,
               false);
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (FVisualLogger::bIsRecording != 0) {
    if (param_1 == (APlayerController *)0x0) {
      ::FString::FString(&local_c8,L"None");
    }
    else {
      (**(code **)(param_1->_padding_ + 0x6f0))(param_1,local_68);
      bVar5 = true;
      bVar4 = true;
      pUVar2 = (UObject *)param_1->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 != (UObject *)0x0) goto LAB_146d5c299;
LAB_146d5c2d6:
        ::FString::FString(&local_b8,L"None");
      }
      else {
        if (pUVar2 == (UObject *)0x0) goto LAB_146d5c2d6;
        UE::GC::MarkAsReachable(pUVar2);
LAB_146d5c299:
        local_res8 = *(TObjectPtr<APlayerController>_u_0 *)&pUVar2->field_0x18;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_b8);
      }
      local_res18 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res18,&local_c8);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayDebugReplication.field_0x4,Log,
               L"Set OWNER PC %s / %s / %s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_68[0] != (void *)0x0)) {
      FMemory::Free(local_68[0]);
    }
  }
  bVar5 = false;
  bVar4 = false;
  if ((byte)LogGameplayDebugReplication._0_1_ < 5) {
    return;
  }
  if (param_1 == (APlayerController *)0x0) {
    ::FString::FString(&local_a8,L"None");
    goto LAB_146d5c42d;
  }
  (**(code **)(param_1->_padding_ + 0x6f0))(param_1,local_58);
  pUVar2 = (UObject *)param_1->_padding_;
  bVar5 = true;
  bVar4 = true;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 != (UObject *)0x0) goto LAB_146d5c3c8;
LAB_146d5c405:
    ::FString::FString(&local_98,L"None");
  }
  else {
    if (pUVar2 == (UObject *)0x0) goto LAB_146d5c405;
    UE::GC::MarkAsReachable(pUVar2);
LAB_146d5c3c8:
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_res20.Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(&local_res20,&local_98);
  }
  local_88 = (FName)param_1->_padding_;
  ::FName::ToString(&local_88,&local_a8);
LAB_146d5c42d:
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_58[0] != (void *)0x0)) {
    FMemory::Free(local_58[0]);
  }
  return;
}

// SetViewPoint @ 146d5c4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::SetViewPoint
          (AGameplayDebuggerCategoryReplicator *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  UFunction *pUVar2;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  if ((TOptional<UE::Math::TVector<double>_> *)param_1 != &this->ViewLocation) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->ViewLocation).TypedValue.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->ViewLocation).TypedValue.field0_0x0._s_0.Y = dVar1;
    (this->ViewLocation).TypedValue.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    (this->ViewLocation).bIsSet = true;
  }
  if ((TOptional<UE::Math::TVector<double>_> *)param_2 != &this->ViewDirection) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->ViewDirection).TypedValue.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->ViewDirection).TypedValue.field0_0x0._s_0.Y = dVar1;
    (this->ViewDirection).TypedValue.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    (this->ViewDirection).bIsSet = true;
  }
  if (this->bHasAuthority == 0) {
    local_38 = (param_1->field0_0x0)._s_0.X;
    dStack_30 = (param_1->field0_0x0)._s_0.Y;
    local_28 = (param_1->field0_0x0)._s_0.Z;
    local_20 = (param_2->field0_0x0)._s_0.X;
    dStack_18 = (param_2->field0_0x0)._s_0.Y;
    local_10 = (param_2->field0_0x0)._s_0.Z;
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint)
    ;
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_38);
  }
  return;
}

// StaticRegisterNativesAGameplayDebuggerCategoryReplicator @ 146d5c570

void __cdecl
AGameplayDebuggerCategoryReplicator::StaticRegisterNativesAGameplayDebuggerCategoryReplicator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickActor @ 146d5c620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::TickActor
          (AGameplayDebuggerCategoryReplicator *this,float param_1,ELevelTick param_2,
          FActorTickFunction *param_3)

{
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  if (((this->OwnerPC).field0_0x0.DebugPtr == (APlayerController *)0x0) &&
     (this->bIsEditorWorldReplicator == 0)) {
    return;
  }
  CollectCategoryData(this,false);
  return;
}

// ValidateGeneratedRepEnums @ 146d5f550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameplayDebuggerCategoryReplicator::ValidateGeneratedRepEnums
          (AGameplayDebuggerCategoryReplicator *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_OwnerPC,L"OwnerPC");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_bIsEnabled,L"bIsEnabled");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_ReplicatedData,L"ReplicatedData");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_DebugActor,L"DebugActor");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_VisLogSync,L"VisLogSync");
    _Init_thread_footer(&::_TSS4);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_OwnerPC == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_bIsEnabled == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_ReplicatedData == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_DebugActor == FVar4) {
          if ((param_1->ArrayNum < 0xf) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          if (bVar3) {
            FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_VisLogSync == FVar6) {
            return;
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\GameplayDebugger\\UHT\\GameplayDebuggerCategoryReplicator.gen.cpp"
                     ,0x4af,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayDebuggerCategoryReplicator"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execClientDataPackPacket @ 146d5fad0

void __cdecl
AGameplayDebuggerCategoryReplicator::execClientDataPackPacket
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  uint local_20;
  void *local_18;
  undefined8 local_10;
  
  local_20 = local_20 & 0xfffffffe;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,&local_38);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execOnRep_ReplicatedData @ 146d5fb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AGameplayDebuggerCategoryReplicator::execOnRep_ReplicatedData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UReplicationSystem *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UE::Net::FReplicationSystemUtil::GetReplicationSystem((AActor *)param_1);
  if (pUVar1 != (UReplicationSystem *)0x0) {
    FGameplayDebuggerNetPack::ApplyToOwner((FGameplayDebuggerNetPack *)(param_1 + 0x12));
    return;
  }
  return;
}

// execServerResetViewPoint @ 146d5fbe0

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerResetViewPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x798))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerResetViewPoint_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146d5fc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7a0))(param_1);
  return;
}

// execServerSendCategoryInputEvent @ 146d5fc40

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x778))(param_1,local_res10[0],local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSendCategoryInputEvent_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x780))(param_1,local_res10[0],local_res8[0]);
  return;
}

// execServerSendExtensionInputEvent @ 146d5fd50

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x768))(param_1,local_res10[0],local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSendExtensionInputEvent_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x770))(param_1,local_res10[0],local_res8[0]);
  return;
}

// execServerSetCategoryEnabled @ 146d5fe60

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x788))(param_1,local_res8[0],bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSetCategoryEnabled_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x790))(param_1,local_res8[0],bVar3);
  return;
}

// execServerSetDebugActor @ 146d5ff70

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerSetDebugActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,local_res10,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSetDebugActor_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x7c0))(param_1,local_res10,bVar3);
  return;
}

// execServerSetEnabled @ 146d60080

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerSetEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x7c8))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSetEnabled_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 2000))(param_1,bVar3);
  }
  return;
}

// execServerSetViewPoint @ 146d60150

void __cdecl
AGameplayDebuggerCategoryReplicator::execServerSetViewPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x7a8))(param_1,local_20,local_38);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerSetViewPoint_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x7b0))(param_1,local_20,local_38);
  return;
}

