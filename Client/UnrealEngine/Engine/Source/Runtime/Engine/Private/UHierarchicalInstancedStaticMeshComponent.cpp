// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 65

// UHierarchicalInstancedStaticMeshComponent @ 14727f970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UHierarchicalInstancedStaticMeshComponent * __thiscall
UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
          (UHierarchicalInstancedStaticMeshComponent *this,FVTableHelper *param_1)

{
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHierarchicalInstancedStaticMeshComponent__6B_;
  (this->ClusterTreePtr).Object = (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0;
  (this->ClusterTreePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SortedInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedInstances).ArrayNum = 0;
  (this->SortedInstances).ArrayMax = 0;
  (this->BuiltInstanceBounds).IsValid = '\0';
  (this->UnbuiltInstanceBounds).IsValid = '\0';
  (this->UnbuiltInstanceBoundsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnbuiltInstanceBoundsList).ArrayNum = 0;
  (this->UnbuiltInstanceBoundsList).ArrayMax = 0;
  (this->AccumulatedNavigationDirtyArea).IsValid = '\0';
  (this->AccumulatedNavigationDirtyAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedNavigationDirtyAreas).ArrayNum = 0;
  (this->AccumulatedNavigationDirtyAreas).ArrayMax = 0;
  (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  (this->BuildTreeAsyncTasks).ArrayNum = 0;
  (this->BuildTreeAsyncTasks).ArrayMax = 4;
  this->ViewRelevanceType = HISM;
  return this;
}

// GetPrivateStaticClass @ 147280f20

UClass * __cdecl UHierarchicalInstancedStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HierarchicalInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent,0xba0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHierarchicalInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UHierarchicalInstancedStaticMeshComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.InnerSingleton;
}

// Serialize @ 1472813e0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::Serialize
          (UHierarchicalInstancedStaticMeshComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent @ 147281550

void __cdecl
UHierarchicalInstancedStaticMeshComponent::
StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent(void)

{
  return;
}

// UHierarchicalInstancedStaticMeshComponent @ 147cc65e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UHierarchicalInstancedStaticMeshComponent * __thiscall
UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
          (UHierarchicalInstancedStaticMeshComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar2;
  TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> local_res8;
  
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHierarchicalInstancedStaticMeshComponent__6B_;
  pTVar2 = ::operator_new(0x10);
  local_res8.Object = (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar2 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
    local_res8.Object = pTVar2;
  }
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1><TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>
            (&this->ClusterTreePtr,&local_res8);
  this->bUseTranslatedInstanceSpace = 0;
  (this->SortedInstances).ArrayNum = 0;
  (this->SortedInstances).ArrayMax = 0;
  (this->BuiltInstanceBounds).IsValid = '\0';
  (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.X = 0.0;
  (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Y = 0.0;
  (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Z = 0.0;
  this->NumBuiltInstances = 0;
  this->NumBuiltRenderInstances = 0;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->SortedInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->UnbuiltInstanceBounds).IsValid = '\0';
  (this->UnbuiltInstanceBounds).Pad[0] = '\0';
  (this->UnbuiltInstanceBounds).Pad[1] = '\0';
  (this->UnbuiltInstanceBounds).Pad[2] = '\0';
  (this->UnbuiltInstanceBounds).Pad[3] = '\0';
  (this->UnbuiltInstanceBounds).Pad[4] = '\0';
  (this->UnbuiltInstanceBounds).Pad[5] = '\0';
  (this->UnbuiltInstanceBounds).Pad[6] = '\0';
  this->bIsAsyncBuilding = false;
  this->bConcurrentChanges = false;
  this->bIsOutOfDate = false;
  this->bAutoRebuildTreeOnInstanceChanges = true;
  this->bEnableDensityScaling = 0;
  (this->UnbuiltInstanceBoundsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnbuiltInstanceBoundsList).ArrayNum = 0;
  (this->UnbuiltInstanceBoundsList).ArrayMax = 0;
  (this->AccumulatedNavigationDirtyArea).IsValid = '\0';
  (this->AccumulatedNavigationDirtyAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccumulatedNavigationDirtyAreas).ArrayNum = 0;
  (this->AccumulatedNavigationDirtyAreas).ArrayMax = 0;
  (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  this->CurrentDensityScaling = 1.0;
  this->OcclusionLayerNumNodes = 0;
  this->InstanceCountToRender = 0;
  (this->BuildTreeAsyncTasks).ArrayNum = 0;
  (this->BuildTreeAsyncTasks).ArrayMax = 4;
  this->ViewRelevanceType = HISM;
  FPrimitiveInstanceDataManager::SetMode((FPrimitiveInstanceDataManager *)&this->field_0x7a0,Legacy)
  ;
  this->field_0x9a = this->field_0x9a | 0x80;
  this->field_0x27d = this->field_0x27d & 0xf7;
  return this;
}

// ~UHierarchicalInstancedStaticMeshComponent @ 147cc9270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::~UHierarchicalInstancedStaticMeshComponent
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  auVar1 = *(uchar (*) [8])&this->field_0x730;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UHierarchicalInstancedStaticMeshComponent__6B_;
  if (auVar1 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_FoliageInstanceBuffers;
    if (StatPtr_STAT_FoliageInstanceBuffers ==
        (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_FoliageInstanceBuffers");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageInstanceBuffers,*pFVar4,
                         L"Instance Buffers","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar5;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  *(undefined8 *)&this->field_0x730 = 0;
  FVar6 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->BuildTreeAsyncTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar6,(this->BuildTreeAsyncTasks).ArrayNum);
  FVar6 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar3 = (this->AccumulatedNavigationDirtyAreas).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->UnbuiltInstanceBoundsList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SortedInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClusterTreePtr).SharedReferenceCount.ReferenceController);
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  return;
}

// operator() @ 147ccb800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>::
operator()(void *this,FISMInstanceUpdateChangeSet *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  TVector<double>_u_0 local_b8;
  TStridedView<UE::Math::TMatrix<double>,int> local_98;
  TArrayView<UE::Math::TMatrix<double>,int> local_88;
  TVector<double>_u_0 local_78 [2];
  double local_48;
  
  UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon
            (*(UInstancedStaticMeshComponent **)this,param_1);
  uVar8 = _UNK_15066df7c;
  uVar7 = _UNK_15066df78;
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  lVar3 = *(longlong *)this;
  local_98.FirstElementPtr = *(TMatrix<double> **)(lVar3 + 0x658);
  local_78[0]._0_4_ =
       (uint)*(undefined8 *)(lVar3 + 0xa18) ^ (uint)__xmm_80000000000000008000000000000000;
  local_78[0]._4_4_ =
       (uint)((ulonglong)*(undefined8 *)(lVar3 + 0xa18) >> 0x20) ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_78[0]._8_4_ =
       (uint)*(undefined8 *)(lVar3 + 0xa20) ^ (uint)__xmm_80000000000000008000000000000000;
  local_78[0]._12_4_ =
       (uint)((ulonglong)*(undefined8 *)(lVar3 + 0xa20) >> 0x20) ^
       __xmm_80000000000000008000000000000000._4_4_;
  iVar1 = *(int *)(lVar3 + 0x660);
  local_48 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar3 + 0xa28) >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)*(undefined8 *)(lVar3 + 0xa28) ^
                              (uint)__xmm_80000000000000008000000000000000);
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_98.NumElements = iVar1;
  local_98.BytesBetweenElements = 0x80;
  local_78[0]._s_0.Z = local_48;
  FISMInstanceUpdateChangeSet::SetInstanceTransforms
            (param_1,&local_98,(TVector<double> *)&local_78[0]._s_0);
  lVar3 = *(longlong *)this;
  local_b8._0_4_ = *(uint *)(lVar3 + 0xa18) ^ uVar5;
  local_b8._4_4_ = *(uint *)(lVar3 + 0xa1c) ^ uVar6;
  local_b8._8_4_ = *(uint *)(lVar3 + 0xa20) ^ uVar7;
  local_b8._12_4_ = *(uint *)(lVar3 + 0xa24) ^ uVar8;
  local_b8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar3 + 0xa28) >> 0x20) ^ uVar6,
                        (uint)*(undefined8 *)(lVar3 + 0xa28) ^ uVar5);
  local_88.DataPtr = *(TMatrix<double> **)(lVar3 + 0x668);
  iVar2 = *(int *)(lVar3 + 0x670);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_88._12_4_ = iVar1;
  local_88.ArrayNum = iVar2;
  FISMInstanceUpdateChangeSet::SetInstancePrevTransforms
            (param_1,&local_88,(TVector<double> *)&local_b8._s_0);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->LegacyInstanceReorderTable,
             (TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x720));
  return;
}

