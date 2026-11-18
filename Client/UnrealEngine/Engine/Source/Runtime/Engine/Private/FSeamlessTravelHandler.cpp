// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// operator() @ 1489bf9c0

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
`FSeamlessTravelHandler::Tick'::__l69::<lambda_1>::operator()(void *this,AActor *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FBoolAnnotation FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ULevel *pUVar12;
  undefined7 extraout_var;
  UClass *pUVar13;
  ULevel *pUVar14;
  UPackage *pUVar15;
  bool bVar16;
  AActor *local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  lVar3 = *(longlong *)(*(longlong *)this + 0x70);
  local_res10 = param_1;
  pUVar12 = AActor::GetLevel(param_1);
  pUVar14 = *(ULevel **)(lVar3 + 0x30);
  if (pUVar14 == (ULevel *)0x0) {
    bVar16 = pUVar12 == (ULevel *)0x0;
  }
  else {
    bVar16 = pUVar14 == pUVar12;
  }
  FVar8 = FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
                    (*(FUObjectAnnotationSparse<FBoolAnnotation,1> **)((longlong)this + 8),
                     (UObjectBase *)&stack0x00000008);
  cVar2 = *(char *)CONCAT71(extraout_var,FVar8.Mark);
  if ((local_res10->bReplicates == '\0') || ((local_res10->NetDormancy).Value < 2)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (((2 < (local_res10->Role).Value) || (bVar9)) ||
     (bVar9 = AActor::IsNetStartupActor(local_res10), bVar9)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  pUVar13 = Z_Construct_UClass_ALevelScriptActor_NoRegister();
  iVar11 = (int)pUVar13->_padding_;
  if ((*(int *)(local_res10->_padding_ + 0x38) < iVar11) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(local_res10->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
      &pUVar13->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar16) || (bVar7)) {
    if ((cVar2 != '\0') && (2 < (byte)LogWorld._0_1_)) {
      pUVar14 = AActor::GetLevel(local_res10);
      pUVar15 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar14);
      local_res18 = (TObjectPtr<UClass>_u_0)pUVar15->_padding_;
      ::FName::ToString((FName *)&local_res18.ObjectPtr,&local_38);
      local_res20 = (FName)local_res10->_padding_;
      ::FName::ToString(&local_res20,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((cVar2 != '\0') || (bVar9)) {
    if (*(UNetDriver **)((longlong)this + 0x18) != (UNetDriver *)0x0) {
      UNetDriver::NotifyActorIsTraveling(*(UNetDriver **)((longlong)this + 0x18),local_res10);
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
    if (((pFVar4->Data <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    iVar11 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar11 + 1;
    *(AActor **)(pFVar4->Data + (longlong)iVar11 * 8) = local_res10;
    return true;
  }
  AActor::RouteEndPlay(local_res10,LevelTransition);
  FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAnnotation
            (*(FUObjectAnnotationSparse<FBoolAnnotation,1> **)((longlong)this + 8),
             (UObjectBase *)local_res10);
  plVar5 = *(longlong **)((longlong)this + 0x18);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x3d8))(plVar5,local_res10);
  }
  return false;
}

// operator() @ 1489c0120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FSeamlessTravelHandler::Tick'::__l184::<lambda_3>::operator()(void *this,UObject *param_1)

{
  undefined1 auStack_1b8 [32];
  UObject *local_198 [2];
  undefined1 local_188 [144];
  UObject *local_f8;
  UObject *local_f0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> local_e0;
  ForAnyElementType local_90;
  TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FArchiveReplaceObjectRef<UObject>::FArchiveReplaceObjectRef<UObject>
            ((FArchiveReplaceObjectRef<UObject> *)local_188,param_1,this,DelayStart|IgnoreOuterRef);
  local_188._0_8_ = &___7__FArchiveReplaceOrClearGarbageReferences_VUObject____6B_;
  TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&local_80);
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
            ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)(local_188 + 0xa8)
             ,local_198,(bool *)(local_188 + 0x90));
  local_f0 = local_f8;
  FArchiveReplaceObjectRefBase::SerializeObject((FArchiveReplaceObjectRefBase *)local_188,local_f8);
  local_80.HashSize = 0;
  if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Elements);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_e0.HashSize = 0;
  if (local_e0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_188 + 0xa8));
  FArchive::~FArchive((FArchive *)local_188);
  return;
}

// CancelTravel @ 1489cee00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FSeamlessTravelHandler::CancelTravel(FSeamlessTravelHandler *this)

{
  FName FVar1;
  UNetDriver *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FUObjectItem *this_00;
  UPackage *pUVar6;
  longlong lVar7;
  uint uVar8;
  UNetConnection *this_01;
  longlong lVar9;
  
  this->LoadedPackage = (UObject *)0x0;
  if (this->LoadedWorld != (UWorld *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->LoadedWorld->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this->LoadedWorld,RF_Standalone);
    this->LoadedWorld = (UWorld *)0x0;
  }
  if (this->bTransitionInProgress != false) {
    if ((this->CurrentWorld != (UWorld *)0x0) &&
       (pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->CurrentWorld),
       pUVar6 != (UPackage *)0x0)) {
      FVar1 = (FName)pUVar6->_padding_;
      pUVar2 = (this->CurrentWorld->NetDriver).field0_0x0.DebugPtr;
      if ((pUVar2 != (UNetDriver *)0x0) && (uVar8 = 0, 0 < (pUVar2->ClientConnections).ArrayNum)) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (pUVar2->ClientConnections).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_01 = *(UNetConnection **)((pUVar2->ClientConnections).AllocatorInstance.Data + lVar9)
          ;
          if (this_01 != (UNetConnection *)0x0) {
            lVar7 = (**(code **)(this_01->_padding_ + 0x2c8))(this_01);
            if (lVar7 != 0) {
              this_01 = *(UNetConnection **)(lVar7 + 0x1f80);
            }
            UNetConnection::SetClientWorldPackageName(this_01,FVar1);
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar8 < (pUVar2->ClientConnections).ArrayNum);
      }
    }
    this->CurrentWorld = (UWorld *)0x0;
    this->bTransitionInProgress = false;
    if (4 < (byte)LogWorld._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
      return;
    }
  }
  return;
}

// CopyWorldData @ 1489d3080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSeamlessTravelHandler::CopyWorldData(FSeamlessTravelHandler *this)

{
  int iVar1;
  UWorld *pUVar2;
  UWorld *pUVar3;
  longlong *plVar4;
  UNetDriver *pUVar5;
  UGameInstance *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FDestructionSentinel local_68;
  
  pUVar2 = this->LoadedWorld;
  pUVar3 = this->CurrentWorld;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FWorldDelegates::OnCopyWorldData,(FWriteAccessScope *)&local_68);
  bVar8 = false;
  FWorldDelegates::OnCopyWorldData._28_4_ = FWorldDelegates::OnCopyWorldData._28_4_ + 1;
  uVar12 = FWorldDelegates::OnCopyWorldData._16_4_ - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar12 < (int)FWorldDelegates::OnCopyWorldData._16_4_) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((*(int *)(lVar14 + 8 + FWorldDelegates::OnCopyWorldData._8_8_) == 0) ||
          (plVar4 = *(longlong **)(lVar14 + FWorldDelegates::OnCopyWorldData._8_8_),
          plVar4 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,pUVar3,pUVar2), cVar10 == '\0')) {
        bVar8 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  FWorldDelegates::OnCopyWorldData._28_4_ = FWorldDelegates::OnCopyWorldData._28_4_ + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnCopyWorldData,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pUVar2 = this->CurrentWorld;
  iVar1 = (pUVar2->LevelCollections).ArrayNum;
  pFVar13 = (pUVar2->LevelCollections).AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((pUVar2->LevelCollections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLevelCollection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar15) break;
    if (*pFVar13 == (FScriptContainerElement)0x0) goto LAB_1489d31d8;
    pFVar13 = pFVar13 + 0x78;
  }
  pFVar13 = (FScriptContainerElement *)0x0;
LAB_1489d31d8:
  pUVar2 = this->CurrentWorld;
  iVar1 = (pUVar2->LevelCollections).ArrayNum;
  pFVar15 = (pUVar2->LevelCollections).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((pUVar2->LevelCollections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLevelCollection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar15 == pFVar16) break;
    if (*pFVar15 == (FScriptContainerElement)0x2) goto LAB_1489d3219;
    pFVar15 = pFVar15 + 0x78;
  }
  pFVar15 = (FScriptContainerElement *)0x0;
LAB_1489d3219:
  pUVar2 = this->LoadedWorld;
  iVar1 = (pUVar2->LevelCollections).ArrayNum;
  pFVar16 = (pUVar2->LevelCollections).AllocatorInstance.Data;
  pFVar18 = pFVar16 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((pUVar2->LevelCollections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLevelCollection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar16 == pFVar18) break;
    if (*pFVar16 == (FScriptContainerElement)0x0) goto LAB_1489d325a;
    pFVar16 = pFVar16 + 0x78;
  }
  pFVar16 = (FScriptContainerElement *)0x0;
LAB_1489d325a:
  pUVar2 = this->LoadedWorld;
  iVar1 = (pUVar2->LevelCollections).ArrayNum;
  pFVar18 = (pUVar2->LevelCollections).AllocatorInstance.Data;
  pFVar17 = pFVar18 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((pUVar2->LevelCollections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLevelCollection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar18 == pFVar17) break;
    if (*pFVar18 == (FScriptContainerElement)0x2) goto LAB_1489d32a1;
    pFVar18 = pFVar18 + 0x78;
  }
  pFVar18 = (FScriptContainerElement *)0x0;
LAB_1489d32a1:
  pUVar5 = (this->CurrentWorld->NetDriver).field0_0x0.DebugPtr;
  (this->LoadedWorld->NetDriver).field0_0x0.DebugPtr = pUVar5;
  if ((pFVar13 != (FScriptContainerElement *)0x0) && (pFVar16 != (FScriptContainerElement *)0x0)) {
    *(UNetDriver **)(pFVar16 + 0x10) = pUVar5;
    *(undefined8 *)(pFVar13 + 0x10) = 0;
  }
  if ((pFVar15 != (FScriptContainerElement *)0x0) && (pFVar18 != (FScriptContainerElement *)0x0)) {
    *(UNetDriver **)(pFVar18 + 0x10) = pUVar5;
    *(undefined8 *)(pFVar15 + 0x10) = 0;
  }
  if (pUVar5 != (UNetDriver *)0x0) {
    (this->CurrentWorld->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
    (**(code **)(pUVar5->_padding_ + 0x410))(pUVar5,this->LoadedWorld);
  }
  (this->LoadedWorld->WorldType).Value = (this->CurrentWorld->WorldType).Value;
  pUVar2 = this->LoadedWorld;
  pUVar6 = (this->CurrentWorld->OwningGameInstance).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar2->OwningGameInstance).field0_0x0.DebugPtr = pUVar6;
  this->LoadedWorld->TimeSeconds = this->CurrentWorld->TimeSeconds;
  this->LoadedWorld->UnpausedTimeSeconds = this->CurrentWorld->UnpausedTimeSeconds;
  this->LoadedWorld->RealTimeSeconds = this->CurrentWorld->RealTimeSeconds;
  this->LoadedWorld->AudioTimeSeconds = this->CurrentWorld->AudioTimeSeconds;
  if (pUVar5 != (UNetDriver *)0x0) {
    this->LoadedWorld->NextSwitchCountdown = pUVar5->ServerTravelPause;
  }
  return;
}

// GetDestinationMapName @ 1489e7fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FSeamlessTravelHandler::GetDestinationMapName
          (FSeamlessTravelHandler *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_28;
  FString local_18;
  
  if (this->bTransitionInProgress == false) {
    pFVar1 = ::FString::FString(&local_18,L"");
    ::FString::FString(__return_storage_ptr__,pFVar1);
  }
  else {
    _Src = (this->PendingTravelURL).Map.Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->PendingTravelURL).Map.Data.ArrayNum;
    lVar2 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SeamlessTravelLoadCallback @ 148a10580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FSeamlessTravelHandler::SeamlessTravelLoadCallback
          (FSeamlessTravelHandler *this,FName *param_1,UPackage *param_2,Type param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  ULevel *this_00;
  longlong *plVar4;
  FName FVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UClass *pUVar11;
  Type *pTVar12;
  UPackage *pUVar13;
  FUObjectItem *this_01;
  FString *pFVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar16;
  wchar_t *pwVar17;
  ForAnyElementType FVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  UWorld *this_02;
  wchar_t *pwVar21;
  uint local_res8;
  uint uStackX_c;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  UWorld *local_98;
  FName local_90;
  FName local_88;
  UWorld **local_80;
  FString local_78;
  code *local_68;
  UWorld ***local_60;
  FName local_58;
  FName local_50;
  FString local_48;
  FString local_38;
  
  pwVar21 = L"";
  if ((this->PendingTravelURL).Map.Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(this->PendingTravelURL).Map.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_90,pwVar17);
  local_88 = local_90;
  if (UWorld::WorldTypePreLoadMap._8_4_ != UWorld::WorldTypePreLoadMap._52_4_) {
    uVar10 = ::GetTypeHash(local_90.ComparisonIndex.Value);
    TSet<TTuple<FName,enum_EWorldType::Type>,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>(&UWorld::WorldTypePreLoadMap,local_90.Number + uVar10,&local_88);
  }
  iVar19 = 0;
  if (this->bTransitionInProgress == false) goto LAB_148a10844;
  local_80 = &local_98;
  local_60 = &local_80;
  local_98 = (UWorld *)0x0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorld::FindWorldInPackage'::__l2::<lambda_1>,bool,UObject_*>::Call
  ;
  ForEachObjectWithPackage
            (param_2,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_68,false,RF_NoFlags,Borrowed);
  this_02 = local_98;
  if (local_98 == (UWorld *)0x0) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    GetObjectsWithPackage(param_2,&local_a8,false,RF_NoFlags,Borrowed);
LAB_148a10680:
    this_02 = (UWorld *)0x0;
    if ((iVar19 < 0) || (local_a8.ArrayNum <= iVar19)) goto LAB_148a1071b;
    lVar3 = *(longlong *)(local_a8.AllocatorInstance.Data + (longlong)iVar19 * 8);
    if (lVar3 == 0) {
LAB_148a106f5:
      iVar19 = iVar19 + 1;
      goto LAB_148a10680;
    }
    pUVar11 = UObjectRedirector::GetPrivateStaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar11->_padding_)) ||
       (this_02 = *(UWorld **)(lVar3 + 0x28), this_02 == (UWorld *)0x0)) goto LAB_148a106f5;
    pUVar11 = UWorld::StaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) goto LAB_148a106f5;
    pTVar12 = TMapBase<FName,enum_EWorldType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>_>
              ::Find(&UWorld::WorldTypePreLoadMap,*(FName *)(*(longlong *)(lVar3 + 0x20) + 0x18));
    if (pTVar12 != (Type *)0x0) {
      (this_02->WorldType).Value = (char)*pTVar12;
    }
LAB_148a1071b:
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (this_02 == (UWorld *)0x0) goto LAB_148a10740;
    pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_02);
    this->LoadedPackage = (UObject *)pUVar13;
    this->LoadedWorld = this_02;
  }
  else {
LAB_148a10740:
    this->LoadedPackage = (UObject *)param_2;
    this->LoadedWorld = this_02;
    if (this_02 == (UWorld *)0x0) goto LAB_148a10844;
  }
  this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this_02->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(this_01,RootSet);
  if (((this_02->WorldType).Value == '\x03') && ((this_02->StreamingLevelsPrefix).Data.ArrayNum < 2)
     ) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3591672255320432574>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x1fbe,"!World->StreamingLevelsPrefix.IsEmpty()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this_00 = (this_02->PersistentLevel).field0_0x0.DebugPtr;
  if (this_00 != (ULevel *)0x0) {
    ULevel::HandleLegacyMapBuildData(this_00);
  }
  UWorld::ConditionallyCreateDefaultLevelCollections(this_02);
  pFVar20 = (this_02->StreamingLevels).AllocatorInstance.Data;
  iVar19 = (this_02->StreamingLevels).ArrayNum;
  pFVar1 = pFVar20 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this_02->StreamingLevels).ArrayNum != iVar19) {
      `TCheckedPointerIterator<TObjectPtr<ULevelStreaming>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar20 == pFVar1) break;
    plVar4 = *(longlong **)pFVar20;
    if (((plVar4 != (longlong *)0x0) &&
        (cVar9 = (**(code **)(*plVar4 + 0x300))(plVar4), cVar9 != '\0')) &&
       (((char)plVar4[0x24] == '\x03' || (plVar4[0x36] == 0)))) {
      (**(code **)(*plVar4 + 0x310))(plVar4,this_02,1);
    }
    pFVar20 = pFVar20 + 8;
  }
