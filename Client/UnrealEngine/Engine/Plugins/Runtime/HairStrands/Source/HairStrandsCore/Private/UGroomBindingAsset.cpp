// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 122

// StaticClass @ 14df937c0

UClass * __cdecl UGroomBindingAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomBindingAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomBindingAsset",
               &Z_Registration_Info_UClass_UGroomBindingAsset.InnerSingleton,
               StaticRegisterNativesUGroomBindingAsset,0xf0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomBindingAsset>,
               InternalVTableHelperCtorCaller<UGroomBindingAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomBindingAsset.InnerSingleton;
}

// UGroomBindingAsset @ 14dfaf9b0

UGroomBindingAsset * __thiscall
UGroomBindingAsset::UGroomBindingAsset(UGroomBindingAsset *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar2 = (TNode *)0x0;
  this->GroomBindingType = SkeletalMesh;
  (this->Groom).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->SourceMeshUsedLOD = -1;
  (this->TargetSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->TargetMeshUsedMinLOD = -1;
  (this->SourceGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TargetGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  this->NumInterpolationPoints = 100;
  this->MatchingSection = 0;
  (this->TargetBindingAttribute).ComparisonIndex = 0;
  (this->TargetBindingAttribute).Number = 0;
  (this->GroupInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInfos).ArrayNum = 0;
  (this->GroupInfos).ArrayMax = 0;
  (this->HairGroupResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupResources).ArrayNum = 0;
  (this->HairGroupResources).ArrayMax = 0;
  TQueue<UGroomBindingAsset::FHairGroupResource,1>::TQueue<UGroomBindingAsset::FHairGroupResource,1>
            (&this->HairGroupResourcesToDelete);
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = (FHairGroupPlatformDataArray *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->HairGroupPlatformDataToDelete).Tail = pTVar2;
  (this->HairGroupPlatformDataToDelete).Head = pTVar2;
  (this->HairGroupsPlatformData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsPlatformData).ArrayNum = 0;
  (this->HairGroupsPlatformData).ArrayMax = 0;
  this->AccessedProperties = (atomic<unsigned___int64>)0x0;
  this->ModifiedProperties = (atomic<unsigned___int64>)0x0;
  this->bIsValid = false;
  (this->AsyncTask).Ptr = (FGroomBindingAsyncBuildTask *)0x0;
  this->AssetNameHash = 0;
  return this;
}

// UGroomBindingAsset @ 14dfafab0

UGroomBindingAsset * __thiscall
UGroomBindingAsset::UGroomBindingAsset(UGroomBindingAsset *this,FObjectInitializer *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar2 = (TNode *)0x0;
  this->GroomBindingType = SkeletalMesh;
  (this->Groom).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SourceSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->SourceMeshUsedLOD = -1;
  (this->TargetSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->TargetMeshUsedMinLOD = -1;
  (this->SourceGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TargetGeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  this->NumInterpolationPoints = 100;
  this->MatchingSection = 0;
  (this->TargetBindingAttribute).ComparisonIndex = 0;
  (this->TargetBindingAttribute).Number = 0;
  (this->GroupInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInfos).ArrayNum = 0;
  (this->GroupInfos).ArrayMax = 0;
  (this->HairGroupResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupResources).ArrayNum = 0;
  (this->HairGroupResources).ArrayMax = 0;
  TQueue<UGroomBindingAsset::FHairGroupResource,1>::TQueue<UGroomBindingAsset::FHairGroupResource,1>
            (&this->HairGroupResourcesToDelete);
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = (FHairGroupPlatformDataArray *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    pTVar2 = pTVar1;
  }
  (this->HairGroupPlatformDataToDelete).Tail = pTVar2;
  (this->HairGroupPlatformDataToDelete).Head = pTVar2;
  (this->HairGroupsPlatformData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsPlatformData).ArrayNum = 0;
  (this->HairGroupsPlatformData).ArrayMax = 0;
  this->AccessedProperties = (atomic<unsigned___int64>)0x0;
  this->ModifiedProperties = (atomic<unsigned___int64>)0x0;
  this->bIsValid = false;
  (this->AsyncTask).Ptr = (FGroomBindingAsyncBuildTask *)0x0;
  this->AssetNameHash = 0;
  return this;
}

// ~UGroomBindingAsset @ 14dfb0cb0

void __thiscall UGroomBindingAsset::~UGroomBindingAsset(UGroomBindingAsset *this)

{
  FGroomBindingAsyncBuildTask *pFVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->AsyncTask).Ptr;
  if (pFVar1 != (FGroomBindingAsyncBuildTask *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  DestructItems<UGroomBindingAsset::FHairGroupPlatformData,int>
            ((FHairGroupPlatformData *)(this->HairGroupsPlatformData).AllocatorInstance.Data,
             (this->HairGroupsPlatformData).ArrayNum);
  pFVar2 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pTVar3 = (this->HairGroupPlatformDataToDelete).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->HairGroupPlatformDataToDelete).Tail = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x10);
    pTVar3 = (this->HairGroupPlatformDataToDelete).Tail;
  }
  pTVar4 = (this->HairGroupResourcesToDelete).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->HairGroupResourcesToDelete).Tail = pTVar4->NextNode;
    pFVar2 = (pTVar4->Item).CardsRootResources.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar4,0x28);
    pTVar4 = (this->HairGroupResourcesToDelete).Tail;
  }
  DestructItems<UGroomBindingAsset::FHairGroupResource,int>
            ((FHairGroupResource *)(this->HairGroupResources).AllocatorInstance.Data,
             (this->HairGroupResources).ArrayNum);
  pFVar2 = (this->HairGroupResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GroupInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dfb3100

void __thiscall
`UGroomBindingAsset::ReleaseResource'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined8 *puVar1;
  
  if (*(FHairStrandsRestRootResource **)this != (FHairStrandsRestRootResource *)0x0) {
    FHairStrandsRestRootResource::ReleaseResource(*(FHairStrandsRestRootResource **)this);
    puVar1 = *(undefined8 **)this;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x18);
    }
  }
  if (*(FHairStrandsRestRootResource **)((longlong)this + 8) != (FHairStrandsRestRootResource *)0x0)
  {
    if (*(char *)((longlong)this + 0x10) != '\0') {
      FHairStrandsRestRootResource::InternalResetLoadedSize
                (*(FHairStrandsRestRootResource **)((longlong)this + 8));
    }
    FHairStrandsRestRootResource::ReleaseResource
              (*(FHairStrandsRestRootResource **)((longlong)this + 8));
    puVar1 = *(undefined8 **)((longlong)this + 8);
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x18);
      return;
    }
  }
  return;
}

// operator() @ 14dfb4300

void __thiscall
`UGroomBindingAsset::ReleaseResource'::__l15::<lambda_3>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined8 *puVar1;
  
  if (*(FHairStrandsRestRootResource **)this != (FHairStrandsRestRootResource *)0x0) {
    FHairStrandsRestRootResource::ReleaseResource(*(FHairStrandsRestRootResource **)this);
    puVar1 = *(undefined8 **)this;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x18);
    }
  }
  if (*(FHairStrandsRestRootResource **)((longlong)this + 8) != (FHairStrandsRestRootResource *)0x0)
  {
    FHairStrandsRestRootResource::ReleaseResource
              (*(FHairStrandsRestRootResource **)((longlong)this + 8));
    puVar1 = *(undefined8 **)((longlong)this + 8);
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x18);
      return;
    }
  }
  return;
}

// operator() @ 14dfb4390