// operator() @ 147ccbed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UHierarchicalInstancedStaticMeshComponent::GetOverlappingBoxTransforms'::__l2::<lambda_1>::
operator()(void *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  TMatrix<double> local_138 [2];
  
  pauVar4 = *(undefined1 (**) [16])this;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_138);
  dVar8 = *(double *)(pauVar4[1] + 8);
  dVar9 = *(double *)pauVar4[2];
  pdVar5 = *(double **)((longlong)this + 8);
  auVar3 = *pauVar4;
  dVar1 = *(double *)(pauVar4[2] + 8);
  dVar2 = *(double *)pauVar4[1];
  dVar11 = auVar3._0_8_;
  dVar12 = auVar3._8_8_;
  auVar13._8_4_ = auVar3._8_4_;
  auVar13._0_8_ = dVar12;
  auVar13._12_4_ = auVar3._12_4_;
  dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar9 * local_138[0].M[1][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9 * local_138[0].M[1][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar8 * local_138[0].M[0][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8 * local_138[0].M[0][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * local_138[0].M[2][0]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 * local_138[0].M[2][0],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar9 * local_138[0].M[1][1]) >> 0x20) &
                           _UNK_15061cc8c,SUB84(dVar9 * local_138[0].M[1][1],0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dVar8 * local_138[0].M[0][1]) >> 0x20) &
                           _UNK_15061cc8c,SUB84(dVar8 * local_138[0].M[0][1],0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * local_138[0].M[2][1]) >> 0x20) &
                           _UNK_15061cc8c,SUB84(dVar1 * local_138[0].M[2][1],0) & _UNK_15061cc88);
  local_138[0].M[3][0] =
       dVar12 * local_138[0].M[1][0] + dVar11 * local_138[0].M[0][0] + dVar2 * local_138[0].M[2][0]
       + local_138[0].M[3][0];
  local_138[0].M[3][1] =
       auVar13._8_8_ * local_138[0].M[1][1] + dVar11 * local_138[0].M[0][1] +
       dVar2 * local_138[0].M[2][1] + local_138[0].M[3][1];
  local_138[0].M[3][2] =
       dVar12 * local_138[0].M[1][2] + dVar11 * local_138[0].M[0][2] + dVar2 * local_138[0].M[2][2]
       + local_138[0].M[3][2];
  dVar12 = local_138[0].M[3][0] - dVar6;
  dVar1 = (double)CONCAT44((uint)((ulonglong)(dVar9 * local_138[0].M[1][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9 * local_138[0].M[1][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar8 * local_138[0].M[0][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8 * local_138[0].M[0][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * local_138[0].M[2][2]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 * local_138[0].M[2][2],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar11 = local_138[0].M[3][1] - dVar7;
  dVar2 = local_138[0].M[3][2] - dVar1;
  if ((((local_138[0].M[3][0] + dVar6 < *pdVar5) || (pdVar5[3] <= dVar12 && dVar12 != pdVar5[3])) ||
      (local_138[0].M[3][1] + dVar7 < pdVar5[1])) ||
     (((pdVar5[4] <= dVar11 && dVar11 != pdVar5[4] || (local_138[0].M[3][2] + dVar1 < pdVar5[2])) ||
      (pdVar5[5] <= dVar2 && dVar2 != pdVar5[5])))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  return bVar10;
}

// operator() @ 147ccd160

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
`UHierarchicalInstancedStaticMeshComponent::RemoveInstances'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  UHierarchicalInstancedStaticMeshComponent *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_1c;
  TArrayView<int_const_,int> local_18;
  
  lVar3 = *(longlong *)this;
  if ((param_1->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar1 = *(int *)(param_1->AllocatorInstance).Data;
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0x660))) {
    lVar3 = *(longlong *)this;
    uVar9 = param_1->ArrayNum - 1;
    uVar8 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar1 = param_1->ArrayNum;
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar2 = *(int *)(pFVar4 + ((longlong)iVar1 + -1) * 4);
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar3 + 0x660))) {
      this_00 = *(UHierarchicalInstancedStaticMeshComponent **)this;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar1;
      local_18.DataPtr = (int *)pFVar4;
      UHierarchicalInstancedStaticMeshComponent::RemoveInstancesInternal(this_00,&local_18);
      if ((*(UHierarchicalInstancedStaticMeshComponent **)this)->bAutoRebuildTreeOnInstanceChanges)
      {
        UHierarchicalInstancedStaticMeshComponent::BuildTreeIfOutdated
                  (*(UHierarchicalInstancedStaticMeshComponent **)this,true,false);
      }
      UActorComponent::MarkRenderStateDirty(*(UActorComponent **)this);
      return true;
    }
  }
  return false;
}

// operator() @ 147ccd730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync'::__l41::<lambda_1>::operator()
          (void *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  code *pcVar5;
  FTSTicker *this_00;
  code **ppcVar6;
  atomic<int> *paVar7;
  undefined1 auStackY_98 [32];
  TWeakPtr<FTSTicker::FElement,1> local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  pcVar4 = *(code **)this;
  pcVar5 = *(code **)((longlong)this + 8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  pcVar2 = *(code **)((longlong)this + 0x18);
  this_00 = FTSTicker::GetCoreTicker();
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<``UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync'::`41'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_30[1] = pcVar4;
  local_30[2] = pcVar5;
  local_30[3] = (code *)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  local_30[4] = pcVar2;
  if (local_30 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<``UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync'::__l41::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker
            (this_00,&local_68,L"ApplyBuildTreeAsync_GameThread",0.0,
             (TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar7 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar1 = *paVar7;
    *paVar7 = (atomic<int>)((int)*paVar7 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    ppcVar6 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar6 = local_30;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 147ccd8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UHierarchicalInstancedStaticMeshComponent::GetInstancesOverlappingBox'::__l13::<lambda_1>::
operator()(void *this,TMatrix<double> *param_1)

{
  undefined1 auStack_68 [32];
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)((longlong)this + 0x38),(TBox<double> *)&local_48._s_0,param_1);
  if ((((*(double *)this <= local_30) &&
       (local_48._s_0.X < *(double *)((longlong)this + 0x18) ||
        local_48._s_0.X == *(double *)((longlong)this + 0x18))) &&
      (*(double *)((longlong)this + 8) <= local_28)) &&
     (((local_48._s_0.Y < *(double *)((longlong)this + 0x20) ||
        local_48._s_0.Y == *(double *)((longlong)this + 0x20) &&
       (*(double *)((longlong)this + 0x10) <= local_20)) &&
      (local_48._s_0.Z < *(double *)((longlong)this + 0x28) ||
       local_48._s_0.Z == *(double *)((longlong)this + 0x28))))) {
    return true;
  }
  return false;
}

// operator() @ 147ccd960

bool __thiscall
`UHierarchicalInstancedStaticMeshComponent::GetInstancesOverlappingSphere'::__l13::<lambda_1>::
operator()(void *this,TMatrix<double> *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> local_28;
  
  pTVar2 = UE::Math::TMatrix<double>::GetScaleVector(param_1,&local_28,__real_3e45798ee0000000);
  dVar5 = *(double *)this - param_1->M[3][0];
  dVar4 = (pTVar2->field0_0x0)._s_0.Y;
  dVar1 = (pTVar2->field0_0x0)._s_0.X;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  dVar6 = *(double *)((longlong)this + 8) - param_1->M[3][1];
  dVar3 = *(double *)((longlong)this + 0x10) - param_1->M[3][2];
  dVar1 = (pTVar2->field0_0x0)._s_0.Z;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  dVar4 = dVar4 * (double)*(float *)((longlong)this + 0x20) + *(double *)((longlong)this + 0x18) +
          __real_3f1a36e2e0000000;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar6 * dVar6 + dVar5 * dVar5 + dVar3 * dVar3 <= dVar4 * dVar4;
}

// ActualInstancesPerLeaf @ 147cd0130

float __thiscall
UHierarchicalInstancedStaticMeshComponent::ActualInstancesPerLeaf
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  
  if ((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      fVar13 = (float)(*pcVar3)();
      return fVar13;
    }
  }
  pTVar1 = (this->ClusterTreePtr).Object;
  if (pTVar1->ArrayNum != 0) {
    iVar11 = 0;
    iVar12 = 0;
    uVar8 = pTVar1->ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 6;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar8 < pTVar1->ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            fVar13 = (float)(*pcVar3)();
            return fVar13;
          }
        }
        if (-1 < *(int *)((pTVar1->AllocatorInstance).Data + lVar9 + 0xc)) break;
        iVar11 = iVar11 + 1;
        uVar7 = 0;
        if ((int)uVar8 < pTVar1->ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            fVar13 = (float)(*pcVar3)();
            return fVar13;
          }
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        uVar7 = 0;
        if ((int)uVar8 < pTVar1->ArrayNum) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            fVar13 = (float)(*pcVar3)();
            return fVar13;
          }
        }
        lVar4 = lVar9 + 0x24;
        lVar5 = lVar9 + 0x20;
        lVar9 = lVar9 + -0x40;
        iVar12 = iVar12 + 1 +
                 (*(int *)(pFVar2 + lVar4) - *(int *)((pTVar1->AllocatorInstance).Data + lVar5));
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
      if (iVar11 != 0) {
        return (float)iVar12 / (float)iVar11;
      }
    }
  }
  return 0.0;
}

// AddInstance @ 147cd1430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UHierarchicalInstancedStaticMeshComponent::AddInstance
          (UHierarchicalInstancedStaticMeshComponent *this,TTransform<double> *param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  byte bVar5;
  UObject *pUVar6;
  UStaticMesh *pUVar7;
  TVector<double>_u_0 *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_HISMCAddInstance> FVar19;
  TBoxSphereBounds<double,double> *pTVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar21;
  FName FVar22;
  uint uVar23;
  undefined1 auStackY_1a8 [32];
  int local_148;
  FColor_u_0 local_144;
  FName local_140;
  FName local_138;
  FName local_130;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  FName local_108;
  TBoxSphereBounds<double,double> local_100;
  TVector<double>_u_0 local_c8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  TVector<double>_u_0 local_90;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVar19 = StatPtr_STAT_HISMCAddInstance;
  if (StatPtr_STAT_HISMCAddInstance == (FThreadSafeStaticStat<FStat_STAT_HISMCAddInstance>)0x0) {
    pFVar18 = ::FName::FName(&local_108,"STAT_HISMCAddInstance");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_HISMCAddInstance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HISMCAddInstance,*pFVar18,
                        L"HISMC_AddInstance","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar19;
  bVar11 = false;
  bVar13 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_144.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_144._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_138.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0x9a2);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar12 = true;
      goto LAB_147cd1593;
    }
  }
  bVar12 = false;
  FVar22 = local_130;
LAB_147cd1593:
  local_140 = (FName)this;
  if (*(int *)&this->field_0x6e4 == 0) {
    iVar16 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
             operator()(&local_140);
    *(int *)&this->field_0x6e4 = iVar16;
  }
  uVar17 = UInstancedStaticMeshComponent::AddInstanceInternal
                     ((UInstancedStaticMeshComponent *)this,*(int *)&this->field_0x660,
                      (FInstancedStaticMeshInstanceData *)0x0,param_1,param_2);
  if ((uVar17 != 0xffffffff) && (*(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar6 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    cVar14 = (**(code **)(*(longlong *)(pUVar6 + 6) + 0x10))();
    if (cVar14 == '\0') {
      pUVar7 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      bVar15 = UStaticMesh::HasValidRenderData(pUVar7,false,-1);
      if (bVar15) {
        if (uVar17 != *(uint *)&this->field_0x728) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceIndex == InstanceReorderTable.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                              ,0x9ac,L"");
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            iVar16 = (*pcVar10)();
            return iVar16;
          }
        }
        bVar5 = this->field_0xb14;
        puVar2 = &this->field_0x720;
        this->field_0xb14 = (bVar5 << 2 | bVar5) & 4 ^ (bVar5 & 0xfb | 2);
        local_148 = (this->InstanceCountToRender - *(int *)&this->field_0x728) + uVar17;
        if ((*(int **)puVar2 <= &local_148) &&
           (&local_148 < *(int **)puVar2 + *(int *)&this->field_0x72c)) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            iVar16 = (*pcVar10)();
            return iVar16;
          }
        }
        iVar16 = *(int *)&this->field_0x728;
        if (iVar16 == *(int *)&this->field_0x72c) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)puVar2,(int *)&this->field_0x72c);
        }
        *(int *)&this->field_0x728 = iVar16 + 1;
        *(int *)(*(longlong *)puVar2 + (longlong)iVar16 * 4) = local_148;
        this->InstanceCountToRender = this->InstanceCountToRender + 1;
        pUVar7 = *(UStaticMesh **)&this->field_0x5a0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        pTVar20 = UStaticMesh::GetBounds(pUVar7,&local_100);
        local_60 = 1;
        dVar4 = (pTVar20->Origin).field0_0x0._s_0.Z;
        local_78 = (pTVar20->Origin).field0_0x0._s_0.X;
        local_70 = (pTVar20->Origin).field0_0x0._s_0.Y;
        local_90._s_0.X = local_78 - (pTVar20->BoxExtent).field0_0x0._s_0.X;
        local_78 = local_78 + (pTVar20->BoxExtent).field0_0x0._s_0.X;
        local_90._s_0.Y = local_70 - (pTVar20->BoxExtent).field0_0x0._s_0.Y;
        local_70 = local_70 + (pTVar20->BoxExtent).field0_0x0._s_0.Y;
        local_68 = dVar4 + (pTVar20->BoxExtent).field0_0x0._s_0.Z;
        local_90._s_0.Z = dVar4 - (pTVar20->BoxExtent).field0_0x0._s_0.Z;
        uVar23 = 0;
        if ((int)uVar17 < *(int *)&this->field_0x660) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if (uVar23 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            iVar16 = (*pcVar10)();
            return iVar16;
          }
        }
        UE::Math::TBox<double>::TransformBy
                  ((TBox<double> *)&local_90._s_0,(TBox<double> *)&local_c8._s_0,
                   (TMatrix<double> *)
                   ((longlong)(int)uVar17 * 0x80 + *(longlong *)&this->field_0x658));
        UE::Math::TBox<double>::operator+=
                  (&this->UnbuiltInstanceBounds,(TBox<double> *)&local_c8._s_0);
        pTVar3 = &this->UnbuiltInstanceBoundsList;
        pTVar8 = (TVector<double>_u_0 *)(pTVar3->AllocatorInstance).Data;
        if ((pTVar8 <= &local_c8) &&
           (&local_c8 <
            (TVector<double>_u_0 *)
            ((longlong)pTVar8 + (longlong)(this->UnbuiltInstanceBoundsList).ArrayMax * 0x38))) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            iVar16 = (*pcVar10)();
            return iVar16;
          }
        }
        iVar16 = (this->UnbuiltInstanceBoundsList).ArrayNum;
        piVar1 = &(this->UnbuiltInstanceBoundsList).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar3->AllocatorInstance,piVar1);
        }
        lVar21 = (longlong)iVar16 * 0x38;
        pFVar9 = (pTVar3->AllocatorInstance).Data;
        (this->UnbuiltInstanceBoundsList).ArrayNum = iVar16 + 1;
        *(double *)(pFVar9 + lVar21) = local_c8._s_0.X;
        *(double *)(pFVar9 + lVar21 + 8) = local_c8._s_0.Y;
        *(double *)(pFVar9 + lVar21 + 0x10) = local_c8._s_0.Z;
        *(undefined8 *)(pFVar9 + lVar21 + 0x10 + 8) = uStack_b0;
        *(undefined8 *)(pFVar9 + lVar21 + 0x20) = local_a8;
        *(undefined8 *)(pFVar9 + lVar21 + 0x20 + 8) = uStack_a0;
        *(undefined8 *)(pFVar9 + lVar21 + 0x30) = local_98;
        if (this->bAutoRebuildTreeOnInstanceChanges) {
          BuildTreeIfOutdated(this,true,false);
        }
      }
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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
  return uVar17;
}

// AddInstances @ 147cd1f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147cd24a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UHierarchicalInstancedStaticMeshComponent::AddInstances
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3,bool param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  UObject *pUVar9;
  UStaticMesh *pUVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  bool bVar32;
  bool bVar33;
  char cVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  FName *pFVar38;
  FThreadSafeStaticStat<FStat_STAT_HISMCAddInstances> FVar39;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar40;
  TBoxSphereBounds<double,double> *pTVar41;
  double *pdVar42;
  ForAnyElementType FVar43;
  longlong lVar44;
  ForAnyElementType *pFVar45;
  ulonglong uVar46;
  FNameEntryId FVar47;
  undefined1 *puVar48;
  FName FVar49;
  ForAnyElementType FVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStackY_2d8 [32];
  undefined1 local_277;
  char local_276;
  int local_274;
  int local_270;
  uint local_268;
  uint uStack_264;
  TArray<int,TSizedDefaultAllocator<32>_> local_260;
  ForAnyElementType local_250;
  uint local_248;
  int iStack_244;
  FColor_u_0 local_240 [2];
  FName local_238;
  FName local_230;
  TArray<int,TSizedDefaultAllocator<32>_> *local_228;
  FName local_220;
  UHierarchicalInstancedStaticMeshComponent *local_210;
  FScriptContainerElement *local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  TTransform<double> *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  double dStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  FName local_1a0;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_198;
  TBoxSphereBounds<double,double> local_188;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined8 local_130;
  double dStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined1 local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_268 = 0;
  FVar39 = StatPtr_STAT_HISMCAddInstances;
  local_276 = param_2;
  local_228 = __return_storage_ptr__;
  if (StatPtr_STAT_HISMCAddInstances == (FThreadSafeStaticStat<FStat_STAT_HISMCAddInstances>)0x0) {
    pFVar38 = ::FName::FName(&local_1a0,"STAT_HISMCAddInstances");
    FVar39 = (FThreadSafeStaticStat<FStat_STAT_HISMCAddInstances>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HISMCAddInstances,*pFVar38,
                        L"HISMC_AddInstances","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar23 = false;
  bVar24 = false;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  FVar49 = *(FName *)FVar39;
  bVar32 = false;
  bVar33 = false;
  FVar47 = FVar49.ComparisonIndex.Value;
  uVar35 = FVar49.Number;
  if ((FVar47.Value != 0) || (bVar25 = bVar23, bVar26 = bVar24, uVar35 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240[0]._s_0,(char *)*(FName *)((longlong)FVar39 + 0x10));
      bVar23 = false;
      bVar24 = true;
      bVar32 = false;
      bVar33 = true;
      if (-1 < CpuChannel->Enabled) {
        local_238.ComparisonIndex.Value = FVar47.Value;
        local_238.Number = uVar35;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_238,(wchar_t *)*(FName *)((longlong)FVar39 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0x9c4);
        bVar23 = true;
        bVar24 = true;
        bVar32 = true;
        bVar33 = true;
      }
    }
    bVar25 = bVar23;
    bVar26 = bVar24;
    if (FThreadStats::bPrimaryEnable != false) {
      local_268 = FVar47.Value;
      uStack_264 = uVar35;
      local_230 = FVar49;
      FThreadStats::AddMessage(FVar49,CycleScopeStart);
      bVar32 = true;
      goto LAB_147cd2093;
    }
  }
  bVar24 = bVar33;
  bVar23 = bVar32;
  bVar32 = false;
  local_230 = local_220;
  FVar49 = local_220;
LAB_147cd2093:
  local_210 = this;
  if (*(int *)&this->field_0x6e4 == 0) {
    iVar36 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
             operator()(&local_210);
    *(int *)&this->field_0x6e4 = iVar36;
  }
  local_1e8 = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  iVar36 = param_1->ArrayNum;
  if ((iVar36 < 0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar33)) {
    pcVar12 = (code *)swi(3);
    pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
    return pTVar40;
  }
  local_198._12_4_ = uStack_1dc;
  local_198.ArrayNum = iVar36;
  local_198.DataPtr = local_1e8;
  iStack_1e0 = iVar36;
  UInstancedStaticMeshComponent::AddInstancesInternal
            ((UInstancedStaticMeshComponent *)this,&local_260,&local_198,true,param_3,param_4);
  local_1c0 = (double)CONCAT44(local_1c0._4_4_,(undefined4)local_1c0);
  uStack_1b8 = (double)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
  local_130 = (double)CONCAT44(local_130._4_4_,(undefined4)local_130);
  if ((0 < local_260.ArrayNum) &&
     (local_1c0 = (double)CONCAT44(local_1c0._4_4_,(undefined4)local_1c0),
     uStack_1b8 = (double)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8),
     local_130 = (double)CONCAT44(local_130._4_4_,(undefined4)local_130),
     *(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar9 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    cVar34 = (**(code **)(*(longlong *)(pUVar9 + 6) + 0x10))();
    if (cVar34 == '\0') {
      pUVar10 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      bVar33 = UStaticMesh::HasValidRenderData(pUVar10,false,-1);
      iVar36 = local_260.ArrayNum;
      if (bVar33) {
        bVar6 = this->field_0xb14;
        puVar2 = &this->field_0x720;
        this->field_0xb14 = (bVar6 << 2 | bVar6) & 4 ^ (bVar6 & 0xfb | 2);
        uVar35 = local_260.ArrayNum + *(int *)&this->field_0x728;
        if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        if (*(int *)&this->field_0x72c < (int)uVar35) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar35,(ForAnyElementType *)puVar2,*(int *)&this->field_0x728,
                     (int *)&this->field_0x72c);
        }
        iVar7 = (this->UnbuiltInstanceBoundsList).ArrayNum;
        pTVar3 = &this->UnbuiltInstanceBoundsList;
        uVar35 = iVar36 + iVar7;
        if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        piVar1 = &(this->UnbuiltInstanceBoundsList).ArrayMax;
        if (*piVar1 < (int)uVar35) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,uVar35,&pTVar3->AllocatorInstance,iVar7,piVar1);
        }
        dVar31 = _UNK_150689678;
        dVar30 = ___xmm_3fe00000000000003fe0000000000000;
        uVar29 = _UNK_15061cc8c;
        uVar28 = _UNK_15061cc88;
        uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar35 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar46 = (ulonglong)local_260.ArrayNum;
        local_270 = this->InstanceCountToRender - *(int *)&this->field_0x728;
        local_208 = local_260.AllocatorInstance.Data + uVar46 * 4;
        local_268 = local_260.ArrayNum;
        FVar50.Data = local_260.AllocatorInstance.Data;
        while( true ) {
          pFVar11 = local_208;
          puVar48 = &this->field_0x72c;
          if (local_260.ArrayNum != (uint)uVar46) {
            local_277 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_277);
          }
          FVar49 = local_230;
          if (FVar50.Data == pFVar11) break;
          uVar8 = *(uint *)FVar50.Data;
          local_274 = uVar8 + local_270;
          if ((*(int **)puVar2 <= &local_274) && (&local_274 < *(int **)puVar2 + *(int *)puVar48)) {
            bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar33) {
              pcVar12 = (code *)swi(3);
              pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
              return pTVar40;
            }
          }
          iVar36 = *(int *)&this->field_0x728;
          if (iVar36 == *(int *)puVar48) {
            iVar36 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)puVar2,(int *)puVar48);
          }
          *(int *)&this->field_0x728 = iVar36 + 1;
          *(int *)(*(longlong *)puVar2 + (longlong)iVar36 * 4) = local_274;
          this->InstanceCountToRender = this->InstanceCountToRender + 1;
          pUVar10 = *(UStaticMesh **)&this->field_0x5a0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UStaticMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          pTVar41 = UStaticMesh::GetBounds(pUVar10,&local_188);
          local_100 = (pTVar41->Origin).field0_0x0._s_0.X;
          dStack_f8 = (pTVar41->Origin).field0_0x0._s_0.Y;
          local_118 = local_100 - (pTVar41->BoxExtent).field0_0x0._s_0.X;
          local_f0 = (pTVar41->Origin).field0_0x0._s_0.Z;
          dStack_110 = dStack_f8 - (pTVar41->BoxExtent).field0_0x0._s_0.Y;
          local_100 = local_100 + (pTVar41->BoxExtent).field0_0x0._s_0.X;
          dStack_f8 = dStack_f8 + (pTVar41->BoxExtent).field0_0x0._s_0.Y;
          local_108 = local_f0 - (pTVar41->BoxExtent).field0_0x0._s_0.Z;
          local_f0 = local_f0 + (pTVar41->BoxExtent).field0_0x0._s_0.Z;
          uVar37 = 0;
          if ((int)uVar8 < *(int *)&this->field_0x660) {
            uVar37 = ~uVar8 >> 0x1f;
          }
          local_e8 = 1;
          if (uVar37 == 0) {
            bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar33) {
              pcVar12 = (code *)swi(3);
              pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
              return pTVar40;
            }
          }
          pdVar42 = (double *)((longlong)(int)uVar8 * 0x80 + *(longlong *)&this->field_0x658);
          local_1a8 = 1;
          dVar16 = (local_f0 + local_108) * dVar30;
          dVar21 = (local_100 - local_118) * dVar30;
          dVar22 = (dStack_f8 - dStack_110) * dVar31;
          dVar17 = (local_100 + local_118) * dVar30;
          dVar19 = (dStack_f8 + dStack_110) * dVar31;
          dVar20 = (local_f0 - local_108) * dVar30;
          dVar4 = dVar19 * pdVar42[4] + dVar17 * *pdVar42 + dVar16 * pdVar42[8] + pdVar42[0xc];
          dVar5 = dVar19 * pdVar42[5] + dVar17 * pdVar42[1] + dVar16 * pdVar42[9] + pdVar42[0xd];
          dVar18 = dVar19 * pdVar42[6] + dVar17 * pdVar42[2] + dVar16 * pdVar42[10] + pdVar42[0xe];
          dVar16 = (double)CONCAT44((uint)((ulonglong)(dVar22 * pdVar42[4]) >> 0x20) & uVar27,
                                    SUB84(dVar22 * pdVar42[4],0) & uVar35) +
                   (double)CONCAT44((uint)((ulonglong)(dVar21 * *pdVar42) >> 0x20) & uVar27,
                                    SUB84(dVar21 * *pdVar42,0) & uVar35) +
                   (double)CONCAT44((uint)((ulonglong)(dVar20 * pdVar42[8]) >> 0x20) & uVar27,
                                    SUB84(dVar20 * pdVar42[8],0) & uVar35);
          uStack_1b8 = (double)CONCAT44((uint)((ulonglong)(dVar22 * pdVar42[5]) >> 0x20) & uVar29,
                                        SUB84(dVar22 * pdVar42[5],0) & uVar28) +
                       (double)CONCAT44((uint)((ulonglong)(dVar21 * pdVar42[1]) >> 0x20) & uVar29,
                                        SUB84(dVar21 * pdVar42[1],0) & uVar28) +
                       (double)CONCAT44((uint)((ulonglong)(dVar20 * pdVar42[9]) >> 0x20) & uVar29,
                                        SUB84(dVar20 * pdVar42[9],0) & uVar28);
          dVar17 = dVar4 - dVar16;
          dVar19 = dVar5 - uStack_1b8;
          uVar53 = SUB84(dVar19,0);
          uVar54 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar16 = dVar16 + dVar4;
          uStack_1b8 = uStack_1b8 + dVar5;
          dStack_1b0 = (double)CONCAT44((uint)((ulonglong)(dVar22 * pdVar42[6]) >> 0x20) & uVar27,
                                        SUB84(dVar22 * pdVar42[6],0) & uVar35) +
                       (double)CONCAT44((uint)((ulonglong)(dVar21 * pdVar42[2]) >> 0x20) & uVar27,
                                        SUB84(dVar21 * pdVar42[2],0) & uVar35) +
                       (double)CONCAT44((uint)((ulonglong)(dVar20 * pdVar42[10]) >> 0x20) & uVar27,
                                        SUB84(dVar20 * pdVar42[10],0) & uVar35);
          local_1c0._0_4_ = SUB84(dVar16,0);
          local_1c0._4_4_ = (undefined4)((ulonglong)dVar16 >> 0x20);
          dStack_1c8 = dVar18 - dStack_1b0;
          dStack_1b0 = dStack_1b0 + dVar18;
          local_120 = CONCAT71(uStack_1a7,1);
          uVar51 = (undefined4)local_120;
          uVar52 = (undefined4)((uint7)uStack_1a7 >> 0x18);
          local_1d8._8_4_ = uVar53;
          local_1d8._0_8_ = dVar17;
          local_1d8._12_4_ = uVar54;
          local_140._8_4_ = (undefined4)local_1c0;
          local_140._0_8_ = dStack_1c8;
          local_140._12_4_ = local_1c0._4_4_;
          local_150._8_4_ = uVar53;
          local_150._0_8_ = dVar17;
          local_150._12_4_ = uVar54;
          if ((this->UnbuiltInstanceBounds).IsValid == '\0') {
            auVar15._8_4_ = uVar53;
            auVar15._0_8_ = dVar17;
            auVar15._12_4_ = uVar54;
            *(undefined1 (*) [16])&(this->UnbuiltInstanceBounds).Min.field0_0x0 = auVar15;
            auVar13._8_4_ = (undefined4)local_1c0;
            auVar13._0_8_ = dStack_1c8;
            auVar13._12_4_ = local_1c0._4_4_;
            *(undefined1 (*) [16])((longlong)&(this->UnbuiltInstanceBounds).Min.field0_0x0 + 0x10) =
                 auVar13;
            *(double *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 8) = uStack_1b8;
            (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z = dStack_1b0;
            (this->UnbuiltInstanceBounds).IsValid = (char)uVar51;
            (this->UnbuiltInstanceBounds).Pad[0] = (char)((uint)uVar51 >> 8);
            (this->UnbuiltInstanceBounds).Pad[1] = (char)((uint)uVar51 >> 0x10);
            (this->UnbuiltInstanceBounds).Pad[2] = (char)((uint)uVar51 >> 0x18);
            (this->UnbuiltInstanceBounds).Pad[3] = (char)uVar52;
            (this->UnbuiltInstanceBounds).Pad[4] = (char)((uint)uVar52 >> 8);
            (this->UnbuiltInstanceBounds).Pad[5] = (char)((uint)uVar52 >> 0x10);
            (this->UnbuiltInstanceBounds).Pad[6] = (char)((uint)uVar52 >> 0x18);
          }
          else {
            dVar4 = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X;
            dVar5 = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y;
            if (dVar17 <= dVar4) {
              dVar4 = dVar17;
            }
            (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X = dVar4;
            if (dVar19 <= dVar5) {
              dVar5 = dVar19;
            }
            dVar4 = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z;
            if (dStack_1c8 <= dVar4) {
              dVar4 = dStack_1c8;
            }
            (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y = dVar5;
            dVar5 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X;
            if (dVar5 <= dVar16) {
              dVar5 = dVar16;
            }
            (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z = dVar4;
            dVar4 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y;
            if (dVar4 <= uStack_1b8) {
              dVar4 = uStack_1b8;
            }
            (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X = dVar5;
            dVar5 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z;
            if (dVar5 <= dStack_1b0) {
              dVar5 = dStack_1b0;
            }
            (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y = dVar4;
            (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z = dVar5;
          }
          pFVar11 = (pTVar3->AllocatorInstance).Data;
          dStack_128 = dStack_1b0;
          local_1c0 = dVar16;
          local_130 = uStack_1b8;
          if ((pFVar11 <= (FScriptContainerElement *)local_150) &&
             ((FScriptContainerElement *)local_150 <
              pFVar11 + (longlong)(this->UnbuiltInstanceBoundsList).ArrayMax * 0x38)) {
            bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar33) {
              pcVar12 = (code *)swi(3);
              pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
              return pTVar40;
            }
            dVar17 = (double)local_150._0_8_;
            dVar19 = (double)local_150._8_8_;
          }
          iVar36 = (this->UnbuiltInstanceBoundsList).ArrayNum;
          if (iVar36 == (this->UnbuiltInstanceBoundsList).ArrayMax) {
            iVar36 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&pTVar3->AllocatorInstance,
                                &(this->UnbuiltInstanceBoundsList).ArrayMax);
            dVar17 = (double)local_150._0_8_;
            dVar19 = (double)local_150._8_8_;
          }
          uVar46 = (ulonglong)local_268;
          (this->UnbuiltInstanceBoundsList).ArrayNum = iVar36 + 1;
          lVar44 = (longlong)iVar36 * 0x38;
          pFVar11 = (pTVar3->AllocatorInstance).Data;
          FVar50.Data = FVar50.Data + 4;
          auVar14._8_4_ = SUB84(dVar19,0);
          auVar14._0_8_ = dVar17;
          auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])(pFVar11 + lVar44) = auVar14;
          *(undefined8 *)(pFVar11 + lVar44 + 0x10) = local_140._0_8_;
          *(undefined8 *)(pFVar11 + lVar44 + 0x10 + 8) = local_140._8_8_;
          *(double *)(pFVar11 + lVar44 + 0x20) = local_130;
          *(double *)(pFVar11 + lVar44 + 0x20 + 8) = dStack_128;
          *(undefined8 *)(pFVar11 + lVar44 + 0x30) = local_120;
        }
        __return_storage_ptr__ = local_228;
        bVar25 = bVar23;
        bVar26 = bVar24;
        if (this->bAutoRebuildTreeOnInstanceChanges) {
          BuildTreeIfOutdated(this,true,false);
          __return_storage_ptr__ = local_228;
        }
      }
    }
  }
  FVar50.Data = local_260.AllocatorInstance.Data;
  bVar24 = false;
  bVar23 = true;
  FVar43.Data = (FScriptContainerElement *)0x0;
  if (local_276 == '\0') {
    local_1f8 = 0;
    pFVar45 = &local_200;
  }
  else {
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = local_260.ArrayNum;
    if (local_260.ArrayNum == 0) {
      iStack_244 = 0;
      pFVar45 = &local_250;
      bVar24 = true;
      bVar23 = false;
      FVar43.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_260.ArrayNum,0,&local_250,local_260.ArrayNum,&iStack_244);
      memcpy(local_250.Data,FVar50.Data,(longlong)local_260.ArrayNum << 2);
      pFVar45 = &local_250;
      bVar24 = true;
      bVar23 = false;
      FVar43.Data = local_250.Data;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar43.Data;
  pFVar45->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar45[1].Data;
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)&pFVar45[1].Data + 4);
  pFVar45[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar23) && (local_200.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_200.Data);
  }
  if ((bVar24) && (local_250.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_250.Data);
  }
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (bVar26) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar32) {
    FThreadStats::AddMessage(FVar49,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// ApplyBuildTree @ 147cd4aa0

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
UHierarchicalInstancedStaticMeshComponent::ApplyBuildTree
          (UHierarchicalInstancedStaticMeshComponent *this,FClusterBuilder *param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FClusterTree *pFVar3;
  FScriptContainerElement *pFVar4;
  UStaticMesh *this_00;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> TVar13;
  bool bVar14;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar15;
  TBoxSphereBounds<double,double> *pTVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> local_d0;
  TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> local_c8;
  TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  bool local_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  TBoxSphereBounds<double,double> local_78;
  
  this->bIsOutOfDate = false;
  if (((((param_1->Result).Ptr)->InstanceReorderTable).ArrayNum != *(int *)&this->field_0x660) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Builder.Result->InstanceReorderTable.Num() == PerInstanceSMData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xaac,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->NumBuiltInstances = (((param_1->Result).Ptr)->InstanceReorderTable).ArrayNum;
  this->NumBuiltRenderInstances = (((param_1->Result).Ptr)->SortedInstances).ArrayNum;
  pTVar15 = ::operator_new(0x10);
  local_b8.Object = (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar15 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar3 = (param_1->Result).Ptr;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pTVar15->AllocatorInstance).Data = (pFVar3->Nodes).AllocatorInstance.Data;
    (pFVar3->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar15->ArrayNum = (pFVar3->Nodes).ArrayNum;
    pTVar15->ArrayMax = (pFVar3->Nodes).ArrayMax;
    (pFVar3->Nodes).ArrayNum = 0;
    (pFVar3->Nodes).ArrayMax = 0;
    local_b8.Object = pTVar15;
  }
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
  operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>(&this->ClusterTreePtr,&local_b8);
  pFVar3 = (param_1->Result).Ptr;
  puVar2 = &this->field_0x720;
  pTVar17 = &pFVar3->InstanceReorderTable;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar2 != pTVar17) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this->field_0x728 = (pFVar3->InstanceReorderTable).ArrayNum;
    *(int *)&this->field_0x72c = (pFVar3->InstanceReorderTable).ArrayMax;
    (pFVar3->InstanceReorderTable).ArrayNum = 0;
    (pFVar3->InstanceReorderTable).ArrayMax = 0;
  }
  pFVar3 = (param_1->Result).Ptr;
  pTVar17 = &this->SortedInstances;
  pTVar18 = &pFVar3->SortedInstances;
  if (pTVar17 != pTVar18) {
    pFVar4 = (pTVar17->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar17->AllocatorInstance).Data = (pTVar18->AllocatorInstance).Data;
    (pTVar18->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SortedInstances).ArrayNum = (pFVar3->SortedInstances).ArrayNum;
    (this->SortedInstances).ArrayMax = (pFVar3->SortedInstances).ArrayMax;
    (pFVar3->SortedInstances).ArrayNum = 0;
    (pFVar3->SortedInstances).ArrayMax = 0;
  }
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar16 = UStaticMesh::GetBounds(this_00,&local_78);
  dVar8 = (pTVar16->Origin).field0_0x0._s_0.Y;
  (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.X = (pTVar16->Origin).field0_0x0._s_0.X;
  (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.Y = dVar8;
  dVar8 = (pTVar16->BoxExtent).field0_0x0._s_0.X;
  (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.Z = (pTVar16->Origin).field0_0x0._s_0.Z;
  (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.X = dVar8;
  dVar8 = (pTVar16->BoxExtent).field0_0x0._s_0.Z;
  (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.Y =
       (pTVar16->BoxExtent).field0_0x0._s_0.Y;
  (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.Z = dVar8;
  (this->CacheMeshExtendedBounds).SphereRadius = pTVar16->SphereRadius;
  local_d0.Ptr = (param_1->BuiltInstanceData).Ptr;
  (param_1->BuiltInstanceData).Ptr = (FStaticMeshInstanceData *)0x0;
  this->OcclusionLayerNumNodes = ((param_1->Result).Ptr)->OutOcclusionLayerNum;
  if (((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar15 = (this->ClusterTreePtr).Object;
  local_80 = pTVar15->ArrayNum < 1;
  if (local_80) {
    uStack_7f = 0;
    dVar24 = 0.0;
    dVar23 = 0.0;
    uStack_7b = 0;
    dVar22 = 0.0;
    dVar11 = 0.0;
    uStack_79 = 0;
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    pFVar4 = (pTVar15->AllocatorInstance).Data;
    dVar11 = (double)*(float *)(pFVar4 + 0x10) +
             (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.X;
    dVar22 = (double)*(float *)(pFVar4 + 8) +
             (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Z;
    dVar8 = (double)(float)*(undefined8 *)(pFVar4 + 0x14) +
            (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Y;
    dVar9 = (double)(float)((ulonglong)*(undefined8 *)(pFVar4 + 0x14) >> 0x20) +
            (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Z;
    dVar24 = (double)*(float *)pFVar4 + (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.X;
    dVar23 = (double)*(float *)(pFVar4 + 4) +
             (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Y;
  }
  local_80 = !local_80;
  uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
  uVar20 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uVar19 = (undefined4)((ulonglong)dVar11 >> 0x20);
  auVar10._8_4_ = SUB84(dVar23,0);
  auVar10._0_8_ = dVar24;
  auVar10._12_4_ = uVar21;
  *(undefined1 (*) [16])&(this->BuiltInstanceBounds).Min.field0_0x0 = auVar10;
  auVar6._8_4_ = SUB84(dVar11,0);
  auVar6._0_8_ = dVar22;
  auVar6._12_4_ = uVar19;
  *(undefined1 (*) [16])((longlong)&(this->BuiltInstanceBounds).Min.field0_0x0 + 0x10) = auVar6;
  piVar1 = &(this->UnbuiltInstanceBoundsList).ArrayMax;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = uVar20;
  *(undefined1 (*) [16])((longlong)&(this->BuiltInstanceBounds).Max.field0_0x0 + 8) = auVar7;
  local_a0._8_4_ = SUB84(dVar11,0);
  local_a0._0_8_ = dVar22;
  local_a0._12_4_ = uVar19;
  (this->BuiltInstanceBounds).IsValid = local_80;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BuiltInstanceBounds).Pad[0] = (char)uStack_7f;
  (this->BuiltInstanceBounds).Pad[1] = (char)((uint)uStack_7f >> 8);
  (this->BuiltInstanceBounds).Pad[2] = (char)((uint)uStack_7f >> 0x10);
  (this->BuiltInstanceBounds).Pad[3] = (char)((uint)uStack_7f >> 0x18);
  (this->BuiltInstanceBounds).Pad[4] = (char)uStack_7b;
  (this->BuiltInstanceBounds).Pad[5] = (char)((ushort)uStack_7b >> 8);
  (this->BuiltInstanceBounds).Pad[6] = uStack_79;
  local_90._8_4_ = SUB84(dVar9,0);
  local_90._0_8_ = dVar8;
  local_90._12_4_ = uVar20;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y = (double)uVar12;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar9 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X;
  dVar11 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y;
  (this->UnbuiltInstanceBounds).IsValid = '\0';
  dVar8 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X = dVar9;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y = dVar11;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z = dVar8;
  local_b0._8_4_ = SUB84(dVar23,0);
  local_b0._0_8_ = dVar24;
  local_b0._12_4_ = uVar21;
  (this->UnbuiltInstanceBoundsList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->UnbuiltInstanceBoundsList).AllocatorInstance,0,piVar1);
  }
  if ((local_d0.Ptr == (FStaticMeshInstanceData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltInstanceData.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xac1,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_d0.Ptr)->NumInstances != this->NumBuiltRenderInstances) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltInstanceData->GetNumInstances() == NumBuiltRenderInstances",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xac2,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->InstanceCountToRender = this->NumBuiltInstances;
  if ((*(int *)&this->field_0x728 != *(int *)&this->field_0x660) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceReorderTable.Num() == PerInstanceSMData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xac6,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayMax = 0;
  DestructItems<TRefCountPtr<HHitProxy>,int>((TRefCountPtr<HHitProxy> *)0x0,0);
  local_c8.ArrayNum = 0;
  if (local_c8.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  }
  SetPerInstanceLightMapAndEditorData(this,local_d0.Ptr,&local_c8);
  FPrimitiveInstanceDataManager::MarkForRebuildFromLegacy
            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,&local_d0,
             (TArray<int,TSizedDefaultAllocator<32>_> *)puVar2,&local_c8);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  TMulticastDelegate<void___cdecl(UHierarchicalInstancedStaticMeshComponent_*,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&FHierarchicalInstancedStaticMeshDelegates::OnTreeBuilt,this,param_2);
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  TVar13.Ptr = local_d0.Ptr;
  if (local_d0.Ptr != (FStaticMeshInstanceData *)0x0) {
    FStaticMeshInstanceData::~FStaticMeshInstanceData(local_d0.Ptr);
    ::operator_delete(TVar13.Ptr,0x50);
  }
  return;
}

// ApplyBuildTreeAsync @ 147cd4f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::ApplyBuildTreeAsync
          (UHierarchicalInstancedStaticMeshComponent *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2,
          TSharedRef<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder,1> *param_3,
          double param_4)

{
  int *piVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  LARGE_INTEGER local_res8;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                       ,0xa7c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->bIsAsyncBuilding = false;
  FVar5 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->BuildTreeAsyncTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar5,(this->BuildTreeAsyncTasks).ArrayNum);
  piVar1 = &(this->BuildTreeAsyncTasks).ArrayMax;
  (this->BuildTreeAsyncTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,0,&(this->BuildTreeAsyncTasks).AllocatorInstance,0,piVar1);
  }
  uVar2 = this->field_0xb14;
  if (this->bIsOutOfDate) {
    if (this->bConcurrentChanges) {
      this->field_0xb14 = uVar2 & 0xfb;
      if (5 < (byte)LogStaticMesh._0_1_) {
        QueryPerformanceCounter(&local_res8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      }
      (**(code **)(*(longlong *)this + 0xcb8))(this);
    }
    else {
      ApplyBuildTree(this,param_3->Object,true);
    }
  }
  else {
    this->field_0xb14 = uVar2 & 0xfb;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// ApplyComponentInstanceData @ 147cd5080

void __thiscall
UHierarchicalInstancedStaticMeshComponent::ApplyComponentInstanceData
          (UHierarchicalInstancedStaticMeshComponent *this,
          FInstancedStaticMeshComponentInstanceData *param_1)

{
  BuildTreeIfOutdated(this,false,false);
  return;
}

// ApplyEmpty @ 147cd50a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::ApplyEmpty
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  double dVar1;
  int iVar2;
  UObject *pUVar3;
  UStaticMesh *pUVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar10;
  TVector<double>_u_0 *pTVar11;
  TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> local_res8;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  TBoxSphereBounds<double,double> local_40;
  
  this->bIsOutOfDate = false;
  pTVar10 = ::operator_new(0x10);
  local_res8.Object = (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0;
  if (pTVar10 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
    local_res8.Object = pTVar10;
  }
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
  operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>(&this->ClusterTreePtr,&local_res8);
  this->NumBuiltInstances = 0;
  this->NumBuiltRenderInstances = 0;
  this->InstanceCountToRender = 0;
  *(undefined4 *)&this->field_0x728 = 0;
  if (*(int *)&this->field_0x72c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->field_0x720,0,(int *)&this->field_0x72c);
  }
  (this->SortedInstances).ArrayNum = 0;
  if ((this->SortedInstances).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SortedInstances).AllocatorInstance,0,&(this->SortedInstances).ArrayMax)
    ;
  }
  (this->UnbuiltInstanceBoundsList).ArrayNum = 0;
  if ((this->UnbuiltInstanceBoundsList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->UnbuiltInstanceBoundsList).AllocatorInstance,0,
               &(this->UnbuiltInstanceBoundsList).ArrayMax);
  }
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BuiltInstanceBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BuiltInstanceBounds).Max.field0_0x0._s_0.Y = (double)uVar7;
  (this->BuiltInstanceBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (this->BuiltInstanceBounds).Max.field0_0x0._s_0.X;
  dVar6 = (this->BuiltInstanceBounds).Max.field0_0x0._s_0.Y;
  (this->BuiltInstanceBounds).IsValid = '\0';
  dVar1 = (this->BuiltInstanceBounds).Max.field0_0x0._s_0.Z;
  (this->BuiltInstanceBounds).Min.field0_0x0._s_0.X = dVar5;
  (this->BuiltInstanceBounds).Min.field0_0x0._s_0.Y = dVar6;
  (this->BuiltInstanceBounds).Min.field0_0x0._s_0.Z = dVar1;
  if (*(UObject **)&this->field_0x5a0 == (UObject *)0x0) {
LAB_147cd527b:
    pTVar11 = &local_78;
    local_48 = 0;
    local_78._s_0.X = 0.0;
    local_78._s_0.Y = 0.0;
    local_78._s_0.Z = 0.0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar3 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    cVar8 = (**(code **)(*(longlong *)(pUVar3 + 6) + 0x10))();
    if (cVar8 == '\0') {
      pUVar4 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      bVar9 = UStaticMesh::HasValidRenderData(pUVar4,false,-1);
      if (!bVar9) goto LAB_147cd527b;
    }
    pUVar4 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pTVar11 = (TVector<double>_u_0 *)UStaticMesh::GetBounds(pUVar4,&local_40);
  }
  dVar1 = (pTVar11->_s_0).Y;
  iVar2 = *(int *)&this->field_0x660;
  (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.X =
       (((TVector<double> *)&(pTVar11->_s_0).X)->field0_0x0)._s_0.X;
  (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (((TVector<double> *)(pTVar11->XYZ + 3))->field0_0x0)._s_0.X;
  (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.Z = (pTVar11->_s_0).Z;
  (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = pTVar11->XYZ[5];
  (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.Y = pTVar11->XYZ[4];
  (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->CacheMeshExtendedBounds).SphereRadius = pTVar11->XYZ[6];
  FPrimitiveInstanceDataManager::Invalidate
            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,iVar2);
  TMulticastDelegate<void___cdecl(UHierarchicalInstancedStaticMeshComponent_*,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&FHierarchicalInstancedStaticMeshDelegates::OnTreeBuilt,this,false);
  return;
}

// BatchUpdateInstancesData @ 147cd5550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::BatchUpdateInstancesData
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,int param_2,
          FInstancedStaticMeshInstanceData *param_3,bool param_4,bool param_5)

{
  UInstancedStaticMeshComponent::BatchUpdateInstancesData
            ((UInstancedStaticMeshComponent *)this,param_1,param_2,param_3,param_4,param_5);
  BuildTreeIfOutdated(this,true,false);
  return true;
}

// BatchUpdateInstancesTransform @ 147cd5af0

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::BatchUpdateInstancesTransform
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,int param_2,
          TTransform<double> *param_3,bool param_4,bool param_5,bool param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = param_1 + param_2;
  bVar1 = true;
  for (; param_1 < iVar3; param_1 = param_1 + 1) {
    cVar2 = (**(code **)(*(longlong *)this + 0xbf0))(this,param_1,param_3,param_4,param_5,param_6);
    if ((bVar1) && (cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

// BatchUpdateInstancesTransforms @ 147cd6470

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::BatchUpdateInstancesTransforms
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  
  iVar1 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = true;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x60;
  for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x60) {
    cVar5 = (**(code **)(*(longlong *)this + 0xbf0))(this,param_1,pFVar6,param_3,param_4,param_5);
    if ((bVar3) && (cVar5 != '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    param_1 = param_1 + 1;
  }
  return bVar3;
}

// BatchUpdateInstancesTransforms @ 147cd6550

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::BatchUpdateInstancesTransforms
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  bool bVar1;
  char cVar2;
  TTransform<double> *pTVar3;
  TTransform<double> *pTVar4;
  
  pTVar3 = param_2->DataPtr;
  bVar1 = true;
  pTVar4 = pTVar3 + (int)*(undefined8 *)&param_2->ArrayNum;
  for (; pTVar3 != pTVar4; pTVar3 = pTVar3 + 1) {
    cVar2 = (**(code **)(*(longlong *)this + 0xbf0))(this,param_1,pTVar3,param_3,param_4,param_5);
    if ((bVar1) && (cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    param_1 = param_1 + 1;
  }
  return bVar1;
}

// BatchUpdateInstancesTransformsInternal @ 147cd7400

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::BatchUpdateInstancesTransformsInternal
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  bool bVar1;
  char cVar2;
  TTransform<double> *pTVar3;
  TTransform<double> *pTVar4;
  
  pTVar3 = param_2->DataPtr;
  bVar1 = true;
  pTVar4 = pTVar3 + param_2->ArrayNum;
  for (; pTVar3 != pTVar4; pTVar3 = pTVar3 + 1) {
    cVar2 = (**(code **)(*(longlong *)this + 0xbf0))(this,param_1,pTVar3,param_3,param_4,param_5);
    if ((bVar1) && (cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    param_1 = param_1 + 1;
  }
  return bVar1;
}

// BuildComponentInstanceData @ 147cdc5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData
          (UHierarchicalInstancedStaticMeshComponent *this,EShaderPlatform param_1,
          FInstanceUpdateComponentDesc *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  UStaticMesh *this_00;
  code *pcVar9;
  ushort uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
  FVar18;
  double *pdVar19;
  TBoxSphereBounds<double,double> *pTVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar21;
  longlong *plVar22;
  FNameEntryId FVar23;
  FName FVar24;
  ushort uVar25;
  undefined1 auStackY_228 [32];
  FColor_u_0 local_1c8;
  FLLMScope local_1c4;
  LARGE_INTEGER local_1c0;
  FName local_1b8;
  FName local_1b0;
  FMemScope local_1a0;
  FStatMessage local_198;
  FName local_188;
  FName local_180;
  TVector2<float>_u_0 local_178;
  undefined8 uStack_170;
  TBoxSphereBounds<double,double> local_168;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FLLMScope::FLLMScope(&local_1c4,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_1a0,InstancedMesh,true);
  uVar25 = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
         )0x0) {
      pFVar17 = ::FName::FName(&local_188,"STAT_UInstancedStaticMeshComponent_BuildRenderData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData,*pFVar17,
                 L"STAT_UInstancedStaticMeshComponent_BuildRenderData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData;
  if (StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
       )0x0) {
    pFVar17 = ::FName::FName(&local_180,"STAT_UInstancedStaticMeshComponent_BuildRenderData");
    FVar18 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData,*pFVar17,
                          L"STAT_UInstancedStaticMeshComponent_BuildRenderData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  bVar13 = false;
  bVar15 = false;
  FVar24 = *(FName *)FVar18;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar21 = FVar24.Number;
  if ((FVar23.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar13 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar23.Value;
        local_1b8.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0xa44);
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0.s.LowPart = FVar23.Value;
      local_1c0.s.HighPart = uVar21;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar14 = true;
      goto LAB_147cdc777;
    }
  }
  bVar14 = false;
  FVar24 = local_1b0;
LAB_147cdc777:
  pdVar19 = (double *)(**(code **)(*(longlong *)this + 0x808))(this,local_f8);
  dVar2 = pdVar19[1];
  (param_2->PrimitiveLocalToWorld).M[0][0] = *pdVar19;
  (param_2->PrimitiveLocalToWorld).M[0][1] = dVar2;
  dVar2 = pdVar19[3];
  (param_2->PrimitiveLocalToWorld).M[0][2] = pdVar19[2];
  (param_2->PrimitiveLocalToWorld).M[0][3] = dVar2;
  dVar2 = pdVar19[5];
  (param_2->PrimitiveLocalToWorld).M[1][0] = pdVar19[4];
  (param_2->PrimitiveLocalToWorld).M[1][1] = dVar2;
  dVar2 = pdVar19[7];
  (param_2->PrimitiveLocalToWorld).M[1][2] = pdVar19[6];
  (param_2->PrimitiveLocalToWorld).M[1][3] = dVar2;
  dVar2 = pdVar19[9];
  (param_2->PrimitiveLocalToWorld).M[2][0] = pdVar19[8];
  (param_2->PrimitiveLocalToWorld).M[2][1] = dVar2;
  dVar2 = pdVar19[0xb];
  (param_2->PrimitiveLocalToWorld).M[2][2] = pdVar19[10];
  (param_2->PrimitiveLocalToWorld).M[2][3] = dVar2;
  dVar2 = pdVar19[0xd];
  (param_2->PrimitiveLocalToWorld).M[3][0] = pdVar19[0xc];
  (param_2->PrimitiveLocalToWorld).M[3][1] = dVar2;
  dVar2 = pdVar19[0xf];
  (param_2->PrimitiveLocalToWorld).M[3][2] = pdVar19[0xe];
  (param_2->PrimitiveLocalToWorld).M[3][3] = dVar2;
  UPrimitiveComponent::GetUsedMaterialPropertyDesc
            ((UPrimitiveComponent *)this,(FPrimitiveMaterialPropertyDescriptor *)&local_178._s_0,
             param_1);
  (param_2->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0 = local_178;
  (param_2->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement =
       (float)(undefined4)uStack_170;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = (bool)uStack_170._4_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = (bool)uStack_170._5_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = (bool)uStack_170._6_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = (bool)uStack_170._7_1_;
  bVar8 = (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom;
  if (((param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData == false) ||
     (*(int *)&this->field_0x6e0 == 0)) {
    uVar25 = 0;
  }
  uVar10 = (ushort)FReadOnlyCVARCache::bAllowStaticLighting;
  if ((((0 < *(int *)&this->field_0x670) &&
       (*(int *)&this->field_0x670 == *(int *)&this->field_0x660)) && (this->field_0x1ab == '\0'))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Flags.bHasPerInstanceDynamicData || Mobility != EComponentMobility::Static"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                             ,0x14d9,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (param_2->Flags).Packed = uVar10 << 4 | uVar25 | (ushort)(bVar8 & 1);
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar20 = UStaticMesh::GetBounds(this_00,&local_168);
  dVar2 = (pTVar20->Origin).field0_0x0._s_0.X;
  dVar3 = (pTVar20->BoxExtent).field0_0x0._s_0.X;
  dVar4 = (pTVar20->Origin).field0_0x0._s_0.Y;
  dVar5 = (pTVar20->BoxExtent).field0_0x0._s_0.Y;
  dVar6 = (pTVar20->BoxExtent).field0_0x0._s_0.Z;
  dVar7 = (pTVar20->Origin).field0_0x0._s_0.Z;
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.X = (float)(dVar2 - dVar3);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Y = (float)(dVar4 - dVar5);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Z = (float)(dVar7 - dVar6);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.X = (float)(dVar3 + dVar2);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Y = (float)(dVar5 + dVar4);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Z = (float)(dVar6 + dVar7);
  param_2->NumProxyInstances = this->InstanceCountToRender;
  param_2->NumSourceInstances = *(int *)&this->field_0x660;
  param_2->NumCustomDataFloats = *(int *)&this->field_0x6e0;
  local_128 = *(longlong *)&param_2->BuildChangeSet;
  uVar12 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x8;
  local_118 = *(longlong *)&(param_2->BuildChangeSet).field_0x10;
  uStack_110 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x18;
  uVar11 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x20;
  plStack_100 = *(longlong **)&(param_2->BuildChangeSet).field_0x28;
  *(code **)&param_2->BuildChangeSet =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,void,FISMInstanceUpdateChangeSet_&>
       ::Call;
  *(undefined8 *)&(param_2->BuildChangeSet).field_0x8 = uStack_120;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x10 = 0x518ec988;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x14 = 1;
  *(UHierarchicalInstancedStaticMeshComponent **)&(param_2->BuildChangeSet).field_0x18 = this;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x20 = (undefined4)local_108;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x24 = local_108._4_4_;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x28 = 0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x2c = 0;
  local_108 = uVar11;
  uStack_120 = uVar12;
  if (local_128 != 0) {
    plVar22 = &local_118;
    if (plStack_100 != (longlong *)0x0) {
      plVar22 = plStack_100;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar14) && (FVar24 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_198.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_198.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_198.StatData.Pad[4] = '\0';
      local_198.StatData.Pad[5] = '\0';
      local_198.StatData.Pad[6] = '\0';
      local_198.StatData.Pad[7] = '\0';
      local_198.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_198.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_198.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_198.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_198);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_1a0);
  FLLMScope::~FLLMScope(&local_1c4);
  return;
}

// BuildComponentInstanceData @ 147cdcbb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::BuildComponentInstanceData
          (UHierarchicalInstancedStaticMeshComponent *this,Type param_1,
          FInstanceUpdateComponentDesc *param_2)

{
  if (param_1 == Num) {
                    /* WARNING: Could not recover jumptable at 0x000147cdcbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0xca0))(this,0x9b);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147cdcbd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xca0))
            (this,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1]);
  return;
}

// BuildTree @ 147ce0b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::BuildTree
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  UObject *pUVar5;
  UStaticMesh *pUVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ForAnyElementType _Src_00;
  bool bVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildTree(void)_::_2_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree>
  FVar16;
  TVector<double> *pTVar17;
  TBoxSphereBounds<double,double> *pTVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar19;
  FNameEntryId FVar20;
  FName FVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStackY_2b8 [32];
  FName local_258;
  FColor_u_0 local_250 [2];
  UHierarchicalInstancedStaticMeshComponent *local_248;
  TArray<float,TSizedDefaultAllocator<32>_> local_240;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_230;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_220;
  FName local_210;
  LARGE_INTEGER local_200;
  FStatMessage local_1f8;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 local_1a0;
  FName local_198;
  FName local_190;
  TVector<double> local_188;
  TBoxSphereBounds<double,double> local_170;
  FClusterBuilder local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2650,"UHierarchicalInstancedStaticMeshComponent::BuildTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
               ,0xa5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2650);
  }
  if (((*(uint *)&this->field_0x8 & 0x30) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xa5c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->field_0x83c == '\x02') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xa5d,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildTree(void)_::_2_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree>
         )0x0) {
      pFVar15 = ::FName::FName(&local_198,"STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree,*pFVar15,
                 L"STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree;
  if (StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildTree(void)_::_2_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree>
       )0x0) {
    pFVar15 = ::FName::FName(&local_190,"STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree");
    FVar16 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UHierarchicalInstancedStaticMeshComponent::BuildTree(void)_::_2_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree,*pFVar15
                          ,L"STAT_UHierarchicalInstancedStaticMeshComponent_BuildTree",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar19 = FVar21.Number;
  if ((FVar20.Value == 0) && (uVar19 == 0)) {
LAB_147ce0d36:
    bVar8 = false;
    FVar21 = local_210;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_250[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_250[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_258.ComparisonIndex.Value = FVar20.Value;
        local_258.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_258,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0xa63);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ce0d36;
    local_258.ComparisonIndex.Value = FVar20.Value;
    local_258.Number = uVar19;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar8 = true;
  }
  if ((0 < *(int *)&this->field_0x660) && (*(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar5 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    cVar11 = (**(code **)(*(longlong *)(pUVar5 + 6) + 0x10))();
    if (cVar11 == '\0') {
      pUVar6 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      bVar12 = UStaticMesh::HasValidRenderData(pUVar6,false,-1);
      if (bVar12) {
        pTVar17 = CalcTranslatedInstanceSpaceOrigin(this,&local_188);
        dVar4 = (pTVar17->field0_0x0)._s_0.Y;
        (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.X = (pTVar17->field0_0x0)._s_0.X;
        (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Y = dVar4;
        (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
        local_248 = this;
        if (*(int *)&this->field_0x6e4 == 0) {
          iVar13 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>
                   ::operator()(&local_248);
          *(int *)&this->field_0x6e4 = iVar13;
        }
        uVar3 = *(undefined8 *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 0x10);
        local_1e8._0_4_ =
             *(uint *)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 ^
             (uint)__xmm_80000000000000008000000000000000;
        local_1e8._4_4_ =
             *(uint *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
        local_1e8._8_4_ =
             *(uint *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 8) ^
             _UNK_15066df78;
        local_1e8._12_4_ =
             *(uint *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 0xc) ^
             _UNK_15066df7c;
        local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
        local_220.ArrayNum = 0;
        local_220.ArrayMax = 0;
        GetInstanceTransforms(this,&local_220,(TVector<double> *)&local_1e8._s_0);
        iVar13 = *(int *)&this->field_0x660;
        local_250[0] = *(FColor_u_0 *)&this->field_0x6e4;
        fVar2 = this->CurrentDensityScaling;
        iVar14 = DesiredInstancesPerLeaf(this);
        pUVar6 = *(UStaticMesh **)&this->field_0x5a0;
        local_248 = (UHierarchicalInstancedStaticMeshComponent *)CONCAT44(local_248._4_4_,iVar14);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        pTVar18 = UStaticMesh::GetBounds(pUVar6,&local_170);
        local_240.ArrayNum = *(int *)&this->field_0x6f0;
        lVar22 = (longlong)local_240.ArrayNum;
        local_1a0 = 1;
        dVar4 = (pTVar18->Origin).field0_0x0._s_0.Z;
        local_1b8 = (pTVar18->Origin).field0_0x0._s_0.X;
        local_1b0 = (pTVar18->Origin).field0_0x0._s_0.Y;
        local_1d0._s_0.X = local_1b8 - (pTVar18->BoxExtent).field0_0x0._s_0.X;
        local_1d0._s_0.Y = local_1b0 - (pTVar18->BoxExtent).field0_0x0._s_0.Y;
        local_1b8 = local_1b8 + (pTVar18->BoxExtent).field0_0x0._s_0.X;
        local_1b0 = local_1b0 + (pTVar18->BoxExtent).field0_0x0._s_0.Y;
        local_1a8 = dVar4 + (pTVar18->BoxExtent).field0_0x0._s_0.Z;
        local_1d0._s_0.Z = dVar4 - (pTVar18->BoxExtent).field0_0x0._s_0.Z;
        local_258.ComparisonIndex.Value = *(uint *)&this->field_0x6e0;
        local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)&this->field_0x6e8;
        if (local_240.ArrayNum == 0) {
          local_240.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_240.ArrayNum,0,&local_240.AllocatorInstance,local_240.ArrayNum,
                     &local_240.ArrayMax);
          memcpy(local_240.AllocatorInstance.Data,_Src,lVar22 << 2);
        }
        _Src_00.Data = local_220.AllocatorInstance.Data;
        lVar22 = (longlong)local_220.ArrayNum;
        local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = local_220.ArrayNum;
        if (local_220.ArrayNum == 0) {
          local_230.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,local_220.ArrayNum,0,&local_230.AllocatorInstance,local_220.ArrayNum,
                     &local_230.ArrayMax);
          memcpy(local_230.AllocatorInstance.Data,_Src_00.Data,lVar22 << 7);
        }
        FClusterBuilder::FClusterBuilder
                  (&local_138,&local_230,&local_240,local_258.ComparisonIndex.Value,
                   (TBox<double> *)&local_1d0._s_0,(int)local_248,fVar2,local_250[0].Bits,0 < iVar13
                  );
        FClusterBuilder::BuildTree(&local_138);
        FClusterBuilder::BuildInstanceBuffer(&local_138);
        ApplyBuildTree(this,&local_138,false);
        FClusterBuilder::~FClusterBuilder(&local_138);
        if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
        goto LAB_147ce107e;
      }
    }
  }
  ApplyEmpty(this);
LAB_147ce107e:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1f8.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_1f8.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1f8.StatData.Pad[4] = '\0';
      local_1f8.StatData.Pad[5] = '\0';
      local_1f8.StatData.Pad[6] = '\0';
      local_1f8.StatData.Pad[7] = '\0';
      local_1f8.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1f8.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1f8.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1f8.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1f8);
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
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildTreeAsync @ 147ce12a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  float fVar3;
  atomic<unsigned_int> aVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  UStaticMesh *pUVar7;
  void *_Src;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  FWeakObjectPtr FVar12;
  ForAnyElementType _Src_00;
  bool bVar13;
  char cVar14;
  int iVar15;
  TVector<double> *pTVar16;
  FClusterBuilder *this_00;
  TBoxSphereBounds<double,double> *pTVar17;
  FClusterBuilder *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_FoliageBuildTime> FVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar24;
  longlong lVar25;
  TReferenceControllerBase<1> *pTVar26;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar27;
  bool bVar28;
  EExtendedTaskPriority local_208;
  ETaskPriority local_207 [7];
  FTaskBase *local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  FDelegateAllocation local_1e8;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  FWeakObjectPtr local_1cc;
  TArray<float,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_1a0;
  UHierarchicalInstancedStaticMeshComponent *local_190;
  UHierarchicalInstancedStaticMeshComponent *local_188;
  TVector<double>_u_0 local_180;
  FDestructionSentinel local_168;
  FDestructionSentinel local_150;
  FDelegateAllocation *local_138;
  TVector<double>_u_0 local_130;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_100;
  FName local_f8;
  FName local_f0;
  code *local_e8 [5];
  undefined8 *local_c0;
  TVector<double> local_b8;
  TBoxSphereBounds<double,double> local_a0 [2];
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2862,
               "UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
               ,0xb2e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2862);
  }
  if (((*(uint *)&this->field_0x8 & 0x30) != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xb30,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((this->field_0x83c == '\x02') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xb31,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar13 = IsInGameThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xb32,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((this->bIsAsyncBuilding) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsAsyncBuilding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xb37,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar27 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->BuildTreeAsyncTasks;
  if (((this->BuildTreeAsyncTasks).ArrayNum != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuildTreeAsyncTasks.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                          ,0xb38,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((0 < *(int *)&this->field_0x660) && (*(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar6 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    cVar14 = (**(code **)(*(longlong *)(pUVar6 + 6) + 0x10))();
    if (cVar14 == '\0') {
      pUVar7 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      bVar13 = UStaticMesh::HasValidRenderData(pUVar7,false,-1);
      if (bVar13) {
        dVar10 = FWindowsPlatformTime::Seconds();
        pTVar16 = CalcTranslatedInstanceSpaceOrigin(this,&local_b8);
        iVar15 = *(int *)&this->field_0x6e4;
        dVar11 = (pTVar16->field0_0x0)._s_0.Y;
        (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.X = (pTVar16->field0_0x0)._s_0.X;
        (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Y = dVar11;
        (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
        local_190 = this;
        if (iVar15 == 0) {
          iVar15 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>
                   ::operator()(&local_190);
          *(int *)&this->field_0x6e4 = iVar15;
        }
        pFVar18 = (FClusterBuilder *)0x0;
        uVar5 = *(undefined8 *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 0x10);
        local_180._0_4_ =
             *(uint *)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 ^
             (uint)__xmm_80000000000000008000000000000000;
        local_180._4_4_ =
             *(uint *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
        local_180._8_4_ =
             *(uint *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 8) ^
             _UNK_15066df78;
        local_180._12_4_ =
             *(uint *)((longlong)&(this->TranslatedInstanceSpaceOrigin).field0_0x0 + 0xc) ^
             _UNK_15066df7c;
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.ArrayNum = 0;
        local_1a0.ArrayMax = 0;
        local_180._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar5 ^ (uint)__xmm_80000000000000008000000000000000);
        GetInstanceTransforms(this,&local_1a0,(TVector<double> *)&local_180._s_0);
        this_00 = ::operator_new(0xd8);
        if (this_00 != (FClusterBuilder *)0x0) {
          iVar15 = *(int *)&this->field_0x660;
          local_1d8 = *(int *)&this->field_0x6e4;
          fVar3 = this->CurrentDensityScaling;
          local_1d4 = DesiredInstancesPerLeaf(this);
          pUVar7 = *(UStaticMesh **)&this->field_0x5a0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          pTVar17 = UStaticMesh::GetBounds(pUVar7,local_a0);
          local_1c0.ArrayNum = *(int *)&this->field_0x6f0;
          lVar25 = (longlong)local_1c0.ArrayNum;
          _Src = *(void **)&this->field_0x6e8;
          local_100 = 1;
          local_110 = (pTVar17->BoxExtent).field0_0x0._s_0.Y;
          local_108 = (pTVar17->BoxExtent).field0_0x0._s_0.Z;
          local_118 = (pTVar17->BoxExtent).field0_0x0._s_0.X;
          local_130._s_0.X = (pTVar17->Origin).field0_0x0._s_0.X - local_118;
          local_118 = local_118 + (pTVar17->Origin).field0_0x0._s_0.X;
          local_130._s_0.Y = (pTVar17->Origin).field0_0x0._s_0.Y - local_110;
          local_110 = local_110 + (pTVar17->Origin).field0_0x0._s_0.Y;
          local_130._s_0.Z = (pTVar17->Origin).field0_0x0._s_0.Z - local_108;
          local_108 = local_108 + (pTVar17->Origin).field0_0x0._s_0.Z;
          local_1d0 = *(int *)&this->field_0x6e0;
          local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_1c0.ArrayNum == 0) {
            local_1c0.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_1c0.ArrayNum,0,&local_1c0.AllocatorInstance,local_1c0.ArrayNum,
                       &local_1c0.ArrayMax);
            memcpy(local_1c0.AllocatorInstance.Data,_Src,lVar25 << 2);
          }
          _Src_00.Data = local_1a0.AllocatorInstance.Data;
          lVar25 = (longlong)local_1a0.ArrayNum;
          local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b0.ArrayNum = local_1a0.ArrayNum;
          if (local_1a0.ArrayNum == 0) {
            local_1b0.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,local_1a0.ArrayNum,0,&local_1b0.AllocatorInstance,
                       local_1a0.ArrayNum,&local_1b0.ArrayMax);
            memcpy(local_1b0.AllocatorInstance.Data,_Src_00.Data,lVar25 << 7);
          }
          pFVar18 = FClusterBuilder::FClusterBuilder
                              (this_00,&local_1b0,&local_1c0,local_1d0,
                               (TBox<double> *)&local_130._s_0,local_1d4,fVar3,local_1d8,0 < iVar15)
          ;
        }
        pTVar26 = (TReferenceControllerBase<1> *)0x0;
        pTVar19 = ::operator_new(0x18);
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          pTVar19->SharedReferenceCount = (atomic<int>)0x1;
          pTVar19->WeakReferenceCount = (atomic<int>)0x1;
          pTVar19->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFClusterBuilder_UHierarchicalInstancedStaticMeshComponent__U__DefaultDeleter_VFClusterBuilder_UHierarchicalInstancedStaticMeshComponent___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          pTVar19[1]._padding_ = (longlong)pFVar18;
          pTVar26 = pTVar19;
        }
        if ((pFVar18 == (FClusterBuilder *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this->bIsAsyncBuilding = true;
        FVar21 = StatPtr_STAT_FoliageBuildTime;
        if (StatPtr_STAT_FoliageBuildTime == (FThreadSafeStaticStat<FStat_STAT_FoliageBuildTime>)0x0
           ) {
          pFVar20 = ::FName::FName(&local_f8,"STAT_FoliageBuildTime");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_FoliageBuildTime>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageBuildTime,*pFVar20,
                              L"Build Time","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                              true,ST_int64,true,false,MCR_Invalid);
        }
        local_1f0 = (undefined1  [8])0x0;
        local_1e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1e8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
                   (FWriteAccessScope *)&local_150);
        local_138 = &local_1e8;
        puVar22 = UE::Core::Private::DelegateAllocate(0x28,&local_1e8);
        if (puVar22 != (undefined8 *)0x0) {
          *puVar22 = &
                     ___7__TCommonDelegateInstanceState___A6AXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar23 = FDelegateHandle::GenerateNewID();
          puVar22[2] = uVar23;
          *puVar22 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFClusterBuilder_UHierarchicalInstancedStaticMeshComponent____A6AXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar22[4] = FClusterBuilder::BuildTreeAndBufferAsync;
          puVar22[3] = pFVar18;
          if ((pFVar18 == (FClusterBuilder *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InUserObject != nullptr && MethodPtr != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x1d8,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (local_150.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
        if (this_01 == (FTaskBase *)0x0) {
          this_01 = (FTaskBase *)0x0;
        }
        else {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)this_01,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)0x0);
          this_01->_padding_ = (longlong)&___7__TGraphTask_VFDelegateGraphTask____6B_;
        }
        this_01[1]._padding_ = (longlong)FVar21;
        TDelegate<void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&),FDefaultDelegateUserPolicy>
        ::
        TDelegate<void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&),FDefaultDelegateUserPolicy>
                  (&this_01[1]._padding_,
                   (TDelegate<void___cdecl(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&),FDefaultDelegateUserPolicy>
                    *)local_1f0);
        *(undefined4 *)&this_01[1]._padding_ = 0x8ff;
        UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_207,&local_208);
        UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_207[0],local_208,None);
        if (this_01 != (FTaskBase *)0x0) {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
        }
        local_200 = this_01;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
                   (FWriteAccessScope *)&local_168);
        if ((local_1e8.DelegateSize != 0) &&
           (local_1e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1e8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1e8,0,0,0x10);
          local_1e8.DelegateSize = 0;
        }
        if (local_168.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
        }
        if (local_1e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1e8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1f0);
        FVar8 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
        FVar24 = FVar27;
        if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar24 = FVar8;
        }
        if ((ulonglong)FVar24 <= &local_200) {
          FVar24 = FVar27;
          if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar24 = FVar8;
          }
          if ((&local_200 <
               (FTaskBase **)((longlong)FVar24 + (longlong)(this->BuildTreeAsyncTasks).ArrayMax * 8)
              ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = (this->BuildTreeAsyncTasks).ArrayNum;
        if (iVar15 == (this->BuildTreeAsyncTasks).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar27,
                              &(this->BuildTreeAsyncTasks).ArrayMax);
        }
        (this->BuildTreeAsyncTasks).ArrayNum = iVar15 + 1;
        FVar8 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
        FVar24 = FVar27;
        if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar24 = FVar8;
        }
        *(undefined8 *)((longlong)FVar24 + (longlong)iVar15 * 8) = 0;
        *(FTaskBase **)((longlong)FVar24 + (longlong)iVar15 * 8) = local_200;
        if (local_200 != (FTaskBase *)0x0) {
          LOCK();
          local_200->RefCount = (atomic<unsigned_int>)((int)local_200->RefCount + 1);
          UNLOCK();
        }
        FVar21 = StatPtr_STAT_FoliageBuildTime;
        if (StatPtr_STAT_FoliageBuildTime == (FThreadSafeStaticStat<FStat_STAT_FoliageBuildTime>)0x0
           ) {
          pFVar20 = ::FName::FName(&local_f0,"STAT_FoliageBuildTime");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_FoliageBuildTime>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageBuildTime,*pFVar20,
                              L"Build Time","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                              true,ST_int64,true,false,MCR_Invalid);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_1cc.ObjectIndex = 0;
        local_1cc.ObjectSerialNumber = 0;
        local_188 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_1cc,(FObjectPtr)&local_188);
        FVar12 = local_1cc;
        if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e8[0] = (code *)0x0;
        local_c0 = FMemory::Malloc(0x28,8);
        *local_c0 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync'::`41'::<lambda_1>,1,1>
                     ::_vftable_;
        *(FWeakObjectPtr *)(local_c0 + 1) = FVar12;
        local_c0[2] = pFVar18;
        local_c0[3] = pTVar26;
        if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c0[4] = dVar10;
        if ((FWeakObjectPtr *)(local_c0 + 1) != (FWeakObjectPtr *)0x0) {
          local_e8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UHierarchicalInstancedStaticMeshComponent::BuildTreeAsync'::__l41::<lambda_1>,void>
                        ::Call;
        }
        FFunctionGraphTask::CreateAndDispatchWhenReady
                  ((TUniqueFunction<void___cdecl(void)> *)local_1f8,(TStatIdData *)local_e8,
                   (TRefCountPtr<FBaseGraphTask> *)FVar21,(Type)&local_200);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26)
        ;
        FVar8 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
        FVar24 = FVar27;
        if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar24 = FVar8;
        }
        if ((ulonglong)FVar24 <= local_1f8) {
          FVar24 = FVar27;
          if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar24 = FVar8;
          }
          if ((local_1f8 <
               (undefined1 *)((longlong)FVar24 + (longlong)(this->BuildTreeAsyncTasks).ArrayMax * 8)
              ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = (this->BuildTreeAsyncTasks).ArrayNum;
        if (iVar15 == (this->BuildTreeAsyncTasks).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar27,
                              &(this->BuildTreeAsyncTasks).ArrayMax);
        }
        (this->BuildTreeAsyncTasks).ArrayNum = iVar15 + 1;
        FVar8 = (this->BuildTreeAsyncTasks).AllocatorInstance.SecondaryData;
        if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar27 = FVar8;
        }
        *(undefined8 *)((longlong)FVar27 + (longlong)iVar15 * 8) = 0;
        *(undefined1 (*) [8])((longlong)FVar27 + (longlong)iVar15 * 8) = local_1f8;
        if (local_1f8 != (undefined1  [8])0x0) {
          LOCK();
          *(int *)((longlong)local_1f8 + 0x30) = *(int *)((longlong)local_1f8 + 0x30) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)((longlong)local_1f8 + 0x30);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar15 == 1) && (local_1f8 != (undefined1  [8])0x0)) {
            (*(code *)**(undefined8 **)local_1f8)(local_1f8,1);
          }
        }
        if (local_200 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &local_200->RefCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if ((aVar4 == (atomic<unsigned_int>)0x1) && (local_200 != (FTaskBase *)0x0)) {
            (**(code **)local_200->_padding_)(local_200,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26)
        ;
        if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.AllocatorInstance.Data);
        }
        goto LAB_147ce1d3e;
      }
    }
  }
  ApplyEmpty(this);
LAB_147ce1d3e:
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildTreeIfOutdated @ 147ce1d80

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

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::BuildTreeIfOutdated
          (UHierarchicalInstancedStaticMeshComponent *this,bool param_1,bool param_2)

{
  UObject *pUVar1;
  UStaticMesh *this_00;
  char cVar2;
  bool bVar3;
  int iVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  FPackageFileVersion FVar6;
  UWorld *pUVar7;
  bool bVar8;
  FGuid local_68;
  TBoxSphereBounds<double,double> local_58;
  
  if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
    return false;
  }
  if (*(UObject **)&this->field_0x5a0 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar1 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    cVar2 = (**(code **)(*(longlong *)(pUVar1 + 6) + 0x10))();
    if (cVar2 != '\0') {
      return false;
    }
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2784,
               "UHierarchicalInstancedStaticMeshComponent::BuildTreeIfOutdated",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
               ,0xae0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2784);
  }
  if ((param_2) || (this->bIsOutOfDate)) {
LAB_147ce1fa1:
    pUVar1 = *(UObject **)&this->field_0x5a0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 == (UObject *)0x0) goto LAB_147ce2069;
    }
    else {
      if (pUVar1 == (UObject *)0x0) {
LAB_147ce2069:
        ApplyEmpty(this);
        goto LAB_147ce2071;
      }
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar1 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((*(uint *)&pUVar1->field_0x8 >> 10 & 1) == 0) {
      this->bIsOutOfDate = true;
      pUVar1 = *(UObject **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      UObject::ConditionalPostLoad(pUVar1);
      if ((this->NumBuiltInstances == 0) &&
         ((*(longlong *)&this->field_0xb0 != 0 ||
          (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          pUVar7 != (UWorld *)0x0)))) {
        pUVar7 = *(UWorld **)&this->field_0xb0;
        if (pUVar7 == (UWorld *)0x0) {
          pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        bVar3 = UWorld::HasBegunPlay(pUVar7);
        if (bVar3) goto LAB_147ce2099;
        bVar3 = true;
      }
      else {
LAB_147ce2099:
        bVar3 = false;
      }
      if ((!param_1) || (bVar3)) {
        (**(code **)(*(longlong *)this + 0xcb0))(this);
        bVar3 = true;
      }
      else if (this->bIsAsyncBuilding) {
        bVar3 = true;
        this->field_0xb14 = this->field_0xb14 | 4;
      }
      else {
        (**(code **)(*(longlong *)this + 0xcb8))(this);
        bVar3 = true;
      }
      goto LAB_147ce2073;
    }
  }
  else {
    if (((this->field_0x83d != '\x02') &&
        ((this->field_0x83d != '\x01' ||
         (bVar3 = FPrimitiveInstanceDataManager::HasAnyInstanceChanges
                            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0), bVar3)))) ||
       ((*(int *)&this->field_0x728 != *(int *)&this->field_0x660 ||
        (this->NumBuiltInstances != *(int *)&this->field_0x660)))) goto LAB_147ce1fa1;
    pUVar1 = *(UObject **)&this->field_0x5a0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147ce1ebb:
      if (pUVar1 != (UObject *)0x0) {
        this_00 = *(UStaticMesh **)&this->field_0x5a0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pTVar5 = UStaticMesh::GetBounds(this_00,&local_58);
        if ((((((pTVar5->Origin).field0_0x0._s_0.X !=
                (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.X) ||
              ((pTVar5->Origin).field0_0x0._s_0.Y !=
               (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.Y)) ||
             ((pTVar5->Origin).field0_0x0._s_0.Z !=
              (this->CacheMeshExtendedBounds).Origin.field0_0x0._s_0.Z)) ||
            (((pTVar5->BoxExtent).field0_0x0._s_0.X !=
              (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.X ||
             ((pTVar5->BoxExtent).field0_0x0._s_0.Y !=
              (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.Y)))) ||
           (((pTVar5->BoxExtent).field0_0x0._s_0.Z !=
             (this->CacheMeshExtendedBounds).BoxExtent.field0_0x0._s_0.Z ||
            (pTVar5->SphereRadius != (this->CacheMeshExtendedBounds).SphereRadius))))
        goto LAB_147ce1fa1;
      }
    }
    else if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
      goto LAB_147ce1ebb;
    }
    if ((0 < (this->UnbuiltInstanceBoundsList).ArrayNum) ||
       (FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this),
       *(int *)FVar6 < 0x1bb)) goto LAB_147ce1fa1;
    local_68 = FReleaseObjectVersion::GUID;
    iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_68);
    if (iVar4 < 0xe) goto LAB_147ce1fa1;
  }
LAB_147ce2071:
  bVar3 = false;
LAB_147ce2073:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// CalcBounds @ 147ce2af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UHierarchicalInstancedStaticMeshComponent::CalcBounds
          (UHierarchicalInstancedStaticMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 uVar6;
  undefined1 uVar8;
  undefined1 uVar12;
  undefined1 uVar16;
  double dVar4;
  undefined8 uVar5;
  FName FVar18;
  code *pcVar19;
  TVector<double> *pTVar20;
  double *pdVar21;
  bool bVar22;
  bool bVar23;
  TBoxSphereBounds<double,double> *pTVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<_public:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UHierarchicalInstancedStaticMeshComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_7_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath>
  FVar26;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TMatrix<double> *pTVar27;
  uint uVar28;
  FNameEntryId FVar29;
  FName FVar30;
  FNameEntryId FVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStackY_268 [32];
  FColor_u_0 local_208 [2];
  FName local_200;
  FName local_1f8;
  LARGE_INTEGER local_1e8;
  FStatMessage local_1e0;
  double local_1d0;
  double dStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  FName local_198;
  FName local_190;
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  double local_160;
  TVector<double>_u_0 local_150;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  TMatrix<double> local_118;
  ulonglong local_98;
  undefined1 uVar7;
  undefined1 uVar9;
  undefined3 uVar10;
  undefined3 uVar11;
  undefined1 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined1 uVar17;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((this->BuiltInstanceBounds).IsValid == '\0') {
    if (((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0)
       && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar23)) {
      pcVar19 = (code *)swi(3);
      pTVar24 = (TBoxSphereBounds<double,double> *)(*pcVar19)();
      return pTVar24;
    }
    if ((((this->ClusterTreePtr).Object)->ArrayNum != 0) &&
       (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8992910310864062445>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                            ,0x7ed,"BuiltInstanceBounds.IsValid || ClusterTreePtr->Num() == 0"),
       bVar23)) {
      pcVar19 = (code *)swi(3);
      pTVar24 = (TBoxSphereBounds<double,double> *)(*pcVar19)();
      return pTVar24;
    }
  }
  if (((this->BuiltInstanceBounds).IsValid == '\0') &&
     ((this->UnbuiltInstanceBounds).IsValid == '\0')) {
    FVar31.Value = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath ==
          (FThreadSafeStaticStat<_public:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UHierarchicalInstancedStaticMeshComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_7_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath>
           )0x0) {
        pFVar25 = ::FName::FName(&local_198,
                                 "STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath"
                                );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath,
                   *pFVar25,L"STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath",
                   "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar26 = StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath;
    if (StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath ==
        (FThreadSafeStaticStat<_public:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UHierarchicalInstancedStaticMeshComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_7_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath>
         )0x0) {
      pFVar25 = ::FName::FName(&local_190,
                               "STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath")
      ;
      FVar26 = (FThreadSafeStaticStat<_public:_virtual_struct_UE::Math::TBoxSphereBounds<double,double>___cdecl_UHierarchicalInstancedStaticMeshComponent::CalcBounds(UE::Math::TTransform<double>_const_&)const_::_7_::FStat_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &
                            StatPtr_STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath
                            ,*pFVar25,
                            L"STAT_UHierarchicalInstancedStaticMeshComponent_CalcBounds_SlowPath",
                            "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                            false,MCR_Invalid);
    }
    FVar18 = *(FName *)FVar26;
    bVar23 = false;
    bVar22 = false;
    local_1f8.ComparisonIndex.Value = 0;
    local_1f8.Number = 0;
    FVar29 = FVar18.ComparisonIndex.Value;
    uVar28 = FVar18.Number;
    if ((FVar29.Value == 0) && (uVar28 == 0)) {
      UInstancedStaticMeshComponent::CalcBounds
                ((UInstancedStaticMeshComponent *)this,__return_storage_ptr__,param_1);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_208[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
        bVar23 = false;
        bVar22 = true;
        if (-1 < CpuChannel->Enabled) {
          local_200.ComparisonIndex.Value = FVar29.Value;
          local_200.Number = uVar28;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_200,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                     ,0x7f8);
          bVar23 = true;
          bVar22 = true;
        }
      }
      bVar32 = FThreadStats::bPrimaryEnable != false;
      FVar30 = local_1f8;
      if (bVar32) {
        local_200.ComparisonIndex.Value = FVar29.Value;
        local_200.Number = uVar28;
        local_1f8 = FVar18;
        FThreadStats::AddMessage(FVar18,CycleScopeStart);
        FVar30 = FVar18;
        FVar31.Value = local_1f8.ComparisonIndex.Value;
      }
      UInstancedStaticMeshComponent::CalcBounds
                ((UInstancedStaticMeshComponent *)this,__return_storage_ptr__,param_1);
      if (bVar22) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar32) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_1e0.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
          local_1e0.NameAndInfo.Index.Value = FVar31.Value;
          QueryPerformanceCounter(&local_1e8);
          local_1e0.StatData.Pad[4] = '\0';
          local_1e0.StatData.Pad[5] = '\0';
          local_1e0.StatData.Pad[6] = '\0';
          local_1e0.StatData.Pad[7] = '\0';
          local_1e0.StatData.Pad[0] = local_1e8.s.LowPart._0_1_;
          local_1e0.StatData.Pad[1] = local_1e8.s.LowPart._1_1_;
          local_1e0.StatData.Pad[2] = local_1e8.s.LowPart._2_1_;
          local_1e0.StatData.Pad[3] = local_1e8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_1e0);
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
  }
  else {
    local_1d0 = (this->BuiltInstanceBounds).Min.field0_0x0._s_0.X;
    dStack_1c8 = (this->BuiltInstanceBounds).Min.field0_0x0._s_0.Y;
    pdVar2 = &(this->BuiltInstanceBounds).Min.field0_0x0._s_0.Z;
    local_1c0 = *(undefined4 *)pdVar2;
    uStack_1bc = *(undefined4 *)((longlong)&(this->BuiltInstanceBounds).Min.field0_0x0 + 0x14);
    pTVar20 = &(this->BuiltInstanceBounds).Max;
    uStack_1b8 = *(undefined4 *)&pTVar20->field0_0x0;
    uStack_1b4 = *(undefined4 *)((longlong)&(this->BuiltInstanceBounds).Max.field0_0x0 + 4);
    dVar35 = *(double *)&pTVar20->field0_0x0;
    pdVar3 = &(this->BuiltInstanceBounds).Max.field0_0x0._s_0.Y;
    local_1b0 = *(undefined4 *)pdVar3;
    uStack_1ac = *(undefined4 *)((longlong)&(this->BuiltInstanceBounds).Max.field0_0x0 + 0xc);
    pdVar21 = (double *)((longlong)&(this->BuiltInstanceBounds).Max.field0_0x0 + 0x10);
    uStack_1a8 = *(undefined4 *)pdVar21;
    uStack_1a4 = *(undefined4 *)((longlong)&(this->BuiltInstanceBounds).Max.field0_0x0 + 0x14);
    dVar4 = *pdVar21;
    local_1a0._0_1_ = (this->BuiltInstanceBounds).IsValid;
    local_1a0._1_1_ = (this->BuiltInstanceBounds).Pad[0];
    local_1a0._2_1_ = (this->BuiltInstanceBounds).Pad[1];
    local_1a0._3_1_ = (this->BuiltInstanceBounds).Pad[2];
    uVar6 = (this->BuiltInstanceBounds).Pad[3];
    uVar8 = (this->BuiltInstanceBounds).Pad[4];
    uVar12 = (this->BuiltInstanceBounds).Pad[5];
    uVar16 = (this->BuiltInstanceBounds).Pad[6];
    uVar14 = CONCAT11(uVar16,uVar12);
    uVar10 = CONCAT21(uVar14,uVar8);
    local_1a0._4_4_ = CONCAT31(uVar10,uVar6);
    uVar38 = (undefined4)local_1a0;
    local_150._16_4_ = local_1c0;
    local_150._20_4_ = uStack_1bc;
    uStack_138 = uStack_1b8;
    uStack_134 = uStack_1b4;
    local_150._s_0.Y = dStack_1c8;
    local_150._s_0.X = local_1d0;
    local_130 = local_1b0;
    uStack_12c = uStack_1ac;
    uStack_128 = uStack_1a8;
    uStack_124 = uStack_1a4;
    uVar39 = local_1a0._4_4_;
    if ((undefined1)local_1a0 == '\0') {
      if ((this->UnbuiltInstanceBounds).IsValid != '\0') {
        local_150._s_0.X = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X;
        local_150._s_0.Y = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y;
        local_150._16_4_ =
             *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Min.field0_0x0 + 0x10);
        local_150._20_4_ =
             *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Min.field0_0x0 + 0x14);
        uStack_138 = *(undefined4 *)&(this->UnbuiltInstanceBounds).Max.field0_0x0;
        uStack_134 = *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 4);
        local_130 = *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 8);
        uStack_12c = *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 0xc);
        uStack_128 = *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 0x10)
        ;
        uStack_124 = *(undefined4 *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 0x14)
        ;
        uVar5._0_1_ = (this->UnbuiltInstanceBounds).IsValid;
        uVar5._1_1_ = (this->UnbuiltInstanceBounds).Pad[0];
        uVar5._2_1_ = (this->UnbuiltInstanceBounds).Pad[1];
        uVar5._3_1_ = (this->UnbuiltInstanceBounds).Pad[2];
        uVar7 = (this->UnbuiltInstanceBounds).Pad[3];
        uVar9 = (this->UnbuiltInstanceBounds).Pad[4];
        uVar13 = (this->UnbuiltInstanceBounds).Pad[5];
        uVar17 = (this->UnbuiltInstanceBounds).Pad[6];
        uVar15 = CONCAT11(uVar17,uVar13);
        uVar11 = CONCAT21(uVar15,uVar9);
        uVar5._4_4_ = CONCAT31(uVar11,uVar7);
        uVar38 = (undefined4)uVar5;
        uVar39 = uVar5._4_4_;
      }
    }
    else if ((this->UnbuiltInstanceBounds).IsValid != '\0') {
      dVar36 = *(double *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 8);
      dVar37 = *(double *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 0x10);
      if (dVar37 <= dVar4) {
        dVar37 = dVar4;
      }
      dVar4 = *(double *)((longlong)&(this->UnbuiltInstanceBounds).Min.field0_0x0 + 0x10);
      local_130 = SUB84(dVar36,0);
      uStack_12c = (int)((ulonglong)dVar36 >> 0x20);
      if (dVar36 <= *pdVar3) {
        local_130 = local_1b0;
        uStack_12c = uStack_1ac;
      }
      dVar36 = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X;
      if (dVar36 <= local_1d0) {
        local_150._s_0.X = dVar36;
      }
      local_150._s_0.Y = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y;
      dVar36 = *(double *)&(this->UnbuiltInstanceBounds).Max.field0_0x0;
      if (dStack_1c8 <= local_150._s_0.Y) {
        local_150._s_0.Y = dStack_1c8;
      }
      local_150._16_4_ = SUB84(dVar4,0);
      local_150._20_4_ = (int)((ulonglong)dVar4 >> 0x20);
      if (*pdVar2 <= dVar4) {
        local_150._16_4_ = local_1c0;
        local_150._20_4_ = uStack_1bc;
      }
      if (dVar36 <= dVar35) {
        dVar36 = dVar35;
      }
      uStack_138 = SUB84(dVar36,0);
      uStack_134 = (int)((ulonglong)dVar36 >> 0x20);
      uStack_128 = SUB84(dVar37,0);
      uStack_124 = (int)((ulonglong)dVar37 >> 0x20);
    }
    local_120 = CONCAT44(uVar39,uVar38);
    pTVar27 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_118);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_150._s_0,(TBox<double> *)&local_188._s_0,pTVar27);
    local_168 = local_168 - local_188._s_0.Y;
    local_170 = local_170 - local_188._s_0.X;
    local_160 = local_160 - local_188._s_0.Z;
    dVar36 = local_168 * __real_3fe0000000000000;
    dVar4 = local_170 * __real_3fe0000000000000;
    dVar37 = local_160 * __real_3fe0000000000000;
    dVar35 = (double)*(float *)&this->field_0x324;
    auVar33._0_8_ = dVar4 + local_188._s_0.X;
    auVar33._8_8_ = 0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = auVar33._0_8_;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar36 + local_188._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar37 + local_188._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar4 * dVar35;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar36 * dVar35;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar37 * dVar35;
    auVar34._8_8_ = 0;
    auVar34._0_8_ =
         (local_168 * local_168 + local_170 * local_170 + local_160 * local_160) *
         __real_3fd0000000000000;
    auVar34 = sqrtpd(auVar33,auVar34);
    __return_storage_ptr__->SphereRadius = auVar34._0_8_ * dVar35;
  }
  return __return_storage_ptr__;
}