LAB_148a10844:
  pFVar14 = ::FName::ToString(param_1,&local_48);
  ::FString::ConcatCF(&local_78,L"StartTravelComplete - ",pFVar14);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar18.Data = local_78.Data.AllocatorInstance.Data;
  }
  pFVar15 = ::FName::FName(&local_58,(wchar_t *)FVar18.Data);
  FVar5 = *pFVar15;
  FVar16 = StatPtr_STAT_NamedMarker;
  if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
    pFVar15 = ::FName::FName(&local_50,"STAT_NamedMarker");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar15,
                        L"NamedMarker","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true
                        ,false,ST_FName,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar16;
  local_res8 = (uint)FVar6.ComparisonIndex.Value;
  uStackX_c = FVar6.Number;
  FThreadStats::AddMessage<FName>(FVar6,SpecialMessageMarker,FVar5,false);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint8140 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint8140,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp",
                 0x1fcc,L"StartTravelComplete - %s");
      __BookmarkPoint8140 = true;
    }
    pFVar14 = ::FName::ToString(param_1,&local_38);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    uVar10 = CallstackTrace_GetCurrentId();
    FMiscTrace::OutputBookmark<wchar_t_const_*>(uVar10,&__BookmarkPoint8140,pwVar21);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetHandlerLoadedData @ 148a14c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FSeamlessTravelHandler::SetHandlerLoadedData
          (FSeamlessTravelHandler *this,UObject *param_1,UWorld *param_2)

