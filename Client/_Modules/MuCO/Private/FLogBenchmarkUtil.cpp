// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 9

// FLogBenchmarkUtil @ 14abbc6e0

FLogBenchmarkUtil * __thiscall FLogBenchmarkUtil::FLogBenchmarkUtil(FLogBenchmarkUtil *this)

{
  (this->NumAllocatedTextures).Value = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->NumAllocatedTextures).LockNumAllocatedTextures,4000);
  (this->TextureGPUSize).Value = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->TextureGPUSize).LockTextureGPUSize,4000);
  (this->NumAllocatedSkeletalMeshes).Value = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->NumAllocatedSkeletalMeshes).LockNumAllocatedSkeletalMeshes,
             4000);
  (this->NumInstances).Value = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->NumInstances).LockNumInstances,4000);
  (this->NumPendingInstanceUpdates).Value = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->NumPendingInstanceUpdates).LockNumPendingInstanceUpdates,
             4000);
  (this->NumBuiltInstances).Value = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->NumBuiltInstances).LockNumBuiltInstances,4000);
  (this->InstanceBuildTimeAvrg).Value = 0.0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->InstanceBuildTimeAvrg).LockInstanceBuildTimeAvrg,4000);
  (this->TextureTrackerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureTrackerArray).ArrayNum = 0;
  (this->TextureTrackerArray).ArrayMax = 0;
  this->TotalUpdateTime = 0.0;
  this->NumUpdates = 0;
  (this->Archive).Object = (FArchive *)0x0;
  (this->Archive).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnMeshUpdateReported = 0;
  *(undefined8 *)&(this->OnMeshUpdateReported).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshUpdateReported).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshUpdateReported).field_0x18 = 2;
  *(undefined8 *)&this->OnImageUpdateReported = 0;
  *(undefined8 *)&(this->OnImageUpdateReported).field_0x8 = 0;
  *(undefined8 *)&(this->OnImageUpdateReported).field_0x10 = 0;
  *(undefined8 *)&(this->OnImageUpdateReported).field_0x18 = 2;
  return this;
}

// ~FLogBenchmarkUtil @ 14ac0c9e0

void __thiscall FLogBenchmarkUtil::~FLogBenchmarkUtil(FLogBenchmarkUtil *this)

