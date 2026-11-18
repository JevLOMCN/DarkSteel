// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// ~FPrimitiveInstanceDataManager @ 147cc8cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::~FPrimitiveInstanceDataManager(FPrimitiveInstanceDataManager *this)

{
  FLegacyBuildData *pFVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->LegacyBuildData).Ptr;
  if (pFVar1 != (FLegacyBuildData *)0x0) {
    (**(code **)&pFVar1[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum)
              (&pFVar1[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Proxy).SharedReferenceCount.ReferenceController);
  FVar2 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->InstanceUpdateTracker).Removed.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar3 = (this->InstanceUpdateTracker).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// MarkChangeHelper<1> @ 147d6f470

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
FPrimitiveInstanceDataManager::MarkChangeHelper<1>(FPrimitiveInstanceDataManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UActorComponent *this_00;
  int iVar3;
  
  if (this->TrackingState != Disabled) {
    if (this->Mode == ExternalLegacyData) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode != EMode::ExternalLegacyData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x31d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->TrackingState == Tracked) {
      iVar3 = *(int *)&this->field_0x8;
      if (iVar3 == 0) {
        iVar3 = *(int *)&this->field_0x20;
      }
      FInstanceAttributeTracker::MarkIndex<1>(&this->InstanceUpdateTracker,param_1,iVar3);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    if (this->bComponentMarkedDirty == '\0') {
      this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
      if (this_00 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderInstancesDirty(this_00);
        this->bComponentMarkedDirty = '\x01';
      }
    }
  }
  return;
}

// MarkChangeHelper<0> @ 147d6f520

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
FPrimitiveInstanceDataManager::MarkChangeHelper<0>(FPrimitiveInstanceDataManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UActorComponent *this_00;
  int iVar3;
  
  if (this->TrackingState != Disabled) {
    if (this->Mode == ExternalLegacyData) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode != EMode::ExternalLegacyData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x31d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->TrackingState == Tracked) {
      iVar3 = *(int *)&this->field_0x8;
      if (iVar3 == 0) {
        iVar3 = *(int *)&this->field_0x20;
      }
      FInstanceAttributeTracker::MarkIndex<0>(&this->InstanceUpdateTracker,param_1,iVar3);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    if (this->bComponentMarkedDirty == '\0') {
      this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
      if (this_00 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderInstancesDirty(this_00);
        this->bComponentMarkedDirty = '\x01';
      }
    }
  }
  return;
}

// FPrimitiveInstanceDataManager @ 147d78d50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveInstanceDataManager * __thiscall
FPrimitiveInstanceDataManager::FPrimitiveInstanceDataManager
          (FPrimitiveInstanceDataManager *this,UPrimitiveComponent *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *pUVar3;
  UPrimitiveComponent *local_res8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  (this->InstanceUpdateTracker).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)&this->field_0x20 = 0;
  (this->InstanceUpdateTracker).Data.ArrayNum = 0;
  (this->InstanceUpdateTracker).Data.ArrayMax = 0;
  (this->InstanceUpdateTracker).Removed.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  *(undefined8 *)&(this->InstanceUpdateTracker).Removed.MaxBits = 0x80;
  (this->InstanceUpdateTracker).FirstRemovedIdIndex = 0x7fffffff;
  (this->InstanceUpdateTracker).FirstChangedIndex = 0x7fffffff;
  (this->InstanceUpdateTracker).LastChangedIndex = 0;
  (this->InstanceUpdateTracker).FirstChangedIndex = 0x7fffffff;
  (this->InstanceUpdateTracker).LastChangedIndex = 0;
  (this->InstanceUpdateTracker).FirstRemovedIdIndex = 0x7fffffff;
  (this->InstanceUpdateTracker).Removed.NumBits = 0;
  (this->InstanceUpdateTracker).MaxIndex = 0;
  (this->InstanceUpdateTracker).NumChanged[0] = 0;
  (this->InstanceUpdateTracker).NumChanged[1] = 0;
  (this->InstanceUpdateTracker).NumChanged[2] = 0;
  (this->InstanceUpdateTracker).NumChanged[3] = 0;
  (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ValidInstanceIdMask).NumBits = 0;
  *(undefined8 *)&(this->ValidInstanceIdMask).MaxBits = 0x80;
  this->Mode = Default;
  this->TrackingState = Initial;
  puVar1 = &this->field_0x9e;
  this->bNumCustomDataChanged = '\0';
  this->bFirstFlush = '\x01';
  this->bEnableTracking = '\0';
  this->bComponentMarkedDirty = '\0';
  this->bAnyInstanceChange = '\0';
  this->bPrimitiveTransformChanged = '\0';
  this->bTransformChangedAllInstances = '\0';
  this->bBakedLightingDataChanged = '\0';
  (this->Proxy).Object = (FISMCInstanceDataSceneProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PrimitiveComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->PrimitiveComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->LegacyBuildData).Ptr = (FLegacyBuildData *)0x0;
  (this->PrecomputedOptimizationData).Object = (FISMPrecomputedSpatialHashData *)0x0;
  (this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Flags).Packed = 0;
  this->NumCustomDataFloats = 0;
  this->AbsMaxDisplacement = 0.0;
  (this->StaticMeshBounds).Min.field0_0x0._s_0.X = 3.4028235e+38;
  (this->StaticMeshBounds).Min.field0_0x0._s_0.Y = 3.4028235e+38;
  (this->StaticMeshBounds).Min.field0_0x0._s_0.Z = 3.4028235e+38;
  (this->StaticMeshBounds).Max.field0_0x0._s_0.X = -3.4028235e+38;
  (this->StaticMeshBounds).Max.field0_0x0._s_0.Y = -3.4028235e+38;
  (this->StaticMeshBounds).Max.field0_0x0._s_0.Z = -3.4028235e+38;
  bVar2 = FWeakObjectPtr::IsValid(&(this->PrimitiveComponent).WeakPtr);
  if ((bVar2) &&
     (pUVar3 = FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
     (*(uint *)&pUVar3->field_0x8 & 0x30) != 0)) {
    this->TrackingState = Disabled;
  }
  return this;
}

// operator() @ 147d802e0