// CalcTranslatedInstanceSpaceOrigin @ 147ce3b20

TVector<double> * __thiscall
UHierarchicalInstancedStaticMeshComponent::CalcTranslatedInstanceSpaceOrigin
          (UHierarchicalInstancedStaticMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  if (this->bUseTranslatedInstanceSpace != 0) {
    if (*(int *)&this->field_0x660 != 0) {
      if (*(int *)&this->field_0x660 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      lVar2 = *(longlong *)&this->field_0x658;
      local_38 = *(double *)(lVar2 + 0x60);
      uStack_30 = *(undefined8 *)(lVar2 + 0x68);
      pdVar7 = &local_38;
      local_28 = *(undefined8 *)(lVar2 + 0x70);
      goto LAB_147ce3bbb;
    }
  }
  pdVar7 = &local_20;
  local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_147ce3bbb:
  dVar4 = pdVar7[1];
  dVar1 = pdVar7[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ClearInstances @ 147ce4940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::ClearInstances
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uchar auVar5 [8];
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  FName FVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_38;
  TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> local_28;
  
  bVar3 = this->field_0xb14;
  this->field_0xb14 = (bVar3 << 2 | bVar3) & 4 ^ (bVar3 & 0xfb | 2);
  FVar12 = (FName)::operator_new(0x10);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if (FVar12 != (FName)0x0) {
    *(undefined8 *)FVar12 = 0;
    *(undefined8 *)((longlong)FVar12 + 8) = 0;
    local_res8 = FVar12;
  }
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
  operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>
            (&this->ClusterTreePtr,
             (TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> *)&local_res8);
  this->NumBuiltInstances = 0;
  this->NumBuiltRenderInstances = 0;
  this->InstanceCountToRender = 0;
  piVar1 = &(this->SortedInstances).ArrayMax;
  (this->SortedInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SortedInstances).AllocatorInstance,0,piVar1);
  }
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  piVar1 = &(this->UnbuiltInstanceBoundsList).ArrayMax;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y = (double)uVar9;
  (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar6 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X;
  dVar7 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y;
  (this->UnbuiltInstanceBounds).IsValid = '\0';
  dVar2 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X = dVar6;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y = dVar7;
  (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z = dVar2;
  (this->UnbuiltInstanceBoundsList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->UnbuiltInstanceBoundsList).AllocatorInstance,0,piVar1);
  }
  auVar5 = *(uchar (*) [8])&this->field_0x730;
  if (auVar5 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_FoliageInstanceBuffers;
    if (StatPtr_STAT_FoliageInstanceBuffers ==
        (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)0x0) {
      pFVar13 = ::FName::FName(&local_res8,"STAT_FoliageInstanceBuffers");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageInstanceBuffers,*pFVar13
                          ,L"Instance Buffers","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                          true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar12 = *(FName *)FVar14;
    local_res8 = FVar12;
    if (((FVar12 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar12.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar12;
      local_38.StatData.Pad = auVar5;
      local_38.NameAndInfo.Index.Value = FVar12.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar5);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->field_0x938 = 0;
  this->field_0x978 = 0;
  this->field_0x9b8 = 0;
  iVar4 = *(int *)&this->field_0x660;
  if (((this->field_0x9a & 0x40) == 0) || ((this->field_0x98 & 1) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    cVar10 = (**(code **)(*(longlong *)this + 0xc88))(this);
    if (cVar10 != '\0') {
      UInstancedStaticMeshComponent::PartialNavigateUpdateForCurrentInstances
                ((UInstancedStaticMeshComponent *)this);
    }
  }
  *(undefined4 *)&this->field_0x660 = 0;
  if (*(int *)&this->field_0x664 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&this->field_0x658,0,(int *)&this->field_0x664);
  }
  *(undefined4 *)&this->field_0x6f0 = 0;
  if (*(int *)&this->field_0x6f4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->field_0x6e8,0,(int *)&this->field_0x6f4);
  }
  *(undefined4 *)&this->field_0x728 = 0;
  if (*(int *)&this->field_0x72c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->field_0x720,0,(int *)&this->field_0x72c);
  }
  *(undefined8 *)&this->field_0x730 = 0;
  UInstancedStaticMeshComponent::ClearAllInstanceBodies((UInstancedStaticMeshComponent *)this);
  FPrimitiveInstanceDataManager::Invalidate
            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,*(int *)&this->field_0x660);
  bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                     ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                      &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated);
  if (bVar11) {
    local_28.ArrayNum = 1;
    local_38.StatData.Pad._4_4_ = iVar4 + -1;
    local_28.DataPtr = (FInstanceIndexUpdateData *)&local_38;
    local_38.StatData.Pad[0] = '\x03';
    local_38.NameAndInfo.Index.Value = 0xffffffff;
    TMulticastDelegate<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
    ::Broadcast(&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,
                (UInstancedStaticMeshComponent *)this,&local_28);
  }
  if (bVar8) {
    FNavigationSystem::UnregisterComponent((UActorComponent *)this);
    this->field_0x9a = this->field_0x9a & 0xbf;
  }
  return;
}