void __thiscall
`UGroomBindingAsset::ReleaseResource'::__l17::<lambda_4>::operator()
          (void *this,FRHICommandList *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  undefined8 *puVar3;
  
  pFVar2 = *(ForAnyElementType **)this;
  DestructItems<UGroomBindingAsset::FHairGroupPlatformData,int>
            ((FHairGroupPlatformData *)pFVar2->Data,*(int *)&pFVar2[1].Data);
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,pFVar2,0,piVar1);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    DestructItems<UGroomBindingAsset::FHairGroupPlatformData,int>
              ((FHairGroupPlatformData *)*puVar3,*(int *)(puVar3 + 1));
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    ::operator_delete(puVar3,0x10);
  }
  return;
}

// AddHairGroupResourcesToDelete @ 14dfb67b0

void __thiscall
UGroomBindingAsset::AddHairGroupResourcesToDelete
          (UGroomBindingAsset *this,FHairGroupResource *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    FHairGroupResource::FHairGroupResource(&pTVar2->Item,param_1);
    pTVar1 = (this->HairGroupResourcesToDelete).Head;
    (this->HairGroupResourcesToDelete).Head = pTVar2;
    pTVar1->NextNode = pTVar2;
  }
  return;
}

// BeginCacheDerivedDatas @ 14dfb7930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UGroomBindingAsset::BeginCacheDerivedDatas
          (UGroomBindingAsset *this,FOnGroomBindingAssetBuildComplete *param_1,
          TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
          *param_2)

{
  TUniquePtr<FGroomBindingAsyncBuildTask,TDefaultDelete<FGroomBindingAsyncBuildTask>_> *pTVar1;
  int iVar2;
  UGroomAsset *pUVar3;
  USkeletalMesh *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  ForAnyElementType FVar9;
  char cVar10;
  bool bVar11;
  EQueuedWorkPriority EVar12;
  FGroomBindingCompilingManager *pFVar13;
  IConsoleManager *pIVar14;
  longlong *plVar15;
  FQueuedThreadPool *pFVar16;
  FGroomBindingAsyncBuildTask *pFVar17;
  longlong lVar18;
  FGroomBindingAsyncBuildTask *pFVar19;
  undefined7 uVar20;
  bool bVar21;
  UGroomBindingAsset *local_res8;
  UGroomBindingAsset *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b8;
  ForAnyElementType local_1b0;
  int local_1a8;
  undefined1 local_1a0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  ForAnyElementType FStack_170;
  int local_168;
  int local_160 [2];
  bool local_158;
  UGroomBindingAsset *local_150;
  UGroomBindingAsset **local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  UGroomBindingAsset **local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  longlong local_b0;
  TArrayView<UGroomBindingAsset_*_const,int> local_a8;
  TArrayView<UGroomBindingAsset_*_const,int> local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pUVar3 = (this->Groom).field0_0x0.DebugPtr;
  if ((pUVar3 == (UGroomAsset *)0x0) || (pUVar3->bIsInitialized == false)) {
    uVar20 = (undefined7)((ulonglong)param_2 >> 8);
    FOnGroomBindingAssetBuildComplete::ExecuteIfBound(param_1,this,Failed);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_88);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar15 = *(longlong **)&param_2->field_0x8, plVar15 != (longlong *)0x0)) {
      (**(code **)(*plVar15 + 0x68))(plVar15,this,CONCAT71(uVar20,1));
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    return;
  }
  cVar10 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  if (cVar10 != '\0') {
    pFVar13 = FGroomBindingCompilingManager::Get();
    local_148 = &local_res8;
    uStack_140 = 1;
    local_a8._12_4_ = uStack_13c;
    local_a8.ArrayNum = 1;
    local_res8 = this;
    local_a8.DataPtr = local_148;
    FGroomBindingCompilingManager::FinishCompilation(pFVar13,&local_a8);
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1084,"UGroomBindingAsset::BeginCacheDerivedDatas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
               ,0x43c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1084);
  }
  FlushRenderingCommandIfUsed(this);
  LOCK();
  this->AccessedProperties = (atomic<unsigned___int64>)0xffffffffffffffff;
  UNLOCK();
  LOCK();
  this->ModifiedProperties =
       (atomic<unsigned___int64>)((ulonglong)this->ModifiedProperties | 0x2000);
  UNLOCK();
  LOCK();
  this->ModifiedProperties =
       (atomic<unsigned___int64>)((ulonglong)this->ModifiedProperties | 0x4000);
  UNLOCK();
  LOCK();
  this->ModifiedProperties =
       (atomic<unsigned___int64>)((ulonglong)this->ModifiedProperties | 0x1000);
  UNLOCK();
  LOCK();
  this->ModifiedProperties = (atomic<unsigned___int64>)((ulonglong)this->ModifiedProperties | 0x10);
  UNLOCK();
  LOCK();
  this->ModifiedProperties = (atomic<unsigned___int64>)((ulonglong)this->ModifiedProperties | 0x80);
  UNLOCK();
  pFVar19 = (FGroomBindingAsyncBuildTask *)0x0;
  local_160[0] = -1;
  local_160[1] = -1;
  local_1a0._0_8_ = (FScriptContainerElement *)0x0;
  local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  uStack_188 = 0;
  local_1a0._8_4_ = 0;
  local_1a0._12_4_ = 0;
  local_180 = 0;
  local_178 = (undefined1  [8])0x0;
  FStack_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  local_158 = false;
  if (this->GroomBindingType == SkeletalMesh) {
    pUVar4 = (this->SourceSkeletalMesh).field0_0x0.DebugPtr;
    if (((pUVar4 != (USkeletalMesh *)0x0) &&
        (bVar11 = GetSkeletalMeshLOD(this,pUVar4,this->SourceMeshRequestedLOD,true,
                                     (ITargetPlatform *)0x0,local_160,
                                     (TArray<TRefCountPtr<FSkeletalMeshLODRenderData>,TSizedDefaultAllocator<32>_>
                                      *)local_1a0), !bVar11)) ||
       ((pUVar4 = (this->TargetSkeletalMesh).field0_0x0.DebugPtr, pUVar4 != (USkeletalMesh *)0x0 &&
        (bVar11 = GetSkeletalMeshLOD(this,pUVar4,this->TargetMeshRequestedMinLOD,false,
                                     (ITargetPlatform *)0x0,local_160 + 1,
                                     (TArray<TRefCountPtr<FSkeletalMeshLODRenderData>,TSizedDefaultAllocator<32>_>
                                      *)local_1a0), !bVar11)))) {
      FOnGroomBindingAssetBuildComplete::ExecuteIfBound(param_1,this,Failed);
      TDelegate<void___cdecl(UGroomBindingAsset_*,enum_EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(param_2,this,Failed);
      goto LAB_14dfb7f2d;
    }
  }
  else {
    local_160[0] = 0;
    local_160[1] = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_70);
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  uVar6 = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_190,(FWriteAccessScope *)&local_128);
  uStack_188 = uVar5;
  local_180 = uVar6;
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  if (param_2 !=
      (TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
       *)local_178) {
    local_1b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar15 = *(longlong **)&param_2->field_0x8, plVar15 != (longlong *)0x0)) {
      (**(code **)(*plVar15 + 0x50))(plVar15,&local_1b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1b8,(FWriteAccessScope *)&local_110);
    iVar2 = local_1a8;
    FVar9.Data = local_1b0.Data;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    if (local_110.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
               (FWriteAccessScope *)&local_f8);
    if (local_168 == 0) {
LAB_14dfb7c28:
      if (FStack_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_170.Data);
      }
    }
    else if (FStack_170.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)FStack_170.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_170,0,0,0x10);
      local_168 = 0;
      goto LAB_14dfb7c28;
    }
    FStack_170.Data = FVar9.Data;
    local_168 = iVar2;
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1b8,(FWriteAccessScope *)&local_e0);
    if ((local_1a8 != 0) && (local_1b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b0,0,0,0x10);
      local_1a8 = 0;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b8.AccessDetector);
  }
  pUVar4 = (this->TargetSkeletalMesh).field0_0x0.DebugPtr;
  if (((pUVar4 != (USkeletalMesh *)0x0) &&
      (cVar10 = (**(code **)(pUVar4->_padding_ + 0x10))(), cVar10 != '\0')) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetTargetSkeletalMesh() == nullptr || GetTargetSkeletalMesh()->IsCompiling() == false"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar4 = (this->SourceSkeletalMesh).field0_0x0.DebugPtr;
  if (((pUVar4 != (USkeletalMesh *)0x0) &&
      (cVar10 = (**(code **)(pUVar4->_padding_ + 0x10))(), cVar10 != '\0')) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetSourceSkeletalMesh() == nullptr || GetSourceSkeletalMesh()->IsCompiling() == false"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                          ,0x459,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar14 = IConsoleManager::Get();
  plVar15 = (longlong *)(**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,L"r.HairStrands.Streaming")
  ;
  if ((plVar15 == (longlong *)0x0) ||
     (cVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15), cVar10 == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((((this->TargetGeometryCache).field0_0x0.DebugPtr == (UGeometryCache *)0x0) &&
      ((this->SourceGeometryCache).field0_0x0.DebugPtr == (UGeometryCache *)0x0)) && (!bVar11)) {
    pFVar13 = FGroomBindingCompilingManager::Get();
    bVar11 = FGroomBindingCompilingManager::IsAsyncCompilationAllowed(pFVar13,this);
    if (bVar11) {
      pFVar13 = FGroomBindingCompilingManager::Get();
      pFVar16 = FGroomBindingCompilingManager::GetThreadPool(pFVar13);
      pFVar13 = FGroomBindingCompilingManager::Get();
      EVar12 = FGroomBindingCompilingManager::GetBasePriority(pFVar13,this);
      if (((this->AsyncTask).Ptr != (FGroomBindingAsyncBuildTask *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("AsyncTask == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                              ,0x469,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar8 = CVarMemoryForGroomBindingAssetCompile.Ref;
      bVar11 = IsInParallelGameThread();
      if (bVar11) {
LAB_14dfb7e27:
        pFVar17 = pFVar19;
      }
      else {
        bVar11 = IsInGameThread();
        pFVar17 = (FGroomBindingAsyncBuildTask *)&DAT_00000004;
        if (bVar11) goto LAB_14dfb7e27;
      }
      iVar2 = *(int *)((longlong)&pFVar17->_padding_ + (longlong)pTVar8->ShadowedValue);
      pFVar17 = ::operator_new(0xd8);
      if (pFVar17 != (FGroomBindingAsyncBuildTask *)0x0) {
        local_res20 = this;
        FAsyncTask<FGroomBindingAsyncBuildWorker>::
        FAsyncTask<FGroomBindingAsyncBuildWorker><UGroomBindingAsset_*_&,FGroomBindingBuildContext>
                  ((FAsyncTask<FGroomBindingAsyncBuildWorker> *)pFVar17,&local_res20,
                   (FGroomBindingBuildContext *)local_1a0);
        pFVar17->GroomBinding = this;
        pFVar17->_padding_ = (longlong)&___7FGroomBindingAsyncBuildTask__6B_;
        pFVar19 = pFVar17;
      }
      pTVar1 = &this->AsyncTask;
      if (pTVar1 == (TUniquePtr<FGroomBindingAsyncBuildTask,TDefaultDelete<FGroomBindingAsyncBuildTask>_>
                     *)&local_b0) {
        if (pFVar19 != (FGroomBindingAsyncBuildTask *)0x0) {
          lVar18 = pFVar19->_padding_;
          goto LAB_14dfb7ea1;
        }
      }
      else {
        pFVar17 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar19;
        if (pFVar17 != (FGroomBindingAsyncBuildTask *)0x0) {
          lVar18 = pFVar17->_padding_;
          pFVar19 = pFVar17;
LAB_14dfb7ea1:
          (**(code **)(lVar18 + 0x28))(pFVar19);
        }
      }
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)(this->AsyncTask).Ptr,false,pFVar16,EVar12,DoNotRunInsideBusyWait
                 ,(longlong)(iVar2 << 0x14),L"GroomBindingAsset");
      pFVar13 = FGroomBindingCompilingManager::Get();
      local_138 = &local_150;
      uStack_130 = 1;
      local_98._12_4_ = uStack_12c;
      local_98.ArrayNum = 1;
      local_150 = this;
      local_98.DataPtr = local_138;
      FGroomBindingCompilingManager::AddGroomBindings(pFVar13,&local_98);
      goto LAB_14dfb7f2d;
    }
  }
  ExecuteCacheDerivedDatas(this,(FGroomBindingBuildContext *)local_1a0);
  FinishCacheDerivedDatas(this,(FGroomBindingBuildContext *)local_1a0);
LAB_14dfb7f2d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
             (FWriteAccessScope *)&local_c8);
  if ((local_168 != 0) && (FStack_170.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_170.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_170,0,0,0x10);
    local_168 = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (FStack_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_170.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_178);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
  DestructItems<TRefCountPtr<FSkeletalMeshLODRenderData>,int>
            ((TRefCountPtr<FSkeletalMeshLODRenderData> *)local_1a0._0_8_,local_1a0._8_4_);
  if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a0._0_8_);
  }
  if (!bVar21) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// BeginDestroy @ 14dfb8070

void __thiscall UGroomBindingAsset::BeginDestroy(UGroomBindingAsset *this)

{
  ReleaseResource(this,false);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Build @ 14dfb80a0

void __thiscall
UGroomBindingAsset::Build
          (UGroomBindingAsset *this,
          TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
          *param_1)

{
  FOnGroomBindingAssetBuildComplete local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  Build(this,&local_28,param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return;
}

// Build @ 14dfb80e0

void __thiscall
UGroomBindingAsset::Build
          (UGroomBindingAsset *this,FOnGroomBindingAssetBuildComplete *param_1,
          TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
          *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  USkeletalMesh *pUVar4;
  longlong *plVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined7 uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FOnGroomBindingAssetBuildComplete *local_res10;
  TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
  *local_res18;
  FReadAccessScope local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->Groom).field0_0x0.DebugPtr != (UGroomAsset *)0x0) {
    if (this->GroomBindingType == SkeletalMesh) {
      pUVar4 = (this->TargetSkeletalMesh).field0_0x0.DebugPtr;
    }
    else {
      if (this->GroomBindingType != GeometryCache) goto LAB_14dfb8112;
      pUVar4 = (USkeletalMesh *)(this->TargetGeometryCache).field0_0x0.DebugPtr;
    }
    if (pUVar4 != (USkeletalMesh *)0x0) {
      FlushRenderingCommandIfUsed(this);
      ReleaseResource(this,false);
      pFVar11 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
      iVar2 = (this->HairGroupsPlatformData).ArrayNum;
      pFVar8 = pFVar11 + 0x1c;
      pFVar10 = pFVar11 + (longlong)iVar2 * 0x38;
      while( true ) {
        if ((this->HairGroupsPlatformData).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupPlatformData,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar11 == pFVar10) break;
        DestructItems<FHairStrandsRootBulkData,int>
                  (*(FHairStrandsRootBulkData **)&pFVar11->field_0x0,*(int *)(pFVar8 + -0x14));
        *(undefined4 *)(pFVar8 + -0x14) = 0;
        if (*(int *)(pFVar8 + -0x10) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1d8,8,0,(ForAnyElementType *)pFVar11,0,(int *)(pFVar8 + -0x10));
        }
        DestructItems<FHairStrandsRootBulkData,int>
                  (*(FHairStrandsRootBulkData **)(pFVar8 + -0xc),*(int *)(pFVar8 + -4));
        *(undefined4 *)(pFVar8 + -4) = 0;
        if (*(int *)pFVar8 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1d8,8,0,(ForAnyElementType *)(pFVar8 + -0xc),0,(int *)pFVar8);
        }
        iVar3 = *(int *)(pFVar8 + 0xc);
        pFVar6 = *(ForAnyElementType **)(pFVar8 + 4);
        pFVar7 = pFVar6 + (longlong)iVar3 * 2;
        while( true ) {
          if (*(int *)(pFVar8 + 0xc) != iVar3) {
            `TCheckedPointerIterator<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar6 == pFVar7) break;
          DestructItems<FHairStrandsRootBulkData,int>
                    ((FHairStrandsRootBulkData *)pFVar6->Data,*(int *)&pFVar6[1].Data);
          piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
          *(undefined4 *)&pFVar6[1].Data = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1d8,8,0,pFVar6,0,piVar1);
          }
          pFVar6 = pFVar6 + 2;
        }
        pFVar11 = pFVar11 + 0x38;
        pFVar8 = pFVar8 + 0x38;
      }
      this->bIsValid = false;
      BeginCacheDerivedDatas(this,local_res10,local_res18);
      return;
    }
  }
LAB_14dfb8112:
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  FOnGroomBindingAssetBuildComplete::ExecuteIfBound(param_1,this,Failed);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar5 = *(longlong **)&param_2->field_0x8, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))(plVar5,this,CONCAT71(uVar9,1));
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  return;
}

// Build @ 14dfb8300