void __thiscall
`FPrimitiveInstanceDataManager::FlushChanges'::__l14::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  FAccessTag FVar5;
  FAccessTag FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  TVector<float>_u_0 local_a8;
  FWriteView local_98;
  
  if (*(longlong *)((longlong)this + 0xb0) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)((longlong)this + 0xb0);
  FInstanceIdIndexMap::operator=
            ((FInstanceIdIndexMap *)(plVar1 + 0x2a),(FInstanceIdIndexMap *)((longlong)this + 0x80));
  uVar10 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  FVar5.Kind = Writer;
  FVar5.WriterTag = uVar10;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)(plVar1 + 1),&local_98,FVar5);
  FVar6.Kind = Writer;
  FVar6.WriterTag = uVar10;
  *local_98.Flags = *(FInstanceDataFlags *)((longlong)this + 0x60);
  uVar3 = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)&(local_98.PrimitiveToRelativeWorld)->TransformRows[0].field0_0x0 =
       *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)&(local_98.PrimitiveToRelativeWorld)->TransformRows[0].field0_0x0 + 8) =
       uVar3;
  uVar3 = *(undefined8 *)((longlong)this + 0x48);
  *(undefined8 *)((longlong)&(local_98.PrimitiveToRelativeWorld)->TransformRows[1].field0_0x0 + 4) =
       *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)&(local_98.PrimitiveToRelativeWorld)->TransformRows[2].field0_0x0 = uVar3;
  uVar3 = *(undefined8 *)((longlong)this + 0x58);
  *(undefined8 *)((longlong)&(local_98.PrimitiveToRelativeWorld)->TransformRows[2].field0_0x0 + 8) =
       *(undefined8 *)((longlong)this + 0x50);
  *(undefined8 *)((longlong)&((local_98.PrimitiveToRelativeWorld)->Origin).field0_0x0 + 4) = uVar3;
  dVar4 = *(double *)((longlong)this + 0x20);
  ((local_98.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.X = *(double *)((longlong)this + 0x18);
  ((local_98.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.Y = dVar4;
  ((local_98.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.Z = *(double *)((longlong)this + 0x28);
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)(plVar1 + 1),FVar6);
  FISMCInstanceDataSceneProxy::GetLocalBoundsPadExtent
            ((TVector<float> *)&local_a8._s_0,(FRenderTransform *)((longlong)this + 0x30),
             *(float *)((longlong)this + 100));
  *(float *)this = *(float *)this - local_a8._s_0.X;
  *(float *)((longlong)this + 4) = *(float *)((longlong)this + 4) - local_a8._s_0.Y;
  *(float *)((longlong)this + 8) = *(float *)((longlong)this + 8) - local_a8._s_0.Z;
  *(float *)((longlong)this + 0xc) = local_a8._s_0.X + *(float *)((longlong)this + 0xc);
  *(float *)((longlong)this + 0x10) = local_a8._s_0.Y + *(float *)((longlong)this + 0x10);
  *(float *)((longlong)this + 0x14) = local_a8._s_0.Z + *(float *)((longlong)this + 0x14);
  (**(code **)(*plVar1 + 0x38))(plVar1,(longlong)this + 0x68,this,(longlong)this + 0x70);
  lVar9 = (**(code **)(*plVar1 + 0x10))(plVar1);
  iVar11 = *(int *)(lVar9 + 8);
  iVar8 = FInstanceSceneDataBuffers::GetNumInstances
                    ((FInstanceSceneDataBuffers *)(plVar1 + 1),(FAccessTag)0x0);
  if (iVar8 != iVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyRef.GetData().GetNumInstances() == ProxyRef.GetUpdateTaskInfo()->GetHeader().NumInstances"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                       ,0x21b,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar11 = (int)plVar1[0x2b];
  if (iVar11 == 0) {
    iVar11 = (int)plVar1[0x2e];
  }
  iVar8 = FInstanceSceneDataBuffers::GetNumInstances
                    ((FInstanceSceneDataBuffers *)(plVar1 + 1),(FAccessTag)0x0);
  if (iVar11 < iVar8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyRef.GetData().GetNumInstances() <= ProxyRef.InstanceIdIndexMap.GetMaxInstanceIndex()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                       ,0x21d,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar9 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (*(short *)(lVar9 + 0x10) != (short)plVar1[0x21]) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyRef.GetUpdateTaskInfo()->GetHeader().Flags == ProxyRef.InstanceSceneDataBuffers.GetFlags()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                       ,0x21e,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Add @ 147d826d0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::Add(FPrimitiveInstanceDataManager *this,int param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  FPrimitiveInstanceId FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UActorComponent *pUVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  void *_Src;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  FPrimitiveInstanceId local_28 [4];
  
  if (this->TrackingState == Disabled) {
    return;
  }
  if ((this->Mode == ExternalLegacyData) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode != EMode::ExternalLegacyData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x57,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2) {
    iVar6 = *(int *)&this->field_0x8;
    iVar10 = iVar6;
    if (iVar6 == 0) {
      iVar10 = *(int *)&this->field_0x20;
    }
    if ((param_1 != iVar10) && (iVar6 == 0)) {
      CreateExplicitIdentityMapping(this);
    }
  }
  else {
    iVar6 = *(int *)&this->field_0x8;
    if (iVar6 == 0) {
      iVar6 = *(int *)&this->field_0x20;
    }
    if ((param_1 != iVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bInsert || InInstanceAddAtIndex == GetMaxInstanceIndex()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0x62,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->bComponentMarkedDirty == '\0') &&
     (pUVar8 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
     pUVar8 != (UActorComponent *)0x0)) {
    UActorComponent::MarkRenderInstancesDirty(pUVar8);
    this->bComponentMarkedDirty = '\x01';
  }
  if (*(int *)&this->field_0x8 == 0) {
    iVar6 = *(int *)&this->field_0x20;
    *(int *)&this->field_0x20 = iVar6 + 1;
    MarkChangeHelper<0>(this,iVar6);
    return;
  }
  iVar6 = this->IdSearchStartIndex;
  uVar14 = -1 << ((byte)iVar6 & 0x1f);
  this_00 = &this->ValidInstanceIdMask;
  FVar15 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
  iVar10 = (this->ValidInstanceIdMask).NumBits;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)this_00;
  }
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
  uVar11 = (ulonglong)iVar6;
  uVar16 = iVar10 + 0x1fU >> 5;
  if ((int)uVar16 <= iVar6) {
LAB_147d828d4:
    uVar14 = TBitArray<FDefaultBitArrayAllocator>::Add(&this->ValidInstanceIdMask,true);
LAB_147d828e5:
    iVar6 = (this->ValidInstanceIdMask).NumBits;
    this->IdSearchStartIndex = uVar14;
    local_28[0].Id = uVar14;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0x10,iVar6,Default);
    iVar6 = *(int *)&this->field_0x8;
    if (param_1 == iVar6) {
      lVar13 = (longlong)local_28[0].Id;
      uVar14 = 0;
      if (local_28[0].Id < *(int *)&this->field_0x18) {
        uVar14 = (uint)~local_28[0].Id >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*(longlong *)&this->field_0x10 + lVar13 * 4) = iVar6;
      if (((*(FPrimitiveInstanceId **)this <= local_28) &&
          (local_28 < *(FPrimitiveInstanceId **)this + *(int *)&this->field_0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)&this->field_0x8;
      if (iVar6 == *(int *)&this->field_0xc) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,(int *)&this->field_0xc);
      }
      *(int *)&this->field_0x8 = iVar6 + 1;
      *(int *)(*(longlong *)this + (longlong)iVar6 * 4) = local_28[0].Id;
    }
    else {
      if ((!param_2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bInsert",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                             ,0x7b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = (longlong)local_28[0].Id;
      uVar14 = 0;
      if (local_28[0].Id < *(int *)&this->field_0x18) {
        uVar14 = (uint)~local_28[0].Id >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*(longlong *)&this->field_0x10 + lVar13 * 4) = param_1;
      if (((*(FPrimitiveInstanceId **)this <= local_28) &&
          (local_28 < *(FPrimitiveInstanceId **)this + *(int *)&this->field_0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)&this->field_0x8;
      if (iVar6 == *(int *)&this->field_0xc) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,(int *)&this->field_0xc);
      }
      *(int *)&this->field_0x8 = iVar6 + 1;
      _Src = (void *)(*(longlong *)this + (longlong)param_1 * 4);
      memmove((void *)((longlong)_Src + 4),_Src,(longlong)(iVar6 - param_1) << 2);
      uVar14 = param_1 + 1;
      *(int *)((longlong)param_1 * 4 + *(longlong *)this) = local_28[0].Id;
      iVar6 = *(int *)&this->field_0x8;
      if ((int)uVar14 < iVar6) {
        lVar13 = (longlong)(int)uVar14 * 4;
        do {
          uVar16 = 0;
          if ((int)uVar14 < iVar6) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          uVar16 = *(uint *)(lVar13 + *(longlong *)this);
          uVar7 = 0;
          if ((int)uVar16 < *(int *)&this->field_0x18) {
            uVar7 = ~uVar16 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          *(uint *)(*(longlong *)&this->field_0x10 + (longlong)(int)uVar16 * 4) = uVar14;
          iVar6 = *(int *)&this->field_0x8;
          if (iVar6 == 0) {
            iVar6 = *(int *)&this->field_0x20;
          }
          FInstanceAttributeTracker::MarkIndex<3>(&this->InstanceUpdateTracker,uVar14,iVar6);
          iVar6 = *(int *)&this->field_0x8;
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 4;
        } while ((int)uVar14 < iVar6);
      }
    }
    *(int *)&this->field_0x20 = *(int *)&this->field_0x8;
    if (((this->ValidInstanceIdMask).NumBits < *(int *)&this->field_0x8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValidInstanceIdMask.Num() >= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0x92,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar4.Id = local_28[0].Id;
    if ((this->Mode == ExternalLegacyData) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mode != EMode::ExternalLegacyData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0x32c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this->TrackingState == Tracked) {
      iVar6 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)this,FVar4);
      MarkChangeHelper<0>(this,iVar6);
    }
    else {
      this->bAnyInstanceChange = '\x01';
      if ((this->bComponentMarkedDirty == '\0') &&
         (pUVar8 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
         pUVar8 != (UActorComponent *)0x0)) {
        UActorComponent::MarkRenderInstancesDirty(pUVar8);
        this->bComponentMarkedDirty = '\x01';
        return;
      }
    }
    return;
  }
  puVar9 = (uint *)((longlong)FVar15 + uVar11 * 4);
LAB_147d82820:
  iVar6 = (int)uVar11;
  if ((*puVar9 & uVar14) == uVar14) goto code_r0x000147d8282a;
  uVar14 = ~*(uint *)((longlong)FVar15 + (longlong)iVar6 * 4) & uVar14;
  iVar2 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  iVar12 = 0x20;
  if (uVar14 != 0) {
    iVar12 = iVar2;
  }
  uVar14 = iVar12 + iVar6 * 0x20;
  if ((int)uVar14 < iVar10) {
    if (uVar14 != 0xffffffff) {
      if ((((int)uVar14 < 0) || (iVar10 <= (int)uVar14)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar15 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<unsigned_int>)0x0) {
        FVar15 = (ForElementType<unsigned_int>)this_00;
      }
      puVar9 = (uint *)((longlong)FVar15 +
                       (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar9 = *puVar9 | 1 << ((byte)uVar14 & 0x1f);
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
      goto LAB_147d828e5;
    }
    local_28[0].Id = -1;
  }
  goto LAB_147d828d4;
code_r0x000147d8282a:
  uVar11 = (ulonglong)(iVar6 + 1U);
  puVar9 = puVar9 + 1;
  uVar14 = 0xffffffff;
  if ((int)uVar16 <= (int)(iVar6 + 1U)) goto LAB_147d828d4;
  goto LAB_147d82820;
}

// BakedLightingDataChanged @ 147d85b90

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
FPrimitiveInstanceDataManager::BakedLightingDataChanged
          (FPrimitiveInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  
  this->bBakedLightingDataChanged = '\x01';
  if (this->bComponentMarkedDirty == '\0') {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
  }
  return;
}

// BakedLightingDataChangedAll @ 147d85be0

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
FPrimitiveInstanceDataManager::BakedLightingDataChangedAll(FPrimitiveInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if ((this->TrackingState != Disabled) &&
     (this->bBakedLightingDataChanged = '\x01', this->bComponentMarkedDirty == '\0')) {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
  }
  return;
}

// ClearChangeTracking @ 147d8e580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::ClearChangeTracking(FPrimitiveInstanceDataManager *this)

{
  undefined1 *puVar1;
  FLegacyBuildData *pFVar2;
  
  if (this->TrackingState != Disabled) {
    this->TrackingState = Initial;
    pFVar2 = (this->LegacyBuildData).Ptr;
    if (pFVar2 != (FLegacyBuildData *)0x0) {
      (this->LegacyBuildData).Ptr = (FLegacyBuildData *)0x0;
      (**(code **)&pFVar2[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum)();
    }
    FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
    this->bNumCustomDataChanged = '\0';
    this->bPrimitiveTransformChanged = '\0';
    this->bTransformChangedAllInstances = '\0';
    this->bBakedLightingDataChanged = '\0';
  }
  return;
}

// ClearIdTracking @ 147d8e650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::ClearIdTracking(FPrimitiveInstanceDataManager *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FLegacyBuildData *pFVar3;
  
  if (this->TrackingState != Disabled) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x18 = 0;
    if (*(int *)&this->field_0x1c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
    }
    *(int *)&this->field_0x20 = param_1;
    iVar2 = (this->ValidInstanceIdMask).MaxBits;
    (this->ValidInstanceIdMask).NumBits = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      (this->ValidInstanceIdMask).MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->ValidInstanceIdMask,0);
    }
    this->IdSearchStartIndex = 0;
    if (this->TrackingState != Disabled) {
      this->TrackingState = Initial;
      pFVar3 = (this->LegacyBuildData).Ptr;
      if (pFVar3 != (FLegacyBuildData *)0x0) {
        (this->LegacyBuildData).Ptr = (FLegacyBuildData *)0x0;
        (**(code **)&pFVar3[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum)();
      }
      FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
      this->bNumCustomDataChanged = '\0';
      this->bPrimitiveTransformChanged = '\0';
      this->bTransformChangedAllInstances = '\0';
      this->bBakedLightingDataChanged = '\0';
    }
  }
  return;
}

// CreateExplicitIdentityMapping @ 147d93fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::CreateExplicitIdentityMapping(FPrimitiveInstanceDataManager *this)

{
  undefined1 *puVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  puVar1 = &this->field_0x8;
  if ((*(int *)&this->field_0x8 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasIdentityMapping()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x308,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x20;
  iVar4 = *(int *)puVar1;
  if (iVar4 < (int)uVar5) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5 - iVar4,(ForAnyElementType *)this,(int *)puVar1,(int *)&this->field_0xc);
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar4) {
      uVar6 = iVar4 - uVar5;
      if (((int)(uVar6 | uVar5) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar5 * 4);
        iVar4 = (*(int *)puVar1 - uVar5) - uVar6;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar6 * 4),(longlong)iVar4 << 2);
        }
        *(uint *)puVar1 = *(int *)puVar1 - uVar6;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,*(int *)puVar1,(int *)&this->field_0xc);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0x10,*(int *)&this->field_0x20,
             Default);
  uVar5 = 0;
  if (0 < *(int *)&this->field_0x20) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar5 < *(int *)puVar1) {
        uVar6 = ~uVar5 >> 0x1f;
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
      *(uint *)(lVar7 + *(longlong *)this) = uVar5;
      uVar6 = 0;
      if ((int)uVar5 < *(int *)&this->field_0x18) {
        uVar6 = ~uVar5 >> 0x1f;
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
      *(uint *)(lVar7 + *(longlong *)&this->field_0x10) = uVar5;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar5 < *(int *)&this->field_0x20);
  }
  iVar4 = *(int *)&this->field_0x20;
  (this->ValidInstanceIdMask).NumBits = 0;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&this->ValidInstanceIdMask,iVar4,true);
  this->IdSearchStartIndex = *(int *)&this->field_0x20;
  return;
}

// CustomDataChanged @ 147d94b50

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
FPrimitiveInstanceDataManager::CustomDataChanged(FPrimitiveInstanceDataManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UActorComponent *this_00;
  int iVar3;
  
  if (this->TrackingState != Disabled) {
    if (this->Mode == ExternalLegacyData) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode != EMode::ExternalLegacyData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x31d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->TrackingState == Tracked) {
      iVar3 = *(int *)&this->field_0x8;
      if (iVar3 == 0) {
        iVar3 = *(int *)&this->field_0x20;
      }
      FInstanceAttributeTracker::MarkIndex<2>(&this->InstanceUpdateTracker,param_1,iVar3);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    if (this->bComponentMarkedDirty == '\0') {
      this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
      if (this_00 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderInstancesDirty(this_00);
        this->bComponentMarkedDirty = '\x01';
      }
    }
  }
  return;
}

// FlushChanges @ 147d9d700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPrimitiveInstanceDataManager::FlushChanges
          (FPrimitiveInstanceDataManager *this,FInstanceUpdateComponentDesc *param_1,bool param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FLegacyBuildData *pFVar5;
  FStaticMeshVertexDataInterface *pFVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  FISMPrecomputedSpatialHashData *pFVar9;
  code *pcVar10;
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> TVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  FISMCInstanceDataSceneProxy *pFVar16;
  FDFMatrix *pFVar17;
  FInstanceUpdateComponentDesc *pFVar18;
  undefined8 uVar19;
  FMotionVectorSimulation *this_00;
  UObject *pUVar20;
  TMatrix<double> *pTVar21;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar22;
  FInstanceIdIndexMap *pFVar23;
  longlong *plVar24;
  <lambda_2> *this_01;
  TVector<float>_u_0 *pTVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  FStaticMeshInstanceData *pFVar29;
  ETrackingState EVar30;
  bool bVar31;
  byte bVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_cd8 [32];
  FInstanceDataBufferHeader local_ca8;
  FInstanceDataBufferHeader local_c98;
  FDeltaRange<3> local_c88;
  TVector<float>_u_0 local_c78;
  TVector<float>_u_0 local_c68;
  TVector<float>_u_0 local_c58;
  TVector<float>_u_0 local_c48;
  undefined8 local_c38;
  FSharedReferencer<1> FStack_c30;
  undefined8 local_c28;
  float local_c20;
  undefined8 local_c1c;
  float local_c14;
  undefined8 local_c10;
  float local_c08;
  undefined8 local_c04;
  float local_bfc;
  FISMPrecomputedSpatialHashData *local_bf8;
  TReferenceControllerBase<1> *pTStack_bf0;
  TOptional<UE::Math::TTransform<double>_> local_be8;
  undefined1 local_b78 [408];
  FScriptContainerElement *pFStack_9e0;
  undefined8 local_9d8;
  int local_9d0;
  TVector<float>_u_0 local_9c8 [2];
  TVector<double>_u_0 local_9b0;
  TVector<float>_u_0 local_998;
  TVector<float>_u_0 local_98c;
  TVector<float>_u_0 local_980;
  TVector<float>_u_0 local_974;
  FInstanceDataFlags local_968;
  float local_964;
  FLegacyBuildData local_960;
  int local_920;
  TMatrix<double> local_918;
  <lambda_1> local_898;
  <lambda_2> local_7d8;
  <lambda_3> local_608;
  <lambda_4> local_438;
  FDFMatrix local_268;
  FDFMatrix local_218;
  FDFMatrix local_1c8;
  FDFMatrix local_178;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_cd8;
  if ((this->TrackingState == Disabled) ||
     (this->bComponentMarkedDirty = '\0', (this->Proxy).Object == (FISMCInstanceDataSceneProxy *)0x0
     )) {
    bVar12 = false;
  }
  else {
    if ((param_2) &&
       (pFVar16 = TSharedPtr<FISMCInstanceDataSceneProxy,1>::operator->(&this->Proxy),
       pFVar16->bIsNew != false)) {
      bVar31 = true;
    }
    else {
      bVar31 = false;
    }
    if (((this->Proxy).Object == (FISMCInstanceDataSceneProxy *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    pFVar29 = (FStaticMeshInstanceData *)0x0;
    ((this->Proxy).Object)->bIsNew = false;
    bVar32 = 0;
    bVar33 = false;
    if (((((bool)this->bFirstFlush) && (*(int *)&this->field_0x8 == 0)) &&
        (*(int *)&this->field_0x20 == 0)) && (param_1->NumSourceInstances != 0)) {
      *(undefined4 *)&this->field_0x18 = 0;
      if (*(int *)&this->field_0x1c < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
      }
      *(undefined4 *)&this->field_0x8 = 0;
      if (*(int *)&this->field_0xc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
      }
      *(int *)&this->field_0x20 = param_1->NumSourceInstances;
    }
    this->bFirstFlush = '\0';
    bVar12 = false;
    fVar36 = (float)((uint)(param_1->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0.
                           _s_0.X ^ __xmm_80000000800000008000000080000000);
    fVar34 = (param_1->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0.Y;
    if (fVar36 <= fVar34) {
      fVar36 = fVar34;
    }
    pFVar5 = (this->LegacyBuildData).Ptr;
    fVar36 = fVar36 + (param_1->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement;
    if (pFVar5 != (FLegacyBuildData *)0x0) {
      if (this->Mode == ExternalLegacyData) {
        if (((pFVar5->LegacyInstanceReorderTable).ArrayNum != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("LegacyBuildData->LegacyInstanceReorderTable.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                ,0x1de,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        pFVar5 = (this->LegacyBuildData).Ptr;
        iVar15 = (pFVar5->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
        if (iVar15 == 0) {
          iVar15 = (pFVar5->InstanceIdIndexMap).NumInstances;
        }
        if ((iVar15 != ((pFVar5->LegacyStaticMeshInstanceData).Ptr)->NumInstances) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("LegacyBuildData->InstanceIdIndexMap.GetMaxInstanceIndex() == LegacyBuildData->LegacyStaticMeshInstanceData->GetNumInstances()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                ,0x1df,L""), bVar12)) {
code_r0x000147d9d93e:
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
      }
      else {
        iVar15 = (pFVar5->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
        if (iVar15 == 0) {
          iVar15 = (pFVar5->InstanceIdIndexMap).NumInstances;
        }
        if ((iVar15 != (pFVar5->LegacyInstanceReorderTable).ArrayNum) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("LegacyBuildData->InstanceIdIndexMap.GetMaxInstanceIndex() == LegacyBuildData->LegacyInstanceReorderTable.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                ,0x1e3,L""), bVar12)) goto code_r0x000147d9d93e;
      }
      this->bPrimitiveTransformChanged = '\0';
      dVar2 = (param_1->PrimitiveLocalToWorld).M[0][1];
      local_960.LegacyStaticMeshInstanceData.Ptr = (FStaticMeshInstanceData *)0x0;
      local_960.LegacyInstanceReorderTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PrimitiveLocalToWorld).M[0][0] = (param_1->PrimitiveLocalToWorld).M[0][0];
      (this->PrimitiveLocalToWorld).M[0][1] = dVar2;
      local_960.LegacyInstanceReorderTable.ArrayNum = 0;
      local_960.LegacyInstanceReorderTable.ArrayMax = 0;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[0][3];
      local_960.InstanceIdIndexMap.IndexToIdMap.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_960.InstanceIdIndexMap.IndexToIdMap.ArrayNum = 0;
      local_960.InstanceIdIndexMap.IndexToIdMap.ArrayMax = 0;
      (this->PrimitiveLocalToWorld).M[0][2] = (param_1->PrimitiveLocalToWorld).M[0][2];
      (this->PrimitiveLocalToWorld).M[0][3] = dVar2;
      local_960.InstanceIdIndexMap.IdToIndexMap.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[1][1];
      local_960.InstanceIdIndexMap.IdToIndexMap.ArrayNum = 0;
      local_960.InstanceIdIndexMap.IdToIndexMap.ArrayMax = 0;
      local_920 = 0;
      (this->PrimitiveLocalToWorld).M[1][0] = (param_1->PrimitiveLocalToWorld).M[1][0];
      (this->PrimitiveLocalToWorld).M[1][1] = dVar2;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[1][3];
      (this->PrimitiveLocalToWorld).M[1][2] = (param_1->PrimitiveLocalToWorld).M[1][2];
      (this->PrimitiveLocalToWorld).M[1][3] = dVar2;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[2][1];
      (this->PrimitiveLocalToWorld).M[2][0] = (param_1->PrimitiveLocalToWorld).M[2][0];
      (this->PrimitiveLocalToWorld).M[2][1] = dVar2;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[2][3];
      (this->PrimitiveLocalToWorld).M[2][2] = (param_1->PrimitiveLocalToWorld).M[2][2];
      (this->PrimitiveLocalToWorld).M[2][3] = dVar2;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[3][1];
      (this->PrimitiveLocalToWorld).M[3][0] = (param_1->PrimitiveLocalToWorld).M[3][0];
      (this->PrimitiveLocalToWorld).M[3][1] = dVar2;
      dVar2 = (param_1->PrimitiveLocalToWorld).M[3][3];
      (this->PrimitiveLocalToWorld).M[3][2] = (param_1->PrimitiveLocalToWorld).M[3][2];
      (this->PrimitiveLocalToWorld).M[3][3] = dVar2;
      this->Flags = param_1->Flags;
      uVar19 = *(undefined8 *)((longlong)&(param_1->StaticMeshBounds).Min.field0_0x0 + 8);
      *(undefined8 *)&(this->StaticMeshBounds).Min.field0_0x0 =
           *(undefined8 *)&(param_1->StaticMeshBounds).Min.field0_0x0;
      *(undefined8 *)((longlong)&(this->StaticMeshBounds).Min.field0_0x0 + 8) = uVar19;
      *(undefined8 *)((longlong)&(this->StaticMeshBounds).Max.field0_0x0 + 4) =
           *(undefined8 *)((longlong)&(param_1->StaticMeshBounds).Max.field0_0x0 + 4);
      this->NumCustomDataFloats = param_1->NumCustomDataFloats;
      dVar2 = (this->PrimitiveLocalToWorld).M[3][0];
      dVar3 = (this->PrimitiveLocalToWorld).M[3][2];
      dVar4 = (this->PrimitiveLocalToWorld).M[3][1];
      fVar34 = (float)dVar2;
      local_c58._s_0.Z = (float)dVar3;
      fVar35 = (float)dVar4;
      local_9b0._s_0.X = (double)fVar34;
      local_c28 = CONCAT44(fVar35,fVar34);
      local_c14 = (float)(dVar3 - (double)local_c58._s_0.Z);
      local_9b0._s_0.Y = (double)fVar35;
      local_9b0._s_0.Z = (double)local_c58._s_0.Z;
      local_c1c = CONCAT44((float)(dVar4 - (double)fVar35),(float)(dVar2 - (double)fVar34));
      local_c58._0_8_ = CONCAT44(fVar35,fVar34);
      local_c20 = local_c58._s_0.Z;
      pFVar17 = FDFMatrix::MakeToRelativeWorldMatrix
                          (&local_268,(TVector<float> *)&local_c58._s_0,&this->PrimitiveLocalToWorld
                          );
      local_998._s_0.X = (pFVar17->M).M[0][0];
      local_998._s_0.Y = (pFVar17->M).M[0][1];
      local_998._s_0.Z = (pFVar17->M).M[0][2];
      local_98c._s_0.X = (pFVar17->M).M[1][0];
      local_98c._s_0.Y = (pFVar17->M).M[1][1];
      local_98c._s_0.Z = (pFVar17->M).M[1][2];
      local_980._s_0.X = (pFVar17->M).M[2][0];
      local_980._s_0.Y = (pFVar17->M).M[2][1];
      local_c98.Flags = this->Flags;
      local_980._s_0.Z = (pFVar17->M).M[2][2];
      local_974._s_0.X = (pFVar17->M).M[3][0];
      local_974._s_0.Y = (pFVar17->M).M[3][1];
      local_974._s_0.Z = (pFVar17->M).M[3][2];
      pFVar5 = (this->LegacyBuildData).Ptr;
      local_9c8[1]._4_8_ =
           *(undefined8 *)((longlong)&(param_1->StaticMeshBounds).Max.field0_0x0 + 4);
      local_9c8[0]._0_8_ = *(undefined8 *)&(param_1->StaticMeshBounds).Min.field0_0x0;
      local_9c8._8_8_ = *(undefined8 *)((longlong)&(param_1->StaticMeshBounds).Min.field0_0x0 + 8);
      if (&local_960 != pFVar5) {
        pFVar29 = (pFVar5->LegacyStaticMeshInstanceData).Ptr;
        (pFVar5->LegacyStaticMeshInstanceData).Ptr = (FStaticMeshInstanceData *)0x0;
        local_960.LegacyStaticMeshInstanceData.Ptr = pFVar29;
      }
      pFVar5 = (this->LegacyBuildData).Ptr;
      pTVar22 = &pFVar5->LegacyInstanceReorderTable;
      if (&local_960.LegacyInstanceReorderTable != pTVar22) {
        local_960.LegacyInstanceReorderTable.AllocatorInstance.Data =
             (pTVar22->AllocatorInstance).Data;
        (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_960.LegacyInstanceReorderTable.ArrayNum =
             (pFVar5->LegacyInstanceReorderTable).ArrayNum;
        local_960.LegacyInstanceReorderTable.ArrayMax =
             (pFVar5->LegacyInstanceReorderTable).ArrayMax;
        (pFVar5->LegacyInstanceReorderTable).ArrayNum = 0;
        (pFVar5->LegacyInstanceReorderTable).ArrayMax = 0;
      }
      pFVar5 = (this->LegacyBuildData).Ptr;
      pFVar23 = &pFVar5->InstanceIdIndexMap;
      if (&local_960.InstanceIdIndexMap != pFVar23) {
        local_960.InstanceIdIndexMap.IndexToIdMap.AllocatorInstance.Data =
             (pFVar23->IndexToIdMap).AllocatorInstance.Data;
        (pFVar23->IndexToIdMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_960.InstanceIdIndexMap.IndexToIdMap.ArrayNum =
             (pFVar5->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
        local_960.InstanceIdIndexMap.IndexToIdMap.ArrayMax =
             (pFVar5->InstanceIdIndexMap).IndexToIdMap.ArrayMax;
        (pFVar5->InstanceIdIndexMap).IndexToIdMap.ArrayNum = 0;
        (pFVar5->InstanceIdIndexMap).IndexToIdMap.ArrayMax = 0;
      }
      pTVar22 = &(pFVar5->InstanceIdIndexMap).IdToIndexMap;
      if (&local_960.InstanceIdIndexMap.IdToIndexMap != pTVar22) {
        local_960.InstanceIdIndexMap.IdToIndexMap.AllocatorInstance.Data =
             (pTVar22->AllocatorInstance).Data;
        (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_960.InstanceIdIndexMap.IdToIndexMap.ArrayNum =
             (pFVar5->InstanceIdIndexMap).IdToIndexMap.ArrayNum;
        local_960.InstanceIdIndexMap.IdToIndexMap.ArrayMax =
             (pFVar5->InstanceIdIndexMap).IdToIndexMap.ArrayMax;
        (pFVar5->InstanceIdIndexMap).IdToIndexMap.ArrayNum = 0;
        (pFVar5->InstanceIdIndexMap).IdToIndexMap.ArrayMax = 0;
      }
      local_960.InstanceIdIndexMap.NumInstances = (pFVar5->InstanceIdIndexMap).NumInstances;
      local_c98.bInstanceDataIsGPUOnly = false;
      local_c98.NumInstances = pFVar29->NumInstances;
      local_968 = local_c98.Flags;
      local_964 = fVar36;
      local_c98.PayloadDataStride =
           FInstanceSceneDataBuffers::CalcPayloadDataStride
                     (local_c98.Flags,this->NumCustomDataFloats,0);
      FLegacyRebuildChangeSet::FLegacyRebuildChangeSet
                (&local_898.ExternalChangeSet,(FLegacyRebuildChangeSet *)&local_9c8[0]._s_0);
      local_898.Proxy.Object = (this->Proxy).Object;
      local_898.Proxy.SharedReferenceCount.ReferenceController =
           (this->Proxy).SharedReferenceCount.ReferenceController;
      if (local_898.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_898.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_898.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,_FPrimitiveInstanceDataManager::FlushChanges_::__l14::<lambda_1>_>
                (bVar31,&this->Proxy,&local_c98,&local_898);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_898.Proxy.SharedReferenceCount.ReferenceController);
      FLegacyRebuildChangeSet::~FLegacyRebuildChangeSet(&local_898.ExternalChangeSet);
      pFVar5 = (this->LegacyBuildData).Ptr;
      if (pFVar5 != (FLegacyBuildData *)0x0) {
        (this->LegacyBuildData).Ptr = (FLegacyBuildData *)0x0;
        (**(code **)&pFVar5[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum)();
      }
      bVar12 = true;
      if (local_960.InstanceIdIndexMap.IdToIndexMap.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_960.InstanceIdIndexMap.IdToIndexMap.AllocatorInstance.Data);
      }
      if (local_960.InstanceIdIndexMap.IndexToIdMap.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_960.InstanceIdIndexMap.IndexToIdMap.AllocatorInstance.Data);
      }
      if (local_960.LegacyInstanceReorderTable.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_960.LegacyInstanceReorderTable.AllocatorInstance.Data);
      }
      TVar11.Ptr = local_960.LegacyStaticMeshInstanceData.Ptr;
      if (local_960.LegacyStaticMeshInstanceData.Ptr != (FStaticMeshInstanceData *)0x0) {
        pFVar6 = (local_960.LegacyStaticMeshInstanceData.Ptr)->InstanceOriginData;
        if (pFVar6 != (FStaticMeshVertexDataInterface *)0x0) {
          (**(code **)*pFVar6)(pFVar6,1);
        }
        pFVar6 = (TVar11.Ptr)->InstanceLightmapData;
        if (pFVar6 != (FStaticMeshVertexDataInterface *)0x0) {
          (**(code **)*pFVar6)(pFVar6,1);
        }
        pFVar6 = (TVar11.Ptr)->InstanceTransformData;
        if (pFVar6 != (FStaticMeshVertexDataInterface *)0x0) {
          (**(code **)*pFVar6)(pFVar6,1);
        }
        pFVar6 = (TVar11.Ptr)->InstanceCustomData;
        if (pFVar6 != (FStaticMeshVertexDataInterface *)0x0) {
          (**(code **)*pFVar6)(pFVar6,1);
        }
        ::operator_delete(TVar11.Ptr,0x50);
      }
    }
    dVar2 = __real_3e45798ee0000000;
    if ((this->TrackingState - Tracked & 0xfd) == 0) {
      if (((this->bNumCustomDataChanged == '\0' &&
            (this->bBakedLightingDataChanged == '\0' &&
            (this->bTransformChangedAllInstances == '\0' && this->bAnyInstanceChange == '\0'))) &&
          ((this->InstanceUpdateTracker).MaxIndex < 1)) &&
         ((this->InstanceUpdateTracker).Removed.NumBits == 0)) {
        bVar26 = 0;
      }
      else {
        bVar26 = 2;
      }
      bVar14 = UE::Math::TMatrix<double>::Equals
                         (&param_1->PrimitiveLocalToWorld,&this->PrimitiveLocalToWorld,
                          __real_3e45798ee0000000);
      if ((this->Flags).Packed != (param_1->Flags).Packed) {
        bVar32 = 2;
      }
      if (fVar36 == this->AbsMaxDisplacement) {
        bVar27 = 0;
      }
      else {
        bVar27 = 0x10;
      }
      if ((((__real_38d1b717 <
             (float)((uint)((this->StaticMeshBounds).Min.field0_0x0._s_0.X -
                           (param_1->StaticMeshBounds).Min.field0_0x0._s_0.X) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
           (__real_38d1b717 <
            (float)((uint)((this->StaticMeshBounds).Min.field0_0x0._s_0.Y -
                          (param_1->StaticMeshBounds).Min.field0_0x0._s_0.Y) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
          ((__real_38d1b717 <
            (float)((uint)((this->StaticMeshBounds).Min.field0_0x0._s_0.Z -
                          (param_1->StaticMeshBounds).Min.field0_0x0._s_0.Z) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) ||
           ((__real_38d1b717 <
             (float)((uint)((this->StaticMeshBounds).Max.field0_0x0._s_0.X -
                           (param_1->StaticMeshBounds).Max.field0_0x0._s_0.X) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) ||
            (__real_38d1b717 <
             (float)((uint)((this->StaticMeshBounds).Max.field0_0x0._s_0.Y -
                           (param_1->StaticMeshBounds).Max.field0_0x0._s_0.Y) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff))))))) ||
         (__real_38d1b717 <
          (float)((uint)((this->StaticMeshBounds).Max.field0_0x0._s_0.Z -
                        (param_1->StaticMeshBounds).Max.field0_0x0._s_0.Z) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        bVar28 = 0x20;
      }
      else {
        bVar28 = 0;
      }
      bVar28 = bVar27 | (!bVar14 | bVar32) << 2 | bVar26 | bVar28;
    }
    else {
      bVar28 = 1;
    }
    if ((this->Mode == ExternalLegacyData) &&
       (bVar14 = UE::Math::TMatrix<double>::Equals
                           (&param_1->PrimitiveLocalToWorld,&this->PrimitiveLocalToWorld,dVar2),
       !bVar14)) {
      bVar28 = bVar28 | 4;
    }
    EVar30 = this->TrackingState;
    pFVar18 = param_1;
    if (EVar30 != Initial) {
      pFVar18 = (FInstanceUpdateComponentDesc *)&this->PrimitiveLocalToWorld;
    }
    local_918.M[0][0] = (pFVar18->PrimitiveLocalToWorld).M[0][0];
    local_918.M[0][1] = (pFVar18->PrimitiveLocalToWorld).M[0][1];
    local_918.M[0][2] = (pFVar18->PrimitiveLocalToWorld).M[0][2];
    local_918.M[0][3] = (pFVar18->PrimitiveLocalToWorld).M[0][3];
    local_918.M[1][0] = (pFVar18->PrimitiveLocalToWorld).M[1][0];
    local_918.M[1][1] = (pFVar18->PrimitiveLocalToWorld).M[1][1];
    local_918.M[1][2] = (pFVar18->PrimitiveLocalToWorld).M[1][2];
    local_918.M[1][3] = (pFVar18->PrimitiveLocalToWorld).M[1][3];
    local_918.M[2][0] = (pFVar18->PrimitiveLocalToWorld).M[2][0];
    local_918.M[2][1] = (pFVar18->PrimitiveLocalToWorld).M[2][1];
    local_918.M[2][2] = (pFVar18->PrimitiveLocalToWorld).M[2][2];
    local_918.M[2][3] = (pFVar18->PrimitiveLocalToWorld).M[2][3];
    local_918.M[3][0] = (pFVar18->PrimitiveLocalToWorld).M[3][0];
    local_918.M[3][1] = (pFVar18->PrimitiveLocalToWorld).M[3][1];
    local_918.M[3][2] = (pFVar18->PrimitiveLocalToWorld).M[3][2];
    local_918.M[3][3] = (pFVar18->PrimitiveLocalToWorld).M[3][3];
    dVar2 = (param_1->PrimitiveLocalToWorld).M[0][1];
    (this->PrimitiveLocalToWorld).M[0][0] = (param_1->PrimitiveLocalToWorld).M[0][0];
    (this->PrimitiveLocalToWorld).M[0][1] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[0][3];
    (this->PrimitiveLocalToWorld).M[0][2] = (param_1->PrimitiveLocalToWorld).M[0][2];
    (this->PrimitiveLocalToWorld).M[0][3] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[1][1];
    (this->PrimitiveLocalToWorld).M[1][0] = (param_1->PrimitiveLocalToWorld).M[1][0];
    (this->PrimitiveLocalToWorld).M[1][1] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[1][3];
    (this->PrimitiveLocalToWorld).M[1][2] = (param_1->PrimitiveLocalToWorld).M[1][2];
    (this->PrimitiveLocalToWorld).M[1][3] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[2][1];
    (this->PrimitiveLocalToWorld).M[2][0] = (param_1->PrimitiveLocalToWorld).M[2][0];
    (this->PrimitiveLocalToWorld).M[2][1] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[2][3];
    (this->PrimitiveLocalToWorld).M[2][2] = (param_1->PrimitiveLocalToWorld).M[2][2];
    (this->PrimitiveLocalToWorld).M[2][3] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[3][1];
    (this->PrimitiveLocalToWorld).M[3][0] = (param_1->PrimitiveLocalToWorld).M[3][0];
    (this->PrimitiveLocalToWorld).M[3][1] = dVar2;
    dVar2 = (param_1->PrimitiveLocalToWorld).M[3][2];
    dVar3 = (param_1->PrimitiveLocalToWorld).M[3][3];
    this->AbsMaxDisplacement = fVar36;
    (this->PrimitiveLocalToWorld).M[3][2] = dVar2;
    (this->PrimitiveLocalToWorld).M[3][3] = dVar3;
    uVar19 = *(undefined8 *)((longlong)&(param_1->StaticMeshBounds).Min.field0_0x0 + 8);
    *(undefined8 *)&(this->StaticMeshBounds).Min.field0_0x0 =
         *(undefined8 *)&(param_1->StaticMeshBounds).Min.field0_0x0;
    *(undefined8 *)((longlong)&(this->StaticMeshBounds).Min.field0_0x0 + 8) = uVar19;
    *(undefined8 *)((longlong)&(this->StaticMeshBounds).Max.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(param_1->StaticMeshBounds).Max.field0_0x0 + 4);
    this->Flags = param_1->Flags;
    this->NumCustomDataFloats = param_1->NumCustomDataFloats;
    if (bVar28 != 0) {
      if (((param_1->NumSourceInstances == 0) && ((bVar28 & 2) == 0)) &&
         (((bVar28 & 4) == 0 || (param_1->NumProxyInstances == 0)))) {
        if (EVar30 != Disabled) {
          this->TrackingState = Initial;
          pFVar5 = (this->LegacyBuildData).Ptr;
          if (pFVar5 != (FLegacyBuildData *)0x0) {
            (this->LegacyBuildData).Ptr = (FLegacyBuildData *)0x0;
            (**(code **)&pFVar5[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum)();
          }
          FInstanceAttributeTracker::Reset(&this->InstanceUpdateTracker);
          this->bNumCustomDataChanged = '\0';
          this->bPrimitiveTransformChanged = '\0';
          this->bTransformChangedAllInstances = '\0';
          this->bBakedLightingDataChanged = '\0';
        }
      }
      else {
        if (EVar30 == Optimized) {
          if (bLoggedOnce == false) {
            if (4 < (byte)LogInstanceProxy._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInstanceProxy)
              ;
            }
            bLoggedOnce = true;
          }
          local_c38 = 0;
          FStack_c30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (&this->PrecomputedOptimizationData !=
              (TSharedPtr<FISMPrecomputedSpatialHashData_const_,1> *)&local_c38) {
            (this->PrecomputedOptimizationData).Object = (FISMPrecomputedSpatialHashData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->PrecomputedOptimizationData).SharedReferenceCount,&FStack_c30);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_c30.ReferenceController);
        }
        EVar30 = Tracked;
        if (((bVar28 & 9) != 0) || (this->TrackingState == Optimized)) {
          bVar33 = true;
        }
        local_b78._48_4_ = ___xmm_000000007fffffff7fffffff00000000;
        local_b78._52_4_ = _UNK_151964284;
        local_b78._56_4_ = _UNK_151964288;
        local_b78._60_4_ = _UNK_15196428c;
        local_b78._0_8_ = (FScriptContainerElement *)0x0;
        local_b78._8_4_ = 0;
        local_b78._12_4_ = 0;
        local_b78._32_8_ = (ForElementType<unsigned_int>)0x0;
        local_b78._40_4_ = 0;
        local_b78._44_4_ = 0x80;
        FInstanceAttributeTracker::Move
                  ((FInstanceAttributeTracker *)local_b78,&this->InstanceUpdateTracker);
        local_b78._400_8_ = (TReferenceControllerBase<1> *)0x0;
        pFStack_9e0 = (FScriptContainerElement *)0x0;
        local_b78._82_2_ = (FInstanceDataFlags)0x0;
        local_b78._84_2_ = (FInstanceDataFlags)0x0;
        local_b78._88_8_ = (FScriptContainerElement *)0x0;
        local_b78._96_4_ = 0;
        local_b78._100_4_ = 0;
        local_b78._104_4_ = 0;
        local_b78._112_8_ = (FScriptContainerElement *)0x0;
        local_b78._120_4_ = 0;
        local_b78._124_4_ = 0;
        local_b78._128_8_ = (FScriptContainerElement *)0x0;
        local_b78._136_4_ = 0;
        local_b78._140_4_ = 0;
        local_b78._144_8_ = (FScriptContainerElement *)0x0;
        local_b78._152_4_ = 0;
        local_b78._156_4_ = 0;
        local_b78._160_8_ = (FScriptContainerElement *)0x0;
        local_b78._168_4_ = 0;
        local_b78._172_4_ = 0;
        local_b78._176_8_ = (FScriptContainerElement *)0x0;
        local_b78._184_4_ = 0;
        local_b78._188_4_ = 0;
        local_b78._192_8_ = (FScriptContainerElement *)0x0;
        local_b78._200_4_ = 0;
        local_b78._204_4_ = 0;
        local_b78._208_8_ = 0;
        local_b78._248_8_ = 0;
        local_b78[0x178] = false;
        local_b78._380_4_ = 0.0;
        local_b78._392_8_ = (FPrecomputedInstanceSpatialHashData *)0x0;
        local_9d8 = 0;
        if (((bVar28 & 4) != 0) ||
           (local_b78[0x56] = false, this->bTransformChangedAllInstances != '\0')) {
          local_b78[0x56] = true;
        }
        local_9d0 = param_1->NumProxyInstances;
        local_b78._384_4_ = param_1->NumSourceInstances;
        local_b78[0x57] = *(int *)&this->field_0x8 == 0;
        local_b78[0x50] = bVar33;
        if (*(int *)&this->field_0x8 == 0) {
          local_b78._388_4_ = *(undefined4 *)&this->field_0x20;
        }
        else {
          local_b78._388_4_ = (this->ValidInstanceIdMask).NumBits;
          local_c88.Tracker = (FInstanceAttributeTracker *)local_b78;
          if ((bVar33 == false) && (local_b78._76_4_ + local_b78._64_4_ != local_b78._384_4_)) {
            local_c88.bFullUpdate = false;
            local_c88.NumItems = local_b78._76_4_ + local_b78._64_4_;
          }
          else {
            local_c88.bFullUpdate = true;
            local_c88.NumItems = local_b78._384_4_;
          }
          Gather<FInstanceAttributeTracker::FDeltaRange<3>,FPrimitiveInstanceId,TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>_>
                    (&local_c88,
                     (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)(local_b78 + 0x58),
                     (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)this,1);
        }
        this->bNumCustomDataChanged = '\0';
        this->bAnyInstanceChange = '\0';
        this->bTransformChangedAllInstances = '\0';
        this->bBakedLightingDataChanged = '\0';
        dVar2 = (this->PrimitiveLocalToWorld).M[3][0];
        dVar3 = (this->PrimitiveLocalToWorld).M[3][2];
        dVar4 = (this->PrimitiveLocalToWorld).M[3][1];
        fVar34 = (float)dVar2;
        local_c48._s_0.Z = (float)dVar3;
        fVar36 = (float)dVar4;
        local_b78._304_8_ = (undefined8)fVar34;
        local_c10 = CONCAT44(fVar36,fVar34);
        local_bfc = (float)(dVar3 - (double)local_c48._s_0.Z);
        local_b78._312_8_ = (undefined8)fVar36;
        local_b78._320_8_ = (undefined8)local_c48._s_0.Z;
        local_c04 = CONCAT44((float)(dVar4 - (double)fVar36),(float)(dVar2 - (double)fVar34));
        local_c48._0_8_ = CONCAT44(fVar36,fVar34);
        local_c08 = local_c48._s_0.Z;
        pFVar17 = FDFMatrix::MakeToRelativeWorldMatrix
                            (&local_218,(TVector<float> *)&local_c48._s_0,
                             &this->PrimitiveLocalToWorld);
        local_b78._260_4_ = (pFVar17->M).M[0][1];
        local_b78._264_4_ = (pFVar17->M).M[0][2];
        local_b78._256_4_ = (pFVar17->M).M[0][0];
        local_b78._272_4_ = (pFVar17->M).M[1][1];
        local_b78._276_4_ = (pFVar17->M).M[1][2];
        local_b78._268_4_ = (pFVar17->M).M[1][0];
        local_b78._284_4_ = (pFVar17->M).M[2][1];
        local_b78._280_4_ = (pFVar17->M).M[2][0];
        local_b78._288_4_ = (pFVar17->M).M[2][2];
        local_b78._292_4_ = (pFVar17->M).M[3][0];
        local_b78._296_4_ = (pFVar17->M).M[3][1];
        local_b78._300_4_ = (pFVar17->M).M[3][2];
        local_b78._380_4_ = this->AbsMaxDisplacement;
        local_b78._82_2_ = (this->Flags).Packed;
        local_b78._104_4_ = this->NumCustomDataFloats;
        FInstanceUpdateChangeSet::SetSharedLocalBounds
                  ((FInstanceUpdateChangeSet *)local_b78,&param_1->StaticMeshBounds);
        if (this->Mode == Default) {
          if (((int)local_9d8 != 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                  ,0x276,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          iVar15 = *(int *)&this->field_0x8;
          if (iVar15 == 0) {
            iVar15 = *(int *)&this->field_0x20;
          }
          if ((param_1->NumSourceInstances != iVar15) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComponentData.NumSourceInstances == GetMaxInstanceIndex()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                  ,0x277,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          iVar15 = *(int *)&this->field_0x8;
          if (iVar15 == 0) {
            iVar15 = *(int *)&this->field_0x20;
          }
          if ((param_1->NumProxyInstances != iVar15) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComponentData.NumProxyInstances == GetMaxInstanceIndex()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                  ,0x278,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
        }
        UE::Core::Private::Function::CheckCallable(*(void **)&param_1->BuildChangeSet);
        pcVar10 = *(code **)&param_1->BuildChangeSet;
        plVar7 = *(longlong **)&(param_1->BuildChangeSet).field_0x28;
        plVar24 = (longlong *)&(param_1->BuildChangeSet).field_0x10;
        if (plVar7 != (longlong *)0x0) {
          plVar24 = plVar7;
        }
        uVar19 = (**(code **)(*plVar24 + 8))();
        (*pcVar10)(uVar19,local_b78);
        if ((((local_b78._82_4_ & 2) != 0) && (this->NumCustomDataFloats != local_b78._104_4_)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ChangeSet.Flags.bHasPerInstanceCustomData || NumCustomDataFloats == ChangeSet.NumCustomDataFloats"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                ,0x27f,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        if ((local_b78._82_4_ & 4) != 0) {
          this_00 = FMotionVectorSimulation::Get();
          pUVar20 = FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
          FMotionVectorSimulation::GetPreviousTransform(this_00,&local_be8,pUVar20);
          if (local_be8.bIsSet == false) {
            pTVar21 = &local_918;
            pTVar25 = &local_c68;
            local_c68._s_0.X = (float)(double)local_b78._304_8_;
            pFVar17 = &local_178;
            local_c68._s_0.Y = (float)(double)local_b78._312_8_;
            local_c68._s_0.Z = (float)(double)local_b78._320_8_;
          }
          else {
            pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale
                                (&local_be8.TypedValue,&local_128);
            pTVar25 = &local_c78;
            pFVar17 = &local_1c8;
            local_c78._s_0.X = (float)(double)local_b78._304_8_;
            local_c78._s_0.Y = (float)(double)local_b78._312_8_;
            local_c78._s_0.Z = (float)(double)local_b78._320_8_;
          }
          pFVar17 = FDFMatrix::MakeToRelativeWorldMatrix
                              (pFVar17,(TVector<float> *)&pTVar25->_s_0,pTVar21);
          local_b78._368_4_ = (pFVar17->M).M[3][1];
          local_b78._372_4_ = (pFVar17->M).M[3][2];
          local_b78._332_4_ = (pFVar17->M).M[0][1];
          local_b78._336_4_ = (pFVar17->M).M[0][2];
          local_b78._340_4_ = (pFVar17->M).M[1][0];
          local_b78._344_4_ = (pFVar17->M).M[1][1];
          local_b78._348_4_ = (pFVar17->M).M[1][2];
          local_b78._352_4_ = (pFVar17->M).M[2][0];
          local_b78._356_4_ = (pFVar17->M).M[2][1];
          local_b78._360_4_ = (pFVar17->M).M[2][2];
          local_b78._364_4_ = (pFVar17->M).M[3][0];
          local_b78._328_4_ = (pFVar17->M).M[0][0];
          local_b78[0x178] = true;
        }
        iVar15 = local_9d0;
        local_ca8.bInstanceDataIsGPUOnly = false;
        local_ca8.NumInstances = local_9d0;
        local_ca8.PayloadDataStride =
             FInstanceSceneDataBuffers::CalcPayloadDataStride
                       ((FInstanceDataFlags)local_b78._82_2_,local_b78._104_4_,0);
        local_ca8.Flags.Packed = local_b78._82_2_;
        if (__CsvProfilerStat663 == false) {
          FCsvProfilerTrace::OutputInlineStat("NumInstanceTransformUpdates",0);
          __CsvProfilerStat663 = true;
        }
        FCsvProfiler::RecordCustomStat("NumInstanceTransformUpdates",0,local_b78._120_4_,Accumulate)
        ;
        if ((this->Mode == ExternalLegacyData) && ((bVar28 & 4) != 0)) {
          EVar30 = Initial;
          FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
                    ((FInstanceUpdateChangeSet *)&local_7d8,(FInstanceUpdateChangeSet *)local_b78);
          local_7d8.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data = pFStack_9e0;
          local_7d8.ChangeSet.LegacyInstanceReorderTable.ArrayNum = (int)local_9d8;
          local_7d8.ChangeSet.LegacyInstanceReorderTable.ArrayMax = local_9d8._4_4_;
          local_7d8.ChangeSet.PostUpdateNumInstances = local_9d0;
          local_7d8.Proxy.Object = (this->Proxy).Object;
          local_7d8.Proxy.SharedReferenceCount.ReferenceController =
               (this->Proxy).SharedReferenceCount.ReferenceController;
          pFStack_9e0 = (void *)0x0;
          local_9d8 = 0;
          if (local_7d8.Proxy.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_7d8.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_7d8.Proxy.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_7d8.NumHeaderInstances = iVar15;
          DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,_FPrimitiveInstanceDataManager::FlushChanges_::__l124::<lambda_2>_>
                    (bVar31,&this->Proxy,&local_ca8,&local_7d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_7d8.Proxy.SharedReferenceCount.ReferenceController);
          if (local_7d8.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7d8.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data);
          }
          this_01 = &local_7d8;
        }
        else if (bVar33 == false) {
          if (((bVar28 & 1) != 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ChangeDesc.bUntrackedState",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                  ,699,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
                    ((FInstanceUpdateChangeSet *)&local_438,(FInstanceUpdateChangeSet *)local_b78);
          local_438.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data = pFStack_9e0;
          local_438.ChangeSet.LegacyInstanceReorderTable.ArrayNum = (int)local_9d8;
          local_438.ChangeSet.LegacyInstanceReorderTable.ArrayMax = local_9d8._4_4_;
          local_438.ChangeSet.PostUpdateNumInstances = local_9d0;
          local_438.Proxy.Object = (this->Proxy).Object;
          local_438.Proxy.SharedReferenceCount.ReferenceController =
               (this->Proxy).SharedReferenceCount.ReferenceController;
          pFStack_9e0 = (void *)0x0;
          local_9d8 = 0;
          if (local_438.Proxy.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_438.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_438.Proxy.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_438.NumHeaderInstances = iVar15;
          DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,_FPrimitiveInstanceDataManager::FlushChanges_::__l147::<lambda_4>_>
                    (bVar31,&this->Proxy,&local_ca8,&local_438);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_438.Proxy.SharedReferenceCount.ReferenceController);
          if (local_438.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data);
          }
          this_01 = (<lambda_2> *)&local_438;
        }
        else {
          local_608.NumHeaderInstances = iVar15;
          EVar30 = Tracked;
          if ((this->PrecomputedOptimizationData).Object != (FISMPrecomputedSpatialHashData *)0x0) {
            if ((this->Mode != Default) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mode == EMode::Default",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                    ,0x2a9,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            if (((param_1->ComponentMobility != Static) &&
                (param_1->ComponentMobility != Stationary)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ComponentData.ComponentMobility == EComponentMobility::Static || ComponentData.ComponentMobility == EComponentMobility::Stationary"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                                    ,0x2aa,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              uVar13 = (*pcVar10)();
              return (bool)uVar13;
            }
            pFVar16 = TSharedPtr<FISMCInstanceDataSceneProxy,1>::operator->(&this->Proxy);
            pFVar16->bBuildOptimized = true;
            pFVar16 = TSharedPtr<FISMCInstanceDataSceneProxy,1>::operator->(&this->Proxy);
            pTVar8 = (this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController;
            pFVar9 = (this->PrecomputedOptimizationData).Object;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_bf8 = (pFVar16->PrecomputedOptimizationData).Object;
            pTStack_bf0 = (pFVar16->PrecomputedOptimizationData).SharedReferenceCount.
                          ReferenceController;
            (pFVar16->PrecomputedOptimizationData).Object = pFVar9;
            (pFVar16->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController = pTVar8
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_bf0);
            EVar30 = Optimized;
            local_608.NumHeaderInstances = local_ca8.NumInstances;
          }
          FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
                    ((FInstanceUpdateChangeSet *)&local_608,(FInstanceUpdateChangeSet *)local_b78);
          local_608.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data = pFStack_9e0;
          local_608.ChangeSet.LegacyInstanceReorderTable.ArrayNum = (int)local_9d8;
          local_608.ChangeSet.LegacyInstanceReorderTable.ArrayMax = local_9d8._4_4_;
          local_608.ChangeSet.PostUpdateNumInstances = local_9d0;
          local_608.Proxy.Object = (this->Proxy).Object;
          local_608.Proxy.SharedReferenceCount.ReferenceController =
               (this->Proxy).SharedReferenceCount.ReferenceController;
          pFStack_9e0 = (void *)0x0;
          local_9d8 = 0;
          if (local_608.Proxy.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_608.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_608.Proxy.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,_FPrimitiveInstanceDataManager::FlushChanges_[::A]::<lambda_3>_>
                    (bVar31,&this->Proxy,&local_ca8,&local_608);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_608.Proxy.SharedReferenceCount.ReferenceController);
          if (local_608.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_608.ChangeSet.LegacyInstanceReorderTable.AllocatorInstance.Data);
          }
          this_01 = (<lambda_2> *)&local_608;
        }
        FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet((FInstanceUpdateChangeSet *)this_01);
        if (pFStack_9e0 != (void *)0x0) {
          FMemory::Free(pFStack_9e0);
        }
        FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet((FInstanceUpdateChangeSet *)local_b78);
        this->TrackingState = EVar30;
        bVar12 = true;
      }
    }
  }
  return bVar12;
}

// FreeInstanceId @ 147d9ece0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::FreeInstanceId
          (FPrimitiveInstanceDataManager *this,FPrimitiveInstanceId param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar4 = 0;
    if (param_1.Id < *(int *)&this->field_0x18) {
      uVar4 = (uint)~param_1.Id >> 0x1f;
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
    *(undefined4 *)(*(longlong *)&this->field_0x10 + (longlong)param_1.Id * 4) = 0xffffffff;
    if ((param_1.Id < 0) || ((this->ValidInstanceIdMask).NumBits <= param_1.Id)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&this->ValidInstanceIdMask;
    }
    puVar1 = (uint *)((longlong)FVar5 +
                     (longlong)((int)(param_1.Id + (param_1.Id >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1.Id & 0x1f));
    if (this->IdSearchStartIndex < param_1.Id) {
      param_1.Id = this->IdSearchStartIndex;
    }
    this->IdSearchStartIndex = param_1.Id;
  }
  return;
}

// GetAllocatedSize @ 147da3e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ulong64 __thiscall
FPrimitiveInstanceDataManager::GetAllocatedSize(FPrimitiveInstanceDataManager *this)

{
  return (ulonglong)(((this->ValidInstanceIdMask).MaxBits + 0x1fU >> 5) << 2) +
         (ulonglong)(((this->InstanceUpdateTracker).Removed.MaxBits + 0x1fU >> 5) << 2) +
         (longlong)(this->InstanceUpdateTracker).Data.ArrayMax * 4;
}

// GetMaxInstanceId @ 147da66e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FPrimitiveInstanceDataManager::GetMaxInstanceId(FPrimitiveInstanceDataManager *this)

{
  if (*(int *)&this->field_0x8 == 0) {
    return *(int *)&this->field_0x20;
  }
  return (this->ValidInstanceIdMask).NumBits;
}

// GetMaxInstanceIndex @ 147da6700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FPrimitiveInstanceDataManager::GetMaxInstanceIndex(FPrimitiveInstanceDataManager *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this->field_0x8;
  if (iVar1 == 0) {
    iVar1 = *(int *)&this->field_0x20;
  }
  return iVar1;
}

// GetOrCreateProxy @ 147da6c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TSharedPtr<FISMCInstanceDataSceneProxy,1> * __thiscall
FPrimitiveInstanceDataManager::GetOrCreateProxy
          (FPrimitiveInstanceDataManager *this,
          TSharedPtr<FISMCInstanceDataSceneProxy,1> *__return_storage_ptr__,Type param_1)

{
  EMode EVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FISMCInstanceDataSceneProxy,1> *pTVar5;
  FSharedReferencer<1> FVar6;
  FISMCInstanceDataSceneProxy *pFVar7;
  FStaticShaderPlatform FVar8;
  FISMCInstanceDataSceneProxy *local_68;
  FSharedReferencer<1> FStack_60;
  FISMCInstanceDataSceneProxy *local_58;
  FSharedReferencer<1> FStack_50;
  FISMCInstanceDataSceneProxy *local_48;
  FSharedReferencer<1> FStack_40;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  
  if (param_1 == Num) {
    FVar8.Platform = SP_NumPlatforms;
  }
  else {
    FVar8.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  pTVar5 = &this->Proxy;
  pFVar7 = pTVar5->Object;
  if ((pFVar7 != (FISMCInstanceDataSceneProxy *)0x0) &&
     ((FVar8.Platform != (pFVar7->ShaderPlatform).Platform || (param_1 != pFVar7->FeatureLevel)))) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)&local_38) {
      pTVar5->Object = (FISMCInstanceDataSceneProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Proxy).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    ClearChangeTracking(this);
  }
  if (pTVar5->Object == (FISMCInstanceDataSceneProxy *)0x0) {
    bVar3 = UseGPUScene(FVar8,(FGenericStaticFeatureLevel)param_1);
    EVar1 = this->Mode;
    if (bVar3) {
      if ((EVar1 == Legacy) || (EVar1 == ExternalLegacyData)) {
        pTVar4 = ::operator_new(0x1d8);
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          local_48 = ___xmm_00000000000000000000000000000010;
          pFVar7 = (FISMCInstanceDataSceneProxy *)&DAT_00000010;
          FVar6.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar4->SharedReferenceCount = (atomic<int>)0x1;
          pTVar4->WeakReferenceCount = (atomic<int>)0x1;
          pTVar4->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFISMCInstanceDataSceneProxyLegacyReordered___00_SharedPointerInternals__6B_
          ;
          FISMCInstanceDataSceneProxy::FISMCInstanceDataSceneProxy
                    ((FISMCInstanceDataSceneProxy *)(pTVar4 + 1),FVar8,param_1);
          pTVar4[1]._padding_ = (longlong)&___7FISMCInstanceDataSceneProxyLegacyReordered__6B_;
          pFVar7 = (FISMCInstanceDataSceneProxy *)(pTVar4 + 1);
          pTVar4[0x1b].SharedReferenceCount = (atomic<int>)0x0;
          pTVar4[0x1b].WeakReferenceCount = (atomic<int>)0x0;
          pTVar4[0x1c]._padding_ = 0;
          pTVar4[0x1d]._padding_ = 0;
          *(bool *)&pTVar4[0x1c].SharedReferenceCount = EVar1 != ExternalLegacyData;
          if ((pFVar7 == (FISMCInstanceDataSceneProxy *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)(*pcVar2)();
            return pTVar5;
          }
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          FVar6.ReferenceController = pTVar4;
          local_48 = pFVar7;
        }
        FStack_40.ReferenceController = FVar6.ReferenceController;
        if (pTVar5 != (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)&local_48) {
          local_48 = (FISMCInstanceDataSceneProxy *)0x0;
          pTVar5->Object = pFVar7;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Proxy).SharedReferenceCount,&FStack_40);
          FVar6.ReferenceController = FStack_40.ReferenceController;
        }
      }
      else {
        pTVar4 = ::operator_new(0x1b8);
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          local_58 = ___xmm_00000000000000000000000000000010;
          pFVar7 = (FISMCInstanceDataSceneProxy *)&DAT_00000010;
          FVar6.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar4->SharedReferenceCount = (atomic<int>)0x1;
          pTVar4->WeakReferenceCount = (atomic<int>)0x1;
          pTVar4->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFISMCInstanceDataSceneProxy___00_SharedPointerInternals__6B_
          ;
          FISMCInstanceDataSceneProxy::FISMCInstanceDataSceneProxy
                    ((FISMCInstanceDataSceneProxy *)(pTVar4 + 1),FVar8,param_1);
          pFVar7 = (FISMCInstanceDataSceneProxy *)(pTVar4 + 1);
          if ((pFVar7 == (FISMCInstanceDataSceneProxy *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)(*pcVar2)();
            return pTVar5;
          }
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          FVar6.ReferenceController = pTVar4;
          local_58 = pFVar7;
        }
        FStack_50.ReferenceController = FVar6.ReferenceController;
        if (pTVar5 != (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)&local_58) {
          pTVar5->Object = pFVar7;
          local_58 = (FISMCInstanceDataSceneProxy *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Proxy).SharedReferenceCount,&FStack_50);
          FVar6.ReferenceController = FStack_50.ReferenceController;
        }
      }
    }
    else {
      pTVar4 = ::operator_new(0x1e0);
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        local_68 = ___xmm_00000000000000000000000000000010;
        pFVar7 = (FISMCInstanceDataSceneProxy *)&DAT_00000010;
        FStack_60.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar4->SharedReferenceCount = (atomic<int>)0x1;
        pTVar4->WeakReferenceCount = (atomic<int>)0x1;
        pTVar4->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFISMCInstanceDataSceneProxyNoGPUScene___00_SharedPointerInternals__6B_
        ;
        FISMCInstanceDataSceneProxy::FISMCInstanceDataSceneProxy
                  ((FISMCInstanceDataSceneProxy *)(pTVar4 + 1),FVar8,param_1);
        pFVar7 = (FISMCInstanceDataSceneProxy *)(pTVar4 + 1);
        pTVar4[0x1b].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[0x1b].WeakReferenceCount = (atomic<int>)0x0;
        pTVar4[0x1c]._padding_ = 0;
        pTVar4[0x1d]._padding_ = 0;
        *(bool *)&pTVar4[0x1c].SharedReferenceCount = EVar1 == Legacy;
        pTVar4[1]._padding_ = (longlong)&___7FISMCInstanceDataSceneProxyNoGPUScene__6B_;
        pTVar4[0x1d].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[0x1d].WeakReferenceCount = (atomic<int>)0x0;
        if ((pFVar7 == (FISMCInstanceDataSceneProxy *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)(*pcVar2)();
          return pTVar5;
        }
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        FStack_60.ReferenceController = pTVar4;
        local_68 = pFVar7;
      }
      FVar6.ReferenceController = FStack_60.ReferenceController;
      if (pTVar5 != (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)&local_68) {
        local_68 = (FISMCInstanceDataSceneProxy *)0x0;
        pTVar5->Object = pFVar7;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Proxy).SharedReferenceCount,&FStack_60);
        FVar6.ReferenceController = FStack_60.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar4 = (this->Proxy).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HasAnyInstanceChanges @ 147daaf80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FPrimitiveInstanceDataManager::HasAnyInstanceChanges(FPrimitiveInstanceDataManager *this)

{
  undefined1 *puVar1;
  
  if (((this->bNumCustomDataChanged == '\0' &&
        (this->bBakedLightingDataChanged == '\0' &&
        (this->bTransformChangedAllInstances == '\0' && this->bAnyInstanceChange == '\0'))) &&
      ((this->InstanceUpdateTracker).MaxIndex < 1)) &&
     ((this->InstanceUpdateTracker).Removed.NumBits == 0)) {
    return false;
  }
  return true;
}

// HasIdentityMapping @ 147daafb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FPrimitiveInstanceDataManager::HasIdentityMapping(FPrimitiveInstanceDataManager *this)

{
  return *(int *)&this->field_0x8 == 0;
}

// InitChangeSet @ 147dab410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::InitChangeSet
          (FPrimitiveInstanceDataManager *this,FChangeDesc *param_1,
          FInstanceUpdateComponentDesc *param_2,FISMInstanceUpdateChangeSet *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  FDFMatrix *pFVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  FISMInstanceUpdateChangeSet *local_80;
  FDFMatrix local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar3 = 0x20;
  if (*(int *)&this->field_0x8 != 0) {
    lVar3 = 0x90;
  }
  *(undefined4 *)((longlong)&param_3->_padding_ + 4) =
       *(undefined4 *)
        ((this->InstanceUpdateTracker).Removed.AllocatorInstance.InlineData + lVar3 + -0x38);
  *(bool *)((longlong)&param_3->_padding_ + 7) = *(int *)&this->field_0x8 == 0;
  if (*(int *)&this->field_0x8 != 0) {
    iVar2 = (int)param_3->_padding_;
    local_88._4_4_ = iVar2;
    if (((char)param_3->_padding_ == '\0') &&
       (iVar5 = *(int *)((longlong)&param_3->_padding_ + 4) + (int)param_3->_padding_,
       iVar5 != iVar2)) {
      local_88._0_4_ = local_88._1_4_ << 8;
      local_88._4_4_ = iVar5;
    }
    else {
      local_88[0] = true;
    }
    local_80 = param_3;
    Gather<FInstanceAttributeTracker::FDeltaRange<3>,FPrimitiveInstanceId,TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_>_>
              ((FDeltaRange<3> *)local_88,
               (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)&param_3->_padding_,
               (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)this,1);
  }
  this->bNumCustomDataChanged = '\0';
  this->bAnyInstanceChange = '\0';
  this->bTransformChangedAllInstances = '\0';
  this->bBakedLightingDataChanged = '\0';
  fVar7 = (float)(this->PrimitiveLocalToWorld).M[3][0];
  fVar6 = (float)(this->PrimitiveLocalToWorld).M[3][1];
  fVar8 = (float)(this->PrimitiveLocalToWorld).M[3][2];
  param_3->_padding_ = (longlong)(double)fVar7;
  param_3->_padding_ = (longlong)(double)fVar6;
  param_3->_padding_ = (longlong)(double)fVar8;
  local_88._4_4_ = fVar6;
  local_88._0_4_ = fVar7;
  local_80 = (FISMInstanceUpdateChangeSet *)CONCAT44(local_80._4_4_,fVar8);
  pFVar4 = FDFMatrix::MakeToRelativeWorldMatrix
                     (&local_78,(TVector<float> *)local_88,&this->PrimitiveLocalToWorld);
  fVar6 = (pFVar4->M).M[0][1];
  fVar7 = (pFVar4->M).M[0][2];
  *(float *)&param_3->_padding_ = (pFVar4->M).M[0][0];
  *(float *)((longlong)&param_3->_padding_ + 4) = fVar6;
  *(float *)&param_3->_padding_ = fVar7;
  fVar6 = (pFVar4->M).M[1][1];
  fVar7 = (pFVar4->M).M[1][2];
  *(float *)((longlong)&param_3->_padding_ + 4) = (pFVar4->M).M[1][0];
  *(float *)&param_3->_padding_ = fVar6;
  *(float *)((longlong)&param_3->_padding_ + 4) = fVar7;
  fVar6 = (pFVar4->M).M[2][1];
  fVar7 = (pFVar4->M).M[2][2];
  *(float *)&param_3->_padding_ = (pFVar4->M).M[2][0];
  *(float *)((longlong)&param_3->_padding_ + 4) = fVar6;
  *(float *)&param_3->_padding_ = fVar7;
  fVar6 = (pFVar4->M).M[3][1];
  fVar7 = (pFVar4->M).M[3][2];
  *(float *)((longlong)&param_3->_padding_ + 4) = (pFVar4->M).M[3][0];
  *(float *)&param_3->_padding_ = fVar6;
  *(float *)((longlong)&param_3->_padding_ + 4) = fVar7;
  *(FInstanceDataFlags *)((longlong)&param_3->_padding_ + 2) = this->Flags;
  *(float *)((longlong)&param_3->_padding_ + 4) = this->AbsMaxDisplacement;
  *(int *)&param_3->_padding_ = this->NumCustomDataFloats;
  FInstanceUpdateChangeSet::SetSharedLocalBounds
            ((FInstanceUpdateChangeSet *)param_3,&param_2->StaticMeshBounds);
  return;
}

// Invalidate @ 147dad0a0

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
FPrimitiveInstanceDataManager::Invalidate(FPrimitiveInstanceDataManager *this,int param_1)

{
  UActorComponent *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Proxy != (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)&local_18) {
    (this->Proxy).Object = (FISMCInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Proxy).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  ClearIdTracking(this,param_1);
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
  if (this_00 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderStateDirty(this_00);
    this->bComponentMarkedDirty = '\x01';
  }
  return;
}

// MarkComponentRenderInstancesDirty @ 147db63f0

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
FPrimitiveInstanceDataManager::MarkComponentRenderInstancesDirty
          (FPrimitiveInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if (this->bComponentMarkedDirty == '\0') {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
  }
  return;
}

// MarkForRebuildFromLegacy @ 147db6430

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
FPrimitiveInstanceDataManager::MarkForRebuildFromLegacy
          (FPrimitiveInstanceDataManager *this,
          TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_3)

{
  TPimplPtr<FLegacyBuildData,0> *pTVar1;
  FLegacyBuildData *pFVar2;
  FStaticMeshInstanceData *this_00;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  UActorComponent *this_01;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong local_48;
  FInstanceIdIndexMap local_40;
  
  if (this->TrackingState == Disabled) {
    return;
  }
  if ((param_1->Ptr == (FStaticMeshInstanceData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLegacyInstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x3a6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->Mode == ExternalLegacyData) {
    if ((param_2->ArrayNum != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceReorderTable.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0x3a9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ClearIdTracking(this,param_1->Ptr->NumInstances);
    iVar7 = *(int *)&this->field_0x8;
    if (iVar7 == 0) {
      iVar7 = *(int *)&this->field_0x20;
    }
    if ((iVar7 != param_1->Ptr->NumInstances) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetMaxInstanceIndex() == InLegacyInstanceData->GetNumInstances()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0x3ab,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ClearIdTracking(this,param_2->ArrayNum);
  }
  piVar6 = ::operator_new(0x50);
  piVar8 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    *(undefined8 *)(piVar6 + 2) = 0;
    *(code **)piVar6 = UE::Core::Private::PimplPtr::DeleterFunc<FLegacyBuildData>;
    *(undefined8 *)(piVar6 + 0x12) = 0;
    *(undefined8 *)(piVar6 + 4) = 0;
    *(undefined8 *)(piVar6 + 6) = 0;
    *(undefined8 *)(piVar6 + 8) = 0;
    *(undefined8 *)(piVar6 + 10) = 0;
    *(undefined8 *)(piVar6 + 0xc) = 0;
    *(undefined8 *)(piVar6 + 0xe) = 0;
    *(undefined8 *)(piVar6 + 0x10) = 0;
    piVar8 = piVar6;
  }
  pTVar1 = &this->LegacyBuildData;
  if ((TPimplPtr<FLegacyBuildData,0> *)&local_48 == pTVar1) {
    if ((FLegacyBuildData *)(piVar8 + 4) == (FLegacyBuildData *)0x0) goto LAB_147db6587;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FLegacyBuildData *)(piVar8 + 4);
    if (pFVar2 == (FLegacyBuildData *)0x0) goto LAB_147db6587;
    piVar8 = &pFVar2[-1].InstanceIdIndexMap.IdToIndexMap.ArrayNum;
  }
  (**(code **)piVar8)();
LAB_147db6587:
  pFVar2 = pTVar1->Ptr;
  if (pFVar2 != (FLegacyBuildData *)param_1) {
    this_00 = (pFVar2->LegacyStaticMeshInstanceData).Ptr;
    (pFVar2->LegacyStaticMeshInstanceData).Ptr = param_1->Ptr;
    param_1->Ptr = (FStaticMeshInstanceData *)0x0;
    if (this_00 != (FStaticMeshInstanceData *)0x0) {
      FStaticMeshInstanceData::~FStaticMeshInstanceData(this_00);
      ::operator_delete(this_00,0x50);
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&pTVar1->Ptr->LegacyInstanceReorderTable,param_2);
  local_40.IndexToIdMap.ArrayNum = *(int *)&this->field_0x8;
  lVar9 = (longlong)local_40.IndexToIdMap.ArrayNum;
  pvVar3 = *(void **)this;
  local_40.IndexToIdMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_40.IndexToIdMap.ArrayNum == 0) {
    local_40.IndexToIdMap.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40.IndexToIdMap.ArrayNum,0,(ForAnyElementType *)&local_40,
               local_40.IndexToIdMap.ArrayNum,&local_40.IndexToIdMap.ArrayMax);
    memcpy(local_40.IndexToIdMap.AllocatorInstance.Data,pvVar3,lVar9 << 2);
  }
  local_40.IdToIndexMap.ArrayNum = *(int *)&this->field_0x18;
  lVar9 = (longlong)local_40.IdToIndexMap.ArrayNum;
  pvVar3 = *(void **)&this->field_0x10;
  local_40.IdToIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_40.IdToIndexMap.ArrayNum == 0) {
    local_40.IdToIndexMap.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40.IdToIndexMap.ArrayNum,0,&local_40.IdToIndexMap.AllocatorInstance,
               local_40.IdToIndexMap.ArrayNum,&local_40.IdToIndexMap.ArrayMax);
    memcpy(local_40.IdToIndexMap.AllocatorInstance.Data,pvVar3,lVar9 << 2);
  }
  local_40.NumInstances = *(int *)&this->field_0x20;
  FInstanceIdIndexMap::operator=(&pTVar1->Ptr->InstanceIdIndexMap,&local_40);
  if (local_40.IdToIndexMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.IdToIndexMap.AllocatorInstance.Data);
  }
  if (local_40.IndexToIdMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.IndexToIdMap.AllocatorInstance.Data);
  }
  if (this->Mode != ExternalLegacyData) {
    this->TrackingState = Tracked;
  }
  if ((this->bComponentMarkedDirty == '\0') &&
     (this_01 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
     this_01 != (UActorComponent *)0x0)) {
    UActorComponent::MarkRenderInstancesDirty(this_01);
    this->bComponentMarkedDirty = '\x01';
  }
  return;
}

// NumCustomDataChanged @ 147db8550

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
FPrimitiveInstanceDataManager::NumCustomDataChanged(FPrimitiveInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if ((this->TrackingState != Disabled) &&
     (this->bNumCustomDataChanged = '\x01', this->bComponentMarkedDirty == '\0')) {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
  }
  return;
}

// OnRegister @ 147db8a30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::OnRegister(FPrimitiveInstanceDataManager *this,int param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarInstanceDataResetTrackingOnRegister.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (((pTVar2->ShadowedValue[0] != 0) && (this->Mode != ExternalLegacyData)) &&
     (param_1 != *(int *)&this->field_0x20)) {
    ClearIdTracking(this,param_1);
  }
  return;
}

// PostLoad @ 147db9150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::PostLoad(FPrimitiveInstanceDataManager *this,int param_1)

{
  if (this->TrackingState != Disabled) {
    *(int *)&this->field_0x20 = param_1;
  }
  return;
}

// PrimitiveTransformChanged @ 147db94f0

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
FPrimitiveInstanceDataManager::PrimitiveTransformChanged(FPrimitiveInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if ((this->TrackingState != Disabled) &&
     (this->bPrimitiveTransformChanged = '\x01', this->bComponentMarkedDirty == '\0')) {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
  }
  return;
}

// ReadCookedRenderData @ 147dbad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPrimitiveInstanceDataManager::ReadCookedRenderData
          (FPrimitiveInstanceDataManager *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  longlong lVar11;
  FISMPrecomputedSpatialHashData *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint local_res10 [2];
  FISMPrecomputedSpatialHashData *local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  TArray<FInstanceSceneDataBuffers::FCompressedSpatialHashItem,TSizedDefaultAllocator<32>_> local_48
  ;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar2 == 0) {
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<FInstanceSceneDataBuffers::FCompressedSpatialHashItem,TSizedDefaultAllocator<32>_>::
  BulkSerialize(&local_48,param_1,false);
  TArray<int,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_38,param_1,false);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    plVar10 = (longlong *)
              (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.SceneCulling.Precomputed",1);
    pTVar8 = pTVar13;
    if (plVar10 != (longlong *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)(**(code **)(*plVar10 + 0x68))(plVar10);
    }
    CVarPrecomputed = (TConsoleVariableData<int> *)pTVar8;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar5 = CVarPrecomputed;
  if (CVarPrecomputed != (TConsoleVariableData<int> *)0x0) {
    bVar7 = IsInParallelGameThread();
    if (bVar7) {
LAB_147dbae45:
      pTVar8 = pTVar13;
    }
    else {
      bVar7 = IsInGameThread();
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000004;
      if (bVar7) goto LAB_147dbae45;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + (longlong)&pTVar8->_padding_) != 0) {
      pTVar8 = ::operator_new(0x30);
      FVar6.Data = local_48.AllocatorInstance.Data;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        local_68 = ___xmm_00000000000000000000000000000010;
        pFVar12 = (FISMPrecomputedSpatialHashData *)&DAT_00000010;
        FStack_60.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13 = pTVar8 + 1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController___CBUFISMPrecomputedSpatialHashData___00_SharedPointerInternals__6B_
        ;
        pTVar13->_padding_ = 0;
        lVar11 = (longlong)local_48.ArrayNum;
        pTVar8[1].SharedReferenceCount = (atomic<int>)local_48.ArrayNum;
        if ((atomic<int>)local_48.ArrayNum == (atomic<int>)0x0) {
          pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_48.ArrayNum,0,(ForAnyElementType *)pTVar13,local_48.ArrayNum,
                     (int *)&pTVar8[1].WeakReferenceCount);
          memcpy((FScriptContainerElement *)pTVar13->_padding_,FVar6.Data,lVar11 * 0x28);
        }
        FVar6.Data = local_38.AllocatorInstance.Data;
        pTVar13 = pTVar8 + 2;
        pTVar13->_padding_ = 0;
        lVar11 = (longlong)local_38.ArrayNum;
        pTVar8[2].SharedReferenceCount = (atomic<int>)local_38.ArrayNum;
        if ((atomic<int>)local_38.ArrayNum == (atomic<int>)0x0) {
          pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_38.ArrayNum,0,(ForAnyElementType *)pTVar13,local_38.ArrayNum,
                     (int *)&pTVar8[2].WeakReferenceCount);
          memcpy((FScriptContainerElement *)pTVar13->_padding_,FVar6.Data,lVar11 << 2);
        }
        pFVar12 = (FISMPrecomputedSpatialHashData *)(pTVar8 + 1);
        if ((pFVar12 == (FISMPrecomputedSpatialHashData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        FStack_60.ReferenceController = pTVar8;
        pTVar13 = pTVar8;
        local_68 = pFVar12;
      }
      if (&this->PrecomputedOptimizationData !=
          (TSharedPtr<FISMPrecomputedSpatialHashData_const_,1> *)&local_68) {
        (this->PrecomputedOptimizationData).Object = pFVar12;
        local_68 = (FISMPrecomputedSpatialHashData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->PrecomputedOptimizationData).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      goto LAB_147dbb020;
    }
  }
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PrecomputedOptimizationData !=
      (TSharedPtr<FISMPrecomputedSpatialHashData_const_,1> *)&local_58) {
    (this->PrecomputedOptimizationData).Object = (FISMPrecomputedSpatialHashData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PrecomputedOptimizationData).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
LAB_147dbb020:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// RemoveAt @ 147dbccc0

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
FPrimitiveInstanceDataManager::RemoveAt(FPrimitiveInstanceDataManager *this,int param_1)

{
  undefined1 *puVar1;
  void *_Dst;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UActorComponent *this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  FPrimitiveInstanceId local_res8 [2];
  
  uVar9 = (ulonglong)param_1;
  if (this->TrackingState != Disabled) {
    if ((this->Mode == ExternalLegacyData) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mode != EMode::ExternalLegacyData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0xd3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FInstanceIdIndexMap::IndexToId((FInstanceIdIndexMap *)this,(int)local_res8);
    iVar7 = *(int *)&this->field_0x8;
    puVar1 = &this->field_0x8;
    if (iVar7 == 0) {
      iVar7 = *(int *)&this->field_0x20;
    }
    FInstanceAttributeTracker::RemoveAt(&this->InstanceUpdateTracker,local_res8[0],param_1,iVar7);
    iVar7 = *(int *)&this->field_0x20 + -1;
    if ((param_1 != iVar7) && (*(int *)puVar1 == 0)) {
      CreateExplicitIdentityMapping(this);
    }
    if ((this->bComponentMarkedDirty == '\0') &&
       (this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
       this_00 != (UActorComponent *)0x0)) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
    FreeInstanceId(this,local_res8[0]);
    iVar2 = *(int *)puVar1;
    if (iVar2 == 0) {
      if ((param_1 != iVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bCausesReordering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                             ,0xe4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + -1;
    }
    else {
      if (param_1 == iVar2 + -1) {
        if (iVar2 < param_1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,param_1 - iVar2,(ForAnyElementType *)this,(int *)puVar1,
                             (int *)&this->field_0xc);
          DefaultConstructItems<FPrimitiveInstanceId,int>
                    ((void *)(*(longlong *)this + (longlong)iVar7 * 4),param_1 - iVar2);
        }
        else {
          if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
          }
          if (param_1 < iVar2) {
            uVar6 = iVar2 - param_1;
            if (((int)(uVar6 | param_1) < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar6 != 0) {
              _Dst = (void *)(*(longlong *)this + uVar9 * 4);
              iVar7 = (*(int *)puVar1 - uVar6) - param_1;
              if (iVar7 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar6 * 4),
                        (longlong)iVar7 << 2);
              }
              *(uint *)puVar1 = *(int *)puVar1 - uVar6;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)this,*(int *)puVar1,(int *)&this->field_0xc);
            }
          }
        }
      }
      else {
        uVar6 = 0;
        if (param_1 < iVar2) {
          uVar6 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = uVar9 * 4;
        iVar7 = *(int *)puVar1 + ~param_1;
        if (iVar7 != 0) {
          memmove((void *)(*(longlong *)this + lVar10),(void *)(*(longlong *)this + lVar10 + 4),
                  (longlong)iVar7 << 2);
        }
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,*(int *)puVar1,(int *)&this->field_0xc);
        iVar7 = *(int *)puVar1;
        if (param_1 < iVar7) {
          do {
            uVar8 = (uint)uVar9;
            uVar6 = 0;
            if ((int)uVar8 < iVar7) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            uVar6 = *(uint *)(lVar10 + *(longlong *)this);
            uVar5 = 0;
            if ((int)uVar6 < *(int *)&this->field_0x18) {
              uVar5 = ~uVar6 >> 0x1f;
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
            lVar10 = lVar10 + 4;
            *(uint *)(*(longlong *)&this->field_0x10 + (longlong)(int)uVar6 * 4) = uVar8;
            uVar9 = (ulonglong)(uVar8 + 1);
            iVar7 = *(int *)puVar1;
          } while ((int)(uVar8 + 1) < iVar7);
        }
      }
      *(int *)&this->field_0x20 = *(int *)puVar1;
      if (((this->ValidInstanceIdMask).NumBits < *(int *)puVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidInstanceIdMask.Num() >= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                             ,0xf9,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// RemoveAtSwap @ 147dbd070

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
FPrimitiveInstanceDataManager::RemoveAtSwap(FPrimitiveInstanceDataManager *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UActorComponent *this_00;
  int iVar5;
  FPrimitiveInstanceId local_res8 [2];
  
  if (this->TrackingState != Disabled) {
    if ((this->Mode == ExternalLegacyData) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mode != EMode::ExternalLegacyData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0xa2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstanceIdIndexMap::IndexToId((FInstanceIdIndexMap *)this,(int)local_res8);
    iVar5 = *(int *)&this->field_0x8;
    if (iVar5 == 0) {
      iVar5 = *(int *)&this->field_0x20;
    }
    FInstanceAttributeTracker::RemoveAtSwap
              (&this->InstanceUpdateTracker,local_res8[0],param_1,iVar5);
    iVar5 = *(int *)&this->field_0x20 + -1;
    if ((param_1 != iVar5) && (*(int *)&this->field_0x8 == 0)) {
      CreateExplicitIdentityMapping(this);
    }
    if ((this->bComponentMarkedDirty == '\0') &&
       (this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr),
       this_00 != (UActorComponent *)0x0)) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
    FreeInstanceId(this,local_res8[0]);
    if (*(int *)&this->field_0x8 == 0) {
      if ((param_1 != iVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bCausesReordering",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                             ,0xb6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + -1;
      return;
    }
    if ((*(int *)&this->field_0x8 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = *(uint *)(*(longlong *)this + -4 + (longlong)*(int *)&this->field_0x8 * 4);
    iVar5 = *(int *)&this->field_0x8 + -1;
    *(int *)&this->field_0x8 = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)this,iVar5,(int *)&this->field_0xc);
    *(int *)&this->field_0x20 = *(int *)&this->field_0x8;
    if (((this->ValidInstanceIdMask).NumBits < *(int *)&this->field_0x8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValidInstanceIdMask.Num() >= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                           ,0xbe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar1 != local_res8[0].Id) {
      uVar4 = 0;
      if ((int)uVar1 < *(int *)&this->field_0x18) {
        uVar4 = ~uVar1 >> 0x1f;
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
      *(int *)(*(longlong *)&this->field_0x10 + (longlong)(int)uVar1 * 4) = param_1;
      uVar4 = 0;
      if (param_1 < *(int *)&this->field_0x8) {
        uVar4 = (uint)~param_1 >> 0x1f;
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
      *(uint *)(*(longlong *)this + (longlong)param_1 * 4) = uVar1;
    }
  }
  return;
}

// SetMode @ 147dc0a20

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
FPrimitiveInstanceDataManager::SetMode(FPrimitiveInstanceDataManager *this,EMode param_1)

{
  code *pcVar1;
  bool bVar2;
  UActorComponent *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_1 == this->Mode) {
    this->Mode = param_1;
    return;
  }
  if ((*(int *)&this->field_0x8 != 0) || (*(int *)&this->field_0x20 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetMaxInstanceIndex() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Proxy != (TSharedPtr<FISMCInstanceDataSceneProxy,1> *)&local_18) {
    (this->Proxy).Object = (FISMCInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Proxy).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  ClearIdTracking(this,0);
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
  if (this_00 != (UActorComponent *)0x0) {
    UActorComponent::MarkRenderStateDirty(this_00);
    this->bComponentMarkedDirty = '\x01';
  }
  this->Mode = param_1;
  return;
}

// ShouldUsePrecomputed @ 147dc2380

bool __cdecl FPrimitiveInstanceDataManager::ShouldUsePrecomputed(void)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.SceneCulling.Precomputed",1);
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar3 + 0x68))(plVar3);
    }
    CVarPrecomputed = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarPrecomputed;
  if (CVarPrecomputed != (TConsoleVariableData<int> *)0x0) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar5 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue) != 0) {
      return true;
    }
  }
  return false;
}

// TransformChanged @ 147dc5620

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
FPrimitiveInstanceDataManager::TransformChanged(FPrimitiveInstanceDataManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UActorComponent *this_00;
  int iVar3;
  
  if (this->TrackingState != Disabled) {
    if (this->Mode == ExternalLegacyData) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mode != EMode::ExternalLegacyData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                         ,0x31d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->TrackingState == Tracked) {
      iVar3 = *(int *)&this->field_0x8;
      if (iVar3 == 0) {
        iVar3 = *(int *)&this->field_0x20;
      }
      FInstanceAttributeTracker::MarkIndex<1>(&this->InstanceUpdateTracker,param_1,iVar3);
    }
    else {
      this->bAnyInstanceChange = '\x01';
    }
    if (this->bComponentMarkedDirty == '\0') {
      this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
      if (this_00 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderInstancesDirty(this_00);
        this->bComponentMarkedDirty = '\x01';
      }
    }
  }
  return;
}

// TransformChanged @ 147dc5630

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
FPrimitiveInstanceDataManager::TransformChanged
          (FPrimitiveInstanceDataManager *this,FPrimitiveInstanceId param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UActorComponent *this_00;
  
  if (this->Mode == ExternalLegacyData) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mode != EMode::ExternalLegacyData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataManager.cpp"
                       ,0x32c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->TrackingState == Tracked) {
    iVar3 = FInstanceIdIndexMap::IdToIndex((FInstanceIdIndexMap *)this,param_1);
    MarkChangeHelper<1>(this,iVar3);
  }
  else {
    this->bAnyInstanceChange = '\x01';
    if (this->bComponentMarkedDirty == '\0') {
      this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
      if (this_00 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderInstancesDirty(this_00);
        this->bComponentMarkedDirty = '\x01';
        return;
      }
    }
  }
  return;
}

// TransformsChangedAll @ 147dc5860

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
FPrimitiveInstanceDataManager::TransformsChangedAll(FPrimitiveInstanceDataManager *this)

{
  UActorComponent *this_00;
  
  if ((this->TrackingState != Disabled) &&
     (this->bTransformChangedAllInstances = '\x01', this->bComponentMarkedDirty == '\0')) {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderInstancesDirty(this_00);
      this->bComponentMarkedDirty = '\x01';
    }
  }
  return;
}