{
  FUObjectItem *this_00;
  
  this->LoadedPackage = param_1;
  this->LoadedWorld = param_2;
  if (param_2 != (UWorld *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&param_2->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    return;
  }
  return;
}

// SetPauseAtMidpoint @ 148a16340

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
FSeamlessTravelHandler::SetPauseAtMidpoint(FSeamlessTravelHandler *this,bool param_1)

{
  UGameInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  FURL *pFVar4;
  FString *pFVar5;
  FString FStack_88;
  FURL FStack_78;
  
  if (this->bTransitionInProgress == false) {
    if (2 < (byte)LogWorld._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
      return;
    }
  }
  else if ((this->bSwitchedToDefaultMap == false) || (!param_1)) {
    this->bPauseAtMidpoint = param_1;
    if ((!param_1) && (this->bSwitchedToDefaultMap != false)) {
      if ((this->bTransitionInProgress == false) || (this->bSwitchedToDefaultMap == false)) {
        if (1 < (byte)LogWorld._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
          return;
        }
      }
      else {
        if (4 < (byte)LogWorld._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
        }
        pUVar1 = (this->CurrentWorld->OwningGameInstance).field0_0x0.DebugPtr;
        pcVar2 = *(code **)(pUVar1->_padding_ + 0x3b0);
        pFVar4 = FURL::FURL(&FStack_78,&this->PendingTravelURL);
        (*pcVar2)(pUVar1,pFVar4);
        pFVar5 = ::FString::FString(&FStack_88,&(this->PendingTravelURL).Map);
        bVar3 = StartLoadingMap(this,pFVar5);
        if ((!bVar3) && (1 < (byte)LogWorld._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
        }
      }
      return;
    }
  }
  else if (2 < (byte)LogWorld._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
    return;
  }
  return;
}

// StartLoadingDestination @ 148a171c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSeamlessTravelHandler::StartLoadingDestination(FSeamlessTravelHandler *this)

{
  UGameInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  FURL *pFVar4;
  FString *pFVar5;
  FString local_88;
  FURL local_78;
  
  if ((this->bTransitionInProgress == false) || (this->bSwitchedToDefaultMap == false)) {
    if (1 < (byte)LogWorld._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
      return;
    }
  }
  else {
    if (4 < (byte)LogWorld._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
    }
    pUVar1 = (this->CurrentWorld->OwningGameInstance).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x3b0);
    pFVar4 = FURL::FURL(&local_78,&this->PendingTravelURL);
    (*pcVar2)(pUVar1,pFVar4);
    pFVar5 = ::FString::FString(&local_88,&(this->PendingTravelURL).Map);
    bVar3 = StartLoadingMap(this,pFVar5);
    if ((!bVar3) && (1 < (byte)LogWorld._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
    }
  }
  return;
}

// StartLoadingMap @ 148a17300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSeamlessTravelHandler::StartLoadingMap(FSeamlessTravelHandler *this,FString *param_1)

{
  byte bVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  int local_res10 [2];
  FName local_res18;
  FName *local_res20;
  FPackagePath local_88;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 < 2) {
    pFVar9 = (param_1->Data).AllocatorInstance.Data;
  }
  else {
    pFVar9 = (param_1->Data).AllocatorInstance.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = iVar2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_78,iVar2,&local_6c);
    memcpy(local_78.Data,pFVar9,(longlong)iVar2 * 2);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_70 != 0) {
      FVar10.Data = local_78.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar10.Data);
    FVar3 = local_res18;
    bVar1 = (this->CurrentWorld->WorldType).Value;
    uVar5 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    uVar5 = uVar5 + FVar3.Number;
    if (UWorld::WorldTypePreLoadMap._8_4_ != UWorld::WorldTypePreLoadMap._52_4_) {
      lVar8 = 0x154c6e238;
      if (UWorld::WorldTypePreLoadMap._64_8_ != 0) {
        lVar8 = UWorld::WorldTypePreLoadMap._64_8_;
      }
      iVar2 = *(int *)(lVar8 + (ulonglong)(UWorld::WorldTypePreLoadMap._72_4_ - 1 & uVar5) * 4);
      while (iVar2 != -1) {
        lVar8 = UWorld::WorldTypePreLoadMap._0_8_ + (longlong)iVar2 * 0x14;
        if (*(FName *)(UWorld::WorldTypePreLoadMap._0_8_ + (longlong)iVar2 * 0x14) == local_res18) {
          if (lVar8 != 0) goto LAB_148a17459;
          break;
        }
        iVar2 = *(int *)(lVar8 + 0xc);
      }
    }
    local_res20 = &local_res18;
    TSet<TTuple<FName,enum_EWorldType::Type>,TDefaultMapHashableKeyFuncs<FName,enum_EWorldType::Type,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
              (&UWorld::WorldTypePreLoadMap,(uint)local_res10,
               (TKeyInitializer<FName_const_&> *)(ulonglong)uVar5,(bool *)&local_res20);
    lVar8 = UWorld::WorldTypePreLoadMap._0_8_ + (longlong)local_res10[0] * 0x14;
LAB_148a17459:
    *(uint *)(lVar8 + 8) = (uint)bVar1;
    local_68 = (undefined1  [8])(param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    local_88.PackageName.ComparisonIndex.Value = 0;
    local_88.PackageName.Number = 0;
    local_88.HeaderExtension = Unspecified;
    FStack_60.DelegateAllocator._0_4_ = iVar2 + -1;
    if (iVar2 == 0) {
      FStack_60.DelegateAllocator._0_4_ = 0;
    }
    bVar4 = FPackagePath::TryFromMountedName((TStringView<wchar_t> *)local_68,&local_88);
    if (bVar4) {
      local_68 = (undefined1  [8])0x0;
      FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_48);
      local_30 = &FStack_60;
      puVar6 = UE::Core::Private::DelegateAllocate(0x28,&FStack_60);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFSeamlessTravelHandler____A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar6[4] = SeamlessTravelLoadCallback;
        puVar6[3] = this;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      LoadPackageAsync(&local_88,local_res18,
                       (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                        *)local_68,PKG_None,-1,0,(FLinkerInstancingContext *)0x0,0);
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      pFVar9 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      return true;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    pFVar9 = (param_1->Data).AllocatorInstance.Data;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return false;
}

// StartTravel @ 148a177b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FSeamlessTravelHandler::StartTravel(FSeamlessTravelHandler *this,UWorld *param_1,FURL *param_2)

{
  int iVar1;
  longlong *plVar2;
  FName FVar3;
  UNetDriver *pUVar4;
  UNetConnection *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  FWorldContext *pFVar12;
  FLoadTimeTracker *this_01;
  UPackage *pUVar13;
  UClass *this_02;
  UWorld *pUVar14;
  FUObjectItem *this_03;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar16;
  FString *pFVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  FString local_d8;
  undefined8 local_c8;
  FString local_c0;
  LARGE_INTEGER local_b0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FDestructionSentinel local_88;
  FName local_70;
  FName local_68;
  FString local_60 [2];
  
  pFVar12 = UEngine::GetWorldContextFromWorldChecked(GEngine,param_1);
  this->WorldContextHandle = pFVar12->ContextHandle;
  QueryPerformanceCounter(&local_b0);
  this->SeamlessTravelStartTime =
       (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (param_2->Valid == 0) {
    if (1 < (byte)LogWorld._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
    }
    return false;
  }
  this_01 = FLoadTimeTracker::Get();
  FLoadTimeTracker::ResetRawLoadTimes(this_01);
  if (4 < (byte)LogWorld._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
  }
  UWorld::RemovePIEPrefix(&local_c0,&param_2->Map,(int *)0x0);
  bVar7 = FPackageName::DoesPackageExist(&local_c0,(FString *)0x0,true);
  if (!bVar7) {
    if (1 < (byte)LogWorld._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
    }
    bVar7 = false;
    goto LAB_148a17e38;
  }
  bVar7 = false;
  if (this->bTransitionInProgress == false) {
LAB_148a1798d:
    this->CurrentWorld = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FWorldDelegates::OnSeamlessTravelStart,(FWriteAccessScope *)&local_88);
    bVar6 = false;
    FWorldDelegates::OnSeamlessTravelStart._28_4_ =
         FWorldDelegates::OnSeamlessTravelStart._28_4_ + 1;
    uVar20 = FWorldDelegates::OnSeamlessTravelStart._16_4_ - 1;
    if (-1 < (int)uVar20) {
      lVar23 = (longlong)(int)uVar20 << 4;
      bVar6 = false;
      do {
        uVar21 = 0;
        if ((int)uVar20 < (int)FWorldDelegates::OnSeamlessTravelStart._16_4_) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        if (((*(int *)(lVar23 + 8 + FWorldDelegates::OnSeamlessTravelStart._8_8_) == 0) ||
            (plVar2 = *(longlong **)(lVar23 + FWorldDelegates::OnSeamlessTravelStart._8_8_),
            plVar2 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,&param_2->Map), cVar10 == '\0')) {
          bVar6 = true;
        }
        lVar23 = lVar23 + -0x10;
        uVar20 = uVar20 - 1;
      } while (-1 < (int)uVar20);
    }
    uVar22 = 0;
    FWorldDelegates::OnSeamlessTravelStart._28_4_ =
         FWorldDelegates::OnSeamlessTravelStart._28_4_ + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FWorldDelegates::OnSeamlessTravelStart,false);
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    FURL::operator=(&this->PendingTravelURL,param_2);
    this->bTransitionInProgress = true;
    this->bSwitchedToDefaultMap = false;
    this->bPauseAtMidpoint = false;
    this->bNeedCancelCleanUp = false;
    pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->CurrentWorld);
    FVar3 = (FName)pUVar13->_padding_;
    if ((this->PendingTravelURL).Map.Data.ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(this->PendingTravelURL).Map.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_a0,pwVar18);
    this_02 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
    if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_02);
    }
    FSoftObjectPath::GetLongPackageName
              ((FSoftObjectPath *)&(this_02->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,
               &local_d8);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar19.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_a8,(wchar_t *)FVar19.Data);
    if ((local_a8 == FVar3) || (local_a8 == local_a0)) {
      if (4 < (byte)LogWorld._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
      }
      this->bSwitchedToDefaultMap = true;
      if (bVar7) {
        this->bPauseAtMidpoint = true;
        this->bNeedCancelCleanUp = true;
      }
      else {
        StartLoadingDestination(this);
      }
    }
    else {
      pUVar4 = (this->CurrentWorld->NetDriver).field0_0x0.DebugPtr;
      if ((pUVar4 != (UNetDriver *)0x0) &&
         (uVar24 = uVar22, 0 < (pUVar4->ClientConnections).ArrayNum)) {
        do {
          uVar21 = (uint)uVar22;
          uVar20 = 0;
          if ((int)uVar21 < (pUVar4->ClientConnections).ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          this_00 = *(UNetConnection **)
                     ((pUVar4->ClientConnections).AllocatorInstance.Data + uVar24);
          if (this_00 != (UNetConnection *)0x0) {
            UNetConnection::SetClientWorldPackageName(this_00,(FName)0x0);
          }
          uVar22 = (ulonglong)(uVar21 + 1);
          uVar24 = uVar24 + 8;
        } while ((int)(uVar21 + 1) < (pUVar4->ClientConnections).ArrayNum);
      }
      if (local_d8.Data.ArrayNum < 2) {
        local_c8 = 0;
        pUVar14 = UWorld::CreateWorld((uint)(this->CurrentWorld->WorldType).Value,false,(FName)0x0,
                                      (UPackage *)0x0,true,Num,(FWorldInitializationValues *)0x0,
                                      false);
        this->LoadedPackage = (UObject *)0x0;
        this->LoadedWorld = pUVar14;
        if (pUVar14 != (UWorld *)0x0) {
          this_03 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4));
          FUObjectItem::SetRootFlags(this_03,RootSet);
        }
      }
      else {
        ::FString::ConcatCF(&local_98,L"StartTravel - ",&local_d8);
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar19.Data = local_98.Data.AllocatorInstance.Data;
        }
        pFVar15 = ::FName::FName(&local_70,(wchar_t *)FVar19.Data);
        FVar3 = *pFVar15;
        FVar16 = StatPtr_STAT_NamedMarker;
        if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
          pFVar15 = ::FName::FName(&local_68,"STAT_NamedMarker");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar15,
                              L"NamedMarker","STATGROUP_StatSystem","STATCAT_Advanced",
                              L"Stat System",true,false,ST_FName,false,false,MCR_Invalid);
        }
        FThreadStats::AddMessage<FName>(*(FName *)FVar16,SpecialMessageMarker,FVar3,false);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (-1 < BookmarkChannel->Enabled) {
          if (DAT_15525b9e6 == '\0') {
            FMiscTrace::OutputBookmarkSpec
                      (&DAT_15525b9e6,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x2035,L"StartTravel - %s");
            DAT_15525b9e6 = '\x01';
          }
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar19.Data = local_d8.Data.AllocatorInstance.Data;
          }
          uVar20 = CallstackTrace_GetCurrentId();
          FMiscTrace::OutputBookmark<wchar_t_const_*>(uVar20,&DAT_15525b9e6,(wchar_t *)FVar19.Data);
        }
        pFVar17 = ::FString::FString(local_60,&local_d8);
        bVar7 = StartLoadingMap(this,pFVar17);
        if ((!bVar7) && (1 < (byte)LogWorld._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
        }
      }
    }
    bVar7 = true;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar11 = (param_2->Map).Data.ArrayNum;
    iVar1 = (this->PendingTravelURL).Map.Data.ArrayNum;
    if (iVar1 == iVar11) {
      if (1 < iVar1) {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(this->PendingTravelURL).Map.Data.AllocatorInstance.Data,
                            (wchar_t *)(param_2->Map).Data.AllocatorInstance.Data);
        bVar7 = iVar11 == 0;
        goto LAB_148a1793a;
      }
    }
    else {
      bVar7 = iVar1 + iVar11 == 1;
LAB_148a1793a:
      if (!bVar7) {
        if (2 < (byte)LogWorld._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
        }
        CancelTravel(this);
        bVar7 = true;
        goto LAB_148a1798d;
      }
    }
    FURL::operator=(&this->PendingTravelURL,param_2);
    bVar7 = true;
  }
