// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 9

// FOptimisedDelta @ 143281f50

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOptimisedDelta * __thiscall
BuildPatchServices::FOptimisedDelta::FOptimisedDelta
          (FOptimisedDelta *this,FOptimisedDeltaConfiguration *param_1,
          FOptimisedDeltaDependencies *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FBuildPatchAppManifest *pFVar7;
  FBuildPatchAppManifest *pFVar8;
  IDownloadService *pIVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FString *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  TReferenceControllerBase<1> *pTVar17;
  FEvent *pFVar18;
  FOptimisedDelta *pFVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  FString *pFVar23;
  int iVar24;
  uint uVar25;
  TReferenceControllerBase<1> *pTVar26;
  EInstallMode EVar27;
  FString *pFVar28;
  bool bVar29;
  undefined1 local_res10 [8];
  int local_res18 [2];
  EInstallMode local_res20;
  FString *local_c0;
  int local_b8;
  TSharedPtr<FBuildPatchAppManifest,1> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  undefined1 *local_58;
  
  pTVar26 = (TReferenceControllerBase<1> *)0x0;
  *(undefined ***)this = &___7FOptimisedDelta_BuildPatchServices__6B_;
  (this->Configuration).SourceManifest.Object = (param_1->SourceManifest).Object;
  pTVar17 = (param_1->SourceManifest).SharedReferenceCount.ReferenceController;
  (this->Configuration).SourceManifest.SharedReferenceCount.ReferenceController = pTVar17;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Configuration).DestinationManifest.Object = (param_1->DestinationManifest).Object;
  pTVar17 = (param_1->DestinationManifest).SharedReferenceCount.ReferenceController;
  (this->Configuration).DestinationManifest.SharedReferenceCount.ReferenceController = pTVar17;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &(this->Configuration).CloudDirectories;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Configuration).CloudDirectories.ArrayMax;
  iVar13 = (param_1->CloudDirectories).ArrayNum;
  pFVar6 = (param_1->CloudDirectories).AllocatorInstance.Data;
  (this->Configuration).CloudDirectories.ArrayNum = iVar13;
  if (iVar13 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar13,0,&pTVar1->AllocatorInstance,iVar13,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar13);
  }
  (this->Configuration).DeltaPolicy = param_1->DeltaPolicy;
  (this->Configuration).InstallMode = param_1->InstallMode;
  pFVar7 = (this->Configuration).SourceManifest.Object;
  this->DownloadService = param_2->DownloadService;
  bVar29 = pFVar7 == (FBuildPatchAppManifest *)0x0;
  if (bVar29) {
    pFVar14 = ::FString::FString(&local_a0,L"");
  }
  else {
    pFVar14 = FBuildPatchUtils::GetChunkDeltaFilename
                        (&local_90,pFVar7,(this->Configuration).DestinationManifest.Object);
  }
  (this->RelativeDeltaFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelativeDeltaFilePath).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data
  ;
  (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelativeDeltaFilePath).Data.ArrayNum = (pFVar14->Data).ArrayNum;
  (this->RelativeDeltaFilePath).Data.ArrayMax = (pFVar14->Data).ArrayMax;
  (pFVar14->Data).ArrayNum = 0;
  (pFVar14->Data).ArrayMax = 0;
  if ((bVar29) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((!bVar29) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  iVar13 = (this->Configuration).CloudDirectories.ArrayNum;
  pFVar14 = &GEngineIni;
  local_res18[0] = 6;
  FConfigCacheIni::GetInt(GConfig,L"Portal.BuildPatch",L"DeltaRetries",local_res18,&GEngineIni);
  iVar24 = 1000;
  if (local_res18[0] < 1000) {
    iVar24 = local_res18[0];
  }
  local_res18[0] = iVar13;
  if (iVar13 < iVar24) {
    local_res18[0] = iVar24;
  }
  this->DeltaRetries = local_res18[0];
  *(undefined8 *)&this->OnComplete = *(undefined8 *)&param_2->OnComplete;
  *(undefined8 *)&(this->OnComplete).field_0x28 = *(undefined8 *)&(param_2->OnComplete).field_0x28;
  *(undefined8 *)&(param_2->OnComplete).field_0x28 = 0;
  uVar11 = *(undefined8 *)&(param_2->OnComplete).field_0x18;
  *(undefined8 *)&(this->OnComplete).field_0x10 = *(undefined8 *)&(param_2->OnComplete).field_0x10;
  *(undefined8 *)&(this->OnComplete).field_0x18 = uVar11;
  *(undefined8 *)&(this->OnComplete).field_0x20 = *(undefined8 *)&(param_2->OnComplete).field_0x20;
  if (*(longlong *)&this->OnComplete != 0) {
    *(undefined8 *)&param_2->OnComplete = 0;
  }
  this->DeltaPolicy = (this->Configuration).DeltaPolicy;
  puVar3 = &(this->ChunkDeltaComplete).field_0x8;
  this->CloudDirIdx = 0;
  this->RetryCount = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined4 *)&(this->ChunkDeltaComplete).field_0x10 = 0;
  *(undefined8 *)&this->ChunkDeltaProgress = 0;
  *(undefined8 *)&(this->ChunkDeltaProgress).field_0x8 = 0;
  *(undefined4 *)&(this->ChunkDeltaProgress).field_0x10 = 0;
  *(undefined8 *)&this->ChunkDeltaComplete = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ChunkDeltaComplete,
             (FWriteAccessScope *)&local_70);
  local_58 = puVar3;
  puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar3);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFOptimisedDelta_BuildPatchServices____A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[4] = OnDownloadComplete;
    puVar15[3] = this;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  pTVar17 = ::operator_new(0x90);
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
    (this->ChunkDeltaPromise).State.Object =
         (TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *
         )0x10;
    (this->ChunkDeltaPromise).State.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TSharedPtr_V__TValueOrError_V__TSharedPtr_VFBuildPatchAppManifest___00__VFString_____00_____00_SharedPointerInternals__6B_
    ;
    pTVar17[1]._padding_ = 0;
    pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[2]._padding_ = 0;
    pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[3]._padding_ = 0;
    pTVar17[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[4]._padding_ = 0;
    pTVar17[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[5]._padding_ = 0;
    pTVar17[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[6]._padding_ = 0;
    pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[7]._padding_ = 0;
    pTVar17[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar17 + 1),4000);
    pTVar17[4]._padding_ = 0;
    pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar18 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar17[7]._padding_ = (longlong)pFVar18;
    *(undefined1 *)&pTVar17[7].SharedReferenceCount = 0;
    if (((TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *
         )(pTVar17 + 1) ==
         (TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *
         )0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar29)) {
      pcVar10 = (code *)swi(3);
      pFVar19 = (FOptimisedDelta *)(*pcVar10)();
      return pFVar19;
    }
    (this->ChunkDeltaPromise).State.Object =
         (TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *
         )(pTVar17 + 1);
    (this->ChunkDeltaPromise).State.SharedReferenceCount.ReferenceController = pTVar17;
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
    pTVar26 = pTVar17;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  (this->ChunkDeltaPromise).bFutureRetrieved = true;
  if (((this->ChunkDeltaPromise).State.Object ==
       (TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *)
       0x0) && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("State.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                    ,0x283,L""), bVar29)) {
    pcVar10 = (code *)swi(3);
    pFVar19 = (FOptimisedDelta *)(*pcVar10)();
    return pFVar19;
  }
  *(TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> **)
   &this->ChunkDeltaFuture = (this->ChunkDeltaPromise).State.Object;
  pTVar17 = (this->ChunkDeltaPromise).State.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&(this->ChunkDeltaFuture).field_0x8 = pTVar17;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar27 = (this->Configuration).InstallMode;
  pTVar4 = &(this->Configuration).DestinationManifest;
  (this->DownloadedBytes).Counter = 0;
  pFVar7 = (this->Configuration).SourceManifest.Object;
  this->ErrorCode = (wchar_t *)0x0;
  local_res20 = EVar27;
  if (pFVar7 == (FBuildPatchAppManifest *)0x0) {
    bVar29 = false;
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(pTVar4->Object->_padding_ + 0x150))();
    if (((this->Configuration).SourceManifest.Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar29)) {
      pcVar10 = (code *)swi(3);
      pFVar19 = (FOptimisedDelta *)(*pcVar10)();
      return pFVar19;
    }
    puVar20 = (undefined8 *)
              (**(code **)(((this->Configuration).SourceManifest.Object)->_padding_ + 0x150))();
    iVar13 = *(int *)(puVar20 + 1);
    if (iVar13 == *(int *)(puVar15 + 1)) {
      if (iVar13 < 2) {
        bVar29 = true;
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar20,(wchar_t *)*puVar15);
        bVar29 = iVar13 == 0;
      }
    }
    else {
      bVar29 = iVar13 + *(int *)(puVar15 + 1) == 1;
    }
  }
  bVar12 = true;
  if ((this->Configuration).SourceManifest.Object != (FBuildPatchAppManifest *)0x0) {
    pFVar8 = pTVar4->Object;
    (**(code **)(pFVar8->_padding_ + 0x88))(pFVar8,&local_c0);
    iVar13 = local_b8;
    pFVar28 = local_c0 + local_b8;
    pFVar23 = local_c0;
    while( true ) {
      if (local_b8 != iVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar23 == pFVar28) {
        DestructItems<FString,int>(local_c0,local_b8);
        EVar27 = local_res20;
        bVar12 = false;
        if (local_c0 != (FString *)0x0) {
          FMemory::Free(local_c0);
          EVar27 = local_res20;
        }
        goto LAB_143282498;
      }
      if (((this->Configuration).SourceManifest.Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        pFVar19 = (FOptimisedDelta *)(*pcVar10)();
        return pFVar19;
      }
      pFVar8 = (this->Configuration).SourceManifest.Object;
      lVar21 = (**(code **)(pFVar8->_padding_ + 0x1f8))(pFVar8,pFVar23);
      pFVar8 = (this->Configuration).DestinationManifest.Object;
      lVar22 = (**(code **)(pFVar8->_padding_ + 0x1f8))(pFVar8,pFVar23);
      if ((((lVar21 == 0) || (*(longlong *)(lVar21 + 0x20) != *(longlong *)(lVar22 + 0x20))) ||
          (*(longlong *)(lVar21 + 0x28) != *(longlong *)(lVar22 + 0x28))) ||
         (*(int *)(lVar21 + 0x30) != *(int *)(lVar22 + 0x30))) break;
      pFVar23 = pFVar23 + 1;
    }
    DestructItems<FString,int>(local_c0,local_b8);
    if (local_c0 != (FString *)0x0) {
      FMemory::Free(local_c0);
    }
    EVar27 = local_res20;
    bVar12 = true;
  }
LAB_143282498:
  if (((pFVar7 == (FBuildPatchAppManifest *)0x0) || (EVar27 == PrereqOnly)) ||
     ((bVar29 || (!bVar12)))) {
    this->DeltaPolicy = Skip;
  }
  if (this->DeltaPolicy == Skip) {
    local_b0.Object = (this->Configuration).DestinationManifest.Object;
    local_b0.SharedReferenceCount.ReferenceController =
         (this->Configuration).DestinationManifest.SharedReferenceCount.ReferenceController;
    if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetResult(this,&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
  }
  else {
    if (4 < (byte)LogOptimisedDelta._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
    }
    uVar5 = this->CloudDirIdx;
    pIVar9 = this->DownloadService;
    pcVar10 = *(code **)((longlong)*pIVar9 + 8);
    uVar25 = 0;
    if ((int)uVar5 < (this->Configuration).CloudDirectories.ArrayNum) {
      uVar25 = ~uVar5 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (pFVar14 = (FString *)(longlong)(int)uVar5,
       bVar29 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar10 = (code *)swi(3);
      pFVar19 = (FOptimisedDelta *)(*pcVar10)();
      return pFVar19;
    }
    pFVar23 = ::operator/(&local_80,
                          (FString *)
                          ((this->Configuration).CloudDirectories.AllocatorInstance.Data +
                          (longlong)(int)uVar5 * 0x10),&this->RelativeDeltaFilePath);
    (*pcVar10)(pIVar9,pFVar23,&this->ChunkDeltaComplete,&this->ChunkDeltaProgress,pFVar14);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// operator() @ 143299950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FOptimisedDelta::OnDownloadComplete'::__l2::<lambda_1>::operator()(void *this)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  char cVar7;
  bool bVar8;
  FBuildPatchAppManifest *pFVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar13;
  FString *pFVar14;
  byte bVar15;
  longlong lVar16;
  FStaticBasicLogRecord *pFVar17;
  int iVar18;
  uint uVar19;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [8];
  TSharedPtr<FBuildPatchAppManifest,1> local_170;
  TSharedRef<FBuildPatchAppManifest,1> local_160;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_150;
  uint uStack_148;
  uint uStack_144;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  undefined4 uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  TRawPtrProxy<FBuildPatchAppManifest> local_118;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TSharedPtr<FBuildPatchAppManifest,1> local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong lStack_50;
  int local_48;
  longlong local_44;
  longlong lStack_3c;
  int local_34;
  ulonglong local_30;
  FBuildPatchAppManifest *pFVar20;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  cVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
  if (cVar7 == '\0') {
    lVar16 = *(longlong *)this;
    iVar18 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))();
    if ((iVar18 - 400U < 100) || (*(int *)(lVar16 + 0x58) <= *(int *)(lVar16 + 0x98))) {
      if (4 < (byte)LogOptimisedDelta._0_1_) {
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
      }
      *(wchar_t **)(*(longlong *)this + 0x100) =
           BuildPatchServices::DownloadErrorCodes::MissingDeltaFile;
      BuildPatchServices::FOptimisedDelta::SetFailedDownload(*(FOptimisedDelta **)this);
    }
    else {
      *(int *)(*(longlong *)this + 0x98) = *(int *)(*(longlong *)this + 0x98) + 1;
      if (4 < (byte)LogOptimisedDelta._0_1_) {
        uVar2 = *(undefined4 *)(*(longlong *)this + 0x58);
        uVar3 = *(undefined4 *)(*(longlong *)this + 0x98);
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))();
        local_180 = CONCAT44(local_180._4_4_,uVar2);
        local_188 = CONCAT44(local_188._4_4_,uVar3);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
      }
      lVar16 = *(longlong *)this;
      *(int *)(lVar16 + 0x94) =
           (*(int *)(lVar16 + 0x98) + *(int *)(lVar16 + 0x94)) % *(int *)(lVar16 + 0x30);
      lVar16 = *(longlong *)this;
      uVar24 = *(uint *)(lVar16 + 0x94);
      plVar5 = *(longlong **)(lVar16 + 0x40);
      pcVar4 = *(code **)(*plVar5 + 8);
      uVar19 = 0;
      if ((int)uVar24 < *(int *)(lVar16 + 0x30)) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_188 = (longlong)(int)uVar24, local_180 = (longlong)*(int *)(lVar16 + 0x30),
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = ::operator/(&local_c0,
                            (FString *)((longlong)(int)uVar24 * 0x10 + *(longlong *)(lVar16 + 0x28))
                            ,(FString *)(lVar16 + 0x48));
      (*pcVar4)(plVar5,pFVar14,lVar16 + 0xb8,lVar16 + 0xa0);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_170.Object = (FBuildPatchAppManifest *)0x0;
    local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = ::operator_new(0x2b8);
    pFVar20 = (FBuildPatchAppManifest *)0x0;
    uVar24 = 0;
    local_118.Object = pFVar20;
    if (pFVar9 != (FBuildPatchAppManifest *)0x0) {
      local_118.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(pFVar9);
    }
    TSharedRef<FBuildPatchAppManifest,1>::
    TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>(&local_160,&local_118);
    pFVar9 = local_160.Object;
    pcVar4 = *(code **)((local_160.Object)->_padding_ + 0x160);
    uVar10 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x20))();
    cVar7 = (*pcVar4)(pFVar9,uVar10);
    uVar19 = 0;
    if (cVar7 == '\0') {
      *(wchar_t **)(*(longlong *)this + 0x100) =
           BuildPatchServices::DownloadErrorCodes::UnserialisableDeltaFile;
    }
    else {
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      local_88 = (uint *)0x0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      (**(code **)((local_160.Object)->_padding_ + 0x1b8))
                (local_160.Object,
                 (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      uVar23 = local_80;
      uStack_144 = 1;
      uStack_134 = uVar19;
      local_130 = uVar19;
      if (local_80 != 0) {
        puVar21 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar21 = local_88;
        }
        uVar22 = *puVar21;
        pFVar9 = pFVar20;
        local_130 = uVar24;
        uVar19 = uVar24;
        while (uVar22 == 0) {
          iVar18 = (int)pFVar20;
          local_130 = (int)pFVar9 + 0x20;
          pFVar9 = (FBuildPatchAppManifest *)(ulonglong)local_130;
          uVar19 = iVar18 + 1;
          pFVar20 = (FBuildPatchAppManifest *)(ulonglong)uVar19;
          uStack_134 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
          goto LAB_143299ac0;
          uVar22 = puVar21[(longlong)iVar18 + 1];
        }
        uStack_144 = -uVar22 & uVar22;
        uVar1 = (ulonglong)uStack_144 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_120 = (int)lVar16;
        uStack_134 = (local_130 - 1) + local_120;
        if ((int)local_80 < (int)uStack_134) {
          uStack_134 = local_80;
        }
      }
LAB_143299ac0:
      local_140 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      uVar22 = local_80 & 0xffffffe0;
      iStack_128 = local_a8._8_4_ - local_74;
      uStack_138 = 0xffffffff;
      TStack_108.CurrentBitIndex = uStack_134;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      TStack_108._padding_ = CONCAT44(uStack_144,uVar19);
      iVar18 = (int)local_80 >> 5;
      TStack_108._28_4_ = uStack_134;
      TStack_108.BaseBitIndex = local_130;
      uStack_e8 = CONCAT44(uStack_124,iStack_128);
      bVar15 = (byte)local_80;
      local_150 = (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_a8;
      uStack_148 = uVar19;
      uStack_12c = uStack_134;
      local_110 = (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_a8;
      TStack_108.Array = local_140;
      if (((int)local_80 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar23 != local_80) {
        puVar21 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar21 = local_88;
        }
        uVar19 = -1 << (bVar15 & 0x1f) & puVar21[iVar18];
        while (uVar19 == 0) {
          lVar16 = (longlong)iVar18;
          uVar22 = uVar22 + 0x20;
          iVar18 = iVar18 + 1;
          uVar23 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_143299bc4;
          uVar19 = puVar21[lVar16 + 1];
        }
        uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_11c = (int)lVar16;
        uVar23 = local_11c + -1 + uVar22;
        if ((int)local_80 < (int)uVar23) {
          uVar23 = local_80;
        }
      }
LAB_143299bc4:
      while( true ) {
        pTVar6 = local_110;
        if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
          local_178[0] = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
        }
        if (((TStack_108.CurrentBitIndex == uVar23) &&
            (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
           (pTVar6 == (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8)) {
          pTVar13 = FBuildMergeManifests::MergeDeltaManifest
                              (&local_e0,
                               (TSharedRef<FBuildPatchAppManifest,1> *)(*(longlong *)this + 0x18),
                               &local_160);
          if (&local_170 != pTVar13) {
            local_170.Object = pTVar13->Object;
            pTVar13->Object = (FBuildPatchAppManifest *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_170.SharedReferenceCount,&pTVar13->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e0.SharedReferenceCount.ReferenceController);
          if (local_170.Object != (FBuildPatchAppManifest *)0x0) goto LAB_143299d7b;
          if ((byte)LogOptimisedDelta._0_1_ < 5) goto LAB_143299d6a;
          pFVar17 = &::LOG_Static;
          goto LAB_143299d5e;
        }
        lVar16 = *(longlong *)pTVar6 + (longlong)TStack_108.CurrentBitIndex * 0x18;
        lVar11 = (**(code **)(**(longlong **)(*(longlong *)this + 0x18) + 0x1f8))
                           (*(longlong **)(*(longlong *)this + 0x18),lVar16);
        lVar12 = (**(code **)((local_160.Object)->_padding_ + 0x1f8))(local_160.Object,lVar16);
        if ((lVar11 == 0) || (lVar12 == 0)) {
          if ((byte)LogOptimisedDelta._0_1_ < 5) goto LAB_143299d6a;
          pFVar17 = &::LOG_Static;
          goto LAB_143299d5e;
        }
        local_48 = 0;
        local_34 = 0;
        local_58 = 0;
        lStack_50 = 0;
        local_44 = 0;
        lStack_3c = 0;
        (**(code **)(**(longlong **)(*(longlong *)this + 0x18) + 0xb8))
                  (*(longlong **)(*(longlong *)this + 0x18),lVar16,&local_58);
        (**(code **)((local_160.Object)->_padding_ + 0xb8))(local_160.Object,lVar16,&local_44);
        if (((local_58 != local_44) || (lStack_50 != lStack_3c)) || (local_48 != local_34)) break;
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      if (4 < (byte)LogOptimisedDelta._0_1_) {
        pFVar17 = &::LOG_Static;
LAB_143299d5e:
        UE::Logging::Private::BasicLog<5>(pFVar17,(FLogCategoryBase *)&LogOptimisedDelta);
      }
LAB_143299d6a:
      *(wchar_t **)(*(longlong *)this + 0x100) =
           BuildPatchServices::DownloadErrorCodes::RejectedDeltaFile;
LAB_143299d7b:
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
    }
    if (local_170.Object == (FBuildPatchAppManifest *)0x0) {
      lVar16 = *(longlong *)this;
      iVar18 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))();
      if ((iVar18 - 400U < 100) || (*(int *)(lVar16 + 0x58) <= *(int *)(lVar16 + 0x98))) {
        if (4 < (byte)LogOptimisedDelta._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
        }
        BuildPatchServices::FOptimisedDelta::SetFailedDownload(*(FOptimisedDelta **)this);
      }
      else {
        *(int *)(*(longlong *)this + 0x98) = *(int *)(*(longlong *)this + 0x98) + 1;
        if (4 < (byte)LogOptimisedDelta._0_1_) {
          local_188 = CONCAT44(local_188._4_4_,*(undefined4 *)(*(longlong *)this + 0x58));
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
        }
        lVar16 = *(longlong *)this;
        *(int *)(lVar16 + 0x94) =
             (*(int *)(lVar16 + 0x98) + *(int *)(lVar16 + 0x94)) % *(int *)(lVar16 + 0x30);
        lVar16 = *(longlong *)this;
        uVar19 = *(uint *)(lVar16 + 0x94);
        plVar5 = *(longlong **)(lVar16 + 0x40);
        pcVar4 = *(code **)(*plVar5 + 8);
        if ((int)uVar19 < *(int *)(lVar16 + 0x30)) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (local_188 = (longlong)(int)uVar19, local_180 = (longlong)*(int *)(lVar16 + 0x30),
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = ::operator/(&local_d0,
                              (FString *)
                              ((longlong)(int)uVar19 * 0x10 + *(longlong *)(lVar16 + 0x28)),
                              (FString *)(lVar16 + 0x48));
        (*pcVar4)(plVar5,pFVar14,lVar16 + 0xb8,lVar16 + 0xa0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (4 < (byte)LogOptimisedDelta._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
      }
      lVar16 = *(longlong *)this;
      lVar11 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x20))();
      LOCK();
      *(undefined4 *)(lVar16 + 0xf8) = *(undefined4 *)(lVar11 + 8);
      UNLOCK();
      BuildPatchServices::FOptimisedDelta::SetResult(*(FOptimisedDelta **)this,&local_170);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetMetaDownloadSize @ 1432d7130

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

int __thiscall BuildPatchServices::FOptimisedDelta::GetMetaDownloadSize(FOptimisedDelta *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->ChunkDeltaFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->ChunkDeltaFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->ChunkDeltaFuture + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  return (this->DownloadedBytes).Counter;
}

// GetResult @ 1432d9320

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> * __thiscall
BuildPatchServices::FOptimisedDelta::GetResult(FOptimisedDelta *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *pTVar5;
  
  if (*(longlong *)&this->ChunkDeltaFuture == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)(*pcVar3)();
      return pTVar5;
    }
    if (*(longlong *)&this->ChunkDeltaFuture == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)(*pcVar3)();
        return pTVar5;
      }
    }
  }
  lVar1 = *(longlong *)&this->ChunkDeltaFuture;
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  pTVar5 = *(TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> **)(lVar1 + 0x70);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x78);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar5 == (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\OptimisedDelta.cpp"
                       ,0x6a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)(*pcVar3)();
      return pTVar5;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)(*pcVar3)();
      return pTVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pTVar5;
}

// OnDownloadComplete @ 1432dee30

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
BuildPatchServices::FOptimisedDelta::OnDownloadComplete
          (FOptimisedDelta *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  IDownload *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTaskBase *this_00;
  
  if (4 < (byte)LogOptimisedDelta._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
  }
  pIVar3 = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`BuildPatchServices::FOptimisedDelta::OnDownloadComplete'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\OptimisedDelta.cpp(143)"
               ,BackgroundHigh,None,None);
    this_00[1]._padding_ = (longlong)this;
    *(int *)&this_00[1]._padding_ = param_1;
    this_00[1]._padding_ = (longlong)pIVar3;
    this_00[1]._padding_ = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`BuildPatchServices::FOptimisedDelta::OnDownloadComplete'::`2'::<lambda_1>_>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// RequiresChunkDownload @ 1432eaa60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall BuildPatchServices::FOptimisedDelta::RequiresChunkDownload(FOptimisedDelta *this)

{
  FBuildPatchAppManifest *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  FString *pFVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  FString *local_28;
  int local_20;
  
  if ((this->Configuration).SourceManifest.Object != (FBuildPatchAppManifest *)0x0) {
    pFVar1 = (this->Configuration).DestinationManifest.Object;
    (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,&local_28);
    iVar3 = local_20;
    pFVar9 = local_28 + local_20;
    pFVar8 = local_28;
    while( true ) {
      if (local_20 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar9) {
        DestructItems<FString,int>(local_28,local_20);
        if (local_28 != (FString *)0x0) {
          FMemory::Free(local_28);
        }
        return false;
      }
      if (((this->Configuration).SourceManifest.Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = (this->Configuration).SourceManifest.Object;
      lVar6 = (**(code **)(pFVar1->_padding_ + 0x1f8))(pFVar1,pFVar8);
      pFVar1 = (this->Configuration).DestinationManifest.Object;
      lVar7 = (**(code **)(pFVar1->_padding_ + 0x1f8))(pFVar1,pFVar8);
      if ((((lVar6 == 0) || (*(longlong *)(lVar6 + 0x20) != *(longlong *)(lVar7 + 0x20))) ||
          (*(longlong *)(lVar6 + 0x28) != *(longlong *)(lVar7 + 0x28))) ||
         (*(int *)(lVar6 + 0x30) != *(int *)(lVar7 + 0x30))) break;
      pFVar8 = pFVar8 + 1;
    }
    DestructItems<FString,int>(local_28,local_20);
    if (local_28 != (FString *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return true;
}

// SetFailedDownload @ 1432ed6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FOptimisedDelta::SetFailedDownload(FOptimisedDelta *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auStack_98 [32];
  TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1> local_78;
  TSharedPtr<FBuildPatchAppManifest,1> local_68;
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->DeltaPolicy == TryFetchContinueWithout) {
    if (4 < (byte)LogOptimisedDelta._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
    }
    local_68.Object = (this->Configuration).DestinationManifest.Object;
    local_68.SharedReferenceCount.ReferenceController =
         (this->Configuration).DestinationManifest.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetResult(this,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    if (4 < (byte)LogOptimisedDelta._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOptimisedDelta);
    }
    pTVar3 = ::operator_new(0x28);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
      pTVar6 = ___xmm_00000000000000000000000000000010;
      pTVar7 = _UNK_150651568;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TValueOrError_V__TSharedPtr_VFBuildPatchAppManifest___00__VFString_____00_SharedPointerInternals__6B_
      ;
      ::FString::FString((FString *)(pTVar3 + 1),this->ErrorCode);
      pTVar8 = pTVar3 + 1;
      *(undefined1 *)&pTVar3[2]._padding_ = 1;
      if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = pTVar8;
      pTVar7 = pTVar3;
    }
    local_78.Object = (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)pTVar6;
    local_78.SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58 = *(code **)&this->OnComplete;
    local_30 = *(longlong **)&(this->OnComplete).field_0x28;
    *(undefined8 *)&(this->OnComplete).field_0x28 = 0;
    local_38 = *(undefined8 *)&(this->OnComplete).field_0x20;
    local_48 = *(longlong *)&(this->OnComplete).field_0x10;
    uStack_40 = *(undefined8 *)&(this->OnComplete).field_0x18;
    if (local_58 != (code *)0x0) {
      *(undefined8 *)&this->OnComplete = 0;
    }
    TPromise<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_>::SetValue
              (&this->ChunkDeltaPromise,&local_78);
    if (local_58 != (code *)0x0) {
      if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::Core::Private::Function::CheckCallable(local_58);
      pcVar1 = local_58;
      plVar5 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar5 = local_30;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,pTVar6);
      if (local_58 != (code *)0x0) {
        plVar5 = &local_48;
        if (local_30 != (longlong *)0x0) {
          plVar5 = local_30;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// SetResult @ 1432eddc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FOptimisedDelta::SetResult
          (FOptimisedDelta *this,TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auStack_88 [32];
  TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1> local_68;
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar7 = _UNK_150651568;
    pTVar8 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TValueOrError_V__TSharedPtr_VFBuildPatchAppManifest___00__VFString_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)param_1->Object;
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar3[1].SharedReferenceCount = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = pTVar3 + 1;
    *(undefined1 *)&pTVar3[2]._padding_ = 0;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar3;
    pTVar8 = pTVar6;
  }
  local_68.Object = (TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)pTVar8;
  local_68.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_58 = *(code **)&this->OnComplete;
  local_30 = *(longlong **)&(this->OnComplete).field_0x28;
  *(undefined8 *)&(this->OnComplete).field_0x28 = 0;
  local_38 = *(undefined8 *)&(this->OnComplete).field_0x20;
  local_48 = *(longlong *)&(this->OnComplete).field_0x10;
  uStack_40 = *(undefined8 *)&(this->OnComplete).field_0x18;
  if (local_58 != (code *)0x0) {
    *(undefined8 *)&this->OnComplete = 0;
  }
  TPromise<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_>::SetValue
            (&this->ChunkDeltaPromise,&local_68);
  if (local_58 != (code *)0x0) {
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UE::Core::Private::Function::CheckCallable(local_58);
    pcVar1 = local_58;
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,pTVar8);
    if (local_58 != (code *)0x0) {
      plVar5 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar5 = local_30;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// ShouldRetry @ 1432ee2d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FOptimisedDelta::ShouldRetry
          (FOptimisedDelta *this,TSharedRef<BuildPatchServices::IDownload,1> *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)((longlong)*param_1->Object + 0x18))();
  if ((99 < iVar1 - 400U) && (this->RetryCount < this->DeltaRetries)) {
    return true;
  }
  return false;
}