{
  FArchive *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Archive).Object;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x210))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnImageUpdateReported).field_0x8,
             *(int *)&(this->OnImageUpdateReported).field_0x10);
  pvVar2 = *(void **)&(this->OnImageUpdateReported).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImageUpdateReported);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshUpdateReported).field_0x8,
             *(int *)&(this->OnMeshUpdateReported).field_0x10);
  pvVar2 = *(void **)&(this->OnMeshUpdateReported).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshUpdateReported);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Archive).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->TextureTrackerArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->InstanceBuildTimeAvrg).LockInstanceBuildTimeAvrg);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->NumBuiltInstances).LockNumBuiltInstances);
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->NumPendingInstanceUpdates).LockNumPendingInstanceUpdates);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->NumInstances).LockNumInstances);
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->NumAllocatedSkeletalMeshes).LockNumAllocatedSkeletalMeshes)
  ;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->TextureGPUSize).LockTextureGPUSize);
                    /* WARNING: Could not recover jumptable at 0x00014ac0cad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->NumAllocatedTextures).LockNumAllocatedTextures);
  return;
}

// AddTexture @ 14ac147e0

void __thiscall FLogBenchmarkUtil::AddTexture(FLogBenchmarkUtil *this,UTexture2D *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FWeakObjectPtr *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  UTexture2D *local_res18 [2];
  FWeakObjectPtr local_18 [2];
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\LogBenchmarkUtil.cpp"
                       ,0x78,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar5 = CVarEnableBenchmark.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      lVar8 = 1;
      goto LAB_14ac14846;
    }
  }
  lVar8 = 0;
LAB_14ac14846:
  if ((pTVar5->ShadowedValue[lVar8] != false) || (bIsEnabledOverride != false)) {
    pTVar2 = &this->TextureTrackerArray;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_18[0].ObjectIndex = 0;
    local_18[0].ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_18,(FObjectPtr)local_res18);
    pFVar3 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= local_18) && (local_18 < pFVar3 + (this->TextureTrackerArray).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->TextureTrackerArray).ArrayNum;
    piVar1 = &(this->TextureTrackerArray).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->TextureTrackerArray).ArrayNum = iVar7 + 1;
    *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
  }
  return;
}

// FinishUpdateImage @ 14ac1bc00

void __thiscall
FLogBenchmarkUtil::FinishUpdateImage
          (FLogBenchmarkUtil *this,FString *param_1,FString *param_2,FString *param_3,bool param_4,
          double param_5,long64 param_6,long64 param_7)

{
  TSharedPtr<FArchive,1> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  longlong lVar7;
  TSharedPtr<FArchive,1> *pTVar8;
  FInstanceUpdateStats *pFVar9;
  FInstanceUpdateStats *pFVar10;
  FInstanceUpdateStats local_248;
  FString local_198;
  TSharedPtr<FArchive,1> local_188;
  FInstanceUpdateStats local_178;
  FInstanceUpdateStats local_d0;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\LogBenchmarkUtil.cpp"
                         ,0x17a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = CVarEnableBenchmark.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar7 = 1;
    if (!bVar6) goto LAB_14ac1bc81;
  }
  lVar7 = 0;
LAB_14ac1bc81:
  if ((pTVar5->ShadowedValue[lVar7] != false) || (bIsEnabledOverride != false)) {
    pTVar1 = &this->Archive;
    if (pTVar1->Object == (FArchive *)0x0) {
      pTVar8 = CreateFile(&local_188);
      if (pTVar1 != pTVar8) {
        pTVar1->Object = pTVar8->Object;
        pTVar8->Object = (FArchive *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Archive).SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
    }
    FInstanceUpdateStats::FInstanceUpdateStats(&local_248);
    ::FString::operator=(&local_248.UpdateType,L"Image");
    if (&local_248 != (FInstanceUpdateStats *)param_1) {
      iVar2 = (param_1->Data).ArrayNum;
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      local_248.CustomizableObjectPathName.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_248.CustomizableObjectPathName.Data.ArrayMax == 0)) {
        local_248.CustomizableObjectPathName.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_248.CustomizableObjectPathName.Data.ArrayMax,
                   (ForAnyElementType *)&local_248,iVar2,
                   &local_248.CustomizableObjectPathName.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_248.CustomizableObjectPathName.Data.AllocatorInstance.Data,pFVar3,
                 (longlong)iVar2 * 2);
        }
      }
    }
    if (&local_248.CustomizableObjectInstancePathName != param_2) {
      iVar2 = (param_2->Data).ArrayNum;
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      local_248.CustomizableObjectInstancePathName.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_248.CustomizableObjectInstancePathName.Data.ArrayMax == 0)) {
        local_248.CustomizableObjectInstancePathName.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_248.CustomizableObjectInstancePathName.Data.ArrayMax,
                   (ForAnyElementType *)&local_248.CustomizableObjectInstancePathName,iVar2,
                   &local_248.CustomizableObjectInstancePathName.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_248.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data,pFVar3,
                 (longlong)iVar2 * 2);
        }
      }
    }
    if (&local_248.Descriptor != param_3) {
      iVar2 = (param_3->Data).ArrayNum;
      pFVar3 = (param_3->Data).AllocatorInstance.Data;
      local_248.Descriptor.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_248.Descriptor.Data.ArrayMax == 0)) {
        local_248.Descriptor.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_248.Descriptor.Data.ArrayMax,
                   (ForAnyElementType *)&local_248.Descriptor,iVar2,
                   &local_248.Descriptor.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_248.Descriptor.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
        }
      }
    }
    local_248.TaskUpdateImageTime = param_5 * __real_408f400000000000;
    local_248.bLevelBegunPlay = param_4;
    local_248.TaskUpdateImageRealPeakMemory = (double)param_7 * __real_3eb0000000000000;
    local_248.TaskUpdateImagePeakMemory = (double)param_6 * __real_3eb0000000000000;
    ::FString::PrintfImpl(&local_198,L"%s;%s;%s;%s;;%s;;;;;;;;;;;%f;%f;%f");
    if ((pTVar1->Object == (FArchive *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LogBenchmarkUtil::Write(pTVar1->Object,&local_198);
    if ((pTVar1->Object == (FArchive *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)pTVar1->Object + 0x208))();
    pFVar9 = FInstanceUpdateStats::FInstanceUpdateStats(&local_178,&local_248);
    pFVar10 = FInstanceUpdateStats::FInstanceUpdateStats(&local_d0,pFVar9);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FInstanceUpdateStats),FDefaultDelegateUserPolicy>,FInstanceUpdateStats>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnImageUpdateReported,
               pFVar10);
    pFVar3 = (pFVar9->Descriptor).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar9->UpdateType).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar9->CustomizableObjectInstancePathName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar9->CustomizableObjectPathName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_248.Descriptor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Descriptor.Data.AllocatorInstance.Data);
    }
    if (local_248.UpdateType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.UpdateType.Data.AllocatorInstance.Data);
    }
    if (local_248.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data);
    }
    if (local_248.CustomizableObjectPathName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.CustomizableObjectPathName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FinishUpdateMesh @ 14ac1c050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogBenchmarkUtil::FinishUpdateMesh
          (FLogBenchmarkUtil *this,TSharedRef<FUpdateContextPrivate,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  FName FVar2;
  FUpdateContextPrivate *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_MutableInstanceBuildTimeAvrg> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  UCustomizableObjectInstance *this_02;
  UCustomizableObject *pUVar13;
  TSharedPtr<FArchive,1> *pTVar14;
  UCustomizableObjectPrivate *this_03;
  USkeletalMesh *pUVar15;
  longlong *plVar16;
  UCustomizableObjectInstance *this_04;
  FInstanceUpdateStats *pFVar17;
  FString *pFVar18;
  UPackage *pUVar19;
  UEnum *this_05;
  FInstanceUpdateStats *pFVar20;
  longlong lVar21;
  atomic<int> *paVar22;
  uint uVar23;
  longlong *plVar24;
  TSharedPtr<FArchive,1> *this_06;
  longlong lVar25;
  uchar auVar26 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_358;
  FString local_350;
  FInstanceUpdateStats local_338;
  FName local_288;
  FName local_280;
  UCustomizableObject *local_278;
  UCustomizableObjectInstance *local_270;
  TSharedPtr<FArchive,1> *local_268;
  FName local_260;
  FStatMessage local_258;
  FString local_248;
  longlong *local_238;
  longlong *plStack_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *plStack_218;
  int local_210;
  undefined4 uStack_20c;
  TSharedRef<FUpdateContextPrivate,1> local_208;
  FString local_1f8;
  FName local_1e8;
  TSharedPtr<FArchive,1> local_1e0;
  FString local_1d0;
  FString local_1c0;
  FInstanceUpdateStats local_1b0;
  FInstanceUpdateStats local_108;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\LogBenchmarkUtil.cpp"
                         ,0x117,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = CVarEnableBenchmark.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 1;
  }
  if ((pTVar7->ShadowedValue[lVar10] != false) || (bIsEnabledOverride != false)) {
    lpCriticalSection = &(this->InstanceBuildTimeAvrg).LockInstanceBuildTimeAvrg;
    dVar1 = param_1->Object->UpdateTime;
    this->NumUpdates = this->NumUpdates + 1;
    uVar23 = this->NumUpdates;
    dVar1 = dVar1 + this->TotalUpdateTime;
    this->TotalUpdateTime = dVar1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->InstanceBuildTimeAvrg).Value = dVar1 / (double)uVar23;
    FVar12 = StatPtr_STAT_MutableInstanceBuildTimeAvrg;
    if (StatPtr_STAT_MutableInstanceBuildTimeAvrg ==
        (FThreadSafeStaticStat<FStat_STAT_MutableInstanceBuildTimeAvrg>)0x0) {
      pFVar11 = ::FName::FName(&local_1e8,"STAT_MutableInstanceBuildTimeAvrg");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_MutableInstanceBuildTimeAvrg>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableInstanceBuildTimeAvrg,
                          *pFVar11,L"Avrg Instance Build Time","STATGROUP_Mutable",
                          "STATCAT_Advanced",L"Mutable",true,false,ST_int64,false,false,MCR_Invalid)
      ;
    }
    FVar2 = *(FName *)FVar12;
    auVar26 = (uchar  [8])(longlong)(this->InstanceBuildTimeAvrg).Value;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_258.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_288 = FVar2;
      local_258.StatData.Pad = auVar26;
      local_258.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_258);
      FStatsTrace::Set(&local_288,(long64)auVar26);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_02 = (UCustomizableObjectInstance *)
              FWeakObjectPtr::Get(&(param_1->Object->Instance).WeakPtr);
    if ((this_02 != (UCustomizableObjectInstance *)0x0) &&
       (local_270 = this_02, pUVar13 = UCustomizableObjectInstance::GetCustomizableObject(this_02),
       pUVar13 != (UCustomizableObject *)0x0)) {
      this_06 = &this->Archive;
      local_278 = pUVar13;
      local_268 = this_06;
      if (this_06->Object == (FArchive *)0x0) {
        pTVar14 = CreateFile(&local_1e0);
        TSharedPtr<FArchive,1>::operator=(this_06,pTVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e0.SharedReferenceCount.ReferenceController);
      }
      local_358 = 0;
      uVar23 = 0;
      iVar9 = UCustomizableObject::GetComponentCount(pUVar13);
      if (0 < iVar9) {
        do {
          this_03 = UCustomizableObject::GetPrivate(pUVar13);
          UCustomizableObjectPrivate::GetComponentName
                    (this_03,(FCustomizableObjectComponentIndex)(int)&local_280);
          pUVar15 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh(this_02,&local_280);
          plVar24 = local_238;
          if (pUVar15 != (USkeletalMesh *)0x0) {
            plVar16 = (longlong *)(**(code **)(pUVar15->_padding_ + 0x398))(pUVar15);
            if ((plVar16 == (longlong *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RenderData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\LogBenchmarkUtil.cpp"
                                   ,0x13e,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar24 = (longlong *)*plVar16;
            plStack_230 = plVar16 + 1;
            local_210 = (int)*plStack_230;
            plVar16 = plVar24 + local_210;
            local_228 = CONCAT44(uStack_20c,local_210);
            local_238 = plVar24;
            local_220 = plVar24;
            plStack_218 = plStack_230;
            while( true ) {
              if ((int)*plStack_230 != (int)local_228) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              pUVar13 = local_278;
              this_02 = local_270;
              if (plVar24 == plVar16) break;
              lVar10 = *plVar24;
              iVar9 = *(int *)(lVar10 + 0x18);
              lVar21 = *(longlong *)(lVar10 + 0x10);
              lVar25 = (longlong)iVar9 * 0x118 + lVar21;
              while( true ) {
                if (*(int *)(lVar10 + 0x18) != iVar9) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res20);
                }
                if (lVar21 == lVar25) break;
                uVar23 = uVar23 + *(int *)(lVar21 + 8);
                lVar21 = lVar21 + 0x118;
              }
              plVar24 = plVar24 + 1;
            }
          }
          local_238 = plVar24;
          local_358 = local_358 + 1;
          iVar9 = UCustomizableObject::GetComponentCount(pUVar13);
          this_06 = local_268;
        } while (local_358 < iVar9);
      }
      ::FString::FString(&local_338.CustomizableObjectPathName,"");
      ::FString::FString(&local_338.CustomizableObjectInstancePathName,"");
      ::FString::FString(&local_338.UpdateType,"");
      ::FString::FString(&local_338.Descriptor,"");
      local_338.UpdateResult = Error;
      local_338.bLevelBegunPlay = false;
      local_338.UpdateTime = 0.0;
      local_338.TaskGetMeshTime = 0.0;
      local_338.QueueTime = 0.0;
      local_338.TaskUpdateImageRealPeakMemory = 0.0;
      local_338.TaskLockCacheTime = 0.0;
      local_338.TaskGetImagesTime = 0.0;
      local_338.TaskConvertResourcesTime = 0.0;
      local_338.TaskCallbacksTime = 0.0;
      local_338.UpdatePeakMemory = 0.0;
      local_338.UpdateRealPeakMemory = 0.0;
      local_338.TaskUpdateImageTime = 0.0;
      local_338.TaskUpdateImagePeakMemory = 0.0;
      local_338.TriangleCount = 0;
      ::FString::operator=(&local_338.UpdateType,L"Mesh");
      this_04 = (UCustomizableObjectInstance *)
                FWeakObjectPtr::Get(&(param_1->Object->Instance).WeakPtr);
      pUVar13 = UCustomizableObjectInstance::GetCustomizableObject(this_04);
      pFVar17 = (FInstanceUpdateStats *)
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar13,&local_1d0,(UObject *)0x0);
      if (&local_338 != pFVar17) {
        if (local_338.CustomizableObjectPathName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.CustomizableObjectPathName.Data.AllocatorInstance.Data);
        }
        local_338.CustomizableObjectPathName.Data.AllocatorInstance.Data =
             (pFVar17->CustomizableObjectPathName).Data.AllocatorInstance.Data;
        (pFVar17->CustomizableObjectPathName).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_338.CustomizableObjectPathName.Data.ArrayNum =
             (pFVar17->CustomizableObjectPathName).Data.ArrayNum;
        local_338.CustomizableObjectPathName.Data.ArrayMax =
             (pFVar17->CustomizableObjectPathName).Data.ArrayMax;
        (pFVar17->CustomizableObjectPathName).Data.ArrayNum = 0;
        (pFVar17->CustomizableObjectPathName).Data.ArrayMax = 0;
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      pFVar18 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_02,&local_1c0,(UObject *)0x0);
      if (&local_338.CustomizableObjectInstancePathName != pFVar18) {
        if (local_338.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data);
        }
        local_338.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data =
             (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_338.CustomizableObjectInstancePathName.Data.ArrayNum = (pFVar18->Data).ArrayNum;
        local_338.CustomizableObjectInstancePathName.Data.ArrayMax = (pFVar18->Data).ArrayMax;
        (pFVar18->Data).ArrayNum = 0;
        (pFVar18->Data).ArrayMax = 0;
      }
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      pFVar3 = param_1->Object;
      if (Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar19 = Z_Construct_UPackage__Script_CustomizableObject();
        Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor,
                             (UObject *)pUVar19,L"CustomizableObjectInstanceDescriptor");
      }
      local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayNum = 0;
      local_350.Data.ArrayMax = 0;
      UScriptStruct::ExportText
                (Z_Registration_Info_UScriptStruct_FCustomizableObjectInstanceDescriptor.
                 OuterSingleton,&local_350,&pFVar3->CapturedDescriptor,(void *)0x0,(UObject *)0x0,
                 0x20805,(UObject *)0x0,true);
      if (local_338.Descriptor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Descriptor.Data.AllocatorInstance.Data);
      }
      pFVar3 = param_1->Object;
      local_338.Descriptor.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
      local_338.Descriptor.Data.ArrayNum = local_350.Data.ArrayNum;
      local_338.Descriptor.Data.ArrayMax = local_350.Data.ArrayMax;
      local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayNum = 0;
      local_350.Data.ArrayMax = 0;
      local_338.bLevelBegunPlay = pFVar3->bLevelBegunPlay;
      local_338.UpdateResult = pFVar3->UpdateResult;
      local_338.QueueTime = pFVar3->QueueTime * __real_408f400000000000;
      local_338.UpdateTime = pFVar3->UpdateTime * __real_408f400000000000;
      local_338.TaskGetMeshTime = pFVar3->TaskGetMeshTime * __real_408f400000000000;
      local_338.TaskLockCacheTime = pFVar3->TaskLockCacheTime * __real_408f400000000000;
      local_338.TaskGetImagesTime = pFVar3->TaskGetImagesTime * __real_408f400000000000;
      local_338.TaskConvertResourcesTime =
           pFVar3->TaskConvertResourcesTime * __real_408f400000000000;
      local_338.TaskCallbacksTime = pFVar3->TaskCallbacksTime * __real_408f400000000000;
      local_338.UpdatePeakMemory = (double)pFVar3->UpdateEndPeakBytes * __real_3eb0000000000000;
      local_338.UpdateRealPeakMemory =
           (double)pFVar3->UpdateEndRealPeakBytes * __real_3eb0000000000000;
      local_338.TriangleCount = uVar23;
      StaticEnum<enum_EUpdateResult>();
      this_05 = StaticEnum<enum_EUpdateResult>();
      if ((this_05 == (UEnum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UEnum::GetNameByValue(this_05,(long64)&local_260);
      ::FName::ToString(&local_260,&local_248);
      ::FString::PrintfImpl(&local_1f8,L"%s;%s;%s;%s;%s;%s;%u;%f;%f;%f;%f;%f;%f;%f;%f;%f");
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if ((this_06->Object == (FArchive *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LogBenchmarkUtil::Write(this_06->Object,&local_1f8);
      if ((this_06->Object == (FArchive *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(*(longlong *)this_06->Object + 0x208))();
      pFVar17 = FInstanceUpdateStats::FInstanceUpdateStats(&local_1b0,&local_338);
      local_208.Object = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        paVar22 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar22 = &pTVar4->SharedReferenceCount;
        LOCK();
        *paVar22 = (atomic<int>)((int)*paVar22 + 1);
        UNLOCK();
      }
      pFVar20 = FInstanceUpdateStats::FInstanceUpdateStats(&local_108,pFVar17);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar22 = (atomic<int>)((int)*paVar22 + 1);
        UNLOCK();
      }
      local_208.SharedReferenceCount.ReferenceController = pTVar4;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(TSharedRef<FUpdateContextPrivate,1>,FInstanceUpdateStats),FDefaultDelegateUserPolicy>,TSharedRef<FUpdateContextPrivate,1>,FInstanceUpdateStats>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnMeshUpdateReported,
                 &local_208,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar5 = (pFVar17->Descriptor).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar17->UpdateType).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar17->CustomizableObjectInstancePathName).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar17->CustomizableObjectPathName).Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_338.Descriptor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Descriptor.Data.AllocatorInstance.Data);
      }
      if (local_338.UpdateType.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.UpdateType.Data.AllocatorInstance.Data);
      }
      if (local_338.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.CustomizableObjectInstancePathName.Data.AllocatorInstance.Data);
      }
      if (local_338.CustomizableObjectPathName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.CustomizableObjectPathName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetInstancesStats @ 14ac1e4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FLogBenchmarkUtil::GetInstancesStats(FLogBenchmarkUtil *this,int *param_1,int *param_2,int *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UCustomizableInstancePrivate *pUVar7;
  UCustomizableObject *pUVar8;
  USkeletalMesh *pUVar9;
  int iVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  TObjectIterator<UCustomizableObjectInstance> local_58;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ObjectArray.ArrayNum = 0;
  local_58.ObjectArray.ArrayMax = 0;
  local_58.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
  GetObjectsOfClass(pUVar6,&local_58.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UCustomizableObjectInstance>::Advance(&local_58);
    lVar11 = (longlong)local_58.Index;
    if (local_58.Index < 0) break;
    if (local_58.ObjectArray.ArrayNum <= local_58.Index) break;
    uVar5 = 0;
    if (local_58.Index < local_58.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_58.Index >> 0x1f;
    }
    if (uVar5 == 0) {
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
    if ((*(longlong *)(local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8) != 0) &&
       ((*(uint *)(*(longlong *)(local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 8) >>
         0x1e & 1) == 0)) {
      lVar11 = (longlong)local_58.Index;
      uVar5 = 0;
      if (local_58.Index < local_58.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_58.Index >> 0x1f;
      }
      if (uVar5 == 0) {
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
      if ((*(uint *)(*(longlong *)(local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 8) &
          0x10) == 0) {
        lVar11 = (longlong)local_58.Index;
        *param_1 = *param_1 + 1;
        uVar5 = 0;
        if (local_58.Index < local_58.ObjectArray.ArrayNum) {
          uVar5 = (uint)~local_58.Index >> 0x1f;
        }
        if (uVar5 == 0) {
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
        pUVar7 = UCustomizableObjectInstance::GetPrivate
                           (*(UCustomizableObjectInstance **)
                             (local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8));
        if (pUVar7->SkeletalMeshStatus == Success) {
          *param_2 = *param_2 + 1;
        }
        lVar11 = (longlong)local_58.Index;
        uVar5 = 0;
        if (local_58.Index < local_58.ObjectArray.ArrayNum) {
          uVar5 = (uint)~local_58.Index >> 0x1f;
        }
        if (uVar5 == 0) {
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
        pUVar8 = UCustomizableObjectInstance::GetCustomizableObject
                           (*(UCustomizableObjectInstance **)
                             (local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8));
        if (pUVar8 != (UCustomizableObject *)0x0) {
          lVar11 = (longlong)local_58.Index;
          uVar5 = 0;
          if (local_58.Index < local_58.ObjectArray.ArrayNum) {
            uVar5 = (uint)~local_58.Index >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          UCustomizableObjectInstance::GetComponentNames
                    (*(UCustomizableObjectInstance **)
                      (local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8),&local_68);
          iVar10 = local_68.ArrayNum;
          pFVar1 = (FName *)(local_68.AllocatorInstance.Data + (longlong)iVar10 * 8);
          FVar12.Data = local_68.AllocatorInstance.Data;
          while( true ) {
            if (local_68.ArrayNum != iVar10) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if ((FName *)FVar12.Data == pFVar1) break;
            lVar11 = (longlong)local_58.Index;
            local_res18[0] = *(FName *)FVar12.Data;
            uVar5 = 0;
            if (local_58.Index < local_58.ObjectArray.ArrayNum) {
              uVar5 = (uint)~local_58.Index >> 0x1f;
            }
            if (uVar5 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            pUVar9 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh
                               (*(UCustomizableObjectInstance **)
                                 (local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8),
                                local_res18);
            if (pUVar9 != (USkeletalMesh *)0x0) {
              *param_3 = *param_3 + 1;
            }
            FVar12.Data = FVar12.Data + 8;
          }
          if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// IsBenchmarkingReportingEnabled @ 14ac278d0

bool __cdecl FLogBenchmarkUtil::IsBenchmarkingReportingEnabled(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarEnableBenchmark.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_14ac278f8;
    }
  }
  lVar3 = 0;
LAB_14ac278f8:
  if ((pTVar1->ShadowedValue[lVar3] == false) && (bIsEnabledOverride == false)) {
    return false;
  }
  return true;
}

// SetBenchmarkReportingStateOverride @ 14ac34900

void __cdecl FLogBenchmarkUtil::SetBenchmarkReportingStateOverride(bool param_1)

{
  bIsEnabledOverride = param_1;
  return;
}

// UpdateStats @ 14ac4bb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLogBenchmarkUtil::UpdateStats(FLogBenchmarkUtil *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  TArray<TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Dst;
  FName FVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UCustomizableObjectSystem *this_00;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_MutableNumInstances> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_MutableNumBuiltInstances> FVar14;
  FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedSkeletalMeshes> FVar15;
  FThreadSafeStaticStat<FStat_STAT_MutableNumPendingInstanceUpdates> FVar16;
  UTexture *this_01;
  FTextureResource *pFVar17;
  UObject *pUVar18;
  FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedTextures> FVar19;
  FThreadSafeStaticStat<FStat_STAT_MutableTextureGPUSize> FVar20;
  uint uVar21;
  uint uVar22;
  uchar auVar23 [8];
  longlong lVar24;
  uint uVar25;
  FNameEntryId FVar26;
  uint local_res10;
  uint uStackX_14;
  int local_res18 [2];
  int local_res20 [2];
  ulong64 local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\LogBenchmarkUtil.cpp"
                         ,0x85,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = CVarEnableBenchmark.Ref;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    lVar24 = 1;
    if (!bVar7) goto LAB_14ac4bbb7;
  }
  lVar24 = 0;
LAB_14ac4bbb7:
  if ((pTVar6->ShadowedValue[lVar24] == false) && (bIsEnabledOverride == false)) {
    return;
  }
  this_00 = UCustomizableObjectSystem::GetInstance();
  if ((this_00 == (UCustomizableObjectSystem *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("System",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x30b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res10 = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  GetInstancesStats(this,(int *)&local_res10,local_res18,local_res20);
  pFVar2 = &(this->NumInstances).LockNumInstances;
  if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    (this->NumInstances).Value = local_res10;
    FVar11 = StatPtr_STAT_MutableNumInstances;
    if (StatPtr_STAT_MutableNumInstances ==
        (FThreadSafeStaticStat<FStat_STAT_MutableNumInstances>)0x0) {
      pFVar10 = ::FName::FName(&local_70,"STAT_MutableNumInstances");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_MutableNumInstances>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumInstances,*pFVar10,
                          L"Num Instances","STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,
                          false,ST_int64,false,false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar11;
    auVar23 = (uchar  [8])(longlong)(this->NumInstances).Value;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_d0.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
      local_100 = FVar4;
      local_d0.StatData.Pad = auVar23;
      local_d0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_d0);
      FStatsTrace::Set(&local_100,(long64)auVar23);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    pFVar2 = &(this->NumBuiltInstances).LockNumBuiltInstances;
    if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      (this->NumBuiltInstances).Value = local_res18[0];
      FVar14 = StatPtr_STAT_MutableNumBuiltInstances;
      if (StatPtr_STAT_MutableNumBuiltInstances ==
          (FThreadSafeStaticStat<FStat_STAT_MutableNumBuiltInstances>)0x0) {
        pFVar10 = ::FName::FName(&local_68,"STAT_MutableNumBuiltInstances");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_MutableNumBuiltInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableNumBuiltInstances,
                            *pFVar10,L"Num Built Instances","STATGROUP_Mutable","STATCAT_Advanced",
                            L"Mutable",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar4 = *(FName *)FVar14;
      auVar23 = (uchar  [8])(longlong)(this->NumBuiltInstances).Value;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        local_c0.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
        local_f8 = FVar4;
        local_c0.StatData.Pad = auVar23;
        local_c0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar12,&local_c0);
        FStatsTrace::Set(&local_f8,(long64)auVar23);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      pFVar2 = &(this->NumAllocatedSkeletalMeshes).LockNumAllocatedSkeletalMeshes;
      if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
        (this->NumAllocatedSkeletalMeshes).Value = local_res20[0];
        FVar15 = StatPtr_STAT_MutableNumAllocatedSkeletalMeshes;
        if (StatPtr_STAT_MutableNumAllocatedSkeletalMeshes ==
            (FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedSkeletalMeshes>)0x0) {
          pFVar10 = ::FName::FName(&local_60,"STAT_MutableNumAllocatedSkeletalMeshes");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedSkeletalMeshes>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_MutableNumAllocatedSkeletalMeshes,*pFVar10,
                              L"Num Allocated Mutable Skeletal Meshes","STATGROUP_Mutable",
                              "STATCAT_Advanced",L"Mutable",true,false,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar4 = *(FName *)FVar15;
        auVar23 = (uchar  [8])(longlong)(this->NumAllocatedSkeletalMeshes).Value;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_b0.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
          local_f0 = FVar4;
          local_b0.StatData.Pad = auVar23;
          local_b0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar12,&local_b0);
          FStatsTrace::Set(&local_f0,(long64)auVar23);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
        iVar8 = UCustomizableObjectSystem::GetNumPendingInstances(this_00);
        pFVar2 = &(this->NumPendingInstanceUpdates).LockNumPendingInstanceUpdates;
        if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          (this->NumPendingInstanceUpdates).Value = iVar8;
          FVar16 = StatPtr_STAT_MutableNumPendingInstanceUpdates;
          if (StatPtr_STAT_MutableNumPendingInstanceUpdates ==
              (FThreadSafeStaticStat<FStat_STAT_MutableNumPendingInstanceUpdates>)0x0) {
            pFVar10 = ::FName::FName(&local_58,"STAT_MutableNumPendingInstanceUpdates");
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_MutableNumPendingInstanceUpdates>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_MutableNumPendingInstanceUpdates,*pFVar10,
                                L"Num Pending Instance Updates","STATGROUP_Mutable",
                                "STATCAT_Advanced",L"Mutable",true,false,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar4 = *(FName *)FVar16;
          auVar23 = (uchar  [8])(longlong)(this->NumPendingInstanceUpdates).Value;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar12 == (FThreadStats *)0x0) {
              pFVar13 = FThreadStatsPool::Get();
              pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
            }
            local_a0.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
            local_e8 = FVar4;
            local_a0.StatData.Pad = auVar23;
            local_a0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar12,&local_a0);
            FStatsTrace::Set(&local_e8,(long64)auVar23);
            if (pFVar12->ScopeCount == 0) {
              FThreadStats::Flush(pFVar12,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar12,false,false);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          pTVar3 = &this->TextureTrackerArray;
          uVar25 = 0;
          local_108 = 0;
          uVar21 = 0;
          while ((-1 < (int)uVar21 && ((int)uVar21 < (this->TextureTrackerArray).ArrayNum))) {
            uVar22 = ~uVar21 >> 0x1f;
            if (((int)uVar21 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar24 = (longlong)(int)uVar21;
            bVar7 = FWeakObjectPtr::IsStale
                              ((FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + lVar24 * 8),
                               true,false);
            iVar8 = (this->TextureTrackerArray).ArrayNum;
            if (bVar7) {
              uVar9 = 0;
              if ((int)uVar21 < iVar8) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              _Dst = (pTVar3->AllocatorInstance).Data + lVar24 * 8;
              iVar8 = (this->TextureTrackerArray).ArrayNum + ~uVar21;
              if (iVar8 != 0) {
                memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
              }
              piVar1 = &(this->TextureTrackerArray).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,&pTVar3->AllocatorInstance,(this->TextureTrackerArray).ArrayNum,
                         &(this->TextureTrackerArray).ArrayMax);
              uVar21 = uVar21 - 1;
LAB_14ac4c2e5:
              uVar21 = uVar21 + 1;
            }
            else {
              uVar9 = 0;
              if ((int)uVar21 < iVar8) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              bVar7 = FWeakObjectPtr::IsValid
                                ((FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + lVar24 * 8));
              if (!bVar7) goto LAB_14ac4c2e5;
              uVar25 = uVar25 + 1;
              uVar9 = 0;
              if ((int)uVar21 < (this->TextureTrackerArray).ArrayNum) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              this_01 = (UTexture *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((pTVar3->AllocatorInstance).Data + lVar24 * 8));
              if ((this_01 == (UTexture *)0x0) ||
                 (pFVar17 = UTexture::GetResource(this_01), pFVar17 == (FTextureResource *)0x0))
              goto LAB_14ac4c2e5;
              uVar9 = 0;
              if ((int)uVar21 < (this->TextureTrackerArray).ArrayNum) {
                uVar9 = uVar22;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((pTVar3->AllocatorInstance).Data + lVar24 * 8));
              uVar22 = (**(code **)(*(longlong *)pUVar18 + 0x3b0))(pUVar18,0);
              local_108 = local_108 + uVar22;
              uVar21 = uVar21 + 1;
            }
          }
          pFVar2 = &(this->NumAllocatedTextures).LockNumAllocatedTextures;
          if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
            (this->NumAllocatedTextures).Value = uVar25;
            FVar19 = StatPtr_STAT_MutableNumAllocatedTextures;
            if (StatPtr_STAT_MutableNumAllocatedTextures ==
                (FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedTextures>)0x0) {
              pFVar10 = ::FName::FName(&local_50,"STAT_MutableNumAllocatedTextures");
              FVar19 = (FThreadSafeStaticStat<FStat_STAT_MutableNumAllocatedTextures>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_MutableNumAllocatedTextures,*pFVar10,
                                  L"Num Allocated Mutable Textures","STATGROUP_Mutable",
                                  "STATCAT_Advanced",L"Mutable",true,false,ST_int64,false,false,
                                  MCR_Invalid);
            }
            FVar4 = *(FName *)FVar19;
            auVar23[4] = '\0';
            auVar23[5] = '\0';
            auVar23[6] = '\0';
            auVar23[7] = '\0';
            auVar23._0_4_ = (this->NumAllocatedTextures).Value;
            uVar21 = FVar4.Number;
            FVar26 = FVar4.ComparisonIndex.Value;
            local_res10 = FVar26.Value;
            uStackX_14 = uVar21;
            if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar12 == (FThreadStats *)0x0) {
                pFVar13 = FThreadStatsPool::Get();
                pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
              }
              local_90.NameAndInfo.Number = uVar21 & 0xffff8fff | 0x8000;
              local_e0 = FVar4;
              local_90.StatData.Pad = auVar23;
              local_90.NameAndInfo.Index.Value = FVar26.Value;
              FThreadStats::AddStatMessage(pFVar12,&local_90);
              FStatsTrace::Set(&local_e0,(long64)auVar23);
              if (pFVar12->ScopeCount == 0) {
                FThreadStats::Flush(pFVar12,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar12,false,false);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
            pFVar2 = &(this->TextureGPUSize).LockTextureGPUSize;
            if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
              (this->TextureGPUSize).Value = local_108;
              FVar20 = StatPtr_STAT_MutableTextureGPUSize;
              if (StatPtr_STAT_MutableTextureGPUSize ==
                  (FThreadSafeStaticStat<FStat_STAT_MutableTextureGPUSize>)0x0) {
                pFVar10 = ::FName::FName(local_48,"STAT_MutableTextureGPUSize");
                FVar20 = (FThreadSafeStaticStat<FStat_STAT_MutableTextureGPUSize>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableTextureGPUSize
                                    ,*pFVar10,
                                    L"Size of the Mutable Texture mips that are resident on the GPU"
                                    ,"STATGROUP_Mutable","STATCAT_Advanced",L"Mutable",true,false,
                                    ST_int64,false,false,MCR_Invalid);
              }
              FVar4 = *(FName *)FVar20;
              auVar23 = (uchar  [8])(this->TextureGPUSize).Value;
              uVar21 = FVar4.Number;
              FVar26 = FVar4.ComparisonIndex.Value;
              local_res10 = FVar26.Value;
              uStackX_14 = uVar21;
              if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar12 == (FThreadStats *)0x0) {
                  pFVar13 = FThreadStatsPool::Get();
                  pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
                }
                local_80.NameAndInfo.Number = uVar21 & 0xffff8fff | 0x8000;
                local_d8 = FVar4;
                local_80.StatData.Pad = auVar23;
                local_80.NameAndInfo.Index.Value = FVar26.Value;
                FThreadStats::AddStatMessage(pFVar12,&local_80);
                FStatsTrace::Set(&local_d8,(long64)auVar23);
                if (pFVar12->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar12,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar12,false,false);
                }
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