LAB_148a17e38:
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// Tick @ 148a19ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

UWorld * __thiscall FSeamlessTravelHandler::Tick(FSeamlessTravelHandler *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<AGameModeBase>_u_0 *pTVar4;
  EReplicationSystem EVar5;
  UNetDriver *this_00;
  AGameStateBase *pAVar6;
  AGameNetworkManager *pAVar7;
  UGameInstance *pUVar8;
  ULevel *pUVar9;
  longlong *plVar10;
  UAISystemBase *pUVar11;
  UObject *pUVar12;
  code *pcVar13;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  char cVar17;
  bool bVar18;
  EReplicationSystem EVar19;
  int iVar20;
  ENetMode EVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  UWorld *pUVar25;
  ULocalPlayer *pUVar26;
  UObjectBase *pUVar27;
  FActorIteratorState *pFVar28;
  AActor *pAVar29;
  UClass *pUVar30;
  FUObjectItem *pFVar31;
  FAudioDevice *pFVar32;
  FWorldContext *this_01;
  UPackage *pUVar33;
  UWorld *pUVar34;
  FURL *pFVar35;
  AGameModeBase *pAVar36;
  AWorldSettings *pAVar37;
  FString *pFVar38;
  FLoadTimeTracker *this_02;
  AServerStreamingLevelsVisibility *pAVar39;
  ulonglong uVar40;
  wchar_t *pwVar41;
  TObjectPtr<AGameModeBase>_u_0 TVar42;
  undefined8 *puVar43;
  TObjectPtr<AGameModeBase>_u_0 TVar44;
  FScriptContainerElement *pFVar45;
  ForAnyElementType FVar46;
  uint uVar47;
  uint uVar48;
  TObjectPtr<AGameModeBase>_u_0 TVar49;
  TObjectPtr<AGameModeBase>_u_0 TVar50;
  longlong lVar51;
  undefined1 auStackY_6c8 [32];
  FBoolAnnotation local_677;
  FBoolAnnotation local_676;
  undefined1 local_675;
  FBoolAnnotation local_674;
  undefined1 local_673;
  undefined1 local_672;
  undefined1 local_671;
  undefined1 local_670 [8];
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_668;
  uint local_658;
  ForAnyElementType local_650;
  undefined8 local_648;
  ForAnyElementType local_640;
  undefined8 local_638;
  uint local_630;
  TObjectPtr<AGameModeBase>_u_0 local_628;
  TObjectPtr<AGameModeBase>_u_0 *local_620;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_618;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_608;
  undefined8 *local_5f8;
  undefined8 local_5f0;
  ENetMode local_5e8;
  UNetDriver *local_5e0;
  FName local_5d8;
  FString local_5d0;
  FName local_5c0;
  FName local_5b8;
  FName local_5b0;
  FName local_5a8;
  LARGE_INTEGER local_5a0;
  UWorld *local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  UObject *local_578;
  TObjectPtr<AGameModeBase>_u_0 local_570;
  TObjectPtr<AGameModeBase>_u_0 *local_568;
  FSeamlessTravelHandler *local_560;
  FString local_558;
  FWorldInitializationValues local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  code *local_4e8;
  undefined1 *local_4e0;
  code *local_4d8;
  code **local_4d0;
  FString local_4c8;
  code *local_4b8;
  UWorld **local_4b0;
  code *local_4a8;
  code **local_4a0;
  FString local_498;
  FSeamlessTravelHandler *local_488;
  FUObjectAnnotationSparse<FBoolAnnotation,1> *local_480;
  ForAnyElementType *local_478;
  UNetDriver *local_470;
  FString local_468;
  FLogScopedVerbosityOverride local_458;
  FLogScopedVerbosityOverride local_448;
  FString local_438;
  TActorIteratorBase<FActorIterator> local_428;
  FConditionalScopeLogTime local_3c8;
  FURL local_3a0;
  FURL local_338;
  undefined1 local_2c8 [32];
  void *local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  ForElementType<FSetElementId> local_288;
  int local_280;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  local_278;
  FUObjectAnnotationSparse<FBoolAnnotation,1> local_228;
  undefined1 local_1a8 [144];
  UObject *local_118;
  UObject *local_110;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> local_100;
  ForAnyElementType local_b0;
  TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_a0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  TVar50.DebugPtr = (AGameModeBase *)0x0;
  local_658 = 0;
  local_560 = this;
  if ((this->bNeedCancelCleanUp != false) && (bVar16 = (*IsAsyncLoading)(), !bVar16)) {
    CollectGarbage(RF_NoFlags,true);
    this->bNeedCancelCleanUp = false;
    if (this->bTransitionInProgress == false) {
      if (2 < (byte)LogWorld._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
      }
    }
    else {
      this->bPauseAtMidpoint = false;
      if (this->bSwitchedToDefaultMap != false) {
        StartLoadingDestination(this);
      }
    }
  }
  if ((this->CurrentWorld == (UWorld *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWorld",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                          ,0x2133,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    pUVar25 = (UWorld *)(*pcVar13)();
    return pUVar25;
  }
  pUVar25 = this->CurrentWorld;
  this_00 = (pUVar25->NetDriver).field0_0x0.DebugPtr;
  if ((this->LoadedPackage != (UObject *)0x0) || (this->LoadedWorld != (UWorld *)0x0)) {
    if ((pUVar25->NextURL).Data.ArrayNum == 0) {
      pwVar41 = L"";
    }
    else {
      pwVar41 = (wchar_t *)(pUVar25->NextURL).Data.AllocatorInstance.Data;
    }
    local_5e0 = this_00;
    iVar20 = FGenericPlatformStricmp::Stricmp(pwVar41,L"");
    if ((iVar20 == 0) &&
       ((this->LoadedWorld == (UWorld *)0x0 || (bVar16 = (*IsAsyncLoading)(), !bVar16)))) {
      pUVar25 = this->LoadedWorld;
      if (this->CurrentWorld == pUVar25) {
        ::FString::PrintfImpl(&local_558,L"Travel aborted - new world is the same as current world")
        ;
        if (1 < (byte)LogWorld._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
        }
        CancelTravel(this);
      }
      else {
        if ((pUVar25 != (UWorld *)0x0) &&
           ((pUVar25->PersistentLevel).field0_0x0.DebugPtr != (ULevel *)0x0)) {
          UWorld::FlushLevelStreaming(this->CurrentWorld,Visibility);
          if (this->bSwitchedToDefaultMap != false) {
            UWorld::DuplicateRequestedLevels
                      (this->LoadedWorld,*(FName *)(this->LoadedWorld->_padding_ + 0x18));
          }
          pAVar6 = (this->CurrentWorld->GameState).field0_0x0.DebugPtr;
          if (pAVar6 != (AGameStateBase *)0x0) {
            (**(code **)(pAVar6->_padding_ + 0x7a8))(pAVar6,this->bSwitchedToDefaultMap == false);
          }
          UWorld::BeginTearingDown(this->CurrentWorld);
          TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
                    (&FWorldDelegates::OnSeamlessTravelTransition,this->CurrentWorld);
          local_228.AnnotationMapCritical.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
          local_228.AnnotationCacheCritical.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
          local_228.AnnotationCacheValue.Mark = false;
          local_228.bRegistered = false;
          local_228._padding_ = (longlong)&___7FUObjectAnnotationSparseBool__6B_;
          local_228.AnnotationMap._0_8_ = 0;
          local_228.AnnotationMap._8_8_ = 0;
          local_228.AnnotationMap._32_8_ = 0;
          local_228.AnnotationMap._40_8_ = ___xmm_00000000ffffffff0000008000000000;
          local_228.AnnotationMap._48_8_ = _UNK_150631d98;
          local_228.AnnotationMap._64_8_ = 0;
          local_228.AnnotationMap._72_4_ = 0;
          local_228.AnnotationCacheKey = (UObjectBase *)0x0;
          local_5f8 = (undefined8 *)0x0;
          local_5f0 = 0;
          pAVar36 = (this->CurrentWorld->AuthorityGameMode).field0_0x0.DebugPtr;
          if (pAVar36 != (AGameModeBase *)0x0) {
            (**(code **)(pAVar36->_padding_ + 0x840))
                      (pAVar36,this->bSwitchedToDefaultMap == false,&local_5f8);
          }
          EVar21 = UWorld::InternalGetNetMode(this->CurrentWorld);
          pUVar25 = this->CurrentWorld;
          TVar42.DebugPtr = TVar50.DebugPtr;
          local_5e8 = EVar21;
          if (EVar21 == NM_Client) {
            UEngine::GetLocalPlayerIterator(GEngine,&local_618,pUVar25);
            while ((FLocalPlayerIterator::GetCurrent((FLocalPlayerIterator *)&local_618),
                   -1 < local_618.Index && (local_618.Index < (local_618.Container)->ArrayNum))) {
              pUVar26 = FLocalPlayerIterator::operator->((FLocalPlayerIterator *)&local_618);
              if (pUVar26->_padding_ != 0) {
                local_677.Mark = true;
                pUVar26 = FLocalPlayerIterator::operator->((FLocalPlayerIterator *)&local_618);
                FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                          (&local_228,(UObjectBase *)pUVar26->_padding_,&local_677);
              }
              local_618.Index = local_618.Index + 1;
            }
          }
          else {
            while ((iVar20 = TVar42._0_4_, -1 < iVar20 &&
                   (iVar20 < (pUVar25->ControllerList).ArrayNum))) {
              pUVar27 = (UObjectBase *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((pUVar25->ControllerList).AllocatorInstance.Data +
                                            (longlong)iVar20 * 8));
              if ((pUVar27 != (UObjectBase *)0x0) &&
                 (cVar17 = (**(code **)(pUVar27->_padding_ + 0x898))(pUVar27), cVar17 != '\0')) {
                local_676.Mark = true;
                FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                          (&local_228,pUVar27,&local_676);
              }
              TVar42._0_4_ = iVar20 + 1;
              TVar42._4_4_ = 0;
            }
          }
          UEngine::GetLocalPlayerIterator(GEngine,&local_608,this->CurrentWorld);
          while ((FLocalPlayerIterator::GetCurrent((FLocalPlayerIterator *)&local_608),
                 -1 < local_608.Index && (local_608.Index < (local_608.Container)->ArrayNum))) {
            pUVar26 = FLocalPlayerIterator::operator->((FLocalPlayerIterator *)&local_608);
            if (pUVar26->_padding_ != 0) {
              pUVar26 = FLocalPlayerIterator::operator->((FLocalPlayerIterator *)&local_608);
              (**(code **)(*(longlong *)pUVar26->_padding_ + 0xc90))
                        ((longlong *)pUVar26->_padding_,this->bSwitchedToDefaultMap == false,
                         &local_5f8);
            }
            local_608.Index = local_608.Index + 1;
          }
          iVar20 = (int)local_5f0;
          puVar2 = local_5f8 + (int)local_5f0;
          puVar43 = local_5f8;
          while( true ) {
            if ((int)local_5f0 != iVar20) {
              local_675 = 0;
              `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_675);
            }
            if (puVar43 == puVar2) break;
            if ((UObjectBase *)*puVar43 != (UObjectBase *)0x0) {
              local_674.Mark = true;
              FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                        (&local_228,(UObjectBase *)*puVar43,&local_674);
            }
            puVar43 = puVar43 + 1;
          }
          uVar47 = local_228.AnnotationMap._8_4_ - local_228.AnnotationMap._52_4_;
          local_640.Data = (FScriptContainerElement *)0x0;
          local_638 = 0;
          if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar47);
          }
          if (0 < (int)uVar47) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar47,&local_640,0,(int *)((longlong)&local_638 + 4));
          }
          local_480 = &local_228;
          local_478 = &local_640;
          local_488 = this;
          local_470 = this_00;
          FActorIterator::FActorIterator
                    ((FActorIterator *)&local_428,this->CurrentWorld,
                     OnlyActiveLevels|SkipPendingKill);
          pFVar28 = TOptional<FActorIteratorState>::operator->(&local_428.State);
          cVar17 = pFVar28->ReachedEnd;
          while (cVar17 == '\0') {
            pFVar28 = TOptional<FActorIteratorState>::operator->(&local_428.State);
            pAVar29 = FActorIteratorState::GetActorChecked(pFVar28);
            pUVar30 = Z_Construct_UClass_APlayerController_NoRegister();
            iVar20 = (int)pUVar30->_padding_;
            if ((*(int *)(pAVar29->_padding_ + 0x38) < iVar20) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar29->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
                &pUVar30->_padding_)) {
              `FSeamlessTravelHandler::Tick'::__l69::<lambda_1>::operator()(&local_488,pAVar29);
            }
            TActorIteratorBase<FActorIterator>::operator++(&local_428);
            pFVar28 = TOptional<FActorIteratorState>::operator->(&local_428.State);
            cVar17 = pFVar28->ReachedEnd;
          }
          TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_428.State);
          pUVar25 = this->CurrentWorld;
          TVar44.DebugPtr = TVar50.DebugPtr;
          while ((iVar20 = TVar44._0_4_, -1 < iVar20 &&
                 (iVar20 < (pUVar25->PlayerControllerList).ArrayNum))) {
            pAVar29 = (AActor *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pUVar25->PlayerControllerList).AllocatorInstance.Data +
                                          (longlong)iVar20 * 8));
            if (pAVar29 != (AActor *)0x0) {
              `FSeamlessTravelHandler::Tick'::__l69::<lambda_1>::operator()(&local_488,pAVar29);
            }
            TVar44._0_4_ = iVar20 + 1;
            TVar44._4_4_ = 0;
          }
          if (this_00 != (UNetDriver *)0x0) {
            UNetDriver::CleanupWorldForSeamlessTravel(this_00);
          }
          iVar20 = (int)local_638;
          uVar40 = (ulonglong)(int)local_638;
          bVar16 = EVar21 != NM_Client;
          local_650.Data = (FScriptContainerElement *)0x0;
          local_648 = 0;
          local_620 = (TObjectPtr<AGameModeBase>_u_0 *)(local_640.Data + uVar40 * 8);
          TVar42.DebugPtr = TVar50.DebugPtr;
          FVar46.Data = local_640.Data;
          while( true ) {
            pTVar4 = local_620;
            if ((int)uVar40 != iVar20) {
              local_673 = 0;
              `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_673);
            }
            if ((TObjectPtr<AGameModeBase>_u_0 *)FVar46.Data == pTVar4) break;
            TVar44 = (TObjectPtr<AGameModeBase>_u_0)*(TObjectPtr<AGameModeBase>_u_0 *)FVar46.Data;
            FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAnnotation
                      (&local_228,(UObjectBase *)TVar44.DebugPtr);
            if ((AController *)TVar44.DebugPtr == (AController *)0x0) {
LAB_148a1a355:
              local_628.DebugPtr = (AGameModeBase *)0x0;
              pUVar30 = Z_Construct_UClass_AGameModeBase_NoRegister();
              iVar22 = (int)pUVar30->_padding_;
              if ((*(int *)((TVar44.DebugPtr)->_padding_ + 0x38) < iVar22) ||
                 (TVar49 = TVar44,
                 (longlong *)
                 *(undefined1 **)
                  (*(longlong *)((TVar44.DebugPtr)->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
                 &pUVar30->_padding_)) {
                pUVar30 = Z_Construct_UClass_AGameStateBase_NoRegister();
                iVar22 = (int)pUVar30->_padding_;
                TVar49 = TVar42;
                if ((iVar22 <= *(int *)((TVar44.DebugPtr)->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)((TVar44.DebugPtr)->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
                    &pUVar30->_padding_)) {
                  TVar50 = TVar44;
                }
              }
            }
            else {
              pUVar30 = Z_Construct_UClass_AController_NoRegister();
              iVar22 = (int)pUVar30->_padding_;
              if ((*(int *)((TVar44.DebugPtr)->_padding_ + 0x38) < iVar22) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)((TVar44.DebugPtr)->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
                  &pUVar30->_padding_)) goto LAB_148a1a355;
              local_628 = TVar44;
              UWorld::RemoveController(this->CurrentWorld,(AController *)TVar44.DebugPtr);
              if (((local_650.Data <= &local_628) &&
                  (&local_628 <
                   (TObjectPtr<AGameModeBase>_u_0 *)(local_650.Data + (longlong)local_648._4_4_ * 8)
                  )) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar18)) {
                pcVar13 = (code *)swi(3);
                pUVar25 = (UWorld *)(*pcVar13)();
                return pUVar25;
              }
              iVar22 = (int)local_648;
              if ((int)local_648 == local_648._4_4_) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_650,(int *)((longlong)&local_648 + 4));
              }
              local_648 = CONCAT44(local_648._4_4_,iVar22 + 1);
              ((TObjectPtr<AGameModeBase>_u_0 *)(local_650.Data + (longlong)iVar22 * 8))->DebugPtr =
                   (AGameModeBase *)local_628;
              TVar49 = TVar42;
            }
            (**(code **)((TVar44.DebugPtr)->_padding_ + 0x170))
                      (TVar44.DebugPtr,0,(this->LoadedWorld->PersistentLevel).field0_0x0.DebugPtr);
            puVar1 = (undefined1 *)((longlong)&(TVar44.DebugPtr)->_padding_ + 3);
            *puVar1 = *puVar1 | 4;
            uVar40 = local_638 & 0xffffffff;
            FVar46.Data = FVar46.Data + 8;
            TVar42 = TVar49;
          }
          if ((AController *)TVar42.DebugPtr != (AController *)0x0) {
            pUVar25 = this->LoadedWorld;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar42.DebugPtr);
            }
            (pUVar25->AuthorityGameMode).field0_0x0.DebugPtr = (AGameModeBase *)TVar42;
            UWorld::SetGameState(pUVar25,(AGameStateBase *)TVar50.DebugPtr);
            bVar16 = false;
          }
          CopyWorldData(this);
          UWorld::SetBegunPlay(this->CurrentWorld,false);
          UWorld::CleanupWorld(this->CurrentWorld,this->bSwitchedToDefaultMap,true,(UWorld *)0x0);
          pFVar31 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&this->CurrentWorld->_padding_ + 4)
                              );
          FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar31,RootSet);
          UObjectBase::AtomicallyClearFlags((UObjectBase *)this->CurrentWorld,RF_Standalone);
          pUVar25 = this->CurrentWorld;
          bVar18 = FAudioDeviceHandle::IsValid(&pUVar25->AudioDeviceHandle);
          if (bVar18) {
            pFVar32 = FAudioDeviceHandle::GetAudioDevice(&pUVar25->AudioDeviceHandle);
LAB_148a1a49d:
            if (pFVar32 != (FAudioDevice *)0x0) {
              FAudioDevice::Flush(pFVar32,this->CurrentWorld,true);
            }
          }
          else if (GEngine != (UEngine *)0x0) {
            pFVar32 = UEngine::GetMainAudioDeviceRaw(GEngine);
            goto LAB_148a1a49d;
          }
          pAVar7 = (this->CurrentWorld->NetworkManager).field0_0x0.DebugPtr;
          if (pAVar7 == (AGameNetworkManager *)0x0) {
            uVar47 = TVar42._0_4_ & 0xffffff00;
          }
          else {
            uVar47 = *(uint *)&pAVar7->field_0x2e4 >> 1;
          }
          local_630 = uVar47;
          pFVar31 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&this->LoadedWorld->_padding_ + 4))
          ;
          FUObjectItem::ThisThreadAtomicallySetFlag(pFVar31,RootSet);
          this_01 = UEngine::GetWorldContextFromWorldChecked(GEngine,this->CurrentWorld);
          local_620 = (TObjectPtr<AGameModeBase>_u_0 *)this_01;
          FWorldContext::SetCurrentWorld(this_01,this->LoadedWorld);
          (this->LoadedWorld->WorldType).Value = (this_01->WorldType).Value;
          if ((this_01->WorldType).Value == '\x03') {
            pUVar33 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->LoadedWorld);
            if ((pUVar33 == (UPackage *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("WorldPackage",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                                    ,0x2224,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              pUVar25 = (UWorld *)(*pcVar13)();
              return pUVar25;
            }
            if ((atomic<unsigned_int>)((uint)pUVar33->PackageFlagsPrivate | 0x100000) !=
                pUVar33->PackageFlagsPrivate) {
              LOCK();
              pUVar33->PackageFlagsPrivate =
                   (atomic<unsigned_int>)((uint)pUVar33->PackageFlagsPrivate | 0x100000);
              UNLOCK();
            }
          }
          if (this_00 != (UNetDriver *)0x0) {
            UNetDriver::PreSeamlessTravelGarbageCollect(this_00);
            local_570 = (TObjectPtr<AGameModeBase>_u_0)
                        (this->LoadedWorld->AuthorityGameMode).field0_0x0.DebugPtr;
            if (local_570.DebugPtr != (AGameModeBase *)0x0) {
              EVar5 = (local_570.DebugPtr)->GameNetDriverReplicationSystem;
              EVar19 = UE::Net::GetUseIrisReplicationCmdlineValue();
              if (((EVar5 != Default) && (EVar19 == Default)) &&
                 ((EVar5 != Iris || (this_00->bIsUsingIris == false)))) {
                local_568 = &local_570;
                `FSeamlessTravelHandler::Tick'::__l159::<lambda_2>::operator()(&local_568);
              }
            }
          }
          GWorld.World = (UWorld *)0x0;
          pUVar25 = this->CurrentWorld;
          for (iVar20 = 0; (-1 < iVar20 && (iVar20 < (pUVar25->Levels).ArrayNum));
              iVar20 = iVar20 + 1) {
            lVar51 = *(longlong *)((pUVar25->Levels).AllocatorInstance.Data + (longlong)iVar20 * 8);
            if ((lVar51 != 0) &&
               (pUVar34 = CastChecked<UWorld,UObject>(*(UObject **)(lVar51 + 0x20)),
               pUVar34->bMarkedObjectsPendingKill == 0)) {
              UWorld::MarkObjectsPendingKill(pUVar34);
            }
          }
          pUVar25 = this->CurrentWorld;
          pFVar45 = (pUVar25->StreamingLevels).AllocatorInstance.Data;
          iVar20 = (pUVar25->StreamingLevels).ArrayNum;
          pFVar3 = pFVar45 + (longlong)iVar20 * 8;
          while( true ) {
            if ((pUVar25->StreamingLevels).ArrayNum != iVar20) {
              local_672 = 0;
              `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_672);
            }
            if (pFVar45 == pFVar3) break;
            if ((*(longlong *)(*(longlong *)pFVar45 + 0x1b0) != 0) &&
               (pUVar34 = CastChecked<UWorld,UObject>
                                    (*(UObject **)
                                      (*(longlong *)(*(longlong *)pFVar45 + 0x1b0) + 0x20)),
               pUVar34->bMarkedObjectsPendingKill == 0)) {
              UWorld::MarkObjectsPendingKill(pUVar34);
            }
            pFVar45 = pFVar45 + 8;
          }
          this->CurrentWorld = (UWorld *)0x0;
          if (UObjectBaseUtility::bGarbageEliminationEnabled == false) {
            iVar20 = (int)local_638;
            uVar40 = (ulonglong)(int)local_638;
            local_278.Elements._0_8_ = 0;
            local_278.Elements._8_8_ = 0;
            local_278.Elements._32_8_ = 0;
            pFVar3 = local_640.Data + uVar40 * 8;
            local_278.Elements._40_4_ = 0;
            local_278.Elements._44_4_ = 0x80;
            local_278.Elements._48_4_ = 0xffffffff;
            local_278.Elements._52_4_ = 0;
            local_278.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_278.HashSize = 0;
            FVar46.Data = local_640.Data;
            while( true ) {
              if ((int)uVar40 != iVar20) {
                local_671 = 0;
                `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_671);
              }
              this = local_560;
              uVar47 = local_630;
              if (FVar46.Data == pFVar3) break;
              pUVar27 = *(UObjectBase **)FVar46.Data;
              local_2c8._0_8_ = (FScriptContainerElement *)0x0;
              local_2a8 = (void *)0x0;
              local_2a0 = 0;
              local_294 = 0;
              local_288 = (ForElementType<FSetElementId>)0x0;
              local_280 = 0;
              local_2c8._8_8_ = 0;
              local_29c = 0x80;
              local_298 = 0xffffffff;
              TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                           *)local_2c8,&local_278);
              FArchiveReplaceObjectRef<UObject>::FArchiveReplaceObjectRef<UObject>
                        ((FArchiveReplaceObjectRef<UObject> *)local_1a8,(UObject *)pUVar27,
                         (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                          *)local_2c8,DelayStart|IgnoreOuterRef);
              local_1a8._0_8_ = &___7__FArchiveReplaceOrClearGarbageReferences_VUObject____6B_;
              TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::Reset(&local_a0);
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
              Emplace<UObject_*_const_&>
                        ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                         (local_1a8 + 0xa8),&local_578,(bool *)(local_1a8 + 0x90));
              local_110 = local_118;
              FArchiveReplaceObjectRefBase::SerializeObject
                        ((FArchiveReplaceObjectRefBase *)local_1a8,local_118);
              local_a0.HashSize = 0;
              if (local_a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_a0.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_a0.Elements);
              if (local_b0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data);
              }
              local_100.HashSize = 0;
              if (local_100.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_100.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(local_1a8 + 0xa8));
              FArchive::~FArchive((FArchive *)local_1a8);
              local_4e0 = local_2c8;
              local_4e8 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FSeamlessTravelHandler::Tick'::__l184::<lambda_3>,void,UObject_*>
                          ::Call;
              local_4d0 = &local_4e8;
              local_4d8 = UE::Core::Private::Function::
                          TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>
                          ::Call;
              ForEachObjectWithOuterBreakable
                        (pUVar27,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_4d8,true,RF_NoFlags
                         ,Garbage);
              local_280 = 0;
              if (local_288 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_288);
              }
              iVar22 = SUB84(local_2c8._8_8_,4);
              local_2c8._8_8_ = local_2c8._8_8_ & 0xffffffff00000000;
              if (iVar22 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,0,(ForAnyElementType *)local_2c8,0,(int *)(local_2c8 + 0xc));
              }
              local_298 = 0xffffffff;
              local_294 = 0;
              local_2a0 = 0;
              if (0x80 < local_29c) {
                local_29c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),0);
              }
              if (local_2a8 != (void *)0x0) {
                FMemory::Free(local_2a8);
              }
              if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_2c8._0_8_);
              }
              uVar40 = local_638 & 0xffffffff;
              FVar46.Data = FVar46.Data + 8;
            }
            local_278.HashSize = 0;
            if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_278.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_278.Elements);
          }
          CollectGarbage(RF_NoFlags,true);
          (**(code **)(GEngine->_padding_ + 0x528))();
          if (local_5e0 != (UNetDriver *)0x0) {
            UNetDriver::PostSeamlessTravelGarbageCollect(local_5e0);
          }
          GWorld.World = this->LoadedWorld;
          if (this->LoadedWorld->bIsWorldInitialized == '\0') {
            local_548.DefaultGameMode.Class.field0_0x0 =
                 (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
            local_548.bEnableWorldPartitionStreaming = 1;
            local_548.bCreateWorldPartition = 0;
            local_548.bCreateFXSystem = 1;
            local_548.bTransactional = 1;
            local_548.bForceUseMovementComponentInNonGameWorld = 0;
            local_548.bEnableTraceCollision = 0;
            local_548.bShouldSimulatePhysics = 1;
            local_548.bCreateAISystem = 1;
            local_548.bCreateNavigation = 1;
            local_548.bCreatePhysicsScene = 1;
            local_548.bRequiresHitProxies = 1;
            local_548.bAllowAudioPlayback = 1;
            local_548.bInitializeScenes = 1;
            UWorld::InitWorld(this->LoadedWorld,&local_548);
          }
          iVar20 = (int)local_648;
          uVar40 = (ulonglong)(int)local_648;
          pTVar4 = (TObjectPtr<AGameModeBase>_u_0 *)(local_650.Data + uVar40 * 8);
          FVar46.Data = local_650.Data;
          while( true ) {
            if ((int)uVar40 != iVar20) {
              local_670[0] = 0;
              `TCheckedPointerIterator<AController_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_670);
            }
            if ((TObjectPtr<AGameModeBase>_u_0 *)FVar46.Data == pTVar4) break;
            UWorld::AddController(this->LoadedWorld,*(AController **)FVar46.Data);
            uVar40 = local_648 & 0xffffffff;
            FVar46.Data = FVar46.Data + 8;
          }
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat8847 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat8847 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            FNetworkProfiler::TrackSessionChange(&GNetworkProfiler,true,&this->LoadedWorld->URL);
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
          if (bVar16) {
            pUVar25 = this->LoadedWorld;
            EVar21 = UWorld::InternalGetNetMode(pUVar25);
            if ((EVar21 != NM_Client) &&
               ((pUVar25->AuthorityGameMode).field0_0x0.DebugPtr == (AGameModeBase *)0x0)) {
              pUVar8 = (pUVar25->OwningGameInstance).field0_0x0.DebugPtr;
              pcVar13 = *(code **)(pUVar8->_padding_ + 0x3b8);
              pFVar35 = FURL::FURL(&local_3a0,&this->PendingTravelURL);
              pAVar36 = (AGameModeBase *)(*pcVar13)(pUVar8,pFVar35,pUVar25);
              if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
                 (pAVar36 == (AGameModeBase *)0x0)) {
                (pUVar25->AuthorityGameMode).field0_0x0.DebugPtr = pAVar36;
                if ((pAVar36 == (AGameModeBase *)0x0) && (1 < (byte)LogWorld._0_1_)) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
                }
              }
              else {
                UE::GC::MarkAsReachable((UObject *)pAVar36);
                (pUVar25->AuthorityGameMode).field0_0x0.DebugPtr = pAVar36;
              }
            }
          }
          if ((this->bSwitchedToDefaultMap != false) && (local_5e8 != NM_Client)) {
            pUVar25 = this->LoadedWorld;
            bVar16 = FAudioDeviceHandle::IsValid(&pUVar25->AudioDeviceHandle);
            if (bVar16) {
              pFVar32 = FAudioDeviceHandle::GetAudioDevice(&pUVar25->AudioDeviceHandle);
LAB_148a1ab68:
              if (pFVar32 != (FAudioDevice *)0x0) {
                pAVar37 = (AWorldSettings *)0x0;
                pUVar9 = (this->LoadedWorld->PersistentLevel).field0_0x0.DebugPtr;
                if (pUVar9 != (ULevel *)0x0) {
                  pAVar37 = ULevel::GetWorldSettings(pUVar9,true);
                }
                FAudioDevice::SetDefaultBaseSoundMix
                          (pFVar32,(pAVar37->DefaultBaseSoundMix).field0_0x0.DebugPtr);
              }
            }
            else if (GEngine != (UEngine *)0x0) {
              pFVar32 = UEngine::GetMainAudioDeviceRaw(GEngine);
              goto LAB_148a1ab68;
            }
            pAVar7 = (this->LoadedWorld->NetworkManager).field0_0x0.DebugPtr;
            if (pAVar7 != (AGameNetworkManager *)0x0) {
              *(uint *)&pAVar7->field_0x2e4 =
                   ((uVar47 & 0xff) * 2 ^ *(uint *)&pAVar7->field_0x2e4) & 2 ^
                   *(uint *)&pAVar7->field_0x2e4;
            }
          }
          FConditionalScopeLogTime::FConditionalScopeLogTime
                    (&local_3c8,true,L"    SeamlessTravel FlushLevelStreaming ",
                     (TKeyValuePair<double,unsigned_int> *)0x0,ScopeLog_Seconds);
          UWorld::FlushLevelStreaming(this->LoadedWorld,Visibility);
          FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_3c8);
          UWorld::CreateAISystem(this->LoadedWorld);
          UWorld::InitializeActorsForPlay
                    (this->LoadedWorld,&this->PendingTravelURL,false,
                     (FRegisterComponentContext *)0x0);
          pUVar30 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
          if ((pUVar30->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar30);
          }
          FSoftObjectPath::GetLongPackageName
                    ((FSoftObjectPath *)
                     &(pUVar30->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,&local_498);
          if (local_498.Data.ArrayNum < 2) {
            if (this->bSwitchedToDefaultMap == false) {
              pUVar9 = (this->LoadedWorld->PersistentLevel).field0_0x0.DebugPtr;
              if ((pUVar9 != (ULevel *)0x0) &&
                 (pAVar37 = ULevel::GetWorldSettings(pUVar9,true), pAVar37 != (AWorldSettings *)0x0)
                 ) {
                AActor::SetReplicates((AActor *)pAVar37,false);
                UWorld::RemoveNetworkActor(this->LoadedWorld,(AActor *)pAVar37);
              }
              goto LAB_148a1ac85;
            }
LAB_148a1ac8e:
            FNavigationSystem::AddNavigationSystemToWorld
                      (this->LoadedWorld,GameMode,(UNavigationSystemConfig *)0x0,true,false);
          }
          else {
LAB_148a1ac85:
            if (this->bSwitchedToDefaultMap != false) goto LAB_148a1ac8e;
          }
          pUVar33 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->LoadedWorld);
          local_5c0 = (FName)pUVar33->_padding_;
          ::FName::ToString(&local_5c0,&local_4c8);
          pFVar38 = UWorld::RemovePIEPrefix(&local_468,&local_4c8,(int *)0x0);
          if ((pFVar38->Data).ArrayNum == 0) {
            pwVar41 = L"";
          }
          else {
            pwVar41 = (wchar_t *)(pFVar38->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_5d8,pwVar41);
          if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_468.Data.AllocatorInstance.Data);
          }
          if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
          }
          UEngine::GetLocalPlayerIterator(GEngine,&local_668,this->LoadedWorld);
          for (; pTVar14 = local_668.Container, uVar47 = 0, -1 < local_668.Index;
              local_668.Index = local_668.Index + 1) {
            if ((local_668.Container)->ArrayNum <= local_668.Index) goto LAB_148a1adb2;
            lVar51 = (longlong)local_668.Index;
            uVar23 = uVar47;
            if (local_668.Index < (local_668.Container)->ArrayNum) {
              uVar23 = (uint)~local_668.Index >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar13 = (code *)swi(3);
              pUVar25 = (UWorld *)(*pcVar13)();
              return pUVar25;
            }
            if (*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) != 0)
            goto LAB_148a1adb2;
          }