void __thiscall
UGroomBindingAsset::Build(UGroomBindingAsset *this,FOnGroomBindingAssetBuildComplete *param_1)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  Build(this,param_1,
        (TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
         *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ExecuteCacheDerivedDatas @ 14dfc02c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGroomBindingAsset::ExecuteCacheDerivedDatas
          (UGroomBindingAsset *this,FGroomBindingBuildContext *param_1)

{
  int *piVar1;
  TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FHairGroupPlatformDataArray *pFVar14;
  TNode *pTVar15;
  TNode *pTVar16;
  undefined8 uVar17;
  FHairGroupResource *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  FHairGroupResource *pFVar21;
  bool bVar22;
  byte local_res18;
  undefined1 local_126 [2];
  uint local_124;
  FHairRootGroupData local_118;
  FName local_b8;
  undefined8 local_b0;
  FString local_a8;
  FInput local_98;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1267,"UGroomBindingAsset::ExecuteCacheDerivedDatas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
               ,0x4f3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1267);
  }
  this_00 = &this->HairGroupsPlatformData;
  uVar20 = (ulonglong)_tls_index;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
  uVar17 = *(undefined8 *)(lVar5 + 0x9c00);
  *(UGroomBindingAsset **)(lVar5 + 0x9c00) = this;
  uVar3 = (((this->Groom).field0_0x0.DebugPtr)->HairGroupsPlatformData).ArrayNum;
  local_b0 = uVar17;
  TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,uVar3,Default);
  TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_>::SetNum(&this->GroupInfos,uVar3,Default)
  ;
  if ((this->bIsValid != false) && (0 < GHairStrandsDelayBindingDataRelease)) {
    pFVar14 = ::operator_new(0x10);
    if (pFVar14 == (FHairGroupPlatformDataArray *)0x0) {
      pFVar14 = (FHairGroupPlatformDataArray *)0x0;
    }
    else {
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
    }
    if (&pFVar14->Data != this_00) {
      DestructItems<UGroomBindingAsset::FHairGroupPlatformData,int>
                ((FHairGroupPlatformData *)(pFVar14->Data).AllocatorInstance.Data,
                 (pFVar14->Data).ArrayNum);
      pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar14->Data).AllocatorInstance.Data = (this_00->AllocatorInstance).Data;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar14->Data).ArrayNum = (this->HairGroupsPlatformData).ArrayNum;
      (pFVar14->Data).ArrayMax = (this->HairGroupsPlatformData).ArrayMax;
      (this->HairGroupsPlatformData).ArrayNum = 0;
      (this->HairGroupsPlatformData).ArrayMax = 0;
    }
    pTVar15 = ::operator_new(0x10);
    if (pTVar15 != (TNode *)0x0) {
      pTVar15->NextNode = (TNode *)0x0;
      pTVar15->Item = pFVar14;
      pTVar7 = (this->HairGroupPlatformDataToDelete).Head;
      (this->HairGroupPlatformDataToDelete).Head = pTVar15;
      pTVar7->NextNode = pTVar15;
    }
    TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,uVar3,Default);
  }
  this->bIsValid = true;
  local_res18 = 0;
  local_124 = 0;
  if (uVar3 != 0) {
    do {
      uVar19 = local_124;
      local_98.NumInterpolationPoints = this->NumInterpolationPoints;
      bVar12 = false;
      local_98.BindingType = this->GroomBindingType;
      local_98.MatchingSection = this->MatchingSection;
      local_98.TargetBindingAttribute = this->TargetBindingAttribute;
      local_98.SourceMeshLOD = param_1->SourceMeshLOD;
      local_98.TargetMeshMinLOD = param_1->TargetMeshMinLOD;
      if (local_98.BindingType == SkeletalMesh) {
        if ((this->TargetSkeletalMesh).field0_0x0.DebugPtr != (USkeletalMesh *)0x0)
        goto LAB_14dfc071e;
LAB_14dfc04bb:
        local_98.bHasValidTarget = false;
      }
      else {
        if ((local_98.BindingType != GeometryCache) ||
           ((this->TargetGeometryCache).field0_0x0.DebugPtr == (UGeometryCache *)0x0))
        goto LAB_14dfc04bb;
LAB_14dfc071e:
        local_98.bHasValidTarget = true;
      }
      local_98.GroomAsset = *(UGroomAsset **)&(this->Groom).field0_0x0;
      local_98.SourceSkeletalMesh = *(USkeletalMesh **)&(this->SourceSkeletalMesh).field0_0x0;
      local_98.TargetSkeletalMesh = *(USkeletalMesh **)&(this->TargetSkeletalMesh).field0_0x0;
      local_98.SourceGeometryCache = *(UGeometryCache **)&(this->SourceGeometryCache).field0_0x0;
      local_98.TargetGeometryCache = *(UGeometryCache **)&(this->TargetGeometryCache).field0_0x0;
      local_98.bForceUseRunningPlatform = false;
      if ((local_98.BindingType != SkeletalMesh) &&
         (((local_98.SourceMeshLOD != 0 || (local_98.TargetMeshMinLOD != 0)) &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("BindingType == EGroomBindingMeshType::SkeletalMesh || (SourceMeshLOD == 0 && TargetMeshMinLOD == 0)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                               ,0x59,L""), bVar10)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar19 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_118.SimRootDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar6 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
      local_118.SimRootDatas.ArrayNum = 0;
      local_118.SimRootDatas.ArrayMax = 0;
      local_118.RenRootDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.RenRootDatas.ArrayNum = 0;
      local_118.RenRootDatas.ArrayMax = 0;
      local_118.CardsRootDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.CardsRootDatas.ArrayNum = 0;
      local_118.CardsRootDatas.ArrayMax = 0;
      local_118.MeshPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.MeshPositions.ArrayNum = 0;
      local_118.MeshPositions.ArrayMax = 0;
      local_118.MeshPositions_Transferred.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.MeshPositions_Transferred.ArrayNum = 0;
      local_118.MeshPositions_Transferred.ArrayMax = 0;
      local_118.TargetMeshMinLOD = -1;
      bVar10 = BuildHairRootGroupData(&local_98,uVar19,(ITargetPlatform *)0x0,&local_118);
      if (bVar10) {
        GroomBinding_BulkCopy::BuildGroupPlatformData
                  ((FHairGroupPlatformData *)(pFVar6 + (longlong)(int)uVar19 * 0x38),&local_118);
      }
      DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 local_118.MeshPositions_Transferred.AllocatorInstance.Data,
                 local_118.MeshPositions_Transferred.ArrayNum);
      if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          local_118.MeshPositions_Transferred.AllocatorInstance.Data !=
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_118.MeshPositions_Transferred.AllocatorInstance.Data);
      }
      DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 local_118.MeshPositions.AllocatorInstance.Data,local_118.MeshPositions.ArrayNum);
      if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          local_118.MeshPositions.AllocatorInstance.Data !=
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_118.MeshPositions.AllocatorInstance.Data);
      }
      DestructItems<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)
                 local_118.CardsRootDatas.AllocatorInstance.Data,local_118.CardsRootDatas.ArrayNum);
      if ((TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)
          local_118.CardsRootDatas.AllocatorInstance.Data !=
          (TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_118.CardsRootDatas.AllocatorInstance.Data);
      }
      DestructItems<FHairStrandsRootData,int>
                ((FHairStrandsRootData *)local_118.RenRootDatas.AllocatorInstance.Data,
                 local_118.RenRootDatas.ArrayNum);
      if ((FHairStrandsRootData *)local_118.RenRootDatas.AllocatorInstance.Data !=
          (FHairStrandsRootData *)0x0) {
        FMemory::Free(local_118.RenRootDatas.AllocatorInstance.Data);
      }
      DestructItems<FHairStrandsRootData,int>
                ((FHairStrandsRootData *)local_118.SimRootDatas.AllocatorInstance.Data,
                 local_118.SimRootDatas.ArrayNum);
      if ((FHairStrandsRootData *)local_118.SimRootDatas.AllocatorInstance.Data !=
          (FHairStrandsRootData *)0x0) {
        FMemory::Free(local_118.SimRootDatas.AllocatorInstance.Data);
      }
      if (bVar10) {
        pTVar2 = &this->HairGroupResources;
        iVar4 = (this->HairGroupResources).ArrayNum;
        if (0 < iVar4) {
          pFVar21 = (FHairGroupResource *)(pTVar2->AllocatorInstance).Data;
          pFVar18 = pFVar21 + iVar4;
          while( true ) {
            if ((this->HairGroupResources).ArrayNum != iVar4) {
              local_126[0] = 0;
              `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupResource,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_126);
            }
            if (pFVar21 == pFVar18) break;
            pTVar16 = ::operator_new(0x28);
            if (pTVar16 != (TNode *)0x0) {
              pTVar16->NextNode = (TNode *)0x0;
              FHairGroupResource::FHairGroupResource(&pTVar16->Item,pFVar21);
              pTVar8 = (this->HairGroupResourcesToDelete).Head;
              (this->HairGroupResourcesToDelete).Head = pTVar16;
              pTVar8->NextNode = pTVar16;
            }
            pFVar21 = pFVar21 + 1;
          }
          DestructItems<UGroomBindingAsset::FHairGroupResource,int>
                    ((FHairGroupResource *)(pTVar2->AllocatorInstance).Data,
                     (this->HairGroupResources).ArrayNum);
          piVar1 = &(this->HairGroupResources).ArrayMax;
          (this->HairGroupResources).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
        }
        bVar12 = true;
        uVar19 = local_124;
        if (((this->HairGroupResources).ArrayNum != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutHairGroupResources.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                                ,0x54a,L""), uVar19 = local_124, bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else if (1 < (byte)LogHairStrands._0_1_) {
        local_b8 = (FName)this->_padding_;
        ::FName::ToString(&local_b8,&local_a8);
        UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString>
                  ((FLogCategoryBase *)&LogHairStrands,&::LOG_Static,&local_a8);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      if ((this->bIsValid == false) || (!bVar10)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      this->bIsValid = bVar10;
      if ((local_res18 != 0) || (local_res18 = 0, bVar12)) {
        local_res18 = 1;
      }
      local_124 = uVar19 + 1;
    } while (local_124 < uVar3);
    uVar20 = (ulonglong)_tls_index;
    uVar17 = local_b0;
  }
  UpdateGroomBindingAssetInfos(this);
  param_1->bReloadResource = (bool)(param_1->bReloadResource | local_res18);
  if ((*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9c00) == 0)
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Asset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                             ,0x9d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(undefined8 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9c00) = uVar17
  ;
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinishCacheDerivedDatas @ 14dfc3460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UGroomBindingAsset::FinishCacheDerivedDatas
          (UGroomBindingAsset *this,FGroomBindingBuildContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  longlong lVar8;
  EGroomBindingAssetBuildResult EVar9;
  bool bVar10;
  TObjectIterator<UGroomComponent> local_48;
  FReadAccessScope local_30;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1478,"UGroomBindingAsset::FinishCacheDerivedDatas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
               ,0x5c6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1478);
  }
  LOCK();
  this->AccessedProperties = (atomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  this->ModifiedProperties = (atomic<unsigned___int64>)0x0;
  UNLOCK();
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((bVar3) || (this->bIsValid == false)) {
    EVar9 = Failed;
    this->SourceMeshUsedLOD = -1;
    iVar4 = -1;
  }
  else {
    EVar9 = Succeeded;
    if (param_1->bReloadResource != false) {
      InitResource(this);
    }
    this->SourceMeshUsedLOD = param_1->SourceMeshLOD;
    iVar4 = param_1->TargetMeshMinLOD;
  }
  this->TargetMeshUsedMinLOD = iVar4;
  local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectArray.ArrayNum = 0;
  local_48.ObjectArray.ArrayMax = 0;
  local_48.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UGroomComponent_NoRegister();
  GetObjectsOfClass(pUVar7,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    do {
      TObjectIterator<UGroomComponent>::Advance(&local_48);
      lVar8 = (longlong)local_48.Index;
      if ((local_48.Index < 0) || (local_48.ObjectArray.ArrayNum <= local_48.Index)) {
        if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
        }
        FOnGroomBindingAssetBuildComplete::ExecuteIfBound
                  (&param_1->DynamicCompletionDelegate,this,EVar9);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &param_1->NativeCompletionDelegate,&local_30);
        if ((*(int *)&(param_1->NativeCompletionDelegate).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(param_1->NativeCompletionDelegate).field_0x8,
           plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x68))(plVar1,this,EVar9);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_30);
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      uVar6 = 0;
      if (local_48.Index < local_48.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_48.Index >> 0x1f;
      }
      if (uVar6 == 0) {
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
      if (*(UGroomBindingAsset **)
           (*(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar8 * 8) + 0x5c8) ==
          (UGroomBindingAsset *)0x0) {
        bVar3 = this == (UGroomBindingAsset *)0x0;
      }
      else {
        bVar3 = *(UGroomBindingAsset **)
                 (*(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar8 * 8) + 0x5c8) ==
                this;
      }
    } while (!bVar3);
    lVar8 = (longlong)local_48.Index;
    uVar6 = 0;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_48.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    UGroomComponent::PostCompilation
              (*(UGroomComponent **)(local_48.ObjectArray.AllocatorInstance.Data + lVar8 * 8));
    lVar8 = (longlong)local_48.Index;
    uVar6 = 0;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_48.Index >> 0x1f;
    }
    if (uVar6 == 0) {
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
    if ((*(byte *)(*(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar8 * 8) + 0x98) &
        1) != 0) {
      lVar8 = (longlong)local_48.Index;
      uVar6 = 0;
      if (local_48.Index < local_48.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_48.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UActorComponent::RecreateRenderState_Concurrent
                (*(UActorComponent **)(local_48.ObjectArray.AllocatorInstance.Data + lVar8 * 8));
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// FlushRenderingCommandIfUsed @ 14dfc3780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UGroomBindingAsset::FlushRenderingCommandIfUsed(UGroomBindingAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  int iVar7;
  longlong lVar8;
  TObjectIterator<UGroomComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar3 = false;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UGroomComponent_NoRegister();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UGroomComponent>::Advance(&local_28);
    lVar8 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(UGroomBindingAsset **)
         (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8) + 0x5c8) ==
        (UGroomBindingAsset *)0x0) {
      bVar2 = param_1 == (UGroomBindingAsset *)0x0;
    }
    else {
      bVar2 = *(UGroomBindingAsset **)
               (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8) + 0x5c8) ==
              param_1;
    }
    if (bVar2) {
      lVar8 = (longlong)local_28.Index;
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      iVar7 = local_28.ObjectArray.ArrayNum;
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar7 = local_28.ObjectArray.ArrayNum;
      }
      if ((*(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8) + 0x98)
          & 2) != 0) {
        lVar8 = (longlong)local_28.Index;
        uVar5 = 0;
        if (local_28.Index < iVar7) {
          uVar5 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        (**(code **)(**(longlong **)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8) +
                    0x3a8))();
        bVar3 = true;
      }
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  if (bVar3) {
    FlushRenderingCommands();
  }
  return;
}

// GetAssetPathName @ 14dfc5ba0

FName __thiscall UGroomBindingAsset::GetAssetPathName(UGroomBindingAsset *this,int param_1)

{
  int iVar1;
  FName *pFVar2;
  FString *pFVar3;
  int iVar4;
  uint in_register_00000014;
  FName FVar5;
  int in_R8D;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  FVar5.Number = in_register_00000014;
  FVar5.ComparisonIndex.Value = param_1;
  if (in_R8D < 0) {
    pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName(&local_res20,iVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)FVar5 = *pFVar2;
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    ::FString::PrintfImpl(&local_28,L"%s [LOD%d]");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName(&local_res20,iVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)FVar5 = *pFVar2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return FVar5;
}

// GetClampedSourceMeshLOD @ 14dfc6410

int __thiscall
UGroomBindingAsset::GetClampedSourceMeshLOD(UGroomBindingAsset *this,ITargetPlatform *param_1)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  int iVar3;
  
  if (this->GroomBindingType != SkeletalMesh) {
    return -1;
  }
  iVar1 = this->SourceMeshRequestedLOD;
  pUVar2 = (this->SourceSkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar2 == (USkeletalMesh *)0x0) {
    return -1;
  }
  iVar3 = (**(code **)(pUVar2->_padding_ + 0x448))(pUVar2,1);
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// GetClampedTargetMeshMinLOD @ 14dfc6470

int __thiscall
UGroomBindingAsset::GetClampedTargetMeshMinLOD(UGroomBindingAsset *this,ITargetPlatform *param_1)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  int iVar3;
  
  if (this->GroomBindingType != SkeletalMesh) {
    return -1;
  }
  iVar1 = this->TargetMeshRequestedMinLOD;
  pUVar2 = (this->TargetSkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar2 == (USkeletalMesh *)0x0) {
    return -1;
  }
  iVar3 = (**(code **)(pUVar2->_padding_ + 0x448))(pUVar2,1);
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// GetGroom @ 14dfc6cf0

UGroomAsset * __thiscall UGroomBindingAsset::GetGroom(UGroomBindingAsset *this)

{
  return (this->Groom).field0_0x0.DebugPtr;
}

// GetGroomBindingType @ 14dfc6d00

EGroomBindingMeshType __thiscall UGroomBindingAsset::GetGroomBindingType(UGroomBindingAsset *this)

{
  return this->GroomBindingType;
}

// GetGroomBindingTypeMemberName @ 14dfc6d10

FName __cdecl UGroomBindingAsset::GetGroomBindingTypeMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"GroomBindingType");
  return in_RCX;
}

// GetGroomMemberName @ 14dfc6d40

FName __cdecl UGroomBindingAsset::GetGroomMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"Groom");
  return in_RCX;
}

// GetGroupInfos @ 14dfc6d70

TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> * __thiscall
UGroomBindingAsset::GetGroupInfos(UGroomBindingAsset *this)

{
  return &this->GroupInfos;
}

// GetGroupInfos @ 14dfc6d80

TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> * __thiscall
UGroomBindingAsset::GetGroupInfos(UGroomBindingAsset *this)

{
  return &this->GroupInfos;
}

// GetGroupInfosMemberName @ 14dfc6d90

FName __cdecl UGroomBindingAsset::GetGroupInfosMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"GroupInfos");
  return in_RCX;
}

// GetHairGroupPlatformDataMemberName @ 14dfc6e60

FName __cdecl UGroomBindingAsset::GetHairGroupPlatformDataMemberName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x16,L"HairGroupsPlatformData",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetHairGroupResources @ 14dfc6ea0

TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> * __thiscall
UGroomBindingAsset::GetHairGroupResources(UGroomBindingAsset *this)

{
  return &this->HairGroupResources;
}

// GetHairGroupResources @ 14dfc6eb0

TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> * __thiscall
UGroomBindingAsset::GetHairGroupResources(UGroomBindingAsset *this)

{
  return &this->HairGroupResources;
}

// GetHairGroupResourcesMemberName @ 14dfc6ec0

FName __cdecl UGroomBindingAsset::GetHairGroupResourcesMemberName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,10,L"GroupInfos",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetHairGroupsPlatformData @ 14dfc7150

TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_> * __thiscall
UGroomBindingAsset::GetHairGroupsPlatformData(UGroomBindingAsset *this)

{
  return &this->HairGroupsPlatformData;
}

// GetHairGroupsPlatformData @ 14dfc7160

TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_> * __thiscall
UGroomBindingAsset::GetHairGroupsPlatformData(UGroomBindingAsset *this)

{
  return &this->HairGroupsPlatformData;
}

// GetMatchingSection @ 14dfc75d0

int __thiscall UGroomBindingAsset::GetMatchingSection(UGroomBindingAsset *this)

{
  return this->MatchingSection;
}

// GetMatchingSectionMemberName @ 14dfc75e0

FName __cdecl UGroomBindingAsset::GetMatchingSectionMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"MatchingSection");
  return in_RCX;
}

// GetNumInterpolationPoints @ 14dfc7c30

int __thiscall UGroomBindingAsset::GetNumInterpolationPoints(UGroomBindingAsset *this)

{
  return this->NumInterpolationPoints;
}

// GetNumInterpolationPointsMemberName @ 14dfc7c40

FName __cdecl UGroomBindingAsset::GetNumInterpolationPointsMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"NumInterpolationPoints");
  return in_RCX;
}

// GetPrivateStaticClass @ 14dfc8470

UClass * __cdecl UGroomBindingAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomBindingAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomBindingAsset",
               &Z_Registration_Info_UClass_UGroomBindingAsset.InnerSingleton,
               StaticRegisterNativesUGroomBindingAsset,0xf0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomBindingAsset>,
               InternalVTableHelperCtorCaller<UGroomBindingAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomBindingAsset.InnerSingleton;
}

// GetResourceSizeEx @ 14dfc8dc0

void __thiscall
UGroomBindingAsset::GetResourceSizeEx(UGroomBindingAsset *this,FResourceSizeEx *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  undefined1 local_res18 [8];
  uint local_res20;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsPlatformData).ArrayMax * 0x38);
  local_res20 = (this->HairGroupResources).ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar12 = (this->HairGroupResources).AllocatorInstance.Data;
  pFVar14 = pFVar12 + uVar6 * 0x20;
  pFVar9 = pFVar12 + 0x18;
  while( true ) {
    if ((this->HairGroupResources).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupResource,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar14) break;
    plVar2 = *(longlong **)pFVar12;
    if (plVar2 != (longlong *)0x0) {
      plVar15 = (longlong *)*plVar2;
      uVar13 = 0;
      lVar5 = plVar2[1];
      plVar20 = plVar15 + (int)lVar5;
      while( true ) {
        if ((int)plVar2[1] != (int)lVar5) {
          `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*_const,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (plVar15 == plVar20) break;
        lVar3 = *plVar15;
        lVar4 = *(longlong *)(lVar3 + 0x68);
        if (lVar4 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0x88);
        if (lVar4 == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0xa8);
        if (lVar4 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 200);
        if (lVar4 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0xf0);
        if (lVar4 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0x110);
        if (lVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar3 = *(longlong *)(lVar3 + 0x130);
        iVar11 = iVar7 + iVar10 + iVar17 + iVar18 + iVar19 + iVar11;
        if (lVar3 == 0) {
          uVar13 = (ulong64)(uint)((int)uVar13 + iVar11);
          plVar15 = plVar15 + 1;
        }
        else {
          uVar13 = (ulong64)(uint)((int)uVar13 +
                                  *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10) + iVar11);
          plVar15 = plVar15 + 1;
        }
      }
      FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,uVar13);
    }
    plVar2 = *(longlong **)(pFVar9 + -0x10);
    if (plVar2 != (longlong *)0x0) {
      plVar15 = (longlong *)*plVar2;
      uVar13 = 0;
      lVar5 = plVar2[1];
      plVar20 = plVar15 + (int)lVar5;
      while( true ) {
        if ((int)plVar2[1] != (int)lVar5) {
          `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*_const,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (plVar15 == plVar20) break;
        lVar3 = *plVar15;
        lVar4 = *(longlong *)(lVar3 + 0x68);
        if (lVar4 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0x88);
        if (lVar4 == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0xa8);
        if (lVar4 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 200);
        if (lVar4 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0xf0);
        if (lVar4 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar4 = *(longlong *)(lVar3 + 0x110);
        if (lVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
        }
        lVar3 = *(longlong *)(lVar3 + 0x130);
        iVar11 = iVar7 + iVar10 + iVar17 + iVar18 + iVar19 + iVar11;
        if (lVar3 == 0) {
          uVar13 = (ulong64)(uint)((int)uVar13 + iVar11);
          plVar15 = plVar15 + 1;
        }
        else {
          uVar13 = (ulong64)(uint)((int)uVar13 +
                                  *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10) + iVar11);
          plVar15 = plVar15 + 1;
        }
      }
      FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,uVar13);
    }
    plVar20 = *(longlong **)(pFVar9 + -8);
    iVar11 = *(int *)pFVar9;
    plVar2 = plVar20 + iVar11;
    while( true ) {
      if (*(int *)pFVar9 != iVar11) {
        `TCheckedPointerIterator<FHairStrandsRestRootResource_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (plVar20 == plVar2) break;
      plVar15 = (longlong *)*plVar20;
      if (plVar15 != (longlong *)0x0) {
        plVar16 = (longlong *)*plVar15;
        uVar13 = 0;
        lVar5 = plVar15[1];
        plVar1 = plVar16 + (int)lVar5;
        while( true ) {
          if ((int)plVar15[1] != (int)lVar5) {
            `TCheckedPointerIterator<FHairStrandsLODRestRootResource_*_const,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          if (plVar16 == plVar1) break;
          lVar3 = *plVar16;
          lVar4 = *(longlong *)(lVar3 + 0x68);
          if (lVar4 == 0) {
            iVar19 = 0;
          }
          else {
            iVar19 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
          }
          lVar4 = *(longlong *)(lVar3 + 0x88);
          if (lVar4 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
          }
          lVar4 = *(longlong *)(lVar3 + 0xa8);
          if (lVar4 == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
          }
          lVar4 = *(longlong *)(lVar3 + 200);
          if (lVar4 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
          }
          lVar4 = *(longlong *)(lVar3 + 0xf0);
          if (lVar4 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
          }
          lVar4 = *(longlong *)(lVar3 + 0x110);
          if (lVar4 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(lVar4 + 0x14) * *(int *)(lVar4 + 0x10);
          }
          lVar3 = *(longlong *)(lVar3 + 0x130);
          iVar19 = iVar8 + iVar7 + iVar10 + iVar17 + iVar18 + iVar19;
          if (lVar3 == 0) {
            uVar13 = (ulong64)(uint)((int)uVar13 + iVar19);
            plVar16 = plVar16 + 1;
          }
          else {
            uVar13 = (ulong64)(uint)((int)uVar13 +
                                    iVar19 + *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10));
            plVar16 = plVar16 + 1;
          }
        }
        FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,uVar13);
      }
      plVar20 = plVar20 + 1;
    }
    pFVar12 = pFVar12 + 0x20;
    pFVar9 = pFVar9 + 0x20;
    uVar6 = (ulonglong)local_res20;
  }
  return;
}

// GetSourceGeometryCache @ 14dfca080

UGeometryCache * __thiscall UGroomBindingAsset::GetSourceGeometryCache(UGroomBindingAsset *this)

{
  return (this->SourceGeometryCache).field0_0x0.DebugPtr;
}

// GetSourceGeometryCacheMemberName @ 14dfca090

FName __cdecl UGroomBindingAsset::GetSourceGeometryCacheMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"SourceGeometryCache");
  return in_RCX;
}

// GetSourceMeshRequestedLOD @ 14dfca0c0

int __thiscall UGroomBindingAsset::GetSourceMeshRequestedLOD(UGroomBindingAsset *this)

{
  return this->SourceMeshRequestedLOD;
}

// GetSourceMeshRequestedLODMemberName @ 14dfca0d0

FName __cdecl UGroomBindingAsset::GetSourceMeshRequestedLODMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"SourceMeshRequestedLOD");
  return in_RCX;
}

// GetSourceMeshUsedLOD @ 14dfca100

int __thiscall UGroomBindingAsset::GetSourceMeshUsedLOD(UGroomBindingAsset *this)

{
  return this->SourceMeshUsedLOD;
}

// GetSourceMeshUsedLODMemberName @ 14dfca110

FName __cdecl UGroomBindingAsset::GetSourceMeshUsedLODMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"SourceMeshUsedLOD");
  return in_RCX;
}

// GetSourceSkeletalMesh @ 14dfca140

USkeletalMesh * __thiscall UGroomBindingAsset::GetSourceSkeletalMesh(UGroomBindingAsset *this)

{
  return (this->SourceSkeletalMesh).field0_0x0.DebugPtr;
}

// GetSourceSkeletalMeshMemberName @ 14dfca150

FName __cdecl UGroomBindingAsset::GetSourceSkeletalMeshMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"SourceSkeletalMesh");
  return in_RCX;
}

// GetTargetBindingAttribute @ 14dfca180

FName __thiscall UGroomBindingAsset::GetTargetBindingAttribute(UGroomBindingAsset *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->TargetBindingAttribute;
  return in_RDX;
}

// GetTargetBindingAttributeMemberName @ 14dfca1a0

FName __cdecl UGroomBindingAsset::GetTargetBindingAttributeMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"TargetBindingAttribute");
  return in_RCX;
}

// GetTargetGeometryCache @ 14dfca1d0

UGeometryCache * __thiscall UGroomBindingAsset::GetTargetGeometryCache(UGroomBindingAsset *this)

{
  return (this->TargetGeometryCache).field0_0x0.DebugPtr;
}

// GetTargetGeometryCacheMemberName @ 14dfca1e0

FName __cdecl UGroomBindingAsset::GetTargetGeometryCacheMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"TargetGeometryCache");
  return in_RCX;
}

// GetTargetMeshRequestedMinLOD @ 14dfca210

int __thiscall UGroomBindingAsset::GetTargetMeshRequestedMinLOD(UGroomBindingAsset *this)

{
  return this->TargetMeshRequestedMinLOD;
}

// GetTargetMeshRequestedMinLODMemberName @ 14dfca220

FName __cdecl UGroomBindingAsset::GetTargetMeshRequestedMinLODMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"TargetMeshRequestedMinLOD");
  return in_RCX;
}

// GetTargetMeshUsedMinLOD @ 14dfca250

int __thiscall UGroomBindingAsset::GetTargetMeshUsedMinLOD(UGroomBindingAsset *this)

{
  return this->TargetMeshUsedMinLOD;
}

// GetTargetMeshUsedMinLODMemberName @ 14dfca260

FName __cdecl UGroomBindingAsset::GetTargetMeshUsedMinLODMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"TargetMeshUsedMinLOD");
  return in_RCX;
}

// GetTargetSkeletalMesh @ 14dfca290

USkeletalMesh * __thiscall UGroomBindingAsset::GetTargetSkeletalMesh(UGroomBindingAsset *this)

{
  return (this->TargetSkeletalMesh).field0_0x0.DebugPtr;
}

// GetTargetSkeletalMeshMemberName @ 14dfca2a0

FName __cdecl UGroomBindingAsset::GetTargetSkeletalMeshMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"TargetSkeletalMesh");
  return in_RCX;
}

// HasAnyDependenciesCompiling @ 14dfcace0

bool __thiscall UGroomBindingAsset::HasAnyDependenciesCompiling(UGroomBindingAsset *this)

{
  return false;
}

// HasValidTarget @ 14dfcb150

bool __thiscall UGroomBindingAsset::HasValidTarget(UGroomBindingAsset *this)

{
  USkeletalMesh *pUVar1;
  
  if (this->GroomBindingType == SkeletalMesh) {
    pUVar1 = (this->TargetSkeletalMesh).field0_0x0.DebugPtr;
  }
  else {
    if (this->GroomBindingType != GeometryCache) {
      return false;
    }
    pUVar1 = (USkeletalMesh *)(this->TargetGeometryCache).field0_0x0.DebugPtr;
  }
  if (pUVar1 == (USkeletalMesh *)0x0) {
    return false;
  }
  return true;
}

// InitResource @ 14dfcc820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomBindingAsset::InitResource(UGroomBindingAsset *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  FName *pFVar9;
  FHairStrandsRestRootResource *pFVar10;
  FHairStrandsRestRootResource *pFVar11;
  FHairStrandsRestRootResource *pFVar12;
  FName FVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  bool bVar23;
  undefined1 local_res18 [8];
  FHairResourceName local_res20 [8];
  FHairResourceName local_a8 [4];
  FLLMScope local_a4 [2];
  uint local_9c;
  FName local_98;
  FName local_90;
  FScriptContainerElement *local_88;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *local_80;
  FMemScope local_78;
  FName local_70;
  undefined1 local_68 [8];
  FString local_60 [2];
  
  FLLMScope::FLLMScope(local_a4,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_90 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(&local_78,&local_90,true);
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId310,"UGroomBindingAsset::InitResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
               ,0x136);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId310);
  }
  ReleaseResource(this,true);
  local_9c = (this->HairGroupsPlatformData).ArrayNum;
  uVar14 = (ulonglong)(int)local_9c;
  pTVar21 = (TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *)
            (this->HairGroupsPlatformData).AllocatorInstance.Data;
  local_80 = (TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *)
             ((longlong)pTVar21 + uVar14 * 0x38);
  do {
    pTVar4 = local_80;
    pFVar12 = (FHairStrandsRestRootResource *)0x0;
    if ((this->HairGroupsPlatformData).ArrayNum != (int)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupPlatformData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (pTVar21 == pTVar4) {
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_78);
      FLLMScope::~FLLMScope(local_a4);
      return;
    }
    iVar6 = (this->HairGroupResources).ArrayNum;
    piVar1 = &(this->HairGroupResources).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->HairGroupResources).AllocatorInstance,piVar1);
    }
    pFVar19 = (this->HairGroupResources).AllocatorInstance.Data;
    (this->HairGroupResources).ArrayNum = iVar6 + 1;
    pFVar19 = pFVar19 + (longlong)iVar6 * 0x20;
    DefaultConstructItems<UGroomBindingAsset::FHairGroupResource,int>(pFVar19,1);
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_60,(UObject *)0x0);
    iVar7 = (pFVar8->Data).ArrayNum;
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    pFVar9 = ::FName::FName(&local_70,iVar6,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                            FNAME_Add);
    local_98 = *pFVar9;
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    *(undefined8 *)pFVar19 = 0;
    if (0 < pTVar21->ArrayNum) {
      pFVar10 = ::operator_new(0x18);
      pFVar11 = pFVar12;
      if (pFVar10 != (FHairStrandsRestRootResource *)0x0) {
        pFVar11 = FHairStrandsRestRootResource::FHairStrandsRestRootResource
                            (pFVar10,pTVar21,Guides,local_res20,&local_98);
      }
      *(FHairStrandsRestRootResource **)pFVar19 = pFVar11;
      FHairStrandsRestRootResource::BeginInitResource(pFVar11);
    }
    *(undefined8 *)(pFVar19 + 8) = 0;
    bVar5 = IsHairStrandsEnabled(Strands,SP_NumPlatforms);
    if ((bVar5) && (0 < pTVar21[1].ArrayNum)) {
      pFVar10 = ::operator_new(0x18);
      pFVar11 = pFVar12;
      if (pFVar10 != (FHairStrandsRestRootResource *)0x0) {
        pFVar11 = FHairStrandsRestRootResource::FHairStrandsRestRootResource
                            (pFVar10,pTVar21 + 1,Strands,local_res20,&local_98);
      }
      *(FHairStrandsRestRootResource **)(pFVar19 + 8) = pFVar11;
      FHairStrandsRestRootResource::BeginInitResource(pFVar11);
    }
    bVar5 = IsHairStrandsEnabled(Cards,SP_NumPlatforms);
    if (bVar5) {
      uVar2 = pTVar21[2].ArrayNum;
      pFVar20 = pFVar19 + 0x10;
      iVar6 = *(int *)(pFVar19 + 0x18);
      pFVar22 = pFVar19 + 0x18;
      local_88 = pFVar20;
      if (iVar6 < (int)uVar2) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar2 - iVar6,(ForAnyElementType *)pFVar20,(int *)pFVar22,
                           (int *)(pFVar19 + 0x1c));
        memset(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar7 * 8,0,
               (longlong)(int)(uVar2 - iVar6) << 3);
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((int)uVar2 < iVar6) {
          uVar17 = iVar6 - uVar2;
          if (((int)(uVar2 | uVar17) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar17 != 0) {
            iVar6 = (*(int *)&pFVar22->field_0x0 - uVar17) - uVar2;
            if (iVar6 != 0) {
              memmove(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)(int)uVar2 * 8,
                      *(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)(int)uVar2 * 8 +
                      (longlong)(int)uVar17 * 8,(longlong)iVar6 << 3);
            }
            *(uint *)&pFVar22->field_0x0 = *(int *)&pFVar22->field_0x0 - uVar17;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(ForAnyElementType *)pFVar20,*(int *)&pFVar22->field_0x0,
                       (int *)(pFVar19 + 0x1c));
          }
        }
      }
      if (uVar2 != 0) {
        do {
          uVar18 = (uint)pFVar12;
          uVar16 = ~uVar18 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar18 < *(int *)&pFVar22->field_0x0) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar15 = (longlong)(int)uVar18;
          *(undefined8 *)(*(FScriptContainerElement **)&pFVar20->field_0x0 + lVar15 * 8) = 0;
          uVar17 = 0;
          if ((int)uVar18 < pTVar21[2].ArrayNum) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)(pTVar21[2].AllocatorInstance.Data + lVar15 * 0x10 + 8)) {
            pFVar12 = ::operator_new(0x18);
            if (pFVar12 == (FHairStrandsRestRootResource *)0x0) {
              pFVar12 = (FHairStrandsRestRootResource *)0x0;
            }
            else {
              FVar13 = GetAssetPathName(this,(int)local_68);
              uVar17 = 0;
              if ((int)uVar18 < pTVar21[2].ArrayNum) {
                uVar17 = uVar16;
              }
              if ((uVar17 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar12 = FHairStrandsRestRootResource::FHairStrandsRestRootResource
                                  (pFVar12,(TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>
                                            *)(pTVar21[2].AllocatorInstance.Data + lVar15 * 0x10),
                                   Cards,local_a8,(FName *)FVar13);
              pFVar20 = local_88;
            }
            pFVar22 = pFVar20 + 8;
            uVar17 = 0;
            if ((int)uVar18 < *(int *)&pFVar20[8].field_0x0) {
              uVar17 = uVar16;
            }
            if ((uVar17 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(FHairStrandsRestRootResource **)
             (*(FScriptContainerElement **)&pFVar20->field_0x0 + lVar15 * 8) = pFVar12;
            uVar17 = 0;
            if ((int)uVar18 < *(int *)&pFVar22->field_0x0) {
              uVar17 = uVar16;
            }
            if ((uVar17 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FHairStrandsRestRootResource::BeginInitResource
                      (*(FHairStrandsRestRootResource **)
                        (*(FScriptContainerElement **)&pFVar20->field_0x0 + lVar15 * 8));
          }
          pFVar12 = (FHairStrandsRestRootResource *)(ulonglong)(uVar18 + 1);
        } while (uVar18 + 1 < uVar2);
      }
    }
    pTVar21 = (TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *)&pTVar21[3].ArrayNum;
    uVar14 = (ulonglong)local_9c;
  } while( true );
}

// IsBindingAssetValid @ 14dfcec50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UGroomBindingAsset::IsBindingAssetValid(UGroomBindingAsset *param_1,bool param_2,bool param_3)

{
  int iVar1;
  UGroomAsset *pUVar2;
  bool bVar3;
  FStaticBasicLogRecord *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FString local_38;
  
  if ((param_1 == (UGroomBindingAsset *)0x0) || (bVar3 = IsHairStrandsBindingEnable(), !bVar3)) {
    return true;
  }
  if (param_1->bIsValid == false) {
    if (!param_3) {
      return false;
    }
    if ((byte)LogHairStrands._0_1_ < 3) {
      return false;
    }
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    pFVar4 = &::LOG_Static;
  }
  else {
    pUVar2 = (param_1->Groom).field0_0x0.DebugPtr;
    if (pUVar2 == (UGroomAsset *)0x0) {
      if (!param_3) {
        return false;
      }
      if ((byte)LogHairStrands._0_1_ < 3) {
        return false;
      }
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      pFVar4 = &::LOG_Static;
    }
    else {
      iVar1 = (param_1->GroupInfos).ArrayNum;
      if (iVar1 == 0) {
        if (!param_3) {
          return false;
        }
        if ((byte)LogHairStrands._0_1_ < 3) {
          return false;
        }
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        pFVar4 = &::LOG_Static;
      }
      else {
        pFVar5 = (param_1->GroupInfos).AllocatorInstance.Data;
        uVar6 = 0;
        pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((param_1->GroupInfos).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FGoomBindingGroupInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res8);
          }
          if (pFVar5 == pFVar7) {
            return true;
          }
          if (*(int *)(pFVar5 + 8) == 0) {
            if (!param_3) {
              return false;
            }
            if ((byte)LogHairStrands._0_1_ < 3) {
              return false;
            }
            local_res8 = (FName)((param_1->Groom).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_res8,&local_38);
            pFVar4 = &::LOG_Static;
            goto LAB_14dfcee0f;
          }
          bVar3 = DoesGroomNeedStrandsBinding((param_1->Groom).field0_0x0.DebugPtr,uVar6);
          if (((bVar3) && (*(int *)pFVar5 == 0)) &&
             (bVar3 = IsHairStrandsEnabled(Strands,SP_NumPlatforms), bVar3)) break;
          uVar6 = uVar6 + 1;
          pFVar5 = pFVar5 + 0x10;
        }
        if (!param_3) {
          return false;
        }
        if ((byte)LogHairStrands._0_1_ < 3) {
          return false;
        }
        local_res8 = (FName)((param_1->Groom).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        pFVar4 = &::LOG_Static;
      }
    }
  }
LAB_14dfcee0f:
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogHairStrands);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsCompatible @ 14dfcee60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UGroomBindingAsset::IsCompatible(UGeometryCache *param_1,UGroomBindingAsset *param_2,bool param_3)

{
  bool bVar1;
  FStaticBasicLogRecord *pFVar2;
  FName local_res10;
  TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (((param_2 == (UGroomBindingAsset *)0x0) || (param_1 == (UGeometryCache *)0x0)) ||
     (bVar1 = IsHairStrandsBindingEnable(), !bVar1)) {
    return true;
  }
  if (param_2->GroomBindingType != GeometryCache) {
    if (!param_3) {
      return false;
    }
    if ((byte)LogHairStrands._0_1_ < 3) {
      return false;
    }
    local_res10 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
    goto LAB_14dfcf010;
  }
  if ((param_2->TargetGeometryCache).field0_0x0.DebugPtr == (UGeometryCache *)0x0) {
    if (!param_3) {
      return false;
    }
    if ((byte)LogHairStrands._0_1_ < 3) {
      return false;
    }
    local_res10 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
    goto LAB_14dfcf010;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UGeometryCache::GetMeshDataAtTime(param_1,0.0,&local_28);
  if (local_28.ArrayNum < 2) {
    if (local_28.ArrayNum != 0) {
      DestructItems<FGeometryCacheMeshData,int>
                ((FGeometryCacheMeshData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if ((FGeometryCacheMeshData *)local_28.AllocatorInstance.Data == (FGeometryCacheMeshData *)0x0
         ) {
        return true;
      }
      FMemory::Free(local_28.AllocatorInstance.Data);
      return true;
    }
    if ((param_3) && (2 < (byte)LogHairStrands._0_1_)) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_18);
      pFVar2 = &::LOG_Static;
      goto LAB_14dfcefd6;
    }
  }
  else if ((param_3) && (2 < (byte)LogHairStrands._0_1_)) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    pFVar2 = &::LOG_Static;
LAB_14dfcefd6:
    UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogHairStrands);
    if ((FGeometryCacheMeshData *)local_18.Data.AllocatorInstance.Data !=
        (FGeometryCacheMeshData *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  local_18.Data.AllocatorInstance.Data = local_28.AllocatorInstance.Data;
LAB_14dfcf010:
  if ((FGeometryCacheMeshData *)local_18.Data.AllocatorInstance.Data !=
      (FGeometryCacheMeshData *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsCompatible @ 14dfcf060

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UGroomBindingAsset::IsCompatible(UGroomAsset *param_1,UGroomBindingAsset *param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  UGroomAsset *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FName local_158;
  FName local_150;
  longlong local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  if (((param_2 == (UGroomBindingAsset *)0x0) || (param_1 == (UGroomAsset *)0x0)) ||
     (bVar5 = IsHairStrandsBindingEnable(), !bVar5)) {
    return true;
  }
  pUVar3 = (param_2->Groom).field0_0x0.DebugPtr;
  if (pUVar3 == (UGroomAsset *)0x0) {
    if ((byte)LogHairStrands._0_1_ < 3) {
      return false;
    }
    if (!param_3) {
      return false;
    }
    local_108 = (FName)param_2->_padding_;
    ::FName::ToString(&local_108,&local_70);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
  }
  else {
    if (pUVar3->bIsInitialized == false) {
      return false;
    }
    plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 0x1c8))(param_1,local_60);
    pUVar3 = (param_2->Groom).field0_0x0.DebugPtr;
    plVar9 = (longlong *)(**(code **)(pUVar3->_padding_ + 0x1c8))(pUVar3,local_50);
    if ((*plVar8 == *plVar9) && (plVar8[1] == plVar9[1])) {
      uVar1 = (param_1->HairGroupsPlatformData).ArrayNum;
      if (uVar1 == (param_2->GroupInfos).ArrayNum) {
        uVar11 = 0;
        if (uVar1 == 0) {
          return true;
        }
        while( true ) {
          uVar10 = ~uVar11 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar11 < (param_1->HairGroupsPlatformData).ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar12 = (longlong)(int)uVar11;
          local_148 = lVar12 * 2000;
          iVar2 = *(int *)((param_1->HairGroupsPlatformData).AllocatorInstance.Data + local_148 + 8)
          ;
          uVar7 = 0;
          if ((int)uVar11 < (param_2->GroupInfos).ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((iVar2 != 0) &&
             (iVar2 != *(int *)((param_2->GroupInfos).AllocatorInstance.Data + lVar12 * 0x10 + 8)))
          break;
          bVar5 = DoesGroomNeedStrandsBinding(param_1,uVar11);
          if (bVar5) {
            uVar7 = 0;
            if ((int)uVar11 < (param_1->HairGroupsPlatformData).ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar2 = *(int *)((param_1->HairGroupsPlatformData).AllocatorInstance.Data +
                            local_148 + 0x2c8);
            uVar7 = 0;
            if ((int)uVar11 < (param_2->GroupInfos).ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((iVar2 != 0) &&
               (iVar2 != *(int *)((param_2->GroupInfos).AllocatorInstance.Data + lVar12 * 0x10))) {
              if ((byte)LogHairStrands._0_1_ < 3) {
                return false;
              }
              if (!param_3) {
                return false;
              }
              local_130 = (FName)param_1->_padding_;
              ::FName::ToString(&local_130,&local_b0);
              local_128 = (FName)param_2->_padding_;
              ::FName::ToString(&local_128,&local_c0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
              local_70.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                local_70.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
              }
              goto LAB_14dfcf5df;
            }
          }
          uVar11 = uVar11 + 1;
          if (uVar1 <= uVar11) {
            return true;
          }
        }
        if ((byte)LogHairStrands._0_1_ < 3) {
          return false;
        }
        if (!param_3) {
          return false;
        }
        local_140 = (FName)param_1->_padding_;
        ::FName::ToString(&local_140,&local_d0);
        local_138 = (FName)param_2->_padding_;
        ::FName::ToString(&local_138,&local_e0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
        local_70.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          local_70.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((byte)LogHairStrands._0_1_ < 3) {
          return false;
        }
        if (!param_3) {
          return false;
        }
        local_158 = (FName)param_1->_padding_;
        ::FName::ToString(&local_158,&local_f0);
        local_150 = (FName)param_2->_padding_;
        ::FName::ToString(&local_150,&local_100);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
        local_70.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
          local_70.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
        }
      }
    }
    else {
      if ((byte)LogHairStrands._0_1_ < 3) {
        return false;
      }
      local_120 = (FName)param_1->_padding_;
      ::FName::ToString(&local_120,&local_80);
      local_118 = (FName)((param_2->Groom).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_118,&local_90);
      local_110 = (FName)param_2->_padding_;
      ::FName::ToString(&local_110,&local_a0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
        local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
      }
    }
  }
LAB_14dfcf5df:
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsCompatible @ 14dfcf600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UGroomBindingAsset::IsCompatible(USkeletalMesh *param_1,UGroomBindingAsset *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FString local_48;
  FString local_38;
  
  if (((param_2 == (UGroomBindingAsset *)0x0) || (param_1 == (USkeletalMesh *)0x0)) ||
     (bVar3 = IsHairStrandsBindingEnable(), !bVar3)) {
    return true;
  }
  if (param_2->GroomBindingType == SkeletalMesh) {
    if ((param_2->TargetSkeletalMesh).field0_0x0.DebugPtr == (USkeletalMesh *)0x0) {
      if (!param_3) {
        return false;
      }
      if ((byte)LogHairStrands._0_1_ < 3) {
        return false;
      }
      local_res10 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      iVar1 = (param_2->HairGroupResources).ArrayNum;
      pFVar7 = (param_2->HairGroupResources).AllocatorInstance.Data;
      pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
      while( true ) {
        if ((param_2->HairGroupResources).ArrayNum != iVar1) {
          `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupResource_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_res10);
        }
        if (pFVar7 == pFVar6) {
          return true;
        }
        if ((*(longlong *)pFVar7 != 0) &&
           (iVar2 = *(int *)(*(longlong *)pFVar7 + 8),
           iVar4 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1), iVar4 != iVar2)) {
          if (!param_3) {
            return false;
          }
          if ((byte)LogHairStrands._0_1_ < 3) {
            return false;
          }
          (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
          local_res10 = (FName)param_1->_padding_;
          ::FName::ToString(&local_res10,&local_38);
          local_res10 = (FName)param_2->_padding_;
          ::FName::ToString(&local_res10,&local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
          FVar5.Data = local_38.Data.AllocatorInstance.Data;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
            FVar5.Data = local_38.Data.AllocatorInstance.Data;
          }
          goto LAB_14dfcf8ce;
        }
        if (((*(longlong *)(pFVar7 + 8) != 0) &&
            (iVar2 = *(int *)(*(longlong *)(pFVar7 + 8) + 8),
            iVar4 = (**(code **)(param_1->_padding_ + 0x3d0))(), iVar4 != iVar2)) &&
           (bVar3 = IsHairStrandsEnabled(Strands,SP_NumPlatforms), bVar3)) break;
        pFVar7 = pFVar7 + 0x20;
      }
      if (!param_3) {
        return false;
      }
      if ((byte)LogHairStrands._0_1_ < 3) {
        return false;
      }
      (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      local_res10 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res10,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    if (!param_3) {
      return false;
    }
    if ((byte)LogHairStrands._0_1_ < 3) {
      return false;
    }
    local_res10 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
LAB_14dfcf8ce:
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return false;
}

// IsCompiling @ 14dfcf910

bool __thiscall UGroomBindingAsset::IsCompiling(UGroomBindingAsset *this)

{
  if (((this->HairGroupPlatformDataToDelete).Tail == (TNode *)0x0) &&
     ((this->HairGroupResourcesToDelete).Tail == (TNode *)0x0)) {
    return false;
  }
  return true;
}

// PostLoad @ 14dfd2400

void __thiscall UGroomBindingAsset::PostLoad(UGroomBindingAsset *this)

{
  int iVar1;
  UGroomAsset *this_00;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UObject::PostLoad((UObject *)this);
  bVar2 = IsGroomEnabled();
  if (bVar2) {
    pFVar4 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    uVar3 = CityHash32((char *)pwVar5,iVar6 * 2);
    this->AssetNameHash = uVar3;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this_00 = (this->Groom).field0_0x0.DebugPtr;
    if (this_00 != (UGroomAsset *)0x0) {
      UObject::ConditionalPostLoad((UObject *)this_00);
    }
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((!bVar2) && (this->bIsValid != false)) {
      InitResource(this);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// PostSaveRoot @ 14dfd2500

void __thiscall
UGroomBindingAsset::PostSaveRoot(UGroomBindingAsset *this,FObjectPostSaveRootContext param_1)

{
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)param_1;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PostSaveRoot((UObject *)this,(FObjectPostSaveRootContext)local_res10);
  return;
}

// PreSave @ 14dfd2530

void __thiscall UGroomBindingAsset::PreSave(UGroomBindingAsset *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// ReleaseResource @ 14dfd53d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGroomBindingAsset::ReleaseResource(UGroomBindingAsset *this,bool param_1)

{
  TArray<FHairStrandsRestRootResource_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  TNode *pTVar4;
  FHairStrandsRestRootResource *pFVar5;
  FHairStrandsRestRootResource *pFVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_f8 [32];
  undefined1 local_c7 [3];
  uint local_c4;
  undefined1 local_c0 [16];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *local_a0;
  UGroomBindingAsset *local_98;
  undefined8 local_80 [3];
  code *local_68 [2];
  undefined **local_58;
  FHairStrandsRestRootResource *local_50;
  FHairStrandsRestRootResource *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c4 = (this->HairGroupResources).ArrayNum;
  uVar11 = (ulonglong)(int)local_c4;
  local_98 = this;
  if (0 < (int)local_c4) {
    local_a0 = &this->HairGroupResources;
    pFVar14 = (local_a0->AllocatorInstance).Data;
    pFVar15 = pFVar14 + uVar11 * 0x20;
    while( true ) {
      pTVar10 = local_a0;
      if (local_a0->ArrayNum != (int)uVar11) {
        `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupResource,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_c7);
      }
      if (pFVar14 == pFVar15) break;
      local_c0._0_8_ = *(undefined8 *)pFVar14;
      local_c0._8_8_ = *(undefined8 *)(pFVar14 + 8);
      local_b0.Data._0_1_ = param_1;
      local_68[0] = (code *)0x0;
      local_40 = (undefined ***)0x0;
      local_40 = FMemory::Malloc(0x20,8);
      *local_40 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UGroomBindingAsset::ReleaseResource'::`9'::<lambda_1>,1,1>
                   ::_vftable_;
      local_40[1] = (undefined **)local_c0._0_8_;
      local_40[2] = (undefined **)local_c0._8_8_;
      local_40[3] = (undefined **)local_b0.Data;
      if (local_40 + 1 != (undefined ***)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGroomBindingAsset::ReleaseResource'::__l9::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
      }
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_UGroomBindingAsset::ReleaseResource_::__l9::TSTR_ReleaseHairStrandsResourceCommand390>_>
                (&UE::RenderCommandPipe::Groom,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        pppuVar12 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar12 = local_40;
        }
        (*(code *)(*pppuVar12)[2])();
      }
      *(longlong *)pFVar14 = 0;
      *(longlong *)(pFVar14 + 8) = 0;
      puVar13 = *(undefined8 **)(pFVar14 + 0x10);
      iVar3 = *(int *)(pFVar14 + 0x18);
      puVar2 = puVar13 + iVar3;
      while( true ) {
        if (*(int *)(pFVar14 + 0x18) != iVar3) {
          `TCheckedPointerIterator<FHairStrandsRestRootResource_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_c7);
        }
        if (puVar13 == puVar2) break;
        local_50 = (FHairStrandsRestRootResource *)*puVar13;
        local_40 = (undefined ***)0x0;
        local_58 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UGroomBindingAsset::ReleaseResource'::`13'::<lambda_2>,1,0>
                    ::_vftable_;
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGroomBindingAsset::ReleaseResource'::__l13::<lambda_2>,void,FRHICommandList_&>
                      ::Call;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_UGroomBindingAsset::ReleaseResource_::__l13::TSTR_ReleaseHairStrandsResourceCommand413>_>
                  (&UE::RenderCommandPipe::Groom,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
        if (local_68[0] != (code *)0x0) {
          pppuVar12 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar12 = local_40;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      pFVar14 = pFVar14 + 0x20;
      uVar11 = (ulonglong)local_c4;
    }
    DestructItems<UGroomBindingAsset::FHairGroupResource,int>
              ((FHairGroupResource *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
    this = local_98;
    pTVar10->ArrayNum = 0;
    if (pTVar10->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar10->AllocatorInstance,0,&pTVar10->ArrayMax);
    }
  }
  pFVar14 = (FScriptContainerElement *)0x0;
  while (pTVar4 = ((this->HairGroupResourcesToDelete).Tail)->NextNode, pTVar4 != (TNode *)0x0) {
    pFVar5 = (pTVar4->Item).SimRootResources;
    pTVar1 = &(pTVar4->Item).CardsRootResources;
    pFVar6 = (pTVar4->Item).RenRootResources;
    if ((TArray<FHairStrandsRestRootResource_*,TSizedDefaultAllocator<32>_> *)local_80 != pTVar1) {
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar4->Item).CardsRootResources.ArrayNum = 0;
      (pTVar4->Item).CardsRootResources.ArrayMax = 0;
    }
    pTVar7 = (this->HairGroupResourcesToDelete).Tail;
    (this->HairGroupResourcesToDelete).Tail = pTVar4;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_c0._0_8_ = (FHairStrandsRestRootResource *)0x0;
    local_c0._8_8_ = (FHairStrandsRestRootResource *)0x0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    FHairGroupResource::operator=(&pTVar4->Item,(FHairGroupResource *)local_c0);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (pTVar7 != (TNode *)0x0) {
      pFVar15 = (pTVar7->Item).CardsRootResources.AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      ::operator_delete(pTVar7,0x28);
    }
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UGroomBindingAsset::ReleaseResource'::`15'::<lambda_3>,1,0>::
                _vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGroomBindingAsset::ReleaseResource'::__l15::<lambda_3>,void,FRHICommandList_&>
                  ::Call;
    local_50 = pFVar5;
    local_48 = pFVar6;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_UGroomBindingAsset::ReleaseResource_::__l15::TSTR_ReleaseHairStrandsResourceCommand434>_>
              (&UE::RenderCommandPipe::Groom,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar12 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar12 = local_40;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  while (pTVar8 = ((this->HairGroupPlatformDataToDelete).Tail)->NextNode, pTVar8 != (TNode *)0x0) {
    pFVar5 = (FHairStrandsRestRootResource *)pTVar8->Item;
    pTVar9 = (this->HairGroupPlatformDataToDelete).Tail;
    (this->HairGroupPlatformDataToDelete).Tail = pTVar8;
    pTVar8->Item = (FHairGroupPlatformDataArray *)0x0;
    ::operator_delete(pTVar9,0x10);
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UGroomBindingAsset::ReleaseResource'::`17'::<lambda_4>,1,0>::
                _vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGroomBindingAsset::ReleaseResource'::__l17::<lambda_4>,void,FRHICommandList_&>
                  ::Call;
    local_50 = pFVar5;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_UGroomBindingAsset::ReleaseResource_::__l17::TSTR_ReleaseHairStrandsPlatformDataCommand455>_>
              (&UE::RenderCommandPipe::Groom,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar12 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar12 = local_40;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// RemoveHairGroupResourcesToDelete @ 14dfd60d0

bool __thiscall
UGroomBindingAsset::RemoveHairGroupResourcesToDelete
          (UGroomBindingAsset *this,FHairGroupResource *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  FHairGroupResource local_28;
  
  pTVar1 = ((this->HairGroupResourcesToDelete).Tail)->NextNode;
  if (pTVar1 == (TNode *)0x0) {
    return false;
  }
  FHairGroupResource::operator=(param_1,&pTVar1->Item);
  pTVar2 = (this->HairGroupResourcesToDelete).Tail;
  (this->HairGroupResourcesToDelete).Tail = pTVar1;
  local_28.CardsRootResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.CardsRootResources.ArrayNum = 0;
  local_28.CardsRootResources.ArrayMax = 0;
  local_28.SimRootResources = (FHairStrandsRestRootResource *)0x0;
  local_28.RenRootResources = (FHairStrandsRestRootResource *)0x0;
  FHairGroupResource::operator=(&pTVar1->Item,&local_28);
  if (local_28.CardsRootResources.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.CardsRootResources.AllocatorInstance.Data);
  }
  if (pTVar2 != (TNode *)0x0) {
    pFVar3 = (pTVar2->Item).CardsRootResources.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar2,0x28);
  }
  return true;
}

// Reset @ 14dfd6370

void __thiscall UGroomBindingAsset::Reset(UGroomBindingAsset *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  FlushRenderingCommandIfUsed(this);
  ReleaseResource(this,false);
  pFVar8 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  iVar2 = (this->HairGroupsPlatformData).ArrayNum;
  pFVar6 = pFVar8 + 0x1c;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((this->HairGroupsPlatformData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupPlatformData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    DestructItems<FHairStrandsRootBulkData,int>
              (*(FHairStrandsRootBulkData **)&pFVar8->field_0x0,*(int *)(pFVar6 + -0x14));
    *(undefined4 *)(pFVar6 + -0x14) = 0;
    if (*(int *)(pFVar6 + -0x10) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1d8,8,0,(ForAnyElementType *)pFVar8,0,(int *)(pFVar6 + -0x10));
    }
    DestructItems<FHairStrandsRootBulkData,int>
              (*(FHairStrandsRootBulkData **)(pFVar6 + -0xc),*(int *)(pFVar6 + -4));
    *(undefined4 *)(pFVar6 + -4) = 0;
    if (*(int *)pFVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1d8,8,0,(ForAnyElementType *)(pFVar6 + -0xc),0,(int *)pFVar6);
    }
    iVar3 = *(int *)(pFVar6 + 0xc);
    pFVar4 = *(ForAnyElementType **)(pFVar6 + 4);
    pFVar5 = pFVar4 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)(pFVar6 + 0xc) != iVar3) {
        `TCheckedPointerIterator<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      DestructItems<FHairStrandsRootBulkData,int>
                ((FHairStrandsRootBulkData *)pFVar4->Data,*(int *)&pFVar4[1].Data);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      *(undefined4 *)&pFVar4[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1d8,8,0,pFVar4,0,piVar1);
      }
      pFVar4 = pFVar4 + 2;
    }
    pFVar8 = pFVar8 + 0x38;
    pFVar6 = pFVar6 + 0x38;
  }
  this->bIsValid = false;
  return;
}

// Serialize @ 14dfd68a0

void __thiscall UGroomBindingAsset::Serialize(UGroomBindingAsset *this,FArchive *param_1)

{
  bool bVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  bVar1 = IsGroomEnabled();
  if (bVar1) {
    InternalSerializePlatformDatas(param_1,(UObject *)this,&this->HairGroupsPlatformData,0);
    this->bIsValid = true;
  }
  return;
}

// Serialize @ 14dfd6900

void __thiscall
UGroomBindingAsset::Serialize(UGroomBindingAsset *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FAnimObjectVersion::GUID);
  bVar1 = IsGroomEnabled();
  if (bVar1) {
    InternalSerializePlatformDatas(pFVar2,(UObject *)this,&this->HairGroupsPlatformData,0);
    this->bIsValid = true;
  }
  return;
}

// SetGroom @ 14dfd6b00

void __thiscall UGroomBindingAsset::SetGroom(UGroomBindingAsset *this,UGroomAsset *param_1)

{
  if ((this->Groom).field0_0x0.DebugPtr != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGroomAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Groom).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetGroomBindingType @ 14dfd6b50

void __thiscall
UGroomBindingAsset::SetGroomBindingType(UGroomBindingAsset *this,EGroomBindingMeshType param_1)

{
  this->GroomBindingType = param_1;
  return;
}

// SetGroupInfos @ 14dfd6b60

void __thiscall
UGroomBindingAsset::SetGroupInfos
          (UGroomBindingAsset *this,
          TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_>::operator=(&this->GroupInfos,param_1);
  return;
}

// SetHairGroupResources @ 14dfd6b70

void __thiscall
UGroomBindingAsset::SetHairGroupResources
          (UGroomBindingAsset *this,
          TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FHairGroupResource *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar2 = &this->HairGroupResources;
  if (pTVar2 != param_1) {
    DestructItems<UGroomBindingAsset::FHairGroupResource,int>
              ((FHairGroupResource *)(pTVar2->AllocatorInstance).Data,
               (this->HairGroupResources).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->HairGroupResources).ArrayMax;
    pFVar4 = (FHairGroupResource *)(param_1->AllocatorInstance).Data;
    (this->HairGroupResources).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<UGroomBindingAsset::FHairGroupResource,UGroomBindingAsset::FHairGroupResource,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  DestructItems<UGroomBindingAsset::FHairGroupResource,int>
            ((FHairGroupResource *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar5);
  return;
}

// SetMatchingSection @ 14dfd7040

void __thiscall UGroomBindingAsset::SetMatchingSection(UGroomBindingAsset *this,int param_1)

{
  this->MatchingSection = param_1;
  return;
}

// SetNumInterpolationPoints @ 14dfd82b0

void __thiscall UGroomBindingAsset::SetNumInterpolationPoints(UGroomBindingAsset *this,int param_1)

{
  this->NumInterpolationPoints = param_1;
  return;
}

// SetSourceGeometryCache @ 14dfd8390

void __thiscall
UGroomBindingAsset::SetSourceGeometryCache(UGroomBindingAsset *this,UGeometryCache *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGeometryCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SourceGeometryCache).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SourceGeometryCache).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSourceMeshRequestedLOD @ 14dfd83e0

void __thiscall UGroomBindingAsset::SetSourceMeshRequestedLOD(UGroomBindingAsset *this,int param_1)

{
  this->SourceMeshRequestedLOD = param_1;
  return;
}

// SetSourceMeshUsedLOD @ 14dfd83f0

void __thiscall UGroomBindingAsset::SetSourceMeshUsedLOD(UGroomBindingAsset *this,int param_1)

{
  this->SourceMeshUsedLOD = param_1;
  return;
}

// SetSourceSkeletalMesh @ 14dfd8400

void __thiscall
UGroomBindingAsset::SetSourceSkeletalMesh(UGroomBindingAsset *this,USkeletalMesh *param_1)

{
  if ((this->SourceSkeletalMesh).field0_0x0.DebugPtr != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SourceSkeletalMesh).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetTargetBindingAttribute @ 14dfd84d0

void __thiscall
UGroomBindingAsset::SetTargetBindingAttribute(UGroomBindingAsset *this,FName param_1)

{
  this->TargetBindingAttribute = param_1;
  return;
}

// SetTargetGeometryCache @ 14dfd84e0

void __thiscall
UGroomBindingAsset::SetTargetGeometryCache(UGroomBindingAsset *this,UGeometryCache *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGeometryCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->TargetGeometryCache).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->TargetGeometryCache).field0_0x0.DebugPtr = param_1;
  return;
}

// SetTargetMeshRequestedMinLOD @ 14dfd8530

void __thiscall
UGroomBindingAsset::SetTargetMeshRequestedMinLOD(UGroomBindingAsset *this,int param_1)

{
  this->TargetMeshRequestedMinLOD = param_1;
  return;
}

// SetTargetMeshUsedMinLOD @ 14dfd8540

void __thiscall UGroomBindingAsset::SetTargetMeshUsedMinLOD(UGroomBindingAsset *this,int param_1)

{
  this->TargetMeshUsedMinLOD = param_1;
  return;
}

// SetTargetSkeletalMesh @ 14dfd8550

void __thiscall
UGroomBindingAsset::SetTargetSkeletalMesh(UGroomBindingAsset *this,USkeletalMesh *param_1)

{
  if ((this->TargetSkeletalMesh).field0_0x0.DebugPtr != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->TargetSkeletalMesh).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesUGroomBindingAsset @ 14dfd8940

void __cdecl UGroomBindingAsset::StaticRegisterNativesUGroomBindingAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1d;
  local_18.DataPtr = Z_Construct_UClass_UGroomBindingAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StreamInForCPUAccess @ 14dfd89c0

void __thiscall UGroomBindingAsset::StreamInForCPUAccess(UGroomBindingAsset *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FHairStrandsBulkCommon *pFVar5;
  FHairStrandsBulkCommon *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_68;
  FHairStreamingRequest local_60;
  
  if (this->bIsValid == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingAsset.cpp"
                       ,0x1ea,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res20 = (this->HairGroupsPlatformData).ArrayNum;
  uVar4 = (ulonglong)(int)local_res20;
  pFVar9 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  pFVar7 = pFVar9 + 0x18;
  pFVar8 = pFVar9 + uVar4 * 0x38;
  while( true ) {
    if ((this->HairGroupsPlatformData).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupPlatformData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    iVar1 = *(int *)pFVar7;
    pFVar5 = *(FHairStrandsBulkCommon **)(pFVar7 + -8);
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x3b;
    while( true ) {
      if (*(int *)pFVar7 != iVar1) {
        `TCheckedPointerIterator<FHairStrandsRootBulkData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar6) break;
      local_68 = (FName)this->_padding_;
      local_60.Chunks.ArrayNum = 0;
      local_60.Chunks.ArrayMax = 0;
      local_60.CurveCount = 0;
      local_60.PointCount = 0;
      local_60.LODIndex = 0;
      local_60.IORequest = (FBulkDataBatchRequest)0x0;
      local_60.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.bSupportOffsetLoad = true;
      FHairStreamingRequest::Request
                (&local_60,0x3fffff,0xffffff,pFVar5,param_1,true,false,&local_68,(bool *)0x0);
      DestructItems<FHairStreamingRequest::FChunk,int>
                ((FChunk *)local_60.Chunks.AllocatorInstance.Data,local_60.Chunks.ArrayNum);
      if ((FChunk *)local_60.Chunks.AllocatorInstance.Data != (FChunk *)0x0) {
        FMemory::Free(local_60.Chunks.AllocatorInstance.Data);
      }
      if (local_60.IORequest != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)local_60.IORequest + 0x10))();
      }
      pFVar5 = pFVar5 + 0x3b;
    }
    uVar4 = (ulonglong)local_res20;
    pFVar9 = pFVar9 + 0x38;
    pFVar7 = pFVar7 + 0x38;
  }
  return;
}

// TryInitializeContextForMeshes @ 14dfda2c0

bool __thiscall
UGroomBindingAsset::TryInitializeContextForMeshes
          (UGroomBindingAsset *this,FGroomBindingBuildContext *param_1)

{
  USkeletalMesh *pUVar1;
  bool bVar2;
  
  if (this->GroomBindingType == SkeletalMesh) {
    pUVar1 = (this->SourceSkeletalMesh).field0_0x0.DebugPtr;
    if (pUVar1 != (USkeletalMesh *)0x0) {
      bVar2 = GetSkeletalMeshLOD(this,pUVar1,this->SourceMeshRequestedLOD,true,
                                 (ITargetPlatform *)0x0,&param_1->SourceMeshLOD,
                                 &param_1->MeshLODReferences);
      if (!bVar2) {
        return false;
      }
    }
    pUVar1 = (this->TargetSkeletalMesh).field0_0x0.DebugPtr;
    if (pUVar1 != (USkeletalMesh *)0x0) {
      bVar2 = GetSkeletalMeshLOD(this,pUVar1,this->TargetMeshRequestedMinLOD,false,
                                 (ITargetPlatform *)0x0,&param_1->TargetMeshMinLOD,
                                 &param_1->MeshLODReferences);
      return bVar2;
    }
  }
  else {
    param_1->SourceMeshLOD = 0;
    param_1->TargetMeshMinLOD = 0;
  }
  return true;
}

// UpdateResource @ 14dfdb010

void __thiscall UGroomBindingAsset::UpdateResource(UGroomBindingAsset *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->HairGroupResources).AllocatorInstance.Data;
  iVar2 = (this->HairGroupResources).ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x20;
  pFVar5 = pFVar6 + 0x18;
  while( true ) {
    if ((this->HairGroupResources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UGroomBindingAsset::FHairGroupResource,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (*(FHairStrandsRestRootResource **)pFVar6 != (FHairStrandsRestRootResource *)0x0) {
      FHairStrandsRestRootResource::BeginUpdateResourceRHI(*(FHairStrandsRestRootResource **)pFVar6)
      ;
    }
    if (*(FHairStrandsRestRootResource **)(pFVar5 + -0x10) != (FHairStrandsRestRootResource *)0x0) {
      FHairStrandsRestRootResource::BeginUpdateResourceRHI
                (*(FHairStrandsRestRootResource **)(pFVar5 + -0x10));
    }
    puVar4 = *(undefined8 **)(pFVar5 + -8);
    iVar3 = *(int *)pFVar5;
    puVar1 = puVar4 + iVar3;
    while( true ) {
      if (*(int *)pFVar5 != iVar3) {
        `TCheckedPointerIterator<FHairStrandsRestRootResource_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar1) break;
      if ((FHairStrandsRestRootResource *)*puVar4 != (FHairStrandsRestRootResource *)0x0) {
        FHairStrandsRestRootResource::BeginUpdateResourceRHI
                  ((FHairStrandsRestRootResource *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    }
    pFVar6 = pFVar6 + 0x20;
    pFVar5 = pFVar5 + 0x20;
  }
  return;
}

// WaitUntilAsyncPropertyReleased @ 14dfdb100

void __thiscall
UGroomBindingAsset::WaitUntilAsyncPropertyReleased
          (UGroomBindingAsset *this,EGroomBindingAsyncProperties param_1,
          EGroomBindingAsyncPropertyLockType param_2)

{
  return;
}

// _getUObject @ 14dfdbae0

UObject * __thiscall UGroomBindingAsset::_getUObject(UGroomBindingAsset *this)

{
  return (UObject *)&this[-1].HairGroupsPlatformData.ArrayNum;
}

// execBuild @ 14dfdd680

void __cdecl UGroomBindingAsset::execBuild(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  ulonglong local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  undefined8 local_48;
  undefined8 local_40;
  FOnGroomBindingAssetBuildComplete local_38;
  FDestructionSentinel local_20;
  
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_48 = 0;
  local_40 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_38._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_50,(FReadAccessScope *)&local_20);
  local_38._8_8_ = local_48;
  local_38._16_8_ = local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_20);
  local_58 = 0;
  local_68 = (undefined1  [8])0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  Build((UGroomBindingAsset *)param_1,&local_38,
        (TDelegate<void___cdecl(UGroomBindingAsset_*,EGroomBindingAssetBuildResult),FDefaultDelegateUserPolicy>
         *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_20);
  if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  return;
}

// execGetGroom @ 14dfdd890

void __cdecl UGroomBindingAsset::execGetGroom(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x10;
  return;
}

// execGetGroomBindingType @ 14dfdd8c0

void __cdecl
UGroomBindingAsset::execGetGroomBindingType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x8;
  return;
}

// execGetGroupInfos @ 14dfdd8f0

void __cdecl UGroomBindingAsset::execGetGroupInfos(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *)
                     &param_1[3].field_0x8);
  return;
}

// execGetMatchingSection @ 14dfddaa0

void __cdecl
UGroomBindingAsset::execGetMatchingSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x24;
  return;
}

// execGetNumInterpolationPoints @ 14dfddad0

void __cdecl
UGroomBindingAsset::execGetNumInterpolationPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x20;
  return;
}

// execGetSourceGeometryCache @ 14dfddb30

void __cdecl
UGroomBindingAsset::execGetSourceGeometryCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x10;
  return;
}

// execGetSourceMeshRequestedLOD @ 14dfddb60

void __cdecl
UGroomBindingAsset::execGetSourceMeshRequestedLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x20;
  return;
}

// execGetSourceMeshUsedLOD @ 14dfddb90

void __cdecl
UGroomBindingAsset::execGetSourceMeshUsedLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x24;
  return;
}

// execGetSourceSkeletalMesh @ 14dfddbc0

void __cdecl
UGroomBindingAsset::execGetSourceSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  return;
}

// execGetTargetBindingAttribute @ 14dfddbf0

void __cdecl
UGroomBindingAsset::execGetTargetBindingAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 3);
  return;
}

// execGetTargetGeometryCache @ 14dfddc20

void __cdecl
UGroomBindingAsset::execGetTargetGeometryCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x18;
  return;
}

// execGetTargetMeshRequestedMinLOD @ 14dfddc50

void __cdecl
UGroomBindingAsset::execGetTargetMeshRequestedMinLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x8;
  return;
}

// execGetTargetMeshUsedMinLOD @ 14dfddc80

void __cdecl
UGroomBindingAsset::execGetTargetMeshUsedMinLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0xc;
  return;
}

// execGetTargetSkeletalMesh @ 14dfddcb0

void __cdecl
UGroomBindingAsset::execGetTargetSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 2);
  return;
}

// execSetGroom @ 14dfddec0

void __cdecl UGroomBindingAsset::execSetGroom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[1].field_0x10 != local_res8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)&param_1[1].field_0x10 = pUVar2;
  }
  return;
}

// execSetGroomBindingType @ 14dfddf70

void __cdecl
UGroomBindingAsset::execSetGroomBindingType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x8 = local_res8[0];
  return;
}

// execSetGroupInfos @ 14dfddff0

void __cdecl UGroomBindingAsset::execSetGroupInfos(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *)&param_1[3].field_0x8,
             pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetMatchingSection @ 14dfde670

void __cdecl
UGroomBindingAsset::execSetMatchingSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[2].field_0x24 = local_res8[0];
  return;
}

// execSetNumInterpolationPoints @ 14dfde700

void __cdecl
UGroomBindingAsset::execSetNumInterpolationPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[2].field_0x20 = local_res8[0];
  return;
}

// execSetSourceGeometryCache @ 14dfde830

void __cdecl
UGroomBindingAsset::execSetSourceGeometryCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[2].field_0x10 = pUVar2;
  return;
}

// execSetSourceMeshRequestedLOD @ 14dfde8d0

void __cdecl
UGroomBindingAsset::execSetSourceMeshRequestedLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[1].field_0x20 = local_res8[0];
  return;
}

// execSetSourceMeshUsedLOD @ 14dfde960

void __cdecl
UGroomBindingAsset::execSetSourceMeshUsedLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[1].field_0x24 = local_res8[0];
  return;
}

// execSetSourceSkeletalMesh @ 14dfde9f0

void __cdecl
UGroomBindingAsset::execSetSourceSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[1].field_0x18 != local_res8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)&param_1[1].field_0x18 = pUVar2;
  }
  return;
}

// execSetTargetBindingAttribute @ 14dfdeaa0

void __cdecl
UGroomBindingAsset::execSetTargetBindingAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(param_1 + 3) = local_res8;
  return;
}

// execSetTargetGeometryCache @ 14dfdeb30

void __cdecl
UGroomBindingAsset::execSetTargetGeometryCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[2].field_0x18 = pUVar2;
  return;
}

// execSetTargetMeshRequestedMinLOD @ 14dfdebd0

void __cdecl
UGroomBindingAsset::execSetTargetMeshRequestedMinLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[2].field_0x8 = local_res8[0];
  return;
}

// execSetTargetMeshUsedMinLOD @ 14dfdec60

void __cdecl
UGroomBindingAsset::execSetTargetMeshUsedMinLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  *(undefined4 *)&param_1[2].field_0xc = local_res8[0];
  return;
}

// execSetTargetSkeletalMesh @ 14dfdecf0

void __cdecl
UGroomBindingAsset::execSetTargetSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)(param_1 + 2) != local_res8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)(param_1 + 2) = pUVar2;
  }
  return;
}