// CreateSceneProxy @ 147cea650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UHierarchicalInstancedStaticMeshComponent::CreateSceneProxy
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  int *piVar1;
  longlong lVar2;
  FName FVar3;
  UObject *pUVar4;
  UStaticMesh *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  EPSOPrecacheProxyCreationStrategy EVar13;
  char cVar14;
  EShaderPlatform EVar15;
  int iVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UHierarchicalInstancedStaticMeshComponent::CreateSceneProxy(void)_::_2_::FStat_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy>
  FVar19;
  FThreadSafeStaticStat<FStat_STAT_FoliageCreateProxy> FVar20;
  FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FPrimitiveSceneProxy *pFVar24;
  IConsoleManager *pIVar25;
  uint uVar26;
  longlong *plVar27;
  FColor_u_0 FVar28;
  FName FVar29;
  FName FVar30;
  uchar auVar31 [8];
  undefined1 auStackY_268 [32];
  FName local_200;
  FColor_u_0 local_1f8;
  uint uStack_1f4;
  FColor_u_0 local_1f0 [2];
  FColor_u_0 local_1e8;
  uint local_1e4;
  FName local_1e0;
  FName local_1d8;
  FName local_1c8;
  FName local_1b8;
  LARGE_INTEGER local_1b0;
  LARGE_INTEGER local_1a8;
  FStatMessage local_1a0;
  FStatMessage local_190;
  FStatMessage local_180;
  FStatMessage local_170;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FString local_138;
  undefined1 local_128 [232];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar25 = IConsoleManager::Get();
    NaniteProxyRenderModeVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar25 + 0xc0))(pIVar25,L"r.Nanite.ProxyRenderMode");
    _Init_thread_footer(&::_TSS0);
  }
  if (NaniteProxyRenderModeVar != (IConsoleVariable *)0x0) {
    (**(code **)(*(longlong *)NaniteProxyRenderModeVar + 200))();
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy ==
        (FThreadSafeStaticStat<_public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UHierarchicalInstancedStaticMeshComponent::CreateSceneProxy(void)_::_2_::FStat_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy>
         )0x0) {
      pFVar18 = ::FName::FName(&local_160,
                               "STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy,*pFVar18,
                 L"STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy","STATGROUP_Quick"
                 ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar19 = StatPtr_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy;
  if (StatPtr_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy ==
      (FThreadSafeStaticStat<_public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UHierarchicalInstancedStaticMeshComponent::CreateSceneProxy(void)_::_2_::FStat_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy>
       )0x0) {
    pFVar18 = ::FName::FName(&local_158,
                             "STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy");
    FVar19 = (FThreadSafeStaticStat<_public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UHierarchicalInstancedStaticMeshComponent::CreateSceneProxy(void)_::_2_::FStat_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy,
                          *pFVar18,L"STAT_HierarchicalInstancedStaticMeshComponent_CreateSceneProxy"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar19;
  bVar7 = false;
  bVar9 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar11 = false;
  bVar6 = false;
  FVar28.Bits = (uint)FVar30.ComparisonIndex.Value;
  uVar26 = FVar30.Number;
  if ((FVar28.Bits == 0) && (uVar26 == 0)) {
LAB_147cea806:
    bVar9 = bVar6;
    bVar7 = bVar11;
    bVar11 = false;
    FVar30 = local_1d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f0[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar11 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8.Bits = FVar28.Bits;
        local_1e4 = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1e8._s_0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0xbc0);
        bVar7 = true;
        bVar9 = true;
        bVar11 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147cea806;
    local_1f8.Bits = FVar28.Bits;
    uStack_1f4 = uVar26;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar11 = true;
  }
  FVar20 = StatPtr_STAT_FoliageCreateProxy;
  if (StatPtr_STAT_FoliageCreateProxy == (FThreadSafeStaticStat<FStat_STAT_FoliageCreateProxy>)0x0)
  {
    pFVar18 = ::FName::FName(&local_150,"STAT_FoliageCreateProxy");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_FoliageCreateProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageCreateProxy,*pFVar18,
                        L"Foliage Create Proxy","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar20;
  bVar6 = false;
  bVar8 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar29.ComparisonIndex.Value.Value != 0) || (FVar29.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_1e0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0xbc1);
        bVar6 = true;
        bVar8 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_200 = FVar29;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar10 = true;
      goto LAB_147cea934;
    }
  }
  bVar8 = bVar12;
  bVar6 = bVar10;
  bVar10 = false;
  FVar29 = local_1c8;
LAB_147cea934:
  this->field_0x83e = this->field_0x83e & 0xdf;
  auVar31 = *(uchar (*) [8])&this->field_0x730;
  if (auVar31 != (uchar  [8])0x0) {
    FVar21 = StatPtr_STAT_FoliageInstanceBuffers;
    if (StatPtr_STAT_FoliageInstanceBuffers ==
        (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)0x0) {
      pFVar18 = ::FName::FName(&local_148,"STAT_FoliageInstanceBuffers");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageInstanceBuffers,*pFVar18
                          ,L"Instance Buffers","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                          true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar21;
    local_200 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      local_1a0.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_200 = FVar3;
      local_1a0.StatData.Pad = auVar31;
      local_1a0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar22,&local_1a0);
      FStatsTrace::Add(&local_200,-(longlong)auVar31);
      if (pFVar22->ScopeCount == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  pFVar24 = (FPrimitiveSceneProxy *)0x0;
  *(undefined8 *)&this->field_0x730 = 0;
  bVar12 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority((UPrimitiveComponent *)this,High)
  ;
  if ((bVar12) && (EVar13 = GetPSOPrecacheProxyCreationStrategy(), EVar13 == DelayUntilPSOPrecached)
     ) {
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_138,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (((0 < *(int *)&this->field_0x660) ||
           ((iVar16 = FPrimitiveInstanceDataManager::GetMaxInstanceIndex
                                ((FPrimitiveInstanceDataManager *)&this->field_0x7a0), 0 < iVar16 ||
            (0 < this->NumBuiltRenderInstances)))) &&
          (*(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar4 = *(UObject **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    cVar14 = (**(code **)(*(longlong *)(pUVar4 + 6) + 0x10))();
    if (cVar14 == '\0') {
      this_00 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      bVar12 = UStaticMesh::HasValidRenderData(this_00,false,-1);
      if (bVar12) {
        if ((*(int *)&this->field_0x6e4 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InstancingRandomSeed != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                                ,0xbe2,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          pFVar24 = (FPrimitiveSceneProxy *)(*pcVar5)();
          return pFVar24;
        }
        pFVar24 = UStaticMeshComponent::CreateSceneProxy((UStaticMeshComponent *)this);
        if (pFVar24 != (FPrimitiveSceneProxy *)0x0) {
          local_128._160_8_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_128._128_4_ = Movable;
          local_128._132_4_ = 3.4028235e+38;
          local_128._136_4_ = 3.4028235e+38;
          pcVar5 = *(code **)(*(longlong *)this + 0xca0);
          local_128._140_4_ = 3.4028235e+38;
          local_128._144_4_ = -3.4028235e+38;
          local_128._148_4_ = -3.4028235e+38;
          local_128._152_4_ = -3.4028235e+38;
          local_128._156_2_ = 0;
          local_128._168_4_ = 0.0;
          local_128[0xac] = false;
          local_128[0xad] = false;
          local_128[0xae] = false;
          local_128[0xaf] = false;
          local_128._176_4_ = -1;
          local_128._180_4_ = -1;
          local_128._184_4_ = 0;
          local_128._192_8_ = 0;
          local_40 = (longlong *)0x0;
          EVar15 = FSceneInterface::GetShaderPlatform(pFVar24->Scene);
          (*pcVar5)(this,EVar15,local_128);
          FPrimitiveInstanceDataManager::FlushChanges
                    ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,
                     (FInstanceUpdateComponentDesc *)local_128,true);
          if (local_128._192_8_ != 0) {
            plVar27 = (longlong *)(local_128 + 0xd0);
            if (local_40 != (longlong *)0x0) {
              plVar27 = local_40;
            }
            (**(code **)(*plVar27 + 0x10))();
          }
        }
        iVar16 = *(int *)&this->field_0x6e0 + 3;
        iVar17 = (**(code **)(*(longlong *)this + 0xc68))(this);
        auVar31 = (uchar  [8])
                  ((longlong)iVar17 * (longlong)(((int)((iVar16 >> 0x1f & 3U) + iVar16) >> 2) + 5) *
                  0x10);
        *(uchar (*) [8])&this->field_0x730 = auVar31;
        if (auVar31 != (uchar  [8])0x0) {
          FVar21 = StatPtr_STAT_FoliageInstanceBuffers;
          if (StatPtr_STAT_FoliageInstanceBuffers ==
              (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)0x0) {
            pFVar18 = ::FName::FName(&local_140,"STAT_FoliageInstanceBuffers");
            FVar21 = (FThreadSafeStaticStat<FStat_STAT_FoliageInstanceBuffers>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageInstanceBuffers,
                                *pFVar18,L"Instance Buffers","STATGROUP_Foliage","STATCAT_Advanced",
                                L"Foliage",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar3 = *(FName *)FVar21;
          local_200 = FVar3;
          if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar22 == (FThreadStats *)0x0) {
              pFVar23 = FThreadStatsPool::Get();
              pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
            }
            local_190.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
            local_1b8 = FVar3;
            local_190.StatData.Pad = auVar31;
            local_190.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar22,&local_190);
            FStatsTrace::Add(&local_1b8,(long64)auVar31);
            if (pFVar22->ScopeCount == 0) {
              FThreadStats::Flush(pFVar22,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar22,false,false);
            }
          }
        }
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar29 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
      local_180.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
      local_180.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1b0);
      local_180.StatData.Pad[4] = '\0';
      local_180.StatData.Pad[5] = '\0';
      local_180.StatData.Pad[6] = '\0';
      local_180.StatData.Pad[7] = '\0';
      local_180.StatData.Pad[0] = local_1b0.s.LowPart._0_1_;
      local_180.StatData.Pad[1] = local_1b0.s.LowPart._1_1_;
      local_180.StatData.Pad[2] = local_1b0.s.LowPart._2_1_;
      local_180.StatData.Pad[3] = local_1b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar22,&local_180);
      piVar1 = &pFVar22->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar30 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
      local_170.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
      local_170.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1a8);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_1a8.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_1a8.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_1a8.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_1a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar22,&local_170);
      piVar1 = &pFVar22->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  return pFVar24;
}

// CreateStaticMeshSceneProxy @ 147ceb400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UHierarchicalInstancedStaticMeshComponent::CreateStaticMeshSceneProxy
          (UHierarchicalInstancedStaticMeshComponent *this,FMaterialAudit *param_1,bool param_2)

{
  FSceneInterface *pFVar1;
  FSceneProxy *this_00;
  FHierarchicalStaticMeshSceneProxy *pFVar2;
  UWorld *pUVar3;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  TSharedPtr<FISMCInstanceDataSceneProxy,1> local_18;
  
  FLLMScope::FLLMScope(local_res18,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,InstancedMesh,true);
  pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
  if (pFVar1 == (FSceneInterface *)0x0) {
    local_18.Object = (FISMCInstanceDataSceneProxy *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FPrimitiveInstanceDataManager::GetOrCreateProxy
              ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,&local_18,pFVar1->FeatureLevel);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (param_2) {
    this_00 = ::operator_new(0xc20);
    if (this_00 != (FSceneProxy *)0x0) {
      pFVar2 = (FHierarchicalStaticMeshSceneProxy *)
               Nanite::FSceneProxy::FSceneProxy(this_00,param_1,this);
      goto LAB_147ceb4e2;
    }
  }
  else {
    pFVar2 = ::operator_new(0xf90);
    if (pFVar2 != (FHierarchicalStaticMeshSceneProxy *)0x0) {
      pUVar3 = *(UWorld **)&this->field_0xb0;
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      pFVar2 = FHierarchicalStaticMeshSceneProxy::FHierarchicalStaticMeshSceneProxy
                         (pFVar2,this,(uint)(pUVar3->FeatureLevel).Value);
      goto LAB_147ceb4e2;
    }
  }
  pFVar2 = (FHierarchicalStaticMeshSceneProxy *)0x0;
LAB_147ceb4e2:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return (FPrimitiveSceneProxy *)pFVar2;
}

// DesiredInstancesPerLeaf @ 147ced610

int __thiscall
UHierarchicalInstancedStaticMeshComponent::DesiredInstancesPerLeaf
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (*(UObject **)&this->field_0x5a0 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar1 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    bVar3 = UStaticMesh::HasValidRenderData(pUVar1,true,0);
    if (bVar3) {
      pUVar1 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      iVar4 = UStaticMesh::GetNumVertices(pUVar1,0);
      goto LAB_147ced69d;
    }
  }
  iVar4 = 0;
LAB_147ced69d:
  pTVar2 = CVarMinVertsToSplitNode.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar6 = 4;
    }
  }
  if (iVar4 != 0) {
    iVar4 = *(int *)((longlong)pTVar2->ShadowedValue + lVar6) / iVar4;
    iVar5 = 0x400;
    if (iVar4 < 0x400) {
      iVar5 = iVar4;
    }
    iVar4 = 1;
    if (1 < iVar5) {
      iVar4 = iVar5;
    }
    return iVar4;
  }
  return 0x10;
}

// FlushAccumulatedNavigationUpdates @ 147cf7220

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FlushAccumulatedNavigationUpdates
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  return;
}

// GetAverageScale @ 147cfa9d0

TVector<double> * __thiscall
UHierarchicalInstancedStaticMeshComponent::GetAverageScale
          (UHierarchicalInstancedStaticMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  float fVar11;
  float fVar12;
  
  if ((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar7)();
      return pTVar10;
    }
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pTVar3 = (this->ClusterTreePtr).Object;
  if (pTVar3->ArrayNum != 0) {
    if (pTVar3->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar7)();
        return pTVar10;
      }
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pTVar3->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar7)();
        return pTVar10;
      }
    }
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pTVar3->ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar7)();
        return pTVar10;
      }
    }
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    fVar11 = (*(float *)(pFVar5 + 0x38) - *(float *)(pFVar6 + 0x2c)) * __real_3f000000;
    fVar12 = (*(float *)(pFVar5 + 0x3c) - *(float *)(pFVar6 + 0x30)) * __real_3f000000;
    fVar1 = *(float *)(pFVar4 + 0x2c);
    fVar2 = *(float *)(pFVar4 + 0x30);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((*(float *)(pFVar5 + 0x34) - *(float *)(pFVar6 + 0x28)) * __real_3f000000 +
                 *(float *)(pFVar4 + 0x28));
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar11 + fVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(fVar12 + fVar2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetClusterTreeBounds @ 147cfb670

TBox<double> * __cdecl
UHierarchicalInstancedStaticMeshComponent::GetClusterTreeBounds
          (TBox<double> *__return_storage_ptr__,
          TArray<FClusterNode,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  
  if (0 < param_1->ArrayNum) {
    pFVar8 = (param_1->AllocatorInstance).Data;
    dVar9 = (param_2->field0_0x0)._s_0.Y;
    dVar10 = (param_2->field0_0x0)._s_0.Z;
    uVar4 = *(undefined8 *)(pFVar8 + 0x14);
    fVar1 = *(float *)(pFVar8 + 4);
    fVar2 = *(float *)(pFVar8 + 8);
    fVar3 = *(float *)(pFVar8 + 0x10);
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.Z;
    dVar7 = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X =
         (double)*(float *)pFVar8 + (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)fVar1 + dVar5;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)fVar2 + dVar6;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)fVar3 + dVar7;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)(float)uVar4 + dVar9;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
         (double)(float)((ulonglong)uVar4 >> 0x20) + dVar10;
    __return_storage_ptr__->IsValid = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetInstanceTransforms @ 147d06d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::GetInstanceTransforms
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  UHierarchicalInstancedStaticMeshComponent *pUVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  LARGE_INTEGER local_100;
  UHierarchicalInstancedStaticMeshComponent *local_f8;
  TVector<double> *local_f0;
  longlong local_e8;
  LARGE_INTEGER local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_f8 = this;
  local_f0 = param_2;
  QueryPerformanceCounter(&local_100);
  uVar12 = *(uint *)&this->field_0x660;
  lVar15 = (longlong)(int)uVar12;
  piVar1 = &param_1->ArrayNum;
  iVar11 = *piVar1;
  if (iVar11 < (int)uVar12) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar12 - iVar11,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar11) {
      uVar14 = iVar11 - uVar12;
      if (((int)(uVar14 | uVar12) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar14 != 0) {
        pFVar13 = (param_1->AllocatorInstance).Data + lVar15 * 0x80;
        iVar11 = (*piVar1 - uVar14) - uVar12;
        if (iVar11 != 0) {
          memmove(pFVar13,pFVar13 + (longlong)(int)uVar14 * 0x80,(longlong)iVar11 << 7);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
    }
  }
  pUVar9 = local_f8;
  uVar14 = 0;
  local_e8 = lVar15;
  if (0 < (int)uVar12) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar14 < *(int *)&pUVar9->field_0x660) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&pUVar9->field_0x658;
      local_d8 = *(undefined8 *)(lVar15 + lVar4);
      uStack_d0 = ((undefined8 *)(lVar15 + lVar4))[1];
      pdVar2 = (double *)(lVar15 + 0x60 + lVar4);
      puVar3 = (undefined8 *)(lVar15 + 0x10 + lVar4);
      local_c8 = *puVar3;
      uStack_c0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar15 + 0x20 + lVar4);
      local_b8 = *puVar3;
      uStack_b0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar15 + 0x30 + lVar4);
      local_a8 = *puVar3;
      uStack_a0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar15 + 0x40 + lVar4);
      local_98 = *puVar3;
      uStack_90 = puVar3[1];
      puVar3 = (undefined8 *)(lVar15 + 0x50 + lVar4);
      local_88 = *puVar3;
      uStack_80 = puVar3[1];
      dVar7 = *pdVar2 + (local_f0->field0_0x0)._s_0.X;
      dVar8 = pdVar2[1] + (local_f0->field0_0x0)._s_0.Y;
      uVar17 = SUB84(dVar8,0);
      uVar18 = (undefined4)((ulonglong)dVar8 >> 0x20);
      local_68 = *(double *)(lVar15 + 0x70 + lVar4) + (local_f0->field0_0x0)._s_0.Z;
      local_78._8_4_ = uVar17;
      local_78._0_8_ = dVar7;
      local_78._12_4_ = uVar18;
      uStack_60 = *(undefined8 *)(lVar15 + 0x78 + lVar4);
      uVar12 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar13 = (param_1->AllocatorInstance).Data;
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 1;
      *(undefined8 *)(pFVar13 + lVar15) = local_d8;
      *(undefined8 *)(pFVar13 + lVar15 + 8) = uStack_d0;
      *(undefined8 *)(pFVar13 + lVar15 + 0x10) = local_c8;
      *(undefined8 *)(pFVar13 + lVar15 + 0x10 + 8) = uStack_c0;
      *(undefined8 *)(pFVar13 + lVar15 + 0x20) = local_b8;
      *(undefined8 *)(pFVar13 + lVar15 + 0x20 + 8) = uStack_b0;
      *(undefined8 *)(pFVar13 + lVar15 + 0x30) = local_a8;
      *(undefined8 *)(pFVar13 + lVar15 + 0x30 + 8) = uStack_a0;
      *(undefined8 *)(pFVar13 + lVar15 + 0x40) = local_98;
      *(undefined8 *)(pFVar13 + lVar15 + 0x40 + 8) = uStack_90;
      *(undefined8 *)(pFVar13 + lVar15 + 0x50) = local_88;
      *(undefined8 *)(pFVar13 + lVar15 + 0x50 + 8) = uStack_80;
      auVar6._8_4_ = uVar17;
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = uVar18;
      *(undefined1 (*) [16])(pFVar13 + lVar15 + 0x60) = auVar6;
      pFVar13 = pFVar13 + lVar15 + 0x70;
      *(undefined4 *)pFVar13 = (undefined4)local_68;
      *(undefined4 *)(pFVar13 + 4) = local_68._4_4_;
      *(undefined4 *)(pFVar13 + 8) = (undefined4)uStack_60;
      *(undefined4 *)(pFVar13 + 0xc) = uStack_60._4_4_;
      lVar15 = lVar15 + 0x80;
    } while (lVar16 < local_e8);
  }
  if (5 < (byte)LogStaticMesh._0_1_) {
    QueryPerformanceCounter(&local_e0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  }
  return;
}