LAB_148a1b2fe:
          this->LoadedWorld->bWorldWasLoadedThisTick = '\x01';
          if (this->bSwitchedToDefaultMap == false) {
            this->CurrentWorld = this->LoadedWorld;
            this->bSwitchedToDefaultMap = true;
            if (this->bPauseAtMidpoint == false) {
              if (this->bTransitionInProgress == false) {
                if (1 < (byte)LogWorld._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
                }
              }
              else {
                if (4 < (byte)LogWorld._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
                }
                pUVar8 = (this->CurrentWorld->OwningGameInstance).field0_0x0.DebugPtr;
                pcVar13 = *(code **)(pUVar8->_padding_ + 0x3b0);
                pFVar35 = FURL::FURL(&local_338,&this->PendingTravelURL);
                (*pcVar13)(pUVar8,pFVar35);
                pFVar38 = ::FString::FString(&local_438,&(this->PendingTravelURL).Map);
                bVar16 = StartLoadingMap(this,pFVar38);
                if ((!bVar16) && (1 < (byte)LogWorld._0_1_)) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
                }
              }
            }
          }
          else {
            FURL::operator=((FURL *)((longlong)local_620 + 0xc0),&this->PendingTravelURL);
            this->bTransitionInProgress = false;
            QueryPerformanceCounter(&local_5a0);
            if (4 < (byte)LogWorld._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
            }
            this_02 = FLoadTimeTracker::Get();
            FLoadTimeTracker::DumpRawLoadTimes(this_02);
            pAVar36 = (this->LoadedWorld->AuthorityGameMode).field0_0x0.DebugPtr;
            if (pAVar36 != (AGameModeBase *)0x0) {
              (**(code **)(pAVar36->_padding_ + 0x860))();
            }
            pUVar25 = this->LoadedWorld;
            bVar16 = UWorld::SupportsMakingVisibleTransactionRequests(pUVar25);
            if ((bVar16) &&
               (EVar21 = UWorld::InternalGetNetMode(pUVar25), EVar21 == NM_ListenServer)) {
              pAVar39 = AServerStreamingLevelsVisibility::SpawnServerActor(pUVar25);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pAVar39 != (AServerStreamingLevelsVisibility *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pAVar39);
              }
              (pUVar25->ServerStreamingLevelsVisibility).field0_0x0.DebugPtr = pAVar39;
            }
            local_4b8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UWorld::BeginPlay'::__l2::<lambda_1>,void,UWorldSubsystem_*>
                        ::Call;
            local_4b0 = &local_598;
            local_4a0 = &local_4b8;
            local_4a8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FObjectSubsystemCollection<UWorldSubsystem>::ForEachSubsystem'::__l2::<lambda_1>,void,USubsystem_*>
                        ::Call;
            local_598 = pUVar25;
            FSubsystemCollectionBase::ForEachSubsystemOfClass
                      ((FSubsystemCollectionBase *)&pUVar25->SubsystemCollection,(UClass *)0x0,
                       (TFunctionRef<void___cdecl(USubsystem_*)> *)&local_4a8);
            pAVar36 = (pUVar25->AuthorityGameMode).field0_0x0.DebugPtr;
            if (pAVar36 != (AGameModeBase *)0x0) {
              (**(code **)(pAVar36->_padding_ + 0x7e8))();
              pUVar11 = (pUVar25->AISystem).field0_0x0.DebugPtr;
              if (pUVar11 != (UAISystemBase *)0x0) {
                (**(code **)(pUVar11->_padding_ + 0x2d0))();
              }
            }
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&pUVar25->OnWorldBeginPlay);
            if (pUVar25->PhysicsScene != (FPhysScene_Chaos *)0x0) {
              FPhysScene_Chaos::OnWorldBeginPlay(pUVar25->PhysicsScene);
            }
            TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
                      (&FCoreUObjectDelegates::PostLoadMapWithWorld,this->LoadedWorld);
          }
          if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Data.AllocatorInstance.Data);
          }
          if ((TObjectPtr<AGameModeBase>_u_0 *)local_650.Data !=
              (TObjectPtr<AGameModeBase>_u_0 *)0x0) {
            FMemory::Free(local_650.Data);
          }
          if (local_640.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_640.Data);
          }
          if (local_5f8 != (undefined8 *)0x0) {
            FMemory::Free(local_5f8);
          }
          FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
                    (&local_228);
          pUVar25 = this->LoadedWorld;
          this->LoadedWorld = (UWorld *)0x0;
          this->LoadedPackage = (UObject *)0x0;
          return pUVar25;
        }
        pUVar12 = this->LoadedPackage;
        if (pUVar12 == (UObject *)0x0) {
          local_588 = (FName)pUVar25->_padding_;
          ::FName::ToString(&local_588,&local_4f8);
          ::FString::PrintfImpl(&local_5d0,L"Unable to travel to \'%s\' - package is not a level");
          local_508.Data.AllocatorInstance.Data = local_4f8.Data.AllocatorInstance.Data;
        }
        else {
          local_590.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
          local_590.Number = *(uint *)&pUVar12->field_0x1c;
          ::FName::ToString(&local_590,&local_508);
          ::FString::PrintfImpl(&local_5d0,L"Unable to travel to \'%s\' - package is not a level");
        }
        if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.Data.AllocatorInstance.Data);
        }
        if (1 < (byte)LogWorld._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
        }
        CancelTravel(this);
        UEngine::BroadcastTravelFailure(GEngine,this->CurrentWorld,NoLevel,&local_5d0);
        local_558.Data.AllocatorInstance.Data = local_5d0.Data.AllocatorInstance.Data;
      }
      if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_558.Data.AllocatorInstance.Data);
      }
    }
  }
  return (UWorld *)0x0;
