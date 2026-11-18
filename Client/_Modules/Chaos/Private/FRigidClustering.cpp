// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 76

// RemoveFilteredNodeConnections<bool> @ 143c856b0

void __thiscall
Chaos::FRigidClustering::RemoveFilteredNodeConnections<bool>
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType *pFVar14;
  uint uVar15;
  longlong lVar16;
  
  if ((param_1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusteredChild != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidClustering.h"
                         ,0x1ad,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges(param_1);
  uVar15 = pTVar10->ArrayNum - 1;
  piVar1 = &pTVar10->ArrayNum;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 << 4;
    do {
      uVar12 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar2 = *(longlong **)((pTVar10->AllocatorInstance).Data + lVar16);
      if ((plVar2 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Sibling != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidClustering.h"
                             ,0x1bf,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar11 = (longlong *)0x0;
      if (2 < *(byte *)((longlong)plVar2 + 0xc)) {
        plVar11 = plVar2;
      }
      uVar12 = *(uint *)(plVar11 + 1);
      lVar3 = *plVar11;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x688)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = (ForAnyElementType *)(*(longlong *)(lVar3 + 0x680) + (longlong)(int)uVar12 * 0x10);
      pFVar4 = pFVar14->Data;
      for (pFVar13 = pFVar4; pFVar13 != pFVar4 + (longlong)*(int *)&pFVar14[1].Data * 0x10;
          pFVar13 = pFVar13 + 0x10) {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar13 == param_1) {
          uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar4 >> 4);
          if (uVar12 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar12 < *(int *)&pFVar14[1].Data) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = *(int *)&pFVar14[1].Data + ~uVar12;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove(pFVar14->Data + (longlong)(int)uVar12 * 0x10,
                      pFVar14->Data + (longlong)(*(int *)&pFVar14[1].Data - iVar8) * 0x10,
                      (longlong)iVar8 << 4);
            }
            *(int *)&pFVar14[1].Data = *(int *)&pFVar14[1].Data + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,pFVar14,*(int *)&pFVar14[1].Data,
                       (int *)((longlong)&pFVar14[1].Data + 4));
          }
          break;
        }
      }
      pFVar4 = pFVar14->Data;
      for (pFVar13 = pFVar4; pFVar13 != pFVar4 + (longlong)*(int *)&pFVar14[1].Data * 0x10;
          pFVar13 = pFVar13 + 0x10) {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar13 == param_1) {
          if (((int)((longlong)pFVar13 - (longlong)pFVar4 >> 4) != -1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OtherEdges.IndexOfByKey(ClusteredChild) == INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidClustering.h"
                                 ,0x1c8,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
      }
      lVar16 = lVar16 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  iVar8 = *piVar1;
  if (iVar8 < 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,-iVar8,&pTVar10->AllocatorInstance,piVar1,&pTVar10->ArrayMax);
    DefaultConstructItems<Chaos::TConnectivityEdge<double>,int>
              ((pTVar10->AllocatorInstance).Data + (longlong)iVar9 * 0x10,-iVar8);
    return;
  }
  if (0 < iVar8) {
    *piVar1 = *piVar1 - iVar8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar10->AllocatorInstance,*piVar1,&pTVar10->ArrayMax);
  }
  return;
}

// FRigidClustering @ 143c88530

FRigidClustering * __thiscall
Chaos::FRigidClustering::FRigidClustering
          (FRigidClustering *this,FPBDRigidsEvolutionGBF *param_1,
          TPBDRigidClusteredParticles<double,3> *param_2,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  this->MEvolution = param_1;
  this->MParticles = param_2;
  this->AdvanceCount = 0;
  this->TotalProcessedClusters = 0;
  this->TotalReleasedChildren = 0;
  this->FrameProcessedClusters = 0;
  this->FrameReleasedChildren = 0;
  *(undefined8 *)&(this->TopLevelClusterParents).Elements = 0;
  *(undefined8 *)&(this->TopLevelClusterParents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TopLevelClusterParents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TopLevelClusterParents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TopLevelClusterParents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TopLevelClusterParents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TopLevelClusterParents).Elements.field_0x34 = 0;
  (this->TopLevelClusterParents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TopLevelClusterParents).HashSize = 0;
  *(undefined8 *)&this->TopLevelClusterParentsStrained = 0;
  *(undefined8 *)&(this->TopLevelClusterParentsStrained).field_0x8 = 0;
  *(undefined8 *)&(this->TopLevelClusterParentsStrained).field_0x20 = 0;
  *(undefined4 *)&(this->TopLevelClusterParentsStrained).field_0x28 = 0;
  *(undefined4 *)&(this->TopLevelClusterParentsStrained).field_0x2c = 0x80;
  *(undefined4 *)&(this->TopLevelClusterParentsStrained).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TopLevelClusterParentsStrained).field_0x34 = 0;
  *(undefined8 *)&(this->TopLevelClusterParentsStrained).field_0x40 = 0;
  *(undefined4 *)&(this->TopLevelClusterParentsStrained).field_0x48 = 0;
  *(undefined8 *)&this->MChildren = 0;
  *(undefined8 *)&(this->MChildren).field_0x8 = 0;
  *(undefined8 *)&(this->MChildren).field_0x20 = 0;
  *(undefined4 *)&(this->MChildren).field_0x28 = 0;
  *(undefined4 *)&(this->MChildren).field_0x2c = 0x80;
  *(undefined4 *)&(this->MChildren).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MChildren).field_0x34 = 0;
  *(undefined8 *)&(this->MChildren).field_0x40 = 0;
  *(undefined4 *)&(this->MChildren).field_0x48 = 0;
  FClusterUnionManager::FClusterUnionManager(&this->ClusterUnionManager,this,param_1);
  (this->MAllClusterBreakings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MAllClusterBreakings).ArrayNum = 0;
  (this->MAllClusterBreakings).ArrayMax = 0;
  (this->MAllClusterCrumblings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MAllClusterCrumblings).ArrayNum = 0;
  (this->MAllClusterCrumblings).ArrayMax = 0;
  *(undefined8 *)&(this->CrumbledSinceLastUpdate).Elements = 0;
  *(undefined8 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x20 = 0;
  this->MCollisionImpulseArrayDirty = true;
  this->DoGenerateBreakingData = false;
  *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x34 = 0;
  (this->CrumbledSinceLastUpdate).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CrumbledSinceLastUpdate).HashSize = 0;
  *(undefined8 *)&this->EmptyInternalClustersPerProxy = 0;
  *(undefined8 *)&(this->EmptyInternalClustersPerProxy).field_0x8 = 0;
  *(undefined8 *)&(this->EmptyInternalClustersPerProxy).field_0x20 = 0;
  *(undefined4 *)&(this->EmptyInternalClustersPerProxy).field_0x28 = 0;
  *(undefined4 *)&(this->EmptyInternalClustersPerProxy).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmptyInternalClustersPerProxy).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmptyInternalClustersPerProxy).field_0x34 = 0;
  *(undefined8 *)&(this->EmptyInternalClustersPerProxy).field_0x40 = 0;
  *(undefined4 *)&(this->EmptyInternalClustersPerProxy).field_0x48 = 0;
  *(undefined8 *)&this->MomentumRestoringDataByParticle = 0;
  *(undefined8 *)&(this->MomentumRestoringDataByParticle).field_0x8 = 0;
  *(undefined8 *)&(this->MomentumRestoringDataByParticle).field_0x20 = 0;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x28 = 0;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x2c = 0x80;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x34 = 0;
  *(undefined8 *)&(this->MomentumRestoringDataByParticle).field_0x40 = 0;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x48 = 0;
  this->MClusterConnectionFactor = 1.0;
  this->StrainModifiers = param_3;
  this->MClusterUnionConnectionType = DelaunayTriangulation;
  (this->DestructionSettings).PerAdvanceBreaksAllowed = 0x7fffffff;
  (this->DestructionSettings).PerAdvanceBreaksRescheduleLimit = 0x7fffffff;
  (this->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount = -1;
  (this->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount = -1;
  (this->DestructionSettings).bOptimizeForRuntimeMemory = false;
  return this;
}

// ~FRigidClustering @ 143c89330

void __thiscall Chaos::FRigidClustering::~FRigidClustering(FRigidClustering *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MomentumRestoringDataByParticle).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MomentumRestoringDataByParticle);
  *(undefined4 *)&(this->EmptyInternalClustersPerProxy).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EmptyInternalClustersPerProxy).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EmptyInternalClustersPerProxy);
  (this->CrumbledSinceLastUpdate).HashSize = 0;
  FVar2 = (this->CrumbledSinceLastUpdate).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CrumbledSinceLastUpdate).Elements);
  DestructItems<Chaos::FCrumblingData,int>
            ((FCrumblingData *)(this->MAllClusterCrumblings).AllocatorInstance.Data,
             (this->MAllClusterCrumblings).ArrayNum);
  pFVar3 = (this->MAllClusterCrumblings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MAllClusterBreakings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FClusterUnionManager::~FClusterUnionManager(&this->ClusterUnionManager);
  *(undefined4 *)&(this->MChildren).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MChildren).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MChildren);
  *(undefined4 *)&(this->TopLevelClusterParentsStrained).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TopLevelClusterParentsStrained).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TopLevelClusterParentsStrained);
  (this->TopLevelClusterParents).HashSize = 0;
  FVar2 = (this->TopLevelClusterParents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TopLevelClusterParents).Elements);
  return;
}

// operator() @ 143c896f0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::<lambda_1>::
operator()(void *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UnionFindInfo *pUVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  UnionFindInfo *pUVar5;
  int iVar6;
  
  if (param_1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    return (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  }
  iVar6 = 0;
  pUVar3 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
           ::FindChecked(*(void **)this,param_1);
  if (pUVar3->GroupId != param_1) {
    do {
      if ((9 < iVar6) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5292282805487668000>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                             ,0xb20,"findIters++ < 10"), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar1)();
        return pTVar4;
      }
      pUVar3 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
               ::FindChecked(*(void **)this,param_1);
      pUVar5 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
               ::FindChecked(*(void **)this,pUVar3->GroupId);
      pUVar3->GroupId = pUVar5->GroupId;
      param_1 = pUVar5->GroupId;
    } while ((param_1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
            (pUVar3 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                      ::FindChecked(*(void **)this,param_1), iVar6 = iVar6 + 1,
            pUVar3->GroupId != param_1));
    return param_1;
  }
  return param_1;
}

// operator() @ 143c8a150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FRigidClustering::UpdateConnectivityGraphUsingPointImplicit'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *this_01;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  FImplicitObject *pFVar17;
  TVector<double,3> *pTVar18;
  TTransform<double> *pTVar19;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  undefined4 uVar42;
  double dVar41;
  undefined1 auVar43 [16];
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  TGeometryParticleHandleImp<double,3,1> *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined1 local_2d0 [16];
  TGeometryParticleHandleImp<double,3,1> *local_2c0;
  TPBDRigidParticleHandleImp<double,3,1> *local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_270;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_318;
  plVar3 = *(longlong **)this;
  lVar27 = (longlong)param_1;
  iVar22 = (int)plVar3[1];
  uVar26 = 0;
  if (param_1 < iVar22) {
    uVar26 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (local_2f8 = lVar27, local_2f0 = (longlong)iVar22,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(*plVar3 + lVar27 * 8);
  local_2e8 = this_00;
  pFVar17 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00);
  if ((pFVar17 != (FImplicitObject *)0x0) &&
     (pFVar17 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(this_00),
     pFVar17->bHasBoundingBox != false)) {
    plVar3 = *(longlong **)((longlong)this + 8);
    iVar22 = (int)plVar3[1];
    uVar26 = 0;
    if (param_1 < iVar22) {
      uVar26 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (local_2f8 = lVar27, local_2f0 = (longlong)iVar22,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_2d0._8_8_ = lVar27 * 0x50 + *plVar3;
    pTVar18 = Chaos::TParticles<double,3>::GetX
                        ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
    uVar26 = (uint)this_00->_padding_;
    lVar24 = (longlong)(int)uVar26;
    lVar25 = this_00->_padding_;
    iVar22 = *(int *)(lVar25 + 0x50);
    uVar21 = 0;
    if ((int)uVar26 < iVar22) {
      uVar21 = ~uVar26 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (local_2f8 = lVar24, local_2f0 = (longlong)iVar22,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar13 = _UNK_150689688;
    dVar12 = ___xmm_3ff00000000000003ff0000000000000;
    lVar25 = *(longlong *)(lVar25 + 0x48);
    uVar26 = param_1 + 1;
    uVar1 = *(undefined8 *)(lVar25 + 8 + lVar24 * 0x10);
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar1;
    local_1a8.Rotation.ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar1 >> 0x20);
    local_1a8.Rotation.XY.m128d_f64[0] = (double)*(float *)(lVar25 + lVar24 * 0x10);
    local_1a8.Rotation.XY.m128d_f64[1] = (double)*(float *)(lVar25 + 4 + lVar24 * 0x10);
    local_1a8.Translation.XY.m128d_f64[0] = *(double *)pTVar18;
    local_1a8.Translation.XY.m128d_f64[1] = *(double *)&pTVar18->field_0x8;
    local_1a8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar18->field_0x10;
    local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_1a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_1a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_1a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    iVar22 = *(int *)(*(longlong *)this + 8) - uVar26;
    local_2d8 = (longlong)iVar22;
    if (0 < iVar22) {
      local_2e0 = lVar27 * 8;
      dVar37 = ___xmm_00000000000000003ff0000000000000;
      dVar41 = _UNK_150689518;
      do {
        lVar27 = local_2e0 + 8;
        plVar3 = *(longlong **)this;
        iVar22 = (int)plVar3[1];
        uVar21 = 0;
        if ((int)uVar26 < iVar22) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        local_2e0 = lVar27;
        if (uVar21 == 0) {
          local_2f8 = (longlong)(int)uVar26;
          local_2f0 = (longlong)iVar22;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_01 = *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar27 + *plVar3);
        uVar21 = *(uint *)&this_01->field_0x8;
        lVar27 = *(longlong *)this_01;
        iVar22 = *(int *)(lVar27 + 0x4c0);
        uVar23 = 0;
        if ((int)uVar21 < iVar22) {
          uVar23 = ~uVar21 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (local_2f8 = (longlong)(int)uVar21, local_2f0 = (longlong)iVar22,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar27 + 0x4b8) + (longlong)(int)uVar21 * 8) != 0) {
          pTVar18 = Chaos::TParticles<double,3>::GetX
                              (*(TParticles<double,3> **)this_01,*(int *)&this_01->field_0x8);
          uVar21 = *(uint *)&this_01->field_0x8;
          lVar25 = (longlong)(int)uVar21;
          lVar27 = *(longlong *)this_01;
          iVar22 = *(int *)(lVar27 + 0x50);
          uVar23 = 0;
          if ((int)uVar21 < iVar22) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (local_2f8 = lVar25, local_2f0 = (longlong)iVar22,
             bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar27 = *(longlong *)(lVar27 + 0x48);
          local_208.Translation.XY.m128d_f64[0] = *(double *)pTVar18;
          local_208.Translation.XY.m128d_f64[1] = *(double *)&pTVar18->field_0x8;
          uVar1 = *(undefined8 *)(lVar27 + 8 + lVar25 * 0x10);
          local_208.Rotation.ZW.m128d_f64[0] = (double)(float)uVar1;
          local_208.Rotation.ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar1 >> 0x20);
          local_208.Translation.ZW.m128d_f64[0] = *(double *)&pTVar18->field_0x10;
          local_208.Rotation.XY.m128d_f64[0] = (double)*(float *)(lVar27 + lVar25 * 0x10);
          local_208.Rotation.XY.m128d_f64[1] = (double)*(float *)(lVar27 + 4 + lVar25 * 0x10);
          local_208.Translation.ZW.m128d_f64[1] = 0.0;
          local_208.Scale3D.XY.m128d_f64[0] = dVar12;
          local_208.Scale3D.XY.m128d_f64[1] = dVar13;
          local_208.Scale3D.ZW.m128d_f64[0] = dVar37;
          local_208.Scale3D.ZW.m128d_f64[1] = dVar41;
          pTVar19 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_1a8,&local_148,&local_208);
          local_228 = (pTVar19->Scale3D).XY.m128d_f64[0];
          dStack_220 = (pTVar19->Scale3D).XY.m128d_f64[1];
          local_218 = (pTVar19->Scale3D).ZW.m128d_f64[0];
          dStack_210 = (pTVar19->Scale3D).ZW.m128d_f64[1];
          auVar2 = *(undefined1 (*) [16])(pTVar19->Rotation).XY.m128d_f64;
          auVar43 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
          dVar9 = (pTVar19->Translation).XY.m128d_f64[0];
          dVar10 = (pTVar19->Translation).XY.m128d_f64[1];
          dVar11 = (pTVar19->Translation).ZW.m128d_f64[0];
          pTVar20 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles(this_01);
          uVar23 = 0;
          uVar21 = (uint)pTVar20->Ptr->_padding_;
          if (uVar21 != 0) {
            dVar6 = auVar43._8_8_;
            dVar5 = auVar43._0_8_;
            dVar7 = auVar2._8_8_;
            auVar43 = blendpd(auVar2,auVar43,2);
            do {
              uVar16 = *(uint *)&this_01->field_0x8;
              lVar27 = *(longlong *)this_01;
              iVar22 = *(int *)(lVar27 + 0x4c0);
              uVar15 = 0;
              if ((int)uVar16 < iVar22) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (local_2f8 = (longlong)(int)uVar16, local_2f0 = (longlong)iVar22,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x4b8) + (longlong)(int)uVar16 * 8);
              iVar22 = *(int *)(lVar27 + 0x30);
              uVar16 = 0;
              if ((int)uVar23 < iVar22) {
                uVar16 = ~uVar23 >> 0x1f;
              }
              if (uVar16 == 0) {
                local_2f8 = (longlong)(int)uVar23;
                local_2f0 = (longlong)iVar22;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              lVar27 = *(longlong *)(lVar27 + 0x28);
              auVar32 = *(undefined1 (*) [16])(lVar27 + (longlong)(int)uVar23 * 0x18);
              dVar41 = auVar32._8_8_;
              dVar37 = *(double *)(lVar27 + 0x10 + (longlong)(int)uVar23 * 0x18);
              uVar16 = (uint)local_2e8->_padding_;
              lVar27 = local_2e8->_padding_;
              iVar22 = *(int *)(lVar27 + 0x68);
              uVar15 = 0;
              if ((int)uVar16 < iVar22) {
                uVar15 = ~uVar16 >> 0x1f;
              }
              auVar28._8_8_ = 0;
              auVar28._0_8_ = dVar37;
              auVar28 = blendpd(auVar32,auVar28,2);
              auVar35._0_8_ = dVar41 * auVar2._0_8_ - dVar7 * auVar32._0_8_;
              auVar35._8_8_ = dVar37 * dVar7 - dVar5 * dVar41;
              auVar39._8_4_ = SUB84(auVar35._8_8_,0);
              auVar39._0_8_ = auVar35._0_8_;
              auVar39._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
              auVar29._0_8_ = auVar28._0_8_ * dVar5 - auVar43._0_8_ * dVar37;
              auVar29._8_8_ = auVar28._8_8_ * dVar6 - auVar43._8_8_ * 0.0;
              auVar28 = blendpd(auVar35,auVar29,2);
              dVar38 = auVar39._8_8_ + auVar39._8_8_;
              dVar40 = auVar29._0_8_ + auVar29._0_8_;
              auVar36._0_8_ = auVar28._0_8_ + auVar28._0_8_;
              auVar36._8_8_ = auVar28._8_8_ + auVar28._8_8_;
              auVar33._8_4_ = SUB84(dVar40,0);
              auVar33._0_8_ = dVar38;
              uVar42 = (undefined4)((ulonglong)dVar40 >> 0x20);
              auVar33._12_4_ = uVar42;
              auVar30._8_4_ = SUB84(dVar40,0);
              auVar30._0_8_ = dVar38;
              auVar30._12_4_ = uVar42;
              auVar28 = blendpd(auVar30,auVar36,2);
              auVar34._0_8_ = auVar33._8_8_ * auVar2._0_8_ - dVar38 * dVar7;
              auVar34._8_8_ = auVar36._0_8_ * dVar7 - dVar40 * dVar5;
              auVar31._0_8_ = auVar28._0_8_ * dVar5 - auVar36._0_8_ * auVar43._0_8_;
              auVar31._8_8_ = auVar28._8_8_ * dVar6 - auVar36._8_8_ * auVar43._8_8_;
              auVar28 = blendpd(auVar34,auVar31,2);
              dVar38 = dVar38 * dVar6 + auVar32._0_8_ + auVar34._8_8_ + dVar9;
              dVar41 = dVar40 * dVar6 + dVar41 + auVar31._0_8_ + dVar10;
              local_288 = auVar36._0_8_ * dVar6 + dVar37 + auVar28._0_8_ + dVar11;
              local_298 = dVar38;
              dStack_290 = dVar41;
              local_270 = local_288;
              if ((uVar15 == 0) &&
                 (local_2f8 = (longlong)(int)uVar16, local_2f0 = (longlong)iVar22,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              auVar8._4_8_ = auVar31._8_8_;
              auVar8._0_4_ = (int)((ulonglong)dVar38 >> 0x20);
              auVar32._0_8_ = auVar8._0_8_ << 0x20;
              auVar32._8_4_ = SUB84(dVar41,0);
              auVar32._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              dVar37 = **(double **)((longlong)this + 0x10);
              local_2a0 = local_270 - local_270 * dVar37;
              local_2a8 = auVar32._8_8_ - auVar32._8_8_ * dVar37;
              local_2b0 = dVar38 - dVar38 * dVar37;
              dVar37 = Chaos::FImplicitObject::SignedDistance
                                 (*(FImplicitObject **)
                                   (*(longlong *)(lVar27 + 0x60) + (longlong)(int)uVar16 * 8),
                                  (TVector<double,3> *)&local_2b0);
              if (dVar37 < 0.0) {
                local_2c0 = local_2e8;
                local_2b8 = this_01;
                TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
                ::
                Emplace<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>
                          ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
                            *)local_2d0._8_8_,
                           (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                            *)local_2d0,(bool *)&local_2c0);
                dVar37 = ___xmm_00000000000000003ff0000000000000;
                dVar41 = _UNK_150689518;
                break;
              }
              uVar23 = uVar23 + 1;
              dVar37 = ___xmm_00000000000000003ff0000000000000;
              dVar41 = _UNK_150689518;
            } while (uVar23 < uVar21);
          }
        }
        uVar26 = uVar26 + 1;
        local_2d8 = local_2d8 + -1;
      } while (local_2d8 != 0);
    }
  }
  return;
}

// operator() @ 143c8a890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ECollisionVisitorResult __thiscall
`Chaos::FRigidClustering::TrackBreakingCollision'::__l5::<lambda_1>::operator()
          (void *this,FPBDCollisionConstraint *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  EObjectStateType EVar11;
  ECollisionVisitorResult EVar12;
  int iVar13;
  longlong lVar14;
  TVector<double,3> *pTVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  double *pdVar17;
  TVector<float,3> *pTVar18;
  uint uVar19;
  uint uVar20;
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  longlong *plVar22;
  longlong lVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
  *this_00;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  float fVar30;
  int local_res8 [2];
  FGenericParticleHandleImp local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res18;
  TGeometryParticleHandleImp<double,3,1> **local_res20;
  double local_238;
  double dStack_230;
  double local_228;
  ulonglong local_220;
  float local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8 [6];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  
  pTVar16 = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)this + 8);
  pTVar21 = param_1->Particle[0];
  lVar23 = 0xe0;
  lVar14 = 0xe0;
  if (pTVar21 != pTVar16) {
    lVar14 = 0xe8;
  }
  if (*(TGeometryParticleHandleImp<double,3,1> **)
       ((longlong)param_1->CollisionMargins + lVar14 + -0x18) != pTVar16) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5292282805487665863>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                        ,0x2c7,"Collision.GetParticle(1 - OtherIdx) == Rigid");
    if (!bVar10) {
      return Continue;
    }
    pcVar2 = (code *)swi(3);
    EVar12 = (*pcVar2)();
    return EVar12;
  }
  if (pTVar21 == pTVar16) {
    lVar23 = 0xe8;
  }
  pTVar16 = *(TGeometryParticleHandleImp<double,3,1> **)
             ((longlong)param_1->CollisionMargins + lVar23 + -0x18);
  if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return Continue;
  }
  pTVar24 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&pTVar16->_padding_ + 4)) {
    pTVar24 = pTVar16;
  }
  if (pTVar24 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return Continue;
  }
  fVar27 = *(float *)&param_1->AccumulatedImpulse;
  fVar28 = *(float *)&(param_1->AccumulatedImpulse).field_0x4;
  fVar30 = *(float *)&(param_1->AccumulatedImpulse).field_0x8;
  if (fVar28 * fVar28 + fVar27 * fVar27 + fVar30 * fVar30 <= __real_322bcc77) {
    return Continue;
  }
  if (pTVar21 == pTVar24) {
    uVar29 = (ulonglong)((uint)fVar27 ^ __xmm_80000000800000008000000080000000);
    fVar28 = (float)((uint)fVar28 ^ __xmm_80000000800000008000000080000000);
    fVar30 = (float)((uint)fVar30 ^ __xmm_80000000800000008000000080000000);
  }
  else {
    fVar30 = *(float *)&(param_1->AccumulatedImpulse).field_0x8;
    uVar29 = *(ulonglong *)&param_1->AccumulatedImpulse;
    fVar28 = (float)(uVar29 >> 0x20);
    local_220 = uVar29;
    local_218 = fVar30;
  }
  dVar4 = (double)(float)uVar29;
  dVar5 = (double)fVar28;
  dVar6 = (double)fVar30;
  local_res10.MHandle = pTVar24;
  local_res18 = pTVar24;
  Chaos::FPBDCollisionConstraint::CalculateWorldContactLocation
            (param_1,(TVector<double,3> *)&local_210);
  bVar10 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar10) {
    pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
      pTVar16 = pTVar24;
    }
    Chaos::TPBDRigidParticles<double,3>::PCom
              ((TPBDRigidParticles<double,3> *)pTVar16->_padding_,(TVector<double,3> *)&local_238,
               (int)pTVar16->_padding_);
  }
  else {
    pTVar15 = Chaos::TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pTVar24->_padding_,(int)pTVar24->_padding_);
    local_238 = *(double *)pTVar15;
    dStack_230 = *(double *)&pTVar15->field_0x8;
    local_228 = *(double *)&pTVar15->field_0x10;
  }
  pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
    pTVar16 = pTVar24;
  }
  dVar9 = (local_208 - dStack_230) * dVar6 - (local_200 - local_228) * dVar5;
  dVar7 = (local_200 - local_228) * dVar4 - (local_210 - local_238) * dVar6;
  dVar8 = (local_210 - local_238) * dVar5 - (local_208 - dStack_230) * dVar4;
  if (pTVar16 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143c8ab2d:
    pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&pTVar24->_padding_ + 4) != '\0') {
      pTVar16 = pTVar24;
    }
    if (pTVar16 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar16->_padding_ + 4)) {
        pTVar21 = pTVar16;
      }
      if (pTVar21 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar11 = Kinematic;
      }
      else {
        EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar21);
      }
      if (EVar11 == Sleeping) goto LAB_143c8ab58;
    }
    uVar25 = 0;
    uVar26 = 0;
  }
  else {
    pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar16->_padding_ + 4)) {
      pTVar21 = pTVar16;
    }
    if (pTVar21 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = Kinematic;
    }
    else {
      EVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar21);
    }
    if (EVar11 != Dynamic) goto LAB_143c8ab2d;
LAB_143c8ab58:
    pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
      pTVar16 = pTVar24;
    }
    pdVar17 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
    uVar25 = SUB84(*pdVar17,0);
    uVar26 = (undefined4)((ulonglong)*pdVar17 >> 0x20);
  }
  bVar10 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar10) {
    pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
      pTVar16 = pTVar24;
    }
    pTVar18 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvIConditioning
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar16);
    uVar20 = (uint)pTVar16->_padding_;
    lVar23 = (longlong)(int)uVar20;
    lVar14 = pTVar16->_padding_;
    uVar19 = 0;
    if ((int)uVar20 < *(int *)(lVar14 + 0x3a0)) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar2 = (code *)swi(3);
      EVar12 = (*pcVar2)();
      return EVar12;
    }
    lVar14 = *(longlong *)(lVar14 + 0x398);
    fVar28 = *(float *)&pTVar18->field_0x4 * *(float *)(lVar14 + 4 + lVar23 * 0xc);
    fVar27 = *(float *)&pTVar18->field_0x8 * *(float *)(lVar14 + 8 + lVar23 * 0xc);
    fVar30 = *(float *)pTVar18 * *(float *)(lVar14 + lVar23 * 0xc);
  }
  else {
    fVar28 = 0.0;
    fVar27 = 0.0;
    fVar30 = 0.0;
  }
  bVar10 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar10) {
    pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar24->_padding_ + 4)) {
      pTVar16 = pTVar24;
    }
    Chaos::TPBDRigidParticles<double,3>::QCom
              ((TPBDRigidParticles<double,3> *)pTVar16->_padding_,(TRotation<double,3> *)&local_1f8,
               (int)pTVar16->_padding_);
  }
  else {
    uVar20 = (uint)pTVar24->_padding_;
    lVar23 = (longlong)(int)uVar20;
    lVar14 = pTVar24->_padding_;
    uVar19 = 0;
    if ((int)uVar20 < *(int *)(lVar14 + 0x50)) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar2 = (code *)swi(3);
      EVar12 = (*pcVar2)();
      return EVar12;
    }
    lVar14 = *(longlong *)(lVar14 + 0x48);
    uVar1 = *(undefined8 *)(lVar14 + 8 + lVar23 * 0x10);
    local_1f0 = (double)*(float *)(lVar14 + 4 + lVar23 * 0x10);
    local_1f8 = (double)*(float *)(lVar14 + lVar23 * 0x10);
    local_1e8 = (double)(float)uVar1;
    dStack_1e0 = (double)(float)((ulonglong)uVar1 >> 0x20);
  }
  local_168 = ___xmm_3ff00000000000000000000000000000;
  uStack_160 = _UNK_15061cbc8;
  local_178 = 0;
  uStack_170 = 0;
  local_1d8[4] = 0.0;
  local_198 = 0;
  local_1d8[1] = 0.0;
  local_190 = 0;
  local_1d8[2] = 0.0;
  local_1a8 = 0;
  local_1d8[3] = 0.0;
  local_1a0 = 0;
  local_180 = 0;
  local_1d8[0] = (double)fVar30;
  local_1d8[5] = (double)fVar28;
  local_188 = (double)fVar27;
  Chaos::Utilities::ComputeWorldSpaceInertia
            ((PMatrix<double,3,3> *)&local_158,(TRotation<double,3> *)&local_1f8,
             (PMatrix<double,3,3> *)local_1d8);
  lVar14 = *(longlong *)this;
  this_00 = (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
             *)(lVar14 + 0x438);
  uVar20 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
  uVar20 = uVar20 >> 0x10 ^ uVar20;
  if (*(int *)(lVar14 + 0x440) != *(int *)(lVar14 + 0x46c)) {
    lVar23 = *(longlong *)(lVar14 + 0x478);
    if (*(longlong *)(lVar14 + 0x478) == 0) {
      lVar23 = lVar14 + 0x470;
    }
    iVar13 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar14 + 0x480) - 1U & uVar20) * 4);
    if (iVar13 != -1) {
      do {
        plVar22 = (longlong *)((longlong)iVar13 * 0x40 + *(longlong *)&this_00->Elements);
        if ((TGeometryParticleHandleImp<double,3,1> *)*plVar22 == local_res18) {
          if (plVar22 != (longlong *)0x0) goto LAB_143c8aefc;
          break;
        }
        iVar13 = (int)plVar22[7];
      } while (iVar13 != -1);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>_>
            (this_00,(uint)local_res8,
             (TKeyInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&> *)
             (ulonglong)uVar20,(bool *)&local_res20);
  plVar22 = (longlong *)((longlong)local_res8[0] * 0x40 + *(longlong *)&this_00->Elements);
LAB_143c8aefc:
  dVar3 = (double)Chaos::RestoreBreakingMomentumPercent;
  plVar22[1] = (longlong)(dVar4 * (double)CONCAT44(uVar26,uVar25) * dVar3 + (double)plVar22[1]);
  plVar22[2] = (longlong)(dVar5 * (double)CONCAT44(uVar26,uVar25) * dVar3 + (double)plVar22[2]);
  plVar22[3] = (longlong)(dVar6 * (double)CONCAT44(uVar26,uVar25) * dVar3 + (double)plVar22[3]);
  dVar4 = (double)Chaos::RestoreBreakingMomentumPercent;
  plVar22[4] = (longlong)
               ((local_158 * dVar9 + local_150 * dVar7 + local_148 * dVar8) * dVar4 +
               (double)plVar22[4]);
  plVar22[5] = (longlong)
               ((local_138 * dVar9 + local_130 * dVar7 + local_128 * dVar8) * dVar4 +
               (double)plVar22[5]);
  plVar22[6] = (longlong)
               ((local_118 * dVar9 + local_110 * dVar7 + local_108 * dVar8) * dVar4 +
               (double)plVar22[6]);
  return Continue;
}

// operator() @ 143c8afc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FRigidClustering::ComputeStrainFromCollision'::__l6::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  FRigidClustering *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  int iVar14;
  IPhysicsProxyBase *pIVar15;
  FClusterUnion *pFVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  ClusterId *pCVar18;
  float *pfVar19;
  TRotation<double,3> *pTVar20;
  TVector<double,3> *pTVar21;
  TRefCountPtr<Chaos::FImplicitObjectUnionClustered> *pTVar22;
  byte bVar23;
  uint uVar24;
  ForAnyElementType FVar25;
  TGeometryParticleHandleImp<double,3,1> *pTVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 local_148 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_140;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  TRotation<double,3> local_e8 [5];
  
  Chaos::FPBDCollisionConstraint::CalculateWorldContactLocation
            ((FPBDCollisionConstraint *)**(undefined8 **)((longlong)this + 8),
             (TVector<double,3> *)&local_100);
  lVar27 = **(longlong **)((longlong)this + 8);
  auVar39._0_8_ = (double)*(float *)(lVar27 + 0x124) * (double)*(float *)(lVar27 + 0x124);
  auVar39._8_8_ = 0;
  auVar30._8_8_ = 0;
  auVar30._0_8_ =
       (double)*(float *)(lVar27 + 0x120) * (double)*(float *)(lVar27 + 0x120) + auVar39._0_8_ +
       (double)*(float *)(lVar27 + 0x128) * (double)*(float *)(lVar27 + 0x128);
  auVar30 = sqrtpd(auVar39,auVar30);
  fVar51 = (float)auVar30._0_8_;
  if (fVar51 <= __real_322bcc77) {
    return;
  }
  iVar14 = _finite((double)fVar51);
  if (iVar14 == 0) {
    return;
  }
  pTVar26 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (param_1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  pIVar15 = Chaos::TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if ((pIVar15 == (IPhysicsProxyBase *)0x0) || (pIVar15->Type != ClusterUnionProxy))
  goto LAB_143c8b194;
  if ((pIVar15[1]._padding_ & 2) == 0) {
    return;
  }
  pFVar16 = Chaos::FClusterUnionManager::FindClusterUnionFromParticle
                      ((FClusterUnionManager *)(*(longlong *)this + 0x118),
                       (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if (pFVar16 == (FClusterUnion *)0x0) {
    return;
  }
  lVar27 = **(longlong **)((longlong)this + 8);
  uVar24 = *(uint *)(*(longlong *)(lVar27 + 0x100) + 8);
  if (param_1 == *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)(lVar27 + 0xe8)) {
    uVar24 = *(uint *)(*(longlong *)(lVar27 + 0x108) + 8);
  }
  uVar24 = uVar24 >> 3;
  if ((int)uVar24 < (pFVar16->ChildParticles).ArrayNum) {
    if (((pFVar16->ChildParticles).ArrayNum <= (int)uVar24) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar17 = *(TGeometryParticleHandleImp<double,3,1> **)
               ((pFVar16->ChildParticles).AllocatorInstance.Data + (ulonglong)uVar24 * 8);
    if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_143c8b167;
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5292282805487667467>,true,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                        ,0x90b,"ClusterUnion->ChildParticles.IsValidIndex(ShapeInContactIndex)");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_143c8b167:
    pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)
              Chaos::FRigidClustering::FindClosestChild
                        (*(FRigidClustering **)this,param_1,(TVector<double,3> *)&local_100);
    if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
  }
  param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar26;
  if (2 < *(byte *)((longlong)&pTVar17->_padding_ + 4)) {
    param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar17;
  }
  if ((TGeometryParticleHandleImp<double,3,1> *)param_1 ==
      (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
LAB_143c8b194:
  bVar23 = 0;
  pIVar15 = Chaos::TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Type == GeometryCollectionType)) {
    bVar23 = *(byte *)((longlong)&pIVar15[7]._padding_ + 3) >> 1 & 1;
    if ((pIVar15[7]._padding_ & 0x200000) == 0) {
      return;
    }
    if (*(char *)((longlong)&pIVar15[6].Solver + 7) == '\x01') {
      fVar51 = fVar51 * **(float **)((longlong)this + 0x10);
    }
  }
  pCVar18 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                      ((TPBDRigidClusteredParticles<double,3> *)
                       ((TGeometryParticleHandleImp<double,3,1> *)param_1)->_padding_,
                       (int)((TGeometryParticleHandleImp<double,3,1> *)param_1)->_padding_);
  if (pCVar18->NumChildren == 0) {
    pfVar19 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                        ((TPBDRigidClusteredParticles<double,3> *)
                         ((TGeometryParticleHandleImp<double,3,1> *)param_1)->_padding_,
                         (int)((TGeometryParticleHandleImp<double,3,1> *)param_1)->_padding_);
  }
  else {
    if (bVar23 == 0) {
      pTVar20 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetQ
                          ((TPBDRigidParticleHandleImp<double,3,1> *)param_1,local_e8);
      pTVar21 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetP
                          ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
      dVar37 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * *(double *)pTVar20;
      dVar4 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
              *(double *)&pTVar20->field_0x8;
      dVar7 = *(double *)&pTVar20->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar8 = *(double *)&pTVar20->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar38._8_4_ = SUB84(dVar4,0);
      auVar38._0_8_ = dVar37;
      auVar38._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_100 = local_100 - *(double *)pTVar21;
      dStack_f8 = dStack_f8 - *(double *)&pTVar21->field_0x8;
      uVar42 = (undefined4)((ulonglong)dStack_f8 >> 0x20);
      local_f0 = local_f0 - *(double *)&pTVar21->field_0x10;
      auVar48._8_4_ = SUB84(dStack_f8,0);
      auVar48._0_8_ = local_100;
      auVar48._12_4_ = uVar42;
      auVar5._8_4_ = SUB84(dVar8,0);
      auVar5._0_8_ = dVar7;
      auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar39 = blendpd(auVar38,auVar5,2);
      auVar31._8_4_ = SUB84(dVar7,0);
      auVar31._0_8_ = dVar4;
      auVar31._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar35._8_4_ = SUB84(dStack_f8,0);
      auVar35._0_8_ = local_100;
      auVar35._12_4_ = uVar42;
      auVar49._0_8_ = auVar48._8_8_ * dVar37 - dVar4 * local_100;
      auVar49._8_8_ = local_f0 * dVar4 - auVar31._8_8_ * dStack_f8;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_f0;
      auVar30 = blendpd(auVar35,auVar11,2);
      auVar36._0_8_ = auVar30._0_8_ * dVar7 - auVar39._0_8_ * local_f0;
      auVar36._8_8_ = auVar30._8_8_ * dVar8 - auVar39._8_8_ * 0.0;
      dVar9 = auVar49._8_8_ + auVar49._8_8_;
      dVar10 = auVar36._0_8_ + auVar36._0_8_;
      uVar42 = SUB84(dVar10,0);
      uVar43 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar30 = blendpd(auVar49,auVar36,2);
      auVar50._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar50._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar46._8_4_ = uVar42;
      auVar46._0_8_ = dVar9;
      auVar46._12_4_ = uVar43;
      auVar32._8_4_ = uVar42;
      auVar32._0_8_ = dVar9;
      auVar32._12_4_ = uVar43;
      auVar40._8_4_ = uVar42;
      auVar40._0_8_ = dVar9;
      auVar40._12_4_ = uVar43;
      auVar30 = blendpd(auVar40,auVar50,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar37 - dVar9 * dVar4;
      auVar47._8_8_ = auVar50._0_8_ * dVar4 - auVar32._8_8_ * dVar7;
      auVar33._8_4_ = SUB84(auVar50._8_8_,0);
      auVar33._0_8_ = auVar50._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
      auVar41._0_8_ = auVar30._0_8_ * dVar7 - auVar50._0_8_ * auVar39._0_8_;
      auVar41._8_8_ = auVar30._8_8_ * dVar8 - auVar33._8_8_ * auVar39._8_8_;
      auVar44._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            ___xmm_3ff00000000000003ff0000000000000);
      auVar44._8_4_ = _UNK_15061cc88 & _UNK_150689688;
      auVar44._12_4_ = _UNK_15061cc8c & _UNK_15068968c;
      lVar27 = -(ulonglong)
                ((double)CONCAT44(__xmm_00000000000000003ff0000000000000._4_4_ &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)__xmm_00000000000000003ff0000000000000 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar12._4_4_ = _UNK_150689684;
      auVar12._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
      auVar12._8_4_ = _UNK_150689688;
      auVar12._12_4_ = _UNK_15068968c;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
      lVar28 = -(ulonglong)(auVar44._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar29 = -(ulonglong)(auVar44._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar34._8_4_ = SUB84(auVar47._8_8_,0);
      auVar34._0_8_ = auVar47._0_8_;
      auVar34._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar45._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar28 & auVar30._0_4_);
      auVar45._8_4_ = ~(uint)lVar29 & auVar30._8_4_;
      auVar45._12_4_ = ~(uint)((ulonglong)lVar29 >> 0x20) & auVar30._12_4_;
      auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar6._0_8_ = (longlong)__xmm_00000000000000003ff0000000000000;
      auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
      local_118 = auVar45._0_8_ * (dVar9 * dVar8 + local_100 + auVar34._8_8_);
      dStack_128 = auVar45._8_8_ * (dVar10 * dVar8 + dStack_f8 + auVar41._0_8_);
      dVar37 = (double)Chaos::ClusterDistanceThreshold;
      local_130 = local_118 - dVar37;
      local_118 = local_118 + dVar37;
      auVar39 = blendpd(auVar47,auVar41,2);
      dStack_110 = dStack_128 + dVar37;
      local_108 = (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar30._4_4_,
                                   ~(uint)lVar27 & auVar30._0_4_) *
                  (auVar50._0_8_ * dVar8 + local_f0 + auVar39._0_8_);
      local_120 = local_108 - dVar37;
      dStack_128 = dStack_128 - dVar37;
      local_108 = local_108 + dVar37;
      pTVar22 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetChildrenSpatial(param_1);
      if (pTVar22->Reference == (FImplicitObjectUnionClustered *)0x0) {
        return;
      }
      pTVar22 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetChildrenSpatial(param_1);
      Chaos::FImplicitObjectUnionClustered::FindAllIntersectingChildren
                (pTVar22->Reference,&local_140,(TAABB<double,3> *)&local_130);
      iVar14 = local_140.ArrayNum;
      pFVar1 = local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 8;
      FVar25.Data = local_140.AllocatorInstance.Data;
      while( true ) {
        if (local_140.ArrayNum != iVar14) {
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_148);
        }
        if (FVar25.Data == pFVar1) break;
        pTVar17 = pTVar26;
        if (2 < *(byte *)((longlong)
                          &(*(TGeometryParticleHandleImp<double,3,1> **)FVar25.Data)->_padding_ + 4)
           ) {
          pTVar17 = *(TGeometryParticleHandleImp<double,3,1> **)FVar25.Data;
        }
        if (pTVar17 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pfVar19 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar17->_padding_,
                               (int)pTVar17->_padding_);
          pFVar2 = *(FRigidClustering **)this;
          *pfVar19 = fVar51 + *pfVar19;
          Chaos::FRigidClustering::UpdateTopLevelParticle
                    (pFVar2,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar17);
          *param_2 = fVar51 + *param_2;
        }
        FVar25.Data = FVar25.Data + 8;
      }
      if (local_140.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_140.AllocatorInstance.Data);
      return;
    }
    pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)
              Chaos::FRigidClustering::FindClosestChild
                        (*(FRigidClustering **)this,param_1,(TVector<double,3> *)&local_100);
    if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
    param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar26;
    if (2 < *(byte *)((longlong)&pTVar17->_padding_ + 4)) {
      param_1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar17;
    }
    if ((TGeometryParticleHandleImp<double,3,1> *)param_1 ==
        (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      return;
    }
    pfVar19 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                        ((TPBDRigidClusteredParticles<double,3> *)
                         ((TGeometryParticleHandleImp<double,3,1> *)param_1)->_padding_,
                         (int)((TGeometryParticleHandleImp<double,3,1> *)param_1)->_padding_);
  }
  pFVar2 = *(FRigidClustering **)this;
  *pfVar19 = fVar51 + *pfVar19;
  Chaos::FRigidClustering::UpdateTopLevelParticle(pFVar2,param_1);
  *param_2 = fVar51 + *param_2;
  return;
}

// operator() @ 143c8b7a0

void __thiscall
`Chaos::FRigidClustering::AdvanceClustering'::__l47::<lambda_1>::operator()
          (void *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  float *pfVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res10;
  undefined1 local_res18 [8];
  
  bVar6 = false;
  local_res10 = param_1;
  pTVar8 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)((longlong)this + 0x10) + 200),param_1);
  plVar12 = (longlong *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  if (plVar12 == (longlong *)0x0) {
    ``Chaos::FRigidClustering::AdvanceClustering'::__l47::<lambda_1>::operator()'::__l21::<lambda_1>
    ::operator()(local_res18);
    return;
  }
  puVar11 = (undefined8 *)*plVar12;
  lVar5 = plVar12[1];
  puVar2 = puVar11 + (int)lVar5;
LAB_143c8b806:
  do {
    if ((int)plVar12[1] != (int)lVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar2) {
      if (bVar6) {
        pFVar3 = *(ForAnyElementType **)this;
        if ((pFVar3->Data <= (FScriptContainerElement *)&local_res10) &&
           ((FScriptContainerElement *)&local_res10 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
        iVar7 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar7 + 1;
        *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)(pFVar3->Data + (longlong)iVar7 * 8) =
             local_res10;
      }
      return;
    }
    plVar10 = (longlong *)0x0;
    if (2 < *(byte *)((longlong)*puVar11 + 0xc)) {
      plVar10 = (longlong *)*puVar11;
    }
    if (plVar10 != (longlong *)0x0) {
      pfVar9 = Chaos::TPBDRigidClusteredParticles<double,3>::Strains
                         ((TPBDRigidClusteredParticles<double,3> *)*plVar10,(int)plVar10[1]);
      if (*pfVar9 <= 0.0) {
        bVar6 = true;
        pfVar9 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                           ((TPBDRigidClusteredParticles<double,3> *)*plVar10,(int)plVar10[1]);
        puVar11 = puVar11 + 1;
        *pfVar9 = 3.4028235e+38;
        *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x370) = 1;
        goto LAB_143c8b806;
      }
      pfVar9 = Chaos::TPBDRigidClusteredParticles<double,3>::ExternalStrains
                         ((TPBDRigidClusteredParticles<double,3> *)*plVar10,(int)plVar10[1]);
      if (*pfVar9 <= 0.0) {
        pfVar9 = Chaos::TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                           ((TPBDRigidClusteredParticles<double,3> *)*plVar10,(int)plVar10[1]);
        if (*pfVar9 <= 0.0) goto LAB_143c8b892;
      }
      bVar6 = true;
      **(undefined1 **)((longlong)this + 8) = 1;
    }
LAB_143c8b892:
    puVar11 = puVar11 + 1;
  } while( true );
}

// AddParticlesToCluster @ 143c8cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::AddParticlesToCluster
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,TMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
                   *param_3)

{
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> TVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FPBDRigidsSOAs *this_01;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AddParticlesToCluster> FVar14;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar15;
  float *pfVar16;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  ClusterId *pCVar20;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar21;
  float *pfVar22;
  int *piVar23;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *this_02;
  IPhysicsProxyBase *pIVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ForElementType<unsigned_int> FVar28;
  ForAnyElementType FVar29;
  longlong lVar30;
  ulonglong *puVar31;
  FNameEntryId FVar32;
  ulonglong *puVar33;
  FName FVar34;
  TGeometryParticleHandleImp<double,3,1> *pTVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  ulonglong uVar38;
  ulonglong *puVar39;
  ulonglong uVar40;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar41;
  int iVar42;
  FScriptContainerElement *pFVar43;
  TGeometryParticleHandleImp<double,3,1> *pTVar44;
  undefined1 auStackY_258 [32];
  TGeometryParticleHandleImp<double,3,1> *local_1f0;
  undefined1 local_1e8 [8];
  FScriptContainerElement *local_1e0;
  FColor_u_0 local_1d8 [2];
  uint local_1d0;
  uint uStack_1cc;
  int local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  FName local_188;
  FRigidClustering *local_180;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_178;
  FName local_170;
  FName local_168;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_148;
  TGeometryParticleHandleImp<double,3,1> *local_140;
  undefined8 local_138;
  FScriptContainerElement *local_130;
  int *local_128;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FSparseArrayAllocationInfo local_d0;
  FName local_c0;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_b8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FVar14 = StatPtr_STAT_AddParticlesToCluster;
  local_1f0 = (TGeometryParticleHandleImp<double,3,1> *)param_1;
  local_180 = this;
  local_178 = param_2;
  if (StatPtr_STAT_AddParticlesToCluster ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AddParticlesToCluster>)0x0) {
    pFVar13 = ::FName::FName(&local_c0,"STAT_AddParticlesToCluster");
    FVar14 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AddParticlesToCluster>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddParticlesToCluster,*pFVar13,
                        L"TPBDRigidClustering<>::AddParticlesToCluster","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar14;
  bVar7 = false;
  bVar8 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar32 = FVar34.ComparisonIndex.Value;
  uVar25 = FVar34.Number;
  if ((FVar32.Value == 0) && (uVar25 == 0)) {
LAB_143c8ce50:
    bVar8 = bVar10;
    bVar7 = bVar9;
    bVar9 = false;
    local_170 = local_168;
    FVar34 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_188.ComparisonIndex.Value = FVar32.Value;
        local_188.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_188,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x154);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c8ce50;
    local_1d0 = FVar32.Value;
    uStack_1cc = uVar25;
    local_170 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar9 = true;
  }
  if ((local_1f0 == (TGeometryParticleHandleImp<double,3,1> *)0x0) || (param_2->ArrayNum == 0))
  goto LAB_143c8dc44;
  uVar25 = ((uint)((ulonglong)local_1f0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1f0 >> 4)) *
           -0x7a143595;
  uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
  local_148 = (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->MChildren;
  pTVar15 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                      ((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)local_148,uVar25 >> 0x10 ^ uVar25,
                       (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_1f0);
  iVar27 = pTVar15->ArrayNum;
  local_128 = &pTVar15->ArrayNum;
  pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                      ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                       (int)local_1f0->_padding_);
  fVar3 = *pfVar16;
  pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                      ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                       (int)local_1f0->_padding_);
  *pfVar16 = (float)iVar27 * fVar3;
  if ((pTVar15 == param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar27 = param_2->ArrayNum;
  if (iVar27 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar27,&pTVar15->AllocatorInstance,&pTVar15->ArrayNum,&pTVar15->ArrayMax
                       );
    memcpy((pTVar15->AllocatorInstance).Data + (longlong)iVar11 * 8,
           (param_2->AllocatorInstance).Data,(longlong)iVar27 << 3);
  }
  pTVar17 = TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
            TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                      (&local_b8,param_2);
  TVar5 = *pTVar17;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar25 = TVar5.ArrayNum;
  local_a8.AllocationFlags.NumBits = 0;
  local_a8.AllocationFlags.MaxBits = 0x80;
  local_a8.FirstFreeIndex = -1;
  local_a8.NumFreeIndices = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (uVar25 != 0) {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve(&local_a8,uVar25);
    uVar36 = 1;
    if (3 < uVar25) {
      uVar38 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_158 = (undefined4)lVar30;
      uVar36 = 1 << ((byte)lVar30 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar36)) {
      local_60 = uVar36;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar36 != 0) {
        uVar26 = uVar36;
        if (uVar36 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar26 = 0;
            goto LAB_143c8d057;
          }
        }
        else {
LAB_143c8d057:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar26,4)
          ;
        }
        uVar38 = 0;
        if (0 < (int)uVar36) {
          uVar40 = (ulonglong)uVar36;
          do {
            FVar29.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_68.Data;
            }
            uVar18 = (longlong)(int)uVar36 - 1U & uVar38;
            uVar38 = uVar38 + 1;
            *(undefined4 *)(FVar29.Data + uVar18 * 4) = 0xffffffff;
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_1c0 = &local_a8.AllocationFlags;
        local_1c8 = 0;
        uStack_1c4 = 1;
        uStack_1b4 = 0;
        iStack_1b0 = 0;
        if (local_a8.AllocationFlags.NumBits != 0) {
          FVar28 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
          if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar28 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar36 = *(uint *)FVar28;
          iStack_1b0 = 0;
          local_1c8 = 0;
          while (uVar36 == 0) {
            iStack_1b0 = iStack_1b0 + 0x20;
            lVar30 = (longlong)local_1c8;
            local_1c8 = local_1c8 + 1;
            if ((int)((local_a8.AllocationFlags.NumBits - 1U) +
                     ((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                local_1c8) goto LAB_143c8d17d;
            uVar36 = *(uint *)((uchar *)((longlong)FVar28 + 4) + lVar30 * 4);
          }
          uStack_1c4 = -uVar36 & uVar36;
          uVar38 = (ulonglong)uStack_1c4 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_154 = (int)lVar30;
          uStack_1b4 = iStack_1b0 + -1 + local_154;
          if (local_a8.AllocationFlags.NumBits < (int)uStack_1b4) {
LAB_143c8d17d:
            uStack_1b4 = local_a8.AllocationFlags.NumBits;
          }
        }
        local_1b8 = 0xffffffff;
        local_120 = &local_a8;
        local_118._padding_ = CONCAT44(uStack_1c4,local_1c8);
        local_118.CurrentBitIndex = uStack_1b4;
        local_118.UnvisitedBitMask = 0xffffffff;
        local_118._28_4_ = uStack_1ac;
        local_118.BaseBitIndex = iStack_1b0;
        uVar36 = uStack_1b4;
        local_118.Array = pTStack_1c0;
        if ((int)uStack_1b4 < local_a8.AllocationFlags.NumBits) {
          do {
            pFVar43 = (local_120->Data).AllocatorInstance.Data;
            lVar30 = (longlong)(int)uVar36;
            uVar26 = ((uint)(*(ulonglong *)(pFVar43 + lVar30 * 0x10) >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)(pFVar43 + lVar30 * 0x10) >> 4)) * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            uVar26 = (uVar26 >> 0x10 ^ uVar26) & local_60 - 1;
            *(uint *)(pFVar43 + lVar30 * 0x10 + 0xc) = uVar26;
            FVar29.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_68.Data;
            }
            uVar38 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar26;
            *(undefined4 *)(pFVar43 + lVar30 * 0x10 + 8) = *(undefined4 *)(FVar29.Data + uVar38 * 4)
            ;
            *(uint *)(FVar29.Data + uVar38 * 4) = uVar36;
            local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
            uVar36 = local_118.CurrentBitIndex;
          } while (local_118.CurrentBitIndex < (local_118.Array)->NumBits);
        }
      }
    }
  }
  ppTVar41 = TVar5.DataPtr;
  ppTVar1 = ppTVar41 + (int)uVar25;
  if (ppTVar41 != ppTVar1) {
    puVar33 = (ulonglong *)0x0;
    do {
      if (local_a8.NumFreeIndices == 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,
                            &local_a8.Data.ArrayMax);
        iVar27 = local_a8.AllocationFlags.NumBits;
        if (local_a8.AllocationFlags.NumBits == 0) {
          iVar42 = 0;
LAB_143c8d317:
          if (local_a8.AllocationFlags.MaxBits < (int)(local_a8.AllocationFlags.NumBits + 1U)) {
            uVar25 = local_a8.AllocationFlags.MaxBits + 0x1fU >> 5;
            uVar36 = local_a8.AllocationFlags.NumBits + 0x20U >> 5;
            if (uVar36 < 5) {
              local_a8.AllocationFlags.MaxBits = 4;
            }
            else {
              uVar38 = (ulonglong)uVar36;
              if (uVar25 < 5) {
                uVar25 = 0;
              }
              if (uVar25 == 0) {
                uVar40 = 4;
                if (4 < uVar38) {
                  uVar40 = uVar38;
                }
              }
              else {
                uVar40 = ((ulonglong)uVar36 * 3 >> 3) + 0x10 + uVar38;
              }
              uVar19 = FMemory::QuantizeSize(uVar40 * 4,0);
              local_a8.AllocationFlags.MaxBits = (int)(uVar19 >> 2);
              if (local_a8.AllocationFlags.MaxBits < (int)uVar36) {
                local_a8.AllocationFlags.MaxBits = 0x7fffffff;
              }
            }
            local_a8.AllocationFlags.MaxBits = local_a8.AllocationFlags.MaxBits << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      (&local_a8.AllocationFlags,local_a8.AllocationFlags.NumBits);
          }
          local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
          uVar36 = local_a8.AllocationFlags.NumBits >> 0x1f & 0x1f;
          uVar25 = local_a8.AllocationFlags.NumBits + uVar36;
          iVar12 = (uVar25 & 0x1f) - uVar36;
          if (iVar12 != 0) {
            FVar28 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
            if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar28 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            puVar2 = (uint *)((longlong)FVar28 + (longlong)((int)uVar25 >> 5) * 4);
            *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
          }
        }
        else {
          iVar42 = (int)(local_a8.AllocationFlags.NumBits +
                        (local_a8.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
          if (iVar42 != (int)(((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU) +
                             (local_a8.AllocationFlags.NumBits - 1U)) >> 5) goto LAB_143c8d317;
          local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1U;
        }
        FVar28 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
        if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        puVar2 = (uint *)((longlong)FVar28 + (longlong)iVar42 * 4);
        *puVar2 = *puVar2 & ~(1 << ((byte)iVar27 & 0x1f));
        iVar27 = local_a8.FirstFreeIndex;
      }
      else {
        iVar27 = *(int *)(local_a8.Data.AllocatorInstance.Data +
                         (longlong)local_a8.FirstFreeIndex * 0x10 + 4);
        local_a8.NumFreeIndices = local_a8.NumFreeIndices + -1;
        iVar11 = local_a8.FirstFreeIndex;
        if (local_a8.NumFreeIndices != 0) {
          *(undefined4 *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar27 * 0x10) =
               0xffffffff;
        }
      }
      local_a8.FirstFreeIndex = iVar27;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_a8,&local_d0,iVar11);
      puVar31 = puVar33;
      if (local_d0.Pointer != (ulonglong *)0x0) {
        *(TPBDRigidParticleHandleImp<double,3,1> **)local_d0.Pointer = *ppTVar41;
        *(undefined4 *)((longlong)local_d0.Pointer + 8) = 0xffffffff;
        puVar31 = local_d0.Pointer;
      }
      uVar38 = *puVar31;
      uVar25 = ((uint)(uVar38 >> 0x14) & 0xffff ^ (uint)(uVar38 >> 4)) * -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      uVar25 = uVar25 >> 0x10 ^ uVar25;
      if ((local_a8.Data.ArrayNum - local_a8.NumFreeIndices != 1) &&
         (local_a8.Data.ArrayNum != local_a8.NumFreeIndices)) {
        FVar29.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar29.Data = local_68.Data;
        }
        for (iVar27 = *(int *)(FVar29.Data + (ulonglong)(local_60 - 1 & uVar25) * 4); iVar27 != -1;
            iVar27 = *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar27 * 0x10 + 8)) {
          if (*(ulonglong *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar27 * 0x10) ==
              uVar38) {
            if (iVar27 != -1) {
              *(ulonglong *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar27 * 0x10) =
                   uVar38;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_a8,local_d0.Index,1);
              goto LAB_143c8d80c;
            }
            break;
          }
        }
      }
      uVar26 = local_a8.Data.ArrayNum - local_a8.NumFreeIndices;
      uVar36 = 1;
      if (3 < uVar26) {
        uVar38 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar38 != 0) {
          for (; uVar38 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_150 = (undefined4)lVar30;
        uVar36 = 1 << ((byte)lVar30 & 0x1f);
      }
      if (((int)uVar26 < 1) || ((int)uVar36 <= (int)local_60)) {
        uVar25 = local_60 - 1 & uVar25;
        *(uint *)((longlong)puVar31 + 0xc) = uVar25;
        FVar29.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar29.Data = local_68.Data;
        }
        uVar38 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar25;
        *(undefined4 *)(puVar31 + 1) = *(undefined4 *)(FVar29.Data + uVar38 * 4);
        *(int *)(FVar29.Data + uVar38 * 4) = local_d0.Index;
      }
      else {
        local_60 = uVar36;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
        }
        if (uVar36 != 0) {
          uVar25 = uVar36;
          if (uVar36 < 2) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar25 = 0;
              goto LAB_143c8d5f0;
            }
          }
          else {
LAB_143c8d5f0:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar25,4);
          }
          if (0 < (int)uVar36) {
            uVar38 = (ulonglong)uVar36;
            puVar31 = puVar33;
            do {
              FVar29.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar29.Data = local_68.Data;
              }
              uVar40 = (longlong)(int)uVar36 - 1U & (ulonglong)puVar31;
              puVar31 = (ulonglong *)((longlong)puVar31 + 1);
              *(undefined4 *)(FVar29.Data + uVar40 * 4) = 0xffffffff;
              uVar38 = uVar38 - 1;
            } while (uVar38 != 0);
          }
        }
        if (local_60 != 0) {
          pTStack_1a0 = &local_a8.AllocationFlags;
          local_1a8 = 0;
          uStack_1a4 = 1;
          uStack_194 = 0;
          uStack_190 = 0;
          puVar31 = puVar33;
          if (local_a8.AllocationFlags.NumBits != 0) {
            FVar28 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
            if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar28 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar25 = *(uint *)FVar28;
            puVar39 = puVar33;
            while (uVar25 == 0) {
              uStack_190 = (int)puVar39 + 0x20;
              puVar39 = (ulonglong *)(ulonglong)uStack_190;
              iVar27 = (int)puVar31;
              local_1a8 = iVar27 + 1;
              puVar31 = (ulonglong *)(ulonglong)local_1a8;
              if ((int)((local_a8.AllocationFlags.NumBits - 1U) +
                       ((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_1a8) goto LAB_143c8d6fd;
              uVar25 = *(uint *)((uchar *)((longlong)FVar28 + 4) + (longlong)iVar27 * 4);
            }
            uStack_1a4 = -uVar25 & uVar25;
            uVar38 = (ulonglong)uStack_1a4 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar38 != 0) {
              for (; uVar38 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            local_14c = (int)lVar30;
            uStack_194 = local_14c + -1 + uStack_190;
            puVar31 = (ulonglong *)(ulonglong)uStack_194;
            if (local_a8.AllocationFlags.NumBits < (int)uStack_194) {
LAB_143c8d6fd:
              puVar31 = (ulonglong *)(ulonglong)(uint)local_a8.AllocationFlags.NumBits;
              uStack_194 = local_a8.AllocationFlags.NumBits;
            }
          }
          local_198 = 0xffffffff;
          local_f8 = &local_a8;
          local_f0._padding_ = CONCAT44(uStack_1a4,local_1a8);
          local_f0.CurrentBitIndex = uStack_194;
          local_f0.UnvisitedBitMask = 0xffffffff;
          local_f0._28_4_ = uStack_18c;
          local_f0.BaseBitIndex = uStack_190;
          local_f0.Array = pTStack_1a0;
          if ((int)puVar31 < local_a8.AllocationFlags.NumBits) {
            do {
              pFVar43 = (local_f8->Data).AllocatorInstance.Data;
              lVar30 = (longlong)(int)puVar31;
              uVar25 = ((uint)(*(ulonglong *)(pFVar43 + lVar30 * 0x10) >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)(pFVar43 + lVar30 * 0x10) >> 4)) * -0x7a143595;
              uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
              uVar25 = (uVar25 >> 0x10 ^ uVar25) & local_60 - 1;
              *(uint *)(pFVar43 + lVar30 * 0x10 + 0xc) = uVar25;
              FVar29.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar29.Data = local_68.Data;
              }
              uVar38 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar25;
              *(undefined4 *)(pFVar43 + lVar30 * 0x10 + 8) =
                   *(undefined4 *)(FVar29.Data + uVar38 * 4);
              *(int *)(FVar29.Data + uVar38 * 4) = (int)puVar31;
              local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
              puVar31 = (ulonglong *)(ulonglong)(uint)local_f0.CurrentBitIndex;
            } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
          }
        }
      }
LAB_143c8d80c:
      ppTVar41 = ppTVar41 + 1;
      this = local_180;
      param_2 = local_178;
    } while (ppTVar41 != ppTVar1);
  }
  pFVar43 = (param_2->AllocatorInstance).Data;
  iVar27 = param_2->ArrayNum;
  local_130 = pFVar43 + (longlong)iVar27 * 8;
  while( true ) {
    pFVar37 = local_130;
    local_1e0 = pFVar43;
    if (param_2->ArrayNum != iVar27) {
      local_1e8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1e8);
    }
    piVar23 = local_128;
    if (pFVar43 == pFVar37) break;
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar43;
    pTVar35 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (2 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
      pTVar35 = this_00;
    }
    if (pTVar35 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar35->_padding_,
                           (int)pTVar35->_padding_);
      if (pCVar20->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar35->_padding_,
                             (int)pTVar35->_padding_);
        pTVar44 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < *(byte *)((longlong)
                          &((TGeometryParticleHandleImp<double,3,1> *)pCVar20->Id)->_padding_ + 4))
        {
          pTVar44 = (TGeometryParticleHandleImp<double,3,1> *)pCVar20->Id;
        }
        pFVar43 = local_1e0;
        if ((pTVar44 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (pTVar44 != local_1f0)) {
          pTVar21 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find(local_148,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar44);
          pTVar15 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)&pTVar21->field_0x8;
          if (pTVar21 ==
              (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
            pTVar15 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)0x0;
          }
          if (pTVar15 !=
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            pFVar43 = (pTVar15->AllocatorInstance).Data;
            for (pFVar37 = pFVar43; pFVar37 != pFVar43 + (longlong)pTVar15->ArrayNum * 8;
                pFVar37 = pFVar37 + 8) {
              if (*(TGeometryParticleHandleImp<double,3,1> **)pFVar37 == pTVar35) {
                uVar25 = (uint)((longlong)pFVar37 - (longlong)pFVar43 >> 3);
                if (uVar25 != 0xffffffff) {
                  uVar36 = 0;
                  if ((int)uVar25 < pTVar15->ArrayNum) {
                    uVar36 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  ::RemoveAtSwapImpl(pTVar15,uVar25);
                }
                break;
              }
            }
          }
          this = local_180;
          RemoveChildFromParent
                    (local_180,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar35,
                     (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar44);
          pFVar43 = local_1e0;
        }
      }
      TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Remove(&this->TopLevelClusterParents,
               (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar35);
      local_140 = pTVar35;
      if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
          *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
        uVar25 = ((uint)((ulonglong)pTVar35 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar35 >> 4)) *
                 -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                  ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                    *)&this->TopLevelClusterParentsStrained,uVar25 >> 0x10 ^ uVar25,
                   (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_140);
      }
      pTVar44 = local_1f0;
      pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar35->_padding_,
                           (int)pTVar35->_padding_);
      pCVar20->Id = (TPBDRigidParticleHandleImp<double,3,1> *)pTVar44;
      pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                          ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                           (int)local_1f0->_padding_);
      pfVar22 = TPBDRigidClusteredParticles<double,3>::Strains
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar35->_padding_,
                           (int)pTVar35->_padding_);
      fVar3 = *pfVar22;
      fVar4 = *pfVar16;
      pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                          ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                           (int)local_1f0->_padding_);
      *pfVar16 = fVar3 + fVar4;
      piVar23 = TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar35);
      iVar11 = *piVar23;
      piVar23 = TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup
                          ((TPBDRigidParticleHandleImp<double,3,1> *)local_1f0);
      if (*piVar23 < iVar11) {
        iVar11 = *piVar23;
      }
      TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_1f0,iVar11);
    }
    uVar25 = (uint)this_00->_padding_;
    lVar30 = this_00->_padding_;
    uVar36 = 0;
    if ((int)uVar25 < *(int *)(lVar30 + 0xd0)) {
      uVar36 = ~uVar25 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_138 = *(undefined8 *)(*(longlong *)(lVar30 + 200) + (longlong)(int)uVar25 * 8);
    this_02 = TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                        ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                         (int)local_1f0->_padding_);
    TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
    Emplace<IPhysicsProxyBase_*_const_&>
              (this_02,(IPhysicsProxyBase **)&local_1d0,(bool *)&local_138);
    uVar25 = (uint)local_1f0->_padding_;
    lVar30 = local_1f0->_padding_;
    uVar36 = 0;
    if ((int)uVar25 < *(int *)(lVar30 + 0xd0)) {
      uVar36 = ~uVar25 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar30 + 200) + (longlong)(int)uVar25 * 8) == 0) {
      pIVar24 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_00);
      TGeometryParticleHandleImp<double,3,1>::SetPhysicsProxy(local_1f0,pIVar24);
    }
    FPBDRigidsEvolutionBase::DisableParticle((FPBDRigidsEvolutionBase *)this->MEvolution,this_00);
    pTVar35 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
      pTVar35 = this_00;
    }
    this_01 = (FPBDRigidsSOAs *)this->MEvolution->_padding_;
    if (((pTVar35 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
        (bVar10 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                            (&this_01->ActiveParticlesMapArray,
                             (TPBDRigidParticleHandleImp<double,3,1> *)pTVar35), !bVar10)) &&
       (bVar10 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                           (&this_01->MovingKinematicsMapArray,
                            (TPBDRigidParticleHandleImp<double,3,1> *)pTVar35), !bVar10)) {
      FPBDRigidsSOAs::
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this_01,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar35,
                 &this_01->TransientDirtyMapArray);
      if (CVars::bChaosSolverCheckParticleViews != false) {
        FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_01,this_00);
      }
      FPBDRigidsSOAs::UpdateViews(this_01);
    }
    pFVar43 = pFVar43 + 8;
    param_2 = local_178;
  }
  iVar27 = *local_128;
  pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                       (int)local_1f0->_padding_);
  pCVar20->NumChildren = iVar27;
  iVar27 = *piVar23;
  pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                      ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                       (int)local_1f0->_padding_);
  fVar3 = *pfVar16;
  pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                      ((TPBDRigidClusteredParticles<double,3> *)local_1f0->_padding_,
                       (int)local_1f0->_padding_);
  FVar34 = local_170;
  *pfVar16 = fVar3 / (float)iVar27;
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_a8);
LAB_143c8dc44:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// AdvanceClustering @ 143c8e090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::AdvanceClustering
          (FRigidClustering *this,double param_1,FPBDCollisionConstraints *param_2)

{
  TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AdvanceClustering> FVar20;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateDirtyImpulses> FVar21;
  FClusterUnion *pFVar22;
  ClusterId *pCVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 *puVar26;
  FScriptContainerElement *pFVar27;
  FName FVar28;
  int iVar29;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar30;
  TBitArray<FDefaultBitArrayAllocator> *pTVar31;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar32;
  FName FVar33;
  int iVar34;
  uint *puVar35;
  uint uVar36;
  undefined1 *puVar37;
  uint uVar38;
  TBitArray<FDefaultBitArrayAllocator> *pTVar39;
  char local_227 [7];
  TBitArray<FDefaultBitArrayAllocator> *local_220;
  TPBDRigidParticleHandleImp<double,3,1> *local_218;
  undefined1 local_210 [8];
  void *local_208;
  undefined8 local_200;
  FColor_u_0 local_1f8;
  FColor_u_0 local_1f4;
  FColor_u_0 local_1f0 [2];
  FName local_1e8;
  FName local_1e0;
  ulonglong local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1a8;
  FName local_198;
  TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_158;
  LARGE_INTEGER local_150;
  ulonglong local_148;
  LARGE_INTEGER local_140;
  int local_138;
  int local_134;
  undefined1 local_130 [8];
  LARGE_INTEGER local_128;
  FValueComparisonClass<_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>
  local_120;
  TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  void **local_e8;
  char *local_e0;
  FRigidClustering *local_d8;
  FRigidClustering *local_d0;
  void **local_c8;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong *local_a8;
  ulonglong *local_a0;
  LARGE_INTEGER local_98;
  FName local_90;
  FName local_88 [2];
  TArrayView<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> local_78;
  FName local_68 [6];
  
  iVar34 = 0;
  FVar20 = StatPtr_STAT_AdvanceClustering;
  if (StatPtr_STAT_AdvanceClustering ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AdvanceClustering>)0x0) {
    pFVar19 = ::FName::FName(local_68,"STAT_AdvanceClustering");
    FVar20 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AdvanceClustering>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AdvanceClustering,*pFVar19,
                        L"TPBDRigidClustering<>::AdvanceClustering","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar20;
  bVar10 = false;
  bVar13 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  bVar15 = false;
  bVar11 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_143c8e200:
    bVar13 = bVar11;
    bVar10 = bVar15;
    bVar15 = false;
    local_1e8 = local_1b8;
    FVar33 = local_1b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar13 = true;
      bVar15 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d0.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_1d0.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x68c);
        bVar10 = true;
        bVar13 = true;
        bVar15 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c8e200;
    local_1e8 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar15 = true;
  }
  if (5 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  QueryPerformanceCounter(&local_98);
  QueryPerformanceCounter(&local_128);
  if (GDumpClusterAndReleaseStats == 1) {
    if (((this->AdvanceCount != 0) && (this->FrameReleasedChildren != 0)) &&
       (3 < (byte)LogChaos._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    this->TotalProcessedClusters = this->TotalProcessedClusters + this->FrameProcessedClusters;
    this->AdvanceCount = this->AdvanceCount + 1;
    this->TotalReleasedChildren = this->TotalReleasedChildren + this->FrameReleasedChildren;
  }
  this->FrameProcessedClusters = 0;
  this->FrameReleasedChildren = 0;
  if (*(int *)&(this->MChildren).field_0x8 == *(int *)&(this->MChildren).field_0x34)
  goto LAB_143c8ecc7;
  if (ComputeClusterCollisionStrains == 0) {
    ResetCollisionImpulseArray(this);
  }
  else {
    ComputeStrainFromCollision(this,param_2,param_1);
  }
  local_e8 = &local_208;
  local_e0 = local_227;
  local_227[0] = '\0';
  local_208 = (void *)0x0;
  local_200 = 0;
  FVar21 = StatPtr_STAT_UpdateDirtyImpulses;
  local_d8 = this;
  if (StatPtr_STAT_UpdateDirtyImpulses ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateDirtyImpulses>)0x0) {
    pFVar19 = ::FName::FName(&local_90,"STAT_UpdateDirtyImpulses");
    FVar21 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateDirtyImpulses>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateDirtyImpulses,*pFVar19,
                        L"TPBDRigidClustering<>::Update Dirty Impulses","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar21;
  bVar12 = false;
  bVar11 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  bVar17 = false;
  bVar16 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_143c8e44e:
    bVar12 = bVar17;
    bVar11 = bVar16;
    bVar16 = false;
    local_1c0 = local_1a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f4._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_1c8.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x6df);
        bVar12 = true;
        bVar11 = true;
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c8e44e;
    local_1c0 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar16 = true;
  }
  local_120.Predicate.Predicate =
       (TDereferenceWrapper<__int64,_public:_void___cdecl_Chaos::FRigidClustering::AdvanceClustering(double,Chaos::FPBDCollisionConstraints_&)_::_53_::<lambda_2>_>
        )local_210;
  pTVar1 = &this->TopLevelClusterParentsStrained;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>_>::FValueComparisonClass<_Chaos::FRigidClustering::AdvanceClustering_::__l53::<lambda_2>_>_>
            ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
              *)pTVar1,&local_120);
  local_178 = &(this->TopLevelClusterParentsStrained).field_0x10;
  iVar5 = *(int *)&(this->TopLevelClusterParentsStrained).field_0x28;
  uStack_17c = 1;
  iStack_16c = iVar34;
  local_168 = iVar34;
  if (iVar5 != 0) {
    puVar35 = *(uint **)&(this->TopLevelClusterParentsStrained).field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)local_178;
    }
    uVar38 = *puVar35;
    local_168 = 0;
    iVar34 = 0;
    while (uVar38 == 0) {
      lVar25 = (longlong)iVar34;
      local_168 = local_168 + 0x20;
      iVar34 = iVar34 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar34) goto LAB_143c8e50b;
      uVar38 = puVar35[lVar25 + 1];
    }
    uStack_17c = -uVar38 & uVar38;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_138 = (int)lVar25;
    iStack_16c = local_138 + -1 + local_168;
    if (iVar5 < iStack_16c) {
LAB_143c8e50b:
      iStack_16c = iVar5;
    }
  }
  puVar37 = &(this->TopLevelClusterParentsStrained).field_0x10;
  uVar38 = *(uint *)&(this->TopLevelClusterParentsStrained).field_0x28;
  iStack_160 = *(int *)&(this->TopLevelClusterParentsStrained).field_0x8 -
               *(int *)&(this->TopLevelClusterParentsStrained).field_0x34;
  uVar36 = uVar38 & 0xffffffe0;
  uStack_170 = 0xffffffff;
  TStack_110.CurrentBitIndex = iStack_16c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_17c,iVar34);
  iVar29 = (int)uVar38 >> 5;
  TStack_110._28_4_ = iStack_16c;
  TStack_110.BaseBitIndex = local_168;
  uStack_f0 = CONCAT44(uStack_15c,iStack_160);
  local_218 = (TPBDRigidParticleHandleImp<double,3,1> *)CONCAT44(local_218._4_4_,uVar38);
  local_220 = (TBitArray<FDefaultBitArrayAllocator> *)puVar37;
  local_188 = pTVar1;
  iStack_180 = iVar34;
  iStack_164 = iStack_16c;
  local_118 = pTVar1;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_178;
  if (((int)uVar38 < 0) || (uVar24 = uVar38, iVar5 < (int)uVar38)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar17) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar24 = (uint)local_218;
  }
  pTVar14 = local_220;
  uVar6 = *(uint *)&(this->TopLevelClusterParentsStrained).field_0x28;
  if (uVar24 != uVar6) {
    puVar26 = *(undefined1 **)&(this->TopLevelClusterParentsStrained).field_0x20;
    local_218 = (TPBDRigidParticleHandleImp<double,3,1> *)CONCAT44(local_218._4_4_,uVar6);
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar37;
    }
    uVar38 = -1 << ((byte)uVar38 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar29 * 4);
    while (uVar38 == 0) {
      lVar25 = (longlong)iVar29;
      uVar36 = uVar36 + 0x20;
      iVar29 = iVar29 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_143c8e634;
      uVar38 = *(uint *)(puVar26 + lVar25 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_134 = (int)lVar25;
    uVar38 = (uVar36 - 1) + local_134;
    if ((int)uVar6 < (int)uVar38) {
      uVar38 = uVar6;
    }
    local_218 = (TPBDRigidParticleHandleImp<double,3,1> *)CONCAT44(local_218._4_4_,uVar38);
  }
LAB_143c8e634:
  iVar34 = (uint)local_218;
  while( true ) {
    pTVar1 = local_118;
    if (*(int *)(&local_118->field_0x0 + 8) - *(int *)(&local_118->field_0x0 + 0x34) !=
        (int)uStack_f0) {
      local_227[1] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_227 + 1);
    }
    FVar28 = local_1c0;
    FVar33 = local_1e8;
    if (((TStack_110.CurrentBitIndex == iVar34) && (TStack_110.Array == pTVar14)) &&
       (pTVar1 == &this->TopLevelClusterParentsStrained)) break;
    pTVar32 = *(TPBDRigidParticleHandleImp<double,3,1> **)
               (*(longlong *)&pTVar1->field_0x0 + (longlong)TStack_110.CurrentBitIndex * 0x18);
    local_218 = pTVar32;
    pFVar22 = FClusterUnionManager::FindClusterUnionFromParticle(&this->ClusterUnionManager,pTVar32)
    ;
    bVar17 = false;
    if ((pFVar22 != (FClusterUnion *)0x0) &&
       (bVar17 = false,
       (TPBDRigidParticleHandleImp<double,3,1> *)pFVar22->InternalCluster != pTVar32)) {
      bVar17 = true;
    }
    uVar38 = *(uint *)&pTVar32->field_0x8;
    lVar25 = *(longlong *)pTVar32;
    uVar36 = 0;
    if ((int)uVar38 < *(int *)(lVar25 + 0x2e0)) {
      uVar36 = ~uVar38 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar32 = local_218;
    if (((*(char *)(*(longlong *)(lVar25 + 0x2d8) + 0xd + (longlong)(int)uVar38 * 0x10) == '\0') ||
        (bVar17)) &&
       (pCVar23 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            (*(TPBDRigidClusteredParticles<double,3> **)local_218,
                             *(int *)&local_218->field_0x8), 0 < pCVar23->NumChildren)) {
      if ((pFVar22 != (FClusterUnion *)0x0) &&
         ((TPBDRigidParticleHandleImp<double,3,1> *)pFVar22->InternalCluster == pTVar32)) {
        pTVar39 = (TBitArray<FDefaultBitArrayAllocator> *)
                  (pFVar22->ChildParticles).AllocatorInstance.Data;
        bVar17 = false;
        iVar5 = (pFVar22->ChildParticles).ArrayNum;
        pTVar31 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((pTVar39->AllocatorInstance).InlineData + (longlong)iVar5 * 8);
        local_220 = pTVar31;
        while( true ) {
          if ((pFVar22->ChildParticles).ArrayNum != iVar5) {
            local_227[2] = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_227 + 2);
          }
          if (pTVar39 == pTVar31) break;
          pTVar7 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                    (pTVar39->AllocatorInstance).InlineData;
          if (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
            pTVar30 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar7->field_0xc) {
              pTVar30 = pTVar7;
            }
            pTVar31 = local_220;
            if (pTVar30 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              pCVar23 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar30,
                                   *(int *)&pTVar30->field_0x8);
              bVar17 = (bool)(bVar17 | pCVar23->NumChildren < 1);
              pTVar31 = local_220;
              if (0 < pCVar23->NumChildren) {
                `Chaos::FRigidClustering::AdvanceClustering'::__l47::<lambda_1>::operator()
                          (&local_e8,pTVar30);
                pTVar31 = local_220;
              }
            }
          }
          pTVar39 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((pTVar39->AllocatorInstance).InlineData + 8);
        }
        pTVar32 = local_218;
        if (!bVar17) goto LAB_143c8e801;
      }
      `Chaos::FRigidClustering::AdvanceClustering'::__l47::<lambda_1>::operator()
                (&local_e8,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar32);
    }
LAB_143c8e801:
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  pTVar8 = this->StrainModifiers;
  if (pTVar8 != (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar27 = (pTVar8->AllocatorInstance).Data;
    iVar34 = pTVar8->ArrayNum;
    pFVar2 = pFVar27 + (longlong)iVar34 * 8;
    while( true ) {
      if (pTVar8->ArrayNum != iVar34) {
        local_227[3] = 0;
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_227 + 3);
      }
      if (pFVar27 == pFVar2) break;
      local_c8 = &local_208;
      local_d0 = this;
      (**(code **)(**(longlong **)pFVar27 + 0x90))(*(longlong **)pFVar27,&local_d0);
      pFVar27 = pFVar27 + 8;
    }
  }
  FClusterUnionManager::HandleDeferredClusterUnionUpdateProperties(&this->ClusterUnionManager);
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
           *)&this->TopLevelClusterParentsStrained);
  if ((this->MCollisionImpulseArrayDirty != false) || (local_227[0] != '\0')) {
    FVar21 = StatPtr_STAT_UpdateDirtyImpulses;
    if (StatPtr_STAT_UpdateDirtyImpulses ==
        (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateDirtyImpulses>)0x0) {
      pFVar19 = ::FName::FName(local_88,"STAT_UpdateDirtyImpulses");
      FVar21 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateDirtyImpulses>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateDirtyImpulses,*pFVar19,
                          L"TPBDRigidClustering<>::Update Dirty Impulses","STATGROUP_Chaos",
                          "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar21;
    bVar12 = false;
    bVar11 = false;
    local_198.ComparisonIndex.Value = 0;
    local_198.Number = 0;
    bVar17 = false;
    bVar16 = false;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_143c8ea1c:
      bVar12 = bVar17;
      bVar11 = bVar16;
      bVar16 = false;
      FVar28 = local_198;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1f0[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1f0[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
        bVar12 = false;
        bVar11 = true;
        bVar17 = false;
        bVar16 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1e0.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_1e0.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                     ,0x72d);
          bVar12 = true;
          bVar11 = true;
          bVar17 = true;
          bVar16 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_143c8ea1c;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar16 = true;
    }
    if (GClusterBreakOnlyStrained == 1) {
      iVar34 = 0;
      uVar36 = 0;
      uVar38 = 0;
      if (0 < (int)local_200) {
        lVar25 = 0;
        do {
          uVar38 = 0;
          if ((int)uVar36 < (int)local_200) {
            uVar38 = ~uVar36 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_158 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                       ((longlong)local_208 + lVar25);
          local_b8 = &local_158;
          uStack_b0 = 1;
          local_78._12_4_ = uStack_ac;
          local_78.ArrayNum = 1;
          local_78.DataPtr = local_b8;
          bVar17 = BreakingModel(this,&local_78);
          if ((bVar17) &&
             (iVar34 = iVar34 + 1, uVar38 = uVar36,
             (this->DestructionSettings).PerAdvanceBreaksAllowed <= iVar34)) break;
          uVar36 = uVar36 + 1;
          lVar25 = lVar25 + 8;
          uVar38 = 0;
        } while ((int)uVar36 < (int)local_200);
      }
      if (0 < (this->DestructionSettings).PerAdvanceBreaksRescheduleLimit) {
        uVar36 = uVar38 + 1;
        lVar25 = (longlong)(int)uVar38 * 8;
        iVar34 = (int)local_200;
        while (lVar25 = lVar25 + 8, (int)uVar36 < iVar34) {
          uVar24 = 0;
          if ((int)uVar36 < iVar34) {
            uVar24 = ~uVar36 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_1d8 = *(ulonglong *)((longlong)local_208 + lVar25);
          QueryPerformanceCounter(&local_150);
          local_148 = (ulonglong)local_150.s.LowPart;
          uVar24 = ((uint)(local_1d8 >> 0x14) & 0xffff ^ (uint)(local_1d8 >> 4)) * -0x7a143595;
          uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
          uVar24 = uVar24 >> 0x10 ^ uVar24;
          if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
              *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
            puVar37 = *(undefined1 **)&(this->TopLevelClusterParentsStrained).field_0x40;
            puVar26 = &(this->TopLevelClusterParentsStrained).field_0x38;
            if (puVar37 != (undefined1 *)0x0) {
              puVar26 = puVar37;
            }
            iVar34 = *(int *)(puVar26 +
                             (ulonglong)
                             (*(int *)&(this->TopLevelClusterParentsStrained).field_0x48 - 1U &
                             uVar24) * 4);
            if (iVar34 != -1) {
              do {
                lVar3 = *(longlong *)&this->TopLevelClusterParentsStrained + (longlong)iVar34 * 0x18
                ;
                if (*(ulonglong *)
                     (*(longlong *)&this->TopLevelClusterParentsStrained + (longlong)iVar34 * 0x18)
                    == local_1d8) {
                  if (lVar3 != 0) goto LAB_143c8ec55;
                  break;
                }
                iVar34 = *(int *)(lVar3 + 0x10);
              } while (iVar34 != -1);
            }
          }
          local_a8 = &local_1d8;
          local_a0 = &local_148;
          TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
          ::
          EmplaceByHash<TPairInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,__int64_&&>_>
                    ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                      *)&this->TopLevelClusterParentsStrained,(uint)local_130,
                     (TPairInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,__int64_&&>
                      *)(ulonglong)uVar24,(bool *)&local_a8);
LAB_143c8ec55:
          uVar36 = uVar36 + 1;
          if ((this->DestructionSettings).PerAdvanceBreaksRescheduleLimit <= (int)(uVar36 + ~uVar38)
             ) break;
          iVar34 = (int)local_200;
        }
      }
    }
    else {
      BreakingModel(this);
    }
    if (bCheckForInterclusterEdgesOnRelease != false) {
      FClusterUnionManager::FlushPendingOperations(&this->ClusterUnionManager);
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar16) {
      FThreadStats::AddMessage(FVar28,CycleScopeEnd);
    }
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
LAB_143c8ecc7:
  QueryPerformanceCounter(&local_140);
  if (5 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// ApplySettings @ 143c90dd0

void __thiscall
Chaos::FRigidClustering::ApplySettings(FRigidClustering *this,FChaosSolverConfiguration *param_1)

{
  EClusterUnionMethod EVar1;
  EConnectionMethod EVar2;
  int iVar3;
  
  this->MClusterConnectionFactor = (double)param_1->ClusterConnectionFactor;
  EVar1 = param_1->ClusterUnionConnectionType;
  if (EVar1 == PointImplicit) {
    EVar2 = PointImplicit;
  }
  else if (EVar1 == DelaunayTriangulation) {
    EVar2 = DelaunayTriangulation;
  }
  else if (EVar1 == MinimalSpanningSubsetDelaunayTriangulation) {
    EVar2 = MinimalSpanningSubsetDelaunayTriangulation;
  }
  else if (EVar1 == PointImplicitAugmentedWithMinimalDelaunay) {
    EVar2 = PointImplicitAugmentedWithMinimalDelaunay;
  }
  else if (EVar1 == BoundsOverlapFilteredDelaunayTriangulation) {
    EVar2 = BoundsOverlapFilteredDelaunayTriangulation;
  }
  else {
    EVar2 = None;
  }
  this->MClusterUnionConnectionType = EVar2;
  iVar3 = GPerAdvanceBreaksAllowed;
  if ((param_1->DestructionSettings).PerAdvanceBreaksAllowed < GPerAdvanceBreaksAllowed) {
    iVar3 = (param_1->DestructionSettings).PerAdvanceBreaksAllowed;
  }
  (this->DestructionSettings).PerAdvanceBreaksAllowed = iVar3;
  iVar3 = GPerAdvanceBreaksRescheduleLimit;
  if ((param_1->DestructionSettings).PerAdvanceBreaksRescheduleLimit <
      GPerAdvanceBreaksRescheduleLimit) {
    iVar3 = (param_1->DestructionSettings).PerAdvanceBreaksRescheduleLimit;
  }
  (this->DestructionSettings).PerAdvanceBreaksRescheduleLimit = iVar3;
  iVar3 = ClusteringParticleReleaseThrottlingMinCount;
  if (ClusteringParticleReleaseThrottlingMinCount <
      (param_1->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount) {
    iVar3 = (param_1->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount;
  }
  (this->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount = iVar3;
  iVar3 = ClusteringParticleReleaseThrottlingMaxCount;
  if (ClusteringParticleReleaseThrottlingMaxCount <
      (param_1->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount) {
    iVar3 = (param_1->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount;
  }
  (this->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount = iVar3;
  return;
}

// ApplyStrainModifiers @ 143c90e80

void __thiscall
Chaos::FRigidClustering::ApplyStrainModifiers
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FRigidClustering *local_28;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *local_20;
  
  pTVar3 = this->StrainModifiers;
  if (pTVar3 != (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_28 = this;
      local_20 = param_1;
      (**(code **)(**(longlong **)pFVar4 + 0x90))(*(longlong **)pFVar4,&local_28);
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// BreakCluster @ 143c90f60

bool __thiscall
Chaos::FRigidClustering::BreakCluster
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  float *pfVar5;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  longlong *plVar8;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res10;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res18 [2];
  
  if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    local_res10 = param_1;
    pTVar4 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)&this->MChildren,param_1);
    pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)&pTVar4->field_0x8;
    if (pTVar4 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    }
    if (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      iVar3 = *(int *)&pTVar7->field_0x8;
      plVar8 = *(longlong **)pTVar7;
      plVar1 = plVar8 + iVar3;
      while( true ) {
        if (*(int *)&pTVar7->field_0x8 != iVar3) {
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (plVar8 == plVar1) break;
        pTVar6 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar8)->field_0xc) {
          pTVar6 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar8;
        }
        if (pTVar6 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          pfVar5 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar6,
                              *(int *)&pTVar6->field_0x8);
          *pfVar5 = 3.4028235e+38;
          pfVar5 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar6,
                              *(int *)&pTVar6->field_0x8);
          *pfVar5 = 3.4028235e+38;
          UpdateTopLevelParticle(this,pTVar6);
          pfVar5 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar6,
                              *(int *)&pTVar6->field_0x8);
          fVar2 = *pfVar5;
          pfVar5 = TPBDRigidClusteredParticles<double,3>::Strains
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar6,
                              *(int *)&pTVar6->field_0x8);
          *pfVar5 = fVar2;
        }
        plVar8 = plVar8 + 1;
      }
      if (0 < *(int *)&pTVar7->field_0x8) {
        TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                  (&this->CrumbledSinceLastUpdate,local_res18,(bool *)&local_res10);
        SendCrumblingEvent(this,param_1);
      }
      return true;
    }
  }
  return false;
}

// BreakClustersByProxy @ 143c910b0

bool __thiscall
Chaos::FRigidClustering::BreakClustersByProxy(FRigidClustering *this,IPhysicsProxyBase *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  float fVar3;
  ForElementType<FSetElementId> FVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  code *pcVar6;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar12;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  IPhysicsProxyBase *pIVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  float *pfVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  TGeometryParticleHandleImp<double,3,1> *pTVar20;
  ForElementType<FSetElementId> FVar21;
  int iVar22;
  undefined8 *puVar23;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar24;
  uint uVar25;
  uint uVar26;
  longlong *plVar27;
  uint *puVar28;
  longlong *plVar29;
  bool bVar30;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_d8;
  TGeometryParticleHandleImp<double,3,1> *local_d0;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_90;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  iVar17 = *(int *)&(this->TopLevelClusterParents).Elements.field_0x28;
  local_c8 = &this->TopLevelClusterParents;
  bVar30 = false;
  iStack_c0 = 0;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar17 != 0) {
    puVar28 = *(uint **)&(this->TopLevelClusterParents).Elements.field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)&(this->TopLevelClusterParents).Elements.field_0x10;
    }
    uVar26 = *puVar28;
    local_a8 = 0;
    while (uVar26 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar17;
      if ((int)((iVar17 + -1 >> 0x1f & 0x1fU) + iVar17 + -1) >> 5 < iStack_c0) goto LAB_143c91171;
      uVar26 = puVar28[lVar11 + 1];
    }
    uStack_bc = -uVar26 & uVar26;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_98 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_98;
    if (iVar17 < iStack_ac) {
      iStack_ac = iVar17;
    }
  }
LAB_143c91171:
  local_b8 = &(this->TopLevelClusterParents).Elements.field_0x10;
  uVar26 = *(uint *)&(this->TopLevelClusterParents).Elements.field_0x28;
  iStack_a0 = *(int *)&(this->TopLevelClusterParents).Elements.field_0x8 -
              *(int *)&(this->TopLevelClusterParents).Elements.field_0x34;
  uVar25 = uVar26 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar26 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  iStack_a4 = iStack_ac;
  local_88 = local_c8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  if ((((int)uVar26 < 0) || (iVar17 < (int)uVar26)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&(this->TopLevelClusterParents).Elements.field_0x28;
  local_d8 = uVar26;
  if (uVar26 != uVar10) {
    puVar18 = *(undefined1 **)&(this->TopLevelClusterParents).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->TopLevelClusterParents).Elements.field_0x10;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar22 * 4);
    while (uVar26 == 0) {
      lVar11 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar26 = uVar10;
      local_d8 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar22)
      goto LAB_143c91280;
      uVar26 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_94 = (int)lVar11;
    uVar26 = local_94 + -1 + uVar25;
    local_d8 = uVar26;
    if ((int)uVar10 < (int)uVar26) {
      uVar26 = uVar10;
      local_d8 = uVar10;
    }
  }
LAB_143c91280:
  do {
    pTVar7 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_80.CurrentBitIndex == uVar26) &&
        (TStack_80.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TopLevelClusterParents).Elements.field_0x10
        )) && (pTVar7 == &this->TopLevelClusterParents)) {
      return bVar30;
    }
    pTVar20 = *(TGeometryParticleHandleImp<double,3,1> **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
    local_d0 = pTVar20;
    if (pTVar20 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar25 = (uint)pTVar20->_padding_;
      lVar11 = pTVar20->_padding_;
      uVar10 = 0;
      if ((int)uVar25 < *(int *)(lVar11 + 0xd0)) {
        uVar10 = ~uVar25 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pIVar14 = *(IPhysicsProxyBase **)(*(longlong *)(lVar11 + 200) + (longlong)(int)uVar25 * 8);
      pTVar12 = TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar20->_padding_,
                           (int)pTVar20->_padding_);
      uVar25 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      if (*(int *)&(pTVar12->Elements).field_0x8 != *(int *)&(pTVar12->Elements).field_0x34) {
        FVar4 = (pTVar12->Hash).SecondaryData;
        FVar21 = (ForElementType<FSetElementId>)&pTVar12->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = FVar4;
        }
        iVar17 = *(int *)((longlong)FVar21 +
                         (ulonglong)(pTVar12->HashSize - 1U & (uVar25 >> 0x10 ^ uVar25)) * 4);
        if (iVar17 != -1) {
          do {
            if (*(IPhysicsProxyBase **)(*(longlong *)&pTVar12->Elements + (longlong)iVar17 * 0x10)
                == param_1) goto LAB_143c913ba;
            iVar17 = *(int *)(*(longlong *)&pTVar12->Elements + 8 + (longlong)iVar17 * 0x10);
          } while (iVar17 != -1);
        }
      }
      iVar17 = -1;
LAB_143c913ba:
      if ((pIVar14 == param_1) || (iVar17 != -1)) {
        if (iVar17 == -1) {
LAB_143c91460:
          pTVar13 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->MChildren,
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar20);
          plVar29 = (longlong *)&pTVar13->field_0x8;
          if (pTVar13 ==
              (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
            plVar29 = (longlong *)0x0;
          }
          if (plVar29 == (longlong *)0x0) {
            bVar30 = true;
          }
          else {
            plVar27 = (longlong *)*plVar29;
            lVar11 = plVar29[1];
            plVar1 = plVar27 + (int)lVar11;
            while( true ) {
              if ((int)plVar29[1] != (int)lVar11) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              if (plVar27 == plVar1) break;
              pTVar24 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar27)->field_0xc
                 ) {
                pTVar24 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar27;
              }
              if (pTVar24 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                pfVar16 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                                    (*(TPBDRigidClusteredParticles<double,3> **)pTVar24,
                                     *(int *)&pTVar24->field_0x8);
                *pfVar16 = 3.4028235e+38;
                UpdateTopLevelParticle(this,pTVar24);
                pfVar16 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                                    (*(TPBDRigidClusteredParticles<double,3> **)pTVar24,
                                     *(int *)&pTVar24->field_0x8);
                fVar3 = *pfVar16;
                pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                                    (*(TPBDRigidClusteredParticles<double,3> **)pTVar24,
                                     *(int *)&pTVar24->field_0x8);
                *pfVar16 = fVar3;
              }
              plVar27 = plVar27 + 1;
            }
            if (0 < (int)plVar29[1]) {
              TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                        (&this->CrumbledSinceLastUpdate,&local_90,(bool *)&local_d0);
              SendCrumblingEvent(this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar20);
            }
            bVar30 = true;
            uVar26 = local_d8;
          }
        }
        else {
          pTVar13 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->MChildren,
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar20);
          puVar19 = (undefined8 *)&pTVar13->field_0x8;
          if (pTVar13 ==
              (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
            puVar19 = (undefined8 *)0x0;
          }
          if (puVar19 == (undefined8 *)0x0) {
LAB_143c9145b:
            if (pTVar20 != (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_143c91460;
          }
          else {
            puVar23 = (undefined8 *)*puVar19;
            puVar19 = puVar23 + *(int *)(puVar19 + 1);
            for (; puVar23 != puVar19; puVar23 = puVar23 + 1) {
              pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)*puVar23;
              pIVar14 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar5);
              if (pIVar14 == param_1) {
                pTVar20 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                pTVar15 = pTVar20;
                if (2 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
                  pTVar15 = pTVar5;
                }
                if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                  pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)*puVar23;
                  local_d0 = pTVar20;
                  if (2 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
                    pTVar20 = pTVar5;
                    local_d0 = pTVar5;
                  }
                  goto LAB_143c9145b;
                }
              }
            }
          }
        }
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// BreakingModel @ 143c91580

void __thiscall
Chaos::FRigidClustering::BreakingModel
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> local_18;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar2;
  BreakingModel(this,&local_18);
  return;
}

// BreakingModel @ 143c915f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FRigidClustering::BreakingModel(FRigidClustering *this)

{
  FScriptContainerElement *pFVar1;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel_AllParticles> FVar13;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar14;
  ClusterId *pCVar15;
  FClusterUnion *pFVar16;
  uint uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TPBDRigidParticleHandleImp<double,3,1> *local_c8;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_c0;
  undefined1 local_b8 [24];
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int local_90;
  FName local_88;
  undefined8 local_78;
  int iStack_70;
  int iStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> local_58;
  
  FVar13 = StatPtr_STAT_BreakingModel_AllParticles;
  if (StatPtr_STAT_BreakingModel_AllParticles ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel_AllParticles>)0x0) {
    pFVar12 = ::FName::FName(&local_res20,"STAT_BreakingModel_AllParticles");
    FVar13 = (FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel_AllParticles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BreakingModel_AllParticles,
                        *pFVar12,L"BreakingModel_AllParticles","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar17 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar18.Value;
        local_res18.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x77d);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar18.Value;
      uStackX_c = uVar17;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar7 = true;
      goto LAB_143c9172a;
    }
  }
  bVar7 = false;
  FVar19 = local_88;
LAB_143c9172a:
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)local_b8,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidClusteredParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)(this->MEvolution->_padding_ + 0x5f8));
  if (CONCAT44(local_b8._20_4_,local_b8._16_4_) != 0) {
    do {
      TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)local_b8);
      pTVar14 = TPBDRigidParticles<double,3>::Handle
                          ((TPBDRigidParticles<double,3> *)CONCAT44(local_b8._20_4_,local_b8._16_4_)
                           ,iStack_a0);
      local_c8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pTVar14->field_0xc) {
        local_c8 = pTVar14;
      }
      if ((local_c8 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         (pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              (*(TPBDRigidClusteredParticles<double,3> **)local_c8,
                               *(int *)&local_c8->field_0x8), 0 < pCVar15->NumChildren)) {
        pFVar16 = FClusterUnionManager::FindClusterUnionFromParticle
                            (&this->ClusterUnionManager,local_c8);
        if ((pFVar16 == (FClusterUnion *)0x0) ||
           ((TPBDRigidParticleHandleImp<double,3,1> *)pFVar16->InternalCluster != local_c8)) {
          if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)local_d0._4_4_ * 8))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar20 = (int)local_d0;
          if ((int)local_d0 == local_d0._4_4_) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar20 + 1);
          *(TPBDRigidParticleHandleImp<double,3,1> **)(local_d8.Data + (longlong)iVar20 * 8) =
               local_c8;
        }
        else {
          pFVar21 = (pFVar16->ChildParticles).AllocatorInstance.Data;
          iVar20 = (pFVar16->ChildParticles).ArrayNum;
          pFVar1 = pFVar21 + (longlong)iVar20 * 8;
          while( true ) {
            if ((pFVar16->ChildParticles).ArrayNum != iVar20) {
              local_res8 = local_res8 & 0xffffff00;
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_res8);
            }
            if (pFVar21 == pFVar1) break;
            pTVar2 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar21;
            if (pTVar2 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              local_c0 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)pTVar2->field_0xc) {
                local_c0 = pTVar2;
              }
              if ((local_c0 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
                 (pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                      (*(TPBDRigidClusteredParticles<double,3> **)local_c0,
                                       *(int *)&local_c0->field_0x8), 0 < pCVar15->NumChildren)) {
                if ((local_d8.Data <= (FScriptContainerElement *)&local_c0) &&
                   (((FScriptContainerElement *)&local_c0 <
                     local_d8.Data + (longlong)local_d0._4_4_ * 8 &&
                    (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar10)))) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar11 = (int)local_d0;
                if ((int)local_d0 == local_d0._4_4_) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
                }
                local_d0 = CONCAT44(local_d0._4_4_,iVar11 + 1);
                *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                 (local_d8.Data + (longlong)iVar11 * 8) = local_c0;
              }
            }
            pFVar21 = pFVar21 + 8;
          }
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)local_b8);
      do {
        uVar9 = local_b8._8_8_;
        if ((TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
             *)local_b8._8_8_ ==
            (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
             *)0x0) {
          iStack_a0 = iStack_a0 + 1;
          if (local_94 <= iStack_a0) {
LAB_143c919c8:
            local_98 = local_98 + 1;
            TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
                       local_b8);
          }
        }
        else {
          iVar20 = local_90 + 1;
          local_90 = iVar20;
          if (*(int *)(local_b8._8_8_ + 8) <= iVar20) goto LAB_143c919c8;
          if ((iVar20 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar3 = *(longlong **)(((ForAnyElementType *)uVar9)->Data + (longlong)iVar20 * 8);
          lVar4 = *plVar3;
          iStack_a0 = (int)plVar3[1];
          if (lVar4 == 0) {
            iStack_6c = (uint)iStack_6c._1_3_ << 8;
          }
          else {
            iStack_6c = CONCAT31(iStack_6c._1_3_,*(undefined1 *)(lVar4 + 0x70));
          }
          local_78._0_4_ = (undefined4)lVar4;
          local_b8._16_4_ = (undefined4)local_78;
          local_78._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
          local_b8._20_4_ = local_78._4_4_;
          iStack_9c = iStack_6c;
          local_78 = lVar4;
          iStack_70 = iStack_a0;
        }
        bVar10 = true;
        if (CONCAT44(local_b8._20_4_,local_b8._16_4_) == 0) goto LAB_143c919f6;
        TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)local_b8
                  );
        bVar10 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_b8 + 0x10));
      } while (bVar10);
      bVar10 = CONCAT44(local_b8._20_4_,local_b8._16_4_) == 0;
LAB_143c919f6:
    } while (!bVar10);
  }
  iVar20 = (int)local_d0;
  local_68 = local_d8.Data;
  if (((int)local_d0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_60 = iVar20;
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar20;
  local_58.DataPtr = (TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_68;
  BreakingModel(this,&local_58);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// BreakingModel @ 143c91b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::FRigidClustering::BreakingModel
          (FRigidClustering *this,
          TArrayView<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>_>
  *this_00;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **ppTVar3;
  int iVar4;
  int iVar5;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel> FVar12;
  ClusterId *pCVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **ppTVar18;
  undefined1 auStackY_128 [32];
  LARGE_INTEGER local_c8;
  FName local_c0;
  FStatMessage local_b0;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar12 = StatPtr_STAT_BreakingModel;
  if (StatPtr_STAT_BreakingModel == (FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_b0,"STAT_BreakingModel");
    FVar12 = (FThreadSafeStaticStat<Chaos::FStat_STAT_BreakingModel>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BreakingModel,*pFVar11,
                        L"BreakingModel","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar8 = false;
  bVar10 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.s.LowPart = FVar15.Value;
        local_c8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x7b4);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.s.LowPart = FVar15.Value;
      local_c8.s.HighPart = uVar14;
      local_c0 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_143c91cca;
    }
  }
  bVar9 = false;
  FVar16 = local_c0;
LAB_143c91cca:
  iVar4 = param_1->ArrayNum;
  this_00 = &this->MomentumRestoringDataByParticle;
  this->FrameProcessedClusters = this->FrameProcessedClusters + iVar4;
  bVar17 = 1 < *(int *)&(this->MomentumRestoringDataByParticle).field_0x48;
  if (!bVar17) {
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->MomentumRestoringDataByParticle).field_0xc;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x34 = 0;
  iVar5 = *(int *)&(this->MomentumRestoringDataByParticle).field_0x2c;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->MomentumRestoringDataByParticle).field_0x10,0);
  }
  if (bVar17) {
    *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x48 = 1;
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ppTVar18 = param_1->DataPtr;
  bVar17 = false;
  ppTVar3 = ppTVar18 + iVar4;
  if (ppTVar18 != ppTVar3) {
    do {
      pTVar6 = *ppTVar18;
      pCVar13 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar6,
                           *(int *)&pTVar6->field_0x8);
      if (pCVar13->NumChildren != 0) {
        ReleaseClusterParticles(this,&local_98,pTVar6,false);
        local_98.HashSize = 0;
        bVar17 = (bool)(bVar17 | 0 < (int)(local_98.Elements._8_4_ - local_98.Elements._52_4_));
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
      }
      ppTVar18 = ppTVar18 + 1;
    } while (ppTVar18 != ppTVar3);
    if ((bVar17 != false) &&
       (FClusterUnionManager::HandleDeferredClusterUnionUpdateProperties(&this->ClusterUnionManager)
       , 0.0 < RestoreBreakingMomentumPercent)) {
      RestoreBreakingMomentum(this);
    }
  }
  bVar7 = 1 < *(int *)&(this->MomentumRestoringDataByParticle).field_0x48;
  if (!bVar7) {
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->MomentumRestoringDataByParticle).field_0xc;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x34 = 0;
  iVar4 = *(int *)&(this->MomentumRestoringDataByParticle).field_0x2c;
  *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->MomentumRestoringDataByParticle).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->MomentumRestoringDataByParticle).field_0x48 = 1;
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_b0.NameAndInfo.Index.Value = local_c0.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_b0);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar17;
}

// BuildConvexOptimizer @ 143c91fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FRigidClustering::BuildConvexOptimizer
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  FConvexOptimizer *pFVar4;
  longlong lVar5;
  uchar uVar6;
  bool bVar7;
  EObjectStateType EVar8;
  int iVar9;
  FImplicitObject *pFVar10;
  FImplicitObjectUnion *this_00;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  IPhysicsProxyBase *pIVar12;
  FClusterUnion *pFVar13;
  TPimplPtr<Chaos::Private::FConvexOptimizer,0> *pTVar14;
  int *piVar15;
  code *pcVar16;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  ForElementType<unsigned_int> FVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  FScriptContainerElement *local_80;
  TRefCountPtr<Chaos::FImplicitObjectUnion> local_78;
  TPimplPtr<Chaos::Private::FConvexOptimizer,0> local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  if (param_1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar10 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if ((pFVar10 == (FImplicitObject *)0x0) || (CVars::bChaosConvexSimplifyUnion == false))
  goto LAB_143c923e8;
  this_00 = (FImplicitObjectUnion *)
            TGeometryParticleHandleImp<double,3,1>::GetGeometry
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  uVar6 = FImplicitObject::GetType((FImplicitObject *)this_00);
  if ((uVar6 != '\x05') && (uVar6 != '\x0f')) {
    this_00 = (FImplicitObjectUnion *)0x0;
  }
  if (this_00 == (FImplicitObjectUnion *)0x0) goto LAB_143c923e8;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.MaxBits = 0x80;
  pTVar11 = TGeometryParticlesImp<double,3,0>::ShapesArray
                      (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8);
  local_68.NumBits = pTVar11->ArrayNum;
  uVar19 = local_68.NumBits + 0x1fU >> 5;
  if (local_68.NumBits + 0x1fU >> 5 != 0) {
    if (local_68.MaxBits + 0x1fU >> 5 < uVar19) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_68.AllocatorInstance,0,uVar19,4);
      local_68.MaxBits = uVar19 << 5;
    }
    FVar17 = (ForElementType<unsigned_int>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_68.AllocatorInstance.SecondaryData;
    }
    if (uVar19 < 9) {
      iVar18 = -1;
    }
    else {
      iVar18 = 0xff;
    }
    memset((void *)FVar17,iVar18,(ulonglong)uVar19 << 2);
    uVar19 = local_68.NumBits & 0x8000001f;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
    }
    if (uVar19 != 0) {
      FVar17 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_68.AllocatorInstance.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar17 +
                       (longlong)((int)(local_68.NumBits + (local_68.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar19 & 0x1f);
    }
  }
  pIVar12 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                      ((TGeometryParticleHandleImp<double,3,1> *)param_1);
  if ((pIVar12 == (IPhysicsProxyBase *)0x0) || (pIVar12->Type != GeometryCollectionType)) {
    pFVar13 = FClusterUnionManager::FindClusterUnionFromParticle
                        (&this->ClusterUnionManager,
                         (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    if (pFVar13 != (FClusterUnion *)0x0) {
      pTVar11 = TGeometryParticlesImp<double,3,0>::ShapesArray
                          (*(TGeometryParticlesImp<double,3,0> **)param_1,
                           *(int *)&param_1->field_0x8);
      iVar18 = (pFVar13->ChildParticles).ArrayNum;
      if (pTVar11->ArrayNum == iVar18) {
        pFVar21 = (pFVar13->ChildParticles).AllocatorInstance.Data;
        iVar20 = 0;
        local_80 = pFVar21 + (longlong)iVar18 * 8;
        pFVar22 = local_80;
LAB_143c921e0:
        do {
          if ((pFVar13->ChildParticles).ArrayNum != iVar18) {
            local_88[0] = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_88);
          }
          if (pFVar21 == pFVar22) break;
          this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)
                            &(*(TGeometryParticleHandleImp<double,3,1> **)pFVar21)->_padding_ + 4))
          {
            this_01 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar21;
          }
          if (((this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
              (pIVar12 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_01),
              pIVar12 != (IPhysicsProxyBase *)0x0)) && (pIVar12->Type == GeometryCollectionType)) {
            cVar3 = *(char *)((longlong)&pIVar12[7]._padding_ + 2);
            if (((iVar20 < 0) || (local_68.NumBits <= iVar20)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_68;
            if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_68.AllocatorInstance.SecondaryData;
            }
            iVar9 = iVar20;
            if (iVar20 < 0) {
              iVar9 = iVar20 + 0x1f;
            }
            puVar2 = (uint *)((longlong)FVar17 + (longlong)(iVar9 >> 5) * 4);
            uVar19 = 1 << ((byte)iVar20 & 0x1f);
            pFVar22 = local_80;
            if (cVar3 < '\0') {
              iVar20 = iVar20 + 1;
              *puVar2 = uVar19 | *puVar2;
              pFVar21 = pFVar21 + 8;
              goto LAB_143c921e0;
            }
            *puVar2 = ~uVar19 & *puVar2;
          }
          iVar20 = iVar20 + 1;
          pFVar21 = pFVar21 + 8;
        } while( true );
      }
    }
  }
  else {
    pTVar11 = TGeometryParticlesImp<double,3,0>::ShapesArray
                        (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8)
    ;
    if (pTVar11->ArrayNum == 1) {
      cVar3 = *(char *)((longlong)&pIVar12[7]._padding_ + 2);
      if ((local_68.NumBits < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      FVar17 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_68.AllocatorInstance.SecondaryData;
      }
      if (cVar3 < '\0') {
        *(uint *)FVar17 = *(uint *)FVar17 | 1;
      }
      else {
        *(uint *)FVar17 = *(uint *)FVar17 & 0xfffffffe;
      }
    }
  }
  bVar7 = false;
  if (1 < this_00->NumLeafObjects) {
    pTVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer(param_1);
    if (pTVar14->Ptr == (FConvexOptimizer *)0x0) {
      piVar15 = ::operator_new(0x160);
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        *(undefined8 *)(piVar15 + 2) = 0;
        *(code **)piVar15 =
             UE::Core::Private::PimplPtr::DeleterFunc<Chaos::Private::FConvexOptimizer>;
        Chaos::Private::FConvexOptimizer::FConvexOptimizer((FConvexOptimizer *)(piVar15 + 4));
      }
      pTVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer(param_1);
      if (&local_70 == pTVar14) {
        if ((FConvexOptimizer *)(piVar15 + 4) != (FConvexOptimizer *)0x0) {
          pcVar16 = *(code **)piVar15;
          goto LAB_143c92340;
        }
      }
      else {
        pFVar4 = pTVar14->Ptr;
        pTVar14->Ptr = (FConvexOptimizer *)(piVar15 + 4);
        if (pFVar4 != (FConvexOptimizer *)0x0) {
          pcVar16 = *(code **)&pFVar4[-1].MainTribox.ConvexId;
          piVar15 = &pFVar4[-1].MainTribox.ConvexId;
LAB_143c92340:
          (*pcVar16)(piVar15);
        }
      }
    }
    pTVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer(param_1);
    pFVar4 = pTVar14->Ptr;
    EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    pTVar11 = TGeometryParticlesImp<double,3,0>::ShapesArray
                        (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8)
    ;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    local_78.Reference = this_00;
    Chaos::Private::FConvexOptimizer::SimplifyRootConvexes(pFVar4,&local_78,pTVar11,EVar8,&local_68)
    ;
    if (local_78.Reference != (FImplicitObjectUnion *)0x0) {
      LOCK();
      plVar1 = &(local_78.Reference)->_padding_;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (*(int *)((longlong)&(local_78.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(local_78.Reference)->_padding_)(local_78.Reference,1);
      }
    }
    pTVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer(param_1);
    bVar7 = (pTVar14->Ptr->SimplifiedConvexes).ArrayNum != 0;
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (bVar7) {
    return;
  }
LAB_143c923e8:
  pTVar14 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConvexOptimizer(param_1);
  pFVar4 = pTVar14->Ptr;
  if (pFVar4 != (FConvexOptimizer *)0x0) {
    pTVar14->Ptr = (FConvexOptimizer *)0x0;
    (**(code **)&pFVar4[-1].MainTribox.ConvexId)();
  }
  return;
}

// CleanupInternalClustersForProxies @ 143c932f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::CleanupInternalClustersForProxies
          (FRigidClustering *this,TArrayView<IPhysicsProxyBase_*,int> *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  FName *pFVar3;
  FThreadSafeStaticStat<Chaos::FStat_STAT_CleanupInternalClustersForProxy> FVar4;
  TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  uint uVar6;
  FColor_u_0 FVar7;
  FName FVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  FName FVar12;
  undefined1 uVar13;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  FVar4 = StatPtr_STAT_CleanupInternalClustersForProxy;
  if (StatPtr_STAT_CleanupInternalClustersForProxy ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CleanupInternalClustersForProxy>)0x0) {
    pFVar3 = ::FName::FName(&local_res18,"STAT_CleanupInternalClustersForProxy");
    FVar4 = (FThreadSafeStaticStat<Chaos::FStat_STAT_CleanupInternalClustersForProxy>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CleanupInternalClustersForProxy,
                       *pFVar3,L"FRigidClustering::CleanupInternalClustersForProxy",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar8 = *(FName *)FVar4;
  uVar13 = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar7.Bits = (uint)FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Bits != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar4 + 0x10));
      uVar13 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar7.Bits;
        uStackX_14 = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar4 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x76e);
        uVar13 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar7.Bits;
      uStackX_14 = uVar6;
      local_res20 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar13) | 4;
      goto LAB_143c93445;
    }
  }
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_143c93445:
  FVar12 = (FName)param_1->DataPtr;
  FVar1 = (FName)((longlong)FVar12 + (longlong)param_1->ArrayNum * 8);
  local_res18 = FVar1;
  FVar7 = local_res10;
  for (; local_res10 = FVar7, FVar12 != FVar1; FVar12 = (FName)((longlong)FVar12 + 8)) {
    uVar10 = 0;
    FVar8 = *(FName *)FVar12;
    pTVar5 = TSet<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)&this->EmptyInternalClustersPerProxy,(IPhysicsProxyBase *)FVar8);
    local_50.Data = (FScriptContainerElement *)0x0;
    if (pTVar5 == (TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      local_48 = 0;
    }
    else {
      iVar9 = *(int *)&pTVar5->field_0x10;
      _Src = *(void **)&pTVar5->field_0x8;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (iVar9 == 0) {
        local_48 = 0;
        uVar10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar9,0,&local_50,iVar9,(int *)((longlong)&local_48 + 4));
        memcpy(local_50.Data,_Src,(longlong)iVar9 << 3);
        uVar10 = local_48 & 0xffffffff;
      }
    }
    iVar9 = (int)uVar10;
    pFVar2 = local_50.Data + (longlong)iVar9 * 8;
    FVar11.Data = local_50.Data;
    while( true ) {
      if ((int)uVar10 != iVar9) {
        `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res18);
      }
      if (FVar11.Data == pFVar2) break;
      local_res18 = (FName)((ulonglong)local_res18 & 0xffffffffffffff00);
      DestroyClusterParticle
                (this,*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar11.Data,
                 (FClusterDestoryParameters *)&local_res18);
      uVar10 = local_48 & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    local_res18 = FVar8;
    if (*(int *)&(this->EmptyInternalClustersPerProxy).field_0x8 !=
        *(int *)&(this->EmptyInternalClustersPerProxy).field_0x34) {
      uVar6 = ((uint)((ulonglong)FVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar8 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      TSet<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<IPhysicsProxyBase_const_*>
                ((TSet<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->EmptyInternalClustersPerProxy,uVar6 >> 0x10 ^ uVar6,
                 (IPhysicsProxyBase **)&local_res18);
    }
    FVar8 = local_res20;
    FVar7 = local_res10;
  }
  if ((FVar7.Bits & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FVar7.Bits & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FVar7.Bits & 4) != 0) {
    FThreadStats::AddMessage(FVar8,CycleScopeEnd);
  }
  return;
}

// ClearConnectionGraph @ 143c935f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::ClearConnectionGraph
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClearConnectionGraph> FVar12;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  undefined1 *puVar15;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar16;
  FNameEntryId FVar17;
  FName FVar18;
  longlong *plVar19;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar12 = StatPtr_STAT_ClearConnectionGraph;
  if (StatPtr_STAT_ClearConnectionGraph ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClearConnectionGraph>)0x0) {
    pFVar11 = ::FName::FName(&local_78,"STAT_ClearConnectionGraph");
    FVar12 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClearConnectionGraph>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClearConnectionGraph,*pFVar11,
                        L"TPBDRigidClustering<>::ClearConnectionGraph","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar14 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar17.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x896);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar17.Value;
      uStackX_c = uVar14;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_143c9374f;
    }
  }
  bVar7 = false;
  FVar18 = local_70;
LAB_143c9374f:
  uVar14 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
    puVar15 = *(undefined1 **)&(this->MChildren).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->MChildren).field_0x38;
    }
    iVar10 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(this->MChildren).field_0x48 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
    if (iVar10 != -1) {
      lVar3 = *(longlong *)&(this->MChildren).field_0x0;
      do {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)((longlong)iVar10 * 0x20 + lVar3)
            == param_1) {
          pTVar13 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->MChildren,param_1);
          if ((pTVar13 ==
               (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar19 = *(longlong **)&pTVar13->field_0x8;
          iVar10 = *(int *)&pTVar13->field_0x10;
          plVar2 = plVar19 + iVar10;
          while( true ) {
            if (*(int *)&pTVar13->field_0x10 != iVar10) {
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
            }
            if (plVar19 == plVar2) break;
            pTVar4 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar19;
            if (pTVar4 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              pTVar16 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)pTVar4->field_0xc) {
                pTVar16 = pTVar4;
              }
              RemoveNodeConnections(this,pTVar16);
            }
            plVar19 = plVar19 + 1;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar3);
      } while (iVar10 != -1);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ComputeStrainFromCollision @ 143c93a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::ComputeStrainFromCollision
          (FRigidClustering *this,FPBDCollisionConstraints *param_1,double param_2)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeStrainFromCollision> FVar13;
  TVector<double,3> *pTVar14;
  FName FVar15;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FName FVar16;
  FName FVar17;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  TGeometryParticleHandleImp<double,3,1> *pTVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  FName local_res18;
  float local_res20 [2];
  float local_148 [2];
  FName local_140;
  FName local_138;
  TVector<double,3> local_128;
  FRigidClustering *local_110;
  FName *local_108;
  float *local_100;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_f8;
  TGeometryParticleHandleImp<double,3,1> *local_e8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_e0;
  undefined1 local_d8 [40];
  double local_b0;
  
  FVar13 = StatPtr_STAT_ComputeStrainFromCollision;
  if (StatPtr_STAT_ComputeStrainFromCollision ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeStrainFromCollision>)0x0) {
    pFVar12 = ::FName::FName(&local_140,"STAT_ComputeStrainFromCollision");
    FVar13 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ComputeStrainFromCollision>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComputeStrainFromCollision,
                        *pFVar12,L"ComputeStrainFromCollision","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18 = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x8b4);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_143c93bf9;
    }
  }
  bVar9 = false;
  FVar16 = local_138;
LAB_143c93bf9:
  local_res20[0] = __real_3f800000;
  if (__real_3e45798ee0000000 < param_2) {
    local_res20[0] = (float)(__real_3ff0000000000000 / param_2);
  }
  ResetCollisionImpulseArray(this);
  FPBDCollisionConstraints::GetConstraintHandles(param_1,&local_f8);
  uVar11 = __xmm_80000000800000008000000080000000;
  FVar15 = (FName)((longlong)local_f8.DataPtr + (longlong)local_f8.ArrayNum * 8);
  FVar17 = (FName)local_f8.DataPtr;
  local_res18 = FVar15;
  if ((FName)local_f8.DataPtr != FVar15) {
    do {
      local_140 = *(FName *)FVar17;
      if ((local_140 != (FName)0x0) &&
         (FVar15 = local_res18, (((FFlags *)((longlong)local_140 + 0x374))->Bits >> 0xe & 1) == 0))
      {
        local_e8 = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)local_140 + 0xe0);
        pTStack_e0 = *(TGeometryParticleHandleImp<double,3,1> **)((longlong)local_140 + 0xe8);
        bVar1 = *(byte *)((longlong)&local_e8->_padding_ + 4);
        bVar2 = *(byte *)((longlong)&pTStack_e0->_padding_ + 4);
        pTVar18 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < bVar1) {
          pTVar18 = local_e8;
        }
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < bVar2) {
          pTVar19 = pTStack_e0;
        }
        if ((pTVar18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
          this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < bVar1) {
            this_00 = local_e8;
          }
          this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < bVar2) {
            this_01 = pTStack_e0;
          }
          if (bUseContactSpeedForStrainThreshold == false) {
            auVar20._0_8_ =
                 (double)*(float *)((longlong)local_140 + 0x128) *
                 (double)*(float *)((longlong)local_140 + 0x128);
            auVar20._8_8_ = 0;
            auVar21._8_8_ = 0;
            auVar21._0_8_ =
                 (double)*(float *)((longlong)local_140 + 0x124) *
                 (double)*(float *)((longlong)local_140 + 0x124) +
                 (double)*(float *)((longlong)local_140 + 0x120) *
                 (double)*(float *)((longlong)local_140 + 0x120) + auVar20._0_8_;
            auVar21 = sqrtpd(auVar20,auVar21);
            if ((double)MinImpulseForStrainEval <= auVar21._0_8_) goto LAB_143c93ea3;
          }
          else {
            if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              local_128._16_8_ = 0;
              local_128._0_8_ = 0;
              local_128._8_8_ = 0;
              pTVar14 = &local_128;
            }
            else {
              pTVar14 = TPBDRigidParticleHandleImp<double,3,1>::GetPreV
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,
                                   (TVector<double,3> *)local_d8);
            }
            local_b0 = *(double *)&pTVar14->field_0x10;
            dVar4 = *(double *)pTVar14;
            dVar5 = *(double *)&pTVar14->field_0x8;
            if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              local_128._16_8_ = 0;
              local_128._0_8_ = 0;
              local_128._8_8_ = 0;
              pTVar14 = &local_128;
            }
            else {
              pTVar14 = TPBDRigidParticleHandleImp<double,3,1>::GetPreV
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_01,
                                   (TVector<double,3> *)local_d8);
            }
            dVar6 = *(double *)pTVar14;
            dVar7 = *(double *)&pTVar14->field_0x8;
            local_d8._16_8_ = *(undefined8 *)&pTVar14->field_0x10;
            dVar3 = local_b0 - (double)local_d8._16_8_;
            pTVar14 = FPBDCollisionConstraint::CalculateWorldContactNormal
                                ((FPBDCollisionConstraint *)local_140,(TVector<double,3> *)local_d8)
            ;
            if (((dVar4 - dVar6) * *(double *)pTVar14 +
                 (dVar5 - dVar7) * *(double *)&pTVar14->field_0x8 +
                 dVar3 * *(double *)&pTVar14->field_0x10 <=
                 (double)(float)((uint)MinContactSpeedForStrainEval ^ uVar11)) ||
               (FVar15 = local_res18,
               *(float *)((longlong)local_140 + 0x124) * *(float *)((longlong)local_140 + 0x124) +
               *(float *)((longlong)local_140 + 0x120) * *(float *)((longlong)local_140 + 0x120) +
               *(float *)((longlong)local_140 + 0x128) * *(float *)((longlong)local_140 + 0x128) <=
               0.0)) {
LAB_143c93ea3:
              local_110 = this;
              local_108 = &local_140;
              local_100 = local_res20;
              local_148[0] = 0.0;
              local_148[1] = 0.0;
              if (pTVar18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                `Chaos::FRigidClustering::ComputeStrainFromCollision'::__l6::<lambda_1>::operator()
                          (&local_110,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar18,
                           local_148);
                this->MCollisionImpulseArrayDirty =
                     (bool)(this->MCollisionImpulseArrayDirty | 0.0 < local_148[0]);
              }
              FVar15 = local_res18;
              if (pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                `Chaos::FRigidClustering::ComputeStrainFromCollision'::__l6::<lambda_1>::operator()
                          (&local_110,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar19,
                           local_148 + 1);
                this->MCollisionImpulseArrayDirty =
                     (bool)(this->MCollisionImpulseArrayDirty | 0.0 < local_148[1]);
                FVar15 = local_res18;
              }
            }
          }
        }
      }
      FVar17 = (FName)((longlong)FVar17 + 8);
    } while (FVar17 != FVar15);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// CreateClusterParticle @ 143c94a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::FRigidClustering::CreateClusterParticle
          (FRigidClustering *this,int param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,FClusterCreationParameters *param_3,TRefCountPtr<Chaos::FImplicitObject> *param_4
          ,TRigidTransform<double,3> *param_5,FUniqueIdx *param_6)

{
  TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  uint *puVar2;
  undefined8 *puVar3;
  float fVar4;
  FName FVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  FClusterCreationParameters *pFVar13;
  TRigidTransform<double,3> *pTVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<Chaos::FStat_STAT_CreateClusterParticle> FVar21;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar22;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar23;
  FRigidClusteredFlags_u_0 *pFVar24;
  ClusterId *pCVar25;
  int *piVar26;
  float *pfVar27;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar28;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> *pTVar29;
  ulonglong uVar30;
  ulong64 uVar31;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar32;
  float *pfVar33;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar34;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar35;
  uint uVar36;
  int iVar37;
  ForAnyElementType FVar38;
  ForElementType<unsigned_int> FVar39;
  ulonglong uVar40;
  EConnectionMethod EVar41;
  ForElementType<FSetElementId> FVar42;
  undefined1 *puVar43;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar44;
  ulonglong *puVar45;
  longlong lVar46;
  uint uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  byte bVar51;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar55;
  int iVar56;
  ForElementType<unsigned_int> FVar57;
  FRigidClustering *pFVar58;
  byte bVar59;
  FScriptContainerElement *pFVar60;
  float fVar61;
  undefined1 auStackY_3e8 [32];
  TGeometryParticleHandleImp<double,3,1> *local_380;
  undefined1 local_378;
  undefined1 local_377;
  byte local_376;
  byte local_375;
  FPBDRigidParticleParameters local_374;
  FName local_370;
  int local_368;
  int local_364;
  FRigidClustering *local_360;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_358;
  TBitArray<FDefaultBitArrayAllocator> *local_350;
  FColor_u_0 local_348 [2];
  uint local_340;
  uint uStack_33c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_338;
  undefined4 local_330;
  uint uStack_32c;
  uint uStack_328;
  undefined4 uStack_324;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_320;
  FName local_310;
  FName local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  undefined8 local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_2c8;
  TRefCountPtr<Chaos::FImplicitObject> *local_2c0;
  FClusterCreationParameters *local_2b8;
  TRigidTransform<double,3> *local_2b0;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a0;
  longlong *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  TPBDRigidParticleHandleImp<double,3,1> *local_250;
  int iStack_248;
  undefined4 uStack_244;
  FSparseArrayAllocationInfo local_240;
  undefined1 local_230 [40];
  int local_208;
  undefined4 uStack_204;
  FName local_200 [2];
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  local_1f0;
  longlong local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  FClusterCreationParameters local_198;
  TRotation<double,3> local_148;
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_128;
  TRigidTransform<double,3> local_118;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_2b0 = param_5;
  local_2c0 = param_4;
  FVar21 = StatPtr_STAT_CreateClusterParticle;
  local_368 = param_1;
  local_360 = this;
  local_2b8 = param_3;
  if (StatPtr_STAT_CreateClusterParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateClusterParticle>)0x0) {
    pFVar20 = ::FName::FName(local_200,"STAT_CreateClusterParticle");
    FVar21 = (FThreadSafeStaticStat<Chaos::FStat_STAT_CreateClusterParticle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateClusterParticle,*pFVar20,
                        L"TPBDRigidClustering<>::CreateClusterParticle","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_308.ComparisonIndex.Value = 0;
  local_308.Number = 0;
  FVar5 = *(FName *)FVar21;
  bVar16 = false;
  bVar17 = false;
  if ((FVar5.ComparisonIndex.Value.Value == 0) && (FVar5.Number == 0)) {
LAB_143c94bfc:
    bVar11 = bVar17;
    bVar10 = bVar16;
    bVar16 = false;
    local_370 = local_308;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_348[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_348[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_310.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_310.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_310,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0xdb);
        bVar10 = true;
        bVar11 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c94bfc;
    local_370 = FVar5;
    FThreadStats::AddMessage(FVar5,CycleScopeStart);
    bVar16 = true;
  }
  local_380 = (TGeometryParticleHandleImp<double,3,1> *)param_3->ClusterParticleHandle;
  if (local_380 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_374._padding_ = '\0';
    local_374.bStartSleeping = false;
    local_374.bGravityEnabled = true;
    local_374.bCCDEnabled = false;
    pTVar22 = FPBDRigidsEvolutionBase::CreateClusteredParticles
                        ((FPBDRigidsEvolutionBase *)this->MEvolution,&local_1f0,1,param_6,&local_374
                        );
    if ((pTVar22->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar23;
    }
    local_380 = *(TGeometryParticleHandleImp<double,3,1> **)(pTVar22->AllocatorInstance).Data;
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)this->MEvolution,local_380);
  TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup
            ((TPBDRigidParticleHandleImp<double,3,1> *)local_380,0x7fffffff);
  local_358 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->TopLevelClusterParents;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
            ((TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_358,(TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_2d8,
             (bool *)&local_380);
  pFVar24 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                       ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                        (int)local_380->_padding_)->field0_0x0;
  uVar40 = 0;
  local_250 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  pFVar24->Bits = pFVar24->Bits & 0xfe;
  iStack_248 = param_2->ArrayNum;
  pCVar25 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                       (int)local_380->_padding_);
  pCVar25->Id = local_250;
  *(ulonglong *)&pCVar25->NumChildren = CONCAT44(uStack_244,iStack_248);
  piVar26 = TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
                      ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                       (int)local_380->_padding_);
  *piVar26 = local_368;
  pfVar27 = TPBDRigidClusteredParticles<double,3>::Strains
                      ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                       (int)local_380->_padding_);
  *pfVar27 = 0.0;
  UpdateTopLevelParticle(this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380);
  bVar17 = param_3->bIsAnchored;
  pFVar24 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                       ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                        (int)local_380->_padding_)->field0_0x0;
  pFVar24->Bits = pFVar24->Bits ^ (bVar17 * '\x02' ^ pFVar24->Bits) & 2;
  pTVar1 = &this->MChildren;
  uVar36 = ((uint)((ulonglong)local_380 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_380 >> 4)) *
           -0x7a143595;
  uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
  if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
    puVar43 = *(undefined1 **)&(this->MChildren).field_0x40;
    if (puVar43 == (undefined1 *)0x0) {
      puVar43 = &(this->MChildren).field_0x38;
    }
    iVar37 = *(int *)(puVar43 +
                     (ulonglong)
                     (*(int *)&(this->MChildren).field_0x48 - 1U & (uVar36 >> 0x10 ^ uVar36)) * 4);
    if (iVar37 != -1) {
      do {
        if (*(TGeometryParticleHandleImp<double,3,1> **)
             ((longlong)iVar37 * 0x20 + *(longlong *)pTVar1) == local_380) {
          if (iVar37 != -1) {
            pTVar28 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                                     *)pTVar1,
                                    (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380);
            TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
            operator=(pTVar28,param_2);
            goto LAB_143c94e00;
          }
          break;
        }
        iVar37 = *(int *)((longlong)iVar37 * 0x20 + 0x18 + *(longlong *)pTVar1);
      } while (iVar37 != -1);
    }
  }
  TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  ::
  Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
            ((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
              *)pTVar1,(TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_380,param_2);
LAB_143c94e00:
  pTVar28 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                           *)pTVar1,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380);
  pTVar29 = TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int>::
            TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int><TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                      (&local_128,pTVar28);
  ppTVar55 = pTVar29->DataPtr;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  uVar36 = (uint)*(undefined8 *)&pTVar29->ArrayNum;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (uVar36 == 0) goto LAB_143c9512c;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar36);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_b8,uVar36);
  uVar47 = 1;
  if (3 < uVar36) {
    uVar48 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
    lVar46 = 0x3f;
    if (uVar48 != 0) {
      for (; uVar48 >> lVar46 == 0; lVar46 = lVar46 + -1) {
      }
    }
    local_2d8._4_4_ = (undefined4)lVar46;
    uVar47 = 1 << ((byte)lVar46 & 0x1f);
  }
  if ((local_70 == 0) || ((int)local_70 < (int)uVar47)) {
    local_70 = uVar47;
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
    }
    if (uVar47 != 0) {
      uVar19 = uVar47;
      if (uVar47 < 2) {
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          uVar19 = 0;
          goto LAB_143c94f36;
        }
      }
      else {
LAB_143c94f36:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar19,4);
      }
      if (0 < (int)uVar47) {
        uVar49 = (ulonglong)uVar47;
        uVar48 = uVar40;
        do {
          FVar38.Data = local_80;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FVar38.Data = local_78.Data;
          }
          uVar30 = (longlong)(int)uVar47 - 1U & uVar48;
          uVar48 = uVar48 + 1;
          *(undefined4 *)(FVar38.Data + uVar30 * 4) = 0xffffffff;
          uVar49 = uVar49 - 1;
        } while (uVar49 != 0);
      }
    }
    if (local_70 != 0) {
      pTStack_338 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
      local_340 = 0;
      uStack_33c = 1;
      uStack_32c = 0;
      uStack_328 = 0;
      if (local_90 != 0) {
        FVar39 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
        if (local_98 != (ForElementType<unsigned_int>)0x0) {
          FVar39 = local_98;
        }
        uVar47 = *(uint *)FVar39;
        uVar48 = uVar40;
        while (uVar47 == 0) {
          uStack_328 = (int)uVar48 + 0x20;
          uVar48 = (ulonglong)uStack_328;
          iVar37 = (int)uVar40;
          local_340 = iVar37 + 1;
          uVar40 = (ulonglong)local_340;
          if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_340)
          goto LAB_143c9504d;
          uVar47 = ((uint *)((longlong)FVar39 + 4))[iVar37];
        }
        uStack_33c = -uVar47 & uVar47;
        uVar40 = (ulonglong)uStack_33c * 2 + 1;
        lVar46 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar46 == 0; lVar46 = lVar46 + -1) {
          }
        }
        local_2d0 = (int)lVar46;
        uStack_32c = local_2d0 + -1 + uStack_328;
        uVar40 = (ulonglong)uStack_32c;
        if ((int)local_90 < (int)uStack_32c) {
LAB_143c9504d:
          uVar40 = (ulonglong)local_90;
          uStack_32c = local_90;
        }
      }
      local_330 = 0xffffffff;
      local_2a8 = (longlong *)local_b8;
      local_2a0._padding_ = CONCAT44(uStack_33c,local_340);
      local_2a0.CurrentBitIndex = uStack_32c;
      local_2a0.UnvisitedBitMask = 0xffffffff;
      local_2a0._28_4_ = uStack_324;
      local_2a0.BaseBitIndex = uStack_328;
      local_2a0.Array = pTStack_338;
      if ((int)uVar40 < (int)local_90) {
        do {
          lVar46 = *local_2a8;
          lVar50 = (longlong)(int)uVar40;
          uVar48 = *(ulonglong *)(lVar46 + lVar50 * 0x10);
          uVar47 = ((uint)(uVar48 >> 0x14) & 0xffff ^ (uint)(uVar48 >> 4)) * -0x7a143595;
          uVar47 = (uVar47 >> 0xd ^ uVar47) * -0x3d4d51cb;
          uVar47 = (uVar47 >> 0x10 ^ uVar47) & local_70 - 1;
          *(uint *)(lVar46 + 0xc + lVar50 * 0x10) = uVar47;
          FVar38.Data = local_80;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FVar38.Data = local_78.Data;
          }
          uVar48 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar47;
          *(undefined4 *)(lVar46 + 8 + lVar50 * 0x10) = *(undefined4 *)(FVar38.Data + uVar48 * 4);
          *(int *)(FVar38.Data + uVar48 * 4) = (int)uVar40;
          local_2a0.UnvisitedBitMask = local_2a0.UnvisitedBitMask & ~local_2a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a0);
          uVar40 = (ulonglong)(uint)local_2a0.CurrentBitIndex;
        } while (local_2a0.CurrentBitIndex < (local_2a0.Array)->NumBits);
      }
    }
  }
  uVar40 = (ulonglong)local_84;
LAB_143c9512c:
  local_350 = (TBitArray<FDefaultBitArrayAllocator> *)(ppTVar55 + (int)uVar36);
  if ((TBitArray<FDefaultBitArrayAllocator> *)ppTVar55 != local_350) {
    do {
      if ((int)uVar40 == 0) {
        iVar37 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)local_b8,(int *)(local_b8 + 8),
                            (int *)(local_b8 + 0xc));
        uVar36 = local_90;
        if (local_90 == 0) {
          iVar56 = 0;
LAB_143c951e9:
          if (local_8c < (int)(local_90 + 1)) {
            uVar47 = local_8c + 0x1fU >> 5;
            uVar19 = local_90 + 0x20 >> 5;
            if (uVar19 < 5) {
              local_8c = 4;
            }
            else {
              uVar40 = (ulonglong)uVar19;
              if (uVar47 < 5) {
                uVar47 = 0;
              }
              if (uVar47 == 0) {
                uVar48 = 4;
                if (4 < uVar40) {
                  uVar48 = uVar40;
                }
              }
              else {
                uVar48 = ((ulonglong)uVar19 * 3 >> 3) + 0x10 + uVar40;
              }
              uVar31 = FMemory::QuantizeSize(uVar48 * 4,0);
              local_8c = (int)(uVar31 >> 2);
              if (local_8c < (int)uVar19) {
                local_8c = 0x7fffffff;
              }
            }
            local_8c = local_8c << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),local_90);
          }
          local_90 = local_90 + 1;
          uVar19 = (int)local_90 >> 0x1f & 0x1f;
          uVar47 = local_90 + uVar19;
          iVar18 = (uVar47 & 0x1f) - uVar19;
          if (iVar18 != 0) {
            FVar39 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
            if (local_98 != (ForElementType<unsigned_int>)0x0) {
              FVar39 = local_98;
            }
            puVar2 = (uint *)((longlong)FVar39 + (longlong)((int)uVar47 >> 5) * 4);
            *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar18 & 0x1f);
          }
        }
        else {
          iVar56 = (int)(local_90 + ((int)local_90 >> 0x1f & 0x1fU)) >> 5;
          if (iVar56 != (int)(((int)(local_90 - 1) >> 0x1f & 0x1fU) + (local_90 - 1)) >> 5)
          goto LAB_143c951e9;
          local_90 = local_90 + 1;
        }
        FVar39 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
        if (local_98 != (ForElementType<unsigned_int>)0x0) {
          FVar39 = local_98;
        }
        puVar2 = (uint *)((longlong)FVar39 + (longlong)iVar56 * 4);
        *puVar2 = *puVar2 & ~(1 << ((byte)uVar36 & 0x1f));
        iVar56 = local_88;
      }
      else {
        local_84 = (int)uVar40 - 1;
        iVar56 = *(int *)(local_b8._0_8_ + (longlong)local_88 * 0x10 + 4);
        iVar37 = local_88;
        if (local_84 != 0) {
          *(undefined4 *)(local_b8._0_8_ + (longlong)iVar56 * 0x10) = 0xffffffff;
        }
      }
      local_88 = iVar56;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,&local_240,iVar37);
      puVar45 = (ulonglong *)0x0;
      if (local_240.Pointer != (ulonglong *)0x0) {
        *(TPBDRigidParticleHandleImp<double,3,1> **)local_240.Pointer = *ppTVar55;
        *(undefined4 *)((longlong)local_240.Pointer + 8) = 0xffffffff;
        puVar45 = local_240.Pointer;
      }
      uVar40 = *puVar45;
      uVar36 = ((uint)(uVar40 >> 0x14) & 0xffff ^ (uint)(uVar40 >> 4)) * -0x7a143595;
      uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
      uVar36 = uVar36 >> 0x10 ^ uVar36;
      if ((local_b8._8_4_ - local_84 != 1) && (local_b8._8_4_ != local_84)) {
        FVar38.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar38.Data = local_78.Data;
        }
        for (iVar37 = *(int *)(FVar38.Data + (ulonglong)(local_70 - 1 & uVar36) * 4); iVar37 != -1;
            iVar37 = *(int *)(local_b8._0_8_ + (longlong)iVar37 * 0x10 + 8)) {
          if (*(ulonglong *)(local_b8._0_8_ + (longlong)iVar37 * 0x10) == uVar40) {
            if (iVar37 != -1) {
              *(ulonglong *)(local_b8._0_8_ + (longlong)iVar37 * 0x10) = uVar40;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_b8,local_240.Index,1);
              goto LAB_143c954f4;
            }
            break;
          }
        }
      }
      uVar47 = local_b8._8_4_ - local_84;
      if (uVar47 < 4) {
        uVar19 = 1;
      }
      else {
        uVar40 = (ulonglong)((uVar47 >> 1) + 7) * 2 + 1;
        lVar46 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar46 == 0; lVar46 = lVar46 + -1) {
          }
        }
        local_2cc = (undefined4)lVar46;
        uVar19 = 1 << ((byte)lVar46 & 0x1f);
      }
      if (((int)uVar47 < 1) || ((int)uVar19 <= (int)local_70)) {
        uVar36 = local_70 - 1 & uVar36;
        *(uint *)((longlong)puVar45 + 0xc) = uVar36;
        FVar38.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar38.Data = local_78.Data;
        }
        uVar40 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar36;
        *(undefined4 *)(puVar45 + 1) = *(undefined4 *)(FVar38.Data + uVar40 * 4);
        *(int *)(FVar38.Data + uVar40 * 4) = local_240.Index;
      }
      else {
        local_70 = uVar19;
        TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  *)local_b8);
      }
LAB_143c954f4:
      uVar40 = (ulonglong)local_84;
      ppTVar55 = ppTVar55 + 1;
      this = local_360;
    } while ((TBitArray<FDefaultBitArrayAllocator> *)ppTVar55 != local_350);
  }
  FPBDRigidsEvolutionBase::DisableParticles
            ((FPBDRigidsEvolutionBase *)this->MEvolution,
             (TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_b8);
  local_2f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  bVar59 = false;
  local_2f8._padding_._0_4_ = 0;
  uVar53 = true;
  local_2f8._padding_._4_4_ = 1;
  local_2f8.UnvisitedBitMask = 0xffffffff;
  local_2f8.CurrentBitIndex = 0;
  local_2f8.BaseBitIndex = 0;
  if (local_90 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
  }
  TStack_278._padding_ = CONCAT44(local_2f8._padding_._4_4_,(undefined4)local_2f8._padding_);
  local_280 = (longlong *)local_b8;
  TStack_278.CurrentBitIndex = local_2f8.CurrentBitIndex;
  TStack_278.UnvisitedBitMask = local_2f8.UnvisitedBitMask;
  TStack_278._28_4_ = local_2f8._28_4_;
  TStack_278.BaseBitIndex = local_2f8.BaseBitIndex;
  local_208 = local_b8._8_4_ - local_84;
  local_230._16_8_ = local_2f8.Array;
  uStack_258 = CONCAT44(uStack_204,local_208);
  TStack_278.Array = local_2f8.Array;
  local_230._0_8_ = local_280;
  local_230._8_8_ = TStack_278._padding_;
  local_230._24_8_ = TStack_278._16_8_;
  local_230._32_8_ = TStack_278._24_8_;
  pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_230,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),local_90);
  local_1d8 = pTVar32->_padding_;
  local_350 = pTVar32->Array;
  local_1c8._0_4_ = pTVar32->UnvisitedBitMask;
  local_1c8._4_4_ = pTVar32->CurrentBitIndex;
  uStack_1c0 = *(undefined8 *)&pTVar32->BaseBitIndex;
  local_364 = local_1c8._4_4_;
  pTVar44 = local_358;
  pTStack_1d0 = local_350;
  bVar51 = true;
  while( true ) {
    plVar15 = local_280;
    iVar37 = local_364;
    if ((int)local_280[1] - *(int *)((longlong)local_280 + 0x34) != (int)uStack_258) {
      local_378 = 0;
      `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_378);
    }
    FVar5 = local_370;
    if (((TStack_278.CurrentBitIndex == iVar37) && (TStack_278.Array == local_350)) &&
       (plVar15 == (longlong *)local_b8)) break;
    pTVar23 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               (*plVar15 + (longlong)TStack_278.CurrentBitIndex * 0x10);
    uVar36 = *(uint *)&pTVar23->field_0x8;
    lVar46 = *(longlong *)pTVar23;
    uVar47 = 0;
    if ((int)uVar36 < *(int *)(lVar46 + 0x2e0)) {
      uVar47 = ~uVar36 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar23;
    }
    lVar50 = *(longlong *)pTVar23;
    uVar47 = *(uint *)&pTVar23->field_0x8;
    uVar54 = 0;
    if (*(char *)(*(longlong *)(lVar46 + 0x2d8) + 0xb + (longlong)(int)uVar36 * 0x10) == '\x01') {
      uVar54 = uVar53;
    }
    uVar36 = 0;
    if ((int)uVar47 < *(int *)(lVar50 + 0x2e0)) {
      uVar36 = ~uVar47 >> 0x1f;
    }
    local_377 = uVar54;
    if ((uVar36 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar23;
    }
    uVar36 = *(uint *)&pTVar23->field_0x8;
    lVar46 = *(longlong *)pTVar23;
    local_375 = bVar51 & (byte)(*(ushort *)
                                 (*(longlong *)(lVar50 + 0x2d8) + 8 + (longlong)(int)uVar47 * 0x10)
                               >> 2);
    uVar47 = 0;
    if ((int)uVar36 < *(int *)(lVar46 + 0x2e0)) {
      uVar47 = ~uVar36 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar23;
    }
    local_376 = bVar59 | (byte)((ushort)*(undefined2 *)
                                         (*(longlong *)(lVar46 + 0x2d8) + 8 +
                                         (longlong)(int)uVar36 * 0x10) >> 9) & 1;
    pTVar52 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pTVar23->field_0xc) {
      pTVar52 = pTVar23;
    }
    uVar53 = uVar54;
    if (pTVar52 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      if (*(int *)&(local_360->TopLevelClusterParents).Elements.field_0x8 != pTVar44->NumFreeIndices
         ) {
        uVar36 = ((uint)((ulonglong)pTVar52 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar52 >> 4)) *
                 -0x7a143595;
        uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
        FVar6 = *(ForElementType<FSetElementId> *)&pTVar44[1].Data.ArrayNum;
        FVar42 = (ForElementType<FSetElementId>)(pTVar44 + 1);
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar42 = FVar6;
        }
        uVar36 = *(uint *)((longlong)FVar42 +
                          ((longlong)(local_360->TopLevelClusterParents).HashSize - 1U &
                          (longlong)(int)(uVar36 >> 0x10 ^ uVar36)) * 4);
        if (uVar36 != 0xffffffff) {
LAB_143c95840:
          lVar46 = (longlong)(int)uVar36;
          if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               (*(longlong *)&pTVar44->Data + lVar46 * 0x10) != pTVar52) goto code_r0x000143c9584c;
          if (((int)uVar36 < 0) || ((pTVar44->AllocationFlags).NumBits <= (int)uVar36)) {
LAB_143c958b9:
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar17) {
              pcVar7 = (code *)swi(3);
              pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
              return pTVar23;
            }
          }
          else {
            if (((pTVar44->AllocationFlags).NumBits <= (int)uVar36) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar17)) {
              pcVar7 = (code *)swi(3);
              pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
              return pTVar23;
            }
            FVar39 = (pTVar44->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar57 = (ForElementType<unsigned_int>)&pTVar44->AllocationFlags;
            if (FVar39 != (ForElementType<unsigned_int>)0x0) {
              FVar57 = FVar39;
            }
            uVar47 = uVar36;
            if ((int)uVar36 < 0) {
              uVar47 = uVar36 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar57 + (longlong)((int)uVar47 >> 5) * 4) >> (uVar36 & 0x1f) &
                1) == 0) goto LAB_143c958b9;
          }
          FVar6 = *(ForElementType<FSetElementId> *)&pTVar44[1].Data.ArrayNum;
          FVar42 = (ForElementType<FSetElementId>)(pTVar44 + 1);
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar42 = FVar6;
          }
          lVar50 = *(longlong *)&local_358->Data;
          pFVar60 = (FScriptContainerElement *)
                    ((longlong)FVar42 + (longlong)*(int *)(lVar50 + 0xc + lVar46 * 0x10) * 4);
          pTVar44 = local_358;
          while( true ) {
            uVar47 = *(uint *)pFVar60;
            if ((uVar47 == 0xffffffff) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextElementIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                    ,0x2b5,L"Corrupt hash"), pTVar44 = local_358, bVar17)) {
              pcVar7 = (code *)swi(3);
              pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
              return pTVar23;
            }
            if (uVar47 == uVar36) break;
            pFVar60 = (pTVar44->Data).AllocatorInstance.Data + (longlong)(int)uVar47 * 0x10 + 8;
          }
          *(uint *)pFVar60 = *(uint *)(lVar50 + 8 + lVar46 * 0x10);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(pTVar44,uVar36,1);
          pTVar44 = local_358;
          uVar54 = local_377;
        }
      }
LAB_143c95973:
      pFVar58 = local_360;
      local_2c8 = pTVar52;
      if (*(int *)&(local_360->TopLevelClusterParentsStrained).field_0x8 !=
          *(int *)&(local_360->TopLevelClusterParentsStrained).field_0x34) {
        uVar36 = ((uint)((ulonglong)pTVar52 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar52 >> 4)) *
                 -0x7a143595;
        uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                  ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                    *)&local_360->TopLevelClusterParentsStrained,uVar36 >> 0x10 ^ uVar36,&local_2c8)
        ;
      }
      piVar26 = TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar52,
                           *(int *)&pTVar52->field_0x8);
      pTVar12 = local_380;
      *piVar26 = 0;
      pCVar25 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar52,
                           *(int *)&pTVar52->field_0x8);
      pCVar25->Id = (TPBDRigidParticleHandleImp<double,3,1> *)pTVar12;
      pfVar27 = TPBDRigidClusteredParticles<double,3>::Strains
                          ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                           (int)local_380->_padding_);
      pfVar33 = TPBDRigidClusteredParticles<double,3>::Strains
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar52,
                           *(int *)&pTVar52->field_0x8);
      fVar61 = *pfVar27;
      fVar4 = *pfVar33;
      pfVar27 = TPBDRigidClusteredParticles<double,3>::Strains
                          ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                           (int)local_380->_padding_);
      *pfVar27 = fVar61 + fVar4;
      UpdateTopLevelParticle(pFVar58,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380);
      pfVar27 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar52,
                           *(int *)&pTVar52->field_0x8);
      fVar61 = *pfVar27;
      pfVar27 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                           (int)local_380->_padding_);
      if (fVar61 <= *pfVar27) {
        fVar61 = *pfVar27;
      }
      pfVar27 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                           (int)local_380->_padding_);
      *pfVar27 = fVar61;
      uVar36 = (uint)local_380->_padding_;
      lVar46 = local_380->_padding_;
      uVar47 = 0;
      if ((int)uVar36 < *(int *)(lVar46 + 0x2e0)) {
        uVar47 = ~uVar36 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar23;
      }
      uVar47 = *(uint *)&pTVar52->field_0x8;
      lVar50 = *(longlong *)pTVar52;
      iVar37 = *(int *)(*(longlong *)(lVar46 + 0x2d8) + (longlong)(int)uVar36 * 0x10);
      uVar36 = 0;
      if ((int)uVar47 < *(int *)(lVar50 + 0x2e0)) {
        uVar36 = ~uVar47 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar23;
      }
      iVar56 = *(int *)(*(longlong *)(lVar50 + 0x2d8) + (longlong)(int)uVar47 * 0x10);
      uVar36 = (uint)local_380->_padding_;
      lVar46 = local_380->_padding_;
      uVar47 = 0;
      if ((int)uVar36 < *(int *)(lVar46 + 0x2e0)) {
        uVar47 = ~uVar36 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar23;
      }
      if (iVar37 < iVar56) {
        iVar56 = iVar37;
      }
      *(int *)(*(longlong *)(lVar46 + 0x2d8) + (longlong)(int)uVar36 * 0x10) = iVar56;
      uVar53 = uVar54;
    }
    bVar59 = local_376;
    TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
    bVar51 = local_375;
  }
  pFVar58 = local_360;
  if (local_b8._8_4_ != local_84) {
    pfVar27 = TPBDRigidClusteredParticles<double,3>::Strains
                        ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                         (int)local_380->_padding_);
    iVar37 = local_b8._8_4_ - local_84;
    fVar61 = *pfVar27;
    pfVar27 = TPBDRigidClusteredParticles<double,3>::Strains
                        ((TPBDRigidClusteredParticles<double,3> *)local_380->_padding_,
                         (int)local_380->_padding_);
    pFVar58 = local_360;
    *pfVar27 = fVar61 / (float)iVar37;
    UpdateTopLevelParticle(local_360,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380);
    TPBDRigidParticles<double,3>::SetSleeping
              ((TPBDRigidParticles<double,3> *)local_380->_padding_,(int)local_380->_padding_,
               (bool)uVar53);
    TPBDRigidParticleHandleImp<double,3,1>::SetOneWayInteraction
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_380,(bool)bVar51);
    TPBDRigidParticleHandleImp<double,3,1>::SetMACDEnabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_380,(bool)bVar59);
  }
  pTVar14 = local_2b0;
  if (local_2b0 != (TRigidTransform<double,3> *)0x0) {
    pTStack_1d0 = *(TBitArray<FDefaultBitArrayAllocator> **)&local_2b0->field_0x30;
    uVar8 = *(undefined8 *)&local_2b0->field_0x20;
    uVar9 = *(undefined8 *)&local_2b0->field_0x28;
    uVar36 = (uint)local_380->_padding_;
    lVar46 = local_380->_padding_;
    uVar47 = 0;
    if ((int)uVar36 < *(int *)(lVar46 + 0x30)) {
      uVar47 = ~uVar36 >> 0x1f;
    }
    local_1b0 = uVar8;
    uStack_1a8 = uVar9;
    local_1a0 = pTStack_1d0;
    if ((uVar47 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar23;
    }
    lVar46 = *(longlong *)(lVar46 + 0x28);
    puVar3 = (undefined8 *)(lVar46 + (longlong)(int)uVar36 * 0x18);
    *puVar3 = uVar8;
    puVar3[1] = uVar9;
    *(TBitArray<FDefaultBitArrayAllocator> **)(lVar46 + 0x10 + (longlong)(int)uVar36 * 0x18) =
         pTStack_1d0;
    local_148._0_8_ = *(undefined8 *)pTVar14;
    local_148._8_8_ = *(undefined8 *)&pTVar14->field_0x8;
    local_148._16_8_ = *(undefined8 *)&pTVar14->field_0x10;
    local_148._24_8_ = *(undefined8 *)&pTVar14->field_0x18;
    TGeometryParticleHandleImp<double,3,1>::SetR(local_380,&local_148,false);
  }
  UpdateClusterMassProperties
            ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_b8);
  if (pTVar14 == (TRigidTransform<double,3> *)0x0) {
    MoveClusterToMassOffset
              (&local_118,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380,Position);
  }
  pTVar1 = &pFVar58->MChildren;
  UpdateKinematicProperties
            ((TPBDRigidParticleHandleImp<double,3,1> *)local_380,pTVar1,pFVar58->MEvolution);
  pFVar13 = local_2b8;
  UpdateGeometry((TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_380,
                 (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  *)local_b8,pTVar1,local_2c0,local_2b8);
  pTVar12 = local_380;
  uVar36 = ((uint)((ulonglong)local_380 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_380 >> 4)) *
           -0x7a143595;
  uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
  if (*(int *)&(pFVar58->MChildren).field_0x8 != *(int *)&(pFVar58->MChildren).field_0x34) {
    puVar43 = *(undefined1 **)&(pFVar58->MChildren).field_0x40;
    if (puVar43 == (undefined1 *)0x0) {
      puVar43 = &(pFVar58->MChildren).field_0x38;
    }
    iVar37 = *(int *)(puVar43 +
                     (ulonglong)
                     (*(int *)&(pFVar58->MChildren).field_0x48 - 1U & (uVar36 >> 0x10 ^ uVar36)) * 4
                     );
    if (iVar37 != -1) {
      do {
        if (*(TGeometryParticleHandleImp<double,3,1> **)
             ((longlong)iVar37 * 0x20 + *(longlong *)&pTVar1->field_0x0) == local_380) {
          local_198.CoillisionThicknessPercent = pFVar13->CoillisionThicknessPercent;
          local_198.MaxNumConnections = pFVar13->MaxNumConnections;
          local_198.bCleanCollisionParticles = pFVar13->bCleanCollisionParticles;
          local_198.bCopyCollisionParticles = pFVar13->bCopyCollisionParticles;
          local_198.bGenerateConnectionGraph = pFVar13->bGenerateConnectionGraph;
          local_198._15_1_ = pFVar13->field_0xf;
          local_198.ConnectionMethod = pFVar13->ConnectionMethod;
          local_198._20_4_ = *(undefined4 *)&pFVar13->field_0x14;
          local_198.ConnectionGraphBoundsFilteringMargin =
               pFVar13->ConnectionGraphBoundsFilteringMargin;
          local_198.CollisionParticles = pFVar13->CollisionParticles;
          local_198.ClusterParticleHandle = pFVar13->ClusterParticleHandle;
          local_198.Scale._0_8_ = *(undefined8 *)&pFVar13->Scale;
          local_198.Scale._8_8_ = *(undefined8 *)&(pFVar13->Scale).field_0x8;
          local_198.Scale._16_8_ = *(undefined8 *)&(pFVar13->Scale).field_0x10;
          local_198.bIsAnchored = pFVar13->bIsAnchored;
          local_198.bEnableStrainOnCollision = pFVar13->bEnableStrainOnCollision;
          local_198._74_6_ = *(undefined6 *)&pFVar13->field_0x4a;
          if (pFVar13->ConnectionMethod == PointImplicit) {
            pTVar34 = TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
                                ((TPBDRigidParticleHandleImp<double,3,1> *)local_380);
            EVar41 = local_198.ConnectionMethod;
            if (pTVar34->Ptr == (FBVHParticles *)0x0) {
              EVar41 = MinimalSpanningSubsetDelaunayTriangulation;
            }
            local_198.ConnectionMethod = EVar41;
          }
          pTVar35 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)pTVar1,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar12);
          if ((pTVar35 ==
               (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            pTVar23 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
            return pTVar23;
          }
          GenerateConnectionGraph
                    (pFVar58,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                              *)&pTVar35->field_0x8,&local_198,
                     (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                             *)0x0);
          break;
        }
        iVar37 = *(int *)((longlong)iVar37 * 0x20 + 0x18 + *(longlong *)&pTVar1->field_0x0);
      } while (iVar37 != -1);
    }
  }
  iVar37 = local_368;
  pTVar12 = local_380;
  if (0 < local_368) {
    local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_320.AllocatorInstance,1,&local_320.ArrayMax);
    *(TGeometryParticleHandleImp<double,3,1> **)local_320.AllocatorInstance.Data = pTVar12;
    FClusterUnionManager::AddPendingExplicitIndexOperation
              (&pFVar58->ClusterUnionManager,iVar37,AddReleased,&local_320);
    if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.AllocatorInstance.Data);
    }
  }
  pTVar12 = local_380;
  local_70 = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar5,CycleScopeEnd);
  }
  return (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar12;
code_r0x000143c9584c:
  uVar36 = *(uint *)(*(longlong *)&pTVar44->Data + 8 + lVar46 * 0x10);
  if (uVar36 == 0xffffffff) goto LAB_143c95973;
  goto LAB_143c95840;
}

// CreateClusterParticleFromClusterChildren @ 143c95fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::FRigidClustering::CreateClusterParticleFromClusterChildren
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2,
          TRigidTransform<double,3> *param_3,FClusterCreationParameters *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  code *pcVar7;
  undefined8 uVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  FRigidClustering *this_01;
  bool bVar12;
  bool bVar13;
  FRigidParticleControlFlags FVar14;
  int iVar15;
  int iVar16;
  TStatId TVar17;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar18;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar19;
  FRigidClusteredFlags_u_0 *pFVar20;
  ClusterId *pCVar21;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar22;
  TTransform<double> *pTVar23;
  int *piVar24;
  float *pfVar25;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  ulonglong uVar26;
  ulong64 uVar27;
  uint uVar28;
  TFunction<void___cdecl(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*)>
  *this_02;
  ulonglong uVar29;
  ForElementType<unsigned_int> FVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  ulonglong *puVar37;
  ulonglong *puVar38;
  longlong lVar39;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *this_03;
  ulonglong *puVar40;
  float fVar41;
  undefined1 auStackY_428 [32];
  bool local_3e8;
  TGeometryParticleHandleImp<double,3,1> *local_3e0;
  bool local_3d8;
  undefined1 local_3d7;
  undefined1 local_3d6;
  FPBDRigidParticleParameters local_3d5;
  TIterationSettings<signed_char> local_3d1;
  undefined1 local_3cc [4];
  FCycleCounter local_3c8 [2];
  uint local_3ac;
  FRigidClustering *local_3a8;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_3a0;
  uint local_390;
  uint uStack_38c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_388;
  undefined4 local_380;
  uint uStack_37c;
  uint uStack_378;
  undefined4 uStack_374;
  uint local_370;
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_368;
  undefined4 local_360;
  uint uStack_35c;
  uint uStack_358;
  undefined4 uStack_354;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_350;
  TRefCountPtr<Chaos::FImplicitObject> local_348 [2];
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  TGeometryParticleHandleImp<double,3,1> *local_328;
  TTransform<double> *local_320;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_318;
  FScriptContainerElement *local_310;
  FClusterCreationParameters *local_308;
  longlong *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  longlong *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2d0;
  FSourceLocation local_2a8;
  TPBDRigidParticleHandleImp<double,3,1> *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FSparseArrayAllocationInfo local_278;
  double local_268;
  double dStack_260;
  double local_258;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  local_248;
  FClusterCreationParameters local_238;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  TRigidTransform<double,3> local_1c8;
  undefined1 local_168 [32];
  ForElementType<unsigned_int> local_148;
  uint local_140;
  uint local_13c;
  int local_138;
  int local_134;
  FScriptContainerElement local_130 [8];
  ForAnyElementType local_128;
  uint local_120;
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  TTransform<double> local_c8;
  ulonglong local_68;
  undefined1 uVar9;
  undefined1 uVar10;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_308 = param_4;
  local_3a8 = this;
  local_320 = (TTransform<double> *)param_3;
  TVar17 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_CreateClusterParticleFromClusterChildren,1>
           ::GetStatId((FThreadSafeStaticStatInner<Chaos::FStat_STAT_CreateClusterParticleFromClusterChildren,1>
                        *)&StatPtr_STAT_CreateClusterParticleFromClusterChildren);
  local_2a8.Impl._Line = 0x233;
  local_2a8.Impl._Column = 3;
  local_2a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
  ;
  local_2a8.Impl._Function =
       "class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *__cdecl Chaos::FRigidClustering::CreateClusterParticleFromClusterChildren(class TArray<class Chaos::TPBDRigidParticleHandleImp<double,3,1> *,class TSizedDefaultAllocator<32> > &&,class Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1> *,const class Chaos::TRigidTransform<double,3> &,const struct Chaos::FClusterCreationParameters &)"
  ;
  local_3c8[0].StatId.ComparisonIndex.Value = 0;
  local_3c8[0].StatId.Number = 0;
  local_3c8[0].EmittedEvent = 0;
  FCycleCounter::Start
            (local_3c8,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_2a8);
  local_3e0 = (TGeometryParticleHandleImp<double,3,1> *)param_4->ClusterParticleHandle;
  if (local_3e0 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_3d5._padding_ = '\0';
    local_3d5.bStartSleeping = false;
    local_3d5.bGravityEnabled = true;
    local_3d5.bCCDEnabled = false;
    pTVar18 = FPBDRigidsEvolutionBase::CreateClusteredParticles
                        ((FPBDRigidsEvolutionBase *)this->MEvolution,&local_248,1,(FUniqueIdx *)0x0,
                         &local_3d5);
    if ((pTVar18->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar19;
    }
    local_3e0 = *(TGeometryParticleHandleImp<double,3,1> **)(pTVar18->AllocatorInstance).Data;
    if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
  }
  FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)this->MEvolution,local_3e0);
  TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup
            ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,0x7fffffff);
  this_03 = &this->TopLevelClusterParents;
  local_350 = this_03;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
            (this_03,(TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_3cc,
             (bool *)&local_3e0);
  pFVar20 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                       ((TPBDRigidClusteredParticles<double,3> *)local_3e0->_padding_,
                        (int)local_3e0->_padding_)->field0_0x0;
  local_288 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  pFVar20->Bits = pFVar20->Bits | 1;
  iStack_280 = param_1->ArrayNum;
  pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      ((TPBDRigidClusteredParticles<double,3> *)local_3e0->_padding_,
                       (int)local_3e0->_padding_);
  pCVar21->Id = local_288;
  *(ulonglong *)&pCVar21->NumChildren = CONCAT44(uStack_27c,iStack_280);
  pFVar20 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                       ((TPBDRigidClusteredParticles<double,3> *)local_3e0->_padding_,
                        (int)local_3e0->_padding_)->field0_0x0;
  pFVar20->Bits = pFVar20->Bits & 0xfd;
  if (param_2 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    FVar14 = TPBDRigidParticleHandleImp<double,3,1>::ControlFlags
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetGravityEnabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,
               (bool)(*(byte *)CONCAT62(extraout_var,FVar14.field0_0x0) & 1));
    FVar14 = TPBDRigidParticleHandleImp<double,3,1>::ControlFlags
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetGravityGroupIndex
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,
               *(ushort *)CONCAT62(extraout_var_00,FVar14.field0_0x0) >> 5 & 7);
    bVar12 = TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningEnabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    pTVar11 = local_3e0;
    bVar13 = TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningEnabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0);
    uVar28 = 0;
    if (bVar12 != bVar13) {
      uVar32 = (uint)pTVar11->_padding_;
      lVar6 = pTVar11->_padding_;
      uVar36 = uVar28;
      if ((int)uVar32 < *(int *)(lVar6 + 0x2e0)) {
        uVar36 = ~uVar32 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar19;
      }
      lVar6 = *(longlong *)(lVar6 + 0x2d8);
      puVar4 = (ushort *)((longlong)(int)uVar32 * 0x10 + 8 + lVar6);
      *puVar4 = *puVar4 & 0xffef;
      puVar4 = (ushort *)((longlong)(int)uVar32 * 0x10 + 8 + lVar6);
      *puVar4 = *puVar4 | (ushort)bVar12 << 4;
      uVar32 = (uint)pTVar11->_padding_;
      lVar6 = pTVar11->_padding_;
      uVar36 = 0;
      if ((int)uVar32 < *(int *)(lVar6 + 0x2e0)) {
        uVar36 = ~uVar32 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar19;
      }
      pbVar5 = (byte *)((longlong)(int)uVar32 * 0x10 + 10 + *(longlong *)(lVar6 + 0x2d8));
      *pbVar5 = *pbVar5 | 1;
      this = local_3a8;
    }
    FVar14 = TPBDRigidParticleHandleImp<double,3,1>::ControlFlags
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetCCDEnabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,
               (bool)(*(byte *)CONCAT62(extraout_var_01,FVar14.field0_0x0) >> 1 & 1));
    bVar12 = TPBDRigidParticleHandleImp<double,3,1>::MACDEnabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetMACDEnabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,bVar12);
    bVar12 = TPBDRigidParticleHandleImp<double,3,1>::OneWayInteraction
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetOneWayInteraction
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,bVar12);
    uVar32 = *(uint *)&param_2->field_0x8;
    lVar6 = *(longlong *)param_2;
    uVar36 = 0;
    if ((int)uVar32 < *(int *)(lVar6 + 0x430)) {
      uVar36 = ~uVar32 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar19;
    }
    TPBDRigidParticleHandleImp<double,3,1>::SetLinearEtherDrag
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,
               (double *)(*(longlong *)(lVar6 + 0x428) + (longlong)(int)uVar32 * 8));
    uVar32 = *(uint *)&param_2->field_0x8;
    lVar6 = *(longlong *)param_2;
    uVar36 = uVar28;
    if ((int)uVar32 < *(int *)(lVar6 + 0x448)) {
      uVar36 = ~uVar32 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar19;
    }
    TPBDRigidParticleHandleImp<double,3,1>::SetAngularEtherDrag
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,
               (double *)(*(longlong *)(lVar6 + 0x440) + (longlong)(int)uVar32 * 8));
    fVar41 = TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetInitialOverlapDepenetrationVelocity
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,fVar41);
    fVar41 = TPBDRigidParticleHandleImp<double,3,1>::SleepThresholdMultiplier
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetSleepThresholdMultiplier
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,fVar41);
    uVar32 = *(uint *)&param_2->field_0x8;
    lVar6 = *(longlong *)param_2;
    if ((int)uVar32 < *(int *)(lVar6 + 0x520)) {
      uVar28 = ~uVar32 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
      return pTVar19;
    }
    lVar6 = *(longlong *)(lVar6 + 0x518);
    local_3d1._0_2_ = *(undefined2 *)((longlong)(int)uVar32 * 3 + lVar6);
    local_3d1.NumProjectionIterations = *(schar *)((longlong)(int)uVar32 * 3 + 2 + lVar6);
    TPBDRigidParticleHandleImp<double,3,1>::SetIterationSettings
              ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,&local_3d1);
    this_03 = local_350;
  }
  pFVar33 = (param_1->AllocatorInstance).Data;
  iVar15 = param_1->ArrayNum;
  pFVar35 = pFVar33 + (longlong)iVar15 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar15) {
      local_3d7 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_3d7);
    }
    pTVar11 = local_3e0;
    if (pFVar33 == pFVar35) break;
    this_02 = &this->MEvolution->InternalParticleInitilization;
    if (*(longlong *)&this_02->field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*)>
                    *)this_02,*(TGeometryParticleHandleImp<double,3,1> **)pFVar33,local_3e0);
    }
    pFVar33 = pFVar33 + 8;
  }
  local_328 = local_3e0;
  uVar28 = ((uint)((ulonglong)local_3e0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3e0 >> 4)) *
           -0x7a143595;
  uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
  iVar15 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                     ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)&this->MChildren,uVar28 >> 0x10 ^ uVar28,
                      (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_328);
  if (iVar15 == -1) {
    TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
    ::
    Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
              ((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                *)&this->MChildren,(TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_3e0,
               param_1);
  }
  else {
    pTVar22 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindChecked((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                             *)&this->MChildren,
                            (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar11);
    TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::operator=
              (pTVar22,param_1);
  }
  pTVar22 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->MChildren,
                          (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_3e0);
  if (DeactivateClusterChildren != 0) {
    iVar15 = pTVar22->ArrayNum;
    pFVar35 = (pTVar22->AllocatorInstance).Data;
    local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.ArrayNum = iVar15;
    if (iVar15 == 0) {
      local_3a0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar15,0,&local_3a0.AllocatorInstance,iVar15,&local_3a0.ArrayMax);
      ConstructItems<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>
                (local_3a0.AllocatorInstance.Data,(TPBDRigidParticleHandleImp<double,3,1> **)pFVar35
                 ,iVar15);
    }
    local_118._0_8_ = (FScriptContainerElement *)0x0;
    local_118._8_8_ = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_ec = 0x80;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = (ForElementType<FSetElementId>)0x0;
    local_d0 = 0;
    TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Append<TSizedDefaultAllocator<32>_>
              ((TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_118,&local_3a0);
    if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.AllocatorInstance.Data);
    }
    FPBDRigidsEvolutionBase::DisableParticles
              ((FPBDRigidsEvolutionBase *)this->MEvolution,
               (TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_118);
    local_d0 = 0;
    if (local_d8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8);
    }
    bVar12 = local_118._12_4_ != 0;
    local_118._8_8_ = (ulonglong)(uint)local_118._12_4_ << 0x20;
    if (bVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
    }
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
  }
  local_3ac = pTVar22->ArrayNum;
  uVar29 = (ulonglong)(int)local_3ac;
  pFVar35 = (pTVar22->AllocatorInstance).Data;
  local_3d8 = true;
  local_3e8 = false;
  local_310 = pFVar35 + uVar29 * 8;
  pFVar33 = local_310;
  while( true ) {
    if (pTVar22->ArrayNum != (int)uVar29) {
      local_3d6 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_3d6);
    }
    if (pFVar35 == pFVar33) break;
    this_00 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar35;
    pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)this_00->field_0xc) {
      pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00;
    }
    if (pTVar19 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      pFVar35 = pFVar35 + 8;
      uVar29 = (ulonglong)local_3ac;
      this_03 = local_350;
    }
    else {
      pTVar23 = (TTransform<double> *)
                TPBDRigidClusteredParticles<double,3>::ChildToParent
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar19,
                           *(int *)&pTVar19->field_0x8);
      local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_c8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_c8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_c8,pTVar23,local_320);
      local_1e8 = local_c8.Translation.XY.m128d_f64[0];
      dStack_1e0 = local_c8.Translation.XY.m128d_f64[1];
      local_1d8 = local_c8.Translation.ZW.m128d_f64[0];
      local_268 = local_c8.Translation.XY.m128d_f64[0];
      dStack_260 = local_c8.Translation.XY.m128d_f64[1];
      local_258 = local_c8.Translation.ZW.m128d_f64[0];
      TParticles<double,3>::SetX
                (*(TParticles<double,3> **)pTVar19,*(int *)&pTVar19->field_0x8,
                 (TVector<double,3> *)&local_268);
      uVar28 = *(uint *)&pTVar19->field_0x8;
      lVar6 = *(longlong *)pTVar19;
      local_338 = (float)local_c8.Rotation.XY.m128d_f64[0];
      uVar32 = 0;
      if ((int)uVar28 < *(int *)(lVar6 + 0x50)) {
        uVar32 = ~uVar28 >> 0x1f;
      }
      fStack_334 = (float)local_c8.Rotation.XY.m128d_f64[1];
      fStack_330 = (float)local_c8.Rotation.ZW.m128d_f64[0];
      fStack_32c = (float)local_c8.Rotation.ZW.m128d_f64[1];
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar19;
      }
      pTVar11 = local_3e0;
      puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar28 * 0x10);
      *puVar2 = CONCAT44(fStack_334,local_338);
      puVar2[1] = CONCAT44(fStack_32c,fStack_330);
      pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar19,
                           *(int *)&pTVar19->field_0x8);
      pCVar21->Id = (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11;
      piVar24 = TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar19,
                           *(int *)&pTVar19->field_0x8);
      *piVar24 = 0;
      if ((DeactivateClusterChildren != 0) &&
         (TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          ::Remove(this_03,pTVar19), local_318 = pTVar19,
         *(int *)&(local_3a8->TopLevelClusterParentsStrained).field_0x8 !=
         *(int *)&(local_3a8->TopLevelClusterParentsStrained).field_0x34)) {
        uVar28 = ((uint)((ulonglong)pTVar19 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar19 >> 4)) *
                 -0x7a143595;
        uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                  ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                    *)&local_3a8->TopLevelClusterParentsStrained,uVar28 >> 0x10 ^ uVar28,&local_318)
        ;
      }
      pfVar25 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar19,
                           *(int *)&pTVar19->field_0x8);
      fVar41 = *pfVar25;
      pfVar25 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          ((TPBDRigidClusteredParticles<double,3> *)local_3e0->_padding_,
                           (int)local_3e0->_padding_);
      if (fVar41 <= *pfVar25) {
        fVar41 = *pfVar25;
      }
      pfVar25 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          ((TPBDRigidClusteredParticles<double,3> *)local_3e0->_padding_,
                           (int)local_3e0->_padding_);
      *pfVar25 = fVar41;
      uVar28 = (uint)local_3e0->_padding_;
      lVar6 = local_3e0->_padding_;
      uVar32 = 0;
      if ((int)uVar28 < *(int *)(lVar6 + 0x2e0)) {
        uVar32 = ~uVar28 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar19;
      }
      uVar32 = *(uint *)&pTVar19->field_0x8;
      lVar39 = *(longlong *)pTVar19;
      iVar15 = *(int *)(*(longlong *)(lVar6 + 0x2d8) + (longlong)(int)uVar28 * 0x10);
      uVar28 = 0;
      if ((int)uVar32 < *(int *)(lVar39 + 0x2e0)) {
        uVar28 = ~uVar32 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar19;
      }
      iVar34 = *(int *)(*(longlong *)(lVar39 + 0x2d8) + (longlong)(int)uVar32 * 0x10);
      uVar28 = (uint)local_3e0->_padding_;
      lVar6 = local_3e0->_padding_;
      uVar32 = 0;
      if ((int)uVar28 < *(int *)(lVar6 + 0x2e0)) {
        uVar32 = ~uVar28 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
        return pTVar19;
      }
      if (iVar15 < iVar34) {
        iVar34 = iVar15;
      }
      *(int *)(*(longlong *)(lVar6 + 0x2d8) + (longlong)(int)uVar28 * 0x10) = iVar34;
      FVar14 = TPBDRigidParticleHandleImp<double,3,1>::ControlFlags(this_00);
      local_3d8 = (bool)(local_3d8 & *(byte *)CONCAT62(extraout_var_02,FVar14.field0_0x0) >> 2 & 1);
      FVar14 = TPBDRigidParticleHandleImp<double,3,1>::ControlFlags(this_00);
      pFVar35 = pFVar35 + 8;
      local_3e8 = (bool)(local_3e8 |
                        (byte)((ushort)*(undefined2 *)CONCAT62(extraout_var_03,FVar14.field0_0x0) >>
                              9) & 1);
      uVar29 = (ulonglong)local_3ac;
      pFVar33 = local_310;
      this_03 = local_350;
    }
  }
  uVar28 = pTVar22->ArrayNum;
  local_238.CoillisionThicknessPercent = local_308->CoillisionThicknessPercent;
  uVar8._0_4_ = local_308->MaxNumConnections;
  uVar8._4_1_ = local_308->bCleanCollisionParticles;
  uVar8._5_1_ = local_308->bCopyCollisionParticles;
  uVar9 = local_308->bGenerateConnectionGraph;
  uVar10 = local_308->field_0xf;
  uVar8._6_2_ = CONCAT11(uVar10,uVar9);
  local_238.ConnectionMethod = local_308->ConnectionMethod;
  local_238._20_4_ = *(undefined4 *)&local_308->field_0x14;
  local_238.ConnectionGraphBoundsFilteringMargin = local_308->ConnectionGraphBoundsFilteringMargin;
  local_238._8_5_ = SUB85(uVar8,0);
  local_238.bCopyCollisionParticles = UnionsHaveCollisionParticles != 0;
  local_238._14_2_ = uVar8._6_2_;
  local_238._8_8_ = CONCAT35(local_238._13_3_,local_238._8_5_) & 0xffffff00ffffffff;
  local_238.CollisionParticles = local_308->CollisionParticles;
  local_238.ClusterParticleHandle = local_308->ClusterParticleHandle;
  local_238.Scale._0_8_ = *(undefined8 *)&local_308->Scale;
  local_238.Scale._8_8_ = *(undefined8 *)&(local_308->Scale).field_0x8;
  local_238.Scale._16_8_ = *(undefined8 *)&(local_308->Scale).field_0x10;
  local_238.bIsAnchored = local_308->bIsAnchored;
  local_238.bEnableStrainOnCollision = local_308->bEnableStrainOnCollision;
  local_238._74_6_ = *(undefined6 *)&local_308->field_0x4a;
  pFVar35 = (pTVar22->AllocatorInstance).Data;
  if (((int)uVar28 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar7)();
    return pTVar19;
  }
  puVar40 = (ulonglong *)0x0;
  local_13c = 0x80;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (ForElementType<unsigned_int>)0x0;
  local_140 = 0;
  local_138 = -1;
  local_134 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  if (uVar28 == 0) goto LAB_143c96e7e;
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar28);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_168,uVar28);
  uVar32 = 1;
  if (3 < uVar28) {
    uVar29 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar32 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_120 != 0) && ((int)uVar32 <= (int)local_120)) goto LAB_143c96e7e;
  local_120 = uVar32;
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,0,4);
  }
  if (uVar32 != 0) {
    uVar36 = uVar32;
    if (uVar32 < 2) {
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        uVar36 = 0;
        goto LAB_143c96c95;
      }
    }
    else {
LAB_143c96c95:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,uVar36,4);
    }
    if (0 < (int)uVar32) {
      uVar29 = (ulonglong)uVar32;
      puVar37 = puVar40;
      do {
        FVar31.Data = local_130;
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FVar31.Data = local_128.Data;
        }
        uVar26 = (longlong)(int)uVar32 - 1U & (ulonglong)puVar37;
        puVar37 = (ulonglong *)((longlong)puVar37 + 1);
        *(undefined4 *)(FVar31.Data + uVar26 * 4) = 0xffffffff;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
  if (local_120 != 0) {
    pTStack_388 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    local_390 = 0;
    uStack_38c = 1;
    uStack_37c = 0;
    uStack_378 = 0;
    puVar37 = puVar40;
    if (local_140 != 0) {
      FVar30 = (ForElementType<unsigned_int>)((longlong)local_168 + 0x10);
      if (local_148 != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_148;
      }
      uVar32 = *(uint *)FVar30;
      puVar38 = puVar40;
      while (uVar32 == 0) {
        uStack_378 = (int)puVar38 + 0x20;
        puVar38 = (ulonglong *)(ulonglong)uStack_378;
        iVar15 = (int)puVar37;
        local_390 = iVar15 + 1;
        puVar37 = (ulonglong *)(ulonglong)local_390;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_390)
        goto LAB_143c96daa;
        uVar32 = ((uint *)((longlong)FVar30 + 4))[iVar15];
      }
      uStack_38c = -uVar32 & uVar32;
      uVar29 = (ulonglong)uStack_38c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_37c = (uStack_378 - 1) + (int)lVar6;
      puVar37 = (ulonglong *)(ulonglong)uStack_37c;
      if ((int)local_140 < (int)uStack_37c) {
LAB_143c96daa:
        puVar37 = (ulonglong *)(ulonglong)local_140;
        uStack_37c = local_140;
      }
    }
    local_380 = 0xffffffff;
    local_300 = (longlong *)local_168;
    local_2f8._padding_ = CONCAT44(uStack_38c,local_390);
    local_2f8.CurrentBitIndex = uStack_37c;
    local_2f8.UnvisitedBitMask = 0xffffffff;
    local_2f8._28_4_ = uStack_374;
    local_2f8.BaseBitIndex = uStack_378;
    local_2f8.Array = pTStack_388;
    if ((int)puVar37 < (int)local_140) {
      do {
        lVar6 = *local_300;
        lVar39 = (longlong)(int)puVar37;
        uVar29 = *(ulonglong *)(lVar6 + lVar39 * 0x10);
        uVar32 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
        uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
        uVar32 = (uVar32 >> 0x10 ^ uVar32) & local_120 - 1;
        *(uint *)(lVar6 + 0xc + lVar39 * 0x10) = uVar32;
        FVar31.Data = local_130;
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FVar31.Data = local_128.Data;
        }
        uVar29 = (longlong)(int)local_120 - 1U & (longlong)(int)uVar32;
        *(undefined4 *)(lVar6 + 8 + lVar39 * 0x10) = *(undefined4 *)(FVar31.Data + uVar29 * 4);
        *(int *)(FVar31.Data + uVar29 * 4) = (int)puVar37;
        local_2f8.UnvisitedBitMask = local_2f8.UnvisitedBitMask & ~local_2f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
        puVar37 = (ulonglong *)(ulonglong)(uint)local_2f8.CurrentBitIndex;
      } while (local_2f8.CurrentBitIndex < (local_2f8.Array)->NumBits);
    }
  }
LAB_143c96e7e:
  pFVar33 = pFVar35 + (longlong)(int)uVar28 * 8;
  iVar15 = local_138;
  do {
    local_138 = iVar15;
    if (pFVar35 == pFVar33) {
      UpdateClusterMassProperties
                ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_3e0,
                 (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                  *)local_168);
      MoveClusterToMassOffset
                (&local_1c8,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_3e0,Position);
      this_01 = local_3a8;
      UpdateKinematicProperties
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,&local_3a8->MChildren,
                 local_3a8->MEvolution);
      local_348[0].Reference = (FImplicitObject *)0x0;
      UpdateGeometry((TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_3e0,
                     (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)local_168,&this_01->MChildren,local_348,&local_238);
      if (local_348[0].Reference != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &(local_348[0].Reference)->_padding_;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (*(int *)((longlong)&(local_348[0].Reference)->_padding_ + 4) == 0)
           ) {
          (**(code **)(local_348[0].Reference)->_padding_)(local_348[0].Reference,1);
        }
      }
      TPBDRigidParticleHandleImp<double,3,1>::SetOneWayInteraction
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,local_3d8);
      TPBDRigidParticleHandleImp<double,3,1>::SetMACDEnabled
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_3e0,local_3e8);
      BuildConvexOptimizer(this_01,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_3e0);
      pTVar11 = local_3e0;
      local_120 = 0;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      iVar15 = SUB84(local_168._8_8_,4);
      local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
      if (iVar15 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
      }
      local_138 = -1;
      local_134 = 0;
      local_140 = 0;
      if (0x80 < local_13c) {
        local_13c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
      }
      if (local_148 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_148);
      }
      if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_168._0_8_);
      }
      if ((local_3c8[0].EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_3c8[0].EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_3c8[0].EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(local_3c8[0].StatId,CycleScopeEnd);
      }
      return (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar11;
    }
    if (local_134 == 0) {
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,1,(ForAnyElementType *)local_168,(int *)(local_168 + 8),
                          (int *)(local_168 + 0xc));
      uVar28 = local_140;
      if (local_140 == 0) {
        iVar34 = 0;
LAB_143c96f2d:
        if ((int)local_13c < (int)(local_140 + 1)) {
          uVar32 = local_13c + 0x1f >> 5;
          uVar36 = local_140 + 0x20 >> 5;
          if (uVar36 < 5) {
            iVar16 = 4;
          }
          else {
            uVar29 = (ulonglong)uVar36;
            if (uVar32 < 5) {
              uVar32 = 0;
            }
            if (uVar32 == 0) {
              uVar26 = 4;
              if (4 < uVar29) {
                uVar26 = uVar29;
              }
            }
            else {
              uVar26 = ((ulonglong)uVar36 * 3 >> 3) + 0x10 + uVar29;
            }
            uVar27 = FMemory::QuantizeSize(uVar26 * 4,0);
            iVar16 = (int)(uVar27 >> 2);
            if (iVar16 < (int)uVar36) {
              iVar16 = 0x7fffffff;
            }
          }
          local_13c = iVar16 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),local_140);
        }
        local_140 = local_140 + 1;
        uVar36 = (int)local_140 >> 0x1f & 0x1f;
        uVar32 = local_140 + uVar36;
        iVar16 = (uVar32 & 0x1f) - uVar36;
        if (iVar16 != 0) {
          FVar30 = (ForElementType<unsigned_int>)((longlong)local_168 + 0x10);
          if (local_148 != (ForElementType<unsigned_int>)0x0) {
            FVar30 = local_148;
          }
          puVar3 = (uint *)((longlong)FVar30 + (longlong)((int)uVar32 >> 5) * 4);
          *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
        }
      }
      else {
        iVar34 = (int)(local_140 + ((int)local_140 >> 0x1f & 0x1fU)) >> 5;
        if (iVar34 != (int)(((int)(local_140 - 1) >> 0x1f & 0x1fU) + (local_140 - 1)) >> 5)
        goto LAB_143c96f2d;
        local_140 = local_140 + 1;
      }
      FVar30 = (ForElementType<unsigned_int>)((longlong)local_168 + 0x10);
      if (local_148 != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_148;
      }
      puVar3 = (uint *)((longlong)FVar30 + (longlong)iVar34 * 4);
      *puVar3 = *puVar3 & ~(1 << ((byte)uVar28 & 0x1f));
    }
    else {
      local_138 = *(int *)(local_168._0_8_ + (longlong)iVar15 * 0x10 + 4);
      local_134 = local_134 + -1;
      if (local_134 != 0) {
        *(undefined4 *)(local_168._0_8_ + (longlong)local_138 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_168,&local_278,iVar15);
    puVar37 = puVar40;
    if (local_278.Pointer != (ulonglong *)0x0) {
      *(ulonglong *)local_278.Pointer = *(ulonglong *)pFVar35;
      *(undefined4 *)((longlong)local_278.Pointer + 8) = 0xffffffff;
      puVar37 = local_278.Pointer;
    }
    uVar29 = *puVar37;
    uVar28 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
    uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
    uVar28 = uVar28 >> 0x10 ^ uVar28;
    if ((local_168._8_4_ - local_134 != 1) && (local_168._8_4_ != local_134)) {
      FVar31.Data = local_130;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FVar31.Data = local_128.Data;
      }
      for (iVar15 = *(int *)(FVar31.Data + (ulonglong)(local_120 - 1 & uVar28) * 4); iVar15 != -1;
          iVar15 = *(int *)(local_168._0_8_ + (longlong)iVar15 * 0x10 + 8)) {
        if (*(ulonglong *)(local_168._0_8_ + (longlong)iVar15 * 0x10) == uVar29) {
          if (iVar15 != -1) {
            *(ulonglong *)(local_168._0_8_ + (longlong)iVar15 * 0x10) = uVar29;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_168,local_278.Index,1);
            goto LAB_143c9741b;
          }
          break;
        }
      }
    }
    uVar36 = local_168._8_4_ - local_134;
    uVar32 = 1;
    if (3 < uVar36) {
      uVar29 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar32 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar36 < 1) || ((int)uVar32 <= (int)local_120)) {
      uVar28 = local_120 - 1 & uVar28;
      *(uint *)((longlong)puVar37 + 0xc) = uVar28;
      FVar31.Data = local_130;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FVar31.Data = local_128.Data;
      }
      uVar29 = (longlong)(int)local_120 - 1U & (longlong)(int)uVar28;
      *(undefined4 *)(puVar37 + 1) = *(undefined4 *)(FVar31.Data + uVar29 * 4);
      *(int *)(FVar31.Data + uVar29 * 4) = local_278.Index;
    }
    else {
      local_120 = uVar32;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,0,4);
      }
      if (uVar32 != 0) {
        uVar28 = uVar32;
        if (uVar32 < 2) {
          if (local_128.Data != (FScriptContainerElement *)0x0) {
            uVar28 = 0;
            goto LAB_143c971fd;
          }
        }
        else {
LAB_143c971fd:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_128,0,uVar28,4);
        }
        if (0 < (int)uVar32) {
          uVar29 = (ulonglong)uVar32;
          puVar37 = puVar40;
          do {
            FVar31.Data = local_130;
            if (local_128.Data != (FScriptContainerElement *)0x0) {
              FVar31.Data = local_128.Data;
            }
            uVar26 = (ulonglong)puVar37 & (longlong)(int)uVar32 - 1U;
            puVar37 = (ulonglong *)((longlong)puVar37 + 1);
            *(undefined4 *)(FVar31.Data + uVar26 * 4) = 0xffffffff;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
      }
      if (local_120 != 0) {
        pTStack_368 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
        local_370 = 0;
        uStack_36c = 1;
        uStack_35c = 0;
        uStack_358 = 0;
        puVar37 = puVar40;
        if (local_140 != 0) {
          FVar30 = (ForElementType<unsigned_int>)((longlong)local_168 + 0x10);
          if (local_148 != (ForElementType<unsigned_int>)0x0) {
            FVar30 = local_148;
          }
          uVar28 = *(uint *)FVar30;
          puVar38 = puVar40;
          while (uVar28 == 0) {
            uStack_358 = (int)puVar38 + 0x20;
            puVar38 = (ulonglong *)(ulonglong)uStack_358;
            iVar15 = (int)puVar37;
            local_370 = iVar15 + 1;
            puVar37 = (ulonglong *)(ulonglong)local_370;
            if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_370) goto LAB_143c9730a;
            uVar28 = ((uint *)((longlong)FVar30 + 4))[iVar15];
          }
          uStack_36c = -uVar28 & uVar28;
          uVar29 = (ulonglong)uStack_36c * 2 + 1;
          lVar6 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uStack_35c = (uStack_358 - 1) + (int)lVar6;
          puVar37 = (ulonglong *)(ulonglong)uStack_35c;
          if ((int)local_140 < (int)uStack_35c) {
LAB_143c9730a:
            puVar37 = (ulonglong *)(ulonglong)local_140;
            uStack_35c = local_140;
          }
        }
        local_360 = 0xffffffff;
        local_2d8 = (longlong *)local_168;
        local_2d0._padding_ = CONCAT44(uStack_36c,local_370);
        local_2d0.CurrentBitIndex = uStack_35c;
        local_2d0.UnvisitedBitMask = 0xffffffff;
        local_2d0._28_4_ = uStack_354;
        local_2d0.BaseBitIndex = uStack_358;
        local_2d0.Array = pTStack_368;
        if ((int)puVar37 < (int)local_140) {
          do {
            lVar6 = *local_2d8;
            lVar39 = (longlong)(int)puVar37;
            uVar29 = *(ulonglong *)(lVar6 + lVar39 * 0x10);
            uVar28 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
            uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
            uVar28 = (uVar28 >> 0x10 ^ uVar28) & local_120 - 1;
            *(uint *)(lVar6 + 0xc + lVar39 * 0x10) = uVar28;
            FVar31.Data = local_130;
            if (local_128.Data != (FScriptContainerElement *)0x0) {
              FVar31.Data = local_128.Data;
            }
            uVar29 = (longlong)(int)local_120 - 1U & (longlong)(int)uVar28;
            *(undefined4 *)(lVar6 + 8 + lVar39 * 0x10) = *(undefined4 *)(FVar31.Data + uVar29 * 4);
            *(int *)(FVar31.Data + uVar29 * 4) = (int)puVar37;
            local_2d0.UnvisitedBitMask = local_2d0.UnvisitedBitMask & ~local_2d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2d0);
            puVar37 = (ulonglong *)(ulonglong)(uint)local_2d0.CurrentBitIndex;
          } while (local_2d0.CurrentBitIndex < (local_2d0.Array)->NumBits);
        }
      }
    }
LAB_143c9741b:
    pFVar35 = pFVar35 + 8;
    iVar15 = local_138;
  } while( true );
}

// CreateClustersFromNewIslands @ 143c97b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FRigidClustering::CreateClustersFromNewIslands
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FShapeInstance *pFVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  FMaterialHandle FVar8;
  FScriptContainerElement *pFVar9;
  FPBDRigidsEvolutionGBF *pFVar10;
  FShapeInstance *this_00;
  IPhysicsProxyBase *pIVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong64 uVar17;
  bool bVar18;
  int iVar19;
  ulong64 uVar20;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar21;
  TVector<double,3> *pTVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  float *pfVar24;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar25;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar26;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar27;
  FChaosPhysicsMaterial *pFVar28;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar29;
  uint uVar30;
  ulonglong uVar31;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong lVar36;
  int iVar37;
  uint uVar38;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_01;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar39;
  FRigidClustering *this_02;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  FPBDRigidParticleParameters local_1c5;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> local_1c0;
  int local_1bc;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> local_1b8;
  TGeometryParticleHandleImp<double,3,1> *local_1b0;
  undefined4 local_1a8 [2];
  FMaterialHandle local_1a0 [2];
  uint local_198;
  uint local_194;
  int *local_190;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_188;
  FRigidClustering *local_180;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_178;
  TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_170;
  TGeometryParticleHandleImp<double,3,1> *local_168;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_160;
  longlong local_158;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_150;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  local_148;
  undefined1 local_138 [56];
  double dStack_100;
  double local_f8;
  undefined2 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_218;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar19 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  uVar17 = 0;
  pFVar33 = pFVar9;
  local_188 = param_2;
  local_180 = this;
  local_170 = param_1;
  local_160 = __return_storage_ptr__;
  while( true ) {
    uVar20 = uVar17;
    if (param_1->ArrayNum != iVar19) {
      local_1c8 = 0;
      `TCheckedPointerIterator<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    this_01 = local_188;
    iVar37 = (int)uVar20;
    if (pFVar33 == pFVar9 + (longlong)iVar19 * 0x10) break;
    pFVar34 = pFVar33 + 0x10;
    pFVar1 = pFVar33 + 8;
    uVar17 = (ulonglong)(iVar37 + 1);
    pFVar33 = pFVar34;
    if (*(int *)pFVar1 < 2) {
      uVar17 = uVar20;
    }
  }
  if (iVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar20);
  }
  if (__return_storage_ptr__->ArrayMax < iVar37) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar37,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  }
  uVar38 = *(uint *)&this_01->field_0x8;
  lVar35 = (longlong)(int)uVar38;
  lVar36 = *(longlong *)this_01;
  uVar30 = 0;
  if ((int)uVar38 < *(int *)(lVar36 + 0x568)) {
    uVar30 = ~uVar38 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )(*pcVar12)();
    return pTVar21;
  }
  lVar36 = *(longlong *)(lVar36 + 0x560);
  fVar5 = *(float *)(lVar36 + lVar35 * 0x10);
  uVar6 = *(undefined8 *)(lVar36 + 8 + lVar35 * 0x10);
  dVar13 = (double)(float)((ulonglong)uVar6 >> 0x20);
  dVar14 = (double)*(float *)(lVar36 + 4 + lVar35 * 0x10);
  pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
  this_02 = local_180;
  local_1c5._padding_ = '\0';
  local_1c5.bStartSleeping = false;
  local_1c5.bGravityEnabled = true;
  local_1c5.bCCDEnabled = false;
  local_e8._8_4_ = SUB84(dVar14,0);
  local_e8._0_8_ = (double)fVar5;
  local_e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_d8._8_4_ = SUB84(dVar13,0);
  local_d8._0_8_ = (double)(float)uVar6;
  local_d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_c8 = *(undefined8 *)pTVar22;
  uStack_c0 = *(undefined8 *)&pTVar22->field_0x8;
  local_b8 = *(undefined8 *)&pTVar22->field_0x10;
  local_98 = ___xmm_00000000000000003ff0000000000000;
  uStack_90 = _UNK_150689518;
  uStack_b0 = 0;
  local_a8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_a0 = _UNK_150689688;
  FPBDRigidsEvolutionBase::CreateClusteredParticles
            ((FPBDRigidsEvolutionBase *)local_180->MEvolution,&local_148,iVar37,(FUniqueIdx *)0x0,
             &local_1c5);
  dVar13 = __real_3fd3333333333333;
  uVar38 = 0;
  local_194 = local_170->ArrayNum;
  uVar31 = (ulonglong)(int)local_194;
  pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            (local_170->AllocatorInstance).Data;
  pTVar39 = pTVar21 + uVar31;
  lVar36 = 0;
  local_150 = pTVar39;
  do {
    local_178 = pTVar21;
    if (local_170->ArrayNum != (int)uVar31) {
      local_1c7 = 0;
      `TCheckedPointerIterator<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1c7);
    }
    if (pTVar21 == pTVar39) {
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (1 < pTVar21->ArrayNum) {
      local_138._0_8_ = dVar13;
      local_138._48_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_100 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_138._24_8_ = 0.0;
      local_138._8_4_ = 100;
      uVar30 = 0;
      if ((int)uVar38 < local_148.ArrayNum) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      local_138[0xc] = true;
      local_138[0xd] = true;
      local_138[0xe] = true;
      local_138._16_4_ = MinimalSpanningSubsetDelaunayTriangulation;
      local_138._32_8_ = (FBVHParticles *)0x0;
      local_f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_f0._0_1_ = false;
      local_f0._1_1_ = true;
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      local_198 = uVar38 + 1;
      local_138._40_8_ = *(undefined8 *)(local_148.AllocatorInstance.Data + lVar36 * 8);
      local_158 = lVar36 + 1;
      pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)
                CreateClusterParticleFromClusterChildren
                          (this_02,pTVar21,this_01,(TRigidTransform<double,3> *)local_e8,
                           (FClusterCreationParameters *)local_138);
      uVar38 = *(uint *)&this_01->field_0x10;
      pFVar10 = this_02->MEvolution;
      uVar30 = 0;
      if ((int)uVar38 < (int)pFVar10->_padding_) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      local_168 = pTVar23;
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      uVar30 = pTVar23->HandleIdx;
      uVar6 = *(undefined8 *)(pFVar10->_padding_ + (longlong)(int)uVar38 * 8);
      uVar38 = 0;
      if ((int)uVar30 < (int)pFVar10->_padding_) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      if ((*(longlong *)(pFVar10->_padding_ + (longlong)(int)uVar30 * 8) != 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Particle->AuxilaryValue(PerParticlePhysicsMaterials)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                              ,0x2f6,L""), bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      uVar38 = pTVar23->HandleIdx;
      uVar30 = 0;
      if ((int)uVar38 < (int)pFVar10->_padding_) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      *(undefined8 *)(pFVar10->_padding_ + (longlong)(int)uVar38 * 8) = uVar6;
      Chaos::Private::FPBDIslandManager::UpdateParticleMaterial
                ((FPBDIslandManager *)&pFVar10->_padding_,pTVar23);
      pfVar24 = TPBDRigidClusteredParticles<double,3>::Strains
                          (*(TPBDRigidClusteredParticles<double,3> **)this_01,
                           *(int *)&this_01->field_0x8);
      fVar5 = *pfVar24;
      pfVar24 = TPBDRigidClusteredParticles<double,3>::Strains
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar23->_padding_,
                           (int)pTVar23->_padding_);
      *pfVar24 = fVar5;
      uVar38 = *(uint *)&this_01->field_0x8;
      lVar36 = *(longlong *)this_01;
      uVar30 = 0;
      if ((int)uVar38 < *(int *)(lVar36 + 0x298)) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar36 + 0x290);
      uVar30 = (uint)pTVar23->_padding_;
      lVar35 = pTVar23->_padding_;
      uVar6 = *(undefined8 *)(lVar36 + (longlong)(int)uVar38 * 0xc);
      uVar7 = *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar38 * 0xc);
      uVar38 = 0;
      if ((int)uVar30 < *(int *)(lVar35 + 0x298)) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar35 + 0x290);
      *(undefined8 *)(lVar36 + (longlong)(int)uVar30 * 0xc) = uVar6;
      *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar30 * 0xc) = uVar7;
      uVar38 = *(uint *)&this_01->field_0x8;
      lVar36 = *(longlong *)this_01;
      uVar30 = 0;
      if ((int)uVar38 < *(int *)(lVar36 + 0x2b0)) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar36 + 0x2a8);
      uVar30 = (uint)pTVar23->_padding_;
      lVar35 = pTVar23->_padding_;
      uVar6 = *(undefined8 *)(lVar36 + (longlong)(int)uVar38 * 0xc);
      uVar7 = *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar38 * 0xc);
      uVar38 = 0;
      if ((int)uVar30 < *(int *)(lVar35 + 0x2b0)) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar35 + 0x2a8);
      *(undefined8 *)(lVar36 + (longlong)(int)uVar30 * 0xc) = uVar6;
      *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar30 * 0xc) = uVar7;
      uVar38 = *(uint *)&this_01->field_0x8;
      lVar36 = *(longlong *)this_01;
      uVar30 = 0;
      if ((int)uVar38 < *(int *)(lVar36 + 0x580)) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar36 + 0x578);
      uVar30 = (uint)pTVar23->_padding_;
      lVar35 = pTVar23->_padding_;
      uVar6 = *(undefined8 *)(lVar36 + (longlong)(int)uVar38 * 0xc);
      uVar7 = *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar38 * 0xc);
      uVar38 = 0;
      if ((int)uVar30 < *(int *)(lVar35 + 0x580)) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar35 + 0x578);
      *(undefined8 *)(lVar36 + (longlong)(int)uVar30 * 0xc) = uVar6;
      *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar30 * 0xc) = uVar7;
      uVar38 = *(uint *)&this_01->field_0x8;
      lVar36 = *(longlong *)this_01;
      uVar30 = 0;
      if ((int)uVar38 < *(int *)(lVar36 + 0x598)) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar36 + 0x590);
      uVar30 = (uint)pTVar23->_padding_;
      lVar35 = pTVar23->_padding_;
      uVar6 = *(undefined8 *)(lVar36 + (longlong)(int)uVar38 * 0xc);
      uVar7 = *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar38 * 0xc);
      uVar38 = 0;
      if ((int)uVar30 < *(int *)(lVar35 + 0x598)) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar35 + 0x590);
      *(undefined8 *)(lVar36 + (longlong)(int)uVar30 * 0xc) = uVar6;
      *(undefined4 *)(lVar36 + 8 + (longlong)(int)uVar30 * 0xc) = uVar7;
      pTVar22 = TParticles<double,3>::GetX
                          ((TParticles<double,3> *)pTVar23->_padding_,(int)pTVar23->_padding_);
      uVar38 = (uint)pTVar23->_padding_;
      lVar36 = pTVar23->_padding_;
      uVar15 = *(undefined8 *)pTVar22;
      uVar16 = *(undefined8 *)&pTVar22->field_0x8;
      uVar6 = *(undefined8 *)&pTVar22->field_0x10;
      uVar30 = 0;
      if ((int)uVar38 < *(int *)(lVar36 + 0x550)) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      lVar36 = *(longlong *)(lVar36 + 0x548);
      puVar4 = (undefined8 *)(lVar36 + (longlong)(int)uVar38 * 0x18);
      *puVar4 = uVar15;
      puVar4[1] = uVar16;
      *(undefined8 *)(lVar36 + 0x10 + (longlong)(int)uVar38 * 0x18) = uVar6;
      uVar38 = (uint)pTVar23->_padding_;
      lVar36 = pTVar23->_padding_;
      uVar30 = 0;
      if ((int)uVar38 < *(int *)(lVar36 + 0x50)) {
        uVar30 = ~uVar38 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      uVar30 = (uint)pTVar23->_padding_;
      lVar35 = pTVar23->_padding_;
      puVar4 = (undefined8 *)(*(longlong *)(lVar36 + 0x48) + (longlong)(int)uVar38 * 0x10);
      uVar6 = *puVar4;
      uVar15 = puVar4[1];
      uVar38 = 0;
      if ((int)uVar30 < *(int *)(lVar35 + 0x568)) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      puVar4 = (undefined8 *)(*(longlong *)(lVar35 + 0x560) + (longlong)(int)uVar30 * 0x10);
      *puVar4 = uVar6;
      puVar4[1] = uVar15;
      UpdateTopLevelParticle(this_02,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar23);
      FVar25 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )TGeometryParticlesImp<double,3,0>::ShapesArray
                           (*(TGeometryParticlesImp<double,3,0> **)this_01,
                            *(int *)&this_01->field_0x8);
      FVar26 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )TGeometryParticlesImp<double,3,0>::ShapesArray
                           ((TGeometryParticlesImp<double,3,0> *)pTVar23->_padding_,
                            (int)pTVar23->_padding_);
      pTVar27 = TGeometryParticlesImp<double,3,0>::ShapesArray
                          (*(TGeometryParticlesImp<double,3,0> **)this_01,
                           *(int *)&this_01->field_0x8);
      if (0 < pTVar27->ArrayNum) {
        if ((*(int *)((longlong)FVar25 + 0x10) < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar12 = (code *)swi(3);
          pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar12)();
          return pTVar21;
        }
        FVar32 = FVar25;
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar25 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar32 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar25 + 8);
        }
        lVar36 = *(longlong *)FVar32;
        if ((*(byte *)(lVar36 + 8) & 3) == 0) {
          uVar38 = *(uint *)(lVar36 + 0x88);
        }
        else if ((*(byte *)(lVar36 + 8) & 4) == 0) {
          lVar36 = *(longlong *)(lVar36 + 0x78);
          if (lVar36 == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = *(uint *)(lVar36 + 8);
          }
        }
        else {
          pFVar28 = FMaterialHandle::Get((FMaterialHandle *)(lVar36 + 0x78));
          uVar38 = (uint)(pFVar28 != (FChaosPhysicsMaterial *)0x0);
        }
        if (0 < (int)uVar38) {
          if ((*(int *)((longlong)FVar25 + 0x10) < 1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar12 = (code *)swi(3);
            pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)(*pcVar12)();
            return pTVar21;
          }
          local_1a8[0] = 0;
          if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                *)((longlong)FVar25 + 8) !=
              (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )0x0) {
            FVar25 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                       *)((longlong)FVar25 + 8);
          }
          pTVar29 = &FPerShapeData::DownCast<_Chaos::FPerShapeData::GetMaterial_::__l2::<lambda_1>_>
                               (*(FPerShapeData **)FVar25,(<lambda_1> *)local_1a8)->InnerHandle;
          local_190 = (int *)((longlong)FVar26 + 0x10);
          FVar8.InnerHandle = *pTVar29;
          local_1bc = *local_190;
          if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                *)((longlong)FVar26 + 8) !=
              (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )0x0) {
            FVar26 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                       *)((longlong)FVar26 + 8);
          }
          local_1b8 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                       )((longlong)FVar26 + (longlong)local_1bc * 8);
          FVar25 = local_1b8;
          while( true ) {
            if (*local_190 != local_1bc) {
              local_1c6 = 0;
              `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_1c6);
            }
            this_01 = local_188;
            __return_storage_ptr__ = local_160;
            pTVar23 = local_168;
            if (FVar26 == FVar25) break;
            this_00 = *(FShapeInstance **)FVar26;
            uVar38 = (uint)this_00->_padding_;
            if ((uVar38 & 3) == 0) {
              pIVar11 = *(IPhysicsProxyBase **)&(this_00->CollisionData).QueryData;
              piVar2 = (int *)((longlong)&this_00[1]._padding_ + 4);
              iVar19 = *piVar2;
              pFVar3 = this_00 + 1;
              *(undefined4 *)&this_00[1]._padding_ = 0;
              local_1c0 = FVar8.InnerHandle;
              if (iVar19 < 1) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,1,(ForAnyElementType *)pFVar3,0,piVar2);
              }
              if ((((THandle<Chaos::FChaosPhysicsMaterial,24,8> *)pFVar3->_padding_ <= &local_1c0)
                  && (&local_1c0 <
                      (THandle<Chaos::FChaosPhysicsMaterial,24,8> *)pFVar3->_padding_ +
                      *(int *)((longlong)&this_00[1]._padding_ + 4))) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar12 = (code *)swi(3);
                pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                           *)(*pcVar12)();
                return pTVar21;
              }
              iVar19 = (int)this_00[1]._padding_;
              if (iVar19 == *(int *)((longlong)&this_00[1]._padding_ + 4)) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar3,piVar2);
              }
              *(int *)&this_00[1]._padding_ = iVar19 + 1;
              *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
               ((FScriptContainerElement *)pFVar3->_padding_ + (longlong)iVar19 * 4) = local_1c0;
              uVar30 = *(uint *)((longlong)&this_00->_padding_ + 4);
              *(uint *)((longlong)&this_00->_padding_ + 4) = uVar30 | 2;
              if (((uVar30 == 0) && (pIVar11 != (IPhysicsProxyBase *)0x0)) &&
                 (pIVar11->Solver != (FPhysicsSolverBase *)0x0)) {
                FPhysicsSolverBase::AddDirtyProxyShape(pIVar11->Solver,pIVar11,uVar38 >> 3);
              }
              FVar26 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                        )((longlong)FVar26 + 8);
              FVar25 = local_1b8;
            }
            else {
              local_1a0[0].InnerHandle = FVar8.InnerHandle;
              FShapeInstance::SetMaterialImpl(this_00,local_1a0);
              FVar26 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                        )((longlong)FVar26 + 8);
            }
          }
        }
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      piVar2 = &__return_storage_ptr__->ArrayMax;
      local_1b0 = pTVar23;
      if (((pFVar9 <= (FScriptContainerElement *)&local_1b0) &&
          ((FScriptContainerElement *)&local_1b0 < pFVar9 + (longlong)*piVar2 * 8)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar12 = (code *)swi(3);
        pTVar21 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar12)();
        return pTVar21;
      }
      iVar19 = __return_storage_ptr__->ArrayNum;
      if (iVar19 == *piVar2) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar19 + 1;
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_1b0;
      pTVar21 = local_178;
      lVar36 = local_158;
      pTVar39 = local_150;
      this_02 = local_180;
      uVar38 = local_198;
    }
    pTVar21 = pTVar21 + 1;
    uVar31 = (ulonglong)local_194;
  } while( true );
}

// CreateNodeConnection @ 143c98850

void __thiscall
Chaos::FRigidClustering::CreateNodeConnection
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2)

{
  ConnectClusteredNodes
            (param_1,param_2,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     *)0x0);
  return;
}

// DeactivateClusterParticle @ 143c988e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
* __thiscall
Chaos::FRigidClustering::DeactivateClusterParticle
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<Chaos::FStat_STAT_DeactivateClusterParticle> FVar8;
  bool *pbVar9;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar10;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  undefined1 *puVar13;
  FNameEntryId FVar14;
  FName FVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStackY_148 [32];
  FColor_u_0 local_e8 [2];
  LARGE_INTEGER local_e0;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_d8;
  FName local_c8;
  FName local_c0;
  FStatMessage local_b0;
  FName local_a0;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar8 = StatPtr_STAT_DeactivateClusterParticle;
  if (StatPtr_STAT_DeactivateClusterParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_DeactivateClusterParticle>)0x0) {
    pFVar7 = ::FName::FName(&local_a0,"STAT_DeactivateClusterParticle");
    FVar8 = (FThreadSafeStaticStat<Chaos::FStat_STAT_DeactivateClusterParticle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeactivateClusterParticle,*pFVar7,
                       L"TPBDRigidClustering<>::DeactivateClusterParticle","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar14.Value;
        local_c8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x2ab);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0.s.LowPart = FVar14.Value;
      local_e0.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_143c98a33;
    }
  }
  bVar4 = false;
  FVar15 = local_c0;
LAB_143c98a33:
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pbVar9 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                     ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if ((*pbVar9 != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ClusteredParticle->Disabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                         ,0x2ae,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
               *)(*pcVar2)();
    return pTVar10;
  }
  uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
    puVar13 = *(undefined1 **)&(this->MChildren).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->MChildren).field_0x38;
    }
    iVar16 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->MChildren).field_0x48 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar16 != -1) {
      lVar17 = *(longlong *)&(this->MChildren).field_0x0;
      do {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)((longlong)iVar16 * 0x20 + lVar17)
            == param_1) {
          if (iVar16 != -1) {
            pTVar11 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&this->MChildren,param_1);
            if ((pTVar11 ==
                 (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                  *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              pTVar10 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar2)();
              return pTVar10;
            }
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = *(int *)&pTVar11->field_0x10;
            lVar17 = (longlong)local_d8.ArrayNum;
            _Src = *(void **)&pTVar11->field_0x8;
            if (local_d8.ArrayNum == 0) {
              local_d8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
                         &local_d8.ArrayMax);
              memcpy(local_d8.AllocatorInstance.Data,_Src,lVar17 << 3);
            }
            pTVar10 = ReleaseClusterParticles(this,&local_98,&local_d8,false);
            if (__return_storage_ptr__ != pTVar10) {
              TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              ::
              Move<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
                        (__return_storage_ptr__,pTVar10);
            }
            local_98.HashSize = 0;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_98.Elements);
          }
          break;
        }
        iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 + lVar17);
      } while (iVar16 != -1);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// DestroyClusterParticle @ 143c98e40

TPBDRigidClusteredParticleHandleImp<double,3,1> * __thiscall
Chaos::FRigidClustering::DestroyClusterParticle
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FClusterDestoryParameters *param_2)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool *pbVar5;
  ClusterId *pCVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  int *piVar8;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  FRigidClusteredFlags_u_0 *pFVar10;
  FUniqueIdx *pFVar11;
  uint uVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  undefined8 *puVar21;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar22;
  ulonglong uVar23;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  longlong *plVar24;
  FClusterUnionManager *this_01;
  bool local_res20;
  undefined1 local_d8 [8];
  int local_d0 [2];
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_c8;
  uint local_c0;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_b8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_b0;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_a0;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_98;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *local_90;
  FClusterUnionManager *local_88;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_80;
  TPBDRigidParticleHandleImp<double,3,1> *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TPBDRigidParticleHandleImp<double,3,1> *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uVar20;
  
  pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
            *)&this->MomentumRestoringDataByParticle,
           (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  this_00 = (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->MChildren;
  uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  local_c0 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  local_c0 = local_c0 >> 0x10 ^ local_c0;
  local_b8 = this_00;
  if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
    puVar13 = *(undefined1 **)&(this->MChildren).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->MChildren).field_0x38;
    }
    iVar4 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->MChildren).field_0x48 - 1U & local_c0) * 4);
    if (iVar4 != -1) {
LAB_143c98f10:
      if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
           ((longlong)iVar4 * 0x20 +
           *(longlong *)
            &((TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
               *)this_00)->field_0x0) != param_1) goto code_r0x000143c98f1c;
      pTVar9 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::Find(this_00,param_1);
      if ((pTVar9 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                      *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar2)();
        return pTVar7;
      }
      plVar19 = *(longlong **)&pTVar9->field_0x8;
      iVar4 = *(int *)&pTVar9->field_0x10;
      plVar24 = plVar19 + iVar4;
      while( true ) {
        if (*(int *)&pTVar9->field_0x10 != iVar4) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        this_00 = local_b8;
        if (plVar19 == plVar24) break;
        puVar21 = (undefined8 *)0x0;
        if (2 < *(byte *)(*plVar19 + 0xc)) {
          puVar21 = (undefined8 *)*plVar19;
        }
        if (puVar21 != (undefined8 *)0x0) {
          local_78 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          uStack_70 = 0;
          pCVar6 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                             ((TPBDRigidClusteredParticles<double,3> *)*puVar21,
                              *(int *)(puVar21 + 1));
          pCVar6->Id = local_78;
          *(ulonglong *)&pCVar6->NumChildren = CONCAT44(uStack_6c,uStack_70);
          piVar8 = TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
                             ((TPBDRigidClusteredParticles<double,3> *)*puVar21,
                              *(int *)(puVar21 + 1));
          *piVar8 = 0;
        }
        plVar19 = plVar19 + 1;
      }
      local_a0 = param_1;
      if (*(int *)&(local_b8->Elements).field_0x8 != *(int *)&(local_b8->Elements).field_0x34) {
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                  (local_b8,local_c0,&local_a0);
      }
    }
  }
LAB_143c98ff7:
  pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  pbVar5 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                     ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if (*pbVar5 == false) {
    if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                *)&this->MomentumRestoringDataByParticle,
               (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
      FPBDRigidsEvolutionBase::DisableParticle
                ((FPBDRigidsEvolutionBase *)this->MEvolution,
                 (TGeometryParticleHandleImp<double,3,1> *)param_1);
      pTVar22 = pTVar15;
      if (2 < (byte)param_1->field_0xc) {
        pTVar22 = param_1;
      }
      this_00 = local_b8;
      if (pTVar22 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
        TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        ::Remove(&this->TopLevelClusterParents,pTVar22);
        local_98 = pTVar22;
        if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
            *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
          uVar12 = ((uint)((ulonglong)pTVar22 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar22 >> 4)) *
                   -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
          ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                    ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                      *)&this->TopLevelClusterParentsStrained,uVar12 ^ uVar12 >> 0x10,&local_98);
        }
        this_00 = local_b8;
        TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
        ::Remove((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_b8,pTVar22);
      }
    }
    pCVar6 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    if ((pCVar6->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5292282805487667664>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                           ,0x9d0,"ClusteredParticle->ClusterIds().Id == nullptr"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  RemoveNodeConnections(this,param_1);
  pCVar6 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)param_1,*(int *)&param_1->field_0x8
                     );
  if (pCVar6->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pCVar6 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    pTVar7 = pTVar15;
    if (pCVar6->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pCVar6 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                         (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                          *(int *)&param_1->field_0x8);
      if (2 < (byte)pCVar6->Id->field_0xc) {
        pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pCVar6->Id;
      }
    }
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01 = &this->ClusterUnionManager;
    local_b0.ArrayNum = 1;
    local_88 = this_01;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_b0.AllocatorInstance,1,&local_b0.ArrayMax);
    *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_b0.AllocatorInstance.Data = param_1;
    FClusterUnionManager::HandleRemoveOperationWithClusterLookup(this_01,&local_b0,Defer);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    local_68 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    uStack_60 = 0;
    pCVar6 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    pCVar6->Id = local_68;
    *(ulonglong *)&pCVar6->NumChildren = CONCAT44(uStack_5c,uStack_60);
    piVar8 = TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    *piVar8 = 0;
    uVar12 = ((uint)((ulonglong)pTVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar7 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar14 = (this_00->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar4 = *(int *)((longlong)FVar14 +
                      (ulonglong)(this_00->HashSize - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               ((longlong)iVar4 * 0x20 + *(longlong *)&this_00->Elements) == pTVar7) {
            pTVar9 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     ::Find(this_00,pTVar7);
            local_90 = pTVar9;
            if ((pTVar9 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                            *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar2)();
              return pTVar7;
            }
            local_c8 = param_1;
            if (((*(TPBDRigidClusteredParticleHandleImp<double,3,1> ***)&pTVar9->field_0x8 <=
                  &local_c8) &&
                (&local_c8 <
                 *(TPBDRigidClusteredParticleHandleImp<double,3,1> ***)&pTVar9->field_0x8 +
                 *(int *)&pTVar9->field_0x14)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar2)();
              return pTVar7;
            }
            iVar4 = *(int *)&pTVar9->field_0x10;
            if (iVar4 != 0) {
              plVar24 = *(longlong **)&pTVar9->field_0x8;
              uVar17 = 0;
              local_res20 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar24 != local_c8;
              pTVar15 = local_c8;
              uVar20 = uVar17;
              uVar23 = uVar17;
              do {
                uVar18 = (uint)uVar20;
                uVar12 = uVar18;
                do {
                  uVar23 = uVar23 + 1;
                  uVar12 = uVar12 + 1;
                  uVar20 = (ulonglong)uVar12;
                  if ((longlong)iVar4 <= (longlong)uVar23) break;
                } while (local_res20 ==
                         ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)plVar24[uVar23] !=
                         pTVar15));
                if (local_res20 != false) {
                  uVar16 = (uint)uVar17;
                  if (uVar16 != uVar18) {
                    memmove(plVar24 + (int)uVar16,plVar24 + (int)uVar18,
                            (longlong)(int)(uVar12 - uVar18) << 3);
                    pTVar15 = local_c8;
                  }
                  uVar17 = (ulonglong)(uVar16 + (uVar12 - uVar18));
                }
                local_res20 = (bool)(local_res20 ^ 1);
              } while ((longlong)uVar23 < (longlong)iVar4);
              *(int *)&local_90->field_0x10 = (int)uVar17;
              this_00 = local_b8;
              this_01 = local_88;
            }
            pTVar9 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     ::Find(this_00,pTVar7);
            if ((pTVar9 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                            *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar2)();
              return pTVar7;
            }
            if (((*(int *)&pTVar9->field_0x10 == 0) &&
                (pFVar10 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                      (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                                       *(int *)&pTVar7->field_0x8)->field0_0x0,
                (pFVar10->Bits & 1) != 0)) &&
               (bVar3 = FClusterUnionManager::IsClusterUnionParticle(this_01,pTVar7), !bVar3)) {
              DisableCluster(this,param_1);
            }
            break;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this_00->Elements);
        } while (iVar4 != -1);
      }
    }
  }
  pFVar10 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8)->field0_0x0;
  if ((pFVar10->Bits & 1) != 0) {
    pFVar11 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        (*(TGeometryParticlesImp<double,3,0> **)param_1,*(int *)&param_1->field_0x8)
    ;
    iVar4 = pFVar11->Idx;
    FPBDRigidsEvolutionBase::DestroyParticle
              ((FPBDRigidsEvolutionBase *)this->MEvolution,
               (TGeometryParticleHandleImp<double,3,1> *)param_1);
    pFVar1 = this->MEvolution;
    plVar24 = &pFVar1->_padding_;
    local_d0[0] = iVar4;
    if ((((int *)*plVar24 <= local_d0) &&
        (local_d0 < (int *)*plVar24 + *(int *)((longlong)&pFVar1->_padding_ + 4))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (int)pFVar1->_padding_;
    piVar8 = (int *)((longlong)&pFVar1->_padding_ + 4);
    if (iVar4 == *piVar8) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)plVar24,piVar8);
    }
    *(int *)&pFVar1->_padding_ = iVar4 + 1;
    *(int *)(*plVar24 + (longlong)iVar4 * 4) = local_d0[0];
  }
  if (((param_2->bReturnInternalOnly) &&
      (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0)) &&
     (pFVar10 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                           (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                            *(int *)&pTVar7->field_0x8)->field0_0x0, (pFVar10->Bits & 1) == 0)) {
    pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  }
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  ::Remove(&this->TopLevelClusterParents,param_1);
  if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
      *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
    local_80 = param_1;
    TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
              ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                *)&this->TopLevelClusterParentsStrained,local_c0,&local_80);
  }
  return pTVar7;
code_r0x000143c98f1c:
  iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 +
                  *(longlong *)
                   &((TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                      *)this_00)->field_0x0);
  if (iVar4 == -1) goto LAB_143c98ff7;
  goto LAB_143c98f10;
}

// DisableCluster @ 143c99e80

void __thiscall
Chaos::FRigidClustering::DisableCluster
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  ClusterId *pCVar1;
  int *piVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar3;
  uint uVar4;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res10;
  uint uStack_c;
  
  if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
              *)&this->MomentumRestoringDataByParticle,
             (TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    FPBDRigidsEvolutionBase::DisableParticle
              ((FPBDRigidsEvolutionBase *)this->MEvolution,
               (TGeometryParticleHandleImp<double,3,1> *)param_1);
    pTVar3 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)param_1->field_0xc) {
      pTVar3 = param_1;
    }
    if (pTVar3 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Remove(&this->TopLevelClusterParents,pTVar3);
      local_res10 = pTVar3;
      if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
          *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
        uVar4 = ((uint)((ulonglong)pTVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar3 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                  ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                    *)&this->TopLevelClusterParentsStrained,uVar4 >> 0x10 ^ uVar4,&local_res10);
      }
      TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
      ::Remove((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                *)&this->MChildren,pTVar3);
    }
  }
  pCVar1 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)param_1,*(int *)&param_1->field_0x8
                     );
  pCVar1->Id = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  *(ulonglong *)&pCVar1->NumChildren = (ulonglong)uStack_c << 0x20;
  piVar2 = TPBDRigidClusteredParticles<double,3>::ClusterGroupIndex
                     (*(TPBDRigidClusteredParticles<double,3> **)param_1,*(int *)&param_1->field_0x8
                     );
  *piVar2 = 0;
  return;
}

// DisableParticle @ 143c99f80

void __thiscall
Chaos::FRigidClustering::DisableParticle
          (FRigidClustering *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,bool param_2)

{
  uint uVar1;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res10;
  
  if (param_1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
              *)&this->MomentumRestoringDataByParticle,param_1);
    FPBDRigidsEvolutionBase::DisableParticle
              ((FPBDRigidsEvolutionBase *)this->MEvolution,
               (TGeometryParticleHandleImp<double,3,1> *)param_1);
    pTVar2 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)param_1->field_0xc) {
      pTVar2 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_1;
    }
    if (pTVar2 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
      ::Remove(&this->TopLevelClusterParents,pTVar2);
      local_res10 = pTVar2;
      if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
          *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
        uVar1 = ((uint)((ulonglong)pTVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar2 >> 4)) *
                -0x7a143595;
        uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
        TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                  ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                    *)&this->TopLevelClusterParentsStrained,uVar1 >> 0x10 ^ uVar1,&local_res10);
      }
      if (param_2) {
        TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
        ::Remove((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                  *)&this->MChildren,pTVar2);
      }
    }
  }
  return;
}

// FindChildrenWithinRadius @ 143c9aa40

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FRigidClustering::FindChildrenWithinRadius
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,double param_3,bool param_4)

{
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar1 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  pTVar2 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
           &pTVar1->field_0x8;
  if (pTVar1 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar2 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             0x0;
  }
  if (pTVar2 != (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    FindParticlesWithinRadius(__return_storage_ptr__,pTVar2,param_2,param_3,param_4);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindClosestChild @ 143c9aac0

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::FRigidClustering::FindClosestChild
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  TVector<double,3> *pTVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  undefined8 *puVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_res8 [8];
  
  pTVar5 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  }
  if (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    iVar2 = *(int *)&pTVar9->field_0x8;
    puVar8 = *(undefined8 **)pTVar9;
    uVar13 = (undefined4)__real_7fefffffffffffff;
    uVar14 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    puVar1 = puVar8 + iVar2;
    pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    while( true ) {
      if (*(int *)&pTVar9->field_0x8 != iVar2) {
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar8 == puVar1) break;
      pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)*puVar8;
      pTVar6 = TParticles<double,3>::GetX
                         (*(TParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8);
      puVar8 = puVar8 + 1;
      dVar11 = *(double *)&pTVar6->field_0x8 - *(double *)&param_2->field_0x8;
      dVar12 = *(double *)&pTVar6->field_0x10 - *(double *)&param_2->field_0x10;
      dVar11 = (*(double *)pTVar6 - *(double *)param_2) * (*(double *)pTVar6 - *(double *)param_2) +
               dVar11 * dVar11 + dVar12 * dVar12;
      bVar3 = (double)CONCAT44(uVar14,uVar13) == dVar11;
      bVar4 = (double)CONCAT44(uVar14,uVar13) < dVar11;
      if ((double)CONCAT44(uVar14,uVar13) <= dVar11) {
        dVar11 = (double)CONCAT44(uVar14,uVar13);
      }
      if (bVar4 || bVar3) {
        pTVar7 = pTVar10;
      }
      uVar13 = SUB84(dVar11,0);
      uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
      pTVar10 = pTVar7;
    }
    return pTVar10;
  }
  return (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
}

// FindClosestParticle @ 143c9abd0

TPBDRigidParticleHandleImp<double,3,1> * __cdecl
Chaos::FRigidClustering::FindClosestParticle
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,TVector<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  TVector<double,3> *pTVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_res8 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  uVar11 = (undefined4)__real_7fefffffffffffff;
  uVar12 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    pTVar6 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar7;
    pTVar5 = TParticles<double,3>::GetX(*(TParticles<double,3> **)pTVar6,*(int *)&pTVar6->field_0x8)
    ;
    pFVar7 = pFVar7 + 8;
    dVar9 = *(double *)&pTVar5->field_0x8 - *(double *)&param_2->field_0x8;
    dVar10 = *(double *)&pTVar5->field_0x10 - *(double *)&param_2->field_0x10;
    dVar9 = (*(double *)pTVar5 - *(double *)param_2) * (*(double *)pTVar5 - *(double *)param_2) +
            dVar9 * dVar9 + dVar10 * dVar10;
    bVar3 = (double)CONCAT44(uVar12,uVar11) == dVar9;
    bVar4 = (double)CONCAT44(uVar12,uVar11) < dVar9;
    if ((double)CONCAT44(uVar12,uVar11) <= dVar9) {
      dVar9 = (double)CONCAT44(uVar12,uVar11);
    }
    if (bVar4 || bVar3) {
      pTVar6 = pTVar8;
    }
    uVar11 = SUB84(dVar9,0);
    uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
    pTVar8 = pTVar6;
  }
  return pTVar8;
}

// FindIslandsInChildren @ 143c9aca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
* __thiscall
Chaos::FRigidClustering::FindIslandsInChildren
          (FRigidClustering *this,
          TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  ulonglong uVar10;
  ClusterId *pCVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong *puVar18;
  TConnectivityEdge<double> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ForElementType<unsigned_int> FVar23;
  FScriptContainerElement *pFVar24;
  TConnectivityEdge<double> *pTVar25;
  int *piVar26;
  longlong *plVar27;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158;
  char local_157;
  undefined1 local_156 [6];
  ForAnyElementType local_150;
  undefined8 local_148;
  TPBDRigidParticleHandleImp<double,3,1> *local_140;
  TPBDRigidParticleHandleImp<double,3,1> *local_138;
  uint local_130;
  uint local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  ulonglong *local_100;
  undefined4 local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  FScriptContainerElement *local_e8;
  TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_e0;
  int *local_d8;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *local_d0;
  ulonglong *local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_157 = param_2;
  local_e0 = __return_storage_ptr__;
  pTVar8 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  local_d0 = pTVar8;
  if ((pTVar8 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                  *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar3)();
    return pTVar9;
  }
  uVar14 = 0;
  local_6c = 0x80;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar26 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar26 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar17 = *(uint *)&pTVar8->field_0x10;
  local_d8 = piVar26;
  local_b8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_b8.Array._4_4_,local_b8.Array._0_4_);
  if (uVar17 == 0) goto LAB_143c9afa0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar16 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_f8 = (undefined4)lVar2;
    uVar17 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((local_50 != 0) &&
     (local_b8.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(local_b8.Array._4_4_,local_b8.Array._0_4_), (int)uVar17 <= (int)local_50))
  goto LAB_143c9afa0;
  local_50 = uVar17;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar17 != 0) {
    uVar20 = uVar17;
    if (uVar17 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar20 = 0;
        goto LAB_143c9addb;
      }
    }
    else {
LAB_143c9addb:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar20,4);
    }
    if (0 < (int)uVar17) {
      uVar21 = (ulonglong)uVar17;
      uVar16 = uVar14;
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar10 = uVar16 & (longlong)(int)uVar17 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  local_b8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_b8.Array._4_4_,local_b8.Array._0_4_);
  if (local_50 != 0) {
    pTStack_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_128 = 0;
    uStack_124 = 1;
    uStack_114 = 0;
    uStack_110 = 0;
    if (local_70 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar17 = *(uint *)FVar23;
      uVar16 = uVar14;
      while (uVar17 == 0) {
        uStack_110 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_110;
        iVar6 = (int)uVar14;
        local_128 = iVar6 + 1;
        uVar14 = (ulonglong)local_128;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < (int)local_128)
        goto LAB_143c9aede;
        uVar17 = ((uint *)((longlong)FVar23 + 4))[iVar6];
      }
      uStack_124 = -uVar17 & uVar17;
      uVar14 = (ulonglong)uStack_124 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_f4 = (int)lVar2;
      uStack_114 = local_f4 + -1 + uStack_110;
      uVar14 = (ulonglong)uStack_114;
      if ((int)local_70 < (int)uStack_114) {
LAB_143c9aede:
        uVar14 = (ulonglong)local_70;
        uStack_114 = local_70;
      }
    }
    local_118 = 0xffffffff;
    local_c0 = (longlong *)local_98;
    local_b8.CurrentBitIndex = uStack_114;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_10c;
    local_b8.BaseBitIndex = uStack_110;
    local_b8._padding_._0_4_ = local_128;
    local_b8._padding_._4_4_ = uStack_124;
    local_b8.Array = pTStack_120;
    if ((int)uVar14 < (int)local_70) {
      do {
        puVar22 = (ulonglong *)((longlong)(int)uVar14 * 0x10 + *local_c0);
        uVar17 = ((uint)(*puVar22 >> 0x14) & 0xffff ^ (uint)(*puVar22 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_50 - 1;
        *(uint *)((longlong)puVar22 + 0xc) = uVar17;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar13.Data + uVar16 * 4);
        *(int *)(FVar13.Data + uVar16 * 4) = (int)uVar14;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar14 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_143c9afa0:
  local_130 = *(uint *)&pTVar8->field_0x10;
  uVar14 = (ulonglong)(int)local_130;
  puVar18 = *(ulonglong **)&pTVar8->field_0x8;
  puVar22 = puVar18 + uVar14;
  local_c8 = puVar22;
  do {
    local_100 = puVar18;
    if (*(int *)&pTVar8->field_0x10 != (int)uVar14) {
      local_158 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_158);
    }
    if (puVar18 == puVar22) {
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return __return_storage_ptr__;
    }
    local_108 = *puVar18;
    uVar17 = ((uint)(local_108 >> 0x14) & 0xffff ^ (uint)(local_108 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (local_98._8_4_ != local_64) {
      FVar13.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_58.Data;
      }
      for (iVar6 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & (uVar17 >> 0x10 ^ uVar17)) * 4)
          ; iVar6 != -1; iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
        if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) == local_108)
        goto LAB_143c9b523;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar26) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar26);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar24 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(FScriptContainerElement **)&pFVar24->field_0x0 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)&pFVar24[8].field_0x0 = (FScriptContainerElement *)0x0;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = 0;
    local_e8 = pFVar24;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_150,(int *)((longlong)&local_148 + 4));
    local_148 = CONCAT44(local_148._4_4_,iVar6 + 1);
    *(ulonglong *)(local_150.Data + (longlong)iVar6 * 8) = local_108;
    TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
              ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)local_f0,(bool *)&local_108);
    while ((int)local_148 != 0) {
      iVar6 = (int)local_148;
      if ((int)local_148 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar3)();
          return pTVar9;
        }
        iVar6 = (int)local_148;
      }
      iVar1 = iVar6 + -1;
      pTVar15 = *(TPBDRigidParticleHandleImp<double,3,1> **)(local_150.Data + (longlong)iVar1 * 8);
      iVar7 = (iVar6 - iVar1) + -1;
      if (iVar7 != 0) {
        memmove(local_150.Data + (longlong)iVar1 * 8,local_150.Data + (longlong)iVar1 * 8 + 8,
                (longlong)iVar7 << 3);
        iVar6 = (int)local_148;
      }
      local_148 = CONCAT44(local_148._4_4_,iVar6 + -1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_150,iVar6 + -1,(int *)((longlong)&local_148 + 4));
      local_138 = pTVar15;
      if (pTVar15 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        if ((*(FScriptContainerElement **)&pFVar24->field_0x0 <=
             (FScriptContainerElement *)&local_138) &&
           ((FScriptContainerElement *)&local_138 <
            *(FScriptContainerElement **)&pFVar24->field_0x0 + (longlong)*(int *)(pFVar24 + 0xc) * 8
           )) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
        }
        iVar6 = *(int *)&pFVar24[8].field_0x0;
        if (iVar6 == *(int *)(pFVar24 + 0xc)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
        }
        *(int *)&pFVar24[8].field_0x0 = iVar6 + 1;
        *(TPBDRigidParticleHandleImp<double,3,1> **)
         (*(FScriptContainerElement **)&pFVar24->field_0x0 + (longlong)iVar6 * 8) = local_138;
        pTVar15 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)local_138->field_0xc) {
          pTVar15 = local_138;
        }
        uVar17 = *(uint *)&pTVar15->field_0x8;
        lVar2 = *(longlong *)pTVar15;
        uVar20 = 0;
        if ((int)uVar17 < *(int *)(lVar2 + 0x688)) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
        }
        cVar4 = local_157;
        plVar27 = (longlong *)((longlong)(int)uVar17 * 0x10 + *(longlong *)(lVar2 + 0x680));
        lVar2 = plVar27[1];
        pTVar19 = (TConnectivityEdge<double> *)*plVar27;
        pTVar25 = pTVar19 + (int)lVar2;
LAB_143c9b2b7:
        if ((int)plVar27[1] != (int)lVar2) {
          local_156[0] = 0;
          `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_156);
        }
        pFVar24 = local_e8;
        if (pTVar19 != pTVar25) {
          local_140 = pTVar19->Sibling;
          bVar5 = IsInterclusterEdge<double>(local_138,pTVar19);
          if (bVar5) {
            if ((cVar4 == '\0') || (local_140 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0))
            goto LAB_143c9b4e5;
            do {
              pTVar15 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)local_140->field_0xc) {
                pTVar15 = local_140;
              }
              if (pTVar15 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143c9b38d:
                local_140 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                pTVar19 = pTVar19 + 1;
                goto LAB_143c9b2b7;
              }
              pCVar11 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar15,
                                   *(int *)&pTVar15->field_0x8);
              if (pCVar11->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              }
              else {
                pCVar11 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                    (*(TPBDRigidClusteredParticles<double,3> **)pTVar15,
                                     *(int *)&pTVar15->field_0x8);
                pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                if (2 < (byte)pCVar11->Id->field_0xc) {
                  pTVar12 = pCVar11->Id;
                }
              }
              if (pTVar12 == (TPBDRigidParticleHandleImp<double,3,1> *)param_1) goto LAB_143c9b39f;
              pCVar11 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar15,
                                   *(int *)&pTVar15->field_0x8);
              if (pCVar11->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143c9b38d;
              pCVar11 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar15,
                                   *(int *)&pTVar15->field_0x8);
              local_140 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)pCVar11->Id->field_0xc) {
                local_140 = pCVar11->Id;
              }
            } while (local_140 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0);
            pTVar19 = pTVar19 + 1;
          }
          else {
LAB_143c9b39f:
            if (local_140 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              uVar17 = ((uint)((ulonglong)local_140 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_140 >> 4)) * -0x7a143595;
              uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
              if (local_98._8_4_ != local_64) {
                FVar13.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar13.Data = local_58.Data;
                }
                for (iVar6 = *(int *)(FVar13.Data +
                                     (ulonglong)(local_50 - 1 & (uVar17 >> 0x10 ^ uVar17)) * 4);
                    iVar6 != -1; iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
                  if (*(TPBDRigidParticleHandleImp<double,3,1> **)
                       (local_98._0_8_ + (longlong)iVar6 * 0x10) == local_140) goto LAB_143c9b4e5;
                }
              }
              if ((local_150.Data <= (FScriptContainerElement *)&local_140) &&
                 ((FScriptContainerElement *)&local_140 <
                  local_150.Data + (longlong)local_148._4_4_ * 8)) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                            *)(*pcVar3)();
                  return pTVar9;
                }
              }
              iVar6 = (int)local_148;
              if ((int)local_148 == local_148._4_4_) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_150,(int *)((longlong)&local_148 + 4));
              }
              local_148 = CONCAT44(local_148._4_4_,iVar6 + 1);
              *(TPBDRigidParticleHandleImp<double,3,1> **)(local_150.Data + (longlong)iVar6 * 8) =
                   local_140;
              TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                        ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                          *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)(local_f0 + 4),
                         (bool *)&local_140);
            }
LAB_143c9b4e5:
            pTVar19 = pTVar19 + 1;
          }
          goto LAB_143c9b2b7;
        }
      }
      puVar18 = local_100;
      __return_storage_ptr__ = local_e0;
      puVar22 = local_c8;
      piVar26 = local_d8;
      pTVar8 = local_d0;
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
LAB_143c9b523:
    uVar14 = (ulonglong)local_130;
    puVar18 = puVar18 + 1;
  } while( true );
}

// FindParticlesWithinRadius @ 143c9b590

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::FRigidClustering::FindParticlesWithinRadius
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,TVector<double,3> *param_2,double param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TVector<double,3> *pTVar9;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  undefined8 *local_68;
  undefined8 *local_60 [7];
  
  bVar6 = param_4;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  dVar4 = __real_7fefffffffffffff;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_68 = (undefined8 *)0x0;
  pFVar2 = pFVar11 + (longlong)iVar8 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      param_4 = false;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (pFVar11 == pFVar2) break;
    local_60[0] = *(undefined8 **)pFVar11;
    pTVar9 = TParticles<double,3>::GetX
                       ((TParticles<double,3> *)*local_60[0],*(int *)(local_60[0] + 1));
    dVar12 = *(double *)&pTVar9->field_0x8 - *(double *)&param_2->field_0x8;
    dVar13 = *(double *)&pTVar9->field_0x10 - *(double *)&param_2->field_0x10;
    dVar12 = (*(double *)pTVar9 - *(double *)param_2) * (*(double *)pTVar9 - *(double *)param_2) +
             dVar12 * dVar12 + dVar13 * dVar13;
    if (dVar12 <= param_3 * param_3) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)local_60) &&
         ((FScriptContainerElement *)local_60 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_60[0];
    }
    if ((bVar6) && (dVar12 < dVar4)) {
      local_68 = local_60[0];
      dVar4 = dVar12;
    }
    pFVar11 = pFVar11 + 8;
  }
  if (((bVar6) && (local_68 != (undefined8 *)0x0)) && (__return_storage_ptr__->ArrayNum == 0)) {
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_68;
  }
  return __return_storage_ptr__;
}

// FixConnectivityGraphUsingDelaunayTriangulation @ 143c9b840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,FClusterCreationParameters *param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  undefined8 uVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  LinkCandidate *pLVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<Chaos::FStat_STAT_FixConnectivityGraphUsingDelaunayTriangulation> FVar16;
  TVector<double,3> *pTVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar20;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar21;
  UnionFindInfo *pUVar22;
  UnionFindInfo *pUVar23;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar24;
  int iVar25;
  ForAnyElementType FVar26;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar27;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar32;
  FRigidClustering *pFVar33;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar34;
  uint uVar35;
  uint *puVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ForElementType<unsigned_int> FVar39;
  longlong lVar40;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  uint *puVar44;
  undefined1 auStackY_288 [32];
  uint local_224;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_220;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  FIdentityFunctor local_214 [4];
  ForAnyElementType local_210;
  uint local_208;
  uint uStack_204;
  uint local_200;
  FRigidClustering *local_1f8;
  ForAnyElementType local_1f0;
  int local_1e8 [2];
  longlong local_1e0;
  TPBDRigidParticleHandleImp<double,3,1> *local_1d8;
  FName local_1d0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_1b8;
  FColor_u_0 local_1b0;
  uint local_1ac;
  LinkCandidate *local_1a8;
  uint *local_1a0;
  uint local_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined4 local_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_178;
  FName local_170;
  TPBDRigidParticleHandleImp<double,3,1> *local_168;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_160;
  FName local_158;
  LinkCandidate local_148;
  undefined4 local_130;
  TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,_protected:_void___cdecl_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_const_&,Chaos::FClusterCreationParameters_const_&,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_const_*)_::_2_::UnionFindInfo_&&>
  local_12c;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TArrayView<UE::Math::TVector<double>_const_,int> local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  FName local_c0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b8;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar19 = 0;
  local_160 = param_4;
  FVar16 = StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation;
  local_1f8 = this;
  local_1b8 = param_1;
  local_178 = param_3;
  if (StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_FixConnectivityGraphUsingDelaunayTriangulation>)0x0)
  {
    pFVar15 = ::FName::FName(&local_c0,"STAT_FixConnectivityGraphUsingDelaunayTriangulation");
    FVar16 = (FThreadSafeStaticStat<Chaos::FStat_STAT_FixConnectivityGraphUsingDelaunayTriangulation>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FixConnectivityGraphUsingDelaunayTriangulation,*pFVar15,
                          L"TPBDRigidClustering<>::FixConnectivityGraphUsingDelaunayTriangulation",
                          "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar16;
  bVar10 = false;
  bVar11 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar2.ComparisonIndex.Value.Value == 0) && (FVar2.Number == 0)) {
LAB_143c9b9ba:
    bVar11 = bVar14;
    bVar10 = bVar13;
    bVar13 = false;
    local_1d0 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b0._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_170.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0xaf8);
        bVar10 = true;
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c9b9ba;
    local_1d0 = FVar2;
    FThreadStats::AddMessage(FVar2,CycleScopeStart);
    bVar13 = true;
  }
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_1->ArrayNum,&local_1f0,local_1e8,local_1e8 + 1);
  iVar25 = param_1->ArrayNum;
  uVar37 = uVar19;
  uVar38 = uVar19;
  if (0 < iVar25) {
    do {
      uVar35 = (uint)uVar19;
      uVar29 = 0;
      if ((int)uVar35 < iVar25) {
        uVar29 = ~uVar35 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar43 = *(undefined8 **)((param_1->AllocatorInstance).Data + uVar38);
      pTVar17 = TParticles<double,3>::GetX((TParticles<double,3> *)*puVar43,*(int *)(puVar43 + 1));
      uVar8 = *(undefined8 *)pTVar17;
      uVar9 = *(undefined8 *)&pTVar17->field_0x8;
      uVar1 = *(undefined8 *)&pTVar17->field_0x10;
      uVar29 = 0;
      if ((int)uVar35 < local_1e8[0]) {
        uVar29 = ~uVar35 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = (ulonglong)(uVar35 + 1);
      *(undefined8 *)(local_1f0.Data + uVar37) = uVar8;
      *(undefined8 *)(local_1f0.Data + uVar37 + 8) = uVar9;
      *(undefined8 *)(local_1f0.Data + uVar37 + 0x10) = uVar1;
      iVar25 = param_1->ArrayNum;
      uVar37 = uVar37 + 0x18;
      uVar38 = uVar38 + 8;
    } while ((int)(uVar35 + 1) < iVar25);
  }
  uVar19 = 0;
  iVar25 = local_1e8[0];
  local_f0.DataPtr = (TVector<double> *)local_1f0.Data;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  if ((local_1e8[0] < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_f0.ArrayNum = iVar25;
  VoronoiNeighbors(&local_f0,&local_1c8,true,__real_3f1a36e2e0000000);
  uVar29 = param_1->ArrayNum;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.AllocationFlags.NumBits = 0;
  local_b8.AllocationFlags.MaxBits = 0x80;
  local_b8.FirstFreeIndex = -1;
  local_b8.NumFreeIndices = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (uVar29 == 0) goto LAB_143c9be38;
  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_b8,uVar29);
  if (uVar29 < 4) {
    uVar29 = 1;
  }
  else {
    uVar37 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_130 = (undefined4)lVar40;
    uVar29 = 1 << ((byte)lVar40 & 0x1f);
  }
  if ((local_70 != 0) && ((int)uVar29 <= (int)local_70)) goto LAB_143c9be38;
  local_70 = uVar29;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar29 != 0) {
    uVar35 = uVar29;
    if (uVar29 < 2) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar35 = 0;
        goto LAB_143c9bc3e;
      }
    }
    else {
LAB_143c9bc3e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar35,4);
    }
    if (0 < (int)uVar29) {
      uVar38 = (ulonglong)uVar29;
      uVar37 = uVar19;
      do {
        FVar26.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar26.Data = local_78.Data;
        }
        uVar18 = uVar37 & (longlong)(int)uVar29 - 1U;
        uVar37 = uVar37 + 1;
        *(undefined4 *)(FVar26.Data + uVar18 * 4) = 0xffffffff;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
  }
  if (local_70 != 0) {
    pTStack_190 = &local_b8.AllocationFlags;
    local_198 = 0;
    uStack_194 = 1;
    uStack_184 = 0;
    uStack_180 = 0;
    uVar37 = uVar19;
    if (local_b8.AllocationFlags.NumBits != 0) {
      FVar39 = (ForElementType<unsigned_int>)&local_b8.AllocationFlags;
      if (local_b8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar39 = local_b8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar29 = *(uint *)FVar39;
      uVar38 = uVar19;
      while (uVar29 == 0) {
        uStack_180 = (int)uVar38 + 0x20;
        uVar38 = (ulonglong)uStack_180;
        iVar25 = (int)uVar37;
        local_198 = iVar25 + 1;
        uVar37 = (ulonglong)local_198;
        if ((int)((local_b8.AllocationFlags.NumBits - 1U) +
                 ((int)(local_b8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_198) goto LAB_143c9bd5d;
        uVar29 = *(uint *)((uchar *)((longlong)FVar39 + 4) + (longlong)iVar25 * 4);
      }
      uStack_194 = -uVar29 & uVar29;
      uVar37 = (ulonglong)uStack_194 * 2 + 1;
      lVar40 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      local_12c.Value._4_4_ = (int)lVar40;
      uStack_184 = local_12c.Value._4_4_ + -1 + uStack_180;
      uVar37 = (ulonglong)uStack_184;
      if (local_b8.AllocationFlags.NumBits < (int)uStack_184) {
LAB_143c9bd5d:
        uVar37 = (ulonglong)(uint)local_b8.AllocationFlags.NumBits;
        uStack_184 = local_b8.AllocationFlags.NumBits;
      }
    }
    local_188 = 0xffffffff;
    local_118 = &local_b8;
    local_110._padding_ = CONCAT44(uStack_194,local_198);
    local_110.CurrentBitIndex = uStack_184;
    local_110.UnvisitedBitMask = 0xffffffff;
    local_110._28_4_ = uStack_17c;
    local_110.BaseBitIndex = uStack_180;
    local_110.Array = pTStack_190;
    if ((int)uVar37 < local_b8.AllocationFlags.NumBits) {
      do {
        pFVar3 = (local_118->Data).AllocatorInstance.Data;
        lVar40 = (longlong)(int)uVar37 * 0x20;
        uVar29 = ((uint)(*(ulonglong *)(pFVar3 + lVar40) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(pFVar3 + lVar40) >> 4)) * -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        uVar29 = (uVar29 >> 0x10 ^ uVar29) & local_70 - 1;
        *(uint *)(pFVar3 + lVar40 + 0x1c) = uVar29;
        FVar26.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar26.Data = local_78.Data;
        }
        uVar38 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar29;
        *(undefined4 *)(pFVar3 + lVar40 + 0x18) = *(undefined4 *)(FVar26.Data + uVar38 * 4);
        *(int *)(FVar26.Data + uVar38 * 4) = (int)uVar37;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
        uVar37 = (ulonglong)(uint)local_110.CurrentBitIndex;
      } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
    }
  }
LAB_143c9be38:
  pFVar30 = (param_1->AllocatorInstance).Data;
  iVar25 = param_1->ArrayNum;
  pFVar3 = pFVar30 + (longlong)iVar25 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar25) {
      local_218 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_218);
    }
    if (pFVar30 == pFVar3) break;
    local_12c._4_8_ = *(undefined8 *)pFVar30;
    local_d0 = (undefined8 *)((longlong)&local_12c.Key + 4);
    local_d8 = 1;
    local_c8 = &local_e0;
    local_e0 = local_12c._4_8_;
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::UnionFindInfo_&&>_>
              (&local_b8,&local_12c,(bool *)&local_d0);
    pFVar30 = pFVar30 + 8;
  }
  iVar25 = param_1->ArrayNum;
  local_220 = &local_b8;
  local_224 = 0;
  if (0 < iVar25) {
    local_1e0 = 0;
    do {
      lVar40 = local_1e0;
      uVar29 = 0;
      if ((int)(uint)uVar19 < iVar25) {
        uVar29 = ~(uint)uVar19 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar32 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 ((param_1->AllocatorInstance).Data + lVar40);
      pTVar21 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pTVar32->field_0xc) {
        pTVar21 = pTVar32;
      }
      uVar29 = *(uint *)&pTVar21->field_0x8;
      lVar31 = (longlong)(int)uVar29;
      lVar40 = *(longlong *)pTVar21;
      uVar35 = 0;
      if ((int)uVar29 < *(int *)(lVar40 + 0x688)) {
        uVar35 = ~uVar29 >> 0x1f;
      }
      local_1d8 = pTVar32;
      if ((uVar35 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar40 = *(longlong *)(lVar40 + 0x680);
      local_200 = *(uint *)(lVar40 + 8 + lVar31 * 0x10);
      uVar19 = (ulonglong)(int)local_200;
      puVar43 = *(undefined8 **)(lVar40 + lVar31 * 0x10);
      puVar42 = puVar43 + uVar19 * 2;
      while( true ) {
        if (*(int *)(lVar40 + 8 + lVar31 * 0x10) != (int)uVar19) {
          local_217 = 0;
          `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_217);
        }
        if (puVar43 == puVar42) break;
        pTVar21 = (TPBDRigidParticleHandleImp<double,3,1> *)*puVar43;
        uVar29 = ((uint)((ulonglong)pTVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar21 >> 4)) *
                 -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        if (local_b8.Data.ArrayNum == local_b8.NumFreeIndices) {
LAB_143c9c11f:
          uVar19 = (ulonglong)local_200;
          puVar43 = puVar43 + 2;
        }
        else {
          FVar26.Data = local_80;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FVar26.Data = local_78.Data;
          }
          iVar25 = *(int *)(FVar26.Data + (ulonglong)(local_70 - 1 & (uVar29 >> 0x10 ^ uVar29)) * 4)
          ;
          if (iVar25 == -1) goto LAB_143c9c11f;
          do {
            if (*(TPBDRigidParticleHandleImp<double,3,1> **)
                 (local_b8.Data.AllocatorInstance.Data + (longlong)iVar25 * 0x20) == pTVar21) {
              pTVar20 = `Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::
                        __l2::<lambda_1>::operator()(&local_220,pTVar32);
              pTVar21 = `Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::
                        __l2::<lambda_1>::operator()(&local_220,pTVar21);
              pTVar32 = local_1d8;
              if (pTVar20 != pTVar21) {
                pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_b8,pTVar21);
                pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_b8,pTVar20);
                pTVar32 = pTVar20;
                if (pUVar22->Size < pUVar23->Size) {
                  pTVar32 = pTVar21;
                  pTVar21 = pTVar20;
                }
                pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_b8,pTVar32);
                pUVar22->GroupId = pTVar21;
                pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_b8,pTVar32);
                iVar25 = pUVar22->Size;
                pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_b8,pTVar21);
                pUVar22->Size = pUVar22->Size + iVar25;
                pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                          ::FindChecked(&local_b8,pTVar32);
                pUVar22->Size = 0;
                pTVar32 = local_1d8;
              }
              goto LAB_143c9c11f;
            }
            iVar25 = *(int *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar25 * 0x20 + 0x18)
            ;
          } while (iVar25 != -1);
          uVar19 = (ulonglong)local_200;
          puVar43 = puVar43 + 2;
        }
      }
      local_224 = local_224 + 1;
      uVar19 = (ulonglong)local_224;
      local_1e0 = local_1e0 + 8;
      iVar25 = local_1b8->ArrayNum;
      this = local_1f8;
      param_1 = local_1b8;
    } while ((int)local_224 < iVar25);
  }
  this_00 = local_220;
  uVar19 = local_1c8._8_8_ & 0xffffffff;
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = 0;
  uStack_204 = 0;
  if (local_1c8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar19);
  }
  if (0 < local_1c8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_1c8.ArrayNum,&local_210,0,(int *)&uStack_204);
    uVar19 = local_1c8._8_8_ & 0xffffffff;
  }
  dVar7 = this->MClusterConnectionFactor * __real_410e848000000000;
  local_224 = 0;
  if (0 < (int)uVar19) {
    local_1e0 = 0;
    local_1f8 = (FRigidClustering *)0x0;
    local_1d8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    pTVar41 = local_1b8;
    do {
      lVar40 = local_1e0;
      pFVar33 = local_1f8;
      uVar35 = ~local_224 >> 0x1f;
      uVar29 = 0;
      if ((int)local_224 < pTVar41->ArrayNum) {
        uVar29 = uVar35;
      }
      iVar25 = (int)uVar19;
      local_200 = uVar35;
      if (uVar29 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar25 = local_1c8.ArrayNum;
      }
      pTVar32 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 ((pTVar41->AllocatorInstance).Data + lVar40 * 8);
      uVar29 = 0;
      if ((int)local_224 < iVar25) {
        uVar29 = uVar35;
      }
      local_168 = pTVar32;
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1a8 = (LinkCandidate *)local_1c8.AllocatorInstance.Data;
      local_1ac = *(uint *)(local_1c8.AllocatorInstance.Data + (longlong)pFVar33 + 8);
      uVar19 = (ulonglong)(int)local_1ac;
      puVar36 = *(uint **)(local_1c8.AllocatorInstance.Data + (longlong)pFVar33);
      puVar44 = puVar36 + uVar19;
      local_1a0 = puVar44;
      while( true ) {
        if (*(int *)((longlong)&local_1a8->B + (longlong)pFVar33) != (int)uVar19) {
          local_216 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_216);
        }
        if (puVar36 == puVar44) break;
        uVar29 = *puVar36;
        lVar40 = (longlong)(int)uVar29;
        if ((int)local_224 <= (int)uVar29) {
          uVar35 = 0;
          if ((int)uVar29 < pTVar41->ArrayNum) {
            uVar35 = ~uVar29 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar21 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                     ((pTVar41->AllocatorInstance).Data + lVar40 * 8);
          uVar35 = 0;
          if ((int)uVar29 < local_1e8[0]) {
            uVar35 = ~uVar29 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar26.Data = local_1f0.Data;
          uVar29 = 0;
          if ((int)local_224 < local_1e8[0]) {
            uVar29 = local_200;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar6 = *(double *)(FVar26.Data + lVar40 * 0x18 + 8) -
                  *(double *)(&local_1d8->field_0x8 + (longlong)local_1f0.Data);
          dVar5 = *(double *)(FVar26.Data + lVar40 * 0x18 + 0x10) -
                  *(double *)(&local_1d8->field_0x10 + (longlong)local_1f0.Data);
          dVar5 = dVar6 * dVar6 +
                  (*(double *)(FVar26.Data + lVar40 * 0x18) -
                  *(double *)(local_1f0.Data + (longlong)&local_1d8->field_0x0)) *
                  (*(double *)(FVar26.Data + lVar40 * 0x18) -
                  *(double *)(local_1f0.Data + (longlong)&local_1d8->field_0x0)) + dVar5 * dVar5;
          if (dVar7 <= dVar5) {
            pTVar20 = pTVar32;
            pTVar24 = pTVar32;
            if (pTVar32 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              iVar25 = 0;
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(this_00,pTVar32);
              if (pUVar22->GroupId != pTVar32) {
                do {
                  if ((9 < iVar25) &&
                     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<5292282805487668000>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                          ,0xb20,"findIters++ < 10"), bVar14)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this_00,pTVar32);
                  pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this_00,pUVar22->GroupId);
                  pUVar22->GroupId = pUVar23->GroupId;
                  pTVar32 = pUVar23->GroupId;
                  pTVar20 = local_168;
                  pTVar24 = pTVar32;
                } while ((pTVar32 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                        (pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                                   ::FindChecked(this_00,pTVar32), pTVar20 = local_168,
                        iVar25 = iVar25 + 1, pUVar22->GroupId != pTVar32));
              }
            }
            pTVar34 = pTVar21;
            pTVar32 = pTVar20;
            if (pTVar21 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              iVar25 = 0;
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(this_00,pTVar21);
              if (pUVar22->GroupId != pTVar21) {
                do {
                  if ((9 < iVar25) &&
                     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<5292282805487668000>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                          ,0xb20,"findIters++ < 10"), bVar14)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this_00,pTVar34);
                  pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                            ::FindChecked(this_00,pUVar22->GroupId);
                  pUVar22->GroupId = pUVar23->GroupId;
                  pTVar34 = pUVar23->GroupId;
                  pTVar32 = local_168;
                } while ((pTVar34 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                        (pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                                   ::FindChecked(this_00,pTVar34), pTVar32 = local_168,
                        iVar25 = iVar25 + 1, pUVar22->GroupId != pTVar34));
              }
            }
            pTVar41 = local_1b8;
            puVar44 = local_1a0;
            if (pTVar24 != pTVar34) {
              local_148.A = pTVar32;
              local_148.B = pTVar21;
              local_148.DistSq = dVar5;
              if (((local_210.Data <= &local_148) &&
                  (&local_148 < (LinkCandidate *)(local_210.Data + (longlong)(int)uStack_204 * 0x18)
                  )) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_208 == uStack_204) {
                local_208 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x818,&local_210,(int *)&uStack_204);
              }
              lVar40 = (longlong)(int)local_208;
              local_208 = local_208 + 1;
              *(TPBDRigidParticleHandleImp<double,3,1> **)&local_210.Data[lVar40 * 0x18].field_0x0 =
                   local_148.A;
              *(TPBDRigidParticleHandleImp<double,3,1> **)(local_210.Data + lVar40 * 0x18 + 8) =
                   local_148.B;
              *(double *)(local_210.Data + lVar40 * 0x18 + 0x10) = local_148.DistSq;
              pTVar41 = local_1b8;
              puVar44 = local_1a0;
            }
          }
          else {
            pTVar24 = `Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::
                      __l2::<lambda_1>::operator()(&local_220,pTVar32);
            pTVar20 = `Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::
                      __l2::<lambda_1>::operator()(&local_220,pTVar21);
            if (pTVar24 != pTVar20) {
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_b8,pTVar20);
              pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_b8,pTVar24);
              pTVar34 = pTVar24;
              if (pUVar22->Size < pUVar23->Size) {
                pTVar34 = pTVar20;
                pTVar20 = pTVar24;
              }
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_b8,pTVar34);
              pUVar22->GroupId = pTVar20;
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_b8,pTVar34);
              iVar25 = pUVar22->Size;
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_b8,pTVar20);
              pUVar22->Size = pUVar22->Size + iVar25;
              pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                        ::FindChecked(&local_b8,pTVar34);
              pUVar22->Size = 0;
            }
            if ((pTVar32 == pTVar21) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Child1 != Child2",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                    ,0xa92,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar28 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar21->field_0xc) {
              pTVar28 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar21;
            }
            pTVar27 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar32->field_0xc) {
              pTVar27 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar32;
            }
            ConnectClusteredNodes(pTVar27,pTVar28,local_178,local_160);
            pTVar41 = local_1b8;
            puVar44 = local_1a0;
          }
        }
        puVar36 = puVar36 + 1;
        uVar19 = (ulonglong)local_1ac;
        pFVar33 = local_1f8;
      }
      local_224 = local_224 + 1;
      local_1d8 = local_1d8 + 1;
      local_1e0 = local_1e0 + 1;
      uVar19 = local_1c8._8_8_ & 0xffffffff;
      local_1f8 = (FRigidClustering *)((longlong)pFVar33 + 0x10);
    } while ((int)local_224 < local_1c8.ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,int,FIdentityFunctor,TDereferenceWrapper<_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::LinkCandidate,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::<lambda_3>_>_>
            ((LinkCandidate *)local_210.Data,local_208,local_214[0],(<lambda_3> *)local_214);
  uVar29 = local_208;
  uVar19 = (ulonglong)(int)local_208;
  local_1a8 = (LinkCandidate *)(local_210.Data + uVar19 * 0x18);
  FVar26.Data = local_210.Data;
  while( true ) {
    while( true ) {
      pLVar12 = local_1a8;
      iVar25 = 0;
      local_1f8 = (FRigidClustering *)FVar26.Data;
      if (local_208 != (uint)uVar19) {
        local_215 = 0;
        `TCheckedPointerIterator<`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::LinkCandidate,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_215);
      }
      FVar2 = local_1d0;
      if ((LinkCandidate *)FVar26.Data == pLVar12) {
        if ((LinkCandidate *)local_210.Data != (LinkCandidate *)0x0) {
          FMemory::Free(local_210.Data);
        }
        local_70 = 0;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,_Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation_::__l2::UnionFindInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1c8.AllocatorInstance.Data,
                   local_1c8.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1c8.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        if (local_1f0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data);
        }
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar13) {
          FThreadStats::AddMessage(FVar2,CycleScopeEnd);
        }
        return;
      }
      pTVar32 = ((LinkCandidate *)FVar26.Data)->B;
      pTVar21 = ((LinkCandidate *)FVar26.Data)->A;
      pTVar20 = pTVar32;
      if ((pTVar32 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         (pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this_00,pTVar32), pUVar22->GroupId != pTVar32)) {
        do {
          if ((9 < iVar25) &&
             (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5292282805487668000>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                  ,0xb20,"findIters++ < 10"), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this_00,pTVar20);
          pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                    ::FindChecked(this_00,pUVar22->GroupId);
          pUVar22->GroupId = pUVar23->GroupId;
          pTVar20 = pUVar23->GroupId;
        } while ((pTVar20 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                (pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                           ::FindChecked(this_00,pTVar20), iVar25 = iVar25 + 1,
                pUVar22->GroupId != pTVar20));
        uVar19 = (ulonglong)uVar29;
      }
      pTVar24 = pTVar21;
      if (pTVar21 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        iVar25 = 0;
        pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                  ::FindChecked(this_00,pTVar21);
        if (pUVar22->GroupId != pTVar21) {
          do {
            if ((9 < iVar25) &&
               (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<5292282805487668000>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                    ,0xb20,"findIters++ < 10"), bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                      ::FindChecked(this_00,pTVar24);
            pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                      ::FindChecked(this_00,pUVar22->GroupId);
            pUVar22->GroupId = pUVar23->GroupId;
            pTVar24 = pUVar23->GroupId;
          } while ((pTVar24 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                  (pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                             ::FindChecked(this_00,pTVar24), iVar25 = iVar25 + 1,
                  pUVar22->GroupId != pTVar24));
          uVar19 = (ulonglong)uVar29;
        }
      }
      if (pTVar24 != pTVar20) break;
      FVar26.Data = (FScriptContainerElement *)((longlong)local_1f8 + 0x18);
    }
    pTVar24 = `Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::
              <lambda_1>::operator()(&local_220,pTVar21);
    pTVar20 = `Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::
              <lambda_1>::operator()(&local_220,pTVar32);
    if (pTVar24 != pTVar20) {
      pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(&local_b8,pTVar20);
      pUVar23 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(&local_b8,pTVar24);
      pTVar34 = pTVar24;
      if (pUVar22->Size < pUVar23->Size) {
        pTVar34 = pTVar20;
        pTVar20 = pTVar24;
      }
      pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(&local_b8,pTVar34);
      pUVar22->GroupId = pTVar20;
      pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(&local_b8,pTVar34);
      iVar25 = pUVar22->Size;
      pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(&local_b8,pTVar20);
      pUVar22->Size = pUVar22->Size + iVar25;
      pUVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,`Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation'::__l2::UnionFindInfo,0>_>
                ::FindChecked(&local_b8,pTVar34);
      pUVar22->Size = 0;
    }
    if ((pTVar21 == pTVar32) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Child1 != Child2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                            ,0xa92,L""), bVar14)) break;
    pTVar28 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pTVar32->field_0xc) {
      pTVar28 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar32;
    }
    pTVar27 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pTVar21->field_0xc) {
      pTVar27 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar21;
    }
    ConnectClusteredNodes(pTVar27,pTVar28,local_178,local_160);
    FVar26.Data = (FScriptContainerElement *)((longlong)local_1f8 + 0x18);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// FixConnectivityGraphUsingDelaunayTriangulation @ 143c9cb00

void __thiscall
Chaos::FRigidClustering::FixConnectivityGraphUsingDelaunayTriangulation
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FClusterCreationParameters *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  if (pTVar3 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FixConnectivityGraphUsingDelaunayTriangulation
            (this,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)&pTVar3->field_0x8,param_2,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     *)0x0);
  return;
}

// ForceReleaseChildParticleAndParents @ 143c9cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::ForceReleaseChildParticleAndParents
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_ReleaseChildrenParticleAndParents> FVar6;
  FRigidClusteredFlags_u_0 *pFVar7;
  ClusterId *pCVar8;
  IPhysicsProxyBase *pIVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar10;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  undefined1 auStackY_128 [32];
  LARGE_INTEGER local_c8;
  undefined4 local_c0;
  int local_bc;
  FStatMessage local_b8;
  LARGE_INTEGER local_a8;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar6 = StatPtr_ReleaseChildrenParticleAndParents;
  if (StatPtr_ReleaseChildrenParticleAndParents ==
      (FThreadSafeStaticStat<Chaos::FStat_ReleaseChildrenParticleAndParents>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"ReleaseChildrenParticleAndParents");
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_ReleaseChildrenParticleAndParents>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_ReleaseChildrenParticleAndParents,
                       *pFVar5,L"TPBDRigidClustering<>::ReleaseChildrenParticleAndParents",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  LVar10 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_a8.s.LowPart = 0;
  local_a8.s.HighPart = 0;
  if ((LVar10.s.LowPart != 0) || (LVar10.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.QuadPart = local_c8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8 = LVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x65a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = LVar10;
      FThreadStats::AddMessage((FName)LVar10.s,CycleScopeStart);
      bVar3 = true;
      goto LAB_143c9cccf;
    }
  }
  bVar3 = false;
  LVar10 = local_a8;
LAB_143c9cccf:
  if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    pFVar7 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                        (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                         *(int *)&param_1->field_0x8)->field0_0x0;
    pFVar7->Bits = pFVar7->Bits & 0xfb;
    pCVar8 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    if (pCVar8->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pCVar8 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                         (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                          *(int *)&param_1->field_0x8);
      this_02 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (2 < *(byte *)((longlong)&((TGeometryParticleHandleImp<double,3,1> *)pCVar8->Id)->_padding_
                       + 4)) {
        this_02 = (TGeometryParticleHandleImp<double,3,1> *)pCVar8->Id;
      }
      if (this_02 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pIVar9 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_02);
        if ((pIVar9 != (IPhysicsProxyBase *)0x0) && (pIVar9->Type != ClusterUnionProxy)) {
          ForceReleaseChildParticleAndParents
                    (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_02,param_2);
        }
      }
    }
    local_c8.s.LowPart = 0;
    local_c8.s.HighPart = 0;
    local_c0 = 1;
    local_b8.StatData.Pad = (uchar  [8])param_1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,(ForAnyElementType *)&local_c8.s,1,&local_bc);
    *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_c8 = param_1;
    ReleaseClusterParticles
              (this,&local_98,
               (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)&local_c8.s,param_2);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar10.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b8.NameAndInfo.Index.Value = LVar10.s.LowPart;
      local_b8.NameAndInfo.Number = LVar10.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_b8.StatData.Pad = (uchar  [8])(local_c8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_b8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GenerateConnectionGraph @ 143c9d000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::GenerateConnectionGraph
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,FClusterCreationParameters *param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  int *piVar1;
  EConnectionMethod EVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateConnectionGraph> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res18 [2];
  FStatMessage local_58;
  FName local_48;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_GenerateConnectionGraph;
  if (StatPtr_STAT_GenerateConnectionGraph ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateConnectionGraph>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_58,"STAT_GenerateConnectionGraph");
    FVar7 = (FThreadSafeStaticStat<Chaos::FStat_STAT_GenerateConnectionGraph>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenerateConnectionGraph,*pFVar6,
                       L"TPBDRigidClustering<>::GenerateConnectionGraph","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
LAB_143c9d16d:
    bVar4 = false;
    FVar10 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0].s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18[0]._0_4_ = FVar9.Value;
        local_res18[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18[0].s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x859);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c9d16d;
    local_res18[0]._0_4_ = FVar9.Value;
    local_res18[0]._4_4_ = uVar8;
    local_48 = FVar10;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar4 = true;
    FVar11.Value = local_48.ComparisonIndex.Value;
  }
  if (param_2->bGenerateConnectionGraph == false) goto LAB_143c9d229;
  EVar2 = param_2->ConnectionMethod;
  if (EVar2 != None) {
    if ((EVar2 == PointImplicit) || (EVar2 == PointImplicitAugmentedWithMinimalDelaunay)) {
      UpdateConnectivityGraphUsingPointImplicit
                (this,param_1,param_2->CoillisionThicknessPercent,param_3,param_4);
    }
    if (EVar2 == DelaunayTriangulation) {
      UpdateConnectivityGraphUsingDelaunayTriangulation(this,param_1,param_2,param_3,param_4);
      goto LAB_143c9d229;
    }
    if (EVar2 == BoundsOverlapFilteredDelaunayTriangulation) {
      UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps
                (this,param_1,param_2,param_3,param_4);
      goto LAB_143c9d229;
    }
    if (1 < EVar2 - MinimalSpanningSubsetDelaunayTriangulation) goto LAB_143c9d229;
  }
  FixConnectivityGraphUsingDelaunayTriangulation(this,param_1,param_2,param_3,param_4);
LAB_143c9d229:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18[0]._0_1_;
      local_58.StatData.Pad[1] = local_res18[0]._1_1_;
      local_58.StatData.Pad[2] = local_res18[0]._2_1_;
      local_58.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GenerateConnectionGraph @ 143c9d340

void __thiscall
Chaos::FRigidClustering::GenerateConnectionGraph
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FClusterCreationParameters *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar5;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  EConnectionMethod EVar7;
  undefined1 *puVar8;
  uint uVar9;
  FClusterCreationParameters local_58;
  
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
    puVar8 = *(undefined1 **)&(this->MChildren).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->MChildren).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->MChildren).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->MChildren).field_0x0;
      do {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)((longlong)iVar4 * 0x20 + lVar1) ==
            param_1) {
          local_58.CoillisionThicknessPercent = param_2->CoillisionThicknessPercent;
          local_58.MaxNumConnections = param_2->MaxNumConnections;
          local_58.bCleanCollisionParticles = param_2->bCleanCollisionParticles;
          local_58.bCopyCollisionParticles = param_2->bCopyCollisionParticles;
          local_58.bGenerateConnectionGraph = param_2->bGenerateConnectionGraph;
          local_58._15_1_ = param_2->field_0xf;
          local_58.ConnectionMethod = param_2->ConnectionMethod;
          local_58._20_4_ = *(undefined4 *)&param_2->field_0x14;
          local_58.ConnectionGraphBoundsFilteringMargin =
               param_2->ConnectionGraphBoundsFilteringMargin;
          local_58.CollisionParticles = param_2->CollisionParticles;
          local_58.ClusterParticleHandle = param_2->ClusterParticleHandle;
          local_58.Scale._0_8_ = *(undefined8 *)&param_2->Scale;
          local_58.Scale._8_8_ = *(undefined8 *)&(param_2->Scale).field_0x8;
          local_58.Scale._16_8_ = *(undefined8 *)&(param_2->Scale).field_0x10;
          local_58.bIsAnchored = param_2->bIsAnchored;
          local_58.bEnableStrainOnCollision = param_2->bEnableStrainOnCollision;
          local_58._74_6_ = *(undefined6 *)&param_2->field_0x4a;
          if (param_2->ConnectionMethod == PointImplicit) {
            pTVar5 = TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles
                               ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
            EVar7 = local_58.ConnectionMethod;
            if (pTVar5->Ptr == (FBVHParticles *)0x0) {
              EVar7 = MinimalSpanningSubsetDelaunayTriangulation;
            }
            local_58.ConnectionMethod = EVar7;
          }
          pTVar6 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)&this->MChildren,param_1);
          if ((pTVar6 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                          *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          GenerateConnectionGraph
                    (this,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                           *)&pTVar6->field_0x8,&local_58,
                     (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                             *)0x0);
          return;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  return;
}

// GetActiveClusterIndex @ 143c9d4b0

/* WARNING: Enum "Type": Some values do not have unique names */

TPBDRigidParticleHandleImp<double,3,1> * __thiscall
Chaos::FRigidClustering::GetActiveClusterIndex
          (FRigidClustering *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<Chaos::FStat_STAT_GetActiveClusterIndex> FVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  ClusterId *pCVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  FVar10 = StatPtr_STAT_GetActiveClusterIndex;
  if (StatPtr_STAT_GetActiveClusterIndex ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_GetActiveClusterIndex>)0x0) {
    pFVar9 = ::FName::FName(&local_58,"STAT_GetActiveClusterIndex");
    FVar10 = (FThreadSafeStaticStat<Chaos::FStat_STAT_GetActiveClusterIndex>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetActiveClusterIndex,*pFVar9,
                        L"TPBDRigidClustering<>::GetActiveClusterIndex","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x803);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto joined_r0x000143c9d608;
    }
  }
  bVar5 = false;
  FVar15 = local_50;
joined_r0x000143c9d608:
  while (param_1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    uVar13 = *(uint *)&param_1->field_0x8;
    lVar2 = *(longlong *)param_1;
    uVar8 = 0;
    if ((int)uVar13 < *(int *)(lVar2 + 0x2e0)) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)(*pcVar3)();
      return pTVar11;
    }
    if (*(char *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar13 * 0x10) == '\0') break;
    pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)param_1->field_0xc) {
      pTVar11 = param_1;
    }
    pCVar12 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        (*(TPBDRigidClusteredParticles<double,3> **)pTVar11,
                         *(int *)&pTVar11->field_0x8);
    param_1 = pCVar12->Id;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return param_1;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return param_1;
}

// HandleConnectivityOnReleaseClusterParticle @ 143ca13a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
* __thiscall
Chaos::FRigidClustering::HandleConnectivityOnReleaseClusterParticle
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  undefined8 uVar2;
  void *pvVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FRigidClustering *pFVar9;
  FClusterUnionManager *this_00;
  FClusterUnion *pFVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<Chaos::FStat_HandleConnectivityOnReleaseClusterParticle> FVar18;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar19;
  ClusterId *pCVar20;
  FGeometryCollectionPhysicsProxy *pFVar21;
  ulonglong uVar22;
  FClusterUnion *pFVar23;
  ulonglong uVar24;
  FClusterUnionParticleProperties *pFVar25;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar26;
  FName FVar27;
  EDamageEvaluationModel EVar28;
  uint uVar29;
  FRigidClustering *this_01;
  uint uVar30;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar31;
  FName FVar32;
  FScriptContainerElement *pFVar33;
  ForAnyElementType FVar34;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar35;
  TGeometryParticleHandleImp<double,3,1> *pTVar36;
  ForAnyElementType FVar37;
  ulonglong uVar38;
  ulonglong *puVar39;
  ForElementType<unsigned_int> FVar40;
  TConnectivityEdge<double> *pTVar41;
  FScriptContainerElement *pFVar42;
  longlong lVar43;
  TConnectivityEdge<double> *pTVar44;
  undefined1 auStackY_328 [32];
  byte local_2c6;
  EDamageEvaluationModel local_2c5;
  undefined1 local_2c4;
  undefined1 local_2c3;
  undefined1 local_2c2;
  undefined1 local_2c1;
  undefined1 local_2c0;
  char local_2bf;
  undefined1 local_2be;
  undefined1 local_2bd;
  int local_2bc;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_2b8;
  FGeometryCollectionPhysicsProxy *local_2a8;
  TPBDRigidParticleHandleImp<double,3,1> *local_2a0;
  TArray<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_298;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_288;
  FRigidClustering *local_278;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_270;
  ForAnyElementType local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined1 local_24e [2];
  uint local_24c;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_248;
  FClusterUnionManager *local_240;
  FName local_238;
  FName local_230;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_228;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_220;
  TPBDRigidParticleHandleImp<double,3,1> *local_210;
  uint local_208;
  FColor_u_0 local_204;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_200;
  FClusterUnion *local_1f8;
  uint local_1f0;
  int local_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  undefined4 local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_1b8;
  FName local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  FName local_198;
  FName local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  TGeometryParticleHandleImp<double,3,1> *local_160;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined1 local_14c [8];
  undefined4 local_144;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *local_140;
  undefined8 local_138;
  TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::FClusterUnionParticleProperties_const_&>
  local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  TPBDRigidParticleHandleImp<double,3,1> **local_d8;
  byte *local_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FName local_b8 [2];
  TArrayView<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int> local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  FVar18 = StatPtr_HandleConnectivityOnReleaseClusterParticle;
  local_2bf = param_2;
  local_278 = this;
  local_248 = param_1;
  local_200 = __return_storage_ptr__;
  if (StatPtr_HandleConnectivityOnReleaseClusterParticle ==
      (FThreadSafeStaticStat<Chaos::FStat_HandleConnectivityOnReleaseClusterParticle>)0x0) {
    pFVar17 = ::FName::FName(local_b8,"HandleConnectivityOnReleaseClusterParticle");
    FVar18 = (FThreadSafeStaticStat<Chaos::FStat_HandleConnectivityOnReleaseClusterParticle>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_HandleConnectivityOnReleaseClusterParticle,*pFVar17,
                        L"TPBDRigidClustering<>::HandleConnectivityOnReleaseClusterParticle",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar27 = *(FName *)FVar18;
  bVar13 = false;
  bVar12 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar11 = false;
  bVar8 = false;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_143ca1528:
    bVar7 = false;
    local_230 = local_190;
    FVar27 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_204.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_204._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar11 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_198.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x54a);
        bVar13 = true;
        bVar12 = true;
        bVar11 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ca1528;
    local_238 = FVar27;
    local_230 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar7 = true;
    bVar11 = bVar13;
    bVar8 = bVar12;
  }
  if (param_1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5292282805487666507>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                        ,0x54b,"ClusteredParticle");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                 *)(*pcVar6)();
      return pTVar19;
    }
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
    (__return_storage_ptr__->Hash).InlineData[0] = '\0';
    (__return_storage_ptr__->Hash).InlineData[1] = '\0';
    (__return_storage_ptr__->Hash).InlineData[2] = '\0';
    (__return_storage_ptr__->Hash).InlineData[3] = '\0';
    (__return_storage_ptr__->Hash)._padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_143ca24da;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  iVar15 = pCVar20->NumChildren;
  local_240 = &this->ClusterUnionManager;
  pFVar21 = (FGeometryCollectionPhysicsProxy *)
            FClusterUnionManager::FindClusterUnionFromParticle
                      (local_240,(TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  local_2a8 = pFVar21;
  if (0 < iVar15) {
    FindIslandsInChildren(this,&local_298,param_1,pFVar21 != (FGeometryCollectionPhysicsProxy *)0x0)
    ;
    if (pFVar21 == (FGeometryCollectionPhysicsProxy *)0x0) {
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0 = 0;
      if (local_298.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_298.ArrayNum);
      }
      if (0 < local_298.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_298.ArrayNum,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
      }
      EVar28 = StrainFromDamageThreshold;
      local_2c5 = StrainFromDamageThreshold;
      local_2a8 = (FGeometryCollectionPhysicsProxy *)
                  TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1);
      if ((local_2a8 == (FGeometryCollectionPhysicsProxy *)0x0) ||
         (*(int *)&local_2a8->field_0x1c != 2)) {
        local_2a8 = (FGeometryCollectionPhysicsProxy *)0x0;
      }
      else {
        EVar28 = (local_2a8->Parameters).DamageEvaluationModel;
        local_2c5 = EVar28;
      }
      uVar22 = (ulonglong)local_298.ArrayNum;
      local_2bc = 0;
      local_260.Data = (FScriptContainerElement *)0x0;
      local_258 = 0;
      local_228 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(local_298.AllocatorInstance.Data + uVar22 * 0x10);
      local_24c = local_298.ArrayNum;
      FVar37.Data = local_298.AllocatorInstance.Data;
      pFVar21 = local_2a8;
      while( true ) {
        pTVar35 = local_228;
        local_1b8 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)FVar37.Data;
        if (local_298.ArrayNum != (uint)uVar22) {
          local_2c4 = 0;
          `TCheckedPointerIterator<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2c4);
        }
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            FVar37.Data == pTVar35) break;
        if ((pFVar21 == (FGeometryCollectionPhysicsProxy *)0x0) ||
           (EVar28 != StrainFromMaterialStrengthAndConnectivity)) {
          bVar13 = false;
          local_1f8 = (FClusterUnion *)0x0;
          if (bCheckForInterclusterEdgesOnRelease != false) goto LAB_143ca1749;
LAB_143ca1de4:
          param_1 = local_248;
          if (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)FVar37.Data)->ArrayNum == 1) {
            local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar2 = *(undefined8 *)
                     (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                        *)FVar37.Data)->AllocatorInstance).Data;
            local_1c8.ArrayNum = 1;
            local_138 = uVar2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,0,&local_1c8.AllocatorInstance,1,&local_1c8.ArrayMax);
            param_1 = local_248;
            *(undefined8 *)local_1c8.AllocatorInstance.Data = uVar2;
            RemoveParticlesFromCluster(this,local_248,&local_1c8);
            if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.AllocatorInstance.Data);
            }
            TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
            ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                      ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                        *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)local_158,
                       (bool *)&local_138);
          }
        }
        else {
          bVar13 = true;
LAB_143ca1749:
          local_1f8 = (FClusterUnion *)0x0;
          pFVar23 = (FClusterUnion *)0x0;
          local_1f0 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                        *)FVar37.Data)->ArrayNum;
          uVar22 = (ulonglong)(int)local_1f0;
          FVar32 = (FName)(((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                             *)FVar37.Data)->AllocatorInstance).Data;
          FVar27 = (FName)((longlong)FVar32 + uVar22 * 8);
          local_1b0 = FVar27;
          while( true ) {
            local_238 = FVar32;
            if (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  *)FVar37.Data)->ArrayNum != (int)uVar22) {
              local_2c3 = 0;
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_2c3);
            }
            if (FVar32 == FVar27) break;
            pTVar26 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)(*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar32)->field_0xc)
            {
              pTVar26 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar32;
            }
            pFVar10 = local_1f8;
            if (pTVar26 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              if (bVar13) {
                FGeometryCollectionPhysicsProxy::ComputeMaterialBasedDamageThreshold_Internal
                          (pFVar21,pTVar26);
              }
              pFVar10 = local_1f8;
              if ((bCheckForInterclusterEdgesOnRelease != false) &&
                 (pFVar23 == (FClusterUnion *)0x0)) {
                local_140 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges
                                      (pTVar26);
                local_208 = local_140->ArrayNum;
                uVar22 = (ulonglong)(int)local_208;
                pTVar44 = (TConnectivityEdge<double> *)(local_140->AllocatorInstance).Data;
                pTVar41 = pTVar44 + uVar22;
                while( true ) {
                  if (local_140->ArrayNum != (int)uVar22) {
                    local_2c2 = 0;
                    `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_2c2);
                  }
                  FVar27 = local_1b0;
                  FVar32 = local_238;
                  pFVar23 = local_1f8;
                  pFVar21 = local_2a8;
                  pFVar10 = local_1f8;
                  if (pTVar44 == pTVar41) break;
                  bVar12 = IsInterclusterEdge<double>
                                     ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar26,pTVar44);
                  if (bVar12) {
                    pTVar1 = pTVar44->Sibling;
                    pTVar31 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                    if (pTVar1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                      if (2 < (byte)pTVar1->field_0xc) {
                        pTVar31 = pTVar1;
                      }
                      while (pTVar31 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                        uVar29 = *(uint *)&pTVar31->field_0x8;
                        lVar43 = *(longlong *)pTVar31;
                        uVar30 = 0;
                        if ((int)uVar29 < *(int *)(lVar43 + 0x2e0)) {
                          uVar30 = ~uVar29 >> 0x1f;
                        }
                        if ((uVar30 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                                     *)(*pcVar6)();
                          return pTVar19;
                        }
                        if (*(char *)(*(longlong *)(lVar43 + 0x2d8) + 0xd +
                                     (longlong)(int)uVar29 * 0x10) == '\0') break;
                        pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                            (*(TPBDRigidClusteredParticles<double,3> **)pTVar31,
                                             *(int *)&pTVar31->field_0x8);
                        if (pCVar20->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                          pTVar31 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                          break;
                        }
                        pCVar20 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                            (*(TPBDRigidClusteredParticles<double,3> **)pTVar31,
                                             *(int *)&pTVar31->field_0x8);
                        pTVar31 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                        if (2 < (byte)pCVar20->Id->field_0xc) {
                          pTVar31 = pCVar20->Id;
                        }
                      }
                    }
                    pFVar23 = FClusterUnionManager::FindClusterUnionFromParticle(local_240,pTVar31);
                    if ((pFVar23 != (FClusterUnion *)0x0) &&
                       (FVar27 = local_1b0, FVar32 = local_238, pFVar21 = local_2a8,
                       pFVar10 = pFVar23, pFVar23->bCheckConnectivity)) break;
                  }
                  pTVar44 = pTVar44 + 1;
                  uVar22 = (ulonglong)local_208;
                }
              }
            }
            local_1f8 = pFVar10;
            uVar22 = (ulonglong)local_1f0;
            FVar32 = (FName)((longlong)FVar32 + 8);
            FVar37.Data = (FScriptContainerElement *)local_1b8;
          }
          FVar27 = local_230;
          this = local_278;
          if (pFVar23 == (FClusterUnion *)0x0) goto LAB_143ca1de4;
          local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_270.ArrayNum = 0;
          local_270.ArrayMax = 0;
          local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.ArrayNum = 0;
          local_2b8.ArrayMax = 0;
          if (bOnlyUseInterclusterEdgesAttachedToMainParticles != false) {
            uVar29 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)FVar37.Data)->ArrayNum;
            if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
            }
            iVar15 = 0;
            iVar14 = 0;
            if (0 < (int)uVar29) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar29,&local_270.AllocatorInstance,0,&local_270.ArrayMax);
              iVar15 = local_2b8.ArrayMax;
              iVar14 = local_2b8.ArrayNum;
            }
            uVar29 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)FVar37.Data)->ArrayNum;
            if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
            }
            if (iVar15 < (int)uVar29) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar29,&local_2b8.AllocatorInstance,iVar14,&local_2b8.ArrayMax);
            }
          }
          this_00 = local_240;
          pFVar33 = (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)FVar37.Data)->AllocatorInstance).Data;
          iVar15 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)FVar37.Data)->ArrayNum;
          pFVar42 = pFVar33 + (longlong)iVar15 * 8;
          while( true ) {
            if (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  *)FVar37.Data)->ArrayNum != iVar15) {
              local_2c1 = 0;
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_2c1);
            }
            if (pFVar33 == pFVar42) break;
            local_2a0 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar33;
            if (bOnlyUseInterclusterEdgesAttachedToMainParticles != false) {
              bVar13 = FClusterUnionManager::IsDirectlyConnectedToMainParticleInClusterUnion
                                 (this_00,pFVar23,local_2a0);
              if (bVar13) {
                if (((local_270.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a0) &&
                    ((FScriptContainerElement *)&local_2a0 <
                     local_270.AllocatorInstance.Data + (longlong)local_270.ArrayMax * 8)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                             *)(*pcVar6)();
                  return pTVar19;
                }
                iVar14 = local_270.ArrayNum;
                if (local_270.ArrayNum == local_270.ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_270.AllocatorInstance,&local_270.ArrayMax);
                }
                local_270.ArrayNum = iVar14 + 1;
                FVar34.Data = local_270.AllocatorInstance.Data;
              }
              else {
                if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a0) &&
                    ((FScriptContainerElement *)&local_2a0 <
                     local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 8)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                             *)(*pcVar6)();
                  return pTVar19;
                }
                iVar14 = local_2b8.ArrayNum;
                if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
                }
                local_2b8.ArrayNum = iVar14 + 1;
                FVar34.Data = local_2b8.AllocatorInstance.Data;
              }
              *(TPBDRigidParticleHandleImp<double,3,1> **)(FVar34.Data + (longlong)iVar14 * 8) =
                   local_2a0;
            }
            local_2c6 = local_2c6 & 0xfd | 1;
            local_d8 = &local_2a0;
            local_d0 = &local_2c6;
            TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,Chaos::FClusterUnionParticleProperties_const_&>_>
                      ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>,FDefaultSetAllocator>
                        *)&pFVar23->ChildProperties,&local_130,(bool *)&local_d8);
            pFVar33 = pFVar33 + 8;
          }
          pTVar35 = &local_270;
          if (bOnlyUseInterclusterEdgesAttachedToMainParticles == false) {
            pTVar35 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)FVar37.Data;
          }
          FClusterUnionManager::AddPendingClusterIndexOperation
                    (this_00,pFVar23->InternalIndex,Add,pTVar35);
          FVar27 = local_230;
          this = local_278;
          iVar15 = local_2b8.ArrayNum;
          uVar22 = (ulonglong)local_2b8.ArrayNum;
          if (local_2b8.ArrayNum != 0) {
            pFVar42 = local_2b8.AllocatorInstance.Data + uVar22 * 8;
            FVar34.Data = local_2b8.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar22 != iVar15) {
                local_2c0 = 0;
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_2c0);
              }
              if (FVar34.Data == pFVar42) break;
              pTVar26 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)(*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar34.Data)->
                            field_0xc) {
                pTVar26 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar34.Data;
              }
              RemoveNodeConnections(this,pTVar26);
              uVar22 = local_2b8._8_8_ & 0xffffffff;
              FVar34.Data = FVar34.Data + 8;
            }
            RemoveParticlesFromCluster(this,local_248,&local_2b8);
            FVar34.Data = local_2b8.AllocatorInstance.Data;
            iVar15 = local_2b8.ArrayNum;
            lVar43 = (longlong)local_2b8.ArrayNum;
            if ((local_2b8.ArrayNum < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar6)();
              return pTVar19;
            }
            uVar29 = (local_98._8_4_ - local_64) + iVar15;
            if ((uint)(local_98._8_4_ - local_64) < uVar29) {
              if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
              }
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,uVar29);
              if (uVar29 < 4) {
                uVar29 = 1;
              }
              else {
                uVar22 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
                lVar5 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                  }
                }
                local_150 = (undefined4)lVar5;
                uVar29 = 1 << ((byte)lVar5 & 0x1f);
              }
              if ((local_50 == 0) || ((int)local_50 < (int)uVar29)) {
                local_50 = uVar29;
                TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                ::Rehash((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                          *)local_98);
              }
            }
            pFVar42 = FVar34.Data + lVar43 * 8;
            for (; FVar34.Data != pFVar42; FVar34.Data = FVar34.Data + 8) {
              TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                        ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                          *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)(local_158 + 4),
                         (bool *)FVar34.Data);
            }
          }
          if (((local_260.Data <= (FScriptContainerElement *)&local_2bc) &&
              ((FScriptContainerElement *)&local_2bc <
               local_260.Data + (longlong)local_258._4_4_ * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(*pcVar6)();
            return pTVar19;
          }
          iVar15 = (int)local_258;
          if ((int)local_258 == local_258._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_260,(int *)((longlong)&local_258 + 4));
          }
          local_258 = CONCAT44(local_258._4_4_,iVar15 + 1);
          *(int *)(local_260.Data + (longlong)iVar15 * 4) = local_2bc;
          if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.AllocatorInstance.Data);
          }
          param_1 = local_248;
          pFVar21 = local_2a8;
          if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.AllocatorInstance.Data);
            param_1 = local_248;
            pFVar21 = local_2a8;
          }
        }
        local_2bc = local_2bc + 1;
        FVar37.Data = FVar37.Data + 0x10;
        uVar22 = (ulonglong)local_24c;
        EVar28 = local_2c5;
      }
      uVar29 = (int)local_258 - 1;
      if (-1 < (int)uVar29) {
        lVar43 = (longlong)(int)uVar29 * 4;
        do {
          uVar30 = 0;
          if ((int)uVar29 < (int)local_258) {
            uVar30 = ~uVar29 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(*pcVar6)();
            return pTVar19;
          }
          uVar30 = *(uint *)(local_260.Data + lVar43);
          uVar16 = 0;
          if ((int)uVar30 < local_298.ArrayNum) {
            uVar16 = ~uVar30 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(*pcVar6)();
            return pTVar19;
          }
          FVar37.Data = local_298.AllocatorInstance.Data;
          pFVar42 = local_298.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10;
          pvVar3 = *(void **)&pFVar42->field_0x0;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          iVar15 = (local_298.ArrayNum - uVar30) + -1;
          if (1 < iVar15) {
            iVar15 = 1;
          }
          if (iVar15 != 0) {
            memmove(pFVar42,FVar37.Data + (longlong)(local_298.ArrayNum - iVar15) * 0x10,
                    (longlong)iVar15 << 4);
          }
          local_298.ArrayNum = local_298.ArrayNum - 1;
          lVar43 = lVar43 + -4;
          uVar29 = uVar29 - 1;
          FVar27 = local_230;
          param_1 = local_248;
        } while (-1 < (int)uVar29);
      }
      iVar15 = local_298.ArrayNum;
      if (local_2bf != '\0') {
        pTVar35 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(local_298.AllocatorInstance.Data + (longlong)local_298.ArrayNum * 0x10);
        this_01 = local_278;
        FVar37.Data = local_298.AllocatorInstance.Data;
        local_228 = pTVar35;
        while( true ) {
          if (local_298.ArrayNum != iVar15) {
            `TCheckedPointerIterator<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_250);
          }
          if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )FVar37.Data == pTVar35) break;
          RemoveParticlesFromCluster
                    (this_01,param_1,
                     (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)FVar37.Data);
          iVar14 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)FVar37.Data)->ArrayNum;
          if (1 < iVar14) {
            pFVar33 = (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                         *)FVar37.Data)->AllocatorInstance).Data;
            pFVar42 = pFVar33 + (longlong)iVar14 * 8;
            while( true ) {
              if (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    *)FVar37.Data)->ArrayNum != iVar14) {
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_24f);
              }
              pFVar9 = local_278;
              pTVar35 = local_228;
              param_1 = local_248;
              if (pFVar33 == pFVar42) break;
              pTVar4 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar33;
              this_01 = local_278;
              if (pTVar4 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143ca20b9:
                pFVar33 = pFVar33 + 8;
              }
              else {
                TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
                          *)&local_278->MomentumRestoringDataByParticle,
                         (TPBDRigidParticleHandleImp<double,3,1> *)pTVar4);
                FPBDRigidsEvolutionBase::DisableParticle
                          ((FPBDRigidsEvolutionBase *)pFVar9->MEvolution,pTVar4);
                this_01 = local_278;
                pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                if (2 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
                  pTVar36 = pTVar4;
                }
                if ((pTVar36 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
                   (TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                    ::Remove(&local_278->TopLevelClusterParents,
                             (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar36),
                   local_160 = pTVar36,
                   *(int *)&(this_01->TopLevelClusterParentsStrained).field_0x8 ==
                   *(int *)&(this_01->TopLevelClusterParentsStrained).field_0x34))
                goto LAB_143ca20b9;
                uVar29 = ((uint)((ulonglong)pTVar36 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pTVar36 >> 4)) * -0x7a143595;
                uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                          ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
                            *)&this_01->TopLevelClusterParentsStrained,uVar29 >> 0x10 ^ uVar29,
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_160);
                pFVar33 = pFVar33 + 8;
              }
            }
          }
          FVar37.Data = FVar37.Data + 0x10;
        }
        CreateClustersFromNewIslands(this_01,&local_220,&local_298,param_1);
        FVar27 = local_230;
        uVar29 = local_220.ArrayNum + (local_98._8_4_ - local_64);
        if ((uint)(local_98._8_4_ - local_64) < uVar29) {
          if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,uVar29);
          uVar30 = 1;
          if (3 < uVar29) {
            uVar22 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
            lVar43 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar43 == 0; lVar43 = lVar43 + -1) {
              }
            }
            uVar30 = 1 << ((byte)lVar43 & 0x1f);
          }
          if ((local_50 == 0) || ((int)local_50 < (int)uVar30)) {
            local_50 = uVar30;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar30 != 0) {
              uVar29 = uVar30;
              if (uVar30 < 2) {
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar29 = 0;
                  goto LAB_143ca2191;
                }
              }
              else {
LAB_143ca2191:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar29,4);
              }
              if (0 < (int)uVar30) {
                uVar22 = 0;
                uVar38 = (ulonglong)uVar30;
                do {
                  FVar37.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar37.Data = local_58.Data;
                  }
                  uVar24 = (longlong)(int)uVar30 - 1U & uVar22;
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)((longlong)FVar37.Data + uVar24 * 4) = 0xffffffff;
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
            }
            if (local_50 != 0) {
              pTStack_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
              uStack_1e4 = 1;
              local_1e8 = 0;
              iStack_1d4 = 0;
              iStack_1d0 = 0;
              if (local_70 != 0) {
                FVar40 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar40 = local_78;
                }
                uVar29 = *(uint *)FVar40;
                iStack_1d0 = 0;
                local_1e8 = 0;
                while (uVar29 == 0) {
                  iStack_1d0 = iStack_1d0 + 0x20;
                  lVar43 = (longlong)local_1e8;
                  local_1e8 = local_1e8 + 1;
                  if ((int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5 < local_1e8)
                  goto LAB_143ca22ab;
                  uVar29 = ((uint *)((longlong)FVar40 + 4))[lVar43];
                }
                uStack_1e4 = -uVar29 & uVar29;
                uVar22 = (ulonglong)uStack_1e4 * 2 + 1;
                lVar43 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                  }
                }
                iStack_1d4 = iStack_1d0 + -1 + (int)lVar43;
                if (local_70 < iStack_1d4) {
LAB_143ca22ab:
                  iStack_1d4 = local_70;
                }
              }
              local_1d8 = 0xffffffff;
              local_130.Value = (FClusterUnionParticleProperties *)local_98;
              local_120._padding_ = CONCAT44(uStack_1e4,local_1e8);
              local_120.CurrentBitIndex = iStack_1d4;
              local_120.UnvisitedBitMask = 0xffffffff;
              local_120._28_4_ = uStack_1cc;
              local_120.BaseBitIndex = iStack_1d0;
              iVar15 = iStack_1d4;
              local_120.Array = pTStack_1e0;
              if (iStack_1d4 < local_70) {
                do {
                  puVar39 = (ulonglong *)((longlong)iVar15 * 0x10 + *(longlong *)local_130.Value);
                  uVar29 = ((uint)(*puVar39 >> 0x14) & 0xffff ^ (uint)(*puVar39 >> 4)) * -0x7a143595
                  ;
                  uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                  uVar29 = (uVar29 >> 0x10 ^ uVar29) & local_50 - 1;
                  *(uint *)((longlong)puVar39 + 0xc) = uVar29;
                  FVar37.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar37.Data = local_58.Data;
                  }
                  uVar22 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar29;
                  *(undefined4 *)(puVar39 + 1) = *(undefined4 *)((longlong)FVar37.Data + uVar22 * 4)
                  ;
                  *(int *)((longlong)FVar37.Data + uVar22 * 4) = iVar15;
                  local_120.UnvisitedBitMask =
                       local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
                  iVar15 = local_120.CurrentBitIndex;
                } while (local_120.CurrentBitIndex < (local_120.Array)->NumBits);
              }
            }
          }
        }
        iVar15 = local_220.ArrayNum;
        pFVar42 = local_220.AllocatorInstance.Data + (longlong)local_220.ArrayNum * 8;
        FVar37.Data = local_220.AllocatorInstance.Data;
        while( true ) {
          if (local_220.ArrayNum != iVar15) {
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_24e);
          }
          if (FVar37.Data == pFVar42) break;
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                    ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                      *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)(local_14c + 4),
                     (bool *)FVar37.Data);
          FVar37.Data = FVar37.Data + 8;
        }
        if (local_220.ArrayMax < 0) {
          local_220.ArrayNum = 0;
          if (local_220.ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_220.AllocatorInstance,0,&local_220.ArrayMax);
          }
        }
        else {
          local_220.ArrayNum = 0;
        }
        if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
      }
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      __return_storage_ptr__ = local_200;
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
        __return_storage_ptr__ = local_200;
      }
    }
    else if ((bCheckForInterclusterEdgesOnRelease != false) &&
            (((ulonglong)(pFVar21->Parameters).WorldTransform.Scale3D.ZW.m128d_f64[1] & 4) != 0)) {
      uVar22 = (ulonglong)local_298.ArrayNum;
      local_228 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(local_298.AllocatorInstance.Data + uVar22 * 0x10);
      local_24c = local_298.ArrayNum;
      FVar37.Data = local_298.AllocatorInstance.Data;
      while( true ) {
        pTVar35 = local_228;
        if (local_298.ArrayNum != (uint)uVar22) {
          local_2be = 0;
          `TCheckedPointerIterator<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2be);
        }
        __return_storage_ptr__ = local_200;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            FVar37.Data == pTVar35) break;
        pFVar33 = (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)FVar37.Data)->AllocatorInstance).Data;
        bVar13 = false;
        iVar15 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)FVar37.Data)->ArrayNum;
        local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.ArrayNum = 0;
        local_288.ArrayMax = 0;
        pFVar42 = pFVar33 + (longlong)iVar15 * 8;
        while( true ) {
          if (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)FVar37.Data)->ArrayNum != iVar15) {
            local_2bd = 0;
            `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_2bd);
          }
          if (pFVar33 == pFVar42) break;
          pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar33;
          local_210 = pTVar1;
          if (((!bVar13) &&
              (pFVar25 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                         ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FClusterUnionParticleProperties,0>_>
                                 *)&local_2a8->field_0x30,pTVar1),
              pFVar25 != (FClusterUnionParticleProperties *)0x0)) &&
             (pFVar25->bIsAuxiliaryParticle == 0)) {
            bVar13 = true;
          }
          if (bOnlyUseInterclusterEdgesAttachedToMainParticles == false) {
            if (bVar13) goto LAB_143ca29a7;
LAB_143ca26ab:
            pFVar33 = pFVar33 + 8;
          }
          else {
            bVar12 = FClusterUnionManager::IsDirectlyConnectedToMainParticleInClusterUnion
                               (local_240,(FClusterUnion *)local_2a8,pTVar1);
            if (bVar12) goto LAB_143ca26ab;
            if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_210) &&
                ((FScriptContainerElement *)&local_210 <
                 local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar6 = (code *)swi(3);
              pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar6)();
              return pTVar19;
            }
            iVar14 = local_288.ArrayNum;
            if (local_288.ArrayNum == local_288.ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_288.AllocatorInstance,&local_288.ArrayMax);
            }
            pFVar33 = pFVar33 + 8;
            local_288.ArrayNum = iVar14 + 1;
            *(TPBDRigidParticleHandleImp<double,3,1> **)
             (local_288.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_210;
          }
        }
        if (!bVar13) {
          FClusterUnionManager::AddPendingClusterIndexOperation
                    (local_240,(int)(local_2a8->Parameters).Shared.MinimumBoundingExtentClamp,Remove
                     ,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)FVar37.Data);
          iVar15 = ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)FVar37.Data)->ArrayNum;
          pFVar42 = (((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)FVar37.Data)->AllocatorInstance).Data;
          if ((iVar15 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(*pcVar6)();
            return pTVar19;
          }
          uVar29 = (local_98._8_4_ - local_64) + iVar15;
          if ((uint)(local_98._8_4_ - local_64) < uVar29) {
            if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
            }
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,uVar29);
            uVar30 = 1;
            if (3 < uVar29) {
              uVar22 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
              lVar43 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                }
              }
              local_144 = (undefined4)lVar43;
              uVar30 = 1 << ((byte)lVar43 & 0x1f);
            }
            if ((local_50 == 0) || ((int)local_50 < (int)uVar30)) {
              local_50 = uVar30;
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,0,4);
              }
              if (uVar30 != 0) {
                uVar29 = uVar30;
                if (uVar30 < 2) {
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    uVar29 = 0;
                    goto LAB_143ca27bf;
                  }
                }
                else {
LAB_143ca27bf:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_58,0,uVar29,4);
                }
                if (0 < (int)uVar30) {
                  uVar22 = 0;
                  uVar38 = (ulonglong)uVar30;
                  do {
                    FVar34.Data = (FScriptContainerElement *)local_60;
                    if ((ForElementType<FSetElementId>)local_58.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar34.Data = local_58.Data;
                    }
                    uVar24 = (longlong)(int)uVar30 - 1U & uVar22;
                    uVar22 = uVar22 + 1;
                    *(undefined4 *)((longlong)FVar34.Data + uVar24 * 4) = 0xffffffff;
                    uVar38 = uVar38 - 1;
                  } while (uVar38 != 0);
                }
              }
              if (local_50 != 0) {
                local_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                local_180._padding_._0_4_ = 0;
                local_180._padding_._4_4_ = 1;
                local_180.UnvisitedBitMask = 0xffffffff;
                local_180.CurrentBitIndex = 0;
                local_180.BaseBitIndex = 0;
                if (local_70 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
                }
                local_100 = (longlong *)local_98;
                local_f8._padding_ =
                     CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_);
                local_f8.Array = local_180.Array;
                local_f8.UnvisitedBitMask = local_180.UnvisitedBitMask;
                local_f8.CurrentBitIndex = local_180.CurrentBitIndex;
                local_f8.BaseBitIndex = local_180.BaseBitIndex;
                local_f8._28_4_ = local_180._28_4_;
                if (local_180.CurrentBitIndex < (local_180.Array)->NumBits) {
                  do {
                    puVar39 = (ulonglong *)((longlong)local_f8.CurrentBitIndex * 0x10 + *local_100);
                    uVar29 = ((uint)(*puVar39 >> 0x14) & 0xffff ^ (uint)(*puVar39 >> 4)) *
                             -0x7a143595;
                    uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                    uVar29 = (uVar29 >> 0x10 ^ uVar29) & local_50 - 1;
                    *(uint *)((longlong)puVar39 + 0xc) = uVar29;
                    FVar34.Data = (FScriptContainerElement *)local_60;
                    if ((ForElementType<FSetElementId>)local_58.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar34.Data = local_58.Data;
                    }
                    uVar22 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar29;
                    *(undefined4 *)(puVar39 + 1) =
                         *(undefined4 *)((longlong)FVar34.Data + uVar22 * 4);
                    *(int *)((longlong)FVar34.Data + uVar22 * 4) = local_f8.CurrentBitIndex;
                    local_f8.UnvisitedBitMask =
                         local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
                  } while (local_f8.CurrentBitIndex < (local_f8.Array)->NumBits);
                }
              }
            }
          }
          pFVar33 = pFVar42 + (longlong)iVar15 * 8;
          for (; pFVar42 != pFVar33; pFVar42 = pFVar42 + 8) {
            TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
            ::Emplace<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&>
                      ((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                        *)local_98,(TPBDRigidParticleHandleImp<double,3,1> **)local_14c,
                       (bool *)pFVar42);
          }
          goto LAB_143ca2a2a;
        }
LAB_143ca29a7:
        if (local_288.ArrayNum != 0) {
          FClusterUnionManager::AddPendingClusterIndexOperation
                    (local_240,(int)(local_2a8->Parameters).Shared.MinimumBoundingExtentClamp,Remove
                     ,&local_288);
          iVar15 = local_288.ArrayNum;
          local_c8 = local_288.AllocatorInstance.Data;
          if ((local_288.ArrayNum < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(*pcVar6)();
            return pTVar19;
          }
          iStack_c0 = iVar15;
          local_a8._12_4_ = uStack_bc;
          local_a8.ArrayNum = iVar15;
          local_a8.DataPtr = (TPBDRigidParticleHandleImp<double,3,1> **)local_c8;
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          ::Append((TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_a8);
        }
LAB_143ca2a2a:
        if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.AllocatorInstance.Data);
        }
        FVar37.Data = FVar37.Data + 0x10;
        uVar22 = (ulonglong)local_24c;
      }
    }
    DestructItems<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
    if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
        local_298.AllocatorInstance.Data !=
        (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
    {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  ::
  Move<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
            (__return_storage_ptr__,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)local_98);
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_143ca24da:
  if (bVar7) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// ReleaseClusterParticles @ 143ca4fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
* __thiscall
Chaos::FRigidClustering::ReleaseClusterParticles
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_STRAIN> FVar12;
  ClusterId *pCVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d0;
  undefined1 local_c8 [8];
  FStatMessage local_c0;
  FName local_b0;
  undefined1 local_98 [32];
  TPBDRigidParticleHandleImp<double,3,1> *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  uchar local_60 [4];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar18 = 0;
  uVar17 = 0;
  FVar12 = StatPtr_STAT_ReleaseClusterParticles_STRAIN;
  if (StatPtr_STAT_ReleaseClusterParticles_STRAIN ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_STRAIN>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_c0,"STAT_ReleaseClusterParticles_STRAIN");
    FVar12 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_STRAIN>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseClusterParticles_STRAIN,
                        *pFVar11,L"TPBDRigidClustering<>::ReleaseClusterParticles(STRAIN)",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar9 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar9 == 0)) {
LAB_143ca512e:
    bVar6 = false;
    FVar16 = local_b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d0.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d0.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.s.LowPart = FVar15.Value;
        local_d0.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d0.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x436);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ca512e;
    local_d0.s.LowPart = FVar15.Value;
    local_d0.s.HighPart = uVar9;
    local_b0 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  pCVar13 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  if (pCVar13->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pCVar13 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                         *(int *)&param_1->field_0x8);
    pTVar14 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pCVar13->Id->field_0xc) {
      pTVar14 = pCVar13->Id;
    }
    if (((pTVar14 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
        (iVar10 = FClusterUnionManager::FindClusterUnionIndexFromParticle
                            (&this->ClusterUnionManager,pTVar14), iVar10 == -1)) &&
       (bVar8 = `Chaos::FRigidClustering::ReleaseClusterParticles'::__l6::<lambda_1>::operator()
                          (local_c8), !bVar8)) {
      *(undefined8 *)&__return_storage_ptr__->Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
      uVar19 = 0xffffffff;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
      (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      __return_storage_ptr__->HashSize = 0;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      local_70._0_4_ = 0;
      local_70._4_4_ = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      if (__return_storage_ptr__ !=
          (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
           *)local_98) {
        puVar1 = &(__return_storage_ptr__->Elements).field_0x10;
        *(undefined8 *)&__return_storage_ptr__->Elements = 0;
        local_98._0_8_ = (FScriptContainerElement *)0x0;
        *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
        local_98._8_8_ = 0;
        iVar18 = 0;
        if (puVar1 != local_98 + 0x10) {
          *(undefined8 *)puVar1 = local_98._16_8_;
          *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = local_98._24_8_;
          pvVar3 = *(void **)&(__return_storage_ptr__->Elements).field_0x20;
          pTVar14 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          uVar20 = uVar17;
          uVar17 = 0;
          iVar18 = 0;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
            pTVar14 = local_78;
            uVar19 = local_68;
            uVar20 = (undefined4)local_70;
            uVar17 = local_64;
            iVar18 = local_98._12_4_;
          }
          *(TPBDRigidParticleHandleImp<double,3,1> **)&(__return_storage_ptr__->Elements).field_0x20
               = pTVar14;
          *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = uVar20;
          *(uint *)&(__return_storage_ptr__->Elements).field_0x2c = local_70._4_4_;
          local_70._4_4_ = 0;
        }
        *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = uVar19;
        *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = uVar17;
      }
      local_70._0_4_ = 0;
      local_64 = 0;
      local_68 = 0xffffffff;
      local_78 = (void *)0x0;
      if (local_58 == (ForElementType<FSetElementId>)0x0) {
        *&(__return_storage_ptr__->Hash).InlineData = local_60;
      }
      FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar4);
        iVar18 = local_98._12_4_;
      }
      (__return_storage_ptr__->Hash).SecondaryData = local_58;
      __return_storage_ptr__->HashSize = local_50;
      local_50 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar18 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      uVar9 = local_70._4_4_;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = (ulonglong)local_70._4_4_ << 0x20;
      if (0x80 < uVar9) {
        local_70 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto joined_r0x000143ca538b;
    }
  }
  ReleaseClusterParticlesImpl(this,__return_storage_ptr__,param_1,param_2,true);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
joined_r0x000143ca538b:
  if (((bVar6) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Index.Value = local_b0.ComparisonIndex.Value;
      local_c0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// ReleaseClusterParticles @ 143ca5470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
* __thiscall
Chaos::FRigidClustering::ReleaseClusterParticles
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigidClustering *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_LIST> FVar13;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar14;
  ClusterId *pCVar15;
  float *pfVar16;
  ulonglong uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FScriptContainerElement *pFVar20;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar21;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar22;
  undefined1 auStackY_1a8 [32];
  undefined1 local_147;
  bool local_146;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_140;
  uint local_138;
  uint uStack_134;
  FRigidClustering *local_130;
  FColor_u_0 local_128 [2];
  FName local_120;
  FName local_118;
  FScriptContainerElement *local_108;
  FName local_100;
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar22 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  FVar13 = StatPtr_STAT_ReleaseClusterParticles_LIST;
  local_140 = param_1;
  local_130 = this;
  if (StatPtr_STAT_ReleaseClusterParticles_LIST ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_LIST>)0x0) {
    pFVar12 = ::FName::FName(&local_100,"STAT_ReleaseClusterParticles_LIST");
    FVar13 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticles_LIST>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseClusterParticles_LIST,
                        *pFVar12,L"TPBDRigidClustering<>::ReleaseClusterParticles(LIST)",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar4 = false;
  bVar5 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar8 = false;
  bVar9 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar18.Value;
        local_120.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x62e);
        bVar4 = true;
        bVar5 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar18.Value;
      uStack_134 = uVar10;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar8 = true;
      goto LAB_143ca55f0;
    }
  }
  bVar5 = bVar9;
  bVar4 = bVar8;
  bVar8 = false;
  FVar19 = local_118;
LAB_143ca55f0:
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (param_1->ArrayNum != 0) {
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_f8._32_8_ = 0;
    local_146 = local_130->DoGenerateBreakingData;
    local_130->DoGenerateBreakingData = param_2;
    local_138 = param_1->ArrayNum;
    uVar17 = (ulonglong)(int)local_138;
    pFVar20 = (param_1->AllocatorInstance).Data;
    local_f8._40_4_ = 0;
    local_f8._44_4_ = 0x80;
    local_f8._48_4_ = 0xffffffff;
    local_108 = pFVar20 + uVar17 * 8;
    local_f8._52_4_ = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    while( true ) {
      pFVar7 = local_108;
      if (param_1->ArrayNum != (int)uVar17) {
        local_147 = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_147);
      }
      if (pFVar20 == pFVar7) break;
      pTVar21 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)(*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar20)->field_0xc) {
        pTVar21 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar20;
      }
      if (pTVar21 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
        uVar10 = *(uint *)&pTVar21->field_0x8;
        lVar2 = *(longlong *)pTVar21;
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar2 + 0x2e0)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     *)(*pcVar3)();
          return pTVar14;
        }
        param_1 = local_140;
        if ((*(char *)(*(longlong *)(lVar2 + 0x2d8) + 0xd + (longlong)(int)uVar10 * 0x10) != '\0')
           && (pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                   (*(TPBDRigidClusteredParticles<double,3> **)pTVar21,
                                    *(int *)&pTVar21->field_0x8), param_1 = local_140,
              pCVar15->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) {
          if ((pTVar22 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
             (pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar21,
                                   *(int *)&pTVar21->field_0x8), pCVar15->Id != pTVar22)) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5292282805487666752>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                               ,0x640,
                               "!ClusterHandle || ClusteredChildHandle->ClusterIds().Id == ClusterHandle"
                              );
            param_1 = local_140;
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              pTVar14 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar3)();
              return pTVar14;
            }
            break;
          }
          pfVar16 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                              (*(TPBDRigidClusteredParticles<double,3> **)pTVar21,
                               *(int *)&pTVar21->field_0x8);
          *pfVar16 = 3.4028235e+38;
          UpdateTopLevelParticle(local_130,pTVar21);
          pfVar16 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                              (*(TPBDRigidClusteredParticles<double,3> **)pTVar21,
                               *(int *)&pTVar21->field_0x8);
          fVar1 = *pfVar16;
          pfVar16 = TPBDRigidClusteredParticles<double,3>::Strains
                              (*(TPBDRigidClusteredParticles<double,3> **)pTVar21,
                               *(int *)&pTVar21->field_0x8);
          *pfVar16 = fVar1;
          pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              (*(TPBDRigidClusteredParticles<double,3> **)pTVar21,
                               *(int *)&pTVar21->field_0x8);
          pTVar22 = pCVar15->Id;
          param_1 = local_140;
        }
      }
      uVar17 = (ulonglong)local_138;
      pFVar20 = pFVar20 + 8;
    }
    pFVar6 = local_130;
    if (pTVar22 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar21 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pTVar22->field_0xc) {
        pTVar21 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar22;
      }
      pTVar14 = ReleaseClusterParticles(local_130,&local_a8,pTVar21,false);
      if (__return_storage_ptr__ != pTVar14) {
        TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        ::
        Move<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
                  (__return_storage_ptr__,pTVar14);
      }
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
    }
    pFVar6->DoGenerateBreakingData = local_146;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  pFVar20 = (param_1->AllocatorInstance).Data;
  if (pFVar20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar20);
  }
  return __return_storage_ptr__;
}

// ReleaseClusterParticlesImpl @ 143ca58f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
* __thiscall
Chaos::FRigidClustering::ReleaseClusterParticlesImpl
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2,bool param_3)

{
  EClusterUnionOperationTiming EVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  EClusterUnionOperationTiming EVar14;
  FRigidClusteredFlags_u_0 *pFVar15;
  FGeometryCollectionPhysicsProxy *this_01;
  ClusterId *pCVar16;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar17;
  float *pfVar18;
  FClusterUnion *pFVar19;
  ulong64 uVar20;
  TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> *pTVar21;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  ForElementType<FSetElementId> FVar30;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar31;
  longlong lVar32;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar33;
  uint uVar34;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar35;
  TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> *pTVar36;
  longlong lVar37;
  longlong *plVar38;
  FRigidClustering *this_02;
  EClusterUnionOperationTiming *pEVar39;
  uint *puVar40;
  longlong *plVar41;
  FRigidClustering *pFVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_3f8 [32];
  byte local_3a7;
  undefined1 local_3a6;
  char local_3a5;
  bool local_3a4;
  undefined1 local_3a3;
  undefined1 local_3a2;
  undefined1 local_3a1;
  bool local_3a0;
  undefined1 local_39f [7];
  longlong local_398;
  FRigidClustering *local_390;
  ulonglong local_388;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_380;
  TPBDRigidParticleHandleImp<double,3,1> *local_370;
  float local_368;
  int local_364;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_360;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_358;
  int iStack_350;
  EClusterUnionOperationTiming EStack_34c;
  TBitArray<FDefaultBitArrayAllocator> *local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  uint local_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  TPBDRigidParticleHandleImp<double,3,1> *local_328;
  int local_320 [2];
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_318;
  TPBDRigidParticleHandleImp<double,3,1> *local_310;
  TPBDRigidParticleHandleImp<double,3,1> *local_308;
  int local_300;
  int local_2fc;
  TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_&&,float_const_&> local_2f8;
  int local_2e8;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_2e0;
  TPBDRigidParticleHandleImp<double,3,1> *local_2d8;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_2d0;
  int local_2c8;
  int local_2c4;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_288;
  undefined8 uStack_268;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  initializer_list<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> local_228;
  FSparseArrayAllocationInfo local_218;
  TPBDRigidParticleHandleImp<double,3,1> **local_208;
  float *local_200;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_1f8 [2];
  undefined4 local_1cc;
  undefined4 local_1ac;
  undefined4 local_18c;
  undefined1 local_188 [32];
  EClusterUnionOperationTiming *local_168;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_138;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_3a0 = param_3;
  local_3a5 = param_2;
  local_390 = this;
  local_370 = (TPBDRigidParticleHandleImp<double,3,1> *)param_1;
  local_2d0 = __return_storage_ptr__;
  if ((param_1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) ||
     (pFVar15 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                           (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                            *(int *)&param_1->field_0x8)->field0_0x0, (pFVar15->Bits & 4) == 0)) {
    uVar24 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    uVar24 = uVar24 >> 0x10 ^ uVar24;
    if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
      puVar28 = *(undefined1 **)&(this->MChildren).field_0x40;
      if (puVar28 == (undefined1 *)0x0) {
        puVar28 = &(this->MChildren).field_0x38;
      }
      iVar10 = *(int *)(puVar28 +
                       (ulonglong)(*(int *)&(this->MChildren).field_0x48 - 1U & uVar24) * 4);
      if (iVar10 != -1) {
        lVar32 = *(longlong *)&this->MChildren;
        do {
          if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               ((longlong)iVar10 * 0x20 + lVar32) == param_1) goto LAB_143ca5a0f;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar32);
        } while (iVar10 != -1);
      }
    }
    local_3a6 = 0;
    bVar7 = `Chaos::FRigidClustering::ReleaseClusterParticlesImpl'::__l6::<lambda_1>::operator()
                      (&local_3a6);
    if (bVar7) {
LAB_143ca5a0f:
      if (CVars::bChaosEnableOverrideSingleParticleTypeToCluster == false) {
        fVar45 = 0.0;
        fVar46 = 0.0;
        local_3a7 = 0;
        if (((param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
            (this_01 = (FGeometryCollectionPhysicsProxy *)
                       TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                                 ((TGeometryParticleHandleImp<double,3,1> *)param_1),
            this_01 != (FGeometryCollectionPhysicsProxy *)0x0)) &&
           (*(int *)&this_01->field_0x1c == 2)) {
          fVar46 = (this_01->Parameters).BreakDamagePropagationFactor;
          fVar45 = (this_01->Parameters).ShockDamagePropagationFactor;
          local_3a7 = (this_01->Parameters).bUseDamagePropagation;
          bVar7 = GeometryCollectionPhysicsProxy::Private::BuildGeometryForChildrenOnPT
                            (&this_01->Parameters);
          if (!bVar7) {
            FGeometryCollectionPhysicsProxy::CreateChildrenGeometry_Internal(this_01);
          }
        }
        local_360 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->MChildren,param_1);
        local_2e0 = param_1;
        iVar10 = TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                           (&this->CrumbledSinceLastUpdate,uVar24,&local_2e0);
        local_3a4 = iVar10 != -1;
        local_188._0_8_ = 0;
        bVar7 = false;
        local_188._8_8_ = 0;
        bVar9 = false;
        local_168 = (EClusterUnionOperationTiming *)0x0;
        local_160 = 0;
        local_15c = 0x80;
        local_158 = 0xffffffff;
        local_154 = 0;
        local_148 = (ForElementType<FSetElementId>)0x0;
        local_140 = 0;
        local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ArrayNum = 0;
        local_380.ArrayMax = 0;
        pCVar16 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                             *(int *)&param_1->field_0x8);
        pTVar35 = pCVar16->Id;
        local_318 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                    (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if ((pTVar35 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           (2 < (byte)pTVar35->field_0xc)) {
          local_318 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar35;
        }
        local_138.Elements._0_8_ = 0;
        local_138.Elements._32_8_ = 0;
        local_138.Elements._40_4_ = 0;
        local_138.Elements._52_4_ = 0;
        local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_138.HashSize = 0;
        local_138.Elements._8_8_ = 0;
        local_138.Elements._44_4_ = 0x80;
        local_138.Elements._48_4_ = 0xffffffff;
        uVar24 = local_360->ArrayNum - 1;
        local_388 = 1;
        if (-1 < (int)uVar24) {
          lVar32 = (longlong)(int)uVar24;
          pTVar35 = (TPBDRigidParticleHandleImp<double,3,1> *)(lVar32 * 8);
          do {
            pTVar4 = local_318;
            uVar25 = 0;
            if ((int)uVar24 < local_360->ArrayNum) {
              uVar25 = ~uVar24 >> 0x1f;
            }
            local_398 = lVar32;
            local_308 = pTVar35;
            if ((uVar25 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar6)();
              return pTVar17;
            }
            pTVar33 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)
                            (&pTVar35->field_0x0 + (longlong)(local_360->AllocatorInstance).Data))->
                          field_0xc) {
              pTVar33 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                         (&pTVar35->field_0x0 + (longlong)(local_360->AllocatorInstance).Data);
            }
            if (pTVar33 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              pfVar18 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar33,
                                   *(int *)&pTVar33->field_0x8);
              fVar44 = *pfVar18;
              pfVar18 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar33,
                                   *(int *)&pTVar33->field_0x8);
              local_368 = fVar44;
              if (fVar44 <= *pfVar18) {
                local_368 = *pfVar18;
              }
              pfVar18 = TPBDRigidClusteredParticles<double,3>::Strains
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar33,
                                   *(int *)&pTVar33->field_0x8);
              pTVar35 = local_370;
              if ((*pfVar18 <= local_368) || (local_3a5 != '\0')) {
                bVar8 = !bVar7;
                bVar7 = bVar9;
                if (bVar8) {
                  if (0.0 < RestoreBreakingMomentumPercent) {
                    if (pTVar4 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                      TrackBreakingCollision
                                (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_370);
                    }
                    else {
                      TrackBreakingCollision(this,pTVar4);
                      pTVar35 = local_370;
                    }
                  }
                  local_320[0] = FClusterUnionManager::FindClusterUnionIndexFromParticle
                                           (&this->ClusterUnionManager,pTVar35);
                  if (local_320[0] != -1) {
                    pFVar19 = FClusterUnionManager::FindClusterUnion
                                        (&this->ClusterUnionManager,local_320[0]);
                    if (pFVar19 != (FClusterUnion *)0x0) {
                      FClusterUnionManager::GenerateInterclusterEdgesForParticle
                                (&this->ClusterUnionManager,pFVar19,pTVar35);
                    }
                    RemoveNodeConnections
                              (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar35);
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              (&local_138,&local_300,(bool *)local_320);
                    local_228._First = &local_310;
                    local_228._Last = &local_308;
                    local_310 = pTVar35;
                    TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                    ::
                    TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                              (local_1f8,&local_228);
                    FClusterUnionManager::HandleRemoveOperationWithClusterLookup
                              (&this->ClusterUnionManager,local_1f8,
                               (EClusterUnionOperationTiming)local_388);
                    if (local_1f8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1f8[0].AllocatorInstance.Data);
                    }
                  }
                  bVar7 = true;
                }
                local_364 = FClusterUnionManager::FindClusterUnionIndexFromParticle
                                      (&this->ClusterUnionManager,pTVar33);
                if (local_364 == -1) {
                  RemoveChildFromParent
                            (this,pTVar33,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar35
                            );
                  UpdateTopLevelParticle
                            (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar33);
                  this_00 = local_360;
                  uVar25 = 0;
                  if ((int)uVar24 < local_360->ArrayNum) {
                    uVar25 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                               *)(*pcVar6)();
                    return pTVar17;
                  }
                  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  ::RemoveAtSwapImpl(this_00,uVar24);
                }
                else {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&local_138,&local_2fc,(bool *)&local_364);
                  local_328 = pTVar33;
                  if (((local_380.AllocatorInstance.Data <= (FScriptContainerElement *)&local_328)
                      && ((FScriptContainerElement *)&local_328 <
                          local_380.AllocatorInstance.Data + (longlong)local_380.ArrayMax * 8)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                               *)(*pcVar6)();
                    return pTVar17;
                  }
                  iVar10 = local_380.ArrayNum;
                  if (local_380.ArrayNum == local_380.ArrayMax) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_380.AllocatorInstance,&local_380.ArrayMax);
                  }
                  local_380.ArrayNum = iVar10 + 1;
                  *(TPBDRigidParticleHandleImp<double,3,1> **)
                   (local_380.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_328;
                }
                iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
                if (iVar10 == 0) {
                  iVar12 = (int)local_388;
                  iVar11 = UE::Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x10,8,iVar12,(ForAnyElementType *)__return_storage_ptr__,
                                      (int *)&(__return_storage_ptr__->Elements).field_0x8,
                                      (int *)&(__return_storage_ptr__->Elements).field_0xc);
                  iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
                  puVar28 = &(__return_storage_ptr__->Elements).field_0x10;
                  if ((iVar10 == 0) ||
                     ((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5 !=
                      (int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5)) {
                    iVar13 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
                    if (iVar13 < iVar10 + 1) {
                      uVar25 = iVar13 + 0x1fU >> 5;
                      uVar34 = iVar10 + 0x20U >> 5;
                      if (uVar34 < 5) {
                        iVar12 = 4;
                      }
                      else {
                        uVar26 = (ulonglong)uVar34;
                        if (uVar25 < 5) {
                          uVar25 = 0;
                        }
                        if (uVar25 == 0) {
                          uVar29 = 4;
                          if (4 < uVar26) {
                            uVar29 = uVar26;
                          }
                        }
                        else {
                          uVar29 = ((ulonglong)uVar34 * 3 >> 3) + 0x10 + uVar26;
                        }
                        uVar20 = FMemory::QuantizeSize(uVar29 * 4,0);
                        iVar12 = (int)(uVar20 >> 2);
                        if (iVar12 < (int)uVar34) {
                          iVar12 = 0x7fffffff;
                        }
                      }
                      *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar12 << 5;
                      TBitArray<FDefaultBitArrayAllocator>::Realloc
                                ((TBitArray<FDefaultBitArrayAllocator> *)puVar28,
                                 *(int *)&(__return_storage_ptr__->Elements).field_0x28);
                      iVar12 = (int)local_388;
                    }
                    iVar13 = *(int *)&(__return_storage_ptr__->Elements).field_0x28 + 1;
                    *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar13;
                    uVar34 = iVar13 >> 0x1f & 0x1f;
                    uVar25 = iVar13 + uVar34;
                    iVar13 = (uVar25 & 0x1f) - uVar34;
                    if (iVar13 != 0) {
                      puVar5 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
                      puVar27 = puVar28;
                      if (puVar5 != (undefined1 *)0x0) {
                        puVar27 = puVar5;
                      }
                      *(uint *)(puVar27 + (longlong)((int)uVar25 >> 5) * 4) =
                           *(uint *)(puVar27 + (longlong)((int)uVar25 >> 5) * 4) &
                           0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
                    }
                  }
                  else {
                    *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar10 + 1;
                  }
                  puVar5 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
                  if (puVar5 != (undefined1 *)0x0) {
                    puVar28 = puVar5;
                  }
                  bVar23 = (byte)iVar10 & 0x1f;
                  if (iVar10 < 0) {
                    iVar10 = iVar10 + 0x1f;
                    bVar23 = bVar23 - 0x20;
                  }
                  *(uint *)(puVar28 + (longlong)(iVar10 >> 5) * 4) =
                       *(uint *)(puVar28 + (longlong)(iVar10 >> 5) * 4) &
                       ~(iVar12 << (bVar23 & 0x1f));
                }
                else {
                  iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
                  lVar32 = *(longlong *)&__return_storage_ptr__->Elements;
                  iVar12 = *(int *)(lVar32 + 4 + (longlong)iVar11 * 0x10);
                  iVar10 = iVar10 + -1;
                  *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar12;
                  *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar10;
                  if (iVar10 != 0) {
                    *(undefined4 *)(lVar32 + (longlong)iVar12 * 0x10) = 0xffffffff;
                  }
                }
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)__return_storage_ptr__,&local_218,iVar11);
                if (local_218.Pointer ==
                    (TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> *)0x0) {
                  pTVar36 = (TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*> *)
                            0x0;
                }
                else {
                  *(TPBDRigidParticleHandleImp<double,3,1> **)local_218.Pointer = pTVar33;
                  *(undefined4 *)((longlong)local_218.Pointer + 8) = 0xffffffff;
                  pTVar36 = local_218.Pointer;
                }
                uVar26 = *(ulonglong *)pTVar36;
                uVar25 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
                uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
                iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
                iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
                uVar25 = uVar25 >> 0x10 ^ uVar25;
                if ((iVar10 - iVar11 != 1) && (iVar10 != iVar11)) {
                  FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                  FVar30 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                    FVar30 = FVar3;
                  }
                  iVar10 = *(int *)((longlong)FVar30 +
                                   (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar25) * 4);
                  if (iVar10 != -1) {
                    lVar32 = *(longlong *)&__return_storage_ptr__->Elements;
                    do {
                      if (*(ulonglong *)(lVar32 + (longlong)iVar10 * 0x10) == uVar26) {
                        if (iVar10 != -1) {
                          *(ulonglong *)(lVar32 + (longlong)iVar10 * 0x10) = uVar26;
                          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ::RemoveAtUninitialized
                                    ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                      *)__return_storage_ptr__,local_218.Index,
                                     (EClusterUnionOperationTiming)local_388);
                          goto LAB_143ca6170;
                        }
                        break;
                      }
                      iVar10 = *(int *)(lVar32 + 8 + (longlong)iVar10 * 0x10);
                    } while (iVar10 != -1);
                  }
                }
                TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                ::RehashOrLink(__return_storage_ptr__,uVar25,pTVar36,local_218.Index);
LAB_143ca6170:
                this = local_390;
                SendBreakingEvent(local_390,
                                  (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar33,
                                  local_3a4);
                lVar32 = local_398;
                bVar9 = bVar7;
              }
              if (local_3a7 != 0) {
                local_208 = &local_2d8;
                local_200 = &local_368;
                local_2d8 = pTVar33;
                TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_&&,float_const_&>_>
                          ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float,0>,FDefaultSetAllocator>
                            *)local_188,&local_2f8,(bool *)&local_208);
              }
              pfVar18 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar33,
                                   *(int *)&pTVar33->field_0x8);
              *pfVar18 = 0.0;
            }
            lVar32 = lVar32 + -1;
            pTVar35 = (TPBDRigidParticleHandleImp<double,3,1> *)&local_308[-1].field_0x10;
            uVar24 = uVar24 - 1;
            local_398 = lVar32;
            local_308 = pTVar35;
          } while (-1 < (int)uVar24);
        }
        EVar14 = (EClusterUnionOperationTiming)local_388;
        if (local_380.ArrayNum != 0) {
          FClusterUnionManager::HandleRemoveOperationWithClusterLookup
                    (&this->ClusterUnionManager,&local_380,EVar14);
        }
        uVar24 = local_160;
        if (local_3a7 != 0) {
          iStack_350 = 0;
          local_338 = 0;
          uStack_33c = local_338;
          if (local_160 != 0) {
            pEVar39 = (EClusterUnionOperationTiming *)(local_188 + 0x10);
            if (local_168 != (EClusterUnionOperationTiming *)0x0) {
              pEVar39 = local_168;
            }
            EVar1 = *pEVar39;
            local_338 = 0;
            while (EVar1 == Never) {
              lVar32 = (longlong)iStack_350;
              local_338 = local_338 + 0x20;
              iStack_350 = iStack_350 + 1;
              uStack_33c = local_160;
              if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_350)
              goto LAB_143ca62c0;
              EVar1 = pEVar39[lVar32 + 1];
            }
            EVar14 = -EVar1 & EVar1;
            uVar26 = (ulonglong)EVar14 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_2c4 = (int)lVar32;
            uStack_33c = local_2c4 + -1 + local_338;
            if ((int)local_160 < (int)uStack_33c) {
              uStack_33c = local_160;
            }
          }
LAB_143ca62c0:
          local_358 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)local_188;
          uStack_334 = local_1cc;
          local_348 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
          uVar25 = local_160 & 0xffffffe0;
          iStack_330 = local_188._8_4_ - local_154;
          uStack_340 = 0xffffffff;
          TStack_2b8.CurrentBitIndex = uStack_33c;
          TStack_2b8.UnvisitedBitMask = 0xffffffff;
          TStack_2b8._padding_ = CONCAT44(EVar14,iStack_350);
          iVar10 = (int)local_160 >> 5;
          TStack_2b8._28_4_ = local_1cc;
          TStack_2b8.BaseBitIndex = local_338;
          uStack_298 = CONCAT44(uStack_32c,iStack_330);
          bVar23 = (byte)local_160;
          local_398 = CONCAT44(local_398._4_4_,local_160);
          EStack_34c = EVar14;
          local_2c0 = local_358;
          TStack_2b8.Array = local_348;
          if (((int)local_160 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                       *)(*pcVar6)();
            return pTVar17;
          }
          if (uVar24 != local_160) {
            pEVar39 = (EClusterUnionOperationTiming *)(local_188 + 0x10);
            if (local_168 != (EClusterUnionOperationTiming *)0x0) {
              pEVar39 = local_168;
            }
            EVar14 = -1 << (bVar23 & 0x1f) & pEVar39[iVar10];
            while (EVar14 == Never) {
              lVar32 = (longlong)iVar10;
              uVar25 = uVar25 + 0x20;
              iVar10 = iVar10 + 1;
              if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) {
                local_398 = CONCAT44(local_398._4_4_,local_160);
                uVar24 = local_160;
                goto LAB_143ca63f0;
              }
              EVar14 = pEVar39[lVar32 + 1];
            }
            uVar26 = (ulonglong)(-EVar14 & EVar14) * 2 + 1;
            lVar32 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_2e8 = (int)lVar32;
            uVar24 = (uVar25 - 1) + local_2e8;
            if ((int)local_160 < (int)uVar24) {
              uVar24 = local_160;
            }
            local_398 = CONCAT44(local_398._4_4_,uVar24);
          }
LAB_143ca63f0:
          while( true ) {
            pTVar17 = local_2c0;
            if (*(int *)&(local_2c0->Elements).field_0x8 - *(int *)&(local_2c0->Elements).field_0x34
                != (int)uStack_298) {
              local_3a3 = 0;
              `TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a3);
            }
            if (((TStack_2b8.CurrentBitIndex == uVar24) &&
                (TStack_2b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10))) &&
               (pTVar17 ==
                (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                 *)local_188)) break;
            lVar32 = *(longlong *)&pTVar17->Elements;
            pTVar4 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                      (lVar32 + (longlong)TStack_2b8.CurrentBitIndex * 0x18);
            fVar44 = *(float *)(lVar32 + 8 + (longlong)TStack_2b8.CurrentBitIndex * 0x18);
            pTVar31 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar4->field_0xc) {
              pTVar31 = pTVar4;
            }
            if ((0.0 < fVar46) &&
               (uVar25 = ((uint)((ulonglong)pTVar4 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pTVar4 >> 4)) * -0x7a143595,
               uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb,
               *(int *)&(__return_storage_ptr__->Elements).field_0x8 !=
               *(int *)&(__return_storage_ptr__->Elements).field_0x34)) {
              FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar30 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar30 = FVar3;
              }
              iVar10 = *(int *)((longlong)FVar30 +
                               (ulonglong)
                               (__return_storage_ptr__->HashSize - 1U & (uVar25 >> 0x10 ^ uVar25)) *
                               4);
              if (iVar10 != -1) {
                do {
                  if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                       (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar10 * 0x10) ==
                      pTVar4) {
                    pfVar18 = TPBDRigidClusteredParticles<double,3>::Strains
                                        (*(TPBDRigidClusteredParticles<double,3> **)pTVar31,
                                         *(int *)&pTVar31->field_0x8);
                    fVar44 = fVar44 - *pfVar18;
                    if (fVar44 <= 0.0) goto LAB_143ca6625;
                    pTVar21 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ConnectivityEdges
                                        (pTVar31);
                    fVar44 = (fVar44 * fVar46) / (float)pTVar21->ArrayNum;
                    goto LAB_143ca64e7;
                  }
                  iVar10 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                                   (longlong)iVar10 * 0x10);
                } while (iVar10 != -1);
              }
            }
            if (0.0 < fVar45) {
              fVar44 = fVar44 * fVar45;
LAB_143ca64e7:
              if (0.0 < fVar44) {
                uVar24 = *(uint *)&pTVar31->field_0x8;
                lVar37 = (longlong)(int)uVar24;
                lVar32 = *(longlong *)pTVar31;
                uVar25 = 0;
                if ((int)uVar24 < *(int *)(lVar32 + 0x688)) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                             *)(*pcVar6)();
                  return pTVar17;
                }
                pFVar42 = local_390;
                lVar32 = *(longlong *)(lVar32 + 0x680);
                iVar10 = *(int *)(lVar32 + 8 + lVar37 * 0x10);
                plVar38 = *(longlong **)(lVar32 + lVar37 * 0x10);
                plVar41 = plVar38 + (longlong)iVar10 * 2;
                while( true ) {
                  if (*(int *)(lVar32 + 8 + lVar37 * 0x10) != iVar10) {
                    local_3a2 = 0;
                    `TCheckedPointerIterator<Chaos::TConnectivityEdge<double>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_3a2);
                  }
                  if (plVar38 == plVar41) break;
                  pTVar4 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar38;
                  if (pTVar4 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                    pTVar31 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                    if (2 < (byte)pTVar4->field_0xc) {
                      pTVar31 = pTVar4;
                    }
                    if (pTVar31 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                      pfVar18 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar31,
                                           *(int *)&pTVar31->field_0x8);
                      fVar43 = *pfVar18;
                      if (*pfVar18 <= fVar44) {
                        fVar43 = fVar44;
                      }
                      pfVar18 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar31,
                                           *(int *)&pTVar31->field_0x8);
                      *pfVar18 = fVar43;
                      UpdateTopLevelParticle(pFVar42,pTVar31);
                    }
                  }
                  plVar38 = plVar38 + 2;
                }
                __return_storage_ptr__ = local_2d0;
                uVar24 = (uint)local_398;
              }
            }
LAB_143ca6625:
            TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
          }
        }
        pFVar42 = local_390;
        this_02 = local_390;
        if (0 < *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                *(int *)&(__return_storage_ptr__->Elements).field_0x34) {
          bVar7 = FClusterUnionManager::IsClusterUnionParticle
                            (&local_390->ClusterUnionManager,
                             (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_370);
          if (local_360->ArrayNum == 0) {
            local_360->ArrayNum = 0;
            if (local_360->ArrayMax != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_360->AllocatorInstance,0,&local_360->ArrayMax);
            }
          }
          local_358 = __return_storage_ptr__;
          if (UseConnectivity != 0) {
            iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            local_348 = (TBitArray<FDefaultBitArrayAllocator> *)
                        &(__return_storage_ptr__->Elements).field_0x10;
            iStack_350 = 0;
            local_338 = 0;
            EStack_34c = (EClusterUnionOperationTiming)local_388;
            uStack_33c = 0;
            if (iVar10 != 0) {
              puVar40 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              if (puVar40 == (uint *)0x0) {
                puVar40 = (uint *)local_348;
              }
              uVar24 = *puVar40;
              iStack_350 = 0;
              local_338 = 0;
              while (uVar24 == 0) {
                lVar32 = (longlong)iStack_350;
                local_338 = local_338 + 0x20;
                iStack_350 = iStack_350 + 1;
                uStack_33c = iVar10;
                if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_350)
                goto LAB_143ca674e;
                uVar24 = puVar40[lVar32 + 1];
              }
              EStack_34c = -uVar24 & uVar24;
              uVar26 = (ulonglong)EStack_34c * 2 + 1;
              lVar32 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                }
              }
              local_2c8 = (int)lVar32;
              uStack_33c = local_2c8 + -1 + local_338;
              if (iVar10 < (int)uStack_33c) {
                uStack_33c = iVar10;
              }
            }
LAB_143ca674e:
            uVar24 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
            puVar28 = &(__return_storage_ptr__->Elements).field_0x10;
            uStack_334 = local_1ac;
            iStack_330 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                         *(int *)&(__return_storage_ptr__->Elements).field_0x34;
            uVar25 = uVar24 & 0xffffffe0;
            TStack_288._padding_ = CONCAT44(EStack_34c,iStack_350);
            uStack_340 = 0xffffffff;
            TStack_288.CurrentBitIndex = uStack_33c;
            TStack_288.UnvisitedBitMask = 0xffffffff;
            iVar10 = (int)uVar24 >> 5;
            TStack_288._28_4_ = local_1ac;
            TStack_288.BaseBitIndex = local_338;
            uStack_268 = CONCAT44(uStack_32c,iStack_330);
            local_290 = __return_storage_ptr__;
            TStack_288.Array = local_348;
            if (((int)uVar24 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar6)();
              return pTVar17;
            }
            pFVar42 = local_390;
            uVar34 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
            if (uVar24 != uVar34) {
              puVar5 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar27 = puVar28;
              if (puVar5 != (undefined1 *)0x0) {
                puVar27 = puVar5;
              }
              uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar10 * 4);
              while (uVar24 == 0) {
                lVar32 = (longlong)iVar10;
                uVar25 = uVar25 + 0x20;
                iVar10 = iVar10 + 1;
                uVar24 = uVar34;
                if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
                goto LAB_143ca684e;
                uVar24 = *(uint *)(puVar27 + lVar32 * 4 + 4);
              }
              uVar26 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
              lVar32 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                }
              }
              local_2f8.Key._4_4_ = (int)lVar32;
              uVar24 = (uVar25 - 1) + local_2f8.Key._4_4_;
              if ((int)uVar34 < (int)uVar24) {
                uVar24 = uVar34;
              }
            }
LAB_143ca684e:
            while( true ) {
              pTVar17 = local_290;
              if (*(int *)&(local_290->Elements).field_0x8 -
                  *(int *)&(local_290->Elements).field_0x34 != (int)uStack_268) {
                local_3a1 = 0;
                `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a1);
              }
              if (((TStack_288.CurrentBitIndex == uVar24) &&
                  (TStack_288.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar28)) &&
                 (pTVar17 == __return_storage_ptr__)) break;
              pTVar4 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                        (*(longlong *)&pTVar17->Elements +
                        (longlong)TStack_288.CurrentBitIndex * 0x10);
              pTVar31 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)pTVar4->field_0xc) {
                pTVar31 = pTVar4;
              }
              RemoveNodeConnections(pFVar42,pTVar31);
              TStack_288.UnvisitedBitMask =
                   TStack_288.UnvisitedBitMask & ~TStack_288._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_288);
            }
            pTVar17 = HandleConnectivityOnReleaseClusterParticle
                                (pFVar42,&local_e8,
                                 (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_370,
                                 local_3a0);
            TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
            ::Append<FDefaultSetAllocator>(__return_storage_ptr__,pTVar17);
            local_e8.HashSize = 0;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_e8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_e8.Elements);
          }
          local_338 = 0;
          uVar24 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
          local_348 = (TBitArray<FDefaultBitArrayAllocator> *)
                      &(__return_storage_ptr__->Elements).field_0x10;
          iStack_350 = 0;
          uStack_33c = local_338;
          if (uVar24 != 0) {
            puVar40 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            if (puVar40 == (uint *)0x0) {
              puVar40 = (uint *)local_348;
            }
            uVar25 = *puVar40;
            local_338 = 0;
            while (uVar25 == 0) {
              lVar32 = (longlong)iStack_350;
              local_338 = local_338 + 0x20;
              iStack_350 = iStack_350 + 1;
              uStack_33c = uVar24;
              if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_350)
              goto LAB_143ca69a1;
              uVar25 = puVar40[lVar32 + 1];
            }
            local_388 = (ulonglong)(-uVar25 & uVar25);
            uVar26 = local_388 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_2f8.Value._4_4_ = (int)lVar32;
            uStack_33c = (local_338 - 1) + local_2f8.Value._4_4_;
            if ((int)uVar24 < (int)uStack_33c) {
              uStack_33c = uVar24;
            }
          }
LAB_143ca69a1:
          uVar24 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
          puVar28 = &(__return_storage_ptr__->Elements).field_0x10;
          EStack_34c = (EClusterUnionOperationTiming)local_388;
          uStack_334 = local_18c;
          iStack_330 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                       *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          uStack_340 = 0xffffffff;
          uVar34 = uVar24 & 0xffffffe0;
          TStack_258.CurrentBitIndex = uStack_33c;
          TStack_258.UnvisitedBitMask = 0xffffffff;
          uVar25 = -1 << ((byte)uVar24 & 0x1f);
          TStack_258._padding_ = CONCAT44(EStack_34c,iStack_350);
          iVar10 = (int)uVar24 >> 5;
          local_398 = CONCAT44(local_398._4_4_,uVar25);
          TStack_258._28_4_ = local_18c;
          TStack_258.BaseBitIndex = local_338;
          uStack_238 = CONCAT44(uStack_32c,iStack_330);
          local_358 = __return_storage_ptr__;
          local_260 = __return_storage_ptr__;
          TStack_258.Array = local_348;
          if ((int)uVar24 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                         *)(*pcVar6)();
              return pTVar17;
            }
            uVar25 = (uint)local_398;
          }
          this_02 = local_390;
          uVar2 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
          if (uVar24 != uVar2) {
            puVar5 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar27 = puVar28;
            if (puVar5 != (undefined1 *)0x0) {
              puVar27 = puVar5;
            }
            uVar25 = uVar25 & *(uint *)(puVar27 + (longlong)iVar10 * 4);
            while (uVar25 == 0) {
              lVar32 = (longlong)iVar10;
              uVar34 = uVar34 + 0x20;
              iVar10 = iVar10 + 1;
              uVar24 = uVar2;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
              goto LAB_143ca6ad0;
              uVar25 = *(uint *)(puVar27 + lVar32 * 4 + 4);
            }
            uVar26 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
            lVar32 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_2f8.Value._0_4_ = (int)lVar32;
            uVar24 = (uVar34 - 1) + (int)local_2f8.Value;
            if ((int)uVar2 < (int)uVar24) {
              uVar24 = uVar2;
            }
          }
LAB_143ca6ad0:
          do {
            pTVar17 = local_260;
            if (*(int *)&(local_260->Elements).field_0x8 - *(int *)&(local_260->Elements).field_0x34
                != (int)uStack_238) {
              local_39f[0] = 0;
              `TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_39f);
            }
            if (((TStack_258.CurrentBitIndex == uVar24) &&
                (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar28)) &&
               (pTVar17 == __return_storage_ptr__)) {
              if (!bVar7) {
                DisableCluster(this_02,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_370)
                ;
              }
              break;
            }
            pTVar35 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                       (*(longlong *)&pTVar17->Elements +
                       (longlong)TStack_258.CurrentBitIndex * 0x10);
            pTVar33 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar35->field_0xc) {
              pTVar33 = pTVar35;
            }
            if ((pTVar33 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
               (pCVar16 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                    (*(TPBDRigidClusteredParticles<double,3> **)pTVar33,
                                     *(int *)&pTVar33->field_0x8),
               pCVar16->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) {
LAB_143ca6bfa:
              UpdateKinematicProperties(pTVar35,&pFVar42->MChildren,this_02->MEvolution);
            }
            else {
              pCVar16 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar33,
                                   *(int *)&pTVar33->field_0x8);
              pTVar22 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)pCVar16->Id->field_0xc) {
                pTVar22 = pCVar16->Id;
              }
              if (pTVar22 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143ca6bfa;
              uVar25 = *(uint *)&pTVar33->field_0x8;
              lVar32 = *(longlong *)pTVar33;
              uVar34 = 0;
              if ((int)uVar25 < *(int *)(lVar32 + 0x2e0)) {
                uVar34 = ~uVar25 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                           *)(*pcVar6)();
                return pTVar17;
              }
              if ((*(char *)(*(longlong *)(lVar32 + 0x2d8) + 0xd + (longlong)(int)uVar25 * 0x10) ==
                   '\0') &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ClusteredChild->Disabled()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                     ,0x531,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                pTVar17 = (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                           *)(*pcVar6)();
                return pTVar17;
              }
            }
            TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
          } while( true );
        }
        Chaos::`anonymous_namespace'::
        GenericThrottleReleasedParticlesIfNecessary<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
                  (__return_storage_ptr__,this_02);
        this_02->FrameReleasedChildren =
             this_02->FrameReleasedChildren +
             (*(int *)&(__return_storage_ptr__->Elements).field_0x8 -
             *(int *)&(__return_storage_ptr__->Elements).field_0x34);
        local_138.HashSize = 0;
        if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_138.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_138.Elements);
        if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
        }
        local_140 = 0;
        if (local_148 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_148);
        }
        TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_188);
      }
    }
  }
  return __return_storage_ptr__;
}

// ReleaseClusterParticlesNoInternalCluster @ 143ca6cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
* __thiscall
Chaos::FRigidClustering::ReleaseClusterParticlesNoInternalCluster
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticlesNoInternalCluster> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res10;
  FStatMessage local_48;
  FName local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster;
  if (StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticlesNoInternalCluster>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,"STAT_ReleaseClusterParticlesNoInternalCluster");
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ReleaseClusterParticlesNoInternalCluster>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ReleaseClusterParticlesNoInternalCluster,*pFVar5,
                       L"TPBDRigidClustering<>::ReleaseClusterParticlesNoInternalCluster",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar2 = *(FName *)FVar6;
  bVar3 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar8 = FVar2.ComparisonIndex.Value;
  uVar7 = FVar2.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    ReleaseClusterParticlesImpl(this,__return_storage_ptr__,param_1,param_2,false);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x450);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable != false;
    FVar9 = local_38;
    if (bVar11) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      local_38 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      FVar9 = FVar2;
      FVar10.Value = local_38.ComparisonIndex.Value;
    }
    ReleaseClusterParticlesImpl(this,__return_storage_ptr__,param_1,param_2,false);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_48.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res10);
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_48);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// RemoveChildFromParent @ 143ca79e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FRigidClustering::RemoveChildFromParent
          (FRigidClustering *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2)

{
  TMap<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ClusterId *pCVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  TRotation<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  TTransform<double> *pTVar19;
  TRotation<float,3> *pTVar20;
  TVector<double,3> *pTVar21;
  TVector<float,3> *pTVar22;
  TVector<float,3> *pTVar23;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar24;
  FRigidClusteredFlags_u_0 *pFVar25;
  IPhysicsProxyBase *pIVar26;
  longlong *plVar27;
  uint uVar28;
  undefined1 *puVar29;
  TGeometryParticleHandleImp<double,3,1> *pTVar30;
  TGeometryParticleHandleImp<double,3,1> *pTVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_378 [32];
  TGeometryParticleHandleImp<double,3,1> *local_328;
  int local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  undefined1 local_2ec [12];
  IPhysicsProxyBase *local_2e0;
  IPhysicsProxyBase **local_2d8;
  TPBDRigidParticleHandleImp<double,3,1> *local_2d0;
  int iStack_2c8;
  undefined4 uStack_2c4;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  TVector<float,3> local_278;
  TVector<float,3> local_26c;
  TVector<float,3> local_260;
  TVector<float,3> local_254;
  TVector<float,3> local_248;
  TVector<float,3> local_23c;
  TVector<float,3> local_230;
  TVector<float,3> local_224;
  TVector<float,3> local_218;
  TVector<float,3> local_20c [2];
  double local_1f0;
  TRotation<float,3> local_1e8 [3];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  TRotation<double,3> local_178;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_328 = (TGeometryParticleHandleImp<double,3,1> *)param_2;
  if ((param_1 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) ||
     (param_2 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5292282805487666064>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                        ,0x390,"Child != nullptr && ClusteredParent != nullptr");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar30 = pTVar31;
    if (2 < (byte)param_1->field_0xc) {
      pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)param_1;
    }
    if (pTVar30 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      local_2ec._4_8_ = pTVar30;
      pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                          ((TPBDRigidClusteredParticles<double,3> *)pTVar30->_padding_,
                           (int)pTVar30->_padding_);
      pTVar16 = pTVar31;
      if (pCVar15->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar30->_padding_,
                             (int)pTVar30->_padding_);
        if (2 < *(byte *)((longlong)
                          &((TGeometryParticleHandleImp<double,3,1> *)pCVar15->Id)->_padding_ + 4))
        {
          pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)pCVar15->Id;
        }
      }
      if (pTVar16 == local_328) {
        FPBDRigidsEvolutionBase::EnableParticle
                  ((FPBDRigidsEvolutionBase *)this->MEvolution,
                   (TGeometryParticleHandleImp<double,3,1> *)param_1);
        TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
        ::Emplace<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                  (&this->TopLevelClusterParents,
                   (TPBDRigidClusteredParticleHandleImp<double,3,1> **)local_2ec,
                   (bool *)(local_2ec + 4));
        pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar30->_padding_,
                             (int)pTVar30->_padding_);
        local_2d0 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        iStack_2c8 = pCVar15->NumChildren;
        pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar30->_padding_,
                             (int)pTVar30->_padding_);
        pCVar15->Id = local_2d0;
        *(ulonglong *)&pCVar15->NumChildren = CONCAT44(uStack_2c4,iStack_2c8);
        pTVar17 = TPBDRigidParticleHandleImp<double,3,1>::GetQ
                            ((TPBDRigidParticleHandleImp<double,3,1> *)local_328,&local_178);
        pTVar18 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)local_328);
        local_f8.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar17->field_0x10;
        local_f8.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar17->field_0x18;
        local_f8.Rotation.XY.m128d_f64[0] = *(double *)pTVar17;
        local_f8.Rotation.XY.m128d_f64[1] = *(double *)&pTVar17->field_0x8;
        local_f8.Translation.XY.m128d_f64[0] = *(double *)pTVar18;
        local_f8.Translation.XY.m128d_f64[1] = *(double *)&pTVar18->field_0x8;
        local_f8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar18->field_0x10;
        local_f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_f8.Translation.ZW.m128d_f64[1] = 0.0;
        local_f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        pTVar19 = (TTransform<double> *)
                  TPBDRigidClusteredParticles<double,3>::ChildToParent
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar30->_padding_,
                             (int)pTVar30->_padding_);
        local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_158,pTVar19,&local_f8);
        dVar11 = local_158.Translation.XY.m128d_f64[1];
        dVar10 = local_158.Translation.XY.m128d_f64[0];
        dStack_280 = local_158.Rotation.ZW.m128d_f64[1];
        local_288 = local_158.Rotation.ZW.m128d_f64[0];
        dStack_290 = local_158.Rotation.XY.m128d_f64[1];
        local_298 = local_158.Rotation.XY.m128d_f64[0];
        local_1a8 = local_158.Translation.ZW.m128d_f64[0];
        dStack_1a0 = local_158.Translation.ZW.m128d_f64[1];
        local_198 = local_158.Scale3D.XY.m128d_f64[0];
        dStack_190 = local_158.Scale3D.XY.m128d_f64[1];
        local_188 = local_158.Scale3D.ZW.m128d_f64[0];
        dStack_180 = local_158.Scale3D.ZW.m128d_f64[1];
        local_2a0 = local_158.Translation.ZW.m128d_f64[0];
        local_1b8 = local_158.Translation.XY.m128d_f64[0];
        dStack_1b0 = local_158.Translation.XY.m128d_f64[1];
        local_2b0 = local_158.Translation.XY.m128d_f64[0];
        dStack_2a8 = local_158.Translation.XY.m128d_f64[1];
        uVar28 = *(uint *)&param_1->field_0x8;
        lVar8 = *(longlong *)param_1;
        local_1f0 = local_158.Translation.ZW.m128d_f64[0];
        uVar13 = 0;
        if ((int)uVar28 < *(int *)(lVar8 + 0x30)) {
          uVar13 = ~uVar28 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)(lVar8 + 0x28);
        pdVar1 = (double *)(lVar8 + (longlong)(int)uVar28 * 0x18);
        *pdVar1 = dVar10;
        pdVar1[1] = dVar11;
        *(double *)(lVar8 + 0x10 + (longlong)(int)uVar28 * 0x18) = local_1f0;
        TGeometryParticleHandleImp<double,3,1>::SetR
                  ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                   (TRotation<double,3> *)&local_298,false);
        pTVar18 = TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        TPBDRigidParticleHandleImp<double,3,1>::SetP(param_1,pTVar18);
        pTVar20 = TGeometryParticleHandleImp<double,3,1>::GetRf
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1,local_1e8);
        TPBDRigidParticleHandleImp<double,3,1>::SetQf(param_1,pTVar20);
        pTVar18 = TPBDRigidParticleHandleImp<double,3,1>::GetP(param_1);
        pTVar21 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)local_328);
        fVar34 = (float)(*(double *)pTVar18 - *(double *)pTVar21);
        fVar33 = (float)(*(double *)&pTVar18->field_0x8 - *(double *)&pTVar21->field_0x8);
        fVar32 = (float)(*(double *)&pTVar18->field_0x10 - *(double *)&pTVar21->field_0x10);
        pTVar22 = TKinematicGeometryParticleHandleImp<double,3,1>::GetVf
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,&local_278);
        pTVar23 = TKinematicGeometryParticleHandleImp<double,3,1>::GetVf
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)local_328,&local_26c
                            );
        fVar2 = *(float *)&pTVar22->field_0x8;
        fVar3 = *(float *)&pTVar22->field_0x4;
        fVar4 = *(float *)pTVar23;
        fVar5 = *(float *)pTVar22;
        fVar6 = *(float *)&pTVar23->field_0x8;
        fVar7 = *(float *)&pTVar23->field_0x4;
        pTVar22 = TKinematicGeometryParticleHandleImp<double,3,1>::GetWf
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)local_328,&local_260
                            );
        local_31c = (*(float *)&pTVar22->field_0x4 * fVar32 - *(float *)&pTVar22->field_0x8 * fVar33
                    ) + fVar4 + fVar5;
        local_314 = (*(float *)pTVar22 * fVar33 - *(float *)&pTVar22->field_0x4 * fVar34) +
                    fVar2 + fVar6;
        local_318 = (*(float *)&pTVar22->field_0x8 * fVar34 - *(float *)pTVar22 * fVar32) +
                    fVar3 + fVar7;
        TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
                  ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,
                   (TVector<float,3> *)&local_31c,false);
        pTVar22 = TKinematicGeometryParticleHandleImp<double,3,1>::GetWf
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,&local_254);
        pTVar23 = TKinematicGeometryParticleHandleImp<double,3,1>::GetWf
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)local_328,&local_248
                            );
        local_310 = *(float *)pTVar23 + *(float *)pTVar22;
        local_30c = *(float *)&pTVar22->field_0x4 + *(float *)&pTVar23->field_0x4;
        local_308 = *(float *)&pTVar22->field_0x8 + *(float *)&pTVar23->field_0x8;
        TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
                  ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,
                   (TVector<float,3> *)&local_310,false);
        pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetPreVf(param_1,&local_23c);
        pTVar23 = TPBDRigidParticleHandleImp<double,3,1>::GetPreVf
                            ((TPBDRigidParticleHandleImp<double,3,1> *)local_328,&local_230);
        fVar2 = *(float *)&pTVar22->field_0x8;
        fVar3 = *(float *)&pTVar22->field_0x4;
        fVar4 = *(float *)pTVar22;
        fVar5 = *(float *)&pTVar23->field_0x8;
        fVar6 = *(float *)&pTVar23->field_0x4;
        fVar7 = *(float *)pTVar23;
        pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetPreWf
                            ((TPBDRigidParticleHandleImp<double,3,1> *)local_328,&local_224);
        local_304 = (*(float *)&pTVar22->field_0x4 * fVar32 - *(float *)&pTVar22->field_0x8 * fVar33
                    ) + fVar4 + fVar7;
        local_2fc = (*(float *)pTVar22 * fVar33 - *(float *)&pTVar22->field_0x4 * fVar34) +
                    fVar2 + fVar5;
        local_300 = (*(float *)&pTVar22->field_0x8 * fVar34 - *(float *)pTVar22 * fVar32) +
                    fVar3 + fVar6;
        TPBDRigidParticleHandleImp<double,3,1>::SetPreVf(param_1,(TVector<float,3> *)&local_304);
        pTVar22 = TPBDRigidParticleHandleImp<double,3,1>::GetPreWf(param_1,&local_218);
        pTVar23 = TPBDRigidParticleHandleImp<double,3,1>::GetPreWf
                            ((TPBDRigidParticleHandleImp<double,3,1> *)local_328,local_20c);
        local_2f8 = *(float *)pTVar22 + *(float *)pTVar23;
        local_2f4 = *(float *)&pTVar22->field_0x4 + *(float *)&pTVar23->field_0x4;
        local_2f0 = *(float *)&pTVar22->field_0x8 + *(float *)&pTVar23->field_0x8;
        TPBDRigidParticleHandleImp<double,3,1>::SetPreWf(param_1,(TVector<float,3> *)&local_2f8);
        pTVar30 = local_328;
        pTVar24 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->MChildren,
                         (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_328);
        pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar24->field_0x8;
        if (pTVar24 ==
            (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar16 = pTVar31;
        }
        if (pTVar16 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          local_2c0 = TPBDRigidClusteredParticleHandleImp<double,3,1>::Parent
                                ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar30);
          uStack_2b8 = (undefined4)pTVar16->_padding_;
          pCVar15 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)local_328->_padding_,
                               (int)local_328->_padding_);
          pCVar15->Id = (TPBDRigidParticleHandleImp<double,3,1> *)local_2c0;
          *(ulonglong *)&pCVar15->NumChildren = CONCAT44(uStack_2b4,uStack_2b8);
          pFVar25 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                               ((TPBDRigidClusteredParticles<double,3> *)local_328->_padding_,
                                (int)local_328->_padding_)->field0_0x0;
          if (((((pFVar25->Bits & 1) != 0) && ((int)pTVar16->_padding_ == 0)) &&
              (pIVar26 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(local_328),
              pIVar26 != (IPhysicsProxyBase *)0x0)) &&
             (pIVar26 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(local_328),
             pIVar26->Type == GeometryCollectionType)) {
            DisableParticle(this,(TPBDRigidParticleHandleImp<double,3,1> *)local_328,true);
            this_00 = &this->EmptyInternalClustersPerProxy;
            local_2e0 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(local_328);
            uVar28 = ((uint)((ulonglong)local_2e0 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_2e0 >> 4)) * -0x7a143595;
            uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
            uVar28 = uVar28 >> 0x10 ^ uVar28;
            if (*(int *)&(this->EmptyInternalClustersPerProxy).field_0x8 !=
                *(int *)&(this->EmptyInternalClustersPerProxy).field_0x34) {
              puVar29 = *(undefined1 **)&(this->EmptyInternalClustersPerProxy).field_0x40;
              if (puVar29 == (undefined1 *)0x0) {
                puVar29 = &(this->EmptyInternalClustersPerProxy).field_0x38;
              }
              iVar14 = *(int *)(puVar29 +
                               (ulonglong)
                               (*(int *)&(this->EmptyInternalClustersPerProxy).field_0x48 - 1U &
                               uVar28) * 4);
              if (iVar14 != -1) {
                do {
                  plVar27 = (longlong *)((longlong)iVar14 * 0x20 + *(longlong *)&this_00->field_0x0)
                  ;
                  if ((IPhysicsProxyBase *)*plVar27 == local_2e0) {
                    if (plVar27 != (longlong *)0x0) goto LAB_143ca80eb;
                    break;
                  }
                  iVar14 = (int)plVar27[3];
                } while (iVar14 != -1);
              }
            }
            local_2d8 = &local_2e0;
            TSet<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<IPhysicsProxyBase_*_&&>_>
                      ((TSet<TTuple<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00,(uint)&local_320,
                       (TKeyInitializer<IPhysicsProxyBase_*_&&> *)(ulonglong)uVar28,
                       (bool *)&local_2d8);
            plVar27 = (longlong *)((longlong)local_320 * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_143ca80eb:
            if ((((TGeometryParticleHandleImp<double,3,1> **)plVar27[1] <= &local_328) &&
                (&local_328 <
                 (TGeometryParticleHandleImp<double,3,1> **)plVar27[1] +
                 *(int *)((longlong)plVar27 + 0x14))) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar14 = (int)plVar27[2];
            if (iVar14 == *(int *)((longlong)plVar27 + 0x14)) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)(plVar27 + 1),
                                  (int *)((longlong)plVar27 + 0x14));
            }
            *(int *)(plVar27 + 2) = iVar14 + 1;
            *(TGeometryParticleHandleImp<double,3,1> **)
             (((ForAnyElementType *)(plVar27 + 1))->Data + (longlong)iVar14 * 8) = local_328;
          }
        }
      }
    }
  }
  return;
}

// RemoveChildFromParentAndChildrenArray @ 143ca8200

void __thiscall
Chaos::FRigidClustering::RemoveChildFromParentAndChildrenArray
          (FRigidClustering *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  pTVar5 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_2);
  plVar9 = (longlong *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar9;
    for (plVar8 = plVar1; plVar8 != plVar1 + (int)plVar9[1]; plVar8 = plVar8 + 1) {
      if ((TPBDRigidParticleHandleImp<double,3,1> *)*plVar8 == param_1) {
        uVar7 = (uint)((longlong)plVar8 - (longlong)plVar1 >> 3);
        if (uVar7 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar7 < (int)plVar9[1]) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          iVar4 = (int)plVar9[1] + ~uVar7;
          if (1 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            memmove((void *)(*plVar9 + (longlong)(int)uVar7 * 8),
                    (void *)(*plVar9 + (longlong)((int)plVar9[1] - iVar4) * 8),(longlong)iVar4 << 3)
            ;
          }
          *(int *)(plVar9 + 1) = (int)plVar9[1] + -1;
        }
        break;
      }
    }
  }
  RemoveChildFromParent(this,param_1,param_2);
  return;
}

// RemoveFromMomentumRestoringStructures @ 143ca8330

void __thiscall
Chaos::FRigidClustering::RemoveFromMomentumRestoringStructures
          (FRigidClustering *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData,0>,FDefaultSetAllocator>
            *)&this->MomentumRestoringDataByParticle,param_1);
  return;
}

// RemoveNodeConnections @ 143ca8350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::RemoveNodeConnections
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveNodeConnections> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_RemoveNodeConnections;
  if (StatPtr_STAT_RemoveNodeConnections ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveNodeConnections>)0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_RemoveNodeConnections");
    FVar5 = (FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveNodeConnections>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveNodeConnections,*pFVar4,
                       L"TPBDRigidClustering<>::RemoveNodeConnections","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    RemoveFilteredNodeConnections<bool>(this,param_1,(bool *)&local_res18);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar7.Value;
        local_res18.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0xc12);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res18.s.LowPart = FVar7.Value;
      local_res18.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    RemoveFilteredNodeConnections<bool>(this,param_1,(bool *)&local_res18);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res18);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// RemoveNodeConnections @ 143ca85d0

void __thiscall
Chaos::FRigidClustering::RemoveNodeConnections
          (FRigidClustering *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)param_1->field_0xc) {
    pTVar1 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)param_1;
  }
  RemoveNodeConnections(this,pTVar1);
  return;
}

// RemoveParticlesFromCluster @ 143ca85f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::RemoveParticlesFromCluster
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FUniqueIdx FVar1;
  int iVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  FPBDRigidsEvolutionGBF *pFVar4;
  FPBDRigidsSOAs *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FSpatialAccelerationIdx FVar8;
  undefined2 uVar9;
  undefined7 uVar10;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FName FVar12;
  FRigidClustering *pFVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveParticlesFromCluster> FVar18;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar19;
  float *pfVar20;
  ClusterId *pCVar21;
  FRigidClusteredFlags_u_0 *pFVar22;
  IPhysicsProxyBase *pIVar23;
  IPhysicsProxyBase *pIVar24;
  bool *pbVar25;
  FUniqueIdx *pFVar26;
  FPendingSpatialData *pFVar27;
  TGeometryParticle<double,3> **ppTVar28;
  FSpatialAccelerationIdx *pFVar29;
  FPendingSpatialData *pFVar30;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *pTVar31;
  byte bVar32;
  uint uVar33;
  longlong *plVar34;
  ulonglong uVar35;
  TGeometryParticleHandleImp<double,3,1> *pTVar36;
  ForElementType<unsigned_int> FVar37;
  ForElementType<FSetElementId> FVar38;
  undefined1 *puVar39;
  int iVar40;
  FScriptContainerElement *pFVar41;
  TGeometryParticleHandleImp<double,3,1> *pTVar42;
  longlong lVar43;
  FName FVar44;
  FScriptContainerElement *pFVar45;
  uint uVar46;
  uint uVar47;
  FScriptContainerElement *pFVar48;
  float fVar49;
  undefined1 auStackY_278 [32];
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215 [5];
  TGeometryParticleHandleImp<double,3,1> *local_210;
  uint local_208;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_200;
  FName local_1f8;
  FColor_u_0 local_1f0 [2];
  FName local_1e8;
  FRigidClustering *local_1e0;
  FScriptContainerElement *local_1d8;
  FName local_1d0;
  TGeometryParticle<double,3> *local_1c8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1c0;
  int local_1b8;
  FCollisionFilterData FStack_1b4;
  FCollisionFilterData FStack_1a4;
  uint local_194;
  TGeometryParticle<double,3> *local_190;
  TGeometryParticleHandleImp<double,3,1> *pTStack_188;
  int local_180;
  FCollisionFilterData FStack_17c;
  FCollisionFilterData FStack_16c;
  uint local_15c;
  FName local_158;
  undefined8 local_148;
  int local_140;
  undefined8 local_138;
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FName local_d0 [4];
  undefined4 local_ac;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  FVar18 = StatPtr_STAT_RemoveParticlesFromCluster;
  local_210 = (TGeometryParticleHandleImp<double,3,1> *)param_1;
  local_200 = param_2;
  local_1e0 = this;
  if (StatPtr_STAT_RemoveParticlesFromCluster ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveParticlesFromCluster>)0x0) {
    pFVar17 = ::FName::FName(local_d0,"STAT_RemoveParticlesFromCluster");
    FVar18 = (FThreadSafeStaticStat<Chaos::FStat_STAT_RemoveParticlesFromCluster>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveParticlesFromCluster,
                        *pFVar17,L"TPBDRigidClustering<>::RemoveParticlesFromCluster",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar44 = *(FName *)FVar18;
  bVar6 = false;
  bVar7 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((FVar44.ComparisonIndex.Value.Value == 0) && (FVar44.Number == 0)) {
LAB_143ca876b:
    bVar7 = bVar16;
    bVar6 = bVar15;
    bVar15 = false;
    local_1e8 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f0[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d0.ComparisonIndex.Value = FVar44.ComparisonIndex.Value.Value;
        local_1d0.Number = FVar44.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x1c4);
        bVar6 = true;
        bVar7 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ca876b;
    local_1f8 = FVar44;
    local_1e8 = FVar44;
    FThreadStats::AddMessage(FVar44,CycleScopeStart);
    bVar15 = true;
  }
  uVar33 = ((uint)((ulonglong)local_210 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_210 >> 4)) *
           -0x7a143595;
  uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
  uVar33 = uVar33 >> 0x10 ^ uVar33;
  if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
    puVar39 = *(undefined1 **)&(this->MChildren).field_0x40;
    if (puVar39 == (undefined1 *)0x0) {
      puVar39 = &(this->MChildren).field_0x38;
    }
    iVar40 = *(int *)(puVar39 + (ulonglong)(*(int *)&(this->MChildren).field_0x48 - 1U & uVar33) * 4
                     );
    if (iVar40 != -1) {
      do {
        plVar34 = (longlong *)((longlong)iVar40 * 0x20 + *(longlong *)&this->MChildren);
        if ((TGeometryParticleHandleImp<double,3,1> *)*plVar34 == local_210) {
          if (plVar34 != (longlong *)0x0) {
            pTVar19 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)(plVar34 + 1);
            goto LAB_143ca8817;
          }
          break;
        }
        iVar40 = (int)plVar34[3];
      } while (iVar40 != -1);
    }
  }
  pTVar19 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
            ::EmplaceByHash<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                      ((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->MChildren,uVar33,
                       (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_210);
LAB_143ca8817:
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  iVar40 = pTVar19->ArrayNum;
  local_1f8 = (FName)pTVar19;
  pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                      ((TPBDRigidClusteredParticles<double,3> *)local_210->_padding_,
                       (int)local_210->_padding_);
  pTVar11 = local_200;
  local_200 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )CONCAT44(local_200._4_4_,1);
  local_208 = pTVar11->ArrayNum;
  uVar35 = (ulonglong)(int)local_208;
  pFVar45 = (pTVar11->AllocatorInstance).Data;
  fVar49 = (float)iVar40 * *pfVar20;
  local_1d8 = pFVar45 + uVar35 * 8;
  while( true ) {
    pFVar48 = local_1d8;
    if (pTVar11->ArrayNum != (int)uVar35) {
      local_217 = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_217);
    }
    if (pFVar45 == pFVar48) break;
    pFVar48 = (pTVar19->AllocatorInstance).Data;
    pTVar3 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar45;
    for (pFVar41 = pFVar48; pFVar41 != pFVar48 + (longlong)pTVar19->ArrayNum * 8;
        pFVar41 = pFVar41 + 8) {
      if (*(TGeometryParticleHandleImp<double,3,1> **)pFVar41 == pTVar3) {
        uVar33 = (uint)((longlong)pFVar41 - (longlong)pFVar48 >> 3);
        goto LAB_143ca88e7;
      }
    }
    uVar33 = 0xffffffff;
LAB_143ca88e7:
    if ((pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (uVar33 != 0xffffffff)) {
      uVar46 = (uint)pTVar3->_padding_;
      lVar43 = pTVar3->_padding_;
      uVar47 = 0;
      if ((int)uVar46 < *(int *)(lVar43 + 0xd0)) {
        uVar47 = ~uVar46 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_138 = *(undefined8 *)(*(longlong *)(lVar43 + 200) + (longlong)(int)uVar46 * 8);
      TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
      Emplace<IPhysicsProxyBase_*>
                ((TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>
                  *)local_a8,(IPhysicsProxyBase **)&local_148,(bool *)&local_138);
      pFVar13 = local_1e0;
      RemoveChildFromParent
                (local_1e0,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar3,
                 (TPBDRigidClusteredParticleHandleImp<double,3,1> *)local_210);
      pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (2 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
        pTVar36 = pTVar3;
      }
      if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar36->_padding_,
                             (int)pTVar36->_padding_);
        fVar49 = fVar49 - *pfVar20;
      }
      uVar46 = 0;
      if ((int)uVar33 < pTVar19->ArrayNum) {
        uVar46 = ~uVar33 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar48 = (pTVar19->AllocatorInstance).Data;
      iVar40 = pTVar19->ArrayNum + ~uVar33;
      if (1 < iVar40) {
        iVar40 = (int)local_200;
      }
      if (iVar40 != 0) {
        memmove(pFVar48 + (longlong)(int)uVar33 * 8,
                pFVar48 + (longlong)(pTVar19->ArrayNum - iVar40) * 8,(longlong)iVar40 << 3);
      }
      pTVar19->ArrayNum = pTVar19->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar19->AllocatorInstance,pTVar19->ArrayNum,&pTVar19->ArrayMax);
      pFVar4 = pFVar13->MEvolution;
      pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
        pTVar36 = pTVar3;
      }
      if ((pTVar36 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         (bVar16 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar36), !bVar16)) {
LAB_143ca8ad0:
        pbVar25 = TGeometryParticlesImp<double,3,0>::HasCollision
                            ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                             (int)pTVar3->_padding_);
        if ((*pbVar25 != false) || (ForceNoCollisionIntoSQ != 0)) {
          pFVar26 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                               (int)pTVar3->_padding_);
          FVar1.Idx = pFVar26->Idx;
          pFVar27 = FPendingSpatialInternalDataQueue::Add
                              ((FPendingSpatialInternalDataQueue *)&pFVar4->_padding_,0,FVar1,Add);
          pFVar27->Operation = Update;
          ppTVar28 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                                (int)pTVar3->_padding_);
          local_1c8 = *ppTVar28;
          pTStack_1c0 = pTVar3;
          pFVar26 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                               (int)pTVar3->_padding_);
          local_1b8 = pFVar26->Idx;
          FStack_1b4.Word2 = 0;
          FStack_1b4.Word3 = 0;
          FStack_1b4.Word0 = 0;
          FStack_1b4.Word1 = 0;
          FStack_1a4.Word2 = 0;
          FStack_1a4.Word3 = 0;
          FStack_1a4.Word0 = 0;
          FStack_1a4.Word1 = 0;
          local_194 = local_194 & 0xffffff00;
          if ((local_1b8 == -1) &&
             (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                  ,0xf76,"CachedUniqueIdx.IsValid()"), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (pTVar3,&FStack_1b4);
          FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (pTVar3,&FStack_1a4);
          local_194 = CONCAT31(local_194._1_3_,1);
          (pFVar27->AccelerationHandle).ExternalGeometryParticle = local_1c8;
          (pFVar27->AccelerationHandle).GeometryParticleHandle = pTStack_1c0;
          (pFVar27->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_1b8;
          (pFVar27->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_1b4.Word0;
          (pFVar27->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_1b4.Word1;
          (pFVar27->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_1b4.Word2;
          *(ulonglong *)&(pFVar27->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_1a4.Word0,FStack_1b4.Word3);
          (pFVar27->AccelerationHandle).UnionSimFilterData.Word1 = FStack_1a4.Word1;
          (pFVar27->AccelerationHandle).UnionSimFilterData.Word2 = FStack_1a4.Word2;
          *(ulonglong *)&(pFVar27->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_194,FStack_1a4.Word3);
          pFVar29 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                              ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                               (int)pTVar3->_padding_);
          pFVar27->SpatialIdx = *pFVar29;
          pFVar30 = FPendingSpatialDataQueue::FindOrAdd
                              ((FPendingSpatialDataQueue *)&pFVar4->_padding_,FVar1,Add);
          pTVar36 = (pFVar27->AccelerationHandle).GeometryParticleHandle;
          (pFVar30->AccelerationHandle).ExternalGeometryParticle =
               (pFVar27->AccelerationHandle).ExternalGeometryParticle;
          (pFVar30->AccelerationHandle).GeometryParticleHandle = pTVar36;
          uVar33 = (pFVar27->AccelerationHandle).UnionQueryFilterData.Word0;
          uVar46 = (pFVar27->AccelerationHandle).UnionQueryFilterData.Word1;
          uVar47 = (pFVar27->AccelerationHandle).UnionQueryFilterData.Word2;
          (pFVar30->AccelerationHandle).CachedUniqueIdx =
               (FUniqueIdx)(pFVar27->AccelerationHandle).CachedUniqueIdx.Idx;
          (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0 = uVar33;
          (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1 = uVar46;
          (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2 = uVar47;
          uVar33 = (pFVar27->AccelerationHandle).UnionSimFilterData.Word1;
          uVar46 = (pFVar27->AccelerationHandle).UnionSimFilterData.Word2;
          *(undefined8 *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3 =
               *(undefined8 *)&(pFVar27->AccelerationHandle).UnionQueryFilterData.Word3;
          (pFVar30->AccelerationHandle).UnionSimFilterData.Word1 = uVar33;
          (pFVar30->AccelerationHandle).UnionSimFilterData.Word2 = uVar46;
          FVar8 = pFVar27->SpatialIdx;
          uVar9 = *(undefined2 *)&pFVar27->field_0x3a;
          iVar40 = pFVar27->SyncTimestamp;
          *(undefined8 *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3 =
               *(undefined8 *)&(pFVar27->AccelerationHandle).UnionSimFilterData.Word3;
          pFVar30->SpatialIdx = FVar8;
          *(undefined2 *)&pFVar30->field_0x3a = uVar9;
          pFVar30->SyncTimestamp = iVar40;
          uVar10 = *(undefined7 *)&pFVar27->field_0x41;
          pFVar30->Operation = pFVar27->Operation;
          *(undefined7 *)&pFVar30->field_0x41 = uVar10;
        }
      }
      else {
        pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
          pTVar36 = pTVar3;
        }
        if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar36->_padding_,
                               (int)pTVar36->_padding_);
          pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)pCVar21->Id;
          if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pTVar42 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (2 < *(byte *)((longlong)&pTVar36->_padding_ + 4)) {
              pTVar42 = pTVar36;
            }
            if (pTVar42 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                  ,0x215,"false");
              if (bVar16) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              pFVar22 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                   ((TPBDRigidClusteredParticles<double,3> *)pTVar42->_padding_,
                                    (int)pTVar42->_padding_)->field0_0x0;
              if ((pFVar22->Bits & 1) != 0) {
                pIVar23 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar3);
                pIVar24 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar42);
                if (pIVar24 == pIVar23) goto LAB_143ca8ad0;
              }
            }
          }
        }
      }
      pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
        pTVar36 = pTVar3;
      }
      this_00 = (FPBDRigidsSOAs *)local_1e0->MEvolution->_padding_;
      if (((pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
          (bVar16 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                              (&this_00->ActiveParticlesMapArray,
                               (TPBDRigidParticleHandleImp<double,3,1> *)pTVar36), !bVar16)) &&
         (bVar16 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                             (&this_00->MovingKinematicsMapArray,
                              (TPBDRigidParticleHandleImp<double,3,1> *)pTVar36), !bVar16)) {
        FPBDRigidsSOAs::
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar36,
                   &this_00->TransientDirtyMapArray);
        if (CVars::bChaosSolverCheckParticleViews != false) {
          FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar3);
        }
        FPBDRigidsSOAs::UpdateViews(this_00);
      }
    }
    uVar35 = (ulonglong)local_208;
    pFVar45 = pFVar45 + 8;
  }
  iVar40 = pTVar19->ArrayNum;
  pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      ((TPBDRigidClusteredParticles<double,3> *)local_210->_padding_,
                       (int)local_210->_padding_);
  FVar44 = local_1e8;
  pCVar21->NumChildren = iVar40;
  iVar40 = pTVar19->ArrayNum;
  iVar2 = (int)local_210->_padding_;
  if (iVar40 == 0) {
    pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                        ((TPBDRigidClusteredParticles<double,3> *)local_210->_padding_,iVar2);
    *pfVar20 = 0.0;
    pTVar31 = TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                        ((TPBDRigidClusteredParticles<double,3> *)local_210->_padding_,
                         (int)local_210->_padding_);
    bVar16 = 1 < pTVar31->HashSize;
    if (!bVar16) {
      TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
      UnhashElements(pTVar31);
    }
    *(undefined4 *)&(pTVar31->Elements).field_0x8 = 0;
    if (*(int *)&(pTVar31->Elements).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar31,0,(int *)&(pTVar31->Elements).field_0xc);
    }
    *(undefined4 *)&(pTVar31->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar31->Elements).field_0x34 = 0;
    iVar40 = *(int *)&(pTVar31->Elements).field_0x2c;
    *(undefined4 *)&(pTVar31->Elements).field_0x28 = 0;
    if ((iVar40 < 0) || (0x80 < iVar40)) {
      *(undefined4 *)&(pTVar31->Elements).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pTVar31->Elements).field_0x10,0);
    }
    if (bVar16) {
      pTVar31->HashSize = (int)local_200;
      TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::Rehash
                (pTVar31);
    }
  }
  else {
    pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                        ((TPBDRigidClusteredParticles<double,3> *)local_210->_padding_,iVar2);
    FVar44 = local_1f8;
    *pfVar20 = fVar49 / (float)iVar40;
    local_208 = *(int *)((longlong)local_1f8 + 8);
    uVar35 = (ulonglong)(int)local_208;
    pFVar45 = (pTVar19->AllocatorInstance).Data;
    local_1d8 = pFVar45 + uVar35 * 8;
    pTVar19 = local_200;
    while( true ) {
      pFVar48 = local_1d8;
      uVar33 = (uint)pTVar19;
      if (*(int *)((longlong)FVar44 + 8) != (int)uVar35) {
        local_216 = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_216);
      }
      if (pFVar45 == pFVar48) break;
      uVar33 = *(uint *)(*(longlong **)pFVar45 + 1);
      lVar43 = **(longlong **)pFVar45;
      uVar46 = 0;
      if ((int)uVar33 < *(int *)(lVar43 + 0xd0)) {
        uVar46 = ~uVar33 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar35 = *(ulonglong *)(*(longlong *)(lVar43 + 200) + (longlong)(int)uVar33 * 8);
      if (local_a8._8_4_ != local_74) {
        uVar33 = ((uint)(uVar35 >> 0x14) & 0xffff ^ (uint)(uVar35 >> 4)) * -0x7a143595;
        uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
        FVar38 = (ForElementType<FSetElementId>)local_70;
        if (local_68 != (ForElementType<FSetElementId>)0x0) {
          FVar38 = local_68;
        }
        uVar33 = *(uint *)((longlong)FVar38 +
                          (longlong)(int)(local_60 - 1U & (uVar33 >> 0x10 ^ uVar33)) * 4);
        if (uVar33 != 0xffffffff) {
LAB_143ca8f00:
          lVar43 = (longlong)(int)uVar33;
          if (*(ulonglong *)(local_a8._0_8_ + lVar43 * 0x10) != uVar35) goto code_r0x000143ca8f13;
          if (((int)uVar33 < 0) || ((int)local_80 <= (int)uVar33)) {
LAB_143ca8f5d:
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            FVar37 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
            if (local_88 != (ForElementType<unsigned_int>)0x0) {
              FVar37 = local_88;
            }
            uVar46 = uVar33;
            if ((int)uVar33 < 0) {
              uVar46 = uVar33 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar37 + (longlong)((int)uVar46 >> 5) * 4) >> (uVar33 & 0x1f) &
                1) == 0) goto LAB_143ca8f5d;
          }
          uVar14 = local_a8._0_8_;
          FVar38 = (ForElementType<FSetElementId>)local_70;
          if (local_68 != (ForElementType<FSetElementId>)0x0) {
            FVar38 = local_68;
          }
          pFVar48 = (FScriptContainerElement *)
                    ((longlong)FVar38 + (longlong)*(int *)(local_a8._0_8_ + lVar43 * 0x10 + 0xc) * 4
                    );
          while( true ) {
            uVar46 = *(uint *)pFVar48;
            if ((uVar46 == 0xffffffff) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextElementIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                    ,0x2b5,L"Corrupt hash"), bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar19 = local_200;
            if (uVar46 == uVar33) break;
            pFVar48 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar46 * 0x10 + 8)
            ;
          }
          *(uint *)pFVar48 = *(uint *)(uVar14 + lVar43 * 0x10 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_a8,uVar33,(int)local_200);
        }
      }
LAB_143ca901c:
      uVar33 = (uint)pTVar19;
      if (local_a8._8_4_ == local_74) break;
      uVar35 = (ulonglong)local_208;
      pFVar45 = pFVar45 + 8;
    }
    uVar46 = local_80;
    FVar44 = local_1e8;
    uStack_128 = 0;
    uStack_114 = uStack_128;
    local_110 = uStack_128;
    if (local_80 != 0) {
      FVar37 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar37 = local_88;
      }
      uVar47 = *(uint *)FVar37;
      while (uVar47 == 0) {
        lVar43 = (longlong)(int)uStack_128;
        local_110 = local_110 + 0x20;
        uStack_128 = uStack_128 + 1;
        uStack_114 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_128)
        goto LAB_143ca90c1;
        uVar47 = ((uint *)((longlong)FVar37 + 4))[lVar43];
      }
      uVar33 = -uVar47 & uVar47;
      uVar35 = (ulonglong)uVar33 * 2 + 1;
      lVar43 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar43 == 0; lVar43 = lVar43 + -1) {
        }
      }
      local_148._4_4_ = (int)lVar43;
      uStack_114 = (local_110 - 1) + local_148._4_4_;
      if ((int)local_80 < (int)uStack_114) {
        uStack_114 = local_80;
      }
    }
LAB_143ca90c1:
    local_130 = (longlong *)local_a8;
    uStack_10c = local_ac;
    local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    iStack_108 = local_a8._8_4_ - local_74;
    uVar47 = local_80 & 0xffffffe0;
    uStack_118 = 0xffffffff;
    TStack_f8.CurrentBitIndex = uStack_114;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    TStack_f8._padding_ = CONCAT44(uVar33,uStack_128);
    iVar40 = (int)local_80 >> 5;
    TStack_f8._28_4_ = local_ac;
    TStack_f8.BaseBitIndex = local_110;
    uStack_d8 = CONCAT44(uStack_104,iStack_108);
    bVar32 = (byte)local_80;
    uStack_124 = uVar33;
    local_100 = local_130;
    TStack_f8.Array = local_120;
    if (((int)local_80 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar46 != local_80) {
      FVar37 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar37 = local_88;
      }
      uVar33 = -1 << (bVar32 & 0x1f) & *(uint *)((longlong)FVar37 + (longlong)iVar40 * 4);
      while (uVar33 == 0) {
        lVar43 = (longlong)iVar40;
        uVar47 = uVar47 + 0x20;
        iVar40 = iVar40 + 1;
        uVar46 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar40)
        goto LAB_143ca91f0;
        uVar33 = ((uint *)((longlong)FVar37 + 4))[lVar43];
      }
      uVar35 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar43 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar43 == 0; lVar43 = lVar43 + -1) {
        }
      }
      local_140 = (int)lVar43;
      uVar46 = local_140 + -1 + uVar47;
      if ((int)local_80 < (int)uVar46) {
        uVar46 = local_80;
      }
    }
LAB_143ca91f0:
    while( true ) {
      plVar34 = local_100;
      if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
        local_215[0] = 0;
        `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_215);
      }
      FVar12 = local_1f8;
      if (((TStack_f8.CurrentBitIndex == uVar46) &&
          (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (plVar34 == (longlong *)local_a8)) break;
      pIVar23 = *(IPhysicsProxyBase **)(*plVar34 + (longlong)TStack_f8.CurrentBitIndex * 0x10);
      pTVar31 = TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                          ((TPBDRigidClusteredParticles<double,3> *)local_210->_padding_,
                           (int)local_210->_padding_);
      TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::Remove
                (pTVar31,pIVar23);
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
    if ((*(int *)((longlong)local_1f8 + 8) < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar23 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                        (*(TGeometryParticleHandleImp<double,3,1> **)
                          ((ForAnyElementType *)FVar12)->Data);
    pIVar24 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(local_210);
    uVar33 = ((uint)((ulonglong)pIVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar24 >> 4)) *
             -0x7a143595;
    uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
    if (local_a8._8_4_ != local_74) {
      FVar38 = (ForElementType<FSetElementId>)local_70;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FVar38 = local_68;
      }
      for (iVar40 = *(int *)((longlong)FVar38 +
                            (ulonglong)(local_60 - 1U & (uVar33 >> 0x10 ^ uVar33)) * 4);
          iVar40 != -1; iVar40 = *(int *)(local_a8._0_8_ + (longlong)iVar40 * 0x10 + 8)) {
        if (*(IPhysicsProxyBase **)(local_a8._0_8_ + (longlong)iVar40 * 0x10) == pIVar24) {
          TGeometryParticleHandleImp<double,3,1>::SetPhysicsProxy(local_210,pIVar23);
          break;
        }
      }
    }
  }
  pTVar3 = local_210;
  pTVar42 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pFVar4 = local_1e0->MEvolution;
  pTVar36 = pTVar42;
  if (1 < *(byte *)((longlong)&local_210->_padding_ + 4)) {
    pTVar36 = local_210;
  }
  if ((pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (bVar16 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar36), bVar16)) {
    pTVar36 = pTVar42;
    if (2 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
      pTVar36 = pTVar3;
    }
    if (pTVar36 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_143ca954e;
    pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar36->_padding_,
                         (int)pTVar36->_padding_);
    pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)pCVar21->Id;
    if (pTVar36 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_143ca954e;
    if (2 < *(byte *)((longlong)&pTVar36->_padding_ + 4)) {
      pTVar42 = pTVar36;
    }
    if (pTVar42 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2113888976451403243>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                          ,0x215,"false");
      if (bVar16) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_143ca954e;
    }
    pFVar22 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                         ((TPBDRigidClusteredParticles<double,3> *)pTVar42->_padding_,
                          (int)pTVar42->_padding_)->field0_0x0;
    if ((pFVar22->Bits & 1) == 0) goto LAB_143ca954e;
    pIVar23 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar42);
    pIVar24 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar3);
    if (pIVar23 != pIVar24) goto LAB_143ca954e;
  }
  pbVar25 = TGeometryParticlesImp<double,3,0>::HasCollision
                      ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,(int)pTVar3->_padding_
                      );
  if ((*pbVar25 != false) || (ForceNoCollisionIntoSQ != 0)) {
    pFVar26 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                         (int)pTVar3->_padding_);
    FVar1.Idx = pFVar26->Idx;
    pFVar27 = FPendingSpatialInternalDataQueue::Add
                        ((FPendingSpatialInternalDataQueue *)&pFVar4->_padding_,0,FVar1,Add);
    pFVar27->Operation = Update;
    ppTVar28 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                         ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                          (int)pTVar3->_padding_);
    pTStack_188 = pTVar3;
    local_190 = *ppTVar28;
    pFVar26 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                        ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                         (int)pTVar3->_padding_);
    FStack_17c.Word2 = 0;
    FStack_17c.Word3 = 0;
    FStack_17c.Word0 = 0;
    FStack_17c.Word1 = 0;
    FStack_16c.Word2 = 0;
    FStack_16c.Word3 = 0;
    local_180 = pFVar26->Idx;
    FStack_16c.Word0 = 0;
    FStack_16c.Word1 = 0;
    local_15c = local_15c & 0xffffff00;
    if ((local_180 == -1) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3133560516564217994>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                            ,0xf76,"CachedUniqueIdx.IsValid()"), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (pTVar3,&FStack_17c);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (pTVar3,&FStack_16c);
    local_15c = CONCAT31(local_15c._1_3_,1);
    (pFVar27->AccelerationHandle).ExternalGeometryParticle = local_190;
    (pFVar27->AccelerationHandle).GeometryParticleHandle = pTStack_188;
    (pFVar27->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_180;
    (pFVar27->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_17c.Word0;
    (pFVar27->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_17c.Word1;
    (pFVar27->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_17c.Word2;
    *(ulonglong *)&(pFVar27->AccelerationHandle).UnionQueryFilterData.Word3 =
         CONCAT44(FStack_16c.Word0,FStack_17c.Word3);
    (pFVar27->AccelerationHandle).UnionSimFilterData.Word1 = FStack_16c.Word1;
    (pFVar27->AccelerationHandle).UnionSimFilterData.Word2 = FStack_16c.Word2;
    *(ulonglong *)&(pFVar27->AccelerationHandle).UnionSimFilterData.Word3 =
         CONCAT44(local_15c,FStack_16c.Word3);
    pFVar29 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                        ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                         (int)pTVar3->_padding_);
    pFVar27->SpatialIdx = *pFVar29;
    pFVar30 = FPendingSpatialDataQueue::FindOrAdd
                        ((FPendingSpatialDataQueue *)&pFVar4->_padding_,FVar1,Add);
    pTVar3 = (pFVar27->AccelerationHandle).GeometryParticleHandle;
    (pFVar30->AccelerationHandle).ExternalGeometryParticle =
         (pFVar27->AccelerationHandle).ExternalGeometryParticle;
    (pFVar30->AccelerationHandle).GeometryParticleHandle = pTVar3;
    uVar33 = (pFVar27->AccelerationHandle).UnionQueryFilterData.Word0;
    uVar46 = (pFVar27->AccelerationHandle).UnionQueryFilterData.Word1;
    uVar47 = (pFVar27->AccelerationHandle).UnionQueryFilterData.Word2;
    (pFVar30->AccelerationHandle).CachedUniqueIdx =
         (FUniqueIdx)(pFVar27->AccelerationHandle).CachedUniqueIdx.Idx;
    (pFVar30->AccelerationHandle).UnionQueryFilterData.Word0 = uVar33;
    (pFVar30->AccelerationHandle).UnionQueryFilterData.Word1 = uVar46;
    (pFVar30->AccelerationHandle).UnionQueryFilterData.Word2 = uVar47;
    uVar33 = (pFVar27->AccelerationHandle).UnionSimFilterData.Word1;
    uVar46 = (pFVar27->AccelerationHandle).UnionSimFilterData.Word2;
    *(undefined8 *)&(pFVar30->AccelerationHandle).UnionQueryFilterData.Word3 =
         *(undefined8 *)&(pFVar27->AccelerationHandle).UnionQueryFilterData.Word3;
    (pFVar30->AccelerationHandle).UnionSimFilterData.Word1 = uVar33;
    (pFVar30->AccelerationHandle).UnionSimFilterData.Word2 = uVar46;
    FVar8 = pFVar27->SpatialIdx;
    uVar9 = *(undefined2 *)&pFVar27->field_0x3a;
    iVar40 = pFVar27->SyncTimestamp;
    *(undefined8 *)&(pFVar30->AccelerationHandle).UnionSimFilterData.Word3 =
         *(undefined8 *)&(pFVar27->AccelerationHandle).UnionSimFilterData.Word3;
    pFVar30->SpatialIdx = FVar8;
    *(undefined2 *)&pFVar30->field_0x3a = uVar9;
    pFVar30->SyncTimestamp = iVar40;
    uVar10 = *(undefined7 *)&pFVar27->field_0x41;
    pFVar30->Operation = pFVar27->Operation;
    *(undefined7 *)&pFVar30->field_0x41 = uVar10;
  }
LAB_143ca954e:
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar44,CycleScopeEnd);
  }
  return;
code_r0x000143ca8f13:
  uVar33 = *(uint *)(local_a8._0_8_ + lVar43 * 0x10 + 8);
  if (uVar33 == 0xffffffff) goto LAB_143ca901c;
  goto LAB_143ca8f00;
}

// ResetAllEvents @ 143ca96e0

void __thiscall Chaos::FRigidClustering::ResetAllEvents(FRigidClustering *this)

{
  int *piVar1;
  int iVar2;
  FCrumblingData *pFVar3;
  
  (this->MAllClusterBreakings).ArrayNum = 0;
  if ((this->MAllClusterBreakings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->MAllClusterBreakings).AllocatorInstance,0,
               &(this->MAllClusterBreakings).ArrayMax);
  }
  piVar1 = &(this->MAllClusterCrumblings).ArrayMax;
  pFVar3 = (FCrumblingData *)(this->MAllClusterCrumblings).AllocatorInstance.Data;
  iVar2 = (this->MAllClusterCrumblings).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Chaos::FCrumblingData,int>(pFVar3,iVar2);
    (this->MAllClusterCrumblings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,0,&(this->MAllClusterCrumblings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FCrumblingData,int>(pFVar3,iVar2);
    (this->MAllClusterCrumblings).ArrayNum = 0;
  }
  if (*(int *)&(this->CrumbledSinceLastUpdate).Elements.field_0x8 !=
      *(int *)&(this->CrumbledSinceLastUpdate).Elements.field_0x34) {
    TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->CrumbledSinceLastUpdate);
    iVar2 = *(int *)&(this->CrumbledSinceLastUpdate).Elements.field_0xc;
    *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x8 = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->CrumbledSinceLastUpdate,0,
                 (int *)&(this->CrumbledSinceLastUpdate).Elements.field_0xc);
    }
    *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->CrumbledSinceLastUpdate).Elements.field_0x28 = 0;
  }
  return;
}

// ResetCollisionImpulseArray @ 143ca97e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FRigidClustering::ResetCollisionImpulseArray(FRigidClustering *this)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ResetCollisionImpulseArray> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_ResetCollisionImpulseArray;
  if (StatPtr_STAT_ResetCollisionImpulseArray ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ResetCollisionImpulseArray>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_ResetCollisionImpulseArray");
    FVar7 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ResetCollisionImpulseArray>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetCollisionImpulseArray,*pFVar6
                       ,L"ResetCollisionImpulseArray","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x97f);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_143ca993e;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_143ca993e:
  if (this->MCollisionImpulseArrayDirty != false) {
    local_res8.s.LowPart = 0;
    lVar2 = this->MEvolution->_padding_;
    TArrayCollectionArray<float>::Fill
              ((TArrayCollectionArray<float> *)(*(longlong *)(lVar2 + 0x40) + 0x630),
               (float *)&local_res8);
    local_res8.s.LowPart = 0;
    TArrayCollectionArray<float>::Fill
              ((TArrayCollectionArray<float> *)(*(longlong *)(lVar2 + 0x38) + 0x630),
               (float *)&local_res8);
    this->MCollisionImpulseArrayDirty = false;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RestoreBreakingMomentum @ 143ca9ab0

void __thiscall Chaos::FRigidClustering::RestoreBreakingMomentum(FRigidClustering *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double *pdVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_68;
  
  iVar19 = 0;
  puVar1 = &(this->MomentumRestoringDataByParticle).field_0x10;
  iVar4 = *(int *)&(this->MomentumRestoringDataByParticle).field_0x28;
  uVar13 = 1;
  iVar21 = 0;
  iVar14 = 0;
  if (iVar4 != 0) {
    puVar22 = *(uint **)&(this->MomentumRestoringDataByParticle).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar14 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_143ca9b60;
      uVar18 = puVar22[lVar15 + 1];
    }
    uVar13 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = local_res10 + -1 + iVar21;
    if (iVar4 < iVar14) {
      iVar14 = iVar4;
    }
  }
LAB_143ca9b60:
  uVar18 = *(uint *)&(this->MomentumRestoringDataByParticle).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_120._padding_ = CONCAT44(uVar13,iVar19);
  TStack_120.CurrentBitIndex = iVar14;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_120._28_4_ = iVar14;
  TStack_120.BaseBitIndex = iVar21;
  uStack_100 = CONCAT44(uStack_12c,
                        *(int *)&(this->MomentumRestoringDataByParticle).field_0x8 -
                        *(int *)&(this->MomentumRestoringDataByParticle).field_0x34);
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = *(uint *)&(this->MomentumRestoringDataByParticle).field_0x28;
  if (uVar18 != uVar13) {
    puVar20 = *(undefined1 **)&(this->MomentumRestoringDataByParticle).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_143ca9ca0;
      uVar18 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar17;
    if ((int)uVar13 < (int)uVar18) {
      uVar18 = uVar13;
    }
  }
LAB_143ca9ca0:
  while( true ) {
    if (*(int *)&(this->MomentumRestoringDataByParticle).field_0x8 -
        *(int *)&(this->MomentumRestoringDataByParticle).field_0x34 != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FRigidClustering::FMomentumRestoringData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_120.CurrentBitIndex == uVar18) &&
       (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar15 = *(longlong *)&this->MomentumRestoringDataByParticle;
    lVar16 = (longlong)TStack_120.CurrentBitIndex * 0x40;
    puVar6 = *(undefined8 **)(lVar16 + lVar15);
    dVar7 = (double)((undefined8 *)(lVar16 + lVar15))[1];
    local_68 = *(double *)(lVar16 + 0x30 + lVar15);
    pdVar3 = (double *)(lVar16 + 0x10 + lVar15);
    dVar8 = *pdVar3;
    dVar9 = pdVar3[1];
    pdVar3 = (double *)(lVar16 + 0x20 + lVar15);
    dVar10 = *pdVar3;
    dVar11 = pdVar3[1];
    if (puVar6 != (undefined8 *)0x0) {
      TKinematicGeometryParticlesImp<double,3,0>::GetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar6,
                 (TVector<double,3> *)&local_f8,*(int *)(puVar6 + 1));
      local_d8 = dVar8 + local_f0;
      local_d0 = dVar9 + local_e8;
      local_e0 = dVar7 + local_f8;
      TKinematicGeometryParticlesImp<double,3,0>::SetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar6,*(int *)(puVar6 + 1),
                 (TVector<double,3> *)&local_e0);
      TKinematicGeometryParticlesImp<double,3,0>::GetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar6,
                 (TVector<double,3> *)&local_c8,*(int *)(puVar6 + 1));
      local_b0 = dVar10 + local_c8;
      local_a8 = dVar11 + local_c0;
      local_a0 = local_68 + local_b8;
      TKinematicGeometryParticlesImp<double,3,0>::SetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar6,*(int *)(puVar6 + 1),
                 (TVector<double,3> *)&local_b0);
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  return;
}

// SendBreakingEvent @ 143caa300

void __thiscall
Chaos::FRigidClustering::SendBreakingEvent
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          bool param_2)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  IPhysicsProxyBase *pIVar9;
  IPhysicsProxyBase *pIVar10;
  TVector<double,3> *pTVar11;
  double *pdVar12;
  FImplicitObject *pFVar13;
  undefined8 *puVar14;
  TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *pTVar15;
  uint *puVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  TVector<double,3> local_78;
  TVector<double,3> local_60;
  undefined1 local_48 [48];
  
  if ((((param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
       (pIVar9 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                           ((TGeometryParticleHandleImp<double,3,1> *)param_1),
       pIVar9 != (IPhysicsProxyBase *)0x0)) && (pIVar9->Type == GeometryCollectionType)) &&
     (((char)pIVar9[7]._padding_ < '\0' || ((pIVar9[7]._padding_ & 0x1000) != 0)))) {
    iVar7 = (this->MAllClusterBreakings).ArrayNum;
    piVar1 = &(this->MAllClusterBreakings).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10c0,&(this->MAllClusterBreakings).AllocatorInstance,piVar1);
    }
    (this->MAllClusterBreakings).ArrayNum = iVar7 + 1;
    pFVar18 = (this->MAllClusterBreakings).AllocatorInstance.Data + (longlong)iVar7 * 0xc0;
    DefaultConstructItems<Chaos::FBreakingData,int>(pFVar18,1);
    pIVar10 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    *(IPhysicsProxyBase **)(pFVar18 + 8) = pIVar10;
    pTVar11 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar3 = *(undefined8 *)&pTVar11->field_0x8;
    *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)pTVar11;
    *(undefined8 *)(pFVar18 + 0x18) = uVar3;
    *(undefined8 *)(pFVar18 + 0x20) = *(undefined8 *)&pTVar11->field_0x10;
    uVar8 = *(uint *)&param_1->field_0x8;
    lVar19 = (longlong)(int)uVar8;
    lVar4 = *(longlong *)param_1;
    uVar17 = 0;
    if ((int)uVar8 < *(int *)(lVar4 + 0x50)) {
      uVar17 = ~uVar8 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 4 + lVar19 * 0x10);
    fVar2 = *(float *)(lVar4 + 0xc + lVar19 * 0x10);
    *(double *)(pFVar18 + 0x30) = (double)*(float *)(lVar4 + lVar19 * 0x10);
    *(double *)(pFVar18 + 0x38) = (double)(float)uVar3;
    *(double *)(pFVar18 + 0x40) = (double)(float)((ulonglong)uVar3 >> 0x20);
    *(double *)(pFVar18 + 0x48) = (double)fVar2;
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,&local_78,
               *(int *)&param_1->field_0x8);
    *(undefined8 *)(pFVar18 + 0x50) = local_78._0_8_;
    *(undefined8 *)(pFVar18 + 0x58) = local_78._8_8_;
    *(undefined8 *)(pFVar18 + 0x60) = local_78._16_8_;
    TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,&local_60,
               *(int *)&param_1->field_0x8);
    *(undefined8 *)(pFVar18 + 0x68) = local_60._0_8_;
    *(undefined8 *)(pFVar18 + 0x70) = local_60._8_8_;
    *(undefined8 *)(pFVar18 + 0x78) = local_60._16_8_;
    pdVar12 = TPBDRigidParticleHandleImp<double,3,1>::M
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    *(double *)(pFVar18 + 0x80) = *pdVar12;
    pFVar13 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    if ((pFVar13 != (FImplicitObject *)0x0) &&
       (pFVar13 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1),
       pFVar13->bHasBoundingBox != false)) {
      pFVar13 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                          ((TGeometryParticleHandleImp<double,3,1> *)param_1);
      puVar14 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 0x90))(pFVar13,local_48);
      uVar3 = puVar14[1];
      *(undefined8 *)(pFVar18 + 0x88) = *puVar14;
      *(undefined8 *)(pFVar18 + 0x90) = uVar3;
      *(undefined8 *)(pFVar18 + 0x98) = puVar14[2];
      uVar3 = puVar14[4];
      *(undefined8 *)(pFVar18 + 0xa0) = puVar14[3];
      *(undefined8 *)(pFVar18 + 0xa8) = uVar3;
      *(undefined8 *)(pFVar18 + 0xb0) = puVar14[5];
    }
    pTVar15 = TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                      *)&pIVar9[0xd].Owner,(TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    puVar16 = (uint *)&pTVar15->field_0x8;
    if (pTVar15 == (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *)0x0) {
      puVar16 = (uint *)0x0;
    }
    if (puVar16 == (uint *)0x0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *puVar16;
    }
    *(uint *)(pFVar18 + 0xb8) = uVar8;
    pFVar18[0xbc] = (FScriptContainerElement)param_2;
    uVar17 = (uint)(byte)((byte)pIVar9[7]._padding_ >> 7);
    uVar8 = uVar17 | 2;
    if ((pIVar9[7]._padding_ & 0x1000) == 0) {
      uVar8 = uVar17;
    }
    *(uint *)pFVar18 = uVar8;
  }
  return;
}

// SendCrumblingEvent @ 143caa5b0

void __thiscall
Chaos::FRigidClustering::SendCrumblingEvent
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  float fVar3;
  undefined8 uVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FGeometryCollectionPhysicsProxy *this_00;
  IPhysicsProxyBase *pIVar10;
  TVector<double,3> *pTVar11;
  double *pdVar12;
  FImplicitObject *pFVar13;
  undefined8 *puVar14;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_88;
  TVector<double,3> local_78;
  TVector<double,3> local_60;
  undefined1 local_48 [48];
  
  if ((((param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
       (this_00 = (FGeometryCollectionPhysicsProxy *)
                  TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1),
       this_00 != (FGeometryCollectionPhysicsProxy *)0x0)) && (*(int *)&this_00->field_0x1c == 2))
     && ((bool)(this_00->Parameters).bGenerateCrumblingData ||
         (bool)(this_00->Parameters).bGenerateGlobalCrumblingData)) {
    iVar7 = (this->MAllClusterCrumblings).ArrayNum;
    piVar2 = &(this->MAllClusterCrumblings).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10d0,&(this->MAllClusterCrumblings).AllocatorInstance,piVar2);
    }
    pFVar17 = (this->MAllClusterCrumblings).AllocatorInstance.Data;
    (this->MAllClusterCrumblings).ArrayNum = iVar7 + 1;
    pFVar17 = pFVar17 + (longlong)iVar7 * 0xd0;
    DefaultConstructItems<Chaos::FCrumblingData,int>(pFVar17,1);
    pIVar10 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    *(IPhysicsProxyBase **)(pFVar17 + 8) = pIVar10;
    pTVar11 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
    uVar4 = *(undefined8 *)&pTVar11->field_0x8;
    *(undefined8 *)(pFVar17 + 0x10) = *(undefined8 *)pTVar11;
    *(undefined8 *)(pFVar17 + 0x18) = uVar4;
    *(undefined8 *)(pFVar17 + 0x20) = *(undefined8 *)&pTVar11->field_0x10;
    uVar9 = *(uint *)&param_1->field_0x8;
    lVar18 = (longlong)(int)uVar9;
    lVar16 = *(longlong *)param_1;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)(lVar16 + 0x50)) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar16 = *(longlong *)(lVar16 + 0x48);
    uVar4 = *(undefined8 *)(lVar16 + 4 + lVar18 * 0x10);
    fVar3 = *(float *)(lVar16 + 0xc + lVar18 * 0x10);
    *(double *)(pFVar17 + 0x30) = (double)*(float *)(lVar16 + lVar18 * 0x10);
    *(double *)(pFVar17 + 0x38) = (double)(float)uVar4;
    *(double *)(pFVar17 + 0x40) = (double)(float)((ulonglong)uVar4 >> 0x20);
    *(double *)(pFVar17 + 0x48) = (double)fVar3;
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,&local_78,
               *(int *)&param_1->field_0x8);
    *(undefined8 *)(pFVar17 + 0x50) = local_78._0_8_;
    *(undefined8 *)(pFVar17 + 0x58) = local_78._8_8_;
    *(undefined8 *)(pFVar17 + 0x60) = local_78._16_8_;
    TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,&local_60,
               *(int *)&param_1->field_0x8);
    *(undefined8 *)(pFVar17 + 0x68) = local_60._0_8_;
    *(undefined8 *)(pFVar17 + 0x70) = local_60._8_8_;
    *(undefined8 *)(pFVar17 + 0x78) = local_60._16_8_;
    pdVar12 = TPBDRigidParticleHandleImp<double,3,1>::M
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    *(double *)(pFVar17 + 0x80) = *pdVar12;
    uVar8 = (this_00->Parameters).bGenerateCrumblingData;
    uVar9 = uVar8 | 2;
    if (!(this_00->Parameters).bGenerateGlobalCrumblingData) {
      uVar9 = uVar8;
    }
    *(uint *)pFVar17 = uVar9;
    pFVar13 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                        ((TGeometryParticleHandleImp<double,3,1> *)param_1);
    if ((pFVar13 != (FImplicitObject *)0x0) &&
       (pFVar13 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1),
       pFVar13->bHasBoundingBox != false)) {
      pFVar13 = TGeometryParticleHandleImp<double,3,1>::GetGeometry
                          ((TGeometryParticleHandleImp<double,3,1> *)param_1);
      puVar14 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 0x90))(pFVar13,local_48);
      uVar4 = puVar14[1];
      *(undefined8 *)(pFVar17 + 0x88) = *puVar14;
      *(undefined8 *)(pFVar17 + 0x90) = uVar4;
      *(undefined8 *)(pFVar17 + 0x98) = puVar14[2];
      uVar4 = puVar14[4];
      *(undefined8 *)(pFVar17 + 0xa0) = puVar14[3];
      *(undefined8 *)(pFVar17 + 0xa8) = uVar4;
      *(undefined8 *)(pFVar17 + 0xb0) = puVar14[5];
    }
    if (((this_00->Parameters).bGenerateCrumblingChildrenData) ||
       ((this_00->Parameters).bGenerateGlobalCrumblingChildrenData)) {
      pTVar15 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->MChildren,param_1);
      puVar14 = (undefined8 *)&pTVar15->field_0x8;
      if (pTVar15 ==
          (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      if (puVar14 != (undefined8 *)0x0) {
        local_88.ArrayNum = *(int *)(puVar14 + 1);
        lVar16 = (longlong)local_88.ArrayNum;
        _Src = (void *)*puVar14;
        local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_88.ArrayNum == 0) {
          local_88.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_88.ArrayNum,0,&local_88.AllocatorInstance,local_88.ArrayNum,
                     &local_88.ArrayMax);
          memcpy(local_88.AllocatorInstance.Data,_Src,lVar16 << 3);
        }
        FGeometryCollectionPhysicsProxy::GetTransformGroupIndicesFromHandles
                  (this_00,&local_88,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar17 + 0xb8));
      }
    }
  }
  return;
}

// SetExternalStrain @ 143caa940

void __thiscall
Chaos::FRigidClustering::SetExternalStrain
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          float param_2)

{
  float *pfVar1;
  
  pfVar1 = TPBDRigidClusteredParticles<double,3>::ExternalStrains
                     (*(TPBDRigidClusteredParticles<double,3> **)param_1,*(int *)&param_1->field_0x8
                     );
  *pfVar1 = param_2;
  UpdateTopLevelParticle(this,param_1);
  return;
}

// SetInternalStrain @ 143caa990

void __thiscall
Chaos::FRigidClustering::SetInternalStrain
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          float param_2)

{
  float *pfVar1;
  
  pfVar1 = TPBDRigidClusteredParticles<double,3>::Strains
                     (*(TPBDRigidClusteredParticles<double,3> **)param_1,*(int *)&param_1->field_0x8
                     );
  *pfVar1 = param_2;
  UpdateTopLevelParticle(this,param_1);
  return;
}

// ShouldThrottleParticleRelease @ 143caaf30

bool __thiscall Chaos::FRigidClustering::ShouldThrottleParticleRelease(FRigidClustering *this)

{
  if ((-1 < (this->DestructionSettings).ClusteringParticleReleaseThrottlingMinCount) &&
     (-1 < (this->DestructionSettings).ClusteringParticleReleaseThrottlingMaxCount)) {
    return true;
  }
  return false;
}

// ShouldUnionsHaveCollisionParticles @ 143caaf50

bool __cdecl Chaos::FRigidClustering::ShouldUnionsHaveCollisionParticles(void)

{
  return UnionsHaveCollisionParticles != 0;
}

// ThrottleReleasedParticlesIfNecessary @ 143caaf70

void __thiscall
Chaos::FRigidClustering::ThrottleReleasedParticlesIfNecessary
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  Chaos::`anonymous_namespace'::
  GenericThrottleReleasedParticlesIfNecessary<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
            (param_1,this);
  return;
}

// ThrottleReleasedParticlesIfNecessary @ 143caaf90

void __thiscall
Chaos::FRigidClustering::ThrottleReleasedParticlesIfNecessary
          (FRigidClustering *this,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Chaos::`anonymous_namespace'::
  GenericThrottleReleasedParticlesIfNecessary<TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>_>
            (param_1,this);
  return;
}

// TrackBreakingCollision @ 143cab1f0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::TrackBreakingCollision
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  int iVar6;
  uint uVar7;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar8;
  longlong lVar9;
  <lambda_1> local_18;
  
  pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)param_1->field_0xc) {
    pTVar8 = param_1;
  }
  if (pTVar8 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       (*(TGeometryParticlesImp<double,3,0> **)pTVar8,*(int *)&pTVar8->field_0x8);
    uVar7 = 0;
    iVar6 = (pFVar5->MidPhases).ArrayNum;
    if (0 < iVar6) {
      lVar9 = 0;
      local_18.__this = this;
      local_18.Rigid = (TPBDRigidParticleHandleImp<double,3,1> *)pTVar8;
      do {
        uVar3 = 0;
        if ((int)uVar7 < iVar6) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        EVar4 = FParticlePairMidPhase::
                VisitCollisions<_Chaos::FRigidClustering::TrackBreakingCollision_::__l5::<lambda_1>_>
                          (*(FParticlePairMidPhase **)
                            ((pFVar5->MidPhases).AllocatorInstance.Data + lVar9 + 8),&local_18,
                           VisitDefault);
        if (EVar4 == Stop) {
          return;
        }
        iVar6 = (pFVar5->MidPhases).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// UnionClusterGroups @ 143cabf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FRigidClustering::UnionClusterGroups(FRigidClustering *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UnionClusterGroups> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_UnionClusterGroups;
  if (StatPtr_STAT_UnionClusterGroups ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UnionClusterGroups>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_UnionClusterGroups");
    FVar5 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UnionClusterGroups>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnionClusterGroups,*pFVar4,
                       L"TPBDRigidClustering<>::UnionClusterGroups","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FClusterUnionManager::FlushPendingOperations(&this->ClusterUnionManager);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x2a2);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FClusterUnionManager::FlushPendingOperations(&this->ClusterUnionManager);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// UpdateClusterParticlePropertiesFromChildren @ 143cad4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::UpdateClusterParticlePropertiesFromChildren
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,TMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
                   *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  longlong lVar6;
  FPBDRigidsEvolutionGBF *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterParticlePropertiesFromChildren> FVar19;
  float *pfVar20;
  float *pfVar21;
  TPBDRigidParticleHandleImp<double,3,1> **ppTVar22;
  undefined8 uVar23;
  ClusterId *pCVar24;
  ulonglong uVar25;
  longlong *plVar26;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar27;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar28;
  FScriptContainerElement *pFVar29;
  float fVar30;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_res18;
  TMap<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
  *local_res20;
  FColor_u_0 local_b8;
  uint local_b4;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_90;
  TPBDRigidParticleHandleImp<double,3,1> *local_88;
  FScriptContainerElement *local_80;
  FName local_78 [7];
  
  FVar19 = StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterParticlePropertiesFromChildren>)0x0) {
    pFVar18 = ::FName::FName(local_78,"STAT_UpdateClusterParticlePropertiesFromChildren");
    FVar19 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateClusterParticlePropertiesFromChildren>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UpdateClusterParticlePropertiesFromChildren,*pFVar18,
                        L"TPBDRigidClustering<>::UpdateClusterParticlePropertiesFromChildren",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar4 = *(FName *)FVar19;
  bVar11 = false;
  bVar10 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_b0.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0x209);
        bVar11 = true;
        bVar10 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar14 = true;
      goto LAB_143cad65c;
    }
  }
  bVar11 = bVar15;
  bVar10 = bVar14;
  bVar14 = false;
  local_a8 = local_a0;
LAB_143cad65c:
  pTVar12 = local_res18;
  local_b4 = local_res18->ArrayNum;
  uVar25 = (ulonglong)(int)local_b4;
  pFVar29 = (local_res18->AllocatorInstance).Data;
  local_80 = pFVar29 + uVar25 * 8;
  while( true ) {
    pFVar13 = local_80;
    if (pTVar12->ArrayNum != (int)uVar25) {
      local_res18 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)((ulonglong)local_res18 & 0xffffffffffffff00);
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res18);
    }
    if (pFVar29 == pFVar13) break;
    pTVar27 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar29;
    pTVar28 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pTVar27->field_0xc) {
      pTVar28 = pTVar27;
    }
    if (pTVar28 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                          (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                           *(int *)&param_1->field_0x8);
      pfVar21 = TPBDRigidClusteredParticles<double,3>::Strains
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar28,
                           *(int *)&pTVar28->field_0x8);
      fVar1 = *pfVar20;
      fVar30 = *pfVar21;
      pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                          (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                           *(int *)&param_1->field_0x8);
      *pfVar20 = fVar1 + fVar30;
      pfVar20 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          (*(TPBDRigidClusteredParticles<double,3> **)pTVar28,
                           *(int *)&pTVar28->field_0x8);
      fVar1 = *pfVar20;
      pfVar20 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                           *(int *)&param_1->field_0x8);
      fVar30 = *pfVar20;
      if (*pfVar20 <= fVar1) {
        fVar30 = fVar1;
      }
      pfVar20 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                          (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                           *(int *)&param_1->field_0x8);
      *pfVar20 = fVar30;
      uVar17 = *(uint *)&param_1->field_0x8;
      lVar5 = *(longlong *)param_1;
      uVar16 = 0;
      if ((int)uVar17 < *(int *)(lVar5 + 0x2e0)) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar16 = *(uint *)&pTVar28->field_0x8;
      lVar6 = *(longlong *)pTVar28;
      iVar2 = *(int *)(*(longlong *)(lVar5 + 0x2d8) + (longlong)(int)uVar17 * 0x10);
      uVar17 = 0;
      if ((int)uVar16 < *(int *)(lVar6 + 0x2e0)) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar17 = *(uint *)&param_1->field_0x8;
      lVar5 = *(longlong *)param_1;
      iVar3 = *(int *)(*(longlong *)(lVar6 + 0x2d8) + (longlong)(int)uVar16 * 0x10);
      uVar16 = 0;
      if ((int)uVar17 < *(int *)(lVar5 + 0x2e0)) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      *(int *)(*(longlong *)(lVar5 + 0x2d8) + (longlong)(int)uVar17 * 0x10) = iVar3;
    }
    ppTVar22 = TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
               ::Find((TMapBase<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>_>
                       *)local_res20,pTVar27);
    if (ppTVar22 != (TPBDRigidParticleHandleImp<double,3,1> **)0x0) {
      pTVar27 = *ppTVar22;
    }
    pFVar7 = this->MEvolution;
    if (*(void **)&pFVar7->InternalParticleInitilization != (void *)0x0) {
      local_90 = param_1;
      local_88 = pTVar27;
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar7->InternalParticleInitilization);
      plVar8 = *(longlong **)&(pFVar7->InternalParticleInitilization).field_0x28;
      pcVar9 = *(code **)&pFVar7->InternalParticleInitilization;
      plVar26 = (longlong *)&(pFVar7->InternalParticleInitilization).field_0x10;
      if (plVar8 != (longlong *)0x0) {
        plVar26 = plVar8;
      }
      uVar23 = (**(code **)(*plVar26 + 8))();
      (*pcVar9)(uVar23,&local_88,&local_90);
    }
    uVar25 = (ulonglong)local_b4;
    pFVar29 = pFVar29 + 8;
  }
  pCVar24 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                      (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                       *(int *)&param_1->field_0x8);
  FVar4 = local_a8;
  if (0 < pCVar24->NumChildren) {
    pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                        (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                         *(int *)&param_1->field_0x8);
    pCVar24 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                        (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                         *(int *)&param_1->field_0x8);
    fVar1 = *pfVar20;
    iVar2 = pCVar24->NumChildren;
    pfVar20 = TPBDRigidClusteredParticles<double,3>::Strains
                        (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                         *(int *)&param_1->field_0x8);
    *pfVar20 = fVar1 / (float)iVar2;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulation @ 143cadad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulation
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,FClusterCreationParameters *param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_48;
  FStatMessage local_40;
  FName local_30;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation;
  if (StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation>)
      0x0) {
    pFVar5 = ::FName::FName((FName *)&local_40,
                            "STAT_UpdateConnectivityGraphUsingDelaunayTriangulation");
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulation,*pFVar5,
                         L"TPBDRigidClustering<>::UpdateConnectivityGraphUsingDelaunayTriangulation"
                         ,"STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                         false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_48.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_48.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_48.s.LowPart = FVar8.Value;
        local_48.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_48.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0xbd3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_48.s.LowPart = FVar8.Value;
      local_48.s.HighPart = uVar7;
      local_30 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_30.ComparisonIndex.Value;
      goto LAB_143cadc1c;
    }
  }
  bVar3 = false;
  FVar9 = local_30;
LAB_143cadc1c:
  if (UseBoundingBoxForConnectionGraphFiltering == 0) {
    UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<bool_(__cdecl*)(Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*)>
              (param_1,IsAlwaysValidConnection,param_3,param_4);
  }
  else {
    UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<_Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulation_::__l5::<lambda_1>_>
              (param_1,(<lambda_1>)0x0,param_3,param_4);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_40.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_48);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_48.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_48.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_48.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_48.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulation @ 143cadd40

void __thiscall
Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulation
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FClusterCreationParameters *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  if (pTVar3 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FixConnectivityGraphUsingDelaunayTriangulation
            (this,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)&pTVar3->field_0x8,param_2,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     *)0x0);
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps @ 143caddc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,FClusterCreationParameters *param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res18 [2];
  FStatMessage local_48;
  FName local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps;
  if (StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,
                            "STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps"
                           );
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &
                         StatPtr_STAT_UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps
                         ,*pFVar5,
                         L"TPBDRigidClustering<>::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps"
                         ,"STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                         false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0].s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18[0]._0_4_ = FVar8.Value;
        local_res18[0]._4_4_ = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18[0].s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0xbf3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18[0]._0_4_ = FVar8.Value;
      local_res18[0]._4_4_ = uVar7;
      local_38 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_38.ComparisonIndex.Value;
      goto LAB_143cadf25;
    }
  }
  bVar3 = false;
  FVar9 = local_38;
LAB_143cadf25:
  UpdateConnectivityGraphUsingDelaunayTriangulationWithFiltering<_Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps_::__l2::<lambda_1>_>
            (param_1,(<lambda_1>)param_2,param_3,param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps @ 143cae040

void __thiscall
Chaos::FRigidClustering::UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FClusterCreationParameters *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  if (pTVar3 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateConnectivityGraphUsingDelaunayTriangulationWithBoundsOverlaps
            (this,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)&pTVar3->field_0x8,param_2,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     *)0x0);
  return;
}

// UpdateConnectivityGraphUsingPointImplicit @ 143cae0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::UpdateConnectivityGraphUsingPointImplicit
          (FRigidClustering *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,double param_2,
          TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_3,TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                   *param_4)

{
  ForElementType<unsigned_int> *pFVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<unsigned_int> *pFVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingPointImplicit> FVar15;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar16;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar17;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar18;
  FNameEntryId FVar19;
  FName FVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  undefined1 auStackY_228 [32];
  undefined1 local_1c7;
  undefined1 local_1c6 [6];
  ForAnyElementType local_1c0;
  uint local_1b8;
  uint local_1b4;
  FColor_u_0 local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  FName local_1a0;
  FName local_198;
  FName local_190;
  int local_180;
  double local_178;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_170;
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_168;
  FScriptContainerElement *local_160;
  ForElementType<unsigned_int> *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  ForElementType<unsigned_int> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  code *local_f8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **local_f0;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_e8;
  ForAnyElementType *local_e0;
  double *local_d8;
  FName local_d0 [4];
  undefined4 local_ac;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_70;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_168 = param_4;
  FVar15 = StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit;
  local_170 = param_3;
  if (StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingPointImplicit>)0x0) {
    pFVar14 = ::FName::FName(local_d0,"STAT_UpdateConnectivityGraphUsingPointImplicit");
    FVar15 = (FThreadSafeStaticStat<Chaos::FStat_STAT_UpdateConnectivityGraphUsingPointImplicit>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UpdateConnectivityGraphUsingPointImplicit,*pFVar14,
                        L"TPBDRigidClustering<>::UpdateConnectivityGraphUsingPointImplicit",
                        "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar8 = false;
  bVar6 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar12 = false;
  bVar13 = false;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar24 = FVar20.Number;
  if ((FVar19.Value != 0) || (bVar5 = bVar6, bVar7 = bVar8, uVar24 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b0._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar6 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar19.Value;
        local_1a0.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                   ,0xaa5);
        bVar8 = true;
        bVar6 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a8 = FVar19.Value;
      uStack_1a4 = uVar24;
      local_198 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar13 = true;
      bVar12 = true;
      goto LAB_143cae23f;
    }
  }
  bVar8 = bVar12;
  bVar6 = bVar13;
  bVar13 = false;
  bVar12 = false;
  local_198 = local_190;
  FVar20 = local_190;
LAB_143cae23f:
  if (UseConnectivity != 0) {
    uVar24 = param_1->ArrayNum;
    uVar23 = (ulonglong)uVar24;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b4 = 0;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    local_a8._16_8_ = 0;
    uStack_90 = 0;
    local_70.InlineData[0] = '\0';
    local_70.InlineData[1] = '\0';
    local_70.InlineData[2] = '\0';
    local_70.InlineData[3] = '\0';
    local_70._padding_ = 0;
    local_60 = 0;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
    if (__real_3ff0000000000000 <= param_2) {
      param_2 = __real_3ff0000000000000;
    }
    local_178 = param_2;
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar23);
    }
    DestructItems<TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>,int>
              ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
                *)0x0,0);
    local_1b8 = 0;
    if (local_1b4 != uVar24) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar24,&local_1c0,0,(int *)&local_1b4);
    }
    if (0 < (int)uVar24) {
      do {
        if (((local_1c0.Data <=
              (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
               *)local_a8) &&
            ((FScriptContainerElement *)local_a8 < local_1c0.Data + (longlong)(int)local_1b4 * 0x50)
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_1b8 == local_1b4) {
          local_1b8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x850,&local_1c0,(int *)&local_1b4);
        }
        this_00 = (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
                   *)(local_1c0.Data + (longlong)(int)local_1b8 * 0x50);
        *(undefined8 *)&this_00->Elements = 0;
        *(undefined8 *)&(this_00->Elements).field_0x8 = 0;
        *(undefined8 *)&(this_00->Elements).field_0x20 = 0;
        *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
        *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
        (this_00->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        this_00->HashSize = 0;
        local_1b8 = local_1b8 + 1;
        TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
        ::operator=(this_00,(TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
                             *)local_a8);
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    local_60 = local_60 & 0xffffffff00000000;
    if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_70.SecondaryData);
    }
    iVar22 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar22 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    local_e0 = &local_1c0;
    local_d8 = &local_178;
    local_f0 = &local_e8;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FRigidClustering::UpdateConnectivityGraphUsingPointImplicit'::__l2::<lambda_1>,void,int>
               ::Call;
    local_e8 = param_1;
    PhysicsParallelFor(param_1->ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_f8,false);
    pTVar9 = local_170;
    uVar23 = (ulonglong)(int)local_1b8;
    local_1ac = local_1b8;
    pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1c0.Data + 0x10);
    local_160 = local_1c0.Data + uVar23 * 0x50;
    while( true ) {
      pFVar10 = local_160;
      uVar24 = 0;
      if (local_1b8 != (uint)uVar23) {
        local_1c7 = 0;
        `TCheckedPointerIterator<TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_1c7);
      }
      pFVar1 = &pTVar27[-1].AllocatorInstance.SecondaryData;
      if (pFVar1 == (ForElementType<unsigned_int> *)pFVar10) break;
      uVar21 = pTVar27->NumBits;
      uStack_14c = 1;
      uStack_13c = uVar24;
      local_138 = uVar24;
      if (uVar21 != 0) {
        pTVar2 = *(TBitArray<FDefaultBitArrayAllocator> **)
                  &(pTVar27->AllocatorInstance).SecondaryData.field_0x0;
        pTVar25 = pTVar27;
        if (pTVar2 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar25 = pTVar2;
        }
        uVar26 = *(uint *)(pTVar25->AllocatorInstance).InlineData;
        while (uVar26 == 0) {
          lVar16 = (longlong)(int)uVar24;
          local_138 = local_138 + 0x20;
          uVar24 = uVar24 + 1;
          uStack_13c = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
          goto LAB_143cae5df;
          uVar26 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uStack_14c = -uVar26 & uVar26;
        uVar23 = (ulonglong)uStack_14c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_180 = (int)lVar16;
        uStack_13c = local_180 + -1 + local_138;
        if ((int)uVar21 < (int)uStack_13c) {
          uStack_13c = uVar21;
        }
      }
LAB_143cae5df:
      uStack_134 = local_ac;
      iStack_130 = pTVar27[-1].NumBits - *(int *)(pTVar27[1].AllocatorInstance.InlineData + 4);
      uVar26 = uVar21 & 0xffffffe0;
      TStack_120._padding_ = CONCAT44(uStack_14c,uVar24);
      uStack_140 = 0xffffffff;
      TStack_120.CurrentBitIndex = uStack_13c;
      TStack_120.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar21 >> 5;
      TStack_120._28_4_ = local_ac;
      TStack_120.BaseBitIndex = local_138;
      uStack_100 = CONCAT44(uStack_12c,iStack_130);
      local_158 = pFVar1;
      uStack_150 = uVar24;
      local_148 = pTVar27;
      local_128 = pFVar1;
      TStack_120.Array = pTVar27;
      if (((int)uVar21 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar24 = pTVar27->NumBits;
      if (uVar21 != uVar24) {
        pTVar2 = *(TBitArray<FDefaultBitArrayAllocator> **)
                  &(pTVar27->AllocatorInstance).SecondaryData.field_0x0;
        pTVar25 = pTVar27;
        if (pTVar2 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar25 = pTVar2;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) &
                 *(uint *)((longlong)(pTVar25->AllocatorInstance).InlineData + (longlong)iVar22 * 4)
        ;
        while (uVar21 == 0) {
          lVar16 = (longlong)iVar22;
          uVar26 = uVar26 + 0x20;
          iVar22 = iVar22 + 1;
          uVar21 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_143cae6df;
          uVar21 = *(uint *)((longlong)(pTVar25->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1a8 = (uint)lVar16;
        uVar21 = (local_1a8 - 1) + uVar26;
        if ((int)uVar24 < (int)uVar21) {
          uVar21 = uVar24;
        }
      }
LAB_143cae6df:
      while( true ) {
        pFVar11 = local_128;
        if (*(int *)(local_128 + 1) - *(int *)((longlong)(local_128 + 6) + 4) != (int)uStack_100) {
          local_1c6[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c6);
        }
        if (((TStack_120.CurrentBitIndex == uVar21) && (TStack_120.Array == pTVar27)) &&
           (pFVar11 == pFVar1)) break;
        lVar16 = *(longlong *)&pFVar11->field_0x0;
        pTVar17 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                   (lVar16 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x18);
        pTVar3 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                  (lVar16 + (longlong)TStack_120.CurrentBitIndex * 0x18);
        if ((pTVar3 == pTVar17) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Child1 != Child2",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                                ,0xa92,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar18 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pTVar17->field_0xc) {
          pTVar18 = pTVar17;
        }
        pTVar17 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pTVar3->field_0xc) {
          pTVar17 = pTVar3;
        }
        ConnectClusteredNodes(pTVar17,pTVar18,pTVar9,local_168);
        TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      }
      pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar27[2].AllocatorInstance.SecondaryData;
      uVar23 = (ulonglong)local_1ac;
    }
    DestructItems<TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>,int>
              ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
                *)local_1c0.Data,local_1b8);
    FVar20 = local_198;
    bVar5 = bVar6;
    bVar7 = bVar8;
    bVar13 = bVar12;
    if ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
         *)local_1c0.Data !=
        (TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,DefaultKeyFuncs<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,0>,FDefaultSetAllocator>
         *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// UpdateConnectivityGraphUsingPointImplicit @ 143cae840

void __thiscall
Chaos::FRigidClustering::UpdateConnectivityGraphUsingPointImplicit
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          FClusterCreationParameters *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  
  pTVar3 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->MChildren,param_1);
  if (pTVar3 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateConnectivityGraphUsingPointImplicit
            (this,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)&pTVar3->field_0x8,param_2->CoillisionThicknessPercent,
             (TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
              *)0x0,(TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
                     *)0x0);
  return;
}

// UpdateTopLevelParticle @ 143cb13c0

void __thiscall
Chaos::FRigidClustering::UpdateTopLevelParticle
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  ClusterId *pCVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  uint uVar5;
  undefined1 *puVar6;
  LARGE_INTEGER local_res8;
  TPBDRigidParticleHandleImp<double,3,1> *local_res10;
  ulonglong local_res18;
  TPBDRigidParticleHandleImp<double,3,1> **local_18;
  ulonglong *local_10;
  
  local_res10 = (TPBDRigidParticleHandleImp<double,3,1> *)param_1;
  pCVar3 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)param_1,*(int *)&param_1->field_0x8
                     );
  if (pCVar3->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pCVar3 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)param_1,
                        *(int *)&param_1->field_0x8);
    pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pCVar3->Id->field_0xc) {
      pTVar4 = pCVar3->Id;
    }
    if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      local_res10 = pTVar4;
    }
  }
  QueryPerformanceCounter(&local_res8);
  local_res18 = (ulonglong)local_res8.s.LowPart;
  uVar5 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(this->TopLevelClusterParentsStrained).field_0x8 !=
      *(int *)&(this->TopLevelClusterParentsStrained).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TopLevelClusterParentsStrained).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TopLevelClusterParentsStrained).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TopLevelClusterParentsStrained).field_0x48 - 1U &
                              uVar5) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->TopLevelClusterParentsStrained + (longlong)iVar2 * 0x18;
        if (*(TPBDRigidParticleHandleImp<double,3,1> **)
             (*(longlong *)&this->TopLevelClusterParentsStrained + (longlong)iVar2 * 0x18) ==
            local_res10) {
          if (lVar1 != 0) {
            return;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = &local_res10;
  local_10 = &local_res18;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,__int64_&&>_>
            ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,__int64,0>,FDefaultSetAllocator>
              *)&this->TopLevelClusterParentsStrained,(uint)&local_res8,
             (TPairInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,__int64_&&>
              *)(ulonglong)uVar5,(bool *)&local_18);
  return;
}

// Visitor @ 143cb1500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRigidClustering::Visitor
          (FRigidClustering *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TFunction<void___cdecl(Chaos::FRigidClustering_&,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*)>
          *param_2)

{
  TMap<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FName FVar1;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  FRigidClustering *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterVisitor> FVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  ForElementType<FSetElementId> FVar20;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  undefined8 *puVar21;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar22;
  undefined8 *puVar23;
  undefined1 local_a7;
  undefined1 local_a6 [6];
  FName local_a0;
  FColor_u_0 local_98 [2];
  FName local_90;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_88;
  TFunction<void___cdecl(Chaos::FRigidClustering_&,Chaos::TPBDRigidParticleHandleImp<double,3,1>_*)>
  *local_80;
  FName local_78;
  undefined8 *local_68;
  FRigidClustering *local_58;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_50;
  FName local_48 [2];
  
  local_80 = param_2;
  local_58 = this;
  if (param_1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    this_00 = &this->MChildren;
    uVar17 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    local_88 = (TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00;
    if (*(int *)&(this->MChildren).field_0x8 != *(int *)&(this->MChildren).field_0x34) {
      puVar19 = *(undefined1 **)&(this->MChildren).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->MChildren).field_0x38;
      }
      iVar10 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->MChildren).field_0x48 - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4)
      ;
      if (iVar10 != -1) {
        do {
          if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
               ((longlong)iVar10 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1) {
            pTVar11 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)this_00,param_1);
            if ((pTVar11 ==
                 (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                  *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)&pTVar11->field_0x10 != 0) {
              puVar23 = (undefined8 *)0x0;
              FVar13 = StatPtr_STAT_ClusterVisitor;
              if (StatPtr_STAT_ClusterVisitor ==
                  (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterVisitor>)0x0) {
                pFVar12 = ::FName::FName(local_48,"STAT_ClusterVisitor");
                FVar13 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterVisitor>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClusterVisitor,
                                    *pFVar12,L"FRigidClustering::Visitor","STATGROUP_Chaos",
                                    "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                                    MCR_Invalid);
              }
              FVar1 = *(FName *)FVar13;
              bVar8 = false;
              bVar5 = false;
              local_78.ComparisonIndex.Value = 0;
              local_78.Number = 0;
              bVar7 = false;
              bVar9 = false;
              if ((FVar1.ComparisonIndex.Value.Value == 0) && (FVar1.Number == 0)) {
LAB_143cb1775:
                bVar5 = bVar9;
                bVar8 = bVar7;
                bVar7 = false;
                local_a0 = local_78;
              }
              else {
                if (GCycleStatsShouldEmitNamedEvents != 0) {
                  local_98[0].Bits = 0;
                  FGenericPlatformMisc::BeginNamedEvent
                            ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10)
                            );
                  bVar8 = false;
                  bVar5 = true;
                  bVar7 = false;
                  bVar9 = true;
                  if (-1 < CpuChannel->Enabled) {
                    local_90.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
                    local_90.Number = FVar1.Number;
                    FCpuProfilerTrace::OutputBeginDynamicEventWithId
                              (&local_90,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidClustering.cpp"
                               ,0x7da);
                    bVar8 = true;
                    bVar5 = true;
                    bVar7 = true;
                    bVar9 = true;
                  }
                }
                if (FThreadStats::bPrimaryEnable == false) goto LAB_143cb1775;
                local_a0 = FVar1;
                FThreadStats::AddMessage(FVar1,CycleScopeStart);
                bVar7 = true;
              }
              puVar14 = ::operator_new(0x10);
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = 0;
                puVar14[1] = 0;
                *puVar14 = 0;
                puVar23 = puVar14;
              }
              local_68 = puVar23;
              pTVar11 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)this_00,param_1);
              if ((pTVar11 ==
                   (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                    *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar21 = *(undefined8 **)&pTVar11->field_0x8;
              iVar10 = *(int *)&pTVar11->field_0x10;
              puVar14 = puVar21 + iVar10;
              while( true ) {
                if (*(int *)&pTVar11->field_0x10 != iVar10) {
                  local_a7 = 0;
                  `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_a7);
                }
                pFVar6 = local_58;
                this_01 = local_88;
                if (puVar21 == puVar14) break;
                uVar16 = *puVar21;
                puVar15 = ::operator_new(0x10);
                if (puVar15 != (undefined8 *)0x0) {
                  *puVar15 = 0;
                  puVar15[1] = uVar16;
                  *local_68 = puVar15;
                  local_68 = puVar15;
                }
                puVar21 = puVar21 + 1;
              }
              while (FVar1 = local_a0, puVar14 = (undefined8 *)*puVar23,
                    puVar14 != (undefined8 *)0x0) {
                pTVar2 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)puVar14[1];
                puVar14[1] = 0;
                ::operator_delete(puVar23,0x10);
                puVar23 = puVar14;
                param_2 = local_80;
                if (pTVar2 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
                  pTVar22 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                  if (2 < (byte)pTVar2->field_0xc) {
                    pTVar22 = pTVar2;
                  }
                  if ((pTVar22 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
                     (uVar17 = ((uint)((ulonglong)pTVar22 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)pTVar22 >> 4)) * -0x7a143595,
                     uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb,
                     *(int *)&(pFVar6->MChildren).field_0x8 !=
                     *(int *)&(this_01->Elements).field_0x34)) {
                    FVar3 = (this_01->Hash).SecondaryData;
                    FVar20 = (ForElementType<FSetElementId>)&this_01->Hash;
                    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                      FVar20 = FVar3;
                    }
                    iVar10 = *(int *)((longlong)FVar20 +
                                     (ulonglong)(this_01->HashSize - 1U & (uVar17 >> 0x10 ^ uVar17))
                                     * 4);
                    if (iVar10 != -1) {
LAB_143cb1920:
                      if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                           ((longlong)iVar10 * 0x20 + *(longlong *)&this_01->Elements) != pTVar22)
                      goto code_r0x000143cb192c;
                      pTVar11 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                ::Find(this_01,pTVar22);
                      if ((pTVar11 ==
                           (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
                            *)0x0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Pair != nullptr",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                             ,0x288,L""), bVar9)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      puVar21 = *(undefined8 **)&pTVar11->field_0x8;
                      iVar10 = *(int *)&pTVar11->field_0x10;
                      puVar14 = puVar21 + iVar10;
                      while( true ) {
                        if (*(int *)&pTVar11->field_0x10 != iVar10) {
                          local_a6[0] = 0;
                          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(local_a6);
                        }
                        this_01 = local_88;
                        if (puVar21 == puVar14) break;
                        uVar16 = *puVar21;
                        puVar15 = ::operator_new(0x10);
                        if (puVar15 != (undefined8 *)0x0) {
                          *puVar15 = 0;
                          puVar15[1] = uVar16;
                          *local_68 = puVar15;
                          local_68 = puVar15;
                        }
                        puVar21 = puVar21 + 1;
                      }
                    }
                  }
LAB_143cb19db:
                  param_2 = local_80;
                  local_50 = pTVar2;
                  UE::Core::Private::Function::CheckCallable(*(void **)local_80);
                  pcVar4 = *(code **)param_2;
                  plVar18 = *(longlong **)&param_2->field_0x28;
                  if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
                    plVar18 = (longlong *)&param_2->field_0x10;
                  }
                  uVar16 = (**(code **)(*plVar18 + 8))();
                  (*pcVar4)(uVar16,pFVar6);
                }
              }
              do {
                puVar14 = (undefined8 *)*puVar23;
                ::operator_delete(puVar23,0x10);
                puVar23 = puVar14;
              } while (puVar14 != (undefined8 *)0x0);
              if (bVar5) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar8) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (bVar7) {
                FThreadStats::AddMessage(FVar1,CycleScopeEnd);
              }
            }
            break;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
        } while (iVar10 != -1);
      }
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar18 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return;
code_r0x000143cb192c:
  iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this_01->Elements);
  if (iVar10 == -1) goto LAB_143cb19db;
  goto LAB_143cb1920;
}

// operator() @ 1504a38b0

bool __thiscall
`Chaos::FRigidClustering::
CreateNodeConnection<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7047889690325680606>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7047889690325680606>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::FRigidClustering::CreateNodeConnection<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>(Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6b30

bool __thiscall
`Chaos::FRigidClustering::ReleaseClusterParticles'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5292282805487666236>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5292282805487666236>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a6b70

bool __thiscall
`Chaos::FRigidClustering::ReleaseClusterParticlesImpl'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5292282805487666273>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5292282805487666273>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