// GetInstancesOverlappingBox @ 147d07470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UHierarchicalInstancedStaticMeshComponent::GetInstancesOverlappingBox
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TBox<double> *param_1,
          bool param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar4;
  UObject *pUVar5;
  UStaticMesh *this_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  TMatrix<double> *pTVar9;
  TBoxSphereBounds<double,double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_278 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_248;
  code *local_238;
  TVector<double>_u_0 *local_230;
  undefined1 local_228 [24];
  TVector<double>_u_0 TStack_210;
  __m128d local_1f8;
  __m128d local_1e8;
  __m128d local_1d8;
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TVector<double>_u_0 local_188;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  undefined1 local_130 [16];
  double local_120;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pTVar4 = (this->ClusterTreePtr).Object;
  if ((pTVar4 == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) || (pTVar4->ArrayNum == 0)
     ) {
    UInstancedStaticMeshComponent::GetInstancesOverlappingBox
              ((UInstancedStaticMeshComponent *)this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  local_1c8._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  local_1c8._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_1c8._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  dStack_1b0 = (param_1->Max).field0_0x0._s_0.X;
  uVar16 = *(undefined4 *)&(param_1->Min).field0_0x0;
  uVar17 = *(undefined4 *)((longlong)&(param_1->Min).field0_0x0 + 4);
  uVar18 = *(undefined4 *)((longlong)&(param_1->Min).field0_0x0 + 8);
  uVar19 = *(undefined4 *)((longlong)&(param_1->Min).field0_0x0 + 0xc);
  uVar20 = *(undefined4 *)((longlong)&(param_1->Min).field0_0x0 + 0x10);
  uVar21 = *(undefined4 *)((longlong)&(param_1->Min).field0_0x0 + 0x14);
  uVar22 = *(undefined4 *)&(param_1->Max).field0_0x0;
  uVar23 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 4);
  pdVar1 = &(param_1->Max).field0_0x0._s_0.Y;
  uVar24 = *(undefined4 *)pdVar1;
  uVar25 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 0xc);
  local_1a8 = *pdVar1;
  pdVar1 = &(param_1->Max).field0_0x0._s_0.Z;
  uVar26 = *(undefined4 *)pdVar1;
  uVar27 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 0x14);
  dStack_1a0 = *pdVar1;
  local_198 = *(double *)&param_1->IsValid;
  uVar13 = SUB84(local_198,0);
  uVar14 = (undefined4)((ulonglong)local_198 >> 0x20);
  local_188._0_4_ = uVar16;
  local_188._4_4_ = uVar17;
  local_188._8_4_ = uVar18;
  local_188._12_4_ = uVar19;
  local_188._16_4_ = uVar20;
  local_188._20_4_ = uVar21;
  uStack_170 = uVar22;
  uStack_16c = uVar23;
  local_168 = uVar24;
  uStack_164 = uVar25;
  uStack_160 = uVar26;
  uStack_15c = uVar27;
  local_158 = local_198;
  if (param_2) {
    auVar15._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)&this->field_0x234
                          ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           *(uint *)&this->field_0x230);
    auVar15._8_4_ = _UNK_15061cc88 & *(uint *)&this->field_0x238;
    auVar15._12_4_ = _UNK_15061cc8c & *(uint *)&this->field_0x23c;
    lVar12 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c & *(uint *)&this->field_0x24c,
                               _UNK_15061cc88 & *(uint *)&this->field_0x248));
    auVar7._8_4_ = (int)lVar12;
    auVar7._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)&this->field_0x244,
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)&this->field_0x240));
    auVar7._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar11 = movmskpd((int)this,auVar7);
    lVar12 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar15._8_8_);
    auVar6._8_4_ = (int)lVar12;
    auVar6._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar15._0_8_);
    auVar6._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar8 = movmskpd(0,auVar6);
    if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
      local_228._0_16_ =
           (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      stack0xfffffffffffffde8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      TStack_210._8_16_ =
           (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_1f8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_1e8.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_1d8.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast
                ((TTransform<double> *)&this->field_0x1f0,(TTransform<double> *)local_228);
    }
    pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)local_228,&local_118);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_188._s_0,(TBox<double> *)local_228,pTVar9);
    uVar13 = local_1f8.m128d_f64[0]._0_4_;
    uVar14 = local_1f8.m128d_f64[0]._4_4_;
    uVar16 = local_228._0_4_;
    uVar17 = local_228._4_4_;
    uVar18 = local_228._8_4_;
    uVar19 = local_228._12_4_;
    uVar20 = local_228._16_4_;
    uVar21 = local_228._20_4_;
    uVar22 = TStack_210._0_4_;
    uVar23 = TStack_210._4_4_;
    uVar24 = TStack_210._8_4_;
    uVar25 = TStack_210._12_4_;
    uVar26 = TStack_210._16_4_;
    uVar27 = TStack_210._20_4_;
  }
  else {
    pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)&this->field_0x1f0,&local_118);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_1c8._s_0,(TBox<double> *)local_228,pTVar9);
    local_1c8._s_0.X = (double)local_228._0_8_;
    local_1c8._s_0.Y = (double)local_228._8_8_;
    local_1c8._s_0.Z = (double)local_228._16_8_;
    dStack_1b0 = TStack_210._s_0.X;
    local_1a8 = TStack_210._s_0.Y;
    dStack_1a0 = TStack_210._s_0.Z;
    local_198 = local_1f8.m128d_f64[0];
  }
  pUVar5 = *(UObject **)&this->field_0x5a0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 == (UObject *)0x0) goto LAB_147d0777e;
    UE::GC::MarkAsReachable(pUVar5);
  }
  if (pUVar5 != (UObject *)0x0) {
    this_00 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pTVar10 = UStaticMesh::GetBounds(this_00,(TBoxSphereBounds<double,double> *)local_228);
    dVar2 = (pTVar10->BoxExtent).field0_0x0._s_0.Y;
    dStack_138 = (pTVar10->BoxExtent).field0_0x0._s_0.X;
    dVar3 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
    local_150 = (pTVar10->Origin).field0_0x0._s_0.X - dStack_138;
    local_140 = (pTVar10->Origin).field0_0x0._s_0.Z - dVar3;
    dStack_138 = dStack_138 + (pTVar10->Origin).field0_0x0._s_0.X;
    dVar3 = dVar3 + (pTVar10->Origin).field0_0x0._s_0.Z;
    dStack_148 = (pTVar10->Origin).field0_0x0._s_0.Y - dVar2;
    local_158 = (double)CONCAT44(uVar14,uVar13);
    local_230 = &local_188;
    local_1f8.m128d_f64[0]._0_1_ = 1;
    local_238 = UE::Core::Private::Function::
                TFunctionRefCaller<`UHierarchicalInstancedStaticMeshComponent::GetInstancesOverlappingBox'::__l13::<lambda_1>,bool,UE::Math::TMatrix<double>_const_&>
                ::Call;
    local_130._8_4_ = SUB84(dVar3,0);
    local_130._0_8_ = dVar2 + (pTVar10->Origin).field0_0x0._s_0.Y;
    local_130._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_120 = local_1f8.m128d_f64[0];
    local_188._0_4_ = uVar16;
    local_188._4_4_ = uVar17;
    local_188._8_4_ = uVar18;
    local_188._12_4_ = uVar19;
    local_188._16_4_ = uVar20;
    local_188._20_4_ = uVar21;
    uStack_170 = uVar22;
    uStack_16c = uVar23;
    local_168 = uVar24;
    uStack_164 = uVar25;
    uStack_160 = uVar26;
    uStack_15c = uVar27;
    GatherInstancesOverlappingArea
              (this,(TBox<double> *)&local_1c8._s_0,0,
               (TFunctionRef<bool___cdecl(UE::Math::TMatrix<double>_const_&)> *)&local_238,
               &local_248);
  }
LAB_147d0777e:
  (__return_storage_ptr__->AllocatorInstance).Data = local_248.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_248.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_248.ArrayMax;
  return __return_storage_ptr__;
}

// GetInstancesOverlappingSphere @ 147d07e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UHierarchicalInstancedStaticMeshComponent::GetInstancesOverlappingSphere
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TVector<double> *param_1,
          float param_2,bool param_3)

{
  double dVar1;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  UStaticMesh *this_00;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  TMatrix<double> *pTVar18;
  TBoxSphereBounds<double,double> *pTVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 in_XMM2_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined1 auStackY_288 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_258;
  double local_248 [2];
  undefined1 local_238 [24];
  TVector<double>_u_0 TStack_220;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1b8 [24];
  TVector<double>_u_0 TStack_1a0;
  double local_188;
  double dStack_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  uVar16 = _UNK_15061cc8c;
  uVar15 = _UNK_15061cc88;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pTVar2 = (this->ClusterTreePtr).Object;
  if ((pTVar2 == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) || (pTVar2->ArrayNum == 0)
     ) {
    UInstancedStaticMeshComponent::GetInstancesOverlappingSphere
              ((UInstancedStaticMeshComponent *)this,__return_storage_ptr__,param_1,param_2,param_3)
    ;
    return __return_storage_ptr__;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (double)param_2;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  local_1c8 = (double)CONCAT71(local_1c8._1_7_,1);
  auVar29 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar43 = auVar29._0_8_;
  dVar44 = auVar29._8_8_;
  auVar11._4_8_ = in_XMM2_Qb;
  auVar11._0_4_ = auVar29._4_4_;
  auVar42._0_8_ = auVar11._0_8_ << 0x20;
  auVar42._8_4_ = auVar29._8_4_;
  auVar42._12_4_ = auVar29._12_4_;
  local_1f8._s_0.X = dVar43 - dVar6;
  dStack_1e0 = dVar43 + dVar6;
  local_1f8._s_0.Y = auVar42._8_8_ - dVar6;
  local_1d8 = auVar42._8_8_ + dVar6;
  local_1f8._s_0.Z = dVar1 - dVar6;
  dStack_1d0 = dVar1 + dVar6;
  local_238._16_8_ = dVar1;
  TStack_220._s_0.X = dVar6;
  if (param_3) {
    auVar40._0_8_ =
         (double)CONCAT44(*(uint *)&this->field_0x234 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                          ,*(uint *)&this->field_0x230 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar40._8_4_ = *(uint *)&this->field_0x238 & _UNK_15061cc88;
    auVar40._12_4_ = *(uint *)&this->field_0x23c & _UNK_15061cc8c;
    auVar38._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(*(uint *)&this->field_0x24c & _UNK_15061cc8c,
                           *(uint *)&this->field_0x248 & _UNK_15061cc88));
    auVar38._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(*(uint *)&this->field_0x244 &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)&this->field_0x240 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar20 = movmskpd((int)this,auVar38);
    auVar29._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar40._8_8_);
    auVar29._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar40._0_8_);
    iVar17 = movmskpd(0,auVar29);
    if ((uVar20 & 0x3fffffff) == 0 && iVar17 == 0) {
      local_1b8._0_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_1b8._4_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_1b8._8_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_1b8._12_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_1b8._16_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_1b8._20_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      TStack_1a0._0_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      TStack_1a0._4_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_178 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uStack_174 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uStack_170 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uStack_16c = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      local_168 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uStack_164 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uStack_160 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uStack_15c = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_248 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_238._0_16_ =
           (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast
                ((TTransform<double> *)&this->field_0x1f0,(TTransform<double> *)local_1b8);
      local_238._8_8_ = dStack_180;
      local_238._0_8_ = local_188;
      local_248[0]._4_4_ = TStack_1a0._12_4_;
      local_248[0]._0_4_ = TStack_1a0._8_4_;
      local_248[1] = TStack_1a0._s_0.Z;
    }
    uVar20 = local_178 & uVar13;
    uVar50 = uStack_174 & uVar14;
    uVar51 = uStack_170 & uVar15;
    uVar52 = uStack_16c & uVar16;
    dVar43 = (double)CONCAT44(uStack_174,local_178) * dVar43;
    dVar44 = (double)CONCAT44(uStack_16c,uStack_170) * dVar44;
    dVar1 = dVar1 * (double)CONCAT44(uStack_164,local_168);
    dVar5 = (double)CONCAT44(uStack_15c,uStack_160) * 0.0;
    local_168 = local_168 & uVar13;
    uStack_164 = uStack_164 & uVar14;
    uStack_160 = uStack_160 & uVar15;
    uStack_15c = uStack_15c & uVar16;
    dVar39 = (double)CONCAT44(local_1b8._12_4_,local_1b8._8_4_);
    auVar41._4_4_ = local_1b8._4_4_;
    auVar41._0_4_ = local_1b8._0_4_;
    auVar41._8_4_ = local_1b8._8_4_;
    auVar41._12_4_ = local_1b8._12_4_;
    auVar46._8_4_ = SUB84(dVar44,0);
    auVar46._0_8_ = dVar43;
    uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
    auVar46._12_4_ = uVar45;
    auVar21._8_4_ = local_1b8._16_4_;
    auVar21._0_8_ = dVar39;
    auVar21._12_4_ = local_1b8._20_4_;
    auVar10._4_4_ = local_1b8._20_4_;
    auVar10._0_4_ = local_1b8._16_4_;
    auVar10._8_4_ = TStack_1a0._0_4_;
    auVar10._12_4_ = TStack_1a0._4_4_;
    auVar42 = blendpd(auVar41,auVar10,2);
    auVar47._0_8_ =
         auVar46._8_8_ * (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_) - dVar39 * dVar43;
    auVar47._8_8_ =
         dVar1 * (double)CONCAT44(local_1b8._12_4_,local_1b8._8_4_) - auVar21._8_8_ * dVar44;
    auVar28._8_4_ = SUB84(dVar44,0);
    auVar28._0_8_ = dVar43;
    auVar28._12_4_ = uVar45;
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar29 = blendpd(auVar28,auVar4,2);
    auVar30._0_8_ =
         auVar29._0_8_ * (double)CONCAT44(local_1b8._20_4_,local_1b8._16_4_) - auVar42._0_8_ * dVar1
    ;
    auVar30._8_8_ =
         auVar29._8_8_ * (double)CONCAT44(TStack_1a0._4_4_,TStack_1a0._0_4_) - auVar42._8_8_ * dVar5
    ;
    auVar29 = blendpd(auVar47,auVar30,2);
    dVar5 = auVar47._8_8_ + auVar47._8_8_;
    dVar7 = auVar30._0_8_ + auVar30._0_8_;
    uVar45 = SUB84(dVar7,0);
    uVar49 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar48._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar48._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar35._8_4_ = uVar45;
    auVar35._0_8_ = dVar5;
    auVar35._12_4_ = uVar49;
    auVar22._8_4_ = uVar45;
    auVar22._0_8_ = dVar5;
    auVar22._12_4_ = uVar49;
    auVar31._8_4_ = uVar45;
    auVar31._0_8_ = dVar5;
    auVar31._12_4_ = uVar49;
    auVar29 = blendpd(auVar31,auVar48,2);
    auVar36._0_8_ =
         auVar35._8_8_ * (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_) - dVar5 * dVar39;
    auVar36._8_8_ =
         auVar48._0_8_ * (double)CONCAT44(local_1b8._12_4_,local_1b8._8_4_) -
         auVar22._8_8_ * (double)CONCAT44(local_1b8._20_4_,local_1b8._16_4_);
    auVar23._8_4_ = SUB84(auVar48._8_8_,0);
    auVar23._0_8_ = auVar48._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar32._0_8_ =
         auVar29._0_8_ * (double)CONCAT44(local_1b8._20_4_,local_1b8._16_4_) -
         auVar48._0_8_ * auVar42._0_8_;
    auVar32._8_8_ =
         auVar29._8_8_ * (double)CONCAT44(TStack_1a0._4_4_,TStack_1a0._0_4_) -
         auVar23._8_8_ * auVar42._8_8_;
    auVar24._8_4_ = SUB84(auVar36._8_8_,0);
    auVar24._0_8_ = auVar36._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
    auVar42 = blendpd(auVar36,auVar32,2);
    auVar37._4_4_ = uVar50;
    auVar37._0_4_ = uVar20;
    auVar37._8_4_ = uVar51;
    auVar37._12_4_ = uVar52;
    auVar33._4_4_ = uStack_164;
    auVar33._0_4_ = local_168;
    auVar33._12_4_ = uVar50;
    auVar33._8_4_ = uVar20;
    auVar25._4_4_ = uVar50;
    auVar25._0_4_ = uVar20;
    auVar25._8_4_ = uVar51;
    auVar25._12_4_ = uVar52;
    dVar43 = dVar5 * (double)CONCAT44(TStack_1a0._4_4_,TStack_1a0._0_4_) + dVar43 + auVar24._8_8_ +
             local_248[0];
    dVar44 = dVar7 * (double)CONCAT44(TStack_1a0._4_4_,TStack_1a0._0_4_) + dVar44 + auVar32._0_8_ +
             local_248[1];
    auVar26._12_4_ = uStack_164;
    auVar26._8_4_ = local_168;
    auVar26._0_8_ = auVar25._8_8_;
    auVar29 = maxpd(auVar37,auVar26);
    auVar27._4_4_ = uVar50;
    auVar27._0_4_ = uVar20;
    auVar27._8_4_ = uVar51;
    auVar27._12_4_ = uVar52;
    auVar8._4_4_ = uVar52;
    auVar8._0_4_ = uVar51;
    auVar38 = maxpd(auVar29,auVar33);
    auVar9._4_4_ = uStack_164;
    auVar9._0_4_ = local_168;
    auVar9._8_4_ = uStack_160;
    auVar9._12_4_ = uStack_15c;
    auVar29 = blendpd(auVar27,auVar9,2);
    auVar34._4_4_ = uStack_164;
    auVar34._0_4_ = local_168;
    auVar34._8_4_ = uStack_160;
    auVar34._12_4_ = uStack_15c;
    auVar29 = maxpd(auVar34,auVar29);
    auVar8._8_4_ = uStack_160;
    auVar8._12_4_ = uStack_15c;
    maxpd(auVar29,auVar8);
    dVar1 = (double)CONCAT44(TStack_1a0._4_4_,TStack_1a0._0_4_) * auVar48._0_8_ + dVar1 +
            auVar42._0_8_ + (double)local_238._0_8_;
    uVar12 = (double)(float)auVar38._0_8_ * dVar6;
  }
  else {
    pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)&this->field_0x1f0,&local_158);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_1f8._s_0,(TBox<double> *)local_1b8,pTVar18);
    local_1f8._s_0.X = (double)local_1b8._0_8_;
    local_1f8._s_0.Y = (double)local_1b8._8_8_;
    local_1d8 = (double)CONCAT44(TStack_1a0._12_4_,TStack_1a0._8_4_);
    local_1f8._s_0.Z = (double)local_1b8._16_8_;
    dStack_1e0 = TStack_1a0._s_0.X;
    dStack_1d0 = TStack_1a0._s_0.Z;
    local_1c8 = local_188;
    dVar1 = (double)local_238._16_8_;
    uVar12 = TStack_220._s_0.X;
  }
  pUVar3 = *(UObject **)&this->field_0x5a0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 == (UObject *)0x0) goto LAB_147d08292;
    UE::GC::MarkAsReachable(pUVar3);
  }
  if (pUVar3 != (UObject *)0x0) {
    this_00 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_1b8._8_4_ = SUB84(dVar44,0);
    local_1b8._0_8_ = dVar43;
    local_1b8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    TStack_1a0._0_4_ = (int)uVar12;
    local_1b8._16_8_ = dVar1;
    TStack_1a0._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
    pTVar19 = UStaticMesh::GetBounds(this_00,(TBoxSphereBounds<double,double> *)local_238);
    TStack_1a0._8_4_ = (undefined4)pTVar19->SphereRadius;
    local_238._8_8_ = local_1b8;
    local_238._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UHierarchicalInstancedStaticMeshComponent::GetInstancesOverlappingSphere'::__l13::<lambda_1>,bool,UE::Math::TMatrix<double>_const_&>
         ::Call;
    GatherInstancesOverlappingArea
              (this,(TBox<double> *)&local_1f8._s_0,0,
               (TFunctionRef<bool___cdecl(UE::Math::TMatrix<double>_const_&)> *)local_238,&local_258
              );
  }
LAB_147d08292:
  (__return_storage_ptr__->AllocatorInstance).Data = local_258.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_258.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_258.ArrayMax;
  return __return_storage_ptr__;
}

// GetNavigationPerInstanceTransforms @ 147d09840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::GetNavigationPerInstanceTransforms
          (UHierarchicalInstancedStaticMeshComponent *this,TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  TBox<double> *pTVar13;
  longlong lVar14;
  TMatrix<double> *pTVar15;
  TMatrix<double> *pTVar16;
  double dVar17;
  undefined1 auStack_268 [32];
  TTransform<double> *pTStack_248;
  TTransform<double> *pTStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [8];
  double dStack_210;
  double dStack_208;
  double dStack_200;
  TVector<double>_u_0 TStack_1f8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  TTransform<double> TStack_1b8;
  TBox<double> TStack_158;
  TTransform<double> TStack_118;
  TBox<double> TStack_b8;
  ulonglong uStack_80;
  
  uStack_80 = __security_cookie.value ^ (ulonglong)auStack_268;
  FInstancedStaticMeshComponentHelper::GetInstanceNavigationBounds<UInstancedStaticMeshComponent>
            (&TStack_158,(UInstancedStaticMeshComponent *)this);
  if (TStack_158.IsValid != '\0') {
    UE::Math::TBox<double>::InverseTransformBy
              (param_1,(TBox<double> *)&TStack_1f8._s_0,(TTransform<double> *)&this->field_0x1f0);
    dVar10 = __real_3fe0000000000000;
    iVar4 = *(int *)&this->field_0x660;
    pTVar15 = *(TMatrix<double> **)&this->field_0x658;
    pTVar16 = pTVar15 + iVar4;
    while( true ) {
      if (*(int *)&this->field_0x660 != iVar4) {
        auStack_218[0] = 0;
        `TCheckedPointerIterator<FInstancedStaticMeshInstanceData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_218);
      }
      if (pTVar15 == pTVar16) break;
      UE::Math::TTransform<double>::SetFromMatrix(&TStack_118,pTVar15);
      dStack_210 = TStack_118.Scale3D.XY.m128d_f64[0];
      dStack_208 = TStack_118.Scale3D.XY.m128d_f64[1];
      dStack_200 = TStack_118.Scale3D.ZW.m128d_f64[0];
      if (((TStack_118.Scale3D.XY.m128d_f64[0] != 0.0) ||
          (TStack_118.Scale3D.XY.m128d_f64[1] != 0.0)) ||
         (TStack_118.Scale3D.ZW.m128d_f64[0] != 0.0)) {
        pTVar13 = UE::Math::TBox<double>::TransformBy(&TStack_158,&TStack_b8,pTVar15);
        dVar1 = (pTVar13->Min).field0_0x0._s_0.Z;
        dVar2 = (pTVar13->Min).field0_0x0._s_0.X;
        dVar3 = (pTVar13->Min).field0_0x0._s_0.Y;
        dVar9 = ((pTVar13->Max).field0_0x0._s_0.Z - dVar1) * dVar10;
        dVar8 = ((pTVar13->Max).field0_0x0._s_0.Y - dVar3) * dVar10;
        dVar17 = ((pTVar13->Max).field0_0x0._s_0.X - dVar2) * dVar10;
        if ((((TStack_1f8._s_0.X <= dVar2 + dVar17 + dVar17) && (dVar2 <= dStack_1e0)) &&
            ((TStack_1f8._s_0.Y <= dVar3 + dVar8 + dVar8 &&
             ((dVar3 <= dStack_1d8 && (TStack_1f8._s_0.Z <= dVar1 + dVar9 + dVar9)))))) &&
           (dVar1 <= dStack_1d0)) {
          TStack_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          TStack_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
          ;
          TStack_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          TStack_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          TStack_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
          ;
          TStack_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          TStack_1b8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          TStack_1b8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          TStack_1b8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          TStack_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          TStack_1b8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          TStack_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          TStack_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          TStack_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          TStack_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          TStack_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          TStack_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          TStack_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&TStack_1b8,&TStack_118,(TTransform<double> *)&this->field_0x1f0);
          pTVar5 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
          if ((pTVar5 <= &TStack_1b8) && (&TStack_1b8 < pTVar5 + param_2->ArrayMax)) {
            lStack_230 = (longlong)param_2->ArrayNum;
            uStack_228 = 0x60;
            pTStack_248 = &TStack_1b8;
            pTStack_240 = pTVar5;
            lStack_238 = (longlong)param_2->ArrayMax;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar12 = param_2->ArrayNum;
          if (iVar12 == param_2->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar12 + 1;
          pFVar6 = (param_2->AllocatorInstance).Data;
          lVar14 = (longlong)iVar12 * 0x60;
          *(double *)(pFVar6 + lVar14) = TStack_1b8.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 8) = TStack_1b8.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x10) = TStack_1b8.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x10 + 8) = TStack_1b8.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x20) = TStack_1b8.Translation.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x20 + 8) = TStack_1b8.Translation.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x30) = TStack_1b8.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x30 + 8) = TStack_1b8.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x40) = TStack_1b8.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x40 + 8) = TStack_1b8.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x50) = TStack_1b8.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x50 + 8) = TStack_1b8.Scale3D.ZW.m128d_f64[1];
        }
      }
      pTVar15 = pTVar15 + 1;
    }
  }
  return;
}