LAB_148a1adb2:
  pTVar14 = local_668.Container;
  if ((local_668.Index < 0) || ((local_668.Container)->ArrayNum <= local_668.Index))
  goto LAB_148a1b2fe;
  uVar23 = 0;
  if (4 < (byte)LogWorld._0_1_) {
    lVar51 = (longlong)local_668.Index;
    uVar48 = uVar47;
    if (local_668.Index < (local_668.Container)->ArrayNum) {
      uVar48 = (uint)~local_668.Index >> 0x1f;
    }
    if ((uVar48 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pUVar25 = (UWorld *)(*pcVar13)();
      return pUVar25;
    }
    iVar20 = local_668.Index;
    pTVar15 = local_668.Container;
    uVar48 = local_658;
    if (*(longlong *)(*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) + 0x30) != 0) {
      uVar48 = uVar47;
      if (local_668.Index < (local_668.Container)->ArrayNum) {
        uVar48 = (uint)~local_668.Index >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar13 = (code *)swi(3);
        pUVar25 = (UWorld *)(*pcVar13)();
        return pUVar25;
      }
      uVar48 = local_658 | 4;
      local_5b8 = *(FName *)(*(longlong *)
                              (*(longlong *)
                                ((pTVar15->AllocatorInstance).Data + (longlong)iVar20 * 8) + 0x30) +
                            0x18);
      local_658 = uVar48;
      ::FName::ToString(&local_5b8,&local_528);
    }
    iVar20 = local_668.Index;
    pTVar14 = local_668.Container;
    uVar24 = uVar23;
    if (local_668.Index < (local_668.Container)->ArrayNum) {
      uVar24 = (uint)~local_668.Index >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pUVar25 = (UWorld *)(*pcVar13)();
      return pUVar25;
    }
    local_5b0 = *(FName *)(*(longlong *)((pTVar14->AllocatorInstance).Data + (longlong)iVar20 * 8) +
                          0x18);
    ::FName::ToString(&local_5b0,&local_538);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorld);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
    if (((uVar48 & 4) != 0) &&
       (local_658 = uVar48 & 0xfffffffb,
       local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  pTVar14 = local_668.Container;
  lVar51 = (longlong)local_668.Index;
  uVar48 = uVar23;
  if (local_668.Index < (local_668.Container)->ArrayNum) {
    uVar48 = (uint)~local_668.Index >> 0x1f;
  }
  if ((uVar48 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar13 = (code *)swi(3);
    pUVar25 = (UWorld *)(*pcVar13)();
    return pUVar25;
  }
  iVar20 = local_668.Index;
  pTVar15 = local_668.Container;
  if (*(longlong *)(*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) + 0x30) == 0) {
    if (1 < (byte)LogNet._0_1_) {
      uVar48 = uVar23;
      if (local_668.Index < (local_668.Container)->ArrayNum) {
        uVar48 = (uint)~local_668.Index >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar13 = (code *)swi(3);
        pUVar25 = (UWorld *)(*pcVar13)();
        return pUVar25;
      }
      local_580 = *(FName *)(*(longlong *)((pTVar15->AllocatorInstance).Data + (longlong)iVar20 * 8)
                            + 0x18);
      ::FName::ToString(&local_580,&local_518);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FLogScopedVerbosityOverride::FLogScopedVerbosityOverride
              (&local_448,(FLogCategoryBase *)&LogNet,All);
    FLogScopedVerbosityOverride::FLogScopedVerbosityOverride
              (&local_458,(FLogCategoryBase *)&LogNetTraffic,All);
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    pTVar14 = local_668.Container;
    lVar51 = (longlong)local_668.Index;
    uVar48 = uVar23;
    if (local_668.Index < (local_668.Container)->ArrayNum) {
      uVar48 = (uint)~local_668.Index >> 0x1f;
    }
    if ((uVar48 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pUVar25 = (UWorld *)(*pcVar13)();
      return pUVar25;
    }
    plVar10 = *(longlong **)(*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) + 0x30);
    (**(code **)(*plVar10 + 0xbf8))(plVar10,local_5d8,this->bSwitchedToDefaultMap);
    pTVar14 = local_668.Container;
    lVar51 = (longlong)local_668.Index;
    uVar48 = uVar23;
    if (local_668.Index < (local_668.Container)->ArrayNum) {
      uVar48 = (uint)~local_668.Index >> 0x1f;
    }
    if ((uVar48 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pUVar25 = (UWorld *)(*pcVar13)();
      return pUVar25;
    }
    APlayerController::NetworkRemapPath
              (*(APlayerController **)
                (*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) + 0x30),
               (FName)&local_5a8,local_5d8.ComparisonIndex.Value._0_1_);
    pTVar14 = local_668.Container;
    lVar51 = (longlong)local_668.Index;
    uVar48 = uVar23;
    if (local_668.Index < (local_668.Container)->ArrayNum) {
      uVar48 = (uint)~local_668.Index >> 0x1f;
    }
    if ((uVar48 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pUVar25 = (UWorld *)(*pcVar13)();
      return pUVar25;
    }
    APlayerController::ServerNotifyLoadedWorld
              (*(APlayerController **)
                (*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) + 0x30),local_5a8);
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    FLogScopedVerbosityOverride::~FLogScopedVerbosityOverride(&local_458);
    FLogScopedVerbosityOverride::~FLogScopedVerbosityOverride(&local_448);
  }
  do {
    pTVar14 = local_668.Container;
    local_668.Index = local_668.Index + 1;
    if (local_668.Index < 0) goto LAB_148a1b2fe;
    if ((local_668.Container)->ArrayNum <= local_668.Index) break;
    lVar51 = (longlong)local_668.Index;
    uVar48 = uVar23;
    if (local_668.Index < (local_668.Container)->ArrayNum) {
      uVar48 = (uint)~local_668.Index >> 0x1f;
    }
    if ((uVar48 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pUVar25 = (UWorld *)(*pcVar13)();
      return pUVar25;
    }
  } while (*(longlong *)((pTVar14->AllocatorInstance).Data + lVar51 * 8) == 0);
  goto LAB_148a1adb2;
}

// operator() @ 150534910

bool __thiscall `FSeamlessTravelHandler::Tick'::__l159::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3591672255320433206>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3591672255320433206>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505349a0;
    }
  }
  bVar2 = false;
LAB_1505349a0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