// GetOverlappingBoxCount @ 147d0a170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UHierarchicalInstancedStaticMeshComponent::GetOverlappingBoxCount
          (UHierarchicalInstancedStaticMeshComponent *this,TBox<double> *param_1)

{
  double *pdVar1;
  UStaticMesh *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ForAnyElementType this_01;
  int iVar17;
  TTransform<double> *pTVar18;
  double dVar19;
  double dVar20;
  undefined1 local_1c8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1c0;
  TVector<double>_u_0 local_1b0;
  double local_198;
  double dStack_190;
  double local_188;
  TMatrix<double> local_178 [2];
  
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  GatherInstanceTransformsInArea(this,param_1,0,&local_1c0);
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UStaticMesh::GetBounds(this_00,(TBoxSphereBounds<double,double> *)&local_1b0._s_0);
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar14 = local_1c0.ArrayNum;
  uVar16 = (ulonglong)local_1c0.ArrayNum;
  pTVar18 = (TTransform<double> *)(local_1c0.AllocatorInstance.Data + uVar16 * 0x60);
  this_01.Data = local_1c0.AllocatorInstance.Data;
  iVar15 = 0;
  while( true ) {
    iVar17 = iVar15;
    if ((int)uVar16 != iVar14) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1c8);
    }
    if ((TTransform<double> *)this_01.Data == pTVar18) break;
    UE::Math::TTransform<double>::ToMatrixWithScale((TTransform<double> *)this_01.Data,local_178);
    dVar4 = (double)CONCAT44((uint)((ulonglong)(dStack_190 * local_178[0].M[1][0]) >> 0x20) & uVar11
                             ,SUB84(dStack_190 * local_178[0].M[1][0],0) & uVar10) +
            (double)CONCAT44((uint)((ulonglong)(local_198 * local_178[0].M[0][0]) >> 0x20) & uVar11,
                             SUB84(local_198 * local_178[0].M[0][0],0) & uVar10) +
            (double)CONCAT44((uint)((ulonglong)(local_188 * local_178[0].M[2][0]) >> 0x20) & uVar11,
                             SUB84(local_188 * local_178[0].M[2][0],0) & uVar10);
    dVar5 = (double)CONCAT44((uint)((ulonglong)(dStack_190 * local_178[0].M[1][1]) >> 0x20) & uVar13
                             ,SUB84(dStack_190 * local_178[0].M[1][1],0) & uVar12) +
            (double)CONCAT44((uint)((ulonglong)(local_198 * local_178[0].M[0][1]) >> 0x20) & uVar13,
                             SUB84(local_198 * local_178[0].M[0][1],0) & uVar12) +
            (double)CONCAT44((uint)((ulonglong)(local_188 * local_178[0].M[2][1]) >> 0x20) & uVar13,
                             SUB84(local_188 * local_178[0].M[2][1],0) & uVar12);
    dVar6 = (double)CONCAT44((uint)((ulonglong)(dStack_190 * local_178[0].M[1][2]) >> 0x20) & uVar11
                             ,SUB84(dStack_190 * local_178[0].M[1][2],0) & uVar10) +
            (double)CONCAT44((uint)((ulonglong)(local_198 * local_178[0].M[0][2]) >> 0x20) & uVar11,
                             SUB84(local_198 * local_178[0].M[0][2],0) & uVar10) +
            (double)CONCAT44((uint)((ulonglong)(local_188 * local_178[0].M[2][2]) >> 0x20) & uVar11,
                             SUB84(local_188 * local_178[0].M[2][2],0) & uVar10);
    dVar2 = local_1b0._s_0.Y * local_178[0].M[1][0] + local_1b0._s_0.X * local_178[0].M[0][0] +
            local_1b0._s_0.Z * local_178[0].M[2][0] + local_178[0].M[3][0];
    dVar3 = local_1b0._s_0.Y * local_178[0].M[1][1] + local_1b0._s_0.X * local_178[0].M[0][1] +
            local_1b0._s_0.Z * local_178[0].M[2][1] + local_178[0].M[3][1];
    dVar7 = local_1b0._s_0.Y * local_178[0].M[1][2] + local_1b0._s_0.X * local_178[0].M[0][2] +
            local_1b0._s_0.Z * local_178[0].M[2][2] + local_178[0].M[3][2];
    dVar20 = dVar2 - dVar4;
    dVar19 = dVar3 - dVar5;
    dVar8 = dVar7 - dVar6;
    if ((((dVar2 + dVar4 < (param_1->Min).field0_0x0._s_0.X) ||
         ((param_1->Max).field0_0x0._s_0.X <= dVar20 && dVar20 != (param_1->Max).field0_0x0._s_0.X))
        || (dVar3 + dVar5 < (param_1->Min).field0_0x0._s_0.Y)) ||
       (((pdVar1 = &(param_1->Max).field0_0x0._s_0.Y, *pdVar1 <= dVar19 && dVar19 != *pdVar1 ||
         (dVar7 + dVar6 < (param_1->Min).field0_0x0._s_0.Z)) ||
        (pdVar1 = &(param_1->Max).field0_0x0._s_0.Z, *pdVar1 <= dVar8 && dVar8 != *pdVar1)))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    this_01.Data = this_01.Data + 0x60;
    uVar16 = local_1c0._8_8_ & 0xffffffff;
    iVar15 = iVar17 + 1;
    if (!bVar9) {
      iVar15 = iVar17;
    }
  }
  if ((TTransform<double> *)local_1c0.AllocatorInstance.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  return iVar17;
}

// GetOverlappingBoxTransforms @ 147d0a480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::GetOverlappingBoxTransforms
          (UHierarchicalInstancedStaticMeshComponent *this,TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  UStaticMesh *this_00;
  <lambda_1> local_58;
  TBoxSphereBounds<double,double> local_48;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  GatherInstanceTransformsInArea(this,param_1,0,param_2);
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UStaticMesh::GetBounds(this_00,&local_48);
  local_58.MeshBounds = &local_48;
  local_58.Box = param_1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UHierarchicalInstancedStaticMeshComponent::GetOverlappingBoxTransforms_::__l2::<lambda_1>_>
            (param_2,&local_58,Default);
  return;
}

// GetOverlappingSphereCount @ 147d0a540

int __thiscall
UHierarchicalInstancedStaticMeshComponent::GetOverlappingSphereCount
          (UHierarchicalInstancedStaticMeshComponent *this,TSphere<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  UStaticMesh *this_00;
  double dVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_res8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_e8;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8;
  TBoxSphereBounds<double,double> local_88 [2];
  
  dVar2 = param_1->W;
  local_c0 = (param_1->Center).field0_0x0._s_0.X;
  local_b8 = (param_1->Center).field0_0x0._s_0.Y;
  local_b0 = (param_1->Center).field0_0x0._s_0.Z;
  local_d8._s_0.X = local_c0 - dVar2;
  local_c0 = local_c0 + dVar2;
  local_d8._s_0.Y = local_b8 - dVar2;
  local_b8 = local_b8 + dVar2;
  local_d8._s_0.Z = local_b0 - dVar2;
  local_b0 = local_b0 + dVar2;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_a8 = 1;
  GatherInstanceTransformsInArea(this,(TBox<double> *)&local_d8._s_0,0,&local_e8);
  this_00 = *(UStaticMesh **)&this->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UStaticMesh::GetBounds(this_00,local_88);
  dVar2 = __real_3f1a36e2e0000000;
  iVar7 = local_e8.ArrayNum;
  uVar9 = (ulonglong)local_e8.ArrayNum;
  pFVar12 = local_e8.AllocatorInstance.Data + 0x40;
  pFVar10 = local_e8.AllocatorInstance.Data + uVar9 * 0x60;
  iVar8 = 0;
  while( true ) {
    iVar11 = iVar8;
    if ((int)uVar9 != iVar7) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      uVar9 = local_e8._8_8_ & 0xffffffff;
    }
    if (pFVar12 + -0x40 == pFVar10) break;
    auVar3 = *(undefined1 (*) [16])pFVar12;
    pFVar6 = pFVar12 + -0x18;
    auVar4 = *(undefined1 (*) [16])(pFVar12 + 0x10);
    pFVar1 = pFVar12 + -0x10;
    dVar14 = (param_1->Center).field0_0x0._s_0.X - *(double *)(pFVar12 + -0x20);
    pFVar12 = pFVar12 + 0x60;
    dVar13 = (param_1->Center).field0_0x0._s_0.Z - *(double *)pFVar1;
    dVar15 = (param_1->Center).field0_0x0._s_0.Y - *(double *)pFVar6;
    uVar16 = auVar3._0_4_;
    uVar17 = auVar3._4_4_;
    if (auVar3._0_8_ <= auVar3._8_8_) {
      uVar16 = auVar3._8_4_;
      uVar17 = auVar3._12_4_;
    }
    if ((double)CONCAT44(uVar17,uVar16) <= auVar4._0_8_) {
      uVar16 = auVar4._0_4_;
      uVar17 = auVar4._4_4_;
    }
    dVar5 = (double)CONCAT44(uVar17,uVar16) * local_88[0].SphereRadius + param_1->W + dVar2;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    iVar8 = iVar11 + 1;
    if (dVar5 * dVar5 < dVar15 * dVar15 + dVar14 * dVar14 + dVar13 * dVar13) {
      iVar8 = iVar11;
    }
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return iVar11;
}

// GetResourceSizeEx @ 147d0da10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::GetResourceSizeEx
          (UHierarchicalInstancedStaticMeshComponent *this,FResourceSizeEx *param_1)

{
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UInstancedStaticMeshComponent::GetResourceSizeEx((UInstancedStaticMeshComponent *)this,param_1);
  pTVar1 = (this->ClusterTreePtr).Object;
  if (pTVar1 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)pTVar1->ArrayMax << 6);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->SortedInstances).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->UnbuiltInstanceBoundsList).ArrayMax * 0x38);
  return;
}

// GetTree @ 147d0f970

void __thiscall
UHierarchicalInstancedStaticMeshComponent::GetTree
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<FClusterNode,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  
  if (((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = (this->ClusterTreePtr).Object;
  if (param_1 != pTVar3) {
    iVar2 = pTVar3->ArrayNum;
    piVar1 = &param_1->ArrayMax;
    _Src = (pTVar3->AllocatorInstance).Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,4,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)iVar2 << 6);
    }
  }
  return;
}

// GetVertsForLOD @ 147d13760

int __thiscall
UHierarchicalInstancedStaticMeshComponent::GetVertsForLOD
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  int iVar3;
  
  if (*(UObject **)&this->field_0x5a0 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
    }
    pUVar1 = *(UStaticMesh **)&this->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    bVar2 = UStaticMesh::HasValidRenderData(pUVar1,true,param_1);
    if (bVar2) {
      pUVar1 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      iVar3 = UStaticMesh::GetNumVertices(pUVar1,param_1);
      return iVar3;
    }
  }
  return 0;
}

// OnPostLoadPerInstanceData @ 147d1bce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::OnPostLoadPerInstanceData
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<float> *pTVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FoliagePostLoad> FVar11;
  UWorld *pUVar12;
  ULevel *pUVar13;
  ULevel *pUVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  bool bVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_58 [2];
  
  bVar9 = false;
  FVar11 = StatPtr_STAT_FoliagePostLoad;
  if (StatPtr_STAT_FoliagePostLoad == (FThreadSafeStaticStat<FStat_STAT_FoliagePostLoad>)0x0) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_FoliagePostLoad");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FoliagePostLoad>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliagePostLoad,*pFVar10,
                        L"Foliage Post Load","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0xc06);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = true;
      goto LAB_147d1be38;
    }
  }
  bVar4 = false;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
LAB_147d1be38:
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3079,
               "UHierarchicalInstancedStaticMeshComponent::OnPostLoadPerInstanceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
               ,0xc07);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3079);
  }
  if (((*(uint *)&this->field_0x8 & 0x30) == 0) &&
     (cVar7 = (**(code **)(*(longlong *)&this->field_0x258 + 0x10))(), cVar7 == '\0')) {
    if ((this->bEnableDensityScaling != 0) &&
       ((*(longlong *)&this->field_0xb0 != 0 ||
        (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar12 != (UWorld *)0x0)))) {
      pUVar12 = *(UWorld **)&this->field_0xb0;
      if (pUVar12 == (UWorld *)0x0) {
        pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      bVar8 = UWorld::IsGameWorld(pUVar12);
      pTVar6 = CVarFoliageDensityScale.Ref;
      if (bVar8) {
        bVar9 = IsInParallelGameThread();
        if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar19 = pTVar6->ShadowedValue[0];
        if (__real_3f800000 <= pTVar6->ShadowedValue[0]) {
          fVar19 = __real_3f800000;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        bVar9 = fVar19 < __real_3f800000;
        this->CurrentDensityScaling = fVar19;
      }
    }
    if (this->CurrentDensityScaling == 0.0) {
      (**(code **)(*(longlong *)this + 0xc38))(this);
    }
    else {
      if (bVar9 == false) {
        if ((*(int *)&this->field_0x660 < 1) ||
           (*(int *)&this->field_0x660 == *(int *)&this->field_0x728)) {
          if (((*(AActor **)&this->field_0xa8 == (AActor *)0x0) ||
              ((pUVar13 = AActor::GetLevel(*(AActor **)&this->field_0xa8), pUVar13 == (ULevel *)0x0
               || (pUVar12 = (pUVar13->OwningWorld).field0_0x0.DebugPtr, pUVar12 == (UWorld *)0x0)))
              ) || ((pUVar14 = UWorld::GetActiveLightingScenario(pUVar12), pUVar14 == (ULevel *)0x0
                    || (pUVar14 = UWorld::GetActiveLightingScenario(pUVar12), pUVar14 == pUVar13))))
          {
            this->NumBuiltRenderInstances = this->NumBuiltInstances;
            this->InstanceCountToRender = this->NumBuiltInstances;
          }
          else {
            bVar9 = true;
          }
        }
        else {
          bVar9 = true;
        }
      }
      BuildTreeIfOutdated(this,true,bVar9);
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_58[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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

// PartialNavigationUpdate @ 147d1d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::PartialNavigationUpdate
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined4 uStack_e0;
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5452,
               "UInstancedStaticMeshComponent::PartialNavigationUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x154c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5452);
  }
  cVar1 = (**(code **)(*(longlong *)this + 0x4e0))(this);
  if (cVar1 != '\0') {
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = UInstancedStaticMeshComponent::GetInstanceTransform
                      ((UInstancedStaticMeshComponent *)this,param_1,&local_d8,true);
    if (bVar2) {
      local_e8 = &local_78;
      local_78 = local_d8.Rotation.XY.m128d_f64[0];
      dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
      local_58 = local_d8.Translation.XY.m128d_f64[0];
      dStack_50 = local_d8.Translation.XY.m128d_f64[1];
      local_68 = local_d8.Rotation.ZW.m128d_f64[0];
      dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
      local_38 = local_d8.Scale3D.XY.m128d_f64[0];
      dStack_30 = local_d8.Scale3D.XY.m128d_f64[1];
      local_48 = local_d8.Translation.ZW.m128d_f64[0];
      dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
      uStack_e0 = 1;
      local_28 = local_d8.Scale3D.ZW.m128d_f64[0]._0_4_;
      uStack_24 = local_d8.Scale3D.ZW.m128d_f64[0]._4_4_;
      uStack_20 = local_d8.Scale3D.ZW.m128d_f64[1]._0_4_;
      uStack_1c = local_d8.Scale3D.ZW.m128d_f64[1]._4_4_;
      (**(code **)(*(longlong *)this + 0xc78))(this,&local_e8);
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostBuildStats @ 147d1dab0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::PostBuildStats
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  return;
}

// PostEditImport @ 147d1dac0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::PostEditImport
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  BuildTreeIfOutdated(this,false,true);
  return;
}

// PostLoad @ 147d1db50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::PostLoad(UHierarchicalInstancedStaticMeshComponent *this)

{
  UMapBuildDataRegistry *this_00;
  ULevel *pUVar1;
  
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel(*(AActor **)&this->field_0xa8);
    if ((pUVar1 != (ULevel *)0x0) &&
       (this_00 = (pUVar1->MapBuildData).field0_0x0.DebugPtr,
       this_00 != (UMapBuildDataRegistry *)0x0)) {
      UObject::ConditionalPostLoad((UObject *)this_00);
    }
  }
  UInstancedStaticMeshComponent::PostLoad((UInstancedStaticMeshComponent *)this);
  return;
}

// PreAllocateInstancesMemory @ 147d1e8c0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::PreAllocateInstancesMemory
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)&this->field_0x660 + param_1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*(int *)&this->field_0x664 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar2,(ForAnyElementType *)&this->field_0x658,*(int *)&this->field_0x660,
               (int *)&this->field_0x664);
  }
  uVar2 = param_1 * *(int *)&this->field_0x6e0 + *(int *)&this->field_0x6f0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*(int *)&this->field_0x6f4 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)&this->field_0x6e8,*(int *)&this->field_0x6f0,
               (int *)&this->field_0x6f4);
  }
  uVar2 = *(int *)&this->field_0x728 + param_1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*(int *)&this->field_0x72c < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)&this->field_0x720,*(int *)&this->field_0x728,
               (int *)&this->field_0x72c);
  }
  iVar1 = (this->UnbuiltInstanceBoundsList).ArrayNum;
  uVar2 = iVar1 + param_1;
  if (-1 < (int)uVar2) {
    if ((this->UnbuiltInstanceBoundsList).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar2,&(this->UnbuiltInstanceBoundsList).AllocatorInstance,iVar1,
                 &(this->UnbuiltInstanceBoundsList).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// PropagateLightingScenarioChange @ 147d1f350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::PropagateLightingScenarioChange
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FString local_38;
  FComponentRecreateRenderStateContext local_28;
  
  local_28.ScenesToUpdateAllPrimitiveSceneInfos =
       (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
  local_28.Component = (UActorComponent *)0x0;
  local_28.ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((this == (UHierarchicalInstancedStaticMeshComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->field_0x98 & 3) == 3) {
    (**(code **)(*(longlong *)this + 0x3a8))(this);
    local_28.Component = (UActorComponent *)this;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              ((UActorComponent *)this,local_28.ScenesToUpdateAllPrimitiveSceneInfos);
  }
  FPrimitiveInstanceDataManager::BakedLightingDataChangedAll
            ((FPrimitiveInstanceDataManager *)&this->field_0x7a0);
  FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext(&local_28);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  BuildTreeIfOutdated(this,true,true);
  return;
}

// RemoveInstance @ 147d22e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::RemoveInstance
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_HISMCRemoveInstance> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  LARGE_INTEGER local_res8;
  int local_res10 [2];
  FName local_res18 [2];
  undefined1 local_38 [16];
  
  if ((param_1 < 0) || (*(int *)&this->field_0x660 <= param_1)) {
    return false;
  }
  FVar6 = StatPtr_STAT_HISMCRemoveInstance;
  local_res10[0] = param_1;
  if (StatPtr_STAT_HISMCRemoveInstance == (FThreadSafeStaticStat<FStat_STAT_HISMCRemoveInstance>)0x0
     ) {
    pFVar5 = ::FName::FName(local_res18,"STAT_HISMCRemoveInstance");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_HISMCRemoveInstance>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HISMCRemoveInstance,*pFVar5,
                       L"HISMC_RemoveInstance","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0x8ef);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_147d22fee;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_147d22fee:
  local_38._8_4_ = 1;
  local_38._0_8_ = local_res10;
  RemoveInstancesInternal(this,(TArrayView<int_const_,int> *)local_38);
  if (this->bAutoRebuildTreeOnInstanceChanges) {
    BuildTreeIfOutdated(this,true,false);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
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
      local_38._8_8_ = (ulonglong)FVar9 & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_38[0] = local_res8.s.LowPart._0_1_;
      local_38[1] = local_res8.s.LowPart._1_1_;
      local_38[2] = local_res8.s.LowPart._2_1_;
      local_38[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_38);
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
  return true;
}

// RemoveInstances @ 147d23f20

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::RemoveInstances
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147d23f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0xc28))(this,param_1,0);
  return (bool)uVar1;
}

// RemoveInstances @ 147d23f40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::RemoveInstances
          (UHierarchicalInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_HISMCRemoveInstance> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar9;
  FName FVar10;
  longlong lVar11;
  LARGE_INTEGER local_res10 [2];
  FLLMScope local_res20 [2];
  FName local_68;
  FMemScope local_60;
  FName local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  FLLMScope::FLLMScope(local_res20,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_60,StaticMesh,true);
  if (param_1->ArrayNum == 0) {
    bVar5 = true;
    goto LAB_147d24253;
  }
  FVar8 = StatPtr_STAT_HISMCRemoveInstance;
  if (StatPtr_STAT_HISMCRemoveInstance == (FThreadSafeStaticStat<FStat_STAT_HISMCRemoveInstance>)0x0
     ) {
    pFVar7 = ::FName::FName(&local_68,"STAT_HISMCRemoveInstance");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_HISMCRemoveInstance>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HISMCRemoveInstance,*pFVar7,
                       L"HISMC_RemoveInstance","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar6 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar6 == 0)) {
LAB_147d240c2:
    bVar3 = false;
    FVar10 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0].s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10[0]._0_4_ = FVar9.Value;
        local_res10[0]._4_4_ = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10[0].s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0x8c2);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147d240c2;
    local_res10[0]._0_4_ = FVar9.Value;
    local_res10[0]._4_4_ = uVar6;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar3 = true;
  }
  local_68 = (FName)this;
  if (param_2) {
    bVar5 = `UHierarchicalInstancedStaticMeshComponent::RemoveInstances'::__l2::<lambda_1>::
            operator()(&local_68,param_1);
  }
  else {
    local_48.ArrayNum = param_1->ArrayNum;
    lVar11 = (longlong)local_48.ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.ArrayNum == 0) {
      local_48.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
                 &local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data,_Src,lVar11 << 2);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
              ((int *)local_48.AllocatorInstance.Data,local_48.ArrayNum,
               (FIdentityFunctor)local_res10[0]._0_1_,(TGreater<int> *)local_res10);
    bVar5 = `UHierarchicalInstancedStaticMeshComponent::RemoveInstances'::__l2::<lambda_1>::
            operator()(&local_68,&local_48);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.ArrayNum = (int)FVar10.ComparisonIndex.Value;
      local_48.ArrayMax = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res10);
      local_48.AllocatorInstance.Data =
           (FScriptContainerElement *)(ulonglong)(uint)local_res10[0]._0_4_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_48);
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
LAB_147d24253:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return bVar5;
}

// RemoveInstancesInternal @ 147d244a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::RemoveInstancesInternal
          (UHierarchicalInstancedStaticMeshComponent *this,TArrayView<int_const_,int> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = param_1->ArrayNum;
  if (iVar7 != 0) {
    bVar1 = this->field_0xb14;
    this->field_0xb14 = (bVar1 << 2 | bVar1) & 4 ^ (bVar1 & 0xfb | 2);
  }
  uVar6 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar7) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)(lVar8 + (longlong)param_1->DataPtr);
      UInstancedStaticMeshComponent::RemoveInstanceInternal
                ((UInstancedStaticMeshComponent *)this,uVar4,false,true,true);
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&this->field_0x728)) {
        if (((int)uVar4 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = 0;
        if ((int)uVar4 < *(int *)&this->field_0x728) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = *(int *)&this->field_0x728 + ~uVar4;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove((void *)(*(longlong *)&this->field_0x720 + (longlong)(int)uVar4 * 4),
                  (void *)(*(longlong *)&this->field_0x720 +
                          (longlong)(*(int *)&this->field_0x728 - iVar7) * 4),(longlong)iVar7 << 2);
        }
        *(int *)&this->field_0x728 = *(int *)&this->field_0x728 + -1;
      }
      iVar7 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < iVar7);
  }
  iVar7 = *(int *)&this->field_0x660;
  if (*(int *)&this->field_0x664 != iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar7,(ForAnyElementType *)&this->field_0x658,iVar7,
               (int *)&this->field_0x664);
  }
  return;
}

// Serialize @ 147d28450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UHierarchicalInstancedStaticMeshComponent::Serialize
          (UHierarchicalInstancedStaticMeshComponent *this,FArchive *param_1)

{
  code *pcVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  bool bVar10;
  int iVar11;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar13;
  TBox<double> *pTVar14;
  undefined1 auStackY_a8 [32];
  FLLMScope local_78 [2];
  TArray<FClusterNode_DEPRECATED,TSizedDefaultAllocator<32>_> local_70;
  TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> local_60;
  FMemScope local_58;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FLLMScope::FLLMScope(local_78,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_58,InstancedMesh,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1);
  if (((param_1->field_0x28 & 4) != 0) && ((param_1->field_0x29 & 1) != 0)) {
    BuildTreeIfOutdated(this,false,false);
  }
  UInstancedStaticMeshComponent::Serialize((UInstancedStaticMeshComponent *)this,param_1);
  pTVar13 = (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0;
  if ((param_1->field_0x28 & 1) != 0) {
    pTVar12 = ::operator_new(0x10);
    if (pTVar12 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar12->ArrayNum = 0;
      pTVar12->ArrayMax = 0;
      pTVar13 = pTVar12;
    }
    local_60.Object = pTVar13;
    TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
    operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>(&this->ClusterTreePtr,&local_60);
    if (((param_1->field_0x28 & 1) != 0) &&
       (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID),
       iVar11 < 0xe)) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      TArray<FClusterNode_DEPRECATED,TSizedDefaultAllocator<32>_>::BulkSerialize
                (&local_70,param_1,false);
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      goto LAB_147d2859b;
    }
  }
  if (((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<FClusterNode,TSizedDefaultAllocator<32>_>::BulkSerialize
            ((this->ClusterTreePtr).Object,param_1,false);
LAB_147d2859b:
  if (((param_1->field_0x28 & 1) != 0) && ((this->BuiltInstanceBounds).IsValid == '\0')) {
    pTVar14 = GetClusterTreeBounds
                        (&local_50,(this->ClusterTreePtr).Object,
                         &this->TranslatedInstanceSpaceOrigin);
    dVar2 = (pTVar14->Min).field0_0x0._s_0.Y;
    (this->BuiltInstanceBounds).Min.field0_0x0._s_0.X = (pTVar14->Min).field0_0x0._s_0.X;
    (this->BuiltInstanceBounds).Min.field0_0x0._s_0.Y = dVar2;
    dVar2 = (pTVar14->Max).field0_0x0._s_0.X;
    (this->BuiltInstanceBounds).Min.field0_0x0._s_0.Z = (pTVar14->Min).field0_0x0._s_0.Z;
    (this->BuiltInstanceBounds).Max.field0_0x0._s_0.X = dVar2;
    dVar2 = (pTVar14->Max).field0_0x0._s_0.Z;
    (this->BuiltInstanceBounds).Max.field0_0x0._s_0.Y = (pTVar14->Max).field0_0x0._s_0.Y;
    (this->BuiltInstanceBounds).Max.field0_0x0._s_0.Z = dVar2;
    uVar3 = pTVar14->Pad[0];
    uVar4 = pTVar14->Pad[1];
    uVar5 = pTVar14->Pad[2];
    uVar6 = pTVar14->Pad[3];
    uVar7 = pTVar14->Pad[4];
    uVar8 = pTVar14->Pad[5];
    uVar9 = pTVar14->Pad[6];
    (this->BuiltInstanceBounds).IsValid = pTVar14->IsValid;
    (this->BuiltInstanceBounds).Pad[0] = uVar3;
    (this->BuiltInstanceBounds).Pad[1] = uVar4;
    (this->BuiltInstanceBounds).Pad[2] = uVar5;
    (this->BuiltInstanceBounds).Pad[3] = uVar6;
    (this->BuiltInstanceBounds).Pad[4] = uVar7;
    (this->BuiltInstanceBounds).Pad[5] = uVar8;
    (this->BuiltInstanceBounds).Pad[6] = uVar9;
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_78);
  return;
}

// SetCustomData @ 147d28d40

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

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::SetCustomData
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,
          TArrayView<float_const_,int> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  float *_Src;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((-1 < param_1) && (param_1 < *(int *)&this->field_0x660)) && (param_2->ArrayNum != 0)) {
    _Src = param_2->DataPtr;
    iVar4 = param_2->ArrayNum;
    if (this->bIsAsyncBuilding) {
      this->field_0xb14 = this->field_0xb14 | 4;
    }
    if (iVar4 != 0) {
      iVar1 = *(int *)&this->field_0x6e0;
      iVar3 = iVar1;
      if (iVar4 < iVar1) {
        iVar3 = iVar4;
      }
      uVar8 = iVar1 * param_1;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x6f0) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      memcpy((void *)(*(longlong *)&this->field_0x6e8 + (longlong)(int)uVar8 * 4),_Src,
             (longlong)iVar3 << 2);
      FPrimitiveInstanceDataManager::CustomDataChanged
                ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,param_1);
      if (param_3) {
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      }
      return true;
    }
  }
  return false;
}

// SetCustomDataValue @ 147d29340

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

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::SetCustomDataValue
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,int param_2,float param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((param_1 < 0) || (*(int *)&this->field_0x660 <= param_1)) || (param_2 < 0)) ||
     (*(int *)&this->field_0x6e0 <= param_2)) {
    bVar2 = false;
  }
  else {
    if (this->bIsAsyncBuilding) {
      this->field_0xb14 = this->field_0xb14 | 4;
    }
    FPrimitiveInstanceDataManager::CustomDataChanged
              ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,param_1);
    uVar5 = param_1 * *(int *)&this->field_0x6e0 + param_2;
    uVar4 = 0;
    if ((int)uVar5 < *(int *)&this->field_0x6f0) {
      uVar4 = ~uVar5 >> 0x1f;
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
    *(float *)(*(longlong *)&this->field_0x6e8 + (longlong)(int)uVar5 * 4) = param_3;
    if (param_4) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    bVar2 = true;
  }
  return bVar2;
}

// SetPerInstanceLightMapAndEditorData @ 147d2aec0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::SetPerInstanceLightMapAndEditorData
          (UHierarchicalInstancedStaticMeshComponent *this,FStaticMeshInstanceData *param_1,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FMeshMapBuildData *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  TVector4<float>_u_0 local_58 [3];
  
  iVar3 = param_1->NumInstances;
  if (((0 < *(int *)&this->field_0x600) &&
      (pFVar9 = UStaticMeshComponent::GetMeshMapBuildData
                          ((UStaticMeshComponent *)this,
                           *(FStaticMeshComponentLODInfo **)&this->field_0x5f8,false),
      pFVar9 != (FMeshMapBuildData *)0x0)) && (uVar12 = 0, 0 < iVar3)) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->SortedInstances).ArrayNum) {
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
      uVar7 = *(uint *)((this->SortedInstances).AllocatorInstance.Data + lVar11 * 4);
      lVar10 = (longlong)(int)uVar7;
      if ((-1 < (int)uVar7) && ((int)uVar7 < (pFVar9->PerInstanceLightmapData).ArrayNum)) {
        uVar8 = 0;
        if ((int)uVar7 < (pFVar9->PerInstanceLightmapData).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar9->PerInstanceLightmapData).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar4 + lVar10 * 0x10);
        fVar2 = *(float *)(pFVar4 + lVar10 * 0x10 + 4);
        uVar8 = 0;
        if ((int)uVar7 < (pFVar9->PerInstanceLightmapData).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar9->PerInstanceLightmapData).AllocatorInstance.Data;
        local_58[0]._8_4_ = *(undefined4 *)(pFVar4 + lVar10 * 0x10 + 8);
        local_58[0]._12_4_ = *(undefined4 *)(pFVar4 + lVar10 * 0x10 + 0xc);
        local_58[0]._0_4_ = fVar1;
        local_58[0]._4_4_ = fVar2;
        FStaticMeshInstanceData::SetInstanceLightMapDataInternal
                  (param_1,uVar12,(TVector4<float> *)&local_58[0]._s_0);
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar3);
  }
  return;
}

// UpdateDensityScaling @ 147d36a70

void __thiscall
UHierarchicalInstancedStaticMeshComponent::UpdateDensityScaling
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  float fVar6;
  
  pTVar4 = CVarFoliageDensityScale.Ref;
  fVar3 = __real_3f800000;
  fVar1 = this->CurrentDensityScaling;
  fVar6 = __real_3f800000;
  if (this->bEnableDensityScaling != 0) {
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar6 = pTVar4->ShadowedValue[0];
  }
  if (fVar3 <= fVar6) {
    fVar6 = fVar3;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->CurrentDensityScaling = fVar6;
  if (fVar1 == fVar6) {
    BuildTreeIfOutdated(this,true,false);
    return;
  }
  BuildTreeIfOutdated(this,true,true);
  return;
}

// UpdateInstanceTransform @ 147d376e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::UpdateInstanceTransform
          (UHierarchicalInstancedStaticMeshComponent *this,int param_1,TTransform<double> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  int *piVar1;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  UObject *pUVar8;
  UStaticMesh *pUVar9;
  TVector<double>_u_0 *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  bool bVar28;
  undefined1 uVar29;
  char cVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  TTransform<double> *pTVar34;
  TBoxSphereBounds<double,double> *pTVar35;
  TMatrix<double> *pTVar36;
  longlong lVar37;
  longlong lVar38;
  uint uVar39;
  undefined4 uVar40;
  uint uVar41;
  undefined4 uVar42;
  double dVar43;
  undefined8 uVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auStackY_4e8 [32];
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  double local_388;
  double local_370;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  TBoxSphereBounds<double,double> local_2d8;
  TBoxSphereBounds<double,double> local_2a0;
  TVector<double>_u_0 local_268;
  double dStack_250;
  double local_248;
  double dStack_240;
  char local_238;
  undefined7 uStack_237;
  TVector<double>_u_0 local_230;
  double local_218;
  double local_210;
  double local_208;
  undefined1 local_200;
  undefined1 local_1c8;
  TTransform<double> local_1b8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  if ((param_1 < 0) || (*(int *)&this->field_0x660 <= param_1)) {
    bVar28 = false;
  }
  else {
    bVar7 = this->field_0xb14;
    this->field_0xb14 = (bVar7 << 2 | bVar7) & 4 ^ (bVar7 & 0xfb | 2);
    iVar33 = UInstancedStaticMeshComponent::GetRenderIndex
                       ((UInstancedStaticMeshComponent *)this,param_1);
    uVar39 = 0;
    if (param_1 < *(int *)&this->field_0x660) {
      uVar39 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar12 = (code *)swi(3);
      uVar29 = (*pcVar12)();
      return (bool)uVar29;
    }
    lVar38 = *(longlong *)&this->field_0x658;
    lVar37 = (longlong)param_1 * 0x80;
    pdVar4 = (double *)(lVar37 + 0x40 + lVar38);
    dVar24 = *pdVar4;
    dVar25 = pdVar4[1];
    pdVar4 = (double *)(lVar37 + 0x50 + lVar38);
    dVar26 = *pdVar4;
    local_318 = dVar24;
    dStack_310 = dVar25;
    local_308 = dVar26;
    dStack_300 = pdVar4[1];
    dVar14 = *(double *)(lVar37 + lVar38);
    dVar15 = ((double *)(lVar37 + lVar38))[1];
    pdVar4 = (double *)(lVar37 + 0x10 + lVar38);
    dVar18 = *pdVar4;
    local_358 = dVar14;
    dStack_350 = dVar15;
    local_348 = dVar18;
    dStack_340 = pdVar4[1];
    pdVar4 = (double *)(lVar37 + 0x20 + lVar38);
    dVar19 = *pdVar4;
    dVar22 = pdVar4[1];
    pdVar4 = (double *)(lVar37 + 0x30 + lVar38);
    dVar23 = *pdVar4;
    local_338 = dVar19;
    dStack_330 = dVar22;
    local_328 = dVar23;
    dStack_320 = pdVar4[1];
    pdVar4 = (double *)(lVar37 + 0x60 + lVar38);
    dVar17 = *pdVar4;
    dVar43 = pdVar4[1];
    pdVar4 = (double *)(lVar37 + 0x70 + lVar38);
    dVar51 = *pdVar4;
    local_2f8 = dVar17;
    dStack_2f0 = dVar43;
    local_2e8 = dVar51;
    dStack_2e0 = pdVar4[1];
    if (param_3) {
      pTVar34 = UE::Math::TTransform<double>::GetRelativeTransform
                          (param_2,&local_1b8,(TTransform<double> *)&this->field_0x1f0);
    }
    else {
      pTVar34 = &local_458;
      local_458.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_458.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_458.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_458.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_458.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_458.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_458.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_458.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_458.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_458.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_458.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_458.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    }
    local_3f8.Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
    local_3f8.Translation.XY.m128d_f64[1] = (pTVar34->Translation).XY.m128d_f64[1];
    local_3f8.Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
    local_3f8.Translation.ZW.m128d_f64[1] = (pTVar34->Translation).ZW.m128d_f64[1];
    local_3f8.Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
    local_3f8.Rotation.XY.m128d_f64[1] = (pTVar34->Rotation).XY.m128d_f64[1];
    local_3f8.Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
    local_3f8.Scale3D.XY.m128d_f64[1] = (pTVar34->Scale3D).XY.m128d_f64[1];
    local_3f8.Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
    local_3f8.Rotation.ZW.m128d_f64[1] = (pTVar34->Rotation).ZW.m128d_f64[1];
    local_3f8.Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
    local_3f8.Scale3D.ZW.m128d_f64[1] = (pTVar34->Scale3D).ZW.m128d_f64[1];
    if ((((iVar33 == -1) || (this->NumBuiltRenderInstances <= iVar33)) ||
        (uVar39 = SUB84(local_3f8.Translation.XY.m128d_f64[0] - dVar17,0) &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar41 = (uint)((ulonglong)(local_3f8.Translation.XY.m128d_f64[0] - dVar17) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar41,uVar39) &&
        (double)CONCAT44(uVar41,uVar39) != __real_3f1a36e2e0000000)) ||
       ((uVar39 = SUB84(local_3f8.Translation.XY.m128d_f64[1] - dVar43,0) &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar41 = (uint)((ulonglong)(local_3f8.Translation.XY.m128d_f64[1] - dVar43) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar41,uVar39) &&
        (double)CONCAT44(uVar41,uVar39) != __real_3f1a36e2e0000000 ||
        (uVar39 = SUB84(local_3f8.Translation.ZW.m128d_f64[0] - dVar51,0) &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar41 = (uint)((ulonglong)(local_3f8.Translation.ZW.m128d_f64[0] - dVar51) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar41,uVar39) &&
        (double)CONCAT44(uVar41,uVar39) != __real_3f1a36e2e0000000)))) {
      bVar32 = false;
    }
    else {
      bVar32 = true;
    }
    bVar28 = UInstancedStaticMeshComponent::UpdateInstanceTransform
                       ((UInstancedStaticMeshComponent *)this,param_1,param_2,param_3,param_4,
                        param_5);
    if ((bVar28) && (*(UObject **)&this->field_0x5a0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(*(UObject **)&this->field_0x5a0);
      }
      pUVar8 = *(UObject **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      cVar30 = (**(code **)(*(longlong *)(pUVar8 + 6) + 0x10))();
      if (cVar30 == '\0') {
        pUVar9 = *(UStaticMesh **)&this->field_0x5a0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        bVar31 = UStaticMesh::HasValidRenderData(pUVar9,true,-1);
        if (bVar31) {
          pUVar9 = *(UStaticMesh **)&this->field_0x5a0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UStaticMesh *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          pTVar35 = UStaticMesh::GetBounds(pUVar9,&local_2d8);
          local_200 = 1;
          local_218 = (pTVar35->BoxExtent).field0_0x0._s_0.X;
          dVar47 = (pTVar35->Origin).field0_0x0._s_0.Y;
          local_230._s_0.X = (pTVar35->Origin).field0_0x0._s_0.X - local_218;
          local_210 = (pTVar35->BoxExtent).field0_0x0._s_0.Y;
          local_208 = (pTVar35->BoxExtent).field0_0x0._s_0.Z;
          local_230._s_0.Y = dVar47 - local_210;
          uVar46 = 0;
          local_218 = local_218 + (pTVar35->Origin).field0_0x0._s_0.X;
          local_210 = local_210 + dVar47;
          local_230._s_0.Z = (pTVar35->Origin).field0_0x0._s_0.Z - local_208;
          local_208 = local_208 + (pTVar35->Origin).field0_0x0._s_0.Z;
          pTVar36 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_3f8,&local_158);
          UE::Math::TBox<double>::TransformBy
                    ((TBox<double> *)&local_230._s_0,(TBox<double> *)&local_268._s_0,pTVar36);
          if (bVar32) {
            pUVar9 = *(UStaticMesh **)&this->field_0x5a0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar9 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            pTVar35 = UStaticMesh::GetBounds(pUVar9,&local_2a0);
            local_1c8 = 1;
            dVar47 = (pTVar35->BoxExtent).field0_0x0._s_0.Z;
            dVar5 = (pTVar35->BoxExtent).field0_0x0._s_0.X;
            dVar6 = (pTVar35->BoxExtent).field0_0x0._s_0.Y;
            dVar16 = (pTVar35->Origin).field0_0x0._s_0.Z - dVar47;
            dVar47 = dVar47 + (pTVar35->Origin).field0_0x0._s_0.Z;
            dVar13 = (pTVar35->Origin).field0_0x0._s_0.X - dVar5;
            dVar5 = dVar5 + (pTVar35->Origin).field0_0x0._s_0.X;
            dVar50 = (pTVar35->Origin).field0_0x0._s_0.Y - dVar6;
            dVar6 = dVar6 + (pTVar35->Origin).field0_0x0._s_0.Y;
            dVar48 = (dVar5 + dVar13) * ___xmm_3fe00000000000003fe0000000000000;
            dVar49 = (dVar6 + dVar50) * _UNK_150689678;
            dVar13 = (dVar5 - dVar13) * ___xmm_3fe00000000000003fe0000000000000;
            dVar6 = (dVar6 - dVar50) * _UNK_150689678;
            dVar5 = (dVar47 + dVar16) * ___xmm_3fe00000000000003fe0000000000000;
            dVar47 = (dVar47 - dVar16) * ___xmm_3fe00000000000003fe0000000000000;
            uVar39 = (uint)_UNK_15061cc88;
            uVar41 = (uint)((ulonglong)_UNK_15061cc88 >> 0x20);
            local_370 = (double)CONCAT44((uint)((ulonglong)(dVar23 * dVar6) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar23 * dVar6,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                        (double)CONCAT44((uint)((ulonglong)(dVar18 * dVar13) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar18 * dVar13,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                        (double)CONCAT44((uint)((ulonglong)(dVar26 * dVar47) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar26 * dVar47,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            dVar51 = dVar23 * dVar49 + dVar18 * dVar48 + dVar26 * dVar5 + dVar51;
            dVar17 = dVar19 * dVar49 + dVar14 * dVar48 + dVar24 * dVar5 + dVar17;
            dVar43 = dVar22 * dVar49 + dVar15 * dVar48 + dVar25 * dVar5 + dVar43;
            local_388 = dVar51 - local_370;
            dVar18 = (double)CONCAT44((uint)((ulonglong)(dVar19 * dVar6) >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar19 * dVar6,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                     (double)CONCAT44((uint)((ulonglong)(dVar14 * dVar13) >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar14 * dVar13,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                     (double)CONCAT44((uint)((ulonglong)(dVar24 * dVar47) >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar24 * dVar47,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            dVar19 = (double)CONCAT44((uint)((ulonglong)(dVar22 * dVar6) >> 0x20) & uVar41,
                                      SUB84(dVar22 * dVar6,0) & uVar39) +
                     (double)CONCAT44((uint)((ulonglong)(dVar15 * dVar13) >> 0x20) & uVar41,
                                      SUB84(dVar15 * dVar13,0) & uVar39) +
                     (double)CONCAT44((uint)((ulonglong)(dVar25 * dVar47) >> 0x20) & uVar41,
                                      SUB84(dVar25 * dVar47,0) & uVar39);
            dVar14 = dVar17 - dVar18;
            dVar15 = dVar43 - dVar19;
            local_370 = local_370 + dVar51;
            dVar18 = dVar18 + dVar17;
            dVar19 = dVar19 + dVar43;
            if ((dVar14 < (double)CONCAT44(local_268._4_4_,local_268._0_4_)) &&
               ((double)CONCAT44(local_268._4_4_,local_268._0_4_) < dVar18)) {
              auVar20._4_8_ = _UNK_15061cc88;
              auVar20._0_4_ = (int)((ulonglong)dVar14 >> 0x20);
              auVar44._0_8_ = auVar20._0_8_ << 0x20;
              auVar44._8_4_ = SUB84(dVar15,0);
              auVar44._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              if ((((auVar44._8_8_ < (double)CONCAT44(local_268._12_4_,local_268._8_4_)) &&
                   ((((double)CONCAT44(local_268._12_4_,local_268._8_4_) < dVar19 &&
                     (local_388 < local_268._s_0.Z)) && (local_268._s_0.Z < local_370)))) &&
                  (((dVar14 < dStack_250 && (dStack_250 < dVar18)) && (auVar44._8_8_ < local_248))))
                 && (((local_248 < dVar19 && (local_388 < dStack_240)) && (dStack_240 < local_370)))
                 ) {
                return true;
              }
            }
            UE::Math::TBox<double>::operator+=
                      (&this->BuiltInstanceBounds,(TBox<double> *)&local_268._s_0);
          }
          else {
            auVar27._8_4_ = local_268._8_4_;
            auVar27._0_8_ = CONCAT44(local_268._4_4_,local_268._0_4_);
            auVar27._12_4_ = local_268._12_4_;
            if ((this->UnbuiltInstanceBounds).IsValid == '\0') {
              if (local_238 != '\0') {
                *(undefined1 (*) [16])&(this->UnbuiltInstanceBounds).Min.field0_0x0 = auVar27;
                (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z = local_268._s_0.Z;
                (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X = dStack_250;
                (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y = local_248;
                (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z = dStack_240;
                (this->UnbuiltInstanceBounds).IsValid = local_238;
                (this->UnbuiltInstanceBounds).Pad[0] = (char)uStack_237;
                (this->UnbuiltInstanceBounds).Pad[1] = (char)((uint7)uStack_237 >> 8);
                (this->UnbuiltInstanceBounds).Pad[2] = (char)((uint7)uStack_237 >> 0x10);
                (this->UnbuiltInstanceBounds).Pad[3] = (char)((uint7)uStack_237 >> 0x18);
                (this->UnbuiltInstanceBounds).Pad[4] = (char)((uint7)uStack_237 >> 0x20);
                (this->UnbuiltInstanceBounds).Pad[5] = (char)((uint7)uStack_237 >> 0x28);
                (this->UnbuiltInstanceBounds).Pad[6] = (char)((uint7)uStack_237 >> 0x30);
              }
            }
            else if (local_238 != '\0') {
              auVar21._4_8_ = uVar46;
              auVar21._0_4_ = local_268._4_4_;
              auVar45._0_8_ = auVar21._0_8_ << 0x20;
              auVar45._8_4_ = local_268._8_4_;
              auVar45._12_4_ = local_268._12_4_;
              dVar17 = *(double *)&(this->UnbuiltInstanceBounds).Min.field0_0x0;
              uVar40 = local_268._0_4_;
              uVar42 = local_268._4_4_;
              if (dVar17 <= (double)CONCAT44(local_268._4_4_,local_268._0_4_)) {
                uVar40 = SUB84(dVar17,0);
                uVar42 = (undefined4)((ulonglong)dVar17 >> 0x20);
              }
              dVar17 = (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y;
              dVar43 = auVar45._8_8_;
              if (dVar17 <= auVar45._8_8_) {
                dVar43 = dVar17;
              }
              (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar42,uVar40);
              uVar40 = SUB84(local_268._s_0.Z,0);
              uVar42 = (undefined4)((ulonglong)local_268._16_8_ >> 0x20);
              dVar17 = *(double *)((longlong)&(this->UnbuiltInstanceBounds).Min.field0_0x0 + 0x10);
              if (dVar17 <= local_268._s_0.Z) {
                uVar40 = SUB84(dVar17,0);
                uVar42 = (undefined4)((ulonglong)dVar17 >> 0x20);
              }
              (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Y = dVar43;
              dVar17 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X;
              dVar43 = dStack_250;
              if (dStack_250 <= dVar17) {
                dVar43 = dVar17;
              }
              (this->UnbuiltInstanceBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar42,uVar40);
              uVar40 = SUB84(local_248,0);
              uVar42 = (undefined4)((ulonglong)local_248 >> 0x20);
              dVar17 = *(double *)((longlong)&(this->UnbuiltInstanceBounds).Max.field0_0x0 + 8);
              if (local_248 <= dVar17) {
                uVar40 = SUB84(dVar17,0);
                uVar42 = (undefined4)((ulonglong)dVar17 >> 0x20);
              }
              (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.X = dVar43;
              dVar17 = (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z;
              dVar43 = dStack_240;
              if (dStack_240 <= dVar17) {
                dVar43 = dVar17;
              }
              (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar42,uVar40);
              (this->UnbuiltInstanceBounds).Max.field0_0x0._s_0.Z = dVar43;
            }
            pTVar2 = &this->UnbuiltInstanceBoundsList;
            pTVar10 = (TVector<double>_u_0 *)(pTVar2->AllocatorInstance).Data;
            if (((pTVar10 <= &local_268) &&
                (&local_268 <
                 (TVector<double>_u_0 *)
                 ((longlong)pTVar10 + (longlong)(this->UnbuiltInstanceBoundsList).ArrayMax * 0x38)))
               && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar32)) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
            iVar33 = (this->UnbuiltInstanceBoundsList).ArrayNum;
            piVar1 = &(this->UnbuiltInstanceBoundsList).ArrayMax;
            if (iVar33 == *piVar1) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->UnbuiltInstanceBoundsList).ArrayNum = iVar33 + 1;
            lVar38 = (longlong)iVar33 * 0x38;
            pFVar11 = (pTVar2->AllocatorInstance).Data;
            pFVar3 = pFVar11 + lVar38;
            *(undefined4 *)pFVar3 = local_268._0_4_;
            *(undefined4 *)(pFVar3 + 4) = local_268._4_4_;
            *(undefined4 *)(pFVar3 + 8) = local_268._8_4_;
            *(undefined4 *)(pFVar3 + 0xc) = local_268._12_4_;
            *(double *)(pFVar11 + lVar38 + 0x10) = local_268._s_0.Z;
            *(double *)(pFVar11 + lVar38 + 0x10 + 8) = dStack_250;
            *(double *)(pFVar11 + lVar38 + 0x20) = local_248;
            *(double *)(pFVar11 + lVar38 + 0x20 + 8) = dStack_240;
            *(ulonglong *)(pFVar11 + lVar38 + 0x30) = CONCAT71(uStack_237,local_238);
            BuildTreeIfOutdated(this,true,false);
          }
        }
      }
    }
  }
  return bVar28;
}

