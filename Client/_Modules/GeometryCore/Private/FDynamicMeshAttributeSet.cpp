// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 81

// GetNormalLayer @ 1433a91c0

TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar3;
  
  if ((param_1 < (this->NormalLayers).Array.ArrayNum) && (-1 < param_1)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
            ((this->NormalLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
}

// GetNormalLayer @ 1433a9240

TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar3;
  
  if ((param_1 < (this->NormalLayers).Array.ArrayNum) && (-1 < param_1)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
            ((this->NormalLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
}

// GetUVLayer @ 1433b3790

TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  
  if ((param_1 < (this->UVLayers).Array.ArrayNum) && (-1 < param_1)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
            ((this->UVLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
}

// GetUVLayer @ 1433b3810

TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  
  if ((param_1 < (this->UVLayers).Array.ArrayNum) && (-1 < param_1)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
            ((this->UVLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
}

// operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*> @ 143433120

void __thiscall
`UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::
operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>
          (void *this,TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTaskBase *this_00;
  FTask *pFVar7;
  undefined8 uVar8;
  FTaskBase *local_18 [2];
  
  if (*(char *)((longlong)this + 8) == '\0') {
    UE::Geometry::TDynamicMeshOverlay<float,4>::SplitBowties
              ((TDynamicMeshOverlay<float,4> *)param_1,true);
    return;
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::`2'::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>'::`5'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar7 = LowLevelTasks::FTask::GetActiveTask();
    uVar8 = 0;
    if (pFVar7 != (FTask *)0x0) {
      uVar8 = *(undefined8 *)&pFVar7->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar8;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000542a822800;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)param_1;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::`2'::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>'::`5'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  pFVar2 = *(ForAnyElementType **)this;
  local_18[0] = this_00;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = 0;
  *(FTaskBase **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// FDynamicMeshAttributeSet @ 143452240

FDynamicMeshAttributeSet * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::FDynamicMeshAttributeSet
          (FDynamicMeshAttributeSet *this,FDynamicMesh3 *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ParentMesh = param_1;
  (this->UVLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVLayers).Array.ArrayNum = 0;
  (this->UVLayers).Array.ArrayMax = 0;
  (this->NormalLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalLayers).Array.ArrayNum = 0;
  (this->NormalLayers).Array.ArrayMax = 0;
  (this->ColorLayer).Ptr = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  (this->WeightLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightLayers).Array.ArrayNum = 0;
  (this->WeightLayers).Array.ArrayMax = 0;
  (this->PolygroupLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygroupLayers).Array.ArrayNum = 0;
  (this->PolygroupLayers).Array.ArrayMax = 0;
  *(undefined8 *)&this->SkinWeightAttributes = 0;
  *(undefined8 *)&(this->SkinWeightAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->SkinWeightAttributes).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FDynamicMeshAttributeSet_Geometry_UE__6B_;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkinWeightAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x48 = 0;
  *(undefined8 *)&this->MorphTargetAttributes = 0;
  *(undefined8 *)&(this->MorphTargetAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MorphTargetAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x48 = 0;
  (this->BoneNameAttrib).Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
  (this->BoneParentIndexAttrib).Ptr =
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
  (this->BonePoseAttrib).Ptr =
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0;
  (this->BoneColorAttrib).Ptr =
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0;
  *(undefined8 *)&this->GenericAttributes = 0;
  *(undefined8 *)&(this->GenericAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->GenericAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->GenericAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GenericAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x48 = 0;
  (this->SculptLayers).Layers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SculptLayers).Layers.Array.ArrayNum = 0;
  (this->SculptLayers).Layers.Array.ArrayMax = 0;
  (this->SculptLayers).LayerWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SculptLayers).LayerWeights.ArrayNum = 0;
  (this->SculptLayers).LayerWeights.ArrayMax = 0;
  (this->SculptLayers).ActiveLayer = -1;
  SetNumUVLayers(this,1);
  SetNumNormalLayers(this,1);
  return this;
}

// FDynamicMeshAttributeSet @ 1434523c0

FDynamicMeshAttributeSet * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::FDynamicMeshAttributeSet
          (FDynamicMeshAttributeSet *this,FDynamicMesh3 *param_1,int param_2,int param_3)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ParentMesh = param_1;
  (this->UVLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVLayers).Array.ArrayNum = 0;
  (this->UVLayers).Array.ArrayMax = 0;
  (this->NormalLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalLayers).Array.ArrayNum = 0;
  (this->NormalLayers).Array.ArrayMax = 0;
  (this->ColorLayer).Ptr = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  (this->WeightLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightLayers).Array.ArrayNum = 0;
  (this->WeightLayers).Array.ArrayMax = 0;
  (this->PolygroupLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygroupLayers).Array.ArrayNum = 0;
  (this->PolygroupLayers).Array.ArrayMax = 0;
  *(undefined8 *)&this->SkinWeightAttributes = 0;
  *(undefined8 *)&(this->SkinWeightAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->SkinWeightAttributes).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FDynamicMeshAttributeSet_Geometry_UE__6B_;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkinWeightAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x48 = 0;
  *(undefined8 *)&this->MorphTargetAttributes = 0;
  *(undefined8 *)&(this->MorphTargetAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MorphTargetAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x48 = 0;
  (this->BoneNameAttrib).Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
  (this->BoneParentIndexAttrib).Ptr =
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
  (this->BonePoseAttrib).Ptr =
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0;
  (this->BoneColorAttrib).Ptr =
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0;
  *(undefined8 *)&this->GenericAttributes = 0;
  *(undefined8 *)&(this->GenericAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->GenericAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->GenericAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GenericAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->GenericAttributes).field_0x48 = 0;
  (this->SculptLayers).Layers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SculptLayers).Layers.Array.ArrayNum = 0;
  (this->SculptLayers).Layers.Array.ArrayMax = 0;
  (this->SculptLayers).LayerWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SculptLayers).LayerWeights.ArrayNum = 0;
  (this->SculptLayers).LayerWeights.ArrayMax = 0;
  (this->SculptLayers).ActiveLayer = -1;
  SetNumUVLayers(this,param_2);
  SetNumNormalLayers(this,param_3);
  return this;
}

// ~FDynamicMeshAttributeSet @ 1434548e0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::~FDynamicMeshAttributeSet(FDynamicMeshAttributeSet *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar3;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar4;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  TDynamicMeshOverlay<float,4> *this_00;
  
  this->_padding_ = (longlong)&___7FDynamicMeshAttributeSet_Geometry_UE__6B_;
  pFVar1 = (this->SculptLayers).LayerWeights.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
            (&(this->SculptLayers).Layers);
  *(undefined4 *)&(this->GenericAttributes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GenericAttributes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GenericAttributes);
  pTVar3 = (this->BoneColorAttrib).Ptr;
  if (pTVar3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pTVar4 = (this->BonePoseAttrib).Ptr;
  if (pTVar4 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    (**(code **)pTVar4->_padding_)(pTVar4,1);
  }
  pTVar5 = (this->BoneParentIndexAttrib).Ptr;
  if (pTVar5 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    (**(code **)pTVar5->_padding_)(pTVar5,1);
  }
  pTVar6 = (this->BoneNameAttrib).Ptr;
  if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    (**(code **)pTVar6->_padding_)(pTVar6,1);
  }
  *(undefined4 *)&(this->MorphTargetAttributes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MorphTargetAttributes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MorphTargetAttributes);
  *(undefined4 *)&(this->SkinWeightAttributes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkinWeightAttributes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkinWeightAttributes);
  TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
            (&this->PolygroupLayers);
  TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
            (&this->WeightLayers);
  pTVar7 = (this->MaterialIDAttrib).Ptr;
  if (pTVar7 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (*(code *)**(undefined8 **)pTVar7)(pTVar7,1);
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_00);
    ::operator_delete(this_00,0x88);
  }
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
            (&this->NormalLayers);
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
            (&this->UVLayers);
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeSetBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// Append @ 143468e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::Append
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1,FAppendInfo *param_2)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar2;
  uint uVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  TDynamicMeshOverlay<float,4> *this_02;
  TDynamicMeshOverlay<float,4> *pTVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar6;
  FName FVar7;
  undefined1 *puVar8;
  longlong lVar9;
  code *pcVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  FDynamicMeshAttributeSet *pFVar12;
  FDynamicMeshAttributeSet *pFVar13;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar14;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar21;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar22;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar23;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar24;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar25;
  byte bVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  TDynamicMeshOverlay<float,2> *pTVar34;
  TDynamicMeshOverlay<float,3> *pTVar35;
  int iVar36;
  undefined1 *puVar37;
  uint *puVar38;
  uint uVar39;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar40;
  undefined1 auStackY_348 [32];
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315 [5];
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_310;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_308;
  undefined8 uStack_300;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  int local_2e0;
  undefined4 uStack_2dc;
  ulonglong local_2d8;
  TBitArray<FDefaultBitArrayAllocator> *local_2d0;
  FDynamicMeshAttributeSet *local_2c8;
  FDynamicMeshAttributeSet *local_2c0;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  undefined4 local_134;
  undefined4 local_114;
  FBoneWeights local_108;
  FBoneWeights local_c8;
  FBoneWeights local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar31 = 0;
  local_2c8 = param_1;
  local_2c0 = this;
  iVar19 = (**(code **)(this->_padding_ + 0xa8))();
  uVar32 = uVar31;
  if (0 < iVar19) {
    do {
      pTVar34 = (TDynamicMeshOverlay<float,2> *)0x0;
      uVar20 = (uint)uVar31;
      if (((int)uVar20 < (param_1->UVLayers).Array.ArrayNum) && (-1 < (int)uVar20)) {
        if (((int)uVar20 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar34 = *(TDynamicMeshOverlay<float,2> **)
                   ((param_1->UVLayers).Array.AllocatorInstance.Data + uVar32);
      }
      uVar33 = 0;
      if ((int)uVar20 < (this->UVLayers).Array.ArrayNum) {
        uVar33 = ~uVar20 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = *(TDynamicMeshOverlay<float,2> **)
                 ((this->UVLayers).Array.AllocatorInstance.Data + uVar32);
      if (pTVar34 == (TDynamicMeshOverlay<float,2> *)0x0) {
        TDynamicMeshOverlay<float,2>::AppendDefaulted(this_00,param_2);
      }
      else {
        TDynamicMeshOverlay<float,2>::Append(this_00,pTVar34,param_2);
      }
      uVar31 = (ulonglong)(uVar20 + 1);
      iVar19 = (**(code **)(this->_padding_ + 0xa8))(this);
      uVar32 = uVar32 + 8;
    } while ((int)(uVar20 + 1) < iVar19);
  }
  uVar31 = 0;
  iVar19 = (**(code **)(this->_padding_ + 0xb8))(this);
  uVar32 = uVar31;
  if (0 < iVar19) {
    do {
      pTVar35 = (TDynamicMeshOverlay<float,3> *)0x0;
      uVar20 = (uint)uVar31;
      if (((int)uVar20 < (param_1->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar20)) {
        if (((int)uVar20 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar35 = *(TDynamicMeshOverlay<float,3> **)
                   ((param_1->NormalLayers).Array.AllocatorInstance.Data + uVar32);
      }
      uVar33 = 0;
      if ((int)uVar20 < (this->NormalLayers).Array.ArrayNum) {
        uVar33 = ~uVar20 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_01 = *(TDynamicMeshOverlay<float,3> **)
                 ((this->NormalLayers).Array.AllocatorInstance.Data + uVar32);
      if (pTVar35 == (TDynamicMeshOverlay<float,3> *)0x0) {
        TDynamicMeshOverlay<float,3>::AppendDefaulted(this_01,param_2);
      }
      else {
        TDynamicMeshOverlay<float,3>::Append(this_01,pTVar35,param_2);
      }
      uVar31 = (ulonglong)(uVar20 + 1);
      iVar19 = (**(code **)(this->_padding_ + 0xb8))(this);
      uVar32 = uVar32 + 8;
    } while ((int)(uVar20 + 1) < iVar19);
  }
  uVar32 = 0;
  this_02 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_02 != (TDynamicMeshOverlay<float,4> *)0x0) {
    pTVar4 = (TDynamicMeshOverlay<float,4> *)(param_1->ColorLayer).Ptr;
    if (pTVar4 == (TDynamicMeshOverlay<float,4> *)0x0) {
      TDynamicMeshOverlay<float,4>::AppendDefaulted(this_02,param_2);
    }
    else {
      TDynamicMeshOverlay<float,4>::Append(this_02,pTVar4,param_2);
    }
  }
  pTVar21 = (this->MaterialIDAttrib).Ptr;
  if (pTVar21 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pTVar5 = (param_1->MaterialIDAttrib).Ptr;
    if (pTVar5 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      (**(code **)(*(longlong *)pTVar21 + 0x40))(pTVar21,param_2);
    }
    else {
      (**(code **)(*(longlong *)pTVar21 + 0x38))(pTVar21,pTVar5,param_2);
    }
  }
  iVar19 = (**(code **)(this->_padding_ + 200))(this);
  uVar31 = uVar32;
  if (0 < iVar19) {
    do {
      pTVar21 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
      iVar19 = (**(code **)(param_1->_padding_ + 200))(param_1);
      uVar20 = (uint)uVar32;
      if ((int)uVar20 < iVar19) {
        pTVar21 = GetPolygroupLayer(param_1,uVar20);
      }
      uVar33 = 0;
      if ((int)uVar20 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar33 = ~uVar20 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar28 = *(longlong **)((this->PolygroupLayers).Array.AllocatorInstance.Data + uVar31);
      if (pTVar21 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        (**(code **)(*plVar28 + 0x40))(plVar28,param_2);
      }
      else {
        (**(code **)(*plVar28 + 0x38))(plVar28,pTVar21,param_2);
      }
      uVar32 = (ulonglong)(uVar20 + 1);
      iVar19 = (**(code **)(this->_padding_ + 200))(this);
      uVar31 = uVar31 + 8;
    } while ((int)(uVar20 + 1) < iVar19);
  }
  uVar31 = 0;
  iVar19 = (**(code **)(this->_padding_ + 0xd8))(this);
  uVar32 = uVar31;
  if (0 < iVar19) {
    do {
      pTVar22 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0;
      iVar19 = (**(code **)(param_1->_padding_ + 0xd8))(param_1);
      uVar20 = (uint)uVar31;
      if ((int)uVar20 < iVar19) {
        pTVar22 = GetWeightLayer(param_1,uVar20);
      }
      uVar33 = 0;
      if ((int)uVar20 < (this->WeightLayers).Array.ArrayNum) {
        uVar33 = ~uVar20 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar28 = *(longlong **)((this->WeightLayers).Array.AllocatorInstance.Data + uVar32);
      if (pTVar22 == (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
        (**(code **)(*plVar28 + 0x40))(plVar28,param_2);
      }
      else {
        (**(code **)(*plVar28 + 0x38))(plVar28,pTVar22,param_2);
      }
      uVar31 = (ulonglong)(uVar20 + 1);
      iVar19 = (**(code **)(this->_padding_ + 0xd8))(this);
      uVar32 = uVar32 + 8;
    } while ((int)(uVar20 + 1) < iVar19);
  }
  pTVar6 = (this->BoneNameAttrib).Ptr;
  if ((pTVar6 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) ||
     ((param_1->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    local_248._padding_._0_4_ = 0;
    local_2d8 = 1;
    pTVar1 = &this->SkinWeightAttributes;
    local_248._padding_._4_4_ = 1;
    local_2d0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10;
    local_248.UnvisitedBitMask = 0xffffffff;
    local_248.CurrentBitIndex = 0;
    local_248.BaseBitIndex = 0;
    local_310 = pTVar1;
    local_248.Array = local_2d0;
    if (*(int *)&(this->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
    }
    uVar20 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
    uStack_300 = CONCAT44(local_248._padding_._4_4_,(undefined4)local_248._padding_);
    uStack_2f0._4_4_ = local_248.CurrentBitIndex;
    uStack_2f0._0_4_ = local_248.UnvisitedBitMask;
    uStack_2e8._4_4_ = local_248._28_4_;
    uStack_2e8._0_4_ = local_248.BaseBitIndex;
    local_2e0 = *(int *)&(this->SkinWeightAttributes).field_0x8 -
                *(int *)&(this->SkinWeightAttributes).field_0x34;
    uVar33 = uVar20 & 0xffffffe0;
    pTStack_2f8 = local_248.Array;
    iVar19 = (int)uVar20 >> 5;
    uStack_1b8 = CONCAT44(uStack_2dc,local_2e0);
    TStack_1d8.Array = local_248.Array;
    local_308 = pTVar1;
    local_1e0 = pTVar1;
    TStack_1d8._padding_ = uStack_300;
    TStack_1d8._16_8_ = uStack_2f0;
    TStack_1d8._24_8_ = uStack_2e8;
    if (((int)uVar20 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar11 = local_2d0;
    uVar39 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
    if (uVar20 != uVar39) {
      puVar8 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x20;
      puVar30 = &(this->SkinWeightAttributes).field_0x10;
      if (puVar8 != (undefined1 *)0x0) {
        puVar30 = puVar8;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar27 = (longlong)iVar19;
        uVar33 = uVar33 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar39;
        if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_143469850;
        uVar20 = *(uint *)(puVar30 + lVar27 * 4 + 4);
      }
      uVar32 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_228 = (int)lVar27;
      uVar20 = local_228 + -1 + uVar33;
      if ((int)uVar39 < (int)uVar20) {
        uVar20 = uVar39;
      }
    }
LAB_143469850:
    pTVar1 = local_1e0;
    if (*(int *)&local_1e0->field_0x8 - *(int *)&local_1e0->field_0x34 != (int)uStack_1b8) {
      local_317 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_317);
    }
    if (((TStack_1d8.CurrentBitIndex != uVar20) || (TStack_1d8.Array != pTVar11)) ||
       (this = local_2c0, pTVar1 != local_310)) {
      lVar27 = *(longlong *)pTVar1;
      FVar7 = *(FName *)(lVar27 + (longlong)TStack_1d8.CurrentBitIndex * 0x18);
      lVar27 = lVar27 + (longlong)TStack_1d8.CurrentBitIndex * 0x18;
      uVar33 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      if (*(int *)&(param_1->SkinWeightAttributes).field_0x8 !=
          *(int *)&(param_1->SkinWeightAttributes).field_0x34) {
        puVar8 = *(undefined1 **)&(param_1->SkinWeightAttributes).field_0x40;
        puVar30 = &(param_1->SkinWeightAttributes).field_0x38;
        if (puVar8 != (undefined1 *)0x0) {
          puVar30 = puVar8;
        }
        iVar19 = *(int *)(puVar30 +
                         (ulonglong)
                         (*(int *)&(param_1->SkinWeightAttributes).field_0x48 - 1U &
                         FVar7.Number + uVar33) * 4);
        if (iVar19 != -1) {
          do {
            if (*(FName *)(*(longlong *)&param_1->SkinWeightAttributes + (longlong)iVar19 * 0x18) ==
                FVar7) {
              pTVar23 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                *)&param_1->SkinWeightAttributes,FVar7);
              if ((pTVar23 ==
                   (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
                    *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x27b,L""), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              plVar28 = *(longlong **)&pTVar23->field_0x8;
              pTVar40 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                         (lVar27 + 8);
              if (plVar28 == (longlong *)0x0) goto LAB_143469909;
              uVar33 = param_2->NumVertex + param_2->VertexOffset;
              if ((ulonglong)
                  ((pTVar40->VertexBoneWeights).CurBlock * 0x200 +
                  (pTVar40->VertexBoneWeights).CurBlockUsed) < (ulonglong)(longlong)(int)uVar33) {
                TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
                          (&pTVar40->VertexBoneWeights,uVar33);
              }
              iVar19 = 0;
              if (param_2->NumVertex < 1) goto LAB_143469914;
              goto LAB_1434699b0;
            }
            iVar19 = *(int *)(*(longlong *)&param_1->SkinWeightAttributes + 0x10 +
                             (longlong)iVar19 * 0x18);
          } while (iVar19 != -1);
        }
      }
      pTVar40 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)(lVar27 + 8);
LAB_143469909:
      TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::AppendDefaulted
                (pTVar40,param_2);
      goto LAB_143469914;
    }
    goto LAB_143469a3a;
  }
  cVar17 = (**(code **)(pTVar6->_padding_ + 0xd8))();
  if (cVar17 == '\0') {
    AppendBonesUnique(this,param_1);
  }
  puVar8 = &(this->SkinWeightAttributes).field_0x10;
  local_2d8 = 1;
  pTVar1 = &this->SkinWeightAttributes;
  local_268._padding_._4_4_ = 1;
  local_268._padding_._0_4_ = 0;
  local_268.UnvisitedBitMask = 0xffffffff;
  local_268.CurrentBitIndex = 0;
  local_268.BaseBitIndex = 0;
  local_268.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if (*(int *)&(this->SkinWeightAttributes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_268);
  }
  uVar20 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  uStack_300 = CONCAT44(local_268._padding_._4_4_,(undefined4)local_268._padding_);
  bVar26 = (byte)uVar20 & 0x1f;
  local_2e0 = *(int *)&(this->SkinWeightAttributes).field_0x8 -
              *(int *)&(this->SkinWeightAttributes).field_0x34;
  uStack_2f0._4_4_ = local_268.CurrentBitIndex;
  uStack_2f0._0_4_ = local_268.UnvisitedBitMask;
  uStack_2e8._4_4_ = local_268._28_4_;
  uStack_2e8._0_4_ = local_268.BaseBitIndex;
  local_288._padding_._0_4_ = (int)uVar20 >> 5;
  local_288._padding_._4_4_ = (uint)local_2d8 << bVar26;
  local_288.UnvisitedBitMask = -1 << bVar26;
  pTStack_2f8 = local_268.Array;
  local_288.BaseBitIndex = uVar20 & 0xffffffe0;
  uStack_1e8 = CONCAT44(uStack_2dc,local_2e0);
  TStack_208.Array = local_268.Array;
  local_308 = pTVar1;
  local_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  local_288.CurrentBitIndex = uVar20;
  local_210 = pTVar1;
  TStack_208._padding_ = uStack_300;
  TStack_208._16_8_ = uStack_2f0;
  TStack_208._24_8_ = uStack_2e8;
  if (((int)uVar20 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar20 != *(uint *)&(this->SkinWeightAttributes).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
  }
  uStack_300 = CONCAT44(local_288._padding_._4_4_,(int)local_288._padding_);
  uStack_2f0 = CONCAT44(local_288.CurrentBitIndex,local_288.UnvisitedBitMask);
  uStack_2e8 = CONCAT44(local_288._28_4_,local_288.BaseBitIndex);
  pTStack_2f8 = local_288.Array;
  local_2d0 = local_288.Array;
  local_310 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)CONCAT44(local_310._4_4_,local_288.CurrentBitIndex);
  uVar20 = local_288.CurrentBitIndex;
LAB_1434693d0:
  pTVar1 = local_210;
  if (*(int *)&local_210->field_0x8 - *(int *)&local_210->field_0x34 != (int)uStack_1e8) {
    local_318 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_318);
  }
  if (((TStack_208.CurrentBitIndex != uVar20) || (TStack_208.Array != local_2d0)) ||
     (pTVar1 != &this->SkinWeightAttributes)) {
    lVar27 = *(longlong *)pTVar1;
    FVar7 = *(FName *)(lVar27 + (longlong)TStack_208.CurrentBitIndex * 0x18);
    lVar27 = lVar27 + (longlong)TStack_208.CurrentBitIndex * 0x18;
    uVar20 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    if (*(int *)&(param_1->SkinWeightAttributes).field_0x8 !=
        *(int *)&(param_1->SkinWeightAttributes).field_0x34) {
      puVar8 = *(undefined1 **)&(param_1->SkinWeightAttributes).field_0x40;
      puVar30 = &(param_1->SkinWeightAttributes).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar30 = puVar8;
      }
      iVar19 = *(int *)(puVar30 +
                       (ulonglong)
                       (*(int *)&(param_1->SkinWeightAttributes).field_0x48 - 1U &
                       FVar7.Number + uVar20) * 4);
      if (iVar19 != -1) {
        do {
          if (*(FName *)(*(longlong *)&param_1->SkinWeightAttributes + (longlong)iVar19 * 0x18) ==
              FVar7) {
            pTVar23 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)&param_1->SkinWeightAttributes,FVar7);
            if ((pTVar23 ==
                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
                  *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x27b,L""), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            plVar28 = *(longlong **)&pTVar23->field_0x8;
            if ((plVar28 != (longlong *)0x0) && (cVar17 == '\0')) {
              local_2b8._padding_ =
                   (longlong)
                   &
                   ___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
              ;
              local_2b8._padding_ = 0;
              local_2b8.Parent = (FDynamicMesh3 *)0x0;
              local_2b8.VertexBoneWeights.CurBlock = 0;
              local_2b8.VertexBoneWeights.CurBlockUsed = 0;
              local_2b8.VertexBoneWeights.Blocks.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_2b8.VertexBoneWeights.Blocks.ArrayNum = 0;
              local_2b8.VertexBoneWeights.Blocks.ArrayMax = 0;
              TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                        (&local_2b8.VertexBoneWeights);
              local_2b8._padding_ = plVar28[1];
              TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
                        (&local_2b8.VertexBoneWeights,
                         (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(plVar28 + 3));
              TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
              ReindexBoneIndicesToSkeleton
                        (&local_2b8,&((param_1->BoneNameAttrib).Ptr)->AttribValues,
                         &((this->BoneNameAttrib).Ptr)->AttribValues);
              lVar27 = *(longlong *)(lVar27 + 8);
              uVar20 = param_2->NumVertex + param_2->VertexOffset;
              if ((ulonglong)(uint)(*(int *)(lVar27 + 0x18) * 0x200 + *(int *)(lVar27 + 0x1c)) <
                  (ulonglong)(longlong)(int)uVar20) {
                TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
                          ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(lVar27 + 0x18),
                           uVar20);
              }
              iVar19 = 0;
              if (param_2->NumVertex < 1) goto LAB_14346960c;
              goto LAB_143469590;
            }
            pTVar40 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                       (lVar27 + 8);
            if (plVar28 == (longlong *)0x0) goto LAB_14346947d;
            uVar20 = param_2->NumVertex + param_2->VertexOffset;
            if ((ulonglong)
                ((pTVar40->VertexBoneWeights).CurBlock * 0x200 +
                (pTVar40->VertexBoneWeights).CurBlockUsed) < (ulonglong)(longlong)(int)uVar20) {
              TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
                        (&pTVar40->VertexBoneWeights,uVar20);
            }
            iVar19 = 0;
            if (param_2->NumVertex < 1) goto LAB_143469488;
            goto LAB_143469670;
          }
          iVar19 = *(int *)(*(longlong *)&param_1->SkinWeightAttributes + 0x10 +
                           (longlong)iVar19 * 0x18);
        } while (iVar19 != -1);
      }
    }
    pTVar40 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)(lVar27 + 8);
LAB_14346947d:
    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::AppendDefaulted
              (pTVar40,param_2);
    goto LAB_143469488;
  }
LAB_143469a3a:
  puVar8 = &(this->MorphTargetAttributes).field_0x10;
  iVar19 = *(int *)&(this->MorphTargetAttributes).field_0x28;
  local_308 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)&this->MorphTargetAttributes;
  iVar36 = 0;
  uStack_2e8._0_4_ = 0;
  uVar20 = (uint)local_2d8;
  uStack_2f0._4_4_ = 0;
  if (iVar19 != 0) {
    puVar38 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar38 == (uint *)0x0) {
      puVar38 = (uint *)puVar8;
    }
    uVar33 = *puVar38;
    uStack_2e8._0_4_ = 0;
    while (uVar33 == 0) {
      lVar27 = (longlong)iVar36;
      uStack_2e8._0_4_ = (int)uStack_2e8 + 0x20;
      iVar36 = iVar36 + 1;
      uStack_2f0._4_4_ = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_143469abe;
      uVar33 = puVar38[lVar27 + 1];
    }
    uVar20 = -uVar33 & uVar33;
    uVar32 = (ulonglong)uVar20 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_224 = (int)lVar27;
    uStack_2f0._4_4_ = (int)uStack_2e8 + -1 + local_224;
    if (iVar19 < uStack_2f0._4_4_) {
      uStack_2f0._4_4_ = iVar19;
    }
  }
LAB_143469abe:
  uVar33 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  local_2e0 = *(int *)&(this->MorphTargetAttributes).field_0x8 -
              *(int *)&(this->MorphTargetAttributes).field_0x34;
  uVar39 = uVar33 & 0xffffffe0;
  uStack_300 = CONCAT44(uVar20,iVar36);
  uStack_2f0._0_4_ = 0xffffffff;
  uStack_2e8._4_4_ = local_134;
  TStack_1a8._padding_ = uStack_300;
  iVar36 = (int)uVar33 >> 5;
  uStack_188 = CONCAT44(uStack_2dc,local_2e0);
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  TStack_1a8.CurrentBitIndex = uStack_2f0._4_4_;
  TStack_1a8.BaseBitIndex = (int)uStack_2e8;
  TStack_1a8._28_4_ = local_134;
  pTStack_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  local_1b0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)local_308;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if ((((int)uVar33 < 0) || (iVar19 < (int)uVar33)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar12 = local_2c8;
  uVar20 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  if (uVar33 != uVar20) {
    puVar30 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x20;
    puVar37 = puVar8;
    if (puVar30 != (undefined1 *)0x0) {
      puVar37 = puVar30;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar36 * 4);
    while (uVar33 == 0) {
      lVar27 = (longlong)iVar36;
      uVar39 = uVar39 + 0x20;
      iVar36 = iVar36 + 1;
      uVar33 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
      goto LAB_143469bdf;
      uVar33 = *(uint *)(puVar37 + lVar27 * 4 + 4);
    }
    uVar32 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_220 = (int)lVar27;
    uVar33 = local_220 + -1 + uVar39;
    if ((int)uVar20 < (int)uVar33) {
      uVar33 = uVar20;
    }
  }
LAB_143469bdf:
  while( true ) {
    pTVar14 = local_1b0;
    if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
      local_316 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_316);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar33) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) &&
       (pTVar14 == &this->MorphTargetAttributes)) break;
    lVar9 = *(longlong *)pTVar14;
    lVar27 = lVar9 + (longlong)TStack_1a8.CurrentBitIndex * 0x18;
    pTVar24 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      *)&pFVar12->MorphTargetAttributes,
                     *(FName *)(lVar9 + (longlong)TStack_1a8.CurrentBitIndex * 0x18));
    plVar28 = (longlong *)&pTVar24->field_0x8;
    if (pTVar24 ==
        (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
         *)0x0) {
      plVar28 = (longlong *)0x0;
    }
    if (plVar28 == (longlong *)0x0) {
      plVar29 = *(longlong **)(lVar27 + 8);
      lVar27 = *plVar29;
LAB_143469c7c:
      (**(code **)(lVar27 + 0x40))(plVar29,param_2);
    }
    else {
      plVar29 = *(longlong **)(lVar27 + 8);
      lVar27 = *plVar29;
      if (*plVar28 == 0) goto LAB_143469c7c;
      (**(code **)(lVar27 + 0x38))(plVar29,*plVar28,param_2);
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  }
  uStack_2e8._0_4_ = 0;
  puVar8 = &(this->GenericAttributes).field_0x10;
  iVar19 = *(int *)&(this->GenericAttributes).field_0x28;
  pTVar2 = &this->GenericAttributes;
  iVar36 = 0;
  uStack_2f0._4_4_ = (int)uStack_2e8;
  if (iVar19 != 0) {
    puVar38 = *(uint **)&(this->GenericAttributes).field_0x20;
    if (puVar38 == (uint *)0x0) {
      puVar38 = (uint *)puVar8;
    }
    uVar20 = *puVar38;
    while (uVar20 == 0) {
      lVar27 = (longlong)iVar36;
      uStack_2e8._0_4_ = (int)uStack_2e8 + 0x20;
      iVar36 = iVar36 + 1;
      uStack_2f0._4_4_ = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_143469d30;
      uVar20 = puVar38[lVar27 + 1];
    }
    local_2d8 = (ulonglong)(-uVar20 & uVar20);
    uVar32 = local_2d8 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_21c = (int)lVar27;
    uStack_2f0._4_4_ = (int)uStack_2e8 + -1 + local_21c;
    if (iVar19 < uStack_2f0._4_4_) {
      uStack_2f0._4_4_ = iVar19;
    }
  }
LAB_143469d30:
  uVar20 = *(uint *)&(this->GenericAttributes).field_0x28;
  uVar39 = uVar20 & 0xffffffe0;
  local_2e0 = *(int *)&(this->GenericAttributes).field_0x8 -
              *(int *)&(this->GenericAttributes).field_0x34;
  uStack_2f0._0_4_ = 0xffffffff;
  uVar33 = -1 << ((byte)uVar20 & 0x1f);
  uStack_300 = CONCAT44((int)local_2d8,iVar36);
  uStack_2e8._4_4_ = local_114;
  iVar36 = (int)uVar20 >> 5;
  local_310 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)CONCAT44(local_310._4_4_,uVar33);
  uStack_158 = CONCAT44(uStack_2dc,local_2e0);
  TStack_178.UnvisitedBitMask = 0xffffffff;
  TStack_178.CurrentBitIndex = uStack_2f0._4_4_;
  TStack_178.BaseBitIndex = (int)uStack_2e8;
  TStack_178._28_4_ = local_114;
  local_308 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)pTVar2;
  pTStack_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  local_180 = pTVar2;
  TStack_178._padding_ = uStack_300;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if (((int)uVar20 < 0) || (iVar19 < (int)uVar20)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar16) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar33 = (uint)local_310;
  }
  pFVar12 = local_2c8;
  uVar3 = *(uint *)&(this->GenericAttributes).field_0x28;
  if (uVar20 != uVar3) {
    puVar30 = *(undefined1 **)&(this->GenericAttributes).field_0x20;
    puVar37 = puVar8;
    if (puVar30 != (undefined1 *)0x0) {
      puVar37 = puVar30;
    }
    uVar33 = uVar33 & *(uint *)(puVar37 + (longlong)iVar36 * 4);
    while (uVar33 == 0) {
      lVar27 = (longlong)iVar36;
      uVar39 = uVar39 + 0x20;
      iVar36 = iVar36 + 1;
      uVar20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_143469e70;
      uVar33 = *(uint *)(puVar37 + lVar27 * 4 + 4);
    }
    uVar32 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_218 = (int)lVar27;
    uVar20 = local_218 + -1 + uVar39;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_143469e70:
  do {
    pTVar15 = local_180;
    if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
      local_315[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_315);
    }
    pFVar13 = local_2c0;
    if (((TStack_178.CurrentBitIndex == uVar20) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) && (pTVar15 == pTVar2)
       ) {
      uVar31 = 0;
      uVar32 = uVar31;
      if (0 < (local_2c0->SculptLayers).Layers.Array.ArrayNum) {
        do {
          pFVar12 = local_2c8;
          lVar27 = 0;
          uVar20 = (uint)uVar31;
          if ((-1 < (int)uVar20) && ((int)uVar20 < (local_2c8->SculptLayers).Layers.Array.ArrayNum))
          {
            if (((int)uVar20 < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar27 = *(longlong *)
                      ((pFVar12->SculptLayers).Layers.Array.AllocatorInstance.Data + uVar32);
          }
          uVar33 = 0;
          if ((int)uVar20 < (pFVar13->SculptLayers).Layers.Array.ArrayNum) {
            uVar33 = ~uVar20 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar28 = *(longlong **)
                     ((pFVar13->SculptLayers).Layers.Array.AllocatorInstance.Data + uVar32);
          if (lVar27 == 0) {
            (**(code **)(*plVar28 + 0x40))(plVar28,param_2);
          }
          else {
            (**(code **)(*plVar28 + 0x38))(plVar28,lVar27,param_2);
          }
          uVar31 = (ulonglong)(uVar20 + 1);
          uVar32 = uVar32 + 8;
        } while ((int)(uVar20 + 1) < (pFVar13->SculptLayers).Layers.Array.ArrayNum);
      }
      return;
    }
    lVar9 = *(longlong *)pTVar15;
    lVar27 = lVar9 + (longlong)TStack_178.CurrentBitIndex * 0x18;
    pTVar25 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      *)&pFVar12->GenericAttributes,
                     *(FName *)(lVar9 + (longlong)TStack_178.CurrentBitIndex * 0x18));
    plVar28 = (longlong *)&pTVar25->field_0x8;
    if (pTVar25 ==
        (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
         *)0x0) {
      plVar28 = (longlong *)0x0;
    }
    if (plVar28 == (longlong *)0x0) {
      plVar29 = *(longlong **)(lVar27 + 8);
      lVar27 = *plVar29;
LAB_143469efc:
      (**(code **)(lVar27 + 0x40))(plVar29,param_2);
    }
    else {
      plVar29 = *(longlong **)(lVar27 + 8);
      lVar27 = *plVar29;
      if (*plVar28 == 0) goto LAB_143469efc;
      (**(code **)(lVar27 + 0x38))();
    }
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
  } while( true );
  while( true ) {
    uVar33 = param_2->VertexOffset + iVar19;
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(uVar33 & 0x1ff) * 0x40 +
               *(longlong *)
                ((pTVar40->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar33 >> 9) * 8)),&local_88);
    iVar19 = iVar19 + 1;
    if (param_2->NumVertex <= iVar19) break;
LAB_1434699b0:
    cVar17 = (**(code **)(*plVar28 + 0x48))(plVar28,iVar19,&local_88,0x40);
    if (cVar17 == '\0') {
      bVar16 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1891171441567596233>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                          ,0x137,"Source.CopyOut(Idx, BufferData, BufferSize)");
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      break;
    }
  }
LAB_143469914:
  TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  goto LAB_143469850;
  while( true ) {
    uVar20 = param_2->VertexOffset + iVar19;
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(uVar20 & 0x1ff) * 0x40 +
               *(longlong *)(*(longlong *)(lVar27 + 0x20) + (ulonglong)(uVar20 >> 9) * 8)),
               &local_108);
    iVar19 = iVar19 + 1;
    if (param_2->NumVertex <= iVar19) break;
LAB_143469590:
    cVar18 = (**(code **)(local_2b8._padding_ + 0x48))(&local_2b8,iVar19,&local_108,0x40);
    if (cVar18 == '\0') {
      bVar16 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1891171441567596233>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                          ,0x137,"Source.CopyOut(Idx, BufferData, BufferSize)");
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      break;
    }
  }
LAB_14346960c:
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty(&local_2b8.VertexBoneWeights,0);
  if (local_2b8.VertexBoneWeights.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.VertexBoneWeights.Blocks.AllocatorInstance.Data);
  }
  local_2b8._padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  goto LAB_143469488;
  while( true ) {
    uVar20 = param_2->VertexOffset + iVar19;
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(uVar20 & 0x1ff) * 0x40 +
               *(longlong *)
                ((pTVar40->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar20 >> 9) * 8)),&local_c8);
    iVar19 = iVar19 + 1;
    if (param_2->NumVertex <= iVar19) break;
LAB_143469670:
    cVar18 = (**(code **)(*plVar28 + 0x48))(plVar28,iVar19,&local_c8,0x40);
    if (cVar18 == '\0') {
      bVar16 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1891171441567596233>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                          ,0x137,"Source.CopyOut(Idx, BufferData, BufferSize)");
      if (bVar16) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      break;
    }
  }
LAB_143469488:
  TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  uVar20 = (uint)local_310;
  goto LAB_1434693d0;
}

// AppendBonesUnique @ 14346a170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::AppendBonesUnique
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1)

{
  int *piVar1;
  FName *pFVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this_00;
  undefined8 uVar3;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar4;
  TTransform<double> *pTVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  TArrayView<FName_const_,int> *pTVar16;
  ulonglong uVar17;
  TTransform<double> *pTVar18;
  longlong lVar19;
  int iVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  FName *pFVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  longlong lVar29;
  undefined1 auStack_178 [32];
  TTransform<double> *local_158;
  TTransform<double> *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  uint local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  int local_104;
  FName local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  TArrayView<FName_const_,int> local_d0;
  FName *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = (param_1->BoneNameAttrib).Ptr;
  if (this_00 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    if ((((param_1->BoneParentIndexAttrib).Ptr ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) &&
        ((param_1->BoneColorAttrib).Ptr ==
         (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0))
       && ((param_1->BonePoseAttrib).Ptr ==
           (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
           0x0)) {
      return true;
    }
    return false;
  }
  iVar15 = (this_00->AttribValues).ArrayNum;
  iVar20 = (((param_1->BoneParentIndexAttrib).Ptr)->AttribValues).ArrayNum;
  if ((iVar20 == iVar15) || (iVar20 == 0)) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  iVar20 = (((param_1->BoneColorAttrib).Ptr)->AttribValues).ArrayNum;
  if (((iVar20 == iVar15) || (iVar20 == 0)) && (bVar12)) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  iVar20 = (((param_1->BonePoseAttrib).Ptr)->AttribValues).ArrayNum;
  if ((iVar20 != iVar15) && (iVar20 != 0)) {
    return false;
  }
  if (!bVar12) {
    return false;
  }
  if ((this->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    EnableBones(this,0);
  }
  uVar22 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  pTVar16 = TArrayView<FName_const_,int>::
            TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                      (&local_d0,&((this->BoneNameAttrib).Ptr)->AttribValues);
  pFVar25 = pTVar16->DataPtr;
  uStack_b0 = *(undefined8 *)&pTVar16->ArrayNum;
  iVar15 = (int)uStack_b0;
  uVar24 = iVar15 + (local_a8._8_4_ - local_74);
  local_b8 = pFVar25;
  if (uVar24 <= (uint)(local_a8._8_4_ - local_74)) goto LAB_14346a4e3;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar24);
  if (uVar24 < 4) {
    uVar24 = 1;
  }
  else {
    uVar23 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_108 = (undefined4)lVar29;
    uVar24 = 1 << ((byte)lVar29 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar24 <= (int)local_60)) goto LAB_14346a4e3;
  local_60 = uVar24;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar24 != 0) {
    uVar14 = uVar24;
    if (uVar24 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_14346a33f;
      }
    }
    else {
LAB_14346a33f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar14,4);
    }
    if (0 < (int)uVar24) {
      uVar27 = (ulonglong)uVar24;
      uVar23 = uVar22;
      do {
        FVar21.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_68.Data;
        }
        uVar17 = uVar23 & (longlong)(int)uVar24 - 1U;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar21.Data + uVar17 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_128 = 0;
    uStack_124 = 1;
    uStack_114 = 0;
    uStack_110 = 0;
    if (local_80 != 0) {
      FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_88;
      }
      uVar24 = *(uint *)FVar28;
      uVar23 = uVar22;
      while (uVar24 == 0) {
        uStack_110 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_110;
        iVar20 = (int)uVar22;
        local_128 = iVar20 + 1;
        uVar22 = (ulonglong)local_128;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
        goto LAB_14346a441;
        uVar24 = ((uint *)((longlong)FVar28 + 4))[iVar20];
      }
      uStack_124 = -uVar24 & uVar24;
      uVar22 = (ulonglong)uStack_124 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_104 = (int)lVar29;
      uStack_114 = local_104 + -1 + uStack_110;
      uVar22 = (ulonglong)uStack_114;
      if ((int)local_80 < (int)uStack_114) {
LAB_14346a441:
        uVar22 = (ulonglong)local_80;
        uStack_114 = local_80;
      }
    }
    local_118 = 0xffffffff;
    local_f8 = (longlong *)local_a8;
    local_f0._padding_ = CONCAT44(uStack_124,local_128);
    local_f0.CurrentBitIndex = uStack_114;
    local_f0.UnvisitedBitMask = 0xffffffff;
    local_f0._28_4_ = uStack_10c;
    local_f0.BaseBitIndex = uStack_110;
    local_f0.Array = pTStack_120;
    if ((int)uVar22 < (int)local_80) {
      do {
        puVar26 = (undefined8 *)((longlong)(int)uVar22 * 0x10 + *local_f8);
        uVar3 = *puVar26;
        uVar24 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar24 = local_60 - 1 & uVar24 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar26 + 0xc) = uVar24;
        FVar21.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_68.Data;
        }
        uVar23 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar24;
        *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(FVar21.Data + uVar23 * 4);
        *(int *)(FVar21.Data + uVar23 * 4) = (int)uVar22;
        local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
        uVar22 = (ulonglong)(uint)local_f0.CurrentBitIndex;
      } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
    }
  }
LAB_14346a4e3:
  uVar24 = 0;
  pFVar2 = pFVar25 + iVar15;
  for (; pFVar25 != pFVar2; pFVar25 = pFVar25 + 1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a8,&local_100,
               (bool *)pFVar25);
  }
  if (0 < (this_00->AttribValues).ArrayNum) {
    lVar29 = 0;
    do {
      iVar15 = (this_00->AttribValues).ArrayNum;
      uVar14 = 0;
      if ((int)uVar24 < iVar15) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_158 = (TTransform<double> *)(longlong)(int)uVar24;
        local_150 = (TTransform<double> *)(longlong)iVar15;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
      }
      lVar19 = *(longlong *)((this_00->AttribValues).AllocatorInstance.Data + lVar29);
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar19);
      if (local_a8._8_4_ != local_74) {
        FVar21.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_68.Data;
        }
        for (iVar15 = *(int *)(FVar21.Data +
                              (ulonglong)(local_60 - 1 & (int)((ulonglong)lVar19 >> 0x20) + uVar14)
                              * 4); iVar15 != -1;
            iVar15 = *(int *)(local_a8._0_8_ + (longlong)iVar15 * 0x10 + 8)) {
          if (*(longlong *)(local_a8._0_8_ + (longlong)iVar15 * 0x10) == lVar19) goto LAB_14346a8a7;
        }
      }
      pTVar4 = (this->BoneNameAttrib).Ptr;
      pTVar18 = (TTransform<double> *)
                TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::GetValue
                          (this_00,uVar24);
      pTVar5 = (TTransform<double> *)(pTVar4->AttribValues).AllocatorInstance.Data;
      if ((pTVar5 <= pTVar18) &&
         (lVar19 = (longlong)(pTVar4->AttribValues).ArrayMax,
         pTVar18 < (TTransform<double> *)((pTVar5->Rotation).XY.m128d_f64 + lVar19))) {
        local_140 = (longlong)(pTVar4->AttribValues).ArrayNum;
        local_138 = 8;
        local_158 = pTVar18;
        local_150 = pTVar5;
        local_148 = lVar19;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
      }
      iVar15 = (pTVar4->AttribValues).ArrayNum;
      piVar1 = &(pTVar4->AttribValues).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(pTVar4->AttribValues).AllocatorInstance,piVar1);
      }
      (pTVar4->AttribValues).ArrayNum = iVar15 + 1;
      *(double *)((pTVar4->AttribValues).AllocatorInstance.Data + (longlong)iVar15 * 8) =
           (pTVar18->Rotation).XY.m128d_f64[0];
      pTVar6 = (this->BoneParentIndexAttrib).Ptr;
      pTVar18 = (TTransform<double> *)
                TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::GetValue
                          ((param_1->BoneParentIndexAttrib).Ptr,uVar24);
      pTVar5 = (TTransform<double> *)(pTVar6->AttribValues).AllocatorInstance.Data;
      if ((pTVar5 <= pTVar18) &&
         (lVar19 = (longlong)(pTVar6->AttribValues).ArrayMax,
         pTVar18 < (TTransform<double> *)((longlong)(pTVar5->Rotation).XY.m128d_f64 + lVar19 * 4)))
      {
        local_140 = (longlong)(pTVar6->AttribValues).ArrayNum;
        local_138 = 4;
        local_158 = pTVar18;
        local_150 = pTVar5;
        local_148 = lVar19;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
      }
      iVar15 = (pTVar6->AttribValues).ArrayNum;
      piVar1 = &(pTVar6->AttribValues).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pTVar6->AttribValues).AllocatorInstance,piVar1);
      }
      (pTVar6->AttribValues).ArrayNum = iVar15 + 1;
      *(uint *)((pTVar6->AttribValues).AllocatorInstance.Data + (longlong)iVar15 * 4) =
           *(uint *)(pTVar18->Rotation).XY.m128d_f64;
      pTVar7 = (this->BonePoseAttrib).Ptr;
      pTVar18 = TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                ::GetValue((param_1->BonePoseAttrib).Ptr,uVar24);
      pTVar5 = (TTransform<double> *)(pTVar7->AttribValues).AllocatorInstance.Data;
      if ((pTVar5 <= pTVar18) &&
         (lVar19 = (longlong)(pTVar7->AttribValues).ArrayMax, pTVar18 < pTVar5 + lVar19)) {
        local_140 = (longlong)(pTVar7->AttribValues).ArrayNum;
        local_138 = 0x60;
        local_158 = pTVar18;
        local_150 = pTVar5;
        local_148 = lVar19;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
      }
      iVar15 = (pTVar7->AttribValues).ArrayNum;
      piVar1 = &(pTVar7->AttribValues).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&(pTVar7->AttribValues).AllocatorInstance,piVar1);
      }
      (pTVar7->AttribValues).ArrayNum = iVar15 + 1;
      dVar11 = (pTVar18->Rotation).XY.m128d_f64[1];
      pFVar8 = (pTVar7->AttribValues).AllocatorInstance.Data;
      lVar19 = (longlong)iVar15 * 0x60;
      *(double *)(pFVar8 + lVar19) = (pTVar18->Rotation).XY.m128d_f64[0];
      *(double *)(pFVar8 + lVar19 + 8) = dVar11;
      dVar11 = (pTVar18->Rotation).ZW.m128d_f64[1];
      *(double *)(pFVar8 + lVar19 + 0x10) = (pTVar18->Rotation).ZW.m128d_f64[0];
      *(double *)(pFVar8 + lVar19 + 0x10 + 8) = dVar11;
      dVar11 = (pTVar18->Translation).XY.m128d_f64[1];
      *(double *)(pFVar8 + lVar19 + 0x20) = (pTVar18->Translation).XY.m128d_f64[0];
      *(double *)(pFVar8 + lVar19 + 0x20 + 8) = dVar11;
      dVar11 = (pTVar18->Translation).ZW.m128d_f64[1];
      *(double *)(pFVar8 + lVar19 + 0x30) = (pTVar18->Translation).ZW.m128d_f64[0];
      *(double *)(pFVar8 + lVar19 + 0x30 + 8) = dVar11;
      dVar11 = (pTVar18->Scale3D).XY.m128d_f64[1];
      *(double *)(pFVar8 + lVar19 + 0x40) = (pTVar18->Scale3D).XY.m128d_f64[0];
      *(double *)(pFVar8 + lVar19 + 0x40 + 8) = dVar11;
      dVar11 = (pTVar18->Scale3D).ZW.m128d_f64[1];
      *(double *)(pFVar8 + lVar19 + 0x50) = (pTVar18->Scale3D).ZW.m128d_f64[0];
      *(double *)(pFVar8 + lVar19 + 0x50 + 8) = dVar11;
      pTVar9 = (this->BoneColorAttrib).Ptr;
      pTVar18 = (TTransform<double> *)
                TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
                GetValue((param_1->BoneColorAttrib).Ptr,uVar24);
      pTVar5 = (TTransform<double> *)(pTVar9->AttribValues).AllocatorInstance.Data;
      if ((pTVar5 <= pTVar18) &&
         (lVar19 = (longlong)(pTVar9->AttribValues).ArrayMax,
         pTVar18 < (TTransform<double> *)(&(pTVar5->Rotation).XY + lVar19))) {
        local_140 = (longlong)(pTVar9->AttribValues).ArrayNum;
        local_138 = 0x10;
        local_158 = pTVar18;
        local_150 = pTVar5;
        local_148 = lVar19;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
      }
      iVar15 = (pTVar9->AttribValues).ArrayNum;
      piVar1 = &(pTVar9->AttribValues).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&(pTVar9->AttribValues).AllocatorInstance,piVar1);
      }
      (pTVar9->AttribValues).ArrayNum = iVar15 + 1;
      dVar11 = (pTVar18->Rotation).XY.m128d_f64[1];
      pFVar8 = (pTVar9->AttribValues).AllocatorInstance.Data + (longlong)iVar15 * 0x10;
      *(double *)pFVar8 = (pTVar18->Rotation).XY.m128d_f64[0];
      *(double *)(pFVar8 + 8) = dVar11;
LAB_14346a8a7:
      uVar24 = uVar24 + 1;
      lVar29 = lVar29 + 8;
    } while ((int)uVar24 < (this_00->AttribValues).ArrayNum);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return true;
}

// AppendDefaulted @ 14346b120

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::AppendDefaulted
          (FDynamicMeshAttributeSet *this,FAppendInfo *param_1)

{
  undefined1 *puVar1;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  uVar15 = 0;
  iVar11 = (**(code **)(this->_padding_ + 0xa8))();
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->UVLayers).Array.ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TDynamicMeshOverlay<float,2>::AppendDefaulted
                (*(TDynamicMeshOverlay<float,2> **)
                  ((this->UVLayers).Array.AllocatorInstance.Data + lVar14),param_1);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 8;
      iVar11 = (**(code **)(this->_padding_ + 0xa8))(this);
    } while ((int)uVar15 < iVar11);
  }
  uVar15 = 0;
  iVar11 = (**(code **)(this->_padding_ + 0xb8))(this);
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->NormalLayers).Array.ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TDynamicMeshOverlay<float,3>::AppendDefaulted
                (*(TDynamicMeshOverlay<float,3> **)
                  ((this->NormalLayers).Array.AllocatorInstance.Data + lVar14),param_1);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 8;
      iVar11 = (**(code **)(this->_padding_ + 0xb8))(this);
    } while ((int)uVar15 < iVar11);
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::AppendDefaulted(this_00,param_1);
  }
  pTVar5 = (this->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0x40))(pTVar5,param_1);
  }
  uVar15 = 0;
  iVar11 = (**(code **)(this->_padding_ + 200))(this);
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)((this->PolygroupLayers).Array.AllocatorInstance.Data + lVar14);
      (**(code **)(*plVar6 + 0x40))(plVar6,param_1);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 8;
      iVar11 = (**(code **)(this->_padding_ + 200))(this);
    } while ((int)uVar15 < iVar11);
  }
  uVar15 = 0;
  iVar11 = (**(code **)(this->_padding_ + 0xd8))(this);
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->WeightLayers).Array.ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)((this->WeightLayers).Array.AllocatorInstance.Data + lVar14);
      (**(code **)(*plVar6 + 0x40))(plVar6,param_1);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 8;
      iVar11 = (**(code **)(this->_padding_ + 0xd8))(this);
    } while ((int)uVar15 < iVar11);
  }
  puVar1 = &(this->SkinWeightAttributes).field_0x10;
  iVar11 = *(int *)&(this->SkinWeightAttributes).field_0x28;
  iVar16 = 0;
  local_res20 = 1;
  iVar18 = 0;
  iVar12 = 0;
  uVar15 = 1;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar12 = iVar11;
      uVar15 = 1;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14346b40f;
      uVar15 = puVar19[lVar14 + 1];
    }
    uVar15 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = iVar18 + -1 + (int)lVar14;
    if (iVar11 < iVar12) {
      iVar12 = iVar11;
    }
  }
LAB_14346b40f:
  uVar13 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  uVar20 = uVar13 & 0xffffffe0;
  TStack_138._padding_ = CONCAT44(uVar15,iVar16);
  TStack_138.CurrentBitIndex = iVar12;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_138._28_4_ = local_94;
  TStack_138.BaseBitIndex = iVar18;
  uStack_118 = CONCAT44(uStack_15c,
                        *(int *)&(this->SkinWeightAttributes).field_0x8 -
                        *(int *)&(this->SkinWeightAttributes).field_0x34);
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  if (uVar13 != uVar15) {
    puVar17 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar14 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14346b530;
      uVar13 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar13 = (int)lVar14 + -1 + uVar20;
    if ((int)uVar15 < (int)uVar13) {
      uVar13 = uVar15;
    }
  }
LAB_14346b530:
  while( true ) {
    if (*(int *)&(this->SkinWeightAttributes).field_0x8 -
        *(int *)&(this->SkinWeightAttributes).field_0x34 != (int)uStack_118) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_138.CurrentBitIndex == uVar13) &&
       (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::AppendDefaulted
              (*(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                (*(longlong *)&this->SkinWeightAttributes + 8 +
                (longlong)TStack_138.CurrentBitIndex * 0x18),param_1);
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  puVar1 = &(this->MorphTargetAttributes).field_0x10;
  iVar11 = *(int *)&(this->MorphTargetAttributes).field_0x28;
  local_110 = &this->MorphTargetAttributes;
  iVar16 = 0;
  iVar18 = 0;
  uVar15 = (uint)local_res20;
  iVar12 = 0;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar14 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar12 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14346b61f;
      uVar13 = puVar19[lVar14 + 1];
    }
    uVar15 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = iVar18 + -1 + (int)lVar14;
    if (iVar11 < iVar12) {
      iVar12 = iVar11;
    }
  }
LAB_14346b61f:
  uVar13 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  uVar20 = uVar13 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uVar15,iVar16);
  TStack_108.CurrentBitIndex = iVar12;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_108._28_4_ = local_74;
  TStack_108.BaseBitIndex = iVar18;
  uStack_e8 = CONCAT44(uStack_15c,
                       *(int *)&(this->MorphTargetAttributes).field_0x8 -
                       *(int *)&(this->MorphTargetAttributes).field_0x34);
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  if (uVar13 != uVar15) {
    puVar17 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar14 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14346b730;
      uVar13 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar13 = (uVar20 - 1) + (int)lVar14;
    if ((int)uVar15 < (int)uVar13) {
      uVar13 = uVar15;
    }
  }
LAB_14346b730:
  while( true ) {
    pTVar8 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_108.CurrentBitIndex == uVar13) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar8 == &this->MorphTargetAttributes)) break;
    plVar6 = *(longlong **)(*(longlong *)pTVar8 + 8 + (longlong)TStack_108.CurrentBitIndex * 0x18);
    (**(code **)(*plVar6 + 0x40))(plVar6,param_1);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  puVar1 = &(this->GenericAttributes).field_0x10;
  iVar18 = 0;
  iVar11 = *(int *)&(this->GenericAttributes).field_0x28;
  pTVar2 = &this->GenericAttributes;
  iVar16 = 0;
  iVar12 = 0;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&(this->GenericAttributes).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar18;
      iVar16 = iVar16 + 0x20;
      iVar18 = iVar18 + 1;
      iVar12 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14346b824;
      uVar15 = puVar19[lVar14 + 1];
    }
    local_res20 = (ulonglong)(-uVar15 & uVar15);
    uVar3 = local_res20 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = iVar16 + -1 + (int)lVar14;
    if (iVar11 < iVar12) {
      iVar12 = iVar11;
    }
  }
LAB_14346b824:
  uVar15 = *(uint *)&(this->GenericAttributes).field_0x28;
  uVar20 = uVar15 & 0xffffffe0;
  uVar13 = -1 << ((byte)uVar15 & 0x1f);
  TStack_d8._padding_ = CONCAT44((int)local_res20,iVar18);
  TStack_d8.CurrentBitIndex = iVar12;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  local_res20 = CONCAT44(local_res20._4_4_,uVar13);
  TStack_d8._28_4_ = local_54;
  TStack_d8.BaseBitIndex = iVar16;
  uStack_b8 = CONCAT44(uStack_15c,
                       *(int *)&(this->GenericAttributes).field_0x8 -
                       *(int *)&(this->GenericAttributes).field_0x34);
  local_e0 = pTVar2;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar15 < 0) || (iVar11 < (int)uVar15)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar13 = (uint)local_res20;
  }
  uVar4 = *(uint *)&(this->GenericAttributes).field_0x28;
  if (uVar15 != uVar4) {
    puVar17 = *(undefined1 **)&(this->GenericAttributes).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar13 = uVar13 & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar13 == 0) {
      lVar14 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14346b951;
      uVar13 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = (uVar20 - 1) + (int)lVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14346b951:
  while( true ) {
    pTVar9 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_d8.CurrentBitIndex == uVar15) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    plVar6 = *(longlong **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
    (**(code **)(*plVar6 + 0x40))(plVar6,param_1);
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  uVar15 = 0;
  if (0 < (this->SculptLayers).Layers.Array.ArrayNum) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->SculptLayers).Layers.Array.ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)((this->SculptLayers).Layers.Array.AllocatorInstance.Data + lVar14);
      (**(code **)(*plVar6 + 0x40))(plVar6,param_1);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar15 < (this->SculptLayers).Layers.Array.ArrayNum);
  }
  return;
}

// AttachMorphTargetAttribute @ 143473e30

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute
          (FDynamicMeshAttributeSet *this,FName param_1,
          TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *param_2)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>
  local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  this_00 = &this->MorphTargetAttributes;
  local_res10 = param_1;
  local_res18 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->MorphTargetAttributes).field_0x8 !=
      *(int *)&(this->MorphTargetAttributes).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MorphTargetAttributes).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->MorphTargetAttributes).field_0x48 - 1U &
                              param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                           *)this_00,param_1);
          if ((pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
                          *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                    ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                     *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar5->field_0x8);
          local_res20 = param_1;
          if (*(int *)&(this->MorphTargetAttributes).field_0x8 !=
              *(int *)&(this->MorphTargetAttributes).field_0x34) {
            uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                 *)this_00,local_res18.Number + uVar3,&local_res20);
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  (**(code **)(param_2->_padding_ + 0x28))(param_2,this->ParentMesh);
  local_res8.Ptr = param_2;
  TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  ::
  Emplace<FName_const_&,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
            ((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
              *)this_00,&local_res10,&local_res8);
  if (local_res8.Ptr != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
            ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)param_2);
  return;
}

// AttachSkinWeightsAttribute @ 143473f90

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
          (FDynamicMeshAttributeSet *this,FName param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>
  TVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar7;
  undefined1 *puVar8;
  TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>
  local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  local_res10 = param_1;
  local_res18 = param_1;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->SkinWeightAttributes).field_0x8 !=
      *(int *)&(this->SkinWeightAttributes).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SkinWeightAttributes).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SkinWeightAttributes).field_0x48 - 1U &
                              param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SkinWeightAttributes + (longlong)iVar6 * 0x18) == param_1
           ) {
          pTVar7 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                           *)&this->SkinWeightAttributes,param_1);
          if ((pTVar7 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
                          *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                    ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                     *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar7->field_0x8);
          local_res20 = param_1;
          if (*(int *)&(this->SkinWeightAttributes).field_0x8 !=
              *(int *)&(this->SkinWeightAttributes).field_0x34) {
            uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                 *)&this->SkinWeightAttributes,local_res18.Number + uVar5,
                                &local_res20);
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->SkinWeightAttributes + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  (**(code **)(param_2->_padding_ + 0x28))(param_2,this->ParentMesh);
  local_res8.Ptr = param_2;
  TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  ::
  Emplace<FName_const_&,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
            ((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
              *)&this->SkinWeightAttributes,&local_res10,&local_res8);
  TVar3.Ptr = local_res8.Ptr;
  if (local_res8.Ptr != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty
              (&(local_res8.Ptr)->VertexBoneWeights,0);
    pFVar1 = ((TVar3.Ptr)->VertexBoneWeights).Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (TVar3.Ptr)->_padding_ =
         (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    ::operator_delete(TVar3.Ptr,0x30);
  }
  TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
            ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)param_2);
  return;
}

// CheckBoneValidity @ 143478250

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::CheckBoneValidity
          (FDynamicMeshAttributeSet *this,EValidityCheckFailMode param_1)

{
  int iVar1;
  int iVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 local_res10 [24];
  
  pTVar3 = (this->BoneNameAttrib).Ptr;
  if (pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    if ((((this->BoneParentIndexAttrib).Ptr ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) &&
        ((this->BoneColorAttrib).Ptr ==
         (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0))
       && ((this->BonePoseAttrib).Ptr ==
           (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
           0x0)) {
LAB_143478326:
      bVar7 = true;
      goto LAB_143478286;
    }
  }
  else {
    iVar1 = (pTVar3->AttribValues).ArrayNum;
    iVar2 = (((this->BoneParentIndexAttrib).Ptr)->AttribValues).ArrayNum;
    if ((iVar2 == iVar1) || (iVar2 == 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    iVar2 = (((this->BoneColorAttrib).Ptr)->AttribValues).ArrayNum;
    if (((iVar2 == iVar1) || (iVar2 == 0)) && (bVar7)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    iVar2 = (((this->BonePoseAttrib).Ptr)->AttribValues).ArrayNum;
    if (((iVar2 == iVar1) || (iVar2 == 0)) && (bVar7)) goto LAB_143478326;
  }
  bVar7 = false;
LAB_143478286:
  if (param_1 == Check) {
    if (bVar7 == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                         ,0x8d1,L"FDynamicMeshAttributeSet::CheckBoneValidity failed!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  else if ((param_1 == Ensure) && (bVar7 == false)) {
    `UE::Geometry::FDynamicMeshAttributeSet::CheckBoneValidity'::__l23::<lambda_1>::operator()
              (local_res10);
  }
  return bVar7;
}

// CheckValidity @ 143482530

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::CheckValidity
          (FDynamicMeshAttributeSet *this,bool param_1,EValidityCheckFailMode param_2)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar10;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  TDynamicMeshOverlay<float,2> *pTVar19;
  TDynamicMeshOverlay<float,3> *this_01;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined1 *puVar25;
  longlong lVar26;
  undefined1 *puVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  TDynamicMeshOverlay<float,2> *pTVar31;
  FScriptContainerElement *pFVar32;
  uint local_res8;
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  FScriptContainerElement *local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined4 uStack_138;
  uint uStack_134;
  uint local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  ulonglong local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  int *piStack_100;
  undefined8 local_f8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  TDynamicMeshOverlay<float,2> *pTVar24;
  
  puVar22 = (undefined8 *)this->_padding_;
  iVar16 = (int)this->_padding_;
  bVar15 = true;
  puVar3 = puVar22 + iVar16;
  while( true ) {
    if ((int)this->_padding_ != iVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (puVar22 == puVar3) break;
    cVar12 = (**(code **)(*(longlong *)*puVar22 + 0x80))((longlong *)*puVar22,param_1,param_2);
    if ((cVar12 == '\0') || (!bVar15)) {
      bVar15 = false;
      puVar22 = puVar22 + 1;
    }
    else {
      bVar15 = true;
      puVar22 = puVar22 + 1;
    }
  }
  pTVar24 = (TDynamicMeshOverlay<float,2> *)0x0;
  iVar16 = (**(code **)(this->_padding_ + 0xa8))(this);
  pTVar19 = pTVar24;
  pTVar31 = pTVar24;
  if (0 < iVar16) {
    do {
      iVar16 = (int)pTVar19;
      pTVar19 = pTVar24;
      if ((iVar16 < (this->UVLayers).Array.ArrayNum) && (-1 < iVar16)) {
        if ((iVar16 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        pTVar19 = *(TDynamicMeshOverlay<float,2> **)
                   ((longlong)&pTVar31->ParentMesh +
                   (longlong)(this->UVLayers).Array.AllocatorInstance.Data);
      }
      bVar13 = TDynamicMeshOverlay<float,2>::CheckValidity(pTVar19,param_1,param_2);
      if ((bVar13) && (bVar15)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      iVar17 = (**(code **)(this->_padding_ + 0xa8))(this);
      pTVar19 = (TDynamicMeshOverlay<float,2> *)(ulonglong)(iVar16 + 1U);
      pTVar31 = (TDynamicMeshOverlay<float,2> *)&pTVar31->ElementsRefCounts;
    } while ((int)(iVar16 + 1U) < iVar17);
  }
  this_01 = (TDynamicMeshOverlay<float,3> *)pTVar24;
  if (0 < (this->NormalLayers).Array.ArrayNum) {
    this_01 = *(TDynamicMeshOverlay<float,3> **)(this->NormalLayers).Array.AllocatorInstance.Data;
  }
  bVar13 = TDynamicMeshOverlay<float,3>::CheckValidity(this_01,param_1,param_2);
  if ((bVar13) && (bVar15)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    bVar13 = TDynamicMeshOverlay<float,4>::CheckValidity(this_00,param_1,param_2);
    if ((bVar13) && (bVar15)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
  }
  pTVar6 = (this->MaterialIDAttrib).Ptr;
  if (pTVar6 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    cVar12 = (**(code **)(*(longlong *)pTVar6 + 0x80))(pTVar6,param_1,param_2);
    if ((cVar12 == '\0') || (!bVar15)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
  }
  iVar16 = (**(code **)(this->_padding_ + 200))(this);
  pTVar19 = pTVar24;
  pTVar31 = pTVar24;
  if (0 < iVar16) {
    do {
      uVar30 = (uint)pTVar19;
      uVar23 = 0;
      if ((int)uVar30 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      plVar7 = *(longlong **)
                ((longlong)&pTVar31->ParentMesh +
                (longlong)(this->PolygroupLayers).Array.AllocatorInstance.Data);
      cVar12 = (**(code **)(*plVar7 + 0x80))(plVar7,param_1,param_2);
      if ((cVar12 == '\0') || (!bVar15)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      iVar16 = (**(code **)(this->_padding_ + 200))(this);
      pTVar19 = (TDynamicMeshOverlay<float,2> *)(ulonglong)(uVar30 + 1);
      pTVar31 = (TDynamicMeshOverlay<float,2> *)&pTVar31->ElementsRefCounts;
    } while ((int)(uVar30 + 1) < iVar16);
  }
  iVar16 = (**(code **)(this->_padding_ + 0xd8))(this);
  uVar23 = 0;
  pTVar19 = pTVar24;
  pTVar31 = pTVar24;
  if (0 < iVar16) {
    do {
      uVar18 = (uint)pTVar19;
      uVar30 = uVar23;
      if ((int)uVar18 < (this->WeightLayers).Array.ArrayNum) {
        uVar30 = ~uVar18 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      plVar7 = *(longlong **)
                ((longlong)&pTVar31->ParentMesh +
                (longlong)(this->WeightLayers).Array.AllocatorInstance.Data);
      cVar12 = (**(code **)(*plVar7 + 0x80))(plVar7,param_1,param_2);
      if ((cVar12 == '\0') || (!bVar15)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      iVar16 = (**(code **)(this->_padding_ + 0xd8))(this);
      pTVar19 = (TDynamicMeshOverlay<float,2> *)(ulonglong)(uVar18 + 1);
      pTVar31 = (TDynamicMeshOverlay<float,2> *)&pTVar31->ElementsRefCounts;
    } while ((int)(uVar18 + 1) < iVar16);
  }
  local_140 = &(this->SkinWeightAttributes).field_0x10;
  uVar30 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  local_120 = 1;
  uVar18 = 1;
  uStack_134 = uVar23;
  local_130 = uVar23;
  if (uVar30 != 0) {
    puVar28 = *(uint **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)local_140;
    }
    uVar18 = *puVar28;
    pTVar19 = pTVar24;
    local_130 = 0;
    uVar23 = 0;
    while (uVar18 == 0) {
      iVar16 = (int)pTVar24;
      local_130 = (int)pTVar19 + 0x20;
      pTVar19 = (TDynamicMeshOverlay<float,2> *)(ulonglong)local_130;
      uVar23 = iVar16 + 1;
      pTVar24 = (TDynamicMeshOverlay<float,2> *)(ulonglong)uVar23;
      uVar18 = 1;
      uStack_134 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
      goto LAB_1434828e0;
      uVar18 = puVar28[(longlong)iVar16 + 1];
    }
    uVar18 = -uVar18 & uVar18;
    uVar5 = (ulonglong)uVar18 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_118 = (int)lVar20;
    uStack_134 = (local_130 - 1) + local_118;
    if ((int)uVar30 < (int)uStack_134) {
      uStack_134 = uVar30;
    }
  }
LAB_1434828e0:
  local_res8 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  local_150 = (FScriptContainerElement *)&this->SkinWeightAttributes;
  uStack_12c = local_74;
  iStack_128 = *(int *)&(this->SkinWeightAttributes).field_0x8 -
               *(int *)&(this->SkinWeightAttributes).field_0x34;
  uVar29 = local_res8 & 0xffffffe0;
  uStack_148 = (int *)CONCAT44(uVar18,uVar23);
  uStack_138 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_134;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = (longlong)uStack_148;
  iVar16 = (int)local_res8 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = local_130;
  uStack_c8 = CONCAT44(uStack_124,iStack_128);
  local_f0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
              *)local_150;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
  if ((((int)local_res8 < 0) || ((int)uVar30 < (int)local_res8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar23 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  if (local_res8 != uVar23) {
    puVar25 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(this->SkinWeightAttributes).field_0x10;
    }
    uVar30 = -1 << ((byte)local_res8 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar16 * 4);
    while (uVar30 == 0) {
      lVar20 = (longlong)iVar16;
      uVar29 = uVar29 + 0x20;
      iVar16 = iVar16 + 1;
      local_res8 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_143482a16;
      uVar30 = *(uint *)(puVar25 + lVar20 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_114 = (int)lVar20;
    local_res8 = local_114 + -1 + uVar29;
    if ((int)uVar23 < (int)local_res8) {
      local_res8 = uVar23;
    }
  }
LAB_143482a16:
  while( true ) {
    pTVar10 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_158 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_158);
    }
    lVar20 = (longlong)TStack_e8.CurrentBitIndex;
    if (((TStack_e8.CurrentBitIndex == local_res8) &&
        (TStack_e8.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10)) &&
       (pTVar10 == &this->SkinWeightAttributes)) break;
    lVar8 = *(longlong *)pTVar10;
    lVar26 = *(longlong *)(lVar8 + 8 + lVar20 * 0x18);
    if (lVar26 != 0) {
      if ((ulonglong)(uint)(*(int *)(lVar26 + 0x18) * 0x200 + *(int *)(lVar26 + 0x1c)) <
          (ulonglong)
          (longlong)
          (*(int *)(*(longlong *)(lVar26 + 0x10) + 0x20) * 0x200 +
          *(int *)(*(longlong *)(lVar26 + 0x10) + 0x24))) {
        if (param_2 == Check) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                              ,0x207,L"");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
LAB_143482ad9:
          bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1891171441567596023>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                              ,0x209,"false");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
        }
        else if (param_2 == Ensure) goto LAB_143482ad9;
        lVar26 = *(longlong *)(lVar8 + lVar20 * 0x18 + 8);
LAB_143482b0a:
        bVar15 = false;
      }
      else {
        if (!bVar15) goto LAB_143482b0a;
        bVar15 = true;
      }
      plVar7 = (longlong *)this->_padding_;
      for (plVar21 = plVar7; plVar21 != plVar7 + (int)this->_padding_; plVar21 = plVar21 + 1) {
        if (*plVar21 == lVar26) {
          if (((int)((longlong)plVar21 - (longlong)plVar7 >> 3) != -1) && (bVar15)) {
            bVar15 = true;
            goto LAB_143482b32;
          }
          break;
        }
      }
      bVar15 = false;
    }
LAB_143482b32:
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar17 = 0;
  puVar25 = &(this->MorphTargetAttributes).field_0x10;
  iVar16 = *(int *)&(this->MorphTargetAttributes).field_0x28;
  pTVar1 = &this->MorphTargetAttributes;
  local_130 = 0;
  uStack_134 = 0;
  if (iVar16 != 0) {
    puVar28 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)puVar25;
    }
    uVar23 = *puVar28;
    while (uVar23 == 0) {
      lVar20 = (longlong)iVar17;
      local_130 = local_130 + 0x20;
      iVar17 = iVar17 + 1;
      uStack_134 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143482bf3;
      uVar23 = puVar28[lVar20 + 1];
    }
    local_120 = (ulonglong)(-uVar23 & uVar23);
    uVar5 = local_120 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_110 = (int)lVar20;
    uStack_134 = local_130 + -1 + local_110;
    if (iVar16 < (int)uStack_134) {
      uStack_134 = iVar16;
    }
  }
LAB_143482bf3:
  uStack_12c = local_54;
  iStack_128 = *(int *)&(this->MorphTargetAttributes).field_0x8 -
               *(int *)&(this->MorphTargetAttributes).field_0x34;
  uStack_148 = (int *)CONCAT44((int)local_120,iVar17);
  uVar23 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  uVar30 = uVar23 & 0xffffffe0;
  uStack_138 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_134;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar23 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = local_130;
  uStack_98 = CONCAT44(uStack_124,iStack_128);
  local_150 = (FScriptContainerElement *)pTVar1;
  local_140 = puVar25;
  local_c0 = pTVar1;
  TStack_b8._padding_ = (longlong)uStack_148;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
  if ((((int)uVar23 < 0) || (iVar16 < (int)uVar23)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  uVar18 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  if (uVar23 != uVar18) {
    puVar27 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = puVar25;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar17 * 4);
    while (uVar23 == 0) {
      lVar20 = (longlong)iVar17;
      uVar30 = uVar30 + 0x20;
      iVar17 = iVar17 + 1;
      uVar23 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143482d30;
      uVar23 = *(uint *)(puVar27 + lVar20 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_10c = (int)lVar20;
    uVar23 = local_10c + -1 + uVar30;
    if ((int)uVar18 < (int)uVar23) {
      uVar23 = uVar18;
    }
  }
LAB_143482d30:
  do {
    pTVar11 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_157 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_157);
    }
    lVar20 = (longlong)TStack_b8.CurrentBitIndex;
    if (((TStack_b8.CurrentBitIndex == uVar23) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) && (pTVar11 == pTVar1)
       ) {
      bVar13 = CheckBoneValidity(this,param_2);
      if ((!bVar13) || (bVar13 = true, !bVar15)) {
        bVar13 = false;
      }
      pFVar32 = (this->SculptLayers).Layers.Array.AllocatorInstance.Data;
      piVar2 = &(this->SculptLayers).Layers.Array.ArrayNum;
      iVar16 = *piVar2;
      bVar15 = (this->SculptLayers).LayerWeights.ArrayNum == iVar16;
      local_140 = (undefined1 *)CONCAT44(local_140._4_4_,iVar16);
      pFVar4 = pFVar32 + (longlong)iVar16 * 8;
      local_f8 = local_140;
      local_150 = pFVar32;
      uStack_148 = piVar2;
      local_108 = pFVar32;
      piStack_100 = piVar2;
      do {
        if (*piVar2 != iVar16) {
          local_156[0] = 0;
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_156);
        }
        if (pFVar32 == pFVar4) {
          if (bVar15) {
            if (bVar13) {
              return true;
            }
          }
          else {
            local_108 = pFVar32;
            if (param_2 == Check) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                                  ,0xe7,L"");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                uVar14 = (*pcVar9)();
                return (bool)uVar14;
              }
            }
            else if (param_2 != Ensure) {
              return false;
            }
            bVar15 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2519995735064183017>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                                ,0xe9,"false");
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
          }
          return false;
        }
        plVar21 = (longlong *)this->_padding_;
        plVar7 = plVar21 + (int)this->_padding_;
        for (; plVar21 != plVar7; plVar21 = plVar21 + 1) {
          if (*plVar21 == *(longlong *)pFVar32) {
            if (bVar15) {
              bVar15 = true;
              goto LAB_143482ea7;
            }
            break;
          }
        }
        bVar15 = false;
LAB_143482ea7:
        if ((this->ParentMesh == *(FDynamicMesh3 **)(*(longlong *)pFVar32 + 0x10)) && (bVar15)) {
          pFVar32 = pFVar32 + 8;
          bVar15 = true;
        }
        else {
          bVar15 = false;
          pFVar32 = pFVar32 + 8;
        }
      } while( true );
    }
    lVar8 = *(longlong *)pTVar11;
    plVar7 = *(longlong **)(lVar8 + 8 + lVar20 * 0x18);
    if (plVar7 != (longlong *)0x0) {
      cVar12 = (**(code **)(*plVar7 + 0x80))(plVar7,param_1,param_2);
      if ((cVar12 == '\0') || (!bVar15)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      plVar7 = (longlong *)this->_padding_;
      for (plVar21 = plVar7; plVar21 != plVar7 + (int)this->_padding_; plVar21 = plVar21 + 1) {
        if (*plVar21 == *(longlong *)(lVar8 + lVar20 * 0x18 + 8)) {
          if (((int)((longlong)plVar21 - (longlong)plVar7 >> 3) != -1) && (bVar15)) {
            bVar15 = true;
            goto LAB_143482dc8;
          }
          break;
        }
      }
      bVar15 = false;
    }
LAB_143482dc8:
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// CompactCopy @ 14348b610

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::CompactCopy
          (FDynamicMeshAttributeSet *this,FCompactMaps *param_1,FDynamicMeshAttributeSet *param_2)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  TDynamicMeshOverlay<float,4> *this_02;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  FDynamicMesh3 *pFVar5;
  longlong *plVar6;
  FName FVar7;
  TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar9;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar14;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar15;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar16;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar17;
  longlong lVar18;
  undefined1 *puVar19;
  int iVar20;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar21;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar22;
  uint uVar23;
  uint uVar24;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint *puVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 local_res20 [8];
  undefined1 local_248;
  undefined1 local_247 [3];
  uint local_244;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_240;
  longlong local_238;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_230;
  uint uStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  uint uStack_214;
  uint local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  FName local_200;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>
  local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FName *local_140;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **local_138;
  FBoneWeights local_130;
  FBoneWeights local_f0;
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  pcVar3 = *(code **)(this->_padding_ + 0xb0);
  uVar12 = (**(code **)(param_2->_padding_ + 0xa8))(param_2);
  (*pcVar3)(this,uVar12);
  pTVar22 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  uVar24 = 0;
  iVar13 = (**(code **)(this->_padding_ + 0xa8))(this);
  pTVar21 = pTVar22;
  pTVar14 = pTVar22;
  if (0 < iVar13) {
    do {
      uVar27 = (uint)pTVar21;
      uVar26 = 0;
      if ((int)uVar27 < (this->UVLayers).Array.ArrayNum) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(TDynamicMeshOverlay<float,2> **)
                 ((longlong)&pTVar14->_padding_ +
                 (longlong)(this->UVLayers).Array.AllocatorInstance.Data);
      uVar26 = 0;
      if ((int)uVar27 < (param_2->UVLayers).Array.ArrayNum) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TDynamicMeshOverlay<float,2>::CompactCopy
                (this_00,param_1,
                 *(TDynamicMeshOverlay<float,2> **)
                  ((longlong)&pTVar14->_padding_ +
                  (longlong)(param_2->UVLayers).Array.AllocatorInstance.Data));
      iVar13 = (**(code **)(this->_padding_ + 0xa8))(this);
      pTVar21 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar27 + 1);
      pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar14->_padding_;
    } while ((int)(uVar27 + 1) < iVar13);
  }
  pcVar3 = *(code **)(this->_padding_ + 0xc0);
  uVar12 = (**(code **)(param_2->_padding_ + 0xb8))(param_2);
  (*pcVar3)(this,uVar12);
  iVar13 = (**(code **)(this->_padding_ + 0xb8))(this);
  uVar26 = 0;
  pTVar21 = pTVar22;
  pTVar14 = pTVar22;
  if (0 < iVar13) {
    do {
      uVar23 = (uint)pTVar21;
      uVar27 = uVar26;
      if ((int)uVar23 < (this->NormalLayers).Array.ArrayNum) {
        uVar27 = ~uVar23 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = *(TDynamicMeshOverlay<float,3> **)
                 ((longlong)&pTVar14->_padding_ +
                 (longlong)(this->NormalLayers).Array.AllocatorInstance.Data);
      uVar27 = uVar26;
      if ((int)uVar23 < (param_2->NormalLayers).Array.ArrayNum) {
        uVar27 = ~uVar23 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TDynamicMeshOverlay<float,3>::CompactCopy
                (this_01,param_1,
                 *(TDynamicMeshOverlay<float,3> **)
                  ((longlong)&pTVar14->_padding_ +
                  (longlong)(param_2->NormalLayers).Array.AllocatorInstance.Data));
      iVar13 = (**(code **)(this->_padding_ + 0xb8))(this);
      pTVar21 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar23 + 1);
      pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar14->_padding_;
    } while ((int)(uVar23 + 1) < iVar13);
  }
  if ((param_2->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    this_02 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
    if (this_02 != (TDynamicMeshOverlay<float,4> *)0x0) {
      (this->ColorLayer).Ptr = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
      TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_02);
      ::operator_delete(this_02,0x88);
    }
  }
  else {
    EnablePrimaryColors(this);
    TDynamicMeshOverlay<float,4>::CompactCopy
              ((TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr,param_1,
               (TDynamicMeshOverlay<float,4> *)(param_2->ColorLayer).Ptr);
  }
  if ((param_2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pTVar4 = (this->MaterialIDAttrib).Ptr;
    if (pTVar4 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
      (*(code *)**(undefined8 **)pTVar4)(pTVar4,1);
    }
  }
  else {
    EnableMaterialID(this);
    TDynamicMeshTriangleAttribute<int,1>::CompactCopy
              ((TDynamicMeshTriangleAttribute<int,1> *)(this->MaterialIDAttrib).Ptr,param_1,
               (TDynamicMeshTriangleAttribute<int,1> *)(param_2->MaterialIDAttrib).Ptr);
  }
  pcVar3 = *(code **)(this->_padding_ + 0xd0);
  uVar12 = (**(code **)(param_2->_padding_ + 200))(param_2);
  (*pcVar3)(this,uVar12);
  local_244 = 0;
  iVar13 = (**(code **)(this->_padding_ + 200))(this);
  uVar27 = 0;
  if (0 < iVar13) {
    local_238 = 0;
    pTVar21 = pTVar22;
    pTVar14 = pTVar22;
    do {
      uVar30 = (uint)pTVar21;
      uVar23 = uVar26;
      if ((int)uVar30 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar21 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                 ((longlong)&pTVar14->_padding_ +
                 (longlong)(this->PolygroupLayers).Array.AllocatorInstance.Data);
      uVar23 = uVar26;
      if ((int)uVar30 < (param_2->PolygroupLayers).Array.ArrayNum) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      local_240 = pTVar21;
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar18 = *(longlong *)
                ((longlong)&pTVar14->_padding_ +
                (longlong)(param_2->PolygroupLayers).Array.AllocatorInstance.Data);
      (**(code **)(pTVar21->_padding_ + 0xd0))(pTVar21,lVar18);
      if ((*(int *)(lVar18 + 0x18) * 0x200 + *(int *)(lVar18 + 0x1c) < (param_1->TriMap).ArrayNum)
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("CompactMaps.NumTriangleMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                                 ,0x93,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar21 = local_240;
      lVar33 = (longlong)(param_1->TriMap).ArrayNum;
      pTVar14 = pTVar22;
      pTVar25 = pTVar22;
      if (0 < lVar33) {
        do {
          uVar30 = (uint)pTVar14;
          uVar23 = uVar27;
          if ((int)uVar30 < (param_1->TriMap).ArrayNum) {
            uVar23 = ~uVar30 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar23 = *(uint *)((param_1->TriMap).AllocatorInstance.Data + (longlong)pTVar25 * 4);
          if (uVar23 != 0xffffffff) {
            *(undefined4 *)
             (*(longlong *)
               ((pTVar21->VertexBoneWeights).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar18 + 0x20) + ((ulonglong)pTVar14 >> 9) * 8) +
                  (ulonglong)(uVar30 & 0x1ff) * 4);
          }
          pTVar25 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                    ((longlong)&pTVar25->_padding_ + 1);
          pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                    (ulonglong)(uVar30 + 1);
          uVar30 = local_244;
        } while ((longlong)pTVar25 < lVar33);
      }
      uVar30 = uVar30 + 1;
      pTVar21 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar30
      ;
      pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(local_238 + 8);
      local_244 = uVar30;
      local_238 = (longlong)pTVar14;
      iVar13 = (**(code **)(this->_padding_ + 200))(this);
    } while ((int)uVar30 < iVar13);
  }
  pcVar3 = *(code **)(this->_padding_ + 0xe0);
  uVar12 = (**(code **)(param_2->_padding_ + 0xd8))(param_2);
  (*pcVar3)(this,uVar12);
  local_244 = 0;
  iVar13 = (**(code **)(this->_padding_ + 0xd8))(this);
  if (0 < iVar13) {
    local_238 = 0;
    pTVar21 = pTVar22;
    pTVar14 = pTVar22;
    do {
      uVar30 = (uint)pTVar21;
      uVar23 = uVar27;
      if ((int)uVar30 < (this->WeightLayers).Array.ArrayNum) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar21 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                 ((longlong)&pTVar14->_padding_ +
                 (longlong)(this->WeightLayers).Array.AllocatorInstance.Data);
      uVar23 = uVar26;
      if ((int)uVar30 < (param_2->WeightLayers).Array.ArrayNum) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      local_240 = pTVar21;
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar18 = *(longlong *)
                ((longlong)&pTVar14->_padding_ +
                (longlong)(param_2->WeightLayers).Array.AllocatorInstance.Data);
      pTVar21->_padding_ = *(longlong *)(lVar18 + 8);
      if ((*(int *)(lVar18 + 0x18) * 0x200 + *(int *)(lVar18 + 0x1c) < (param_1->VertMap).ArrayNum)
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("CompactMaps.NumVertexMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                                 ,0x88,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar21 = local_240;
      lVar33 = (longlong)(param_1->VertMap).ArrayNum;
      pTVar14 = pTVar22;
      pTVar25 = pTVar22;
      if (0 < lVar33) {
        do {
          uVar30 = (uint)pTVar14;
          uVar23 = uVar26;
          if ((int)uVar30 < (param_1->VertMap).ArrayNum) {
            uVar23 = ~uVar30 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar23 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + (longlong)pTVar25 * 4);
          if (uVar23 != 0xffffffff) {
            *(undefined4 *)
             (*(longlong *)
               ((pTVar21->VertexBoneWeights).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar18 + 0x20) + ((ulonglong)pTVar14 >> 9) * 8) +
                  (ulonglong)(uVar30 & 0x1ff) * 4);
          }
          pTVar25 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                    ((longlong)&pTVar25->_padding_ + 1);
          pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                    (ulonglong)(uVar30 + 1);
          uVar30 = local_244;
        } while ((longlong)pTVar25 < lVar33);
      }
      uVar30 = uVar30 + 1;
      pTVar21 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar30
      ;
      pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(local_238 + 8);
      local_244 = uVar30;
      local_238 = (longlong)pTVar14;
      iVar13 = (**(code **)(this->_padding_ + 0xd8))(this);
    } while ((int)uVar30 < iVar13);
  }
  iVar13 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar13 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           *)&this->SkinWeightAttributes);
  local_220 = &(param_2->SkinWeightAttributes).field_0x10;
  uVar23 = *(uint *)&(param_2->SkinWeightAttributes).field_0x28;
  local_230 = &param_2->SkinWeightAttributes;
  uStack_224 = 1;
  uStack_214 = uVar26;
  local_210 = uVar27;
  if (uVar23 != 0) {
    puVar29 = *(uint **)&(param_2->SkinWeightAttributes).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)local_220;
    }
    uVar30 = *puVar29;
    pTVar21 = pTVar22;
    pTVar14 = pTVar22;
    local_210 = uVar24;
    uVar26 = uVar24;
    while (uVar30 == 0) {
      iVar13 = (int)pTVar21;
      local_210 = (int)pTVar14 + 0x20;
      pTVar14 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)local_210;
      uVar26 = iVar13 + 1;
      pTVar21 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar26
      ;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_14348be29;
      uVar30 = puVar29[(longlong)iVar13 + 1];
    }
    uStack_224 = -uVar30 & uVar30;
    uVar2 = (ulonglong)uStack_224 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1f0 = (int)lVar18;
    uStack_214 = (local_210 - 1) + local_1f0;
    if ((int)uVar23 < (int)uStack_214) {
LAB_14348be29:
      uStack_214 = uVar23;
    }
  }
  puVar31 = &(param_2->SkinWeightAttributes).field_0x10;
  uStack_20c = local_94;
  TStack_1c8._padding_ = CONCAT44(uStack_224,uVar26);
  uStack_218 = 0xffffffff;
  TStack_1c8.CurrentBitIndex = uStack_214;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  uVar30 = *(uint *)&(param_2->SkinWeightAttributes).field_0x28;
  iStack_208 = *(int *)&(param_2->SkinWeightAttributes).field_0x8 -
               *(int *)&(param_2->SkinWeightAttributes).field_0x34;
  uVar32 = uVar30 & 0xffffffe0;
  iVar13 = (int)uVar30 >> 5;
  TStack_1c8._28_4_ = local_94;
  TStack_1c8.BaseBitIndex = local_210;
  uStack_1a8 = CONCAT44(uStack_204,iStack_208);
  uStack_228 = uVar26;
  local_1d8.Value =
       (TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
        *)local_230;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_220;
  if ((((int)uVar30 < 0) || ((int)uVar23 < (int)uVar30)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar26 = *(uint *)&(param_2->SkinWeightAttributes).field_0x28;
  if (uVar30 != uVar26) {
    puVar28 = *(undefined1 **)&(param_2->SkinWeightAttributes).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar31;
    }
    uVar23 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar13 * 4);
    while (uVar23 == 0) {
      lVar18 = (longlong)iVar13;
      uVar32 = uVar32 + 0x20;
      iVar13 = iVar13 + 1;
      uVar30 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14348bf60;
      uVar23 = *(uint *)(puVar28 + lVar18 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1ec = (int)lVar18;
    uVar30 = local_1ec + -1 + uVar32;
    if ((int)uVar26 < (int)uVar30) {
      uVar30 = uVar26;
    }
  }
LAB_14348bf60:
  while( true ) {
    pTVar8 = local_1d8.Value;
    if (*(int *)((longlong)local_1d8.Value + 8) - *(int *)((longlong)local_1d8.Value + 0x34) !=
        (int)uStack_1a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar18 = (longlong)TStack_1c8.CurrentBitIndex;
    if (((TStack_1c8.CurrentBitIndex == uVar30) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
       ((TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
         *)pTVar8 == &param_2->SkinWeightAttributes)) break;
    lVar33 = *(longlong *)pTVar8;
    pFVar5 = this->ParentMesh;
    local_240 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                 (lVar33 + 8 + lVar18 * 0x18);
    pTVar14 = ::operator_new(0x30);
    pTVar21 = pTVar22;
    if (pTVar14 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar14->_padding_ = 0;
      pTVar14->Parent = pFVar5;
      pTVar14->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      (pTVar14->VertexBoneWeights).CurBlock = 0;
      (pTVar14->VertexBoneWeights).CurBlockUsed = 0;
      (pTVar14->VertexBoneWeights).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar14->VertexBoneWeights).Blocks.ArrayNum = 0;
      (pTVar14->VertexBoneWeights).Blocks.ArrayMax = 0;
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                (&pTVar14->VertexBoneWeights);
      local_130.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_130.BoneWeights.ArrayNum = 0;
      local_130.BoneWeights.ArrayMax = 0xc;
      local_130.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_130.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_130.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar14,&local_130);
      pTVar21 = pTVar14;
    }
    local_f0.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_f0.BoneWeights.ArrayNum = 0;
    local_f0.BoneWeights.ArrayMax = 0xc;
    local_f0.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_f0.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_f0.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize(pTVar21,&local_f0);
    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CompactCopy
              (pTVar21,param_1,local_240);
    AttachSkinWeightsAttribute(this,*(FName *)(lVar33 + lVar18 * 0x18),pTVar21);
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           *)&this->MorphTargetAttributes);
  uStack_224 = 1;
  local_220 = &(param_2->MorphTargetAttributes).field_0x10;
  uVar26 = *(uint *)&(param_2->MorphTargetAttributes).field_0x28;
  pTVar1 = &param_2->MorphTargetAttributes;
  uStack_214 = uVar27;
  local_210 = uVar27;
  if (uVar26 != 0) {
    puVar29 = *(uint **)&(param_2->MorphTargetAttributes).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)local_220;
    }
    uVar23 = *puVar29;
    pTVar21 = pTVar22;
    local_210 = uVar24;
    uVar27 = uVar24;
    while (uVar23 == 0) {
      iVar13 = (int)pTVar22;
      local_210 = (int)pTVar21 + 0x20;
      pTVar21 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)local_210;
      uVar27 = iVar13 + 1;
      pTVar22 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar27
      ;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
      goto LAB_14348c167;
      uVar23 = puVar29[(longlong)iVar13 + 1];
    }
    uStack_224 = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_224 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1e8 = (int)lVar18;
    uStack_214 = (local_210 - 1) + local_1e8;
    if ((int)uVar26 < (int)uStack_214) {
LAB_14348c167:
      uStack_214 = uVar26;
    }
  }
  puVar31 = &(param_2->MorphTargetAttributes).field_0x10;
  uStack_20c = local_74;
  iStack_208 = *(int *)&(param_2->MorphTargetAttributes).field_0x8 -
               *(int *)&(param_2->MorphTargetAttributes).field_0x34;
  uVar24 = *(uint *)&(param_2->MorphTargetAttributes).field_0x28;
  uVar23 = uVar24 & 0xffffffe0;
  uStack_218 = 0xffffffff;
  TStack_198.CurrentBitIndex = uStack_214;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uStack_224,uVar27);
  iVar13 = (int)uVar24 >> 5;
  TStack_198._28_4_ = local_74;
  TStack_198.BaseBitIndex = local_210;
  uStack_178 = CONCAT44(uStack_204,iStack_208);
  local_230 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)pTVar1;
  uStack_228 = uVar27;
  local_1a0 = pTVar1;
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_220;
  if ((((int)uVar24 < 0) || ((int)uVar26 < (int)uVar24)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar26 = *(uint *)&(param_2->MorphTargetAttributes).field_0x28;
  if (uVar24 != uVar26) {
    puVar28 = *(undefined1 **)&(param_2->MorphTargetAttributes).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar31;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar13 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar13;
      uVar23 = uVar23 + 0x20;
      iVar13 = iVar13 + 1;
      uVar24 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14348c290;
      uVar24 = *(uint *)(puVar28 + lVar18 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1e4 = (int)lVar18;
    uVar24 = (uVar23 - 1) + local_1e4;
    if ((int)uVar26 < (int)uVar24) {
      uVar24 = uVar26;
    }
  }
LAB_14348c290:
  while( true ) {
    pTVar9 = local_1a0;
    if (*(int *)&local_1a0->field_0x8 - *(int *)&local_1a0->field_0x34 != (int)uStack_178) {
      local_248 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
    }
    lVar18 = (longlong)TStack_198.CurrentBitIndex;
    if (((TStack_198.CurrentBitIndex == uVar24) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) && (pTVar9 == pTVar1)
       ) break;
    lVar33 = *(longlong *)pTVar9;
    plVar6 = *(longlong **)(lVar33 + 8 + lVar18 * 0x18);
    pTVar15 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)
              (**(code **)(*plVar6 + 0x18))(plVar6,param_1,this->ParentMesh);
    AttachMorphTargetAttribute(this,*(FName *)(lVar33 + lVar18 * 0x18),pTVar15);
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  }
  CopyBoneAttributes(this,param_2);
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           *)&this->GenericAttributes);
  uStack_228 = 0;
  local_220 = &(param_2->GenericAttributes).field_0x10;
  iVar13 = *(int *)&(param_2->GenericAttributes).field_0x28;
  pTVar22 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
            &param_2->GenericAttributes;
  uStack_224 = 1;
  local_210 = 0;
  uStack_214 = 0;
  if (iVar13 != 0) {
    puVar29 = *(uint **)&(param_2->GenericAttributes).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)local_220;
    }
    uVar24 = *puVar29;
    while (uVar24 == 0) {
      lVar18 = (longlong)(int)uStack_228;
      local_210 = local_210 + 0x20;
      uStack_228 = uStack_228 + 1;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_228)
      goto LAB_14348c3b4;
      uVar24 = puVar29[lVar18 + 1];
    }
    uStack_224 = -uVar24 & uVar24;
    uVar2 = (ulonglong)uStack_224 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1e0 = (int)lVar18;
    uStack_214 = local_210 + -1 + local_1e0;
    if (iVar13 < (int)uStack_214) {
LAB_14348c3b4:
      uStack_214 = iVar13;
    }
  }
  puVar31 = &(param_2->GenericAttributes).field_0x10;
  uVar24 = *(uint *)&(param_2->GenericAttributes).field_0x28;
  uStack_20c = local_54;
  iStack_208 = *(int *)&(param_2->GenericAttributes).field_0x8 -
               *(int *)&(param_2->GenericAttributes).field_0x34;
  uVar26 = uVar24 & 0xffffffe0;
  uStack_218 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_214;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_224,uStack_228);
  iVar20 = (int)uVar24 >> 5;
  TStack_168._28_4_ = local_54;
  TStack_168.BaseBitIndex = local_210;
  uStack_148 = CONCAT44(uStack_204,iStack_208);
  local_240 = pTVar22;
  local_230 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)pTVar22;
  local_170 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)pTVar22;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_220;
  if ((((int)uVar24 < 0) || (iVar13 < (int)uVar24)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar27 = *(uint *)&(param_2->GenericAttributes).field_0x28;
  if (uVar24 != uVar27) {
    puVar28 = *(undefined1 **)&(param_2->GenericAttributes).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar31;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar20 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar20;
      uVar26 = uVar26 + 0x20;
      iVar20 = iVar20 + 1;
      uVar24 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14348c4e0;
      uVar24 = *(uint *)(puVar28 + lVar18 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1dc = (int)lVar18;
    uVar24 = local_1dc + -1 + uVar26;
    if ((int)uVar27 < (int)uVar24) {
      uVar24 = uVar27;
    }
  }
LAB_14348c4e0:
  do {
    pTVar10 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_247[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_247);
    }
    lVar18 = (longlong)TStack_168.CurrentBitIndex;
    if (((TStack_168.CurrentBitIndex == uVar24) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
       (pTVar10 ==
        (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
         *)pTVar22)) {
      FDynamicMeshSculptLayers::CompactCopy(&this->SculptLayers,this,param_1,&param_2->SculptLayers)
      ;
      return;
    }
    lVar33 = *(longlong *)pTVar10;
    plVar6 = *(longlong **)(lVar33 + 8 + lVar18 * 0x18);
    pTVar16 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)
              (**(code **)(*plVar6 + 0x18))(plVar6,param_1,this->ParentMesh);
    FVar7 = *(FName *)(lVar33 + lVar18 * 0x18);
    local_200 = FVar7;
    uVar26 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    if (*(int *)&(this->GenericAttributes).field_0x8 !=
        *(int *)&(this->GenericAttributes).field_0x34) {
      puVar28 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
      puVar19 = &(this->GenericAttributes).field_0x38;
      if (puVar28 != (undefined1 *)0x0) {
        puVar19 = puVar28;
      }
      iVar13 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->GenericAttributes).field_0x48 - 1U & FVar7.Number + uVar26)
                       * 4);
      if (iVar13 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->GenericAttributes + (longlong)iVar13 * 0x18) == FVar7)
          {
            pTVar17 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)&this->GenericAttributes,local_200);
            if ((pTVar17 ==
                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                  *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                      ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                       *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar17->field_0x8);
            break;
          }
          iVar13 = *(int *)(*(longlong *)&this->GenericAttributes + 0x10 + (longlong)iVar13 * 0x18);
        } while (iVar13 != -1);
      }
    }
    local_140 = &local_200;
    local_138 = &local_1f8;
    local_1f8 = pTVar16;
    TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>_>
              ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                *)&this->GenericAttributes,&local_1d8,(bool *)&local_140);
    if (local_1f8 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
      (**(code **)local_1f8->_padding_)(local_1f8,1);
    }
    TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
              ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,pTVar16);
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
    pTVar22 = local_240;
  } while( true );
}

// CompactInPlace @ 143492e00

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::CompactInPlace
          (FDynamicMeshAttributeSet *this,FCompactMaps *param_1)

{
  undefined8 *puVar1;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  uVar9 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0xa8))();
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->UVLayers).Array.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TDynamicMeshOverlay<float,2>::CompactInPlace
                (*(TDynamicMeshOverlay<float,2> **)
                  ((this->UVLayers).Array.AllocatorInstance.Data + lVar8),param_1);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      iVar6 = (**(code **)(this->_padding_ + 0xa8))(this);
    } while ((int)uVar9 < iVar6);
  }
  uVar9 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0xb8))(this);
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->NormalLayers).Array.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TDynamicMeshOverlay<float,3>::CompactInPlace
                (*(TDynamicMeshOverlay<float,3> **)
                  ((this->NormalLayers).Array.AllocatorInstance.Data + lVar8),param_1);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      iVar6 = (**(code **)(this->_padding_ + 0xb8))(this);
    } while ((int)uVar9 < iVar6);
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::CompactInPlace(this_00,param_1);
  }
  pTVar2 = (this->MaterialIDAttrib).Ptr;
  if (pTVar2 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar2 + 0x20))(pTVar2,param_1);
  }
  uVar9 = 0;
  iVar6 = (**(code **)(this->_padding_ + 200))(this);
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)((this->PolygroupLayers).Array.AllocatorInstance.Data + lVar8);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      iVar6 = (**(code **)(this->_padding_ + 200))(this);
    } while ((int)uVar9 < iVar6);
  }
  uVar9 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0xd8))(this);
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->WeightLayers).Array.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)((this->WeightLayers).Array.AllocatorInstance.Data + lVar8);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      iVar6 = (**(code **)(this->_padding_ + 0xd8))(this);
    } while ((int)uVar9 < iVar6);
  }
  puVar10 = (undefined8 *)this->_padding_;
  iVar6 = (int)this->_padding_;
  puVar1 = puVar10 + iVar6;
  while( true ) {
    if ((int)this->_padding_ != iVar6) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar10 == puVar1) break;
    (**(code **)(*(longlong *)*puVar10 + 0x20))((longlong *)*puVar10,param_1);
    puVar10 = puVar10 + 1;
  }
  return;
}

// Copy @ 143499690

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::Copy
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar2;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_00;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar7;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar8;
  TDynamicMeshOverlay<float,4> *this_01;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar9;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar10;
  longlong *plVar11;
  FDynamicMesh3 *pFVar12;
  longlong lVar13;
  FName FVar14;
  FDynamicMeshAttributeSet *pFVar15;
  TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar16;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar17;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar18;
  bool bVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar23;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar24;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar25;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar26;
  longlong lVar27;
  undefined1 *puVar28;
  int iVar29;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 *puVar35;
  undefined1 *puVar37;
  uint uVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 local_res8 [8];
  FDynamicMeshAttributeSet *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_2a8;
  undefined4 uStack_264;
  FName local_260;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_258;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>
  local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FName *local_1a0;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **local_198;
  FRefCountVector local_190;
  FRefCountVector local_158;
  FRefCountVector local_120;
  FBoneWeights local_e8;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar36;
  
  pcVar5 = *(code **)(this->_padding_ + 0xb0);
  local_res10 = param_1;
  uVar20 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
  (*pcVar5)(this,uVar20);
  pTVar36 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  uVar41 = 0;
  uVar40 = 0;
  iVar21 = (**(code **)(this->_padding_ + 0xa8))(this);
  pTVar30 = pTVar36;
  pTVar23 = pTVar36;
  if (0 < iVar21) {
    do {
      uVar31 = (uint)pTVar30;
      uVar34 = uVar40;
      if ((int)uVar31 < (this->UVLayers).Array.ArrayNum) {
        uVar34 = ~uVar31 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar27 = *(longlong *)
                ((longlong)&pTVar23->_padding_ +
                (longlong)(this->UVLayers).Array.AllocatorInstance.Data);
      uVar34 = uVar40;
      if ((int)uVar31 < (param_1->UVLayers).Array.ArrayNum) {
        uVar34 = ~uVar31 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar6 = *(longlong *)
               ((longlong)&pTVar23->_padding_ +
               (longlong)(param_1->UVLayers).Array.AllocatorInstance.Data);
      TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
                (&local_190.RefCounts,(TDynamicVector<unsigned_short,512> *)(lVar6 + 8));
      TDynamicVector<int,512>::TDynamicVector<int,512>
                (&local_190.FreeIndices,(TDynamicVector<int,512> *)(lVar6 + 0x20));
      local_190.UsedCount = *(int *)(lVar6 + 0x38);
      FRefCountVector::operator=((FRefCountVector *)(lVar27 + 8),&local_190);
      TDynamicVector<int,512>::Empty(&local_190.FreeIndices,0);
      if (local_190.FreeIndices.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.FreeIndices.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<unsigned_short,512>::Empty(&local_190.RefCounts,0);
      if (local_190.RefCounts.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.RefCounts.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<float,512>::operator=
                ((TDynamicVector<float,512> *)(lVar27 + 0x40),
                 (TDynamicVector<float,512> *)(lVar6 + 0x40));
      TDynamicVector<int,512>::operator=
                ((TDynamicVector<int,512> *)(lVar27 + 0x58),
                 (TDynamicVector<int,512> *)(lVar6 + 0x58));
      TDynamicVector<int,512>::operator=
                ((TDynamicVector<int,512> *)(lVar27 + 0x70),
                 (TDynamicVector<int,512> *)(lVar6 + 0x70));
      iVar21 = (**(code **)(this->_padding_ + 0xa8))(this);
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar31 + 1);
      pTVar23 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar23->_padding_;
      param_1 = local_res10;
    } while ((int)(uVar31 + 1) < iVar21);
  }
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  uVar20 = (**(code **)(param_1->_padding_ + 0xb8))(param_1);
  (*pcVar5)(this,uVar20);
  iVar21 = (**(code **)(this->_padding_ + 0xb8))(this);
  uVar34 = 0;
  pTVar30 = pTVar36;
  pTVar23 = pTVar36;
  if (0 < iVar21) {
    do {
      uVar38 = (uint)pTVar30;
      uVar31 = uVar34;
      if ((int)uVar38 < (this->NormalLayers).Array.ArrayNum) {
        uVar31 = ~uVar38 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar27 = *(longlong *)
                ((longlong)&pTVar23->_padding_ +
                (longlong)(this->NormalLayers).Array.AllocatorInstance.Data);
      uVar31 = uVar34;
      if ((int)uVar38 < (param_1->NormalLayers).Array.ArrayNum) {
        uVar31 = ~uVar38 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar6 = *(longlong *)
               ((longlong)&pTVar23->_padding_ +
               (longlong)(param_1->NormalLayers).Array.AllocatorInstance.Data);
      TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
                (&local_158.RefCounts,(TDynamicVector<unsigned_short,512> *)(lVar6 + 8));
      TDynamicVector<int,512>::TDynamicVector<int,512>
                (&local_158.FreeIndices,(TDynamicVector<int,512> *)(lVar6 + 0x20));
      local_158.UsedCount = *(int *)(lVar6 + 0x38);
      FRefCountVector::operator=((FRefCountVector *)(lVar27 + 8),&local_158);
      TDynamicVector<int,512>::Empty(&local_158.FreeIndices,0);
      if (local_158.FreeIndices.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.FreeIndices.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<unsigned_short,512>::Empty(&local_158.RefCounts,0);
      if (local_158.RefCounts.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.RefCounts.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<float,512>::operator=
                ((TDynamicVector<float,512> *)(lVar27 + 0x40),
                 (TDynamicVector<float,512> *)(lVar6 + 0x40));
      TDynamicVector<int,512>::operator=
                ((TDynamicVector<int,512> *)(lVar27 + 0x58),
                 (TDynamicVector<int,512> *)(lVar6 + 0x58));
      TDynamicVector<int,512>::operator=
                ((TDynamicVector<int,512> *)(lVar27 + 0x70),
                 (TDynamicVector<int,512> *)(lVar6 + 0x70));
      iVar21 = (**(code **)(this->_padding_ + 0xb8))(this);
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar38 + 1);
      pTVar23 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar23->_padding_;
      param_1 = local_res10;
    } while ((int)(uVar38 + 1) < iVar21);
  }
  if ((param_1->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    this_01 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
    if (this_01 != (TDynamicMeshOverlay<float,4> *)0x0) {
      (this->ColorLayer).Ptr = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
      TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_01);
      ::operator_delete(this_01,0x88);
    }
  }
  else {
    EnablePrimaryColors(this);
    pTVar7 = (param_1->ColorLayer).Ptr;
    pTVar8 = (this->ColorLayer).Ptr;
    TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
              (&local_120.RefCounts,(TDynamicVector<unsigned_short,512> *)&pTVar7->field_0x8);
    TDynamicVector<int,512>::TDynamicVector<int,512>
              (&local_120.FreeIndices,(TDynamicVector<int,512> *)&pTVar7->field_0x20);
    local_120.UsedCount = *(int *)&pTVar7->field_0x38;
    FRefCountVector::operator=((FRefCountVector *)&pTVar8->field_0x8,&local_120);
    TDynamicVector<int,512>::Empty(&local_120.FreeIndices,0);
    if (local_120.FreeIndices.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.FreeIndices.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<unsigned_short,512>::Empty(&local_120.RefCounts,0);
    if (local_120.RefCounts.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.RefCounts.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<float,512>::operator=
              ((TDynamicVector<float,512> *)&pTVar8->field_0x40,
               (TDynamicVector<float,512> *)&pTVar7->field_0x40);
    TDynamicVector<int,512>::operator=
              ((TDynamicVector<int,512> *)&pTVar8->field_0x58,
               (TDynamicVector<int,512> *)&pTVar7->field_0x58);
    TDynamicVector<int,512>::operator=
              ((TDynamicVector<int,512> *)&pTVar8->field_0x70,
               (TDynamicVector<int,512> *)&pTVar7->field_0x70);
  }
  if ((param_1->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pTVar9 = (this->MaterialIDAttrib).Ptr;
    if (pTVar9 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
      (*(code *)**(undefined8 **)pTVar9)(pTVar9,1);
    }
  }
  else {
    EnableMaterialID(this);
    pTVar9 = (this->MaterialIDAttrib).Ptr;
    pTVar10 = (param_1->MaterialIDAttrib).Ptr;
    (**(code **)(*(longlong *)pTVar9 + 0xd0))(pTVar9,pTVar10);
    TDynamicVector<int,512>::operator=
              ((TDynamicVector<int,512> *)&pTVar9->field_0x18,
               (TDynamicVector<int,512> *)&pTVar10->field_0x18);
  }
  pcVar5 = *(code **)(this->_padding_ + 0xd0);
  uVar20 = (**(code **)(param_1->_padding_ + 200))(param_1);
  (*pcVar5)(this,uVar20);
  iVar21 = (**(code **)(this->_padding_ + 200))(this);
  pTVar30 = pTVar36;
  pTVar23 = pTVar36;
  if (0 < iVar21) {
    do {
      uVar38 = (uint)pTVar30;
      uVar31 = uVar34;
      if ((int)uVar38 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar31 = ~uVar38 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar11 = *(longlong **)
                 ((longlong)&pTVar23->_padding_ +
                 (longlong)(this->PolygroupLayers).Array.AllocatorInstance.Data);
      uVar31 = uVar34;
      if ((int)uVar38 < (param_1->PolygroupLayers).Array.ArrayNum) {
        uVar31 = ~uVar38 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar27 = *(longlong *)
                ((longlong)&pTVar23->_padding_ +
                (longlong)(param_1->PolygroupLayers).Array.AllocatorInstance.Data);
      (**(code **)(*plVar11 + 0xd0))(plVar11,lVar27);
      TDynamicVector<int,512>::operator=
                ((TDynamicVector<int,512> *)(plVar11 + 3),(TDynamicVector<int,512> *)(lVar27 + 0x18)
                );
      iVar21 = (**(code **)(this->_padding_ + 200))(this);
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar38 + 1);
      pTVar23 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar23->_padding_;
    } while ((int)(uVar38 + 1) < iVar21);
  }
  pcVar5 = *(code **)(this->_padding_ + 0xe0);
  uVar20 = (**(code **)(param_1->_padding_ + 0xd8))(param_1);
  (*pcVar5)(this,uVar20);
  iVar21 = (**(code **)(this->_padding_ + 0xd8))(this);
  pFVar15 = local_res10;
  pTVar30 = pTVar36;
  pTVar23 = pTVar36;
  if (0 < iVar21) {
    do {
      uVar38 = (uint)pTVar30;
      uVar31 = uVar34;
      if ((int)uVar38 < (this->WeightLayers).Array.ArrayNum) {
        uVar31 = ~uVar38 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar27 = *(longlong *)
                ((longlong)&pTVar23->_padding_ +
                (longlong)(this->WeightLayers).Array.AllocatorInstance.Data);
      uVar31 = uVar34;
      if ((int)uVar38 < (pFVar15->WeightLayers).Array.ArrayNum) {
        uVar31 = ~uVar38 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar6 = *(longlong *)
               ((longlong)&pTVar23->_padding_ +
               (longlong)(pFVar15->WeightLayers).Array.AllocatorInstance.Data);
      *(undefined8 *)(lVar27 + 8) = *(undefined8 *)(lVar6 + 8);
      TDynamicVector<float,512>::operator=
                ((TDynamicVector<float,512> *)(lVar27 + 0x18),
                 (TDynamicVector<float,512> *)(lVar6 + 0x18));
      iVar21 = (**(code **)(this->_padding_ + 0xd8))(this);
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar38 + 1);
      param_1 = local_res10;
      pTVar23 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar23->_padding_;
    } while ((int)(uVar38 + 1) < iVar21);
  }
  iVar21 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar21 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           *)&this->SkinWeightAttributes);
  uVar31 = *(uint *)&(param_1->SkinWeightAttributes).field_0x28;
  pTVar1 = &param_1->SkinWeightAttributes;
  uVar22 = 1;
  uVar33 = 0;
  TStack_228.CurrentBitIndex = uVar34;
  uVar32 = uVar34;
  uVar38 = uVar33;
  if (uVar31 != 0) {
    puVar39 = *(uint **)&(param_1->SkinWeightAttributes).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)&(param_1->SkinWeightAttributes).field_0x10;
    }
    uVar42 = *puVar39;
    pTVar30 = pTVar36;
    pTVar23 = pTVar36;
    uVar38 = 0;
    uVar32 = 0;
    while (uVar42 == 0) {
      iVar21 = (int)pTVar30;
      uVar38 = (int)pTVar23 + 0x20;
      pTVar23 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar38
      ;
      uVar32 = iVar21 + 1;
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar32
      ;
      TStack_228.CurrentBitIndex = uVar31;
      if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
      goto LAB_143499e24;
      uVar42 = puVar39[(longlong)iVar21 + 1];
    }
    uVar22 = -uVar42 & uVar42;
    uVar4 = (ulonglong)uVar22 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_250 = (int)lVar27;
    TStack_228.CurrentBitIndex = (uVar38 - 1) + local_250;
    if ((int)uVar31 < TStack_228.CurrentBitIndex) {
      TStack_228.CurrentBitIndex = uVar31;
    }
  }
LAB_143499e24:
  TStack_228.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SkinWeightAttributes).field_0x10;
  local_2a8 = *(uint *)&(param_1->SkinWeightAttributes).field_0x28;
  uVar42 = local_2a8 & 0xffffffe0;
  TStack_228._padding_ = CONCAT44(uVar22,uVar32);
  iVar21 = (int)local_2a8 >> 5;
  TStack_228._28_4_ = local_8c;
  TStack_228.BaseBitIndex = uVar38;
  uStack_208 = CONCAT44(uStack_264,
                        *(int *)&(param_1->SkinWeightAttributes).field_0x8 -
                        *(int *)&(param_1->SkinWeightAttributes).field_0x34);
  TStack_228.UnvisitedBitMask = 0xffffffff;
  local_238.Value =
       (TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
        *)pTVar1;
  if (((int)local_2a8 < 0) || ((int)uVar31 < (int)local_2a8)) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar31 = *(uint *)&(param_1->SkinWeightAttributes).field_0x28;
  if (local_2a8 != uVar31) {
    puVar35 = *(undefined1 **)&(param_1->SkinWeightAttributes).field_0x20;
    if (puVar35 == (undefined1 *)0x0) {
      puVar35 = &(param_1->SkinWeightAttributes).field_0x10;
    }
    uVar38 = -1 << ((byte)local_2a8 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar21 * 4);
    while (uVar38 == 0) {
      lVar27 = (longlong)iVar21;
      uVar42 = uVar42 + 0x20;
      iVar21 = iVar21 + 1;
      local_2a8 = uVar31;
      if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_143499f60;
      uVar38 = *(uint *)(puVar35 + lVar27 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_24c = (int)lVar27;
    local_2a8 = local_24c + -1 + uVar42;
    if ((int)uVar31 < (int)local_2a8) {
      local_2a8 = uVar31;
    }
  }
LAB_143499f60:
  while( true ) {
    pTVar16 = local_238.Value;
    if (*(int *)((longlong)local_238.Value + 8) - *(int *)((longlong)local_238.Value + 0x34) !=
        (int)uStack_208) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar27 = (longlong)TStack_228.CurrentBitIndex;
    if (((TStack_228.CurrentBitIndex == local_2a8) &&
        (TStack_228.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SkinWeightAttributes).field_0x10)) &&
       ((TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
         *)pTVar16 == pTVar1)) break;
    pFVar12 = this->ParentMesh;
    lVar6 = *(longlong *)pTVar16;
    lVar13 = *(longlong *)(lVar6 + 8 + lVar27 * 0x18);
    pTVar23 = ::operator_new(0x30);
    pTVar30 = pTVar36;
    if (pTVar23 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar23->_padding_ = 0;
      pTVar23->Parent = pFVar12;
      pTVar23->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      (pTVar23->VertexBoneWeights).CurBlock = 0;
      (pTVar23->VertexBoneWeights).CurBlockUsed = 0;
      (pTVar23->VertexBoneWeights).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar23->VertexBoneWeights).Blocks.ArrayNum = 0;
      (pTVar23->VertexBoneWeights).Blocks.ArrayMax = 0;
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                (&pTVar23->VertexBoneWeights);
      local_e8.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_e8.BoneWeights.ArrayNum = 0;
      local_e8.BoneWeights.ArrayMax = 0xc;
      local_e8.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_e8.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_e8.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize(pTVar23,&local_e8)
      ;
      pTVar30 = pTVar23;
    }
    pTVar30->_padding_ = *(longlong *)(lVar13 + 8);
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
              (&pTVar30->VertexBoneWeights,
               (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(lVar13 + 0x18));
    AttachSkinWeightsAttribute(this,*(FName *)(lVar6 + lVar27 * 0x18),pTVar30);
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
  }
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           *)&this->MorphTargetAttributes);
  pFVar15 = local_res10;
  uVar22 = 1;
  puVar35 = &(local_res10->MorphTargetAttributes).field_0x10;
  uVar31 = *(uint *)&(local_res10->MorphTargetAttributes).field_0x28;
  pTVar2 = &local_res10->MorphTargetAttributes;
  iVar21 = 0;
  uVar32 = uVar33;
  uVar38 = uVar33;
  if (uVar31 != 0) {
    puVar39 = *(uint **)&(local_res10->MorphTargetAttributes).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)puVar35;
    }
    uVar32 = *puVar39;
    pTVar30 = pTVar36;
    pTVar23 = pTVar36;
    uVar38 = uVar41;
    uVar33 = uVar41;
    while (uVar32 == 0) {
      iVar21 = (int)pTVar30;
      uVar38 = (int)pTVar23 + 0x20;
      pTVar23 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar38
      ;
      uVar33 = iVar21 + 1;
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar33
      ;
      if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33) {
        iVar21 = *(int *)&(local_res10->MorphTargetAttributes).field_0x28;
        uVar32 = uVar31;
        goto LAB_14349a124;
      }
      uVar32 = puVar39[(longlong)iVar21 + 1];
    }
    iVar21 = *(int *)&(local_res10->MorphTargetAttributes).field_0x28;
    uVar22 = -uVar32 & uVar32;
    uVar4 = (ulonglong)uVar22 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_248 = (int)lVar27;
    uVar32 = (uVar38 - 1) + local_248;
    if (iVar21 < (int)uVar32) {
      uVar32 = uVar31;
    }
  }
LAB_14349a124:
  uVar31 = *(uint *)&(local_res10->MorphTargetAttributes).field_0x28;
  uVar42 = uVar31 & 0xffffffe0;
  TStack_1f8._padding_ = CONCAT44(uVar22,uVar33);
  TStack_1f8.CurrentBitIndex = uVar32;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar31 >> 5;
  TStack_1f8._28_4_ = local_6c;
  TStack_1f8.BaseBitIndex = uVar38;
  uStack_1d8 = CONCAT44(uStack_264,
                        *(int *)&(local_res10->MorphTargetAttributes).field_0x8 -
                        *(int *)&(local_res10->MorphTargetAttributes).field_0x34);
  local_200 = pTVar2;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
  if (((int)uVar31 < 0) || (iVar21 < (int)uVar31)) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar38 = *(uint *)&(pFVar15->MorphTargetAttributes).field_0x28;
  if (uVar31 != uVar38) {
    puVar37 = *(undefined1 **)&(pFVar15->MorphTargetAttributes).field_0x20;
    if (puVar37 == (undefined1 *)0x0) {
      puVar37 = &(pFVar15->MorphTargetAttributes).field_0x10;
    }
    uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar29 * 4);
    while (uVar31 == 0) {
      lVar27 = (longlong)iVar29;
      uVar42 = uVar42 + 0x20;
      iVar29 = iVar29 + 1;
      uVar31 = uVar38;
      if ((int)((uVar38 - 1) + ((int)(uVar38 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14349a250;
      uVar31 = *(uint *)(puVar37 + lVar27 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_244 = (int)lVar27;
    uVar31 = (uVar42 - 1) + local_244;
    if ((int)uVar38 < (int)uVar31) {
      uVar31 = uVar38;
    }
  }
LAB_14349a250:
  while( true ) {
    pTVar17 = local_200;
    if (*(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34 != (int)uStack_1d8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    pFVar15 = local_res10;
    lVar27 = (longlong)TStack_1f8.CurrentBitIndex;
    if (((TStack_1f8.CurrentBitIndex == uVar31) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar35)) &&
       (pTVar17 == pTVar2)) break;
    lVar6 = *(longlong *)pTVar17;
    plVar11 = *(longlong **)(lVar6 + 8 + lVar27 * 0x18);
    pTVar24 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)
              (**(code **)(*plVar11 + 8))(plVar11,this->ParentMesh);
    AttachMorphTargetAttribute(this,*(FName *)(lVar6 + lVar27 * 0x18),pTVar24);
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
  }
  CopyBoneAttributes(this,local_res10);
  this_00 = &this->GenericAttributes;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           *)this_00);
  puVar35 = &(pFVar15->GenericAttributes).field_0x10;
  uVar32 = 1;
  uVar31 = *(uint *)&(pFVar15->GenericAttributes).field_0x28;
  pTVar3 = &pFVar15->GenericAttributes;
  uVar38 = uVar34;
  if (uVar31 != 0) {
    puVar39 = *(uint **)&(pFVar15->GenericAttributes).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)puVar35;
    }
    uVar38 = *puVar39;
    pTVar30 = pTVar36;
    uVar34 = uVar41;
    uVar40 = uVar41;
    while (uVar38 == 0) {
      iVar21 = (int)pTVar30;
      uVar34 = (int)pTVar36 + 0x20;
      pTVar36 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar34
      ;
      uVar40 = iVar21 + 1;
      pTVar30 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar40
      ;
      uVar38 = uVar31;
      if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar40)
      goto LAB_14349a37f;
      uVar38 = puVar39[(longlong)iVar21 + 1];
    }
    uVar32 = -uVar38 & uVar38;
    uVar4 = (ulonglong)uVar32 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_240 = (int)lVar27;
    uVar38 = (uVar34 - 1) + local_240;
    if ((int)uVar31 < (int)uVar38) {
      uVar38 = uVar31;
    }
  }
LAB_14349a37f:
  TStack_1c8._padding_ = CONCAT44(uVar32,uVar40);
  uVar40 = *(uint *)&(pFVar15->GenericAttributes).field_0x28;
  uVar41 = uVar40 & 0xffffffe0;
  TStack_1c8.CurrentBitIndex = uVar38;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar40 >> 5;
  TStack_1c8._28_4_ = local_4c;
  TStack_1c8.BaseBitIndex = uVar34;
  uStack_1a8 = CONCAT44(uStack_264,
                        *(int *)&(pFVar15->GenericAttributes).field_0x8 -
                        *(int *)&(pFVar15->GenericAttributes).field_0x34);
  local_1d0 = pTVar3;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
  if (((int)uVar40 < 0) || ((int)uVar31 < (int)uVar40)) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar34 = *(uint *)&(pFVar15->GenericAttributes).field_0x28;
  if (uVar40 != uVar34) {
    puVar37 = *(undefined1 **)&(pFVar15->GenericAttributes).field_0x20;
    if (puVar37 == (undefined1 *)0x0) {
      puVar37 = &(pFVar15->GenericAttributes).field_0x10;
    }
    uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar21 * 4);
    while (uVar40 == 0) {
      lVar27 = (longlong)iVar21;
      uVar41 = uVar41 + 0x20;
      iVar21 = iVar21 + 1;
      uVar40 = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14349a4b0;
      uVar40 = *(uint *)(puVar37 + lVar27 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_23c = (int)lVar27;
    uVar40 = (uVar41 - 1) + local_23c;
    if ((int)uVar34 < (int)uVar40) {
      uVar40 = uVar34;
    }
  }
LAB_14349a4b0:
  do {
    pTVar18 = local_1d0;
    if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar27 = (longlong)TStack_1c8.CurrentBitIndex;
    if (((TStack_1c8.CurrentBitIndex == uVar40) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar35)) &&
       (pTVar18 == pTVar3)) {
      FDynamicMeshSculptLayers::Copy(&this->SculptLayers,this,&local_res10->SculptLayers);
      return;
    }
    lVar6 = *(longlong *)pTVar18;
    plVar11 = *(longlong **)(lVar6 + 8 + lVar27 * 0x18);
    pTVar25 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)
              (**(code **)(*plVar11 + 8))(plVar11,this->ParentMesh);
    FVar14 = *(FName *)(lVar6 + lVar27 * 0x18);
    local_260 = FVar14;
    uVar41 = ::GetTypeHash(FVar14.ComparisonIndex.Value);
    if (*(int *)&(this->GenericAttributes).field_0x8 !=
        *(int *)&(this->GenericAttributes).field_0x34) {
      puVar37 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
      puVar28 = &(this->GenericAttributes).field_0x38;
      if (puVar37 != (undefined1 *)0x0) {
        puVar28 = puVar37;
      }
      iVar21 = *(int *)(puVar28 +
                       (ulonglong)
                       (*(int *)&(this->GenericAttributes).field_0x48 - 1U & FVar14.Number + uVar41)
                       * 4);
      if (iVar21 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar21 * 0x18) == FVar14) {
            pTVar26 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)this_00,local_260);
            if (pTVar26 ==
                (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L"");
              if (bVar19) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                      ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                       *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar26->field_0x8);
            break;
          }
          iVar21 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar21 * 0x18);
        } while (iVar21 != -1);
      }
    }
    local_1a0 = &local_260;
    local_198 = &local_258;
    local_258 = pTVar25;
    TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>_>
              ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                *)this_00,&local_238,(bool *)&local_1a0);
    if (local_258 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
      (**(code **)local_258->_padding_)(local_258,1);
    }
    TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
              ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,pTVar25);
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  } while( true );
}

// CopyBoneAttributes @ 14349a890

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::CopyBoneAttributes
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1)

{
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
  *pTVar2;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
  *pTVar3;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
  *pTVar4;
  FDynamicMesh3 *pFVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar9;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar10;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar11;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar12;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this_00;
  undefined8 *puVar13;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar14;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar15;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  pTVar14 = (param_1->BoneNameAttrib).Ptr;
  pTVar1 = &this->BoneNameAttrib;
  pFVar5 = this->ParentMesh;
  pTVar15 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
  if (pTVar14 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    pTVar14 = pTVar1->Ptr;
    if (pTVar14 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      pTVar1->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
      (**(code **)pTVar14->_padding_)();
    }
  }
  else {
    pTVar10 = ::operator_new(0x28);
    pTVar11 = pTVar15;
    if (pTVar10 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      pTVar10->_padding_ = 0;
      pTVar10->Parent = pFVar5;
      pTVar10->_padding_ =
           (longlong)
           &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
      (pTVar10->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar10->AttribValues).ArrayNum = 0;
      (pTVar10->AttribValues).ArrayMax = 0;
      TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize(pTVar10,0);
      pTVar11 = pTVar10;
    }
    if (pTVar1 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
                   *)&local_38) {
      if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        puVar13 = (undefined8 *)pTVar11->_padding_;
        goto LAB_14349a932;
      }
    }
    else {
      pTVar10 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar11;
      if (pTVar10 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        puVar13 = (undefined8 *)pTVar10->_padding_;
        pTVar11 = pTVar10;
LAB_14349a932:
        (*(code *)*puVar13)(pTVar11,1);
      }
    }
    pTVar11 = pTVar1->Ptr;
    pTVar11->_padding_ = pTVar14->_padding_;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&pTVar11->AttribValues,&pTVar14->AttribValues);
  }
  pTVar6 = (param_1->BoneParentIndexAttrib).Ptr;
  pTVar2 = &this->BoneParentIndexAttrib;
  pFVar5 = this->ParentMesh;
  if (pTVar6 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    pTVar6 = pTVar2->Ptr;
    if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
      pTVar2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
      (**(code **)pTVar6->_padding_)();
    }
  }
  else {
    pTVar11 = ::operator_new(0x28);
    pTVar14 = pTVar15;
    if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      pTVar11->_padding_ = 0;
      pTVar11->_padding_ =
           (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_
      ;
      pTVar11->Parent = pFVar5;
      (pTVar11->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar11->AttribValues).ArrayNum = 0;
      (pTVar11->AttribValues).ArrayMax = 0;
      pTVar14 = pTVar11;
    }
    if (pTVar2 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
                   *)&local_30) {
      if (pTVar14 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        puVar13 = (undefined8 *)pTVar14->_padding_;
        goto LAB_14349a9d5;
      }
    }
    else {
      pTVar11 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar2->Ptr;
      pTVar2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)pTVar14;
      if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        puVar13 = (undefined8 *)pTVar11->_padding_;
        pTVar14 = pTVar11;
LAB_14349a9d5:
        (*(code *)*puVar13)(pTVar14,1);
      }
    }
    pTVar7 = pTVar2->Ptr;
    pTVar7->_padding_ = pTVar6->_padding_;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pTVar7->AttribValues,&pTVar6->AttribValues);
  }
  pTVar8 = (param_1->BonePoseAttrib).Ptr;
  pTVar3 = &this->BonePoseAttrib;
  pFVar5 = this->ParentMesh;
  if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    pTVar8 = pTVar3->Ptr;
    if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) {
      pTVar3->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)0x0;
      (**(code **)pTVar8->_padding_)();
    }
  }
  else {
    pTVar12 = ::operator_new(0x28);
    pTVar14 = pTVar15;
    if (pTVar12 !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    {
      pTVar12->_padding_ = 0;
      pTVar12->Parent = pFVar5;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
      ;
      (pTVar12->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar12->AttribValues).ArrayNum = 0;
      (pTVar12->AttribValues).ArrayMax = 0;
      TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Resize
                (pTVar12,0);
      pTVar14 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar12;
    }
    if (pTVar3 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
                   *)&local_28) {
      if (pTVar14 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        puVar13 = (undefined8 *)pTVar14->_padding_;
        goto LAB_14349aa86;
      }
    }
    else {
      pTVar11 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar3->Ptr;
      pTVar3->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)pTVar14;
      if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        puVar13 = (undefined8 *)pTVar11->_padding_;
        pTVar14 = pTVar11;
LAB_14349aa86:
        (*(code *)*puVar13)(pTVar14,1);
      }
    }
    pTVar12 = pTVar3->Ptr;
    pTVar12->_padding_ = pTVar8->_padding_;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&pTVar12->AttribValues,&pTVar8->AttribValues);
  }
  pTVar9 = (param_1->BoneColorAttrib).Ptr;
  pTVar4 = &this->BoneColorAttrib;
  pFVar5 = this->ParentMesh;
  if (pTVar9 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    pTVar9 = pTVar4->Ptr;
    if (pTVar9 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) {
      return;
    }
    pTVar4->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0;
    (**(code **)pTVar9->_padding_)(pTVar9,1);
    return;
  }
  this_00 = ::operator_new(0x28);
  if (this_00 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    this_00->_padding_ = 0;
    this_00->Parent = pFVar5;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Resize
              (this_00,0);
    pTVar15 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)this_00;
  }
  if (pTVar4 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
                 *)&local_20) {
    if (pTVar15 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_14349ab3a;
    puVar13 = (undefined8 *)pTVar15->_padding_;
  }
  else {
    pTVar14 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar4->Ptr;
    pTVar4->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)pTVar15;
    if (pTVar14 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_14349ab3a;
    puVar13 = (undefined8 *)pTVar14->_padding_;
    pTVar15 = pTVar14;
  }
  (*(code *)*puVar13)(pTVar15,1);
LAB_14349ab3a:
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Copy
            (pTVar4->Ptr,pTVar9);
  return;
}

// CopyBoneAttributesWithRemapping @ 14349ab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::CopyBoneAttributesWithRemapping
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_2)

{
  uint *puVar1;
  int iVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar3;
  undefined8 uVar4;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  void *pvVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  TTuple<FName,int> *pTVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  int *piVar18;
  uint uVar19;
  undefined1 *puVar20;
  ForElementType<unsigned_int> FVar21;
  longlong lVar22;
  FName FVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  int local_1b4;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  int local_1a0 [2];
  int local_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined4 local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  int local_174;
  FScriptContainerElement *local_170;
  FDynamicMeshAttributeSet *local_168;
  FDynamicMeshAttributeSet *local_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  FSparseArrayAllocationInfo local_130;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  TArrayView<int_const_,int> local_b8;
  TArrayView<int_const_,int> local_a8;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar3 = (param_1->BoneNameAttrib).Ptr;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_168 = this;
  local_160 = param_1;
  if (pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
LAB_14349b192:
    pFVar9 = local_160;
    pFVar8 = local_168;
    iVar2 = (int)local_1a8;
    local_118 = local_1b0.Data;
    if (((int)local_1a8 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iStack_110 = iVar2;
    local_d8._12_4_ = uStack_10c;
    local_d8.ArrayNum = iVar2;
    local_d8.DataPtr = (int *)local_118;
    BoneAttributeHelpers::SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,FName>
              (pFVar8->ParentMesh,&pFVar8->BoneNameAttrib,(pFVar9->BoneNameAttrib).Ptr,&local_d8);
    iStack_100 = (int)local_1a8;
    local_108 = local_1b0.Data;
    if (((int)local_1a8 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c8._12_4_ = uStack_fc;
    local_c8.ArrayNum = iStack_100;
    local_c8.DataPtr = (int *)local_108;
    BoneAttributeHelpers::SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,int>
              (pFVar8->ParentMesh,&pFVar8->BoneParentIndexAttrib,(pFVar9->BoneParentIndexAttrib).Ptr
               ,&local_c8);
    iStack_f0 = (int)local_1a8;
    local_f8 = local_1b0.Data;
    if (((int)local_1a8 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_b8._12_4_ = uStack_ec;
    local_b8.ArrayNum = iStack_f0;
    local_b8.DataPtr = (int *)local_f8;
    BoneAttributeHelpers::
    SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
              (pFVar8->ParentMesh,&pFVar8->BonePoseAttrib,(pFVar9->BonePoseAttrib).Ptr,&local_b8);
    iStack_e0 = (int)local_1a8;
    local_e8 = local_1b0.Data;
    if (((int)local_1a8 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._12_4_ = uStack_dc;
    local_a8.ArrayNum = iStack_e0;
    local_a8.DataPtr = (int *)local_e8;
    BoneAttributeHelpers::
    SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
              (pFVar8->ParentMesh,&pFVar8->BoneColorAttrib,(pFVar9->BoneColorAttrib).Ptr,&local_a8);
    pTVar3 = (pFVar9->BoneNameAttrib).Ptr;
    if ((pTVar3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) &&
       (pTVar5 = (pFVar8->BoneParentIndexAttrib).Ptr,
       pTVar5 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)) {
      pFVar25 = (pTVar5->AttribValues).AllocatorInstance.Data;
      iVar2 = (pTVar5->AttribValues).ArrayNum;
      pFVar29 = pFVar25 + (longlong)iVar2 * 4;
      while( true ) {
        if ((pTVar5->AttribValues).ArrayNum != iVar2) {
          local_1b7[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b7);
        }
        if (pFVar25 == pFVar29) break;
        iVar13 = *(int *)pFVar25;
        if ((iVar13 < 0) || ((pTVar3->AttribValues).ArrayNum <= iVar13)) {
          FVar23.ComparisonIndex.Value = 0;
          FVar23.Number = 0;
        }
        else {
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar23 = *(FName *)((pTVar3->AttribValues).AllocatorInstance.Data + (longlong)iVar13 * 8);
        }
        pTVar15 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)local_98,FVar23);
        piVar18 = (int *)&pTVar15->field_0x8;
        if (pTVar15 == (TTuple<FName,int> *)0x0) {
          piVar18 = (int *)0x0;
        }
        if (piVar18 == (int *)0x0) {
          *(int *)pFVar25 = -1;
          pFVar25 = pFVar25 + 4;
        }
        else {
          *(int *)pFVar25 = *piVar18;
          pFVar25 = pFVar25 + 4;
        }
      }
    }
    local_50 = 0;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    return;
  }
  uVar26 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (0 < (int)uVar26) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar26,&local_1b0,0,(int *)((longlong)&local_1a8 + 4));
  }
  local_1b4 = 0;
  pFVar29 = (pTVar3->AttribValues).AllocatorInstance.Data;
  iVar2 = (pTVar3->AttribValues).ArrayNum;
  local_170 = pFVar29 + (longlong)iVar2 * 8;
LAB_14349ac71:
  while( true ) {
    pFVar25 = local_170;
    if ((pTVar3->AttribValues).ArrayNum != iVar2) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1b8);
    }
    if (pFVar29 == pFVar25) break;
    lVar22 = *(longlong *)pFVar29;
    if (lVar22 != 0) {
      uVar26 = ::GetTypeHash((FNameEntryId)(uint)lVar22);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar20 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar20 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar13 = *(int *)(puVar20 +
                         (ulonglong)
                         (*(int *)&param_2->field_0x48 - 1U &
                         (int)((ulonglong)lVar22 >> 0x20) + uVar26) * 4);
        if (iVar13 != -1) {
LAB_14349acf0:
          if (*(longlong *)(*(longlong *)param_2 + (longlong)iVar13 * 0x18) != lVar22)
          goto code_r0x00014349acfc;
          uVar7 = (int)local_1a8;
          if (local_64 == 0) {
            iVar13 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x14,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                (int *)(local_98 + 0xc));
            iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
            FVar21 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar21 = local_78;
            }
            bVar16 = (byte)iVar12 & 0x1f;
            if (iVar12 < 0) {
              iVar12 = iVar12 + 0x1f;
              bVar16 = bVar16 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar21 + (longlong)(iVar12 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar16 & 0x1f));
            iVar12 = local_68;
          }
          else {
            local_64 = local_64 + -1;
            iVar12 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x14 + 4);
            iVar13 = local_68;
            if (local_64 != 0) {
              *(undefined4 *)(local_98._0_8_ + (longlong)iVar12 * 0x14) = 0xffffffff;
            }
          }
          local_68 = iVar12;
          TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,&local_130,iVar13);
          pvVar10 = local_130.Pointer;
          if (local_130.Pointer != (TSparseSetElement<TTuple<FName,int>_> *)0x0) {
            *(longlong *)local_130.Pointer = lVar22;
            *(undefined4 *)((longlong)local_130.Pointer + 8) = uVar7;
            *(undefined4 *)((longlong)local_130.Pointer + 0xc) = 0xffffffff;
          }
          uVar4 = *(undefined8 *)local_130.Pointer;
          local_1a0[0] = local_130.Index;
          uVar26 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar26 = uVar26 + (int)((ulonglong)uVar4 >> 0x20);
          bVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   ::TryReplaceExisting
                             ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                               *)local_98,uVar26,pvVar10,local_1a0,(bool *)0x0);
          if (bVar11) goto LAB_14349b0d1;
          uVar24 = 1;
          uVar19 = local_98._8_4_ - local_64;
          if (3 < uVar19) {
            uVar27 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_178 = (undefined4)lVar22;
            uVar24 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((int)uVar19 < 1) || ((int)uVar24 <= (int)local_50)) {
            uVar26 = local_50 - 1 & uVar26;
            *(uint *)((longlong)pvVar10 + 0x10) = uVar26;
            FVar17.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar17.Data = local_58.Data;
            }
            uVar27 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar26;
            *(undefined4 *)((longlong)pvVar10 + 0xc) =
                 *(undefined4 *)((longlong)FVar17.Data + uVar27 * 4);
            *(int *)((longlong)FVar17.Data + uVar27 * 4) = local_1a0[0];
          }
          else {
            local_50 = uVar24;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar24 != 0) {
              uVar26 = uVar24;
              if (uVar24 < 2) {
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar26 = 0;
                  goto LAB_14349aebc;
                }
              }
              else {
LAB_14349aebc:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar26,4);
              }
              if (0 < (int)uVar24) {
                uVar28 = (ulonglong)uVar24;
                uVar27 = 0;
                do {
                  FVar17.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar17.Data = local_58.Data;
                  }
                  uVar14 = uVar27 & (longlong)(int)uVar24 - 1U;
                  uVar27 = uVar27 + 1;
                  *(undefined4 *)((longlong)FVar17.Data + uVar14 * 4) = 0xffffffff;
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
            }
            if (local_50 != 0) {
              pTStack_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
              local_198 = 0;
              uStack_194 = 1;
              iStack_184 = 0;
              iStack_180 = 0;
              if (local_70 != 0) {
                FVar21 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar21 = local_78;
                }
                uVar26 = *(uint *)FVar21;
                while (uVar26 == 0) {
                  iStack_180 = iStack_180 + 0x20;
                  lVar22 = (longlong)local_198;
                  local_198 = local_198 + 1;
                  if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_198)
                  goto LAB_14349afdf;
                  uVar26 = ((uint *)((longlong)FVar21 + 4))[lVar22];
                }
                uStack_194 = -uVar26 & uVar26;
                uVar27 = (ulonglong)uStack_194 * 2 + 1;
                lVar22 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                local_174 = (int)lVar22;
                iStack_184 = local_174 + -1 + iStack_180;
                if (iStack_184 <= local_70) goto LAB_14349afe6;
LAB_14349afdf:
                iStack_184 = local_70;
              }
LAB_14349afe6:
              local_188 = 0xffffffff;
              local_158 = (longlong *)local_98;
              local_150._padding_ = CONCAT44(uStack_194,local_198);
              local_150.CurrentBitIndex = iStack_184;
              local_150.UnvisitedBitMask = 0xffffffff;
              local_150._28_4_ = uStack_17c;
              local_150.BaseBitIndex = iStack_180;
              local_150.Array = pTStack_190;
              iVar13 = iStack_184;
              if (iStack_184 < local_70) {
                do {
                  uVar4 = *(undefined8 *)(*local_158 + (longlong)iVar13 * 0x14);
                  lVar22 = *local_158 + (longlong)iVar13 * 0x14;
                  uVar26 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                  uVar26 = local_50 - 1 & uVar26 + (int)((ulonglong)uVar4 >> 0x20);
                  *(uint *)(lVar22 + 0x10) = uVar26;
                  FVar17.Data = (FScriptContainerElement *)local_60;
                  if ((ForElementType<FSetElementId>)local_58.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar17.Data = local_58.Data;
                  }
                  uVar27 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar26;
                  *(undefined4 *)(lVar22 + 0xc) =
                       *(undefined4 *)((longlong)FVar17.Data + uVar27 * 4);
                  *(int *)((longlong)FVar17.Data + uVar27 * 4) = iVar13;
                  local_150.UnvisitedBitMask =
                       local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
                  iVar13 = local_150.CurrentBitIndex;
                } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
              }
            }
          }
LAB_14349b0d1:
          if (((local_1b0.Data <= (FScriptContainerElement *)&local_1b4) &&
              ((FScriptContainerElement *)&local_1b4 <
               local_1b0.Data + (longlong)local_1a8._4_4_ * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = (int)local_1a8;
          if ((int)local_1a8 == local_1a8._4_4_) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1b0,(int *)((longlong)&local_1a8 + 4));
          }
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar13 + 1);
          *(int *)(local_1b0.Data + (longlong)iVar13 * 4) = local_1b4;
        }
      }
    }
    local_1b4 = local_1b4 + 1;
    pFVar29 = pFVar29 + 8;
  }
  goto LAB_14349b192;
code_r0x00014349acfc:
  iVar13 = *(int *)(*(longlong *)param_2 + 0x10 + (longlong)iVar13 * 0x18);
  if (iVar13 == -1) goto code_r0x00014349ad05;
  goto LAB_14349acf0;
code_r0x00014349ad05:
  local_1b4 = local_1b4 + 1;
  pFVar29 = pFVar29 + 8;
  goto LAB_14349ac71;
}

// DisableBones @ 1434b0ef0

void __thiscall UE::Geometry::FDynamicMeshAttributeSet::DisableBones(FDynamicMeshAttributeSet *this)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar3;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar4;
  
  pTVar1 = (this->BoneNameAttrib).Ptr;
  if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    (this->BoneNameAttrib).Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0
    ;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  pTVar2 = (this->BoneParentIndexAttrib).Ptr;
  if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    (this->BoneParentIndexAttrib).Ptr =
         (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
    (**(code **)pTVar2->_padding_)(pTVar2,1);
  }
  pTVar3 = (this->BonePoseAttrib).Ptr;
  if (pTVar3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    (this->BonePoseAttrib).Ptr =
         (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0
    ;
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pTVar4 = (this->BoneColorAttrib).Ptr;
  if (pTVar4 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    (this->BoneColorAttrib).Ptr =
         (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0;
    (**(code **)pTVar4->_padding_)(pTVar4,1);
  }
  return;
}

// DisableMaterialID @ 1434b0f90

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::DisableMaterialID(FDynamicMeshAttributeSet *this)

{
  TDynamicMeshScalarTriangleAttribute<int> *pTVar1;
  
  pTVar1 = (this->MaterialIDAttrib).Ptr;
  if (pTVar1 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001434b0fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

// DisablePrimaryColors @ 1434b0fc0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::DisablePrimaryColors(FDynamicMeshAttributeSet *this)

{
  TDynamicMeshOverlay<float,4> *this_00;
  
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    (this->ColorLayer).Ptr = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
    TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_00);
    ::operator_delete(this_00,0x88);
    return;
  }
  return;
}

// DisableTangents @ 1434b1000

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::DisableTangents(FDynamicMeshAttributeSet *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b1008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))(this,1);
  return;
}

// DiscardSculptLayers @ 1434b1450

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::DiscardSculptLayers(FDynamicMeshAttributeSet *this)

{
  FDynamicMeshSculptLayers::Discard(&this->SculptLayers,this);
  return;
}

// EnableBones @ 1434b27f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableBones(FDynamicMeshAttributeSet *this,int param_1)

{
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
  *pTVar2;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
  *pTVar3;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
  *pTVar4;
  FDynamicMesh3 *pFVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this_00;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this_01;
  undefined8 *puVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar9;
  FName local_res8;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  TVector4<float>_u_0 local_28;
  
  pTVar1 = &this->BoneNameAttrib;
  if ((pTVar1->Ptr != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) &&
     ((pTVar1->Ptr->AttribValues).ArrayNum == param_1)) {
    return;
  }
  pTVar6 = ::operator_new(0x28);
  pTVar9 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    pFVar5 = this->ParentMesh;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pTVar6->_padding_ = 0;
    pTVar6->Parent = pFVar5;
    pTVar6->_padding_ =
         (longlong)
         &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
    (pTVar6->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar6->AttribValues).ArrayNum = 0;
    (pTVar6->AttribValues).ArrayMax = 0;
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Initialize
              (pTVar6,param_1,&local_res8);
    pTVar8 = pTVar6;
  }
  if (pTVar1 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
                 *)&local_48) {
    if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      puVar7 = (undefined8 *)pTVar8->_padding_;
      goto LAB_1434b2893;
    }
  }
  else {
    pTVar6 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar8;
    if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      puVar7 = (undefined8 *)pTVar6->_padding_;
      pTVar8 = pTVar6;
LAB_1434b2893:
      (*(code *)*puVar7)(pTVar8,1);
    }
  }
  pTVar6 = ::operator_new(0x28);
  pTVar8 = pTVar9;
  if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    local_res8.ComparisonIndex.Value = 0xffffffff;
    pTVar6->Parent = this->ParentMesh;
    pTVar6->_padding_ = 0;
    (pTVar6->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar6->AttribValues).ArrayNum = 0;
    (pTVar6->AttribValues).ArrayMax = 0;
    pTVar6->_padding_ =
         (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar6->AttribValues,(int *)&local_res8,
               param_1);
    pTVar8 = pTVar6;
  }
  pTVar2 = &this->BoneParentIndexAttrib;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
                 *)&local_40) {
    if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      puVar7 = (undefined8 *)pTVar8->_padding_;
      goto LAB_1434b291b;
    }
  }
  else {
    pTVar6 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar2->Ptr;
    pTVar2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)pTVar8;
    if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      puVar7 = (undefined8 *)pTVar6->_padding_;
      pTVar8 = pTVar6;
LAB_1434b291b:
      (*(code *)*puVar7)(pTVar8,1);
    }
  }
  this_00 = ::operator_new(0x28);
  pTVar8 = pTVar9;
  if (this_00 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
    pFVar5 = this->ParentMesh;
    this_00->_padding_ = 0;
    this_00->Parent = pFVar5;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
    ;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Initialize
              (this_00,param_1,&UE::Math::TTransform<double>::Identity);
    pTVar8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)this_00;
  }
  pTVar3 = &this->BonePoseAttrib;
  if (pTVar3 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
                 *)&local_38) {
    if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_1434b29a3;
    puVar7 = (undefined8 *)pTVar8->_padding_;
  }
  else {
    pTVar6 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar3->Ptr;
    pTVar3->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)pTVar8;
    if (pTVar6 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_1434b29a3;
    puVar7 = (undefined8 *)pTVar6->_padding_;
    pTVar8 = pTVar6;
  }
  (*(code *)*puVar7)(pTVar8,1);
LAB_1434b29a3:
  local_28._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_28._8_8_ = _UNK_15076b1f8;
  this_01 = ::operator_new(0x28);
  if (this_01 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    pFVar5 = this->ParentMesh;
    this_01->_padding_ = 0;
    this_01->Parent = pFVar5;
    this_01->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (this_01->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).ArrayNum = 0;
    (this_01->AttribValues).ArrayMax = 0;
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Initialize
              (this_01,param_1,(TVector4<float> *)&local_28._s_0);
    pTVar9 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)this_01;
  }
  pTVar4 = &this->BoneColorAttrib;
  if (pTVar4 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
                 *)&local_30) {
    if (pTVar9 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)pTVar9->_padding_;
  }
  else {
    pTVar8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)pTVar4->Ptr;
    pTVar4->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)pTVar9;
    if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)pTVar8->_padding_;
    pTVar9 = pTVar8;
  }
  (*(code *)*puVar7)(pTVar9,1);
  return;
}

// EnableMatchingAttributes @ 1434b3160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableMatchingAttributes
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1,bool param_2,
          bool param_3)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  ulonglong uVar2;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar3;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar4;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar5;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  longlong lVar7;
  FDynamicMesh3 *pFVar8;
  longlong *plVar9;
  FName FVar10;
  code *pcVar11;
  FDynamicMeshAttributeSet *pFVar12;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar22;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar23;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar24;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar25;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar26;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar27;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar28;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar29;
  longlong lVar30;
  TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar31;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar32;
  undefined1 *puVar33;
  longlong lVar34;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar35;
  undefined1 *puVar36;
  uint *puVar37;
  TBitArray<FDefaultBitArrayAllocator> *pTVar38;
  uint uVar39;
  undefined1 auStackY_5d8 [32];
  uint local_5a4;
  undefined1 local_5a0;
  undefined1 local_59f;
  undefined1 local_59e;
  undefined1 local_59d;
  undefined1 local_59c [4];
  TBitArray<FDefaultBitArrayAllocator> *local_598;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_590;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_588;
  undefined8 local_568;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_560;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_558;
  undefined8 local_538;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_530;
  undefined8 uStack_528;
  TBitArray<FDefaultBitArrayAllocator> *local_520;
  undefined8 uStack_518;
  uint local_510;
  undefined4 uStack_50c;
  int iStack_508;
  undefined4 uStack_504;
  int local_500 [2];
  float local_4f8 [2];
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_4f0;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_4e8;
  FName local_4e0;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_4d8;
  FDynamicMeshAttributeSet *local_4d0;
  FName local_4c8;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_4c0;
  FName local_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_470;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_450;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_430;
  int local_410;
  int local_40c;
  undefined1 local_408 [8];
  int local_400;
  int local_3fc;
  TBitArray<FDefaultBitArrayAllocator> *local_3f8;
  undefined1 local_3f0 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 uStack_3c0;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  undefined1 local_388 [12];
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *local_378;
  undefined8 uStack_370;
  longlong local_368;
  int iStack_360;
  undefined4 uStack_35c;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  FName *local_2f8;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **local_2f0;
  FName *local_2e8;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **local_2e0;
  FName *local_2d8;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **local_2d0;
  FBoneWeights local_2c8;
  FBoneWeights local_288;
  FBoneWeights local_248;
  TRangedForConstIterator local_208;
  TRangedForIterator local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  undefined4 local_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  undefined4 local_ec;
  undefined1 local_e8 [40];
  int local_c0;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [40];
  int local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_4d0 = param_1;
  uVar15 = (**(code **)(this->_padding_ + 0xa8))();
  if ((param_2) || (param_3)) {
    uVar16 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
  }
  else {
    uVar16 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
    if ((int)uVar16 < (int)uVar15) {
      uVar16 = uVar15;
    }
  }
  (**(code **)(this->_padding_ + 0xb0))(this,uVar16);
  pTVar35 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  uVar20 = 0;
  uVar16 = 0;
  pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar15;
  if (param_2) {
    pTVar26 = pTVar35;
  }
  iVar17 = (**(code **)(this->_padding_ + 0xa8))(this);
  if ((int)pTVar26 < iVar17) {
    lVar34 = (longlong)(int)pTVar26 << 3;
    do {
      uVar18 = (uint)pTVar26;
      uVar15 = uVar16;
      if ((int)uVar18 < (this->UVLayers).Array.ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TDynamicMeshOverlay<float,2>::ClearElements
                (*(TDynamicMeshOverlay<float,2> **)
                  ((this->UVLayers).Array.AllocatorInstance.Data + lVar34));
      pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar18 + 1);
      lVar34 = lVar34 + 8;
      iVar17 = (**(code **)(this->_padding_ + 0xa8))(this);
    } while ((int)(uVar18 + 1) < iVar17);
  }
  uVar15 = (**(code **)(this->_padding_ + 0xb8))(this);
  if ((param_2) || (param_3)) {
    uVar18 = (**(code **)(param_1->_padding_ + 0xb8))(param_1);
  }
  else {
    uVar18 = (**(code **)(param_1->_padding_ + 0xb8))(param_1);
    if ((int)uVar18 < (int)uVar15) {
      uVar18 = uVar15;
    }
  }
  (**(code **)(this->_padding_ + 0xc0))(this,uVar18);
  pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar15;
  if (param_2) {
    pTVar26 = pTVar35;
  }
  iVar17 = (**(code **)(this->_padding_ + 0xb8))(this);
  if ((int)pTVar26 < iVar17) {
    lVar34 = (longlong)(int)pTVar26 << 3;
    do {
      uVar18 = (uint)pTVar26;
      uVar15 = uVar16;
      if ((int)uVar18 < (this->NormalLayers).Array.ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TDynamicMeshOverlay<float,3>::ClearElements
                (*(TDynamicMeshOverlay<float,3> **)
                  ((this->NormalLayers).Array.AllocatorInstance.Data + lVar34));
      pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar18 + 1);
      lVar34 = lVar34 + 8;
      iVar17 = (**(code **)(this->_padding_ + 0xb8))(this);
    } while ((int)(uVar18 + 1) < iVar17);
  }
  if ((param_2) || (param_3)) {
    pTVar5 = (param_1->ColorLayer).Ptr;
    if ((param_2) ||
       (pTVar5 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) {
      this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
      if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
        (this->ColorLayer).Ptr =
             (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
        TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_00);
        ::operator_delete(this_00,0x88);
      }
      if (pTVar5 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)
      goto LAB_1434b33c3;
    }
    else {
LAB_1434b33c3:
      EnablePrimaryColors(this);
    }
    if ((!param_2) && (!param_3)) goto LAB_1434b33d5;
    pTVar22 = (param_1->MaterialIDAttrib).Ptr;
    if ((!param_2) && (pTVar22 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0))
    goto LAB_1434b3422;
    pTVar6 = (this->MaterialIDAttrib).Ptr;
    if (pTVar6 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
      (*(code *)**(undefined8 **)pTVar6)(pTVar6,1);
    }
    if (pTVar22 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) goto LAB_1434b3422;
LAB_1434b342a:
    uVar15 = (**(code **)(this->_padding_ + 200))(this);
    pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar15;
    if ((param_2) || (param_3)) {
      iVar17 = (**(code **)(param_1->_padding_ + 200))(param_1);
      goto LAB_1434b3463;
    }
  }
  else {
    if (((param_1->ColorLayer).Ptr !=
         (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) ||
       ((this->ColorLayer).Ptr !=
        (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) goto LAB_1434b33c3;
LAB_1434b33d5:
    if (((param_1->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) ||
       ((this->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
LAB_1434b3422:
      EnableMaterialID(this);
      goto LAB_1434b342a;
    }
    uVar15 = (**(code **)(this->_padding_ + 200))(this);
    pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar15;
  }
  iVar17 = (**(code **)(param_1->_padding_ + 200))(param_1);
  if (iVar17 < (int)pTVar26) {
    iVar17 = (int)pTVar26;
  }
LAB_1434b3463:
  (**(code **)(this->_padding_ + 0xd0))(this,iVar17);
  if (param_2) {
    pTVar26 = pTVar35;
  }
  iVar17 = (**(code **)(this->_padding_ + 200))(this);
  uVar15 = 0;
  if ((int)pTVar26 < iVar17) {
    lVar34 = (longlong)(int)pTVar26 << 3;
    do {
      uVar19 = (uint)pTVar26;
      uVar39 = ~uVar19 >> 0x1f;
      uVar18 = uVar16;
      if ((int)uVar19 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar18 = uVar39;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_500[0] = 0;
      lVar7 = *(longlong *)((this->PolygroupLayers).Array.AllocatorInstance.Data + lVar34);
      if ((*(longlong *)(lVar7 + 0x10) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentMesh != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                              ,0xa5,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TDynamicVector<int,512>::Resize
                ((TDynamicVector<int,512> *)(lVar7 + 0x18),
                 *(int *)(*(longlong *)(lVar7 + 0x10) + 0x140) * 0x200 +
                 *(int *)(*(longlong *)(lVar7 + 0x10) + 0x144));
      TDynamicVector<int,512>::Fill((TDynamicVector<int,512> *)(lVar7 + 0x18),local_500);
      uVar18 = uVar16;
      if ((int)uVar19 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar18 = uVar39;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(longlong *)
            (*(longlong *)((this->PolygroupLayers).Array.AllocatorInstance.Data + lVar34) + 8) == 0)
         && (iVar17 = (**(code **)(param_1->_padding_ + 200))(param_1), (int)uVar19 < iVar17)) {
        uVar18 = uVar15;
        if ((int)uVar19 < (this->PolygroupLayers).Array.ArrayNum) {
          uVar18 = uVar39;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar7 = *(longlong *)((this->PolygroupLayers).Array.AllocatorInstance.Data + lVar34);
        pTVar22 = GetPolygroupLayer(param_1,uVar19);
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)&pTVar22->field_0x8;
      }
      pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar19 + 1);
      lVar34 = lVar34 + 8;
      iVar17 = (**(code **)(this->_padding_ + 200))(this);
    } while ((int)(uVar19 + 1) < iVar17);
  }
  uVar18 = (**(code **)(this->_padding_ + 0xd8))(this);
  if ((param_2) || (param_3)) {
    uVar19 = (**(code **)(param_1->_padding_ + 0xd8))(param_1);
  }
  else {
    uVar19 = (**(code **)(param_1->_padding_ + 0xd8))(param_1);
    if ((int)uVar19 < (int)uVar18) {
      uVar19 = uVar18;
    }
  }
  (**(code **)(this->_padding_ + 0xe0))(this,uVar19);
  pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(ulonglong)uVar18;
  if (param_2) {
    pTVar26 = pTVar35;
  }
  iVar17 = (**(code **)(this->_padding_ + 0xd8))(this);
  if ((int)pTVar26 < iVar17) {
    lVar34 = (longlong)(int)pTVar26 << 3;
    do {
      uVar19 = (uint)pTVar26;
      uVar39 = ~uVar19 >> 0x1f;
      uVar18 = uVar15;
      if ((int)uVar19 < (this->WeightLayers).Array.ArrayNum) {
        uVar18 = uVar39;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_4f8[0] = 0.0;
      lVar7 = *(longlong *)((this->WeightLayers).Array.AllocatorInstance.Data + lVar34);
      if ((*(longlong *)(lVar7 + 0x10) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parent != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                              ,0x9a,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TDynamicVector<float,512>::Resize
                ((TDynamicVector<float,512> *)(lVar7 + 0x18),
                 *(int *)(*(longlong *)(lVar7 + 0x10) + 0x20) * 0x200 +
                 *(int *)(*(longlong *)(lVar7 + 0x10) + 0x24));
      TDynamicVector<float,512>::Fill((TDynamicVector<float,512> *)(lVar7 + 0x18),local_4f8);
      uVar18 = uVar15;
      if ((int)uVar19 < (this->WeightLayers).Array.ArrayNum) {
        uVar18 = uVar39;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(longlong *)
            (*(longlong *)((this->WeightLayers).Array.AllocatorInstance.Data + lVar34) + 8) == 0) &&
         (iVar17 = (**(code **)(param_1->_padding_ + 0xd8))(param_1), (int)uVar19 < iVar17)) {
        uVar18 = uVar15;
        if ((int)uVar19 < (this->WeightLayers).Array.ArrayNum) {
          uVar18 = uVar39;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar7 = *(longlong *)((this->WeightLayers).Array.AllocatorInstance.Data + lVar34);
        pTVar23 = GetWeightLayer(param_1,uVar19);
        *(longlong *)(lVar7 + 8) = pTVar23->_padding_;
      }
      pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                (ulonglong)(uVar19 + 1);
      lVar34 = lVar34 + 8;
      iVar17 = (**(code **)(this->_padding_ + 0xd8))(this);
    } while ((int)(uVar19 + 1) < iVar17);
  }
  uVar18 = 0;
  if (param_2) {
    TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
             *)&this->SkinWeightAttributes);
    TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
             *)&this->MorphTargetAttributes);
    TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
             *)&this->GenericAttributes);
    iVar17 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar17 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->_padding_,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    puVar36 = &(param_1->SkinWeightAttributes).field_0x10;
    local_470._padding_._0_4_ = 0;
    pTVar3 = &param_1->SkinWeightAttributes;
    local_470._padding_._4_4_ = 1;
    local_470.UnvisitedBitMask = 0xffffffff;
    local_470.CurrentBitIndex = 0;
    local_470.BaseBitIndex = 0;
    local_470.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
    if (*(int *)&(param_1->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_470);
    }
    TStack_558._padding_ = CONCAT44(local_470._padding_._4_4_,(undefined4)local_470._padding_);
    TStack_558.CurrentBitIndex = local_470.CurrentBitIndex;
    TStack_558.UnvisitedBitMask = local_470.UnvisitedBitMask;
    TStack_558._28_4_ = local_470._28_4_;
    TStack_558.BaseBitIndex = local_470.BaseBitIndex;
    TStack_558.Array = local_470.Array;
    local_538 = CONCAT44(local_538._4_4_,
                         *(int *)&(param_1->SkinWeightAttributes).field_0x8 -
                         *(int *)&(param_1->SkinWeightAttributes).field_0x34);
    TStack_3e0.Array = local_470.Array;
    uStack_3c0 = local_538;
    local_560 = pTVar3;
    local_3f0._8_8_ = pTVar3;
    TStack_3e0._padding_ = TStack_558._padding_;
    TStack_3e0._16_8_ = TStack_558._16_8_;
    TStack_3e0._24_8_ = TStack_558._24_8_;
    pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_1a8,(TBitArray<FDefaultBitArrayAllocator> *)puVar36,
                         *(int *)&(param_1->SkinWeightAttributes).field_0x28);
    TStack_558._padding_ = pTVar24->_padding_;
    TStack_558.Array = pTVar24->Array;
    TStack_558.UnvisitedBitMask = pTVar24->UnvisitedBitMask;
    TStack_558.CurrentBitIndex = pTVar24->CurrentBitIndex;
    TStack_558._24_8_ = *(undefined8 *)&pTVar24->BaseBitIndex;
    local_208.InitialNum =
         *(int *)&(param_1->SkinWeightAttributes).field_0x8 -
         *(int *)&(param_1->SkinWeightAttributes).field_0x34;
    local_538._0_4_ = local_208.InitialNum;
    local_208._44_4_ = local_538._4_4_;
    local_560 = pTVar3;
    local_208._padding_ = (longlong)pTVar3;
    local_208._padding_ = TStack_558._padding_;
    local_208._padding_ = (longlong)TStack_558.Array;
    local_208._padding_ = TStack_558._16_8_;
    local_208._padding_ = TStack_558._24_8_;
    bVar14 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=
                       ((TRangedForConstIterator *)(local_3f0 + 8),&local_208);
    if (bVar14) {
      do {
        pFVar8 = this->ParentMesh;
        lVar34 = *(longlong *)local_3f0._8_8_;
        pTVar25 = ::operator_new(0x30);
        pTVar26 = pTVar35;
        if (pTVar25 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
          pTVar26 = TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
                    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>
                              (pTVar25,pFVar8,true);
        }
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
        local_2c8.BoneWeights.ArrayNum = 0;
        local_2c8.BoneWeights.ArrayMax = 0xc;
        local_2c8.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
        local_2c8.BoneWeights.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                  (pTVar26,&local_2c8);
        AttachSkinWeightsAttribute
                  (this,*(FName *)(lVar34 + (longlong)TStack_3e0.CurrentBitIndex * 0x18),pTVar26);
        TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
        bVar14 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)(local_3f0 + 8),&local_208);
      } while (bVar14);
    }
    puVar36 = &(param_1->MorphTargetAttributes).field_0x10;
    local_450._padding_._0_4_ = 0;
    pTVar4 = &param_1->MorphTargetAttributes;
    local_450._padding_._4_4_ = 1;
    local_450.UnvisitedBitMask = 0xffffffff;
    local_450.CurrentBitIndex = 0;
    local_450.BaseBitIndex = 0;
    local_450.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
    if (*(int *)&(param_1->MorphTargetAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_450);
    }
    TStack_558._padding_ = CONCAT44(local_450._padding_._4_4_,(undefined4)local_450._padding_);
    TStack_558.CurrentBitIndex = local_450.CurrentBitIndex;
    TStack_558.UnvisitedBitMask = local_450.UnvisitedBitMask;
    TStack_558._28_4_ = local_450._28_4_;
    TStack_558.BaseBitIndex = local_450.BaseBitIndex;
    TStack_558.Array = local_450.Array;
    local_538 = CONCAT44(local_538._4_4_,
                         *(int *)&(param_1->MorphTargetAttributes).field_0x8 -
                         *(int *)&(param_1->MorphTargetAttributes).field_0x34);
    TStack_3b0.Array = local_450.Array;
    uStack_390 = local_538;
    local_560 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar4;
    local_3b8 = pTVar4;
    TStack_3b0._padding_ = TStack_558._padding_;
    TStack_3b0._16_8_ = TStack_558._16_8_;
    TStack_3b0._24_8_ = TStack_558._24_8_;
    pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_188,(TBitArray<FDefaultBitArrayAllocator> *)puVar36,
                         *(int *)&(param_1->MorphTargetAttributes).field_0x28);
    TStack_558._padding_ = pTVar24->_padding_;
    pTVar38 = pTVar24->Array;
    TStack_558.UnvisitedBitMask = pTVar24->UnvisitedBitMask;
    TStack_558.CurrentBitIndex = pTVar24->CurrentBitIndex;
    TStack_558.BaseBitIndex = pTVar24->BaseBitIndex;
    TStack_558._28_4_ = *(undefined4 *)&pTVar24->field_0x1c;
    TStack_558.Array = pTVar38;
    while( true ) {
      pTVar13 = local_3b8;
      if (*(int *)&local_3b8->field_0x8 - *(int *)&local_3b8->field_0x34 != (int)uStack_390) {
        local_5a0 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_5a0);
      }
      lVar34 = (longlong)TStack_3b0.CurrentBitIndex;
      if (((TStack_3b0.CurrentBitIndex == TStack_558.CurrentBitIndex) &&
          (TStack_3b0.Array == pTVar38)) && (pTVar13 == pTVar4)) break;
      lVar7 = *(longlong *)pTVar13;
      plVar9 = *(longlong **)(lVar7 + 8 + lVar34 * 0x18);
      pTVar27 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)
                (**(code **)(*plVar9 + 0x10))(plVar9,this->ParentMesh);
      AttachMorphTargetAttribute(this,*(FName *)(lVar7 + lVar34 * 0x18),pTVar27);
      TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
    }
    uVar39 = 1;
    uVar19 = *(uint *)&(param_1->GenericAttributes).field_0x28;
    local_560 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)&param_1->GenericAttributes;
    pTVar1 = &this->GenericAttributes;
    if (uVar19 != 0) {
      puVar37 = *(uint **)&(param_1->GenericAttributes).field_0x20;
      if (puVar37 == (uint *)0x0) {
        puVar37 = (uint *)&(param_1->GenericAttributes).field_0x10;
      }
      uVar15 = *puVar37;
      pTVar26 = pTVar35;
      uVar18 = uVar20;
      uVar16 = uVar20;
      while (uVar15 == 0) {
        iVar17 = (int)pTVar26;
        uVar18 = (int)pTVar35 + 0x20;
        pTVar35 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                  (ulonglong)uVar18;
        uVar16 = iVar17 + 1;
        pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                  (ulonglong)uVar16;
        uVar15 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_1434b3c42;
        uVar15 = puVar37[(longlong)iVar17 + 1];
      }
      uVar39 = -uVar15 & uVar15;
      uVar2 = (ulonglong)uVar39 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_410 = (int)lVar34;
      uVar15 = local_410 + -1 + uVar18;
      if ((int)uVar19 < (int)uVar15) {
        uVar15 = uVar19;
      }
    }
LAB_1434b3c42:
    uVar20 = *(uint *)&(param_1->GenericAttributes).field_0x28;
    iStack_508 = *(int *)&(param_1->GenericAttributes).field_0x8 -
                 *(int *)&(param_1->GenericAttributes).field_0x34;
    uVar19 = uVar20 & 0xffffffe0;
    uStack_528 = CONCAT44(uVar39,uVar16);
    puVar36 = &(param_1->GenericAttributes).field_0x10;
    uStack_518._4_4_ = uVar15;
    uStack_518._0_4_ = 0xffffffff;
    uStack_50c = local_14c;
    local_510 = uVar18;
    TStack_558._padding_ = uStack_528;
    iVar17 = (int)uVar20 >> 5;
    local_538 = CONCAT44(uStack_504,iStack_508);
    TStack_558.UnvisitedBitMask = 0xffffffff;
    TStack_558.CurrentBitIndex = uVar15;
    TStack_558.BaseBitIndex = uVar18;
    TStack_558._28_4_ = local_14c;
    TStack_558.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
    local_530 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)local_560;
    local_520 = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
    if (((int)uVar20 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar15 = *(uint *)&(param_1->GenericAttributes).field_0x28;
    if (uVar20 != uVar15) {
      puVar33 = *(undefined1 **)&(param_1->GenericAttributes).field_0x20;
      if (puVar33 != (undefined1 *)0x0) {
        puVar36 = puVar33;
      }
      uVar16 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar34 = (longlong)iVar17;
        uVar19 = uVar19 + 0x20;
        iVar17 = iVar17 + 1;
        uVar20 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1434b3d70;
        uVar16 = *(uint *)(puVar36 + lVar34 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar34 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_40c = (int)lVar34;
      uVar20 = local_40c + -1 + uVar19;
      if ((int)uVar15 < (int)uVar20) {
        uVar20 = uVar15;
      }
    }
LAB_1434b3d70:
    while( true ) {
      pTVar3 = local_560;
      if (*(int *)&local_560->field_0x8 - *(int *)&local_560->field_0x34 != (int)local_538) {
        local_59f = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_59f);
      }
      lVar34 = (longlong)TStack_558.CurrentBitIndex;
      if (((TStack_558.CurrentBitIndex == uVar20) &&
          (TStack_558.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->GenericAttributes).field_0x10)) &&
         (pTVar3 == (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                     *)&param_1->GenericAttributes)) break;
      lVar7 = *(longlong *)pTVar3;
      plVar9 = *(longlong **)(lVar7 + 8 + lVar34 * 0x18);
      pTVar28 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)
                (**(code **)(*plVar9 + 0x10))(plVar9,this->ParentMesh);
      FVar10 = *(FName *)(lVar7 + lVar34 * 0x18);
      local_4c8 = FVar10;
      uVar15 = ::GetTypeHash(FVar10.ComparisonIndex.Value);
      if (*(int *)&(this->GenericAttributes).field_0x8 !=
          *(int *)&(this->GenericAttributes).field_0x34) {
        puVar36 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
        puVar33 = &(this->GenericAttributes).field_0x38;
        if (puVar36 != (undefined1 *)0x0) {
          puVar33 = puVar36;
        }
        iVar17 = *(int *)(puVar33 +
                         (ulonglong)
                         (*(int *)&(this->GenericAttributes).field_0x48 - 1U &
                         FVar10.Number + uVar15) * 4);
        if (iVar17 != -1) {
          do {
            if (*(FName *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar17 * 0x18) == FVar10) {
              pTVar29 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                *)pTVar1,local_4c8);
              if ((pTVar29 ==
                   (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                    *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L""), bVar14)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                        ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                         *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar29->field_0x8
                        );
              break;
            }
            iVar17 = *(int *)(*(longlong *)&pTVar1->field_0x0 + 0x10 + (longlong)iVar17 * 0x18);
          } while (iVar17 != -1);
        }
      }
      local_2d8 = &local_4c8;
      local_2d0 = &local_4c0;
      local_4c0 = pTVar28;
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>_>
                ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)pTVar1,
                 (TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>
                  *)local_408,(bool *)&local_2d8);
      if (local_4c0 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
        (**(code **)local_4c0->_padding_)(local_4c0,1);
      }
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,pTVar28);
      TStack_558.UnvisitedBitMask = TStack_558.UnvisitedBitMask & ~TStack_558._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_558);
    }
  }
  else {
    if (param_3) {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)local_e8,
                 (TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)&this->SkinWeightAttributes);
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)local_98,
                 (TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)&this->GenericAttributes);
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               *)&this->SkinWeightAttributes);
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               *)&this->GenericAttributes);
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::ResetRegisteredAttributes
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this);
      local_430.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      local_430._padding_._0_4_ = 0;
      local_430._padding_._4_4_ = 1;
      local_430.UnvisitedBitMask = 0xffffffff;
      local_430.CurrentBitIndex = 0;
      local_430.BaseBitIndex = 0;
      if (local_c0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_430);
      }
      TStack_588._padding_ = CONCAT44(local_430._padding_._4_4_,(undefined4)local_430._padding_);
      local_590 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)local_e8;
      TStack_588._16_8_ = CONCAT44(local_430.CurrentBitIndex,local_430.UnvisitedBitMask);
      TStack_588._24_8_ = CONCAT44(local_430._28_4_,local_430.BaseBitIndex);
      TStack_588.Array = local_430.Array;
      local_568._0_4_ = local_e8._8_4_ - local_b4;
      local_378 = local_430.Array;
      iStack_360 = local_e8._8_4_ - local_b4;
      uStack_35c = local_568._4_4_;
      local_388._0_8_ = local_590;
      unique0x10003256 = TStack_588._padding_;
      uStack_370 = TStack_588._16_8_;
      local_368 = TStack_588._24_8_;
      pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_148,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                           local_c0);
      local_590 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)local_e8;
      TStack_588._padding_ = pTVar24->_padding_;
      TStack_588.Array = pTVar24->Array;
      TStack_588.UnvisitedBitMask = pTVar24->UnvisitedBitMask;
      TStack_588.CurrentBitIndex = pTVar24->CurrentBitIndex;
      TStack_588._24_8_ = *(undefined8 *)&pTVar24->BaseBitIndex;
      local_568._0_4_ = local_e8._8_4_ - local_b4;
      local_1d8.InitialNum = local_e8._8_4_ - local_b4;
      local_1d8._44_4_ = local_568._4_4_;
      local_1d8._padding_ = (longlong)local_590;
      local_1d8._padding_ = TStack_588._padding_;
      local_1d8._padding_ = (longlong)TStack_588.Array;
      local_1d8._padding_ = TStack_588._16_8_;
      local_1d8._padding_ = TStack_588._24_8_;
      bVar14 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_388,&local_1d8);
      if (bVar14) {
        do {
          lVar30 = (longlong)uStack_370._4_4_;
          lVar34 = *(longlong *)local_388._0_8_;
          lVar7 = *(longlong *)(lVar34 + lVar30 * 0x18);
          uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar7);
          if (*(int *)&(param_1->SkinWeightAttributes).field_0x8 !=
              *(int *)&(param_1->SkinWeightAttributes).field_0x34) {
            puVar36 = *(undefined1 **)&(param_1->SkinWeightAttributes).field_0x40;
            puVar33 = &(param_1->SkinWeightAttributes).field_0x38;
            if (puVar36 != (undefined1 *)0x0) {
              puVar33 = puVar36;
            }
            iVar17 = *(int *)(puVar33 +
                             (ulonglong)
                             (*(int *)&(param_1->SkinWeightAttributes).field_0x48 - 1U &
                             (int)((ulonglong)lVar7 >> 0x20) + uVar16) * 4);
            if (iVar17 != -1) {
              do {
                if (*(longlong *)
                     (*(longlong *)&param_1->SkinWeightAttributes + (longlong)iVar17 * 0x18) ==
                    lVar7) {
                  pTVar26 = *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                             (lVar34 + 8 + lVar30 * 0x18);
                  *(undefined8 *)(lVar34 + 8 + lVar30 * 0x18) = 0;
                  AttachSkinWeightsAttribute(this,*(FName *)(lVar34 + lVar30 * 0x18),pTVar26);
                  break;
                }
                iVar17 = *(int *)(*(longlong *)&param_1->SkinWeightAttributes + 0x10 +
                                 (longlong)iVar17 * 0x18);
              } while (iVar17 != -1);
            }
          }
          uStack_370 = CONCAT44(uStack_370._4_4_,(uint)uStack_370 & ~uStack_37c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_388 + 8));
          bVar14 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_388,&local_1d8);
        } while (bVar14);
      }
      local_4b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_4b0._padding_._0_4_ = 0;
      local_4b0._padding_._4_4_ = 1;
      local_4b0.UnvisitedBitMask = 0xffffffff;
      local_4b0.CurrentBitIndex = 0;
      local_4b0.BaseBitIndex = 0;
      if (local_70 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b0);
      }
      TStack_588._padding_ = CONCAT44(local_4b0._padding_._4_4_,(undefined4)local_4b0._padding_);
      local_590 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)local_98;
      TStack_588.CurrentBitIndex = local_4b0.CurrentBitIndex;
      TStack_588.UnvisitedBitMask = local_4b0.UnvisitedBitMask;
      TStack_588._28_4_ = local_4b0._28_4_;
      TStack_588.BaseBitIndex = local_4b0.BaseBitIndex;
      TStack_588.Array = local_4b0.Array;
      local_568 = CONCAT44(local_568._4_4_,local_98._8_4_ - local_64);
      TStack_350.Array = local_4b0.Array;
      uStack_330 = local_568;
      local_358 = local_590;
      TStack_350._padding_ = TStack_588._padding_;
      TStack_350._16_8_ = TStack_588._16_8_;
      TStack_350._24_8_ = TStack_588._24_8_;
      pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_128,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),
                           local_70);
      TStack_588._padding_ = pTVar24->_padding_;
      TStack_588.Array = pTVar24->Array;
      TStack_588.UnvisitedBitMask = pTVar24->UnvisitedBitMask;
      TStack_588.CurrentBitIndex = pTVar24->CurrentBitIndex;
      TStack_588.BaseBitIndex = pTVar24->BaseBitIndex;
      TStack_588._28_4_ = *(undefined4 *)&pTVar24->field_0x1c;
LAB_1434b41f0:
      pTVar3 = local_358;
      if (*(int *)&local_358->field_0x8 - *(int *)&local_358->field_0x34 != (int)uStack_330) {
        local_59e = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_59e);
      }
      lVar34 = (longlong)TStack_350.CurrentBitIndex;
      if (((TStack_350.CurrentBitIndex != TStack_588.CurrentBitIndex) ||
          (TStack_350.Array != TStack_588.Array)) ||
         (pTVar3 != (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                     *)local_98)) {
        lVar7 = *(longlong *)pTVar3;
        lVar30 = *(longlong *)(lVar7 + lVar34 * 0x18);
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar30);
        if (*(int *)&(param_1->GenericAttributes).field_0x8 !=
            *(int *)&(param_1->GenericAttributes).field_0x34) {
          puVar36 = *(undefined1 **)&(param_1->GenericAttributes).field_0x40;
          puVar33 = &(param_1->GenericAttributes).field_0x38;
          if (puVar36 != (undefined1 *)0x0) {
            puVar33 = puVar36;
          }
          iVar17 = *(int *)(puVar33 +
                           (ulonglong)
                           (*(int *)&(param_1->GenericAttributes).field_0x48 - 1U &
                           (int)((ulonglong)lVar30 >> 0x20) + uVar16) * 4);
          if (iVar17 != -1) {
            do {
              if (*(longlong *)(*(longlong *)&param_1->GenericAttributes + (longlong)iVar17 * 0x18)
                  == lVar30) {
                pTVar28 = *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                           (lVar7 + 8 + lVar34 * 0x18);
                *(undefined8 *)(lVar7 + 8 + lVar34 * 0x18) = 0;
                FVar10 = *(FName *)(lVar7 + lVar34 * 0x18);
                local_4b8 = FVar10;
                uVar16 = ::GetTypeHash(FVar10.ComparisonIndex.Value);
                pTVar1 = &this->GenericAttributes;
                if (*(int *)&(this->GenericAttributes).field_0x8 ==
                    *(int *)&(this->GenericAttributes).field_0x34) goto LAB_1434b4352;
                puVar36 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
                puVar33 = &(this->GenericAttributes).field_0x38;
                if (puVar36 != (undefined1 *)0x0) {
                  puVar33 = puVar36;
                }
                iVar17 = *(int *)(puVar33 +
                                 (ulonglong)
                                 (*(int *)&(this->GenericAttributes).field_0x48 - 1U &
                                 FVar10.Number + uVar16) * 4);
                if (iVar17 == -1) goto LAB_1434b4352;
                goto LAB_1434b4324;
              }
              iVar17 = *(int *)(*(longlong *)&param_1->GenericAttributes + 0x10 +
                               (longlong)iVar17 * 0x18);
            } while (iVar17 != -1);
          }
        }
        goto LAB_1434b43a3;
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
    }
    local_598 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SkinWeightAttributes).field_0x10;
    local_490._padding_._0_4_ = 0;
    pTVar3 = &param_1->SkinWeightAttributes;
    local_490._padding_._4_4_ = 1;
    local_490.UnvisitedBitMask = 0xffffffff;
    local_490.CurrentBitIndex = 0;
    local_490.BaseBitIndex = 0;
    local_4f0 = pTVar3;
    local_490.Array = local_598;
    if (*(int *)&(param_1->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_490);
    }
    local_5a4 = *(uint *)&(param_1->SkinWeightAttributes).field_0x28;
    TStack_588._padding_ = CONCAT44(local_490._padding_._4_4_,(undefined4)local_490._padding_);
    uStack_518 = CONCAT44(local_490.CurrentBitIndex,local_490.UnvisitedBitMask);
    TStack_588._28_4_ = local_490._28_4_;
    TStack_588.BaseBitIndex = local_490.BaseBitIndex;
    iStack_508 = *(int *)&(param_1->SkinWeightAttributes).field_0x8 -
                 *(int *)&(param_1->SkinWeightAttributes).field_0x34;
    local_520 = local_490.Array;
    uVar16 = local_5a4 & 0xffffffe0;
    iVar17 = (int)local_5a4 >> 5;
    local_568 = CONCAT44(uStack_504,iStack_508);
    TStack_588.Array = local_490.Array;
    TStack_588.CurrentBitIndex = local_490.CurrentBitIndex;
    TStack_588.UnvisitedBitMask = local_490.UnvisitedBitMask;
    local_590 = pTVar3;
    local_530 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar3;
    uStack_528 = TStack_588._padding_;
    _local_510 = TStack_588._24_8_;
    if (((int)local_5a4 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SkinWeightAttributes).field_0x10;
    uVar19 = *(uint *)&(param_1->SkinWeightAttributes).field_0x28;
    if (local_5a4 != uVar19) {
      puVar36 = *(undefined1 **)&(param_1->SkinWeightAttributes).field_0x20;
      puVar33 = (undefined1 *)pTVar38;
      if (puVar36 != (undefined1 *)0x0) {
        puVar33 = puVar36;
      }
      uVar39 = -1 << ((byte)local_5a4 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar17 * 4);
      while (uVar39 == 0) {
        lVar34 = (longlong)iVar17;
        uVar16 = uVar16 + 0x20;
        iVar17 = iVar17 + 1;
        local_5a4 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1434b4570;
        uVar39 = *(uint *)(puVar33 + lVar34 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
      lVar34 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_400 = (int)lVar34;
      local_5a4 = local_400 + -1 + uVar16;
      if ((int)uVar19 < (int)local_5a4) {
        local_5a4 = uVar19;
      }
    }
LAB_1434b4570:
    while( true ) {
      pTVar3 = local_590;
      if (*(int *)&local_590->field_0x8 - *(int *)&local_590->field_0x34 != (int)local_568) {
        local_59d = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_59d);
        pTVar38 = local_598;
      }
      pFVar12 = local_4d0;
      lVar34 = (longlong)TStack_588.CurrentBitIndex;
      if (((TStack_588.CurrentBitIndex == local_5a4) && (TStack_588.Array == pTVar38)) &&
         (pTVar3 == local_4f0)) break;
      lVar7 = *(longlong *)pTVar3;
      pTVar32 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        *)&this->SkinWeightAttributes,*(FName *)(lVar7 + lVar34 * 0x18));
      pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar32->field_0x8;
      if (pTVar32 ==
          (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
           *)0x0) {
        pTVar26 = pTVar35;
      }
      if (pTVar26 == (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
        pFVar8 = this->ParentMesh;
        pTVar25 = ::operator_new(0x30);
        pTVar26 = pTVar35;
        if (pTVar25 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
          pTVar25->_padding_ = 0;
          pTVar25->Parent = pFVar8;
          pTVar25->_padding_ =
               (longlong)
               &
               ___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
          ;
          (pTVar25->VertexBoneWeights).CurBlock = 0;
          (pTVar25->VertexBoneWeights).CurBlockUsed = 0;
          (pTVar25->VertexBoneWeights).Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pTVar25->VertexBoneWeights).Blocks.ArrayNum = 0;
          (pTVar25->VertexBoneWeights).Blocks.ArrayMax = 0;
          TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                    (&pTVar25->VertexBoneWeights);
          local_288.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
          local_288.BoneWeights.ArrayNum = 0;
          local_288.BoneWeights.ArrayMax = 0xc;
          local_288.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
          local_288.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
          local_288.BoneWeights.AllocatorInstance.SecondaryData =
               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                    (pTVar25,&local_288);
          pTVar26 = pTVar25;
        }
        local_248.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
        local_248.BoneWeights.ArrayNum = 0;
        local_248.BoneWeights.ArrayMax = 0xc;
        local_248.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
        local_248.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
        local_248.BoneWeights.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                  (pTVar26,&local_248);
        AttachSkinWeightsAttribute(this,*(FName *)(lVar7 + lVar34 * 0x18),pTVar26);
      }
      TStack_588.UnvisitedBitMask = TStack_588.UnvisitedBitMask & ~TStack_588._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_588);
      pTVar38 = local_598;
    }
    uVar19 = 1;
    pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_4d0->GenericAttributes).field_0x10;
    uVar16 = *(uint *)&(local_4d0->GenericAttributes).field_0x28;
    local_530 = &local_4d0->GenericAttributes;
    uStack_518._4_4_ = uVar15;
    if (uVar16 != 0) {
      puVar37 = *(uint **)&(local_4d0->GenericAttributes).field_0x20;
      if (puVar37 == (uint *)0x0) {
        puVar37 = (uint *)pTVar38;
      }
      uVar39 = *puVar37;
      pTVar26 = pTVar35;
      pTVar25 = pTVar35;
      uVar15 = uVar20;
      uVar18 = uVar20;
      while (uVar39 == 0) {
        iVar17 = (int)pTVar26;
        uVar15 = (int)pTVar25 + 0x20;
        pTVar25 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                  (ulonglong)uVar15;
        uVar18 = iVar17 + 1;
        pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                  (ulonglong)uVar18;
        uStack_518._4_4_ = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_1434b4770;
        uVar39 = puVar37[(longlong)iVar17 + 1];
      }
      uVar19 = -uVar39 & uVar39;
      uVar2 = (ulonglong)uVar19 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_3fc = (int)lVar34;
      uStack_518._4_4_ = (uVar15 - 1) + local_3fc;
      if ((int)uVar16 < (int)uStack_518._4_4_) {
        uStack_518._4_4_ = uVar16;
      }
    }
LAB_1434b4770:
    iStack_508 = *(int *)&(local_4d0->GenericAttributes).field_0x8 -
                 *(int *)&(local_4d0->GenericAttributes).field_0x34;
    uVar16 = *(uint *)&(local_4d0->GenericAttributes).field_0x28;
    uStack_518._0_4_ = 0xffffffff;
    uStack_528 = CONCAT44(uVar19,uVar18);
    uVar20 = uVar16 & 0xffffffe0;
    uStack_50c = local_ec;
    local_510 = uVar15;
    TStack_320._padding_ = uStack_528;
    iVar17 = (int)uVar16 >> 5;
    local_598 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_598._4_4_,uVar16);
    uStack_300 = CONCAT44(uStack_504,iStack_508);
    TStack_320.UnvisitedBitMask = 0xffffffff;
    TStack_320.CurrentBitIndex = uStack_518._4_4_;
    TStack_320.BaseBitIndex = uVar15;
    TStack_320._28_4_ = local_ec;
    local_520 = pTVar38;
    local_4f0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)local_530;
    local_3f8 = pTVar38;
    local_328 = local_530;
    TStack_320.Array = pTVar38;
    if (((int)uVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar15 = *(uint *)&(pFVar12->GenericAttributes).field_0x28;
    if (uVar16 != uVar15) {
      puVar36 = *(undefined1 **)&(pFVar12->GenericAttributes).field_0x20;
      local_598 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_598._4_4_,uVar15);
      puVar33 = (undefined1 *)pTVar38;
      if (puVar36 != (undefined1 *)0x0) {
        puVar33 = puVar36;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar34 = (longlong)iVar17;
        uVar20 = uVar20 + 0x20;
        iVar17 = iVar17 + 1;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1434b4897;
        uVar16 = *(uint *)(puVar33 + lVar34 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar34 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_3f0._4_4_ = (undefined4)lVar34;
      uVar16 = (uVar20 - 1) + local_3f0._4_4_;
      if ((int)uVar15 < (int)uVar16) {
        uVar16 = uVar15;
      }
      local_598 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_598._4_4_,uVar16);
    }
LAB_1434b4897:
    iVar17 = (int)local_598;
    while( true ) {
      pTVar1 = local_328;
      if (*(int *)&local_328->field_0x8 - *(int *)&local_328->field_0x34 != (int)uStack_300) {
        local_59c[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_59c);
      }
      lVar34 = (longlong)TStack_320.CurrentBitIndex;
      if (((TStack_320.CurrentBitIndex == iVar17) && (TStack_320.Array == pTVar38)) &&
         (param_1 = local_4d0,
         pTVar1 == (TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                    *)local_4f0)) break;
      lVar7 = *(longlong *)pTVar1;
      pTVar1 = &this->GenericAttributes;
      pTVar29 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        *)pTVar1,*(FName *)(lVar7 + lVar34 * 0x18));
      pTVar26 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)
                &pTVar29->field_0x8;
      if (pTVar29 ==
          (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
           *)0x0) {
        pTVar26 = pTVar35;
      }
      if (pTVar26 == (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
        plVar9 = *(longlong **)(lVar7 + 8 + lVar34 * 0x18);
        pTVar28 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)
                  (**(code **)(*plVar9 + 0x10))(plVar9,this->ParentMesh);
        FVar10 = *(FName *)(lVar7 + lVar34 * 0x18);
        local_4e0 = FVar10;
        uVar15 = ::GetTypeHash(FVar10.ComparisonIndex.Value);
        if (*(int *)&(this->GenericAttributes).field_0x8 !=
            *(int *)&(this->GenericAttributes).field_0x34) {
          puVar36 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
          puVar33 = &(this->GenericAttributes).field_0x38;
          if (puVar36 != (undefined1 *)0x0) {
            puVar33 = puVar36;
          }
          iVar21 = *(int *)(puVar33 +
                           (ulonglong)
                           (*(int *)&(this->GenericAttributes).field_0x48 - 1U &
                           FVar10.Number + uVar15) * 4);
          if (iVar21 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar21 * 0x18) == FVar10) {
                pTVar29 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                  *)pTVar1,local_4e0);
                if ((pTVar29 ==
                     (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                      *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                          ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                           *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                            &pTVar29->field_0x8);
                break;
              }
              iVar21 = *(int *)(*(longlong *)&pTVar1->field_0x0 + 0x10 + (longlong)iVar21 * 0x18);
            } while (iVar21 != -1);
          }
        }
        local_2e8 = &local_4e0;
        local_4d8 = pTVar28;
        local_2e0 = &local_4d8;
        TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>_>
                  ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)pTVar1,
                   (TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>
                    *)local_3f0,(bool *)&local_2e8);
        if (local_4d8 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
          (**(code **)local_4d8->_padding_)(local_4d8,1);
        }
        TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
                  ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,pTVar28);
        pTVar38 = local_3f8;
      }
      TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
    }
  }
  EnableMatchingBoneAttributes(this,param_1,param_2,param_3);
  FDynamicMeshSculptLayers::EnableMatching
            (&this->SculptLayers,this,&param_1->SculptLayers,param_2,param_3);
  return;
  while (iVar17 = *(int *)(*(longlong *)&pTVar1->field_0x0 + 0x10 + (longlong)iVar17 * 0x18),
        iVar17 != -1) {
LAB_1434b4324:
    if (*(FName *)(*(longlong *)&pTVar1->field_0x0 + (longlong)iVar17 * 0x18) == FVar10) {
      pTVar31 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                ::FindChecked((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                               *)pTVar1,local_4b8);
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,pTVar31->Ptr);
      break;
    }
  }
LAB_1434b4352:
  local_2f8 = &local_4b8;
  local_2f0 = &local_4e8;
  local_4e8 = pTVar28;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>_>
            ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
              *)pTVar1,
             (TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>
              *)(local_408 + 4),(bool *)&local_2f8);
  if (local_4e8 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)local_4e8->_padding_)(local_4e8,1);
  }
  TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
            ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,pTVar28);
LAB_1434b43a3:
  TStack_350.UnvisitedBitMask = TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
  goto LAB_1434b41f0;
}

// EnableMatchingBoneAttributes @ 1434b4ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableMatchingBoneAttributes
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1,bool param_2,
          bool param_3)

{
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
  *pTVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar3;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar4;
  int iVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar9;
  undefined8 *puVar10;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar11;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar12;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
  *pTVar13;
  FDynamicMesh3 *pFVar14;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
  *pTVar15;
  FName local_res8;
  int local_res18 [4];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  TVector4<float>_u_0 local_48;
  
  pTVar6 = (param_1->BoneNameAttrib).Ptr;
  pTVar1 = &this->BoneNameAttrib;
  pFVar14 = this->ParentMesh;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if ((param_2) || (param_3)) {
    if ((param_2) || (pTVar6 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
       ) {
      pTVar3 = pTVar1->Ptr;
      if (pTVar3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        pTVar1->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
        (**(code **)pTVar3->_padding_)();
      }
      if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        if (pTVar6 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
        goto LAB_1434b4b68;
        goto LAB_1434b4b63;
      }
    }
    else {
LAB_1434b4b63:
      iVar5 = (pTVar6->AttribValues).ArrayNum;
LAB_1434b4b6a:
      if (pTVar1->Ptr == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        pTVar6 = ::operator_new(0x28);
        if (pTVar6 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
          pTVar6 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
        }
        else {
          pTVar6->Parent = pFVar14;
          pTVar6->_padding_ = 0;
          (pTVar6->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar6->AttribValues).ArrayNum = 0;
          (pTVar6->AttribValues).ArrayMax = 0;
          pTVar6->_padding_ =
               (longlong)
               &
               ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_
          ;
          TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize(pTVar6,0);
        }
        if (pTVar1 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
                       *)&local_68) {
          if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
            puVar10 = (undefined8 *)pTVar6->_padding_;
            goto LAB_1434b4bd1;
          }
        }
        else {
          pTVar3 = pTVar1->Ptr;
          pTVar1->Ptr = pTVar6;
          if (pTVar3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
            puVar10 = (undefined8 *)pTVar3->_padding_;
            pTVar6 = pTVar3;
LAB_1434b4bd1:
            (*(code *)*puVar10)(pTVar6,1);
          }
        }
        TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Initialize
                  (pTVar1->Ptr,iVar5,&local_res8);
      }
    }
    pTVar11 = (param_1->BoneParentIndexAttrib).Ptr;
    pFVar14 = this->ParentMesh;
    local_res18[0] = -1;
    if ((!param_2) && (!param_3)) goto LAB_1434b4c11;
    if ((!param_2) && (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
       ) goto LAB_1434b4c6a;
    pTVar7 = (this->BoneParentIndexAttrib).Ptr;
    if (pTVar7 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
      (this->BoneParentIndexAttrib).Ptr =
           (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
      (**(code **)pTVar7->_padding_)();
    }
    if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
      if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
      goto LAB_1434b4c6a;
      goto LAB_1434b4c71;
    }
LAB_1434b4cf7:
    pTVar8 = (param_1->BonePoseAttrib).Ptr;
    pFVar14 = this->ParentMesh;
    if ((!param_2) && (!param_3)) goto LAB_1434b4d13;
    if ((param_2) ||
       (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0)) {
      pTVar4 = (this->BonePoseAttrib).Ptr;
      if (pTVar4 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)0x0) {
        (this->BonePoseAttrib).Ptr =
             (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *
             )0x0;
        (**(code **)pTVar4->_padding_)();
      }
      if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)0x0) {
        if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                       *)0x0) goto LAB_1434b4d9f;
        goto LAB_1434b4d25;
      }
      goto LAB_1434b4de3;
    }
LAB_1434b4d9f:
    iVar5 = (pTVar8->AttribValues).ArrayNum;
LAB_1434b4d27:
    pTVar15 = &this->BonePoseAttrib;
    if (pTVar15->Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    {
      pTVar8 = ::operator_new(0x28);
      if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)0x0) {
        pTVar8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                  *)0x0;
      }
      else {
        pTVar8->Parent = pFVar14;
        pTVar8->_padding_ = 0;
        (pTVar8->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar8->AttribValues).ArrayNum = 0;
        (pTVar8->AttribValues).ArrayMax = 0;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
        ;
        TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Resize
                  (pTVar8,0);
      }
      if (pTVar15 ==
          (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
           *)&local_58) {
        if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                       *)0x0) {
          puVar10 = (undefined8 *)pTVar8->_padding_;
          goto LAB_1434b4dcb;
        }
      }
      else {
        pTVar4 = pTVar15->Ptr;
        pTVar15->Ptr = pTVar8;
        if (pTVar4 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                       *)0x0) {
          puVar10 = (undefined8 *)pTVar4->_padding_;
          pTVar8 = pTVar4;
LAB_1434b4dcb:
          (*(code *)*puVar10)(pTVar8,1);
        }
      }
      TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
      Initialize(pTVar15->Ptr,iVar5,&UE::Math::TTransform<double>::Identity);
    }
  }
  else {
    if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_1434b4b63;
    if (pTVar1->Ptr != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
LAB_1434b4b68:
      iVar5 = 0;
      goto LAB_1434b4b6a;
    }
    pTVar11 = (param_1->BoneParentIndexAttrib).Ptr;
LAB_1434b4c11:
    local_res18[0] = -1;
    if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
LAB_1434b4c6a:
      iVar5 = (pTVar11->AttribValues).ArrayNum;
LAB_1434b4c75:
      pTVar11 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
      pTVar13 = &this->BoneParentIndexAttrib;
      if (pTVar13->Ptr == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
        pTVar7 = ::operator_new(0x28);
        if (pTVar7 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
          pTVar7->_padding_ = 0;
          pTVar7->_padding_ =
               (longlong)
               &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
          pTVar7->Parent = pFVar14;
          (pTVar7->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->AttribValues).ArrayNum = 0;
          (pTVar7->AttribValues).ArrayMax = 0;
          pTVar11 = pTVar7;
        }
        if (pTVar13 ==
            (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
             *)&local_60) {
          if (pTVar11 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
            puVar10 = (undefined8 *)pTVar11->_padding_;
            goto LAB_1434b4cd9;
          }
        }
        else {
          pTVar7 = pTVar13->Ptr;
          pTVar13->Ptr = pTVar11;
          if (pTVar7 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
            puVar10 = (undefined8 *)pTVar7->_padding_;
            pTVar11 = pTVar7;
LAB_1434b4cd9:
            (*(code *)*puVar10)(pTVar11,1);
          }
        }
        TArray<int,TSizedDefaultAllocator<32>_>::Init(&pTVar13->Ptr->AttribValues,local_res18,iVar5)
        ;
      }
      goto LAB_1434b4cf7;
    }
    if ((this->BoneParentIndexAttrib).Ptr !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
LAB_1434b4c71:
      iVar5 = 0;
      goto LAB_1434b4c75;
    }
    pTVar8 = (param_1->BonePoseAttrib).Ptr;
    pFVar14 = this->ParentMesh;
LAB_1434b4d13:
    if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) goto LAB_1434b4d9f;
    if ((this->BonePoseAttrib).Ptr !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    {
LAB_1434b4d25:
      iVar5 = 0;
      goto LAB_1434b4d27;
    }
  }
LAB_1434b4de3:
  pTVar2 = &this->BoneColorAttrib;
  pTVar12 = (param_1->BoneColorAttrib).Ptr;
  pFVar14 = this->ParentMesh;
  local_48._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_48._8_8_ = _UNK_15076b1f8;
  if ((param_2) || (param_3)) {
    if ((param_2) ||
       (pTVar12 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)) {
      pTVar9 = pTVar2->Ptr;
      if (pTVar9 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                     *)0x0) {
        pTVar2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                       *)0x0;
        (**(code **)pTVar9->_padding_)();
      }
      if (pTVar12 ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
      {
        return;
      }
      if (pTVar12 ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
      goto LAB_1434b4e26;
    }
LAB_1434b4eae:
    iVar5 = (pTVar12->AttribValues).ArrayNum;
  }
  else {
    if (pTVar12 !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
    goto LAB_1434b4eae;
    if (pTVar2->Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
      return;
    }
LAB_1434b4e26:
    iVar5 = 0;
  }
  pTVar12 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0
  ;
  if (pTVar2->Ptr !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    return;
  }
  pTVar9 = ::operator_new(0x28);
  if (pTVar9 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    pTVar9->_padding_ = 0;
    pTVar9->Parent = pFVar14;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (pTVar9->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar9->AttribValues).ArrayNum = 0;
    (pTVar9->AttribValues).ArrayMax = 0;
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Resize
              (pTVar9,0);
    pTVar12 = pTVar9;
  }
  if (pTVar2 == (TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
                 *)&local_50) {
    if (pTVar12 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
    goto LAB_1434b4ee8;
    puVar10 = (undefined8 *)pTVar12->_padding_;
  }
  else {
    pTVar9 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar12;
    if (pTVar9 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) goto LAB_1434b4ee8;
    puVar10 = (undefined8 *)pTVar9->_padding_;
    pTVar12 = pTVar9;
  }
  (*(code *)*puVar10)(pTVar12,1);
LAB_1434b4ee8:
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Initialize
            (pTVar2->Ptr,iVar5,(TVector4<float> *)&local_48._s_0);
  return;
}

// EnableMatchingWeightLayersByNames @ 1434b4f10

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableMatchingWeightLayersByNames
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
  *this_00;
  longlong lVar2;
  FDynamicMesh3 *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  float local_res10 [2];
  char local_res18;
  longlong local_res20;
  undefined8 *local_40;
  
  local_res18 = param_2;
  if (param_1 == (FDynamicMeshAttributeSet *)0x0) {
    if (param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001434b4f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xe0))();
      return;
    }
  }
  else {
    uVar16 = 0;
    if (0 < (param_1->WeightLayers).Array.ArrayNum) {
      local_res20 = 0;
      do {
        lVar17 = local_res20;
        uVar18 = 0;
        if ((int)uVar16 < (param_1->WeightLayers).Array.ArrayNum) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = &this->WeightLayers;
        lVar2 = *(longlong *)((param_1->WeightLayers).Array.AllocatorInstance.Data + lVar17 * 8);
        uVar18 = uVar16;
        if ((int)uVar16 < (this->WeightLayers).Array.ArrayNum) {
          do {
            uVar14 = 0;
            if ((int)uVar18 < (this->WeightLayers).Array.ArrayNum) {
              uVar14 = ~uVar18 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(longlong *)(lVar2 + 8) ==
                *(longlong *)
                 (*(longlong *)((this_00->Array).AllocatorInstance.Data + lVar17 * 8) + 8)) {
              if ((int)uVar16 < (int)uVar18) {
                uVar14 = 0;
                if ((int)uVar16 < (this->WeightLayers).Array.ArrayNum) {
                  uVar14 = ~uVar16 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                puVar15 = *(undefined8 **)
                           ((this_00->Array).AllocatorInstance.Data + local_res20 * 8);
                uVar14 = 0;
                if ((int)uVar18 < (this->WeightLayers).Array.ArrayNum) {
                  uVar14 = ~uVar18 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar6 = puVar15[1];
                puVar4 = *(undefined8 **)((this_00->Array).AllocatorInstance.Data + lVar17 * 8);
                uVar7 = *puVar4;
                uVar8 = puVar4[1];
                uVar9 = puVar4[2];
                uVar10 = puVar4[3];
                uVar11 = puVar4[4];
                uVar12 = puVar4[5];
                *puVar4 = *puVar15;
                puVar4[1] = uVar6;
                uVar6 = puVar15[3];
                puVar4[2] = puVar15[2];
                puVar4[3] = uVar6;
                uVar6 = puVar15[5];
                puVar4[4] = puVar15[4];
                puVar4[5] = uVar6;
                *puVar15 = uVar7;
                puVar15[1] = uVar8;
                puVar15[2] = uVar9;
                puVar15[3] = uVar10;
                puVar15[4] = uVar11;
                puVar15[5] = uVar12;
              }
              goto LAB_1434b5212;
            }
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 1;
          } while ((int)uVar18 < (this->WeightLayers).Array.ArrayNum);
        }
        if ((this->WeightLayers).Array.ArrayNum <= (int)uVar16) {
          (**(code **)(this->_padding_ + 0xe0))(this,(param_1->WeightLayers).Array.ArrayNum);
          if ((int)uVar16 < (param_1->WeightLayers).Array.ArrayNum) {
            lVar17 = (longlong)(int)uVar16 * 8;
            do {
              uVar18 = 0;
              if ((int)uVar16 < (this->WeightLayers).Array.ArrayNum) {
                uVar18 = ~uVar16 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar2 = *(longlong *)((this_00->Array).AllocatorInstance.Data + lVar17);
              uVar18 = 0;
              if ((int)uVar16 < (param_1->WeightLayers).Array.ArrayNum) {
                uVar18 = ~uVar16 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar16 = uVar16 + 1;
              pFVar1 = (param_1->WeightLayers).Array.AllocatorInstance.Data + lVar17;
              lVar17 = lVar17 + 8;
              *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(*(longlong *)pFVar1 + 8);
            } while ((int)uVar16 < (param_1->WeightLayers).Array.ArrayNum);
          }
          break;
        }
        puVar15 = ::operator_new(0x30);
        if (puVar15 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          pFVar3 = this->ParentMesh;
          *puVar15 = &
                     ___7__TDynamicVertexAttribute_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
          ;
          puVar15[1] = 0;
          puVar15[2] = pFVar3;
          puVar15[3] = 0;
          puVar15[4] = 0;
          puVar15[5] = 0;
          TDynamicVector<float,512>::AddAllocatedBlock((TDynamicVector<float,512> *)(puVar15 + 3));
          local_res10[0] = 0.0;
          if ((puVar15[2] == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Parent != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                                  ,0x9a,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TDynamicVector<float,512>::Resize
                    ((TDynamicVector<float,512> *)(puVar15 + 3),
                     *(int *)(puVar15[2] + 0x20) * 0x200 + *(int *)(puVar15[2] + 0x24));
          TDynamicVector<float,512>::Fill((TDynamicVector<float,512> *)(puVar15 + 3),local_res10);
        }
        puVar15[1] = *(undefined8 *)(lVar2 + 8);
        local_40 = puVar15;
        TArray<void_*,TSizedDefaultAllocator<32>_>::Insert(&this_00->Array,&local_40,uVar16);
LAB_1434b5212:
        uVar16 = uVar16 + 1;
        local_res20 = local_res20 + 1;
      } while ((int)uVar16 < (param_1->WeightLayers).Array.ArrayNum);
    }
    if (local_res18 != '\0') {
      (**(code **)(this->_padding_ + 0xe0))(this);
    }
  }
  return;
}

// EnableMaterialID @ 1434b5360

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(FDynamicMeshAttributeSet *this)

{
  TUniquePtr<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TDefaultDelete<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_>_>
  *pTVar1;
  TDynamicVector<int,512> *this_00;
  FDynamicMesh3 *pFVar2;
  TDynamicMeshTriangleAttribute<int,1> *pTVar3;
  TDynamicMeshTriangleAttribute<int,1> *this_01;
  undefined8 *puVar4;
  longlong local_18 [2];
  
  pTVar1 = &this->MaterialIDAttrib;
  if ((this->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    return;
  }
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
    pFVar2 = this->ParentMesh;
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_01->_padding_ = 0;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = pFVar2;
    TDynamicMeshTriangleAttribute<int,1>::Initialize(this_01,0);
    this_01->_padding_ = (longlong)&___7__TDynamicMeshScalarTriangleAttribute_H_Geometry_UE__6B_;
  }
  if (pTVar1 == (TUniquePtr<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TDefaultDelete<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_>_>
                 *)local_18) {
    if (this_01 == (TDynamicMeshTriangleAttribute<int,1> *)0x0) goto LAB_1434b5404;
    puVar4 = (undefined8 *)this_01->_padding_;
  }
  else {
    pTVar3 = (TDynamicMeshTriangleAttribute<int,1> *)pTVar1->Ptr;
    pTVar1->Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)this_01;
    if (pTVar3 == (TDynamicMeshTriangleAttribute<int,1> *)0x0) goto LAB_1434b5404;
    puVar4 = (undefined8 *)pTVar3->_padding_;
    this_01 = pTVar3;
  }
  (*(code *)*puVar4)(this_01);
LAB_1434b5404:
  TDynamicMeshTriangleAttribute<int,1>::Initialize
            ((TDynamicMeshTriangleAttribute<int,1> *)pTVar1->Ptr,0);
  return;
}

// EnablePrimaryColors @ 1434b5570

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(FDynamicMeshAttributeSet *this)

{
  TUniquePtr<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_>_>
  *pTVar1;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar2;
  TDynamicMeshOverlay<float,4> *this_01;
  longlong local_18 [2];
  
  pTVar1 = &this->ColorLayer;
  if ((this->ColorLayer).Ptr != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0
     ) {
    return;
  }
  pTVar2 = ::operator_new(0x88);
  if (pTVar2 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    this_01 = (TDynamicMeshOverlay<float,4> *)0x0;
  }
  else {
    this_01 = (TDynamicMeshOverlay<float,4> *)
              TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::
              TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>(pTVar2,this->ParentMesh)
    ;
  }
  if (pTVar1 == (TUniquePtr<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_>_>
                 *)local_18) {
    if (this_01 == (TDynamicMeshOverlay<float,4> *)0x0) goto LAB_1434b55f4;
    TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_01);
  }
  else {
    this_00 = (TDynamicMeshOverlay<float,4> *)pTVar1->Ptr;
    pTVar1->Ptr = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)this_01;
    if (this_00 == (TDynamicMeshOverlay<float,4> *)0x0) goto LAB_1434b55f4;
    TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_00);
    this_01 = this_00;
  }
  ::operator_delete(this_01,0x88);
LAB_1434b55f4:
  pTVar2 = pTVar1->Ptr;
  TDynamicVector<int,512>::Resize
            ((TDynamicVector<int,512> *)&pTVar2->field_0x70,
             ((this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<int,512>::Fill
            ((TDynamicVector<int,512> *)&pTVar2->field_0x70,&FDynamicMesh3::InvalidID);
  return;
}

// EnableSculptLayers @ 1434b5650

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableSculptLayers
          (FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ParentMesh != (FDynamicMesh3 *)0x0) {
    FDynamicMeshSculptLayers::Enable(&this->SculptLayers,this,param_1);
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6248718618683508627>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                     ,0x793,"ParentMesh");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnableTangents @ 1434b56b0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(FDynamicMeshAttributeSet *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b56b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))(this,3);
  return;
}

// GetByteCount @ 1434bf410

ulong64 __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetByteCount(FDynamicMeshAttributeSet *this)

{
  int *piVar1;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar9;
  code *pcVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar13;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar14;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar15;
  bool bVar16;
  longlong lVar17;
  ulong64 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215 [5];
  FScriptContainerElement *local_210;
  int *piStack_208;
  undefined8 local_200;
  ulonglong local_1f8;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  FScriptContainerElement *local_168;
  int *piStack_160;
  undefined8 local_158;
  FScriptContainerElement *local_150;
  int *piStack_148;
  undefined8 local_140;
  FScriptContainerElement *local_138;
  int *piStack_130;
  undefined8 local_128;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FScriptContainerElement *local_90;
  int *piStack_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_74;
  undefined4 local_54;
  ulonglong uVar27;
  
  pFVar29 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar21 = *piVar1;
  uVar18 = 0;
  local_200 = CONCAT44(local_200._4_4_,iVar21);
  pFVar3 = pFVar29 + (longlong)iVar21 * 8;
  local_158 = local_200;
  local_210 = pFVar29;
  piStack_208 = piVar1;
  local_168 = pFVar29;
  piStack_160 = piVar1;
  while( true ) {
    if (*piVar1 != iVar21) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar29 == pFVar3) break;
    lVar17 = *(longlong *)pFVar29;
    pFVar29 = pFVar29 + 8;
    uVar18 = uVar18 + ((longlong)(*(int *)(lVar17 + 0x18) << 9) +
                      ((longlong)(*(int *)(lVar17 + 0x80) << 9) +
                       (longlong)(*(int *)(lVar17 + 0x68) << 9) +
                       (longlong)(*(int *)(lVar17 + 0x50) << 9) +
                      (longlong)(*(int *)(lVar17 + 0x30) << 9)) * 2) * 2;
  }
  iVar21 = (this->NormalLayers).Array.ArrayNum;
  piVar1 = &(this->NormalLayers).Array.ArrayNum;
  local_200 = CONCAT44(local_200._4_4_,iVar21);
  pFVar30 = (this->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar30 + (longlong)iVar21 * 8;
  local_140 = local_200;
  local_210 = pFVar30;
  piStack_208 = piVar1;
  local_168 = pFVar29;
  local_150 = pFVar30;
  piStack_148 = piVar1;
  while( true ) {
    if (*piVar1 != iVar21) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar30 == pFVar3) break;
    lVar17 = *(longlong *)pFVar30;
    pFVar30 = pFVar30 + 8;
    uVar18 = uVar18 + ((longlong)(*(int *)(lVar17 + 0x18) << 9) +
                      ((longlong)(*(int *)(lVar17 + 0x80) << 9) +
                       (longlong)(*(int *)(lVar17 + 0x68) << 9) +
                       (longlong)(*(int *)(lVar17 + 0x50) << 9) +
                      (longlong)(*(int *)(lVar17 + 0x30) << 9)) * 2) * 2;
  }
  pTVar4 = (this->ColorLayer).Ptr;
  if (pTVar4 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    uVar18 = uVar18 + ((longlong)(*(int *)&pTVar4->field_0x18 << 9) +
                      ((longlong)(*(int *)&pTVar4->field_0x30 << 9) +
                       (longlong)(*(int *)&pTVar4->field_0x80 << 9) +
                       (longlong)(*(int *)&pTVar4->field_0x68 << 9) +
                      (longlong)(*(int *)&pTVar4->field_0x50 << 9)) * 2) * 2;
  }
  pTVar5 = (this->MaterialIDAttrib).Ptr;
  local_150 = pFVar30;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    lVar17 = (**(code **)(*(longlong *)pTVar5 + 200))();
    uVar18 = uVar18 + lVar17;
  }
  pFVar29 = (this->PolygroupLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->PolygroupLayers).Array.ArrayNum;
  iVar21 = *piVar1;
  local_200 = CONCAT44(local_200._4_4_,iVar21);
  pFVar3 = pFVar29 + (longlong)iVar21 * 8;
  local_128 = local_200;
  local_210 = pFVar29;
  piStack_208 = piVar1;
  local_138 = pFVar29;
  piStack_130 = piVar1;
  while( true ) {
    if (*piVar1 != iVar21) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar29 == pFVar3) break;
    lVar17 = (**(code **)(**(longlong **)pFVar29 + 200))();
    uVar18 = uVar18 + lVar17;
    pFVar29 = pFVar29 + 8;
  }
  uVar26 = 0;
  uVar27 = 0;
  iVar21 = (this->WeightLayers).Array.ArrayNum;
  piStack_208 = &(this->WeightLayers).Array.ArrayNum;
  pFVar30 = (this->WeightLayers).Array.AllocatorInstance.Data;
  local_200 = CONCAT44(uStack_7c,iVar21);
  pFVar3 = pFVar30 + (longlong)iVar21 * 8;
  local_210 = pFVar30;
  local_138 = pFVar29;
  local_90 = pFVar30;
  piStack_88 = piStack_208;
  local_80 = iVar21;
  while( true ) {
    if (*piStack_208 != iVar21) {
      local_218 = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_218);
    }
    if (pFVar30 == pFVar3) break;
    lVar17 = (**(code **)(**(longlong **)pFVar30 + 200))();
    uVar18 = uVar18 + lVar17;
    pFVar30 = pFVar30 + 8;
  }
  local_1f8 = 1;
  local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10;
  uVar28 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  local_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)&this->SkinWeightAttributes;
  iVar21 = 0;
  uStack_1a4 = 1;
  uStack_194 = uVar26;
  local_190 = uVar26;
  uStack_1a8 = uVar26;
  if (uVar28 != 0) {
    puVar25 = *(uint **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)local_1f0;
    }
    uStack_1a4 = *puVar25;
    uVar22 = uVar27;
    uStack_1a8 = 0;
    while (uStack_1a4 == 0) {
      iVar21 = (int)uVar22;
      local_190 = local_190 + 0x20;
      uStack_1a8 = iVar21 + 1;
      uVar22 = (ulonglong)uStack_1a8;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1a8) {
        iVar21 = *(int *)&(this->SkinWeightAttributes).field_0x28;
        uStack_1a4 = 1;
        uStack_194 = uVar28;
        goto LAB_1434bf7b5;
      }
      uStack_1a4 = puVar25[(longlong)iVar21 + 1];
    }
    iVar21 = *(int *)&(this->SkinWeightAttributes).field_0x28;
    uStack_1a4 = -uStack_1a4 & uStack_1a4;
    uVar22 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_180 = (int)lVar17;
    uStack_194 = (local_190 - 1) + local_180;
    if (iVar21 < (int)uStack_194) {
      uStack_194 = uVar28;
    }
  }
LAB_1434bf7b5:
  uVar28 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  uStack_18c = local_74;
  iStack_188 = *(int *)&(this->SkinWeightAttributes).field_0x8 -
               *(int *)&(this->SkinWeightAttributes).field_0x34;
  uVar31 = uVar28 & 0xffffffe0;
  TStack_118._padding_ = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_198 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_194;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar28 >> 5;
  TStack_118._28_4_ = local_74;
  TStack_118.BaseBitIndex = local_190;
  uStack_f8 = CONCAT44(uStack_184,iStack_188);
  local_210 = pFVar30;
  local_1b0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)local_1e8;
  local_1a0 = (undefined1 *)local_1f0;
  local_120 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)local_1e8;
  TStack_118.Array = local_1f0;
  if ((((int)uVar28 < 0) || (iVar21 < (int)uVar28)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    uVar18 = (*pcVar10)();
    return uVar18;
  }
  pTVar12 = local_1e8;
  pTVar11 = local_1f0;
  uVar19 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  if (uVar28 != uVar19) {
    puVar23 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(this->SkinWeightAttributes).field_0x10;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
    while (uVar28 == 0) {
      lVar17 = (longlong)iVar20;
      uVar31 = uVar31 + 0x20;
      iVar20 = iVar20 + 1;
      uVar28 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_1434bf8e0;
      uVar28 = *(uint *)(puVar23 + lVar17 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_17c = (int)lVar17;
    uVar28 = (uVar31 - 1) + local_17c;
    if ((int)uVar19 < (int)uVar28) {
      uVar28 = uVar19;
    }
  }
LAB_1434bf8e0:
  while( true ) {
    pTVar13 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      local_217 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_217);
    }
    if (((TStack_118.CurrentBitIndex == uVar28) && (TStack_118.Array == pTVar11)) &&
       (pTVar13 ==
        (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
         *)pTVar12)) break;
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    uVar18 = uVar18 + (longlong)
                      (*(int *)(*(longlong *)
                                 (*(longlong *)pTVar13 + 8 +
                                 (longlong)TStack_118.CurrentBitIndex * 0x18) + 0x28) << 9) * 0x40;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  local_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MorphTargetAttributes).field_0x10;
  uVar28 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)&this->MorphTargetAttributes;
  iVar21 = 0;
  uStack_1d8 = uVar26;
  uStack_1d4 = (uint)local_1f8;
  local_1c0 = uVar26;
  uStack_1c4 = uVar26;
  if (uVar28 != 0) {
    puVar25 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)local_1e8;
    }
    uVar31 = *puVar25;
    while (uVar31 == 0) {
      lVar17 = (longlong)(int)uStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      uStack_1d8 = uStack_1d8 + 1;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1d8) {
        iVar21 = *(int *)&(this->MorphTargetAttributes).field_0x28;
        uStack_1c4 = uVar28;
        goto LAB_1434bf9e5;
      }
      uVar31 = puVar25[lVar17 + 1];
    }
    iVar21 = *(int *)&(this->MorphTargetAttributes).field_0x28;
    uStack_1d4 = -uVar31 & uVar31;
    uVar22 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_178 = (int)lVar17;
    uStack_1c4 = (local_1c0 - 1) + local_178;
    if (iVar21 < (int)uStack_1c4) {
      uStack_1c4 = uVar28;
    }
  }
LAB_1434bf9e5:
  uVar28 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  uStack_1bc = local_54;
  iStack_1b8 = *(int *)&(this->MorphTargetAttributes).field_0x8 -
               *(int *)&(this->MorphTargetAttributes).field_0x34;
  uVar31 = uVar28 & 0xffffffe0;
  uStack_1c8 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_1d4,uStack_1d8);
  TStack_e8.CurrentBitIndex = uStack_1c4;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar28 >> 5;
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_1c0;
  uStack_c8 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1e0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)local_1f0;
  local_1d0 = (undefined1 *)local_1e8;
  local_f0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
              *)local_1f0;
  TStack_e8.Array = local_1e8;
  if ((((int)uVar28 < 0) || (iVar21 < (int)uVar28)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    uVar18 = (*pcVar10)();
    return uVar18;
  }
  pTVar12 = local_1e8;
  pTVar11 = local_1f0;
  uVar19 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  if (uVar28 != uVar19) {
    puVar23 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(this->MorphTargetAttributes).field_0x10;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
    while (uVar28 == 0) {
      lVar17 = (longlong)iVar20;
      uVar31 = uVar31 + 0x20;
      iVar20 = iVar20 + 1;
      uVar28 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_1434bfb10;
      uVar28 = *(uint *)(puVar23 + lVar17 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_174 = (int)lVar17;
    uVar28 = (uVar31 - 1) + local_174;
    if ((int)uVar19 < (int)uVar28) {
      uVar28 = uVar19;
    }
  }
LAB_1434bfb10:
  while( true ) {
    pTVar14 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_216 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_216);
    }
    if (((TStack_e8.CurrentBitIndex == uVar28) && (TStack_e8.Array == pTVar12)) &&
       (pTVar14 ==
        (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
         *)pTVar11)) break;
    lVar17 = (**(code **)(**(longlong **)
                            (*(longlong *)pTVar14 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18)
                         + 200))();
    uVar18 = uVar18 + lVar17;
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  pTVar6 = (this->BoneNameAttrib).Ptr;
  if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    lVar17 = (**(code **)(pTVar6->_padding_ + 200))();
    uVar18 = uVar18 + lVar17;
  }
  pTVar7 = (this->BoneParentIndexAttrib).Ptr;
  if (pTVar7 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    lVar17 = (**(code **)(pTVar7->_padding_ + 200))();
    uVar18 = uVar18 + lVar17;
  }
  pTVar8 = (this->BoneColorAttrib).Ptr;
  if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    lVar17 = (**(code **)(pTVar8->_padding_ + 200))();
    uVar18 = uVar18 + lVar17;
  }
  pTVar9 = (this->BonePoseAttrib).Ptr;
  if (pTVar9 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    lVar17 = (**(code **)(pTVar9->_padding_ + 200))();
    uVar18 = uVar18 + lVar17;
  }
  pTVar8 = (this->BoneColorAttrib).Ptr;
  if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    lVar17 = (**(code **)(pTVar8->_padding_ + 200))();
    uVar18 = uVar18 + lVar17;
  }
  uVar22 = uVar27;
  uVar28 = uVar26;
  if (0 < (this->SculptLayers).Layers.Array.ArrayNum) {
    do {
      uVar31 = uVar26;
      if ((int)uVar28 < (this->SculptLayers).Layers.Array.ArrayNum) {
        uVar31 = ~uVar28 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return uVar18;
      }
      lVar17 = (**(code **)(**(longlong **)
                              ((this->SculptLayers).Layers.Array.AllocatorInstance.Data + uVar22) +
                           200))();
      uVar28 = uVar28 + 1;
      uVar18 = uVar18 + lVar17;
      uVar22 = uVar22 + 8;
    } while ((int)uVar28 < (this->SculptLayers).Layers.Array.ArrayNum);
  }
  puVar23 = &(this->GenericAttributes).field_0x10;
  uVar28 = *(uint *)&(this->GenericAttributes).field_0x28;
  pTVar2 = &this->GenericAttributes;
  uStack_1c4 = uVar26;
  uStack_1d8 = uVar26;
  if (uVar28 != 0) {
    puVar25 = *(uint **)&(this->GenericAttributes).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar23;
    }
    uVar31 = *puVar25;
    uStack_1d8 = 0;
    while (uVar31 == 0) {
      iVar21 = (int)uVar27;
      uVar26 = uVar26 + 0x20;
      uStack_1d8 = iVar21 + 1;
      uVar27 = (ulonglong)uStack_1d8;
      uStack_1c4 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1d8)
      goto LAB_1434bfd03;
      uVar31 = puVar25[(longlong)iVar21 + 1];
    }
    local_1f8 = (ulonglong)(-uVar31 & uVar31);
    uVar27 = local_1f8 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_170 = (int)lVar17;
    uStack_1c4 = (uVar26 - 1) + local_170;
    if ((int)uVar28 < (int)uStack_1c4) {
      uStack_1c4 = uVar28;
    }
  }
LAB_1434bfd03:
  uVar31 = *(uint *)&(this->GenericAttributes).field_0x28;
  uStack_1d4 = (uint)local_1f8;
  uStack_1bc = uStack_194;
  iStack_1b8 = *(int *)&(this->GenericAttributes).field_0x8 -
               *(int *)&(this->GenericAttributes).field_0x34;
  uVar19 = uVar31 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_1d4,uStack_1d8);
  uStack_1c8 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_1c4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar31 >> 5;
  TStack_b8._28_4_ = uStack_194;
  TStack_b8.BaseBitIndex = uVar26;
  uStack_98 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1c0 = uVar26;
  local_1e0 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
               *)pTVar2;
  local_1d0 = puVar23;
  local_c0 = pTVar2;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar23;
  if ((((int)uVar31 < 0) || ((int)uVar28 < (int)uVar31)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    uVar18 = (*pcVar10)();
    return uVar18;
  }
  uVar26 = *(uint *)&(this->GenericAttributes).field_0x28;
  if (uVar31 != uVar26) {
    puVar24 = *(undefined1 **)&(this->GenericAttributes).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar23;
    }
    uVar28 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
    while (uVar28 == 0) {
      lVar17 = (longlong)iVar21;
      uVar19 = uVar19 + 0x20;
      iVar21 = iVar21 + 1;
      uVar31 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_1434bfe20;
      uVar28 = *(uint *)(puVar24 + lVar17 * 4 + 4);
    }
    uVar27 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar31 = (uVar19 - 1) + (int)lVar17;
    if ((int)uVar26 < (int)uVar31) {
      uVar31 = uVar26;
    }
  }
LAB_1434bfe20:
  while( true ) {
    pTVar15 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_215);
    }
    if (((TStack_b8.CurrentBitIndex == uVar31) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) && (pTVar15 == pTVar2)
       ) break;
    lVar17 = (**(code **)(**(longlong **)
                            (*(longlong *)pTVar15 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18)
                         + 200))();
    uVar18 = uVar18 + lVar17;
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  return uVar18;
}

// GetNumBones @ 1434c3f50

int __thiscall UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(FDynamicMeshAttributeSet *this)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar1;
  
  pTVar1 = (this->BoneNameAttrib).Ptr;
  if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    return (pTVar1->AttribValues).ArrayNum;
  }
  return 0;
}

// GetPolygroupLayer @ 1434c4620

TDynamicMeshScalarTriangleAttribute<int> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
          (FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->PolygroupLayers).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDynamicMeshScalarTriangleAttribute<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TDynamicMeshScalarTriangleAttribute<int> **)
          ((this->PolygroupLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetPolygroupLayer @ 1434c46a0

TDynamicMeshScalarTriangleAttribute<int> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
          (FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->PolygroupLayers).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDynamicMeshScalarTriangleAttribute<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TDynamicMeshScalarTriangleAttribute<int> **)
          ((this->PolygroupLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetWeightLayer @ 1434cbe60

TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->WeightLayers).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> **)
          ((this->WeightLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetWeightLayer @ 1434cbee0

TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(FDynamicMeshAttributeSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->WeightLayers).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> **)
          ((this->WeightLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// IsCompact @ 1434e5e60

bool __thiscall UE::Geometry::FDynamicMeshAttributeSet::IsCompact(FDynamicMeshAttributeSet *this)

{
  longlong lVar1;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0xa8))();
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->UVLayers).Array.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)((this->UVLayers).Array.AllocatorInstance.Data + lVar8);
      if (*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24) != 0) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      iVar6 = (**(code **)(this->_padding_ + 0xa8))(this);
    } while ((int)uVar9 < iVar6);
  }
  uVar9 = 0;
  iVar6 = (**(code **)(this->_padding_ + 0xb8))(this);
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->NormalLayers).Array.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)((this->NormalLayers).Array.AllocatorInstance.Data + lVar8);
      if (*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24) != 0) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      iVar6 = (**(code **)(this->_padding_ + 0xb8))(this);
    } while ((int)uVar9 < iVar6);
  }
  pTVar2 = (this->ColorLayer).Ptr;
  if (pTVar2 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    return true;
  }
  return *(int *)&pTVar2->field_0x20 * 0x200 + *(int *)&pTVar2->field_0x24 == 0;
}

// IsMaterialBoundaryEdge @ 1434e6710

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsMaterialBoundaryEdge
          (FDynamicMeshAttributeSet *this,int param_1)

{
  longlong lVar1;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar2;
  FDynamicMesh3 *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  
  pTVar2 = (this->MaterialIDAttrib).Ptr;
  if (((pTVar2 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) &&
      (pFVar3 = this->ParentMesh, -1 < param_1)) &&
     (param_1 < (int)((pFVar3->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar3->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar3->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar4 = *(ulonglong *)
               (*(longlong *)((pFVar3->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
               (ulonglong)(param_1 & 0x1ff) * 0x10);
      if (((uint)uVar4 != 0xffffffff) && (uVar5 = (uint)(uVar4 >> 0x20), uVar5 != 0xffffffff)) {
        lVar1 = *(longlong *)&pTVar2->field_0x20;
        return *(int *)(*(longlong *)(lVar1 + ((uVar4 & 0xffffffff) >> 9) * 8) +
                       (ulonglong)((uint)uVar4 & 0x1ff) * 4) !=
               *(int *)(*(longlong *)(lVar1 + (uVar4 >> 0x29) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4)
        ;
      }
    }
  }
  return false;
}

// IsSameAs @ 1434ec280

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSameAs
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1,bool param_2)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  longlong *plVar2;
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  TDynamicMeshTriangleAttribute<int,1> *pTVar3;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this_02;
  TDynamicMeshOverlay<float,4> *this_03;
  TDynamicMeshOverlay<float,4> *pTVar4;
  TDynamicMeshTriangleAttribute<int,1> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  short *psVar34;
  uint local_res20;
  undefined8 uStack_1f8;
  IndexIterator local_1d0;
  IndexIterator local_1c0;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  int local_128;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  IndexIterator local_d0;
  IndexIterator local_c0 [2];
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  ulonglong uVar28;
  
  iVar21 = (this->UVLayers).Array.ArrayNum;
  if ((((iVar21 == (param_1->UVLayers).Array.ArrayNum) &&
       ((this->NormalLayers).Array.ArrayNum == (param_1->NormalLayers).Array.ArrayNum)) &&
      ((this->PolygroupLayers).Array.ArrayNum == (param_1->PolygroupLayers).Array.ArrayNum)) &&
     ((this->WeightLayers).Array.ArrayNum == (param_1->WeightLayers).Array.ArrayNum)) {
    uVar24 = 0;
    uVar32 = 0;
    uVar30 = 0;
    uVar16 = uVar24;
    uVar20 = uVar24;
    if (0 < iVar21) {
      do {
        uVar27 = (uint)uVar16;
        uVar22 = uVar30;
        if ((int)uVar27 < (this->UVLayers).Array.ArrayNum) {
          uVar22 = ~uVar27 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        this_00 = *(TDynamicMeshOverlay<float,2> **)
                   ((this->UVLayers).Array.AllocatorInstance.Data + uVar20);
        uVar22 = uVar30;
        if ((int)uVar27 < (param_1->UVLayers).Array.ArrayNum) {
          uVar22 = ~uVar27 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        bVar11 = TDynamicMeshOverlay<float,2>::IsSameAs
                           (this_00,*(TDynamicMeshOverlay<float,2> **)
                                     ((param_1->UVLayers).Array.AllocatorInstance.Data + uVar20),
                            param_2);
        if (!bVar11) {
          return false;
        }
        uVar16 = (ulonglong)(uVar27 + 1);
        uVar20 = uVar20 + 8;
      } while ((int)(uVar27 + 1) < (this->UVLayers).Array.ArrayNum);
    }
    uVar22 = 0;
    uVar16 = uVar24;
    uVar20 = uVar24;
    if (0 < (this->NormalLayers).Array.ArrayNum) {
      do {
        uVar14 = (uint)uVar16;
        uVar27 = uVar22;
        if ((int)uVar14 < (this->NormalLayers).Array.ArrayNum) {
          uVar27 = ~uVar14 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        this_01 = *(TDynamicMeshOverlay<float,3> **)
                   ((this->NormalLayers).Array.AllocatorInstance.Data + uVar20);
        uVar27 = uVar22;
        if ((int)uVar14 < (param_1->NormalLayers).Array.ArrayNum) {
          uVar27 = ~uVar14 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        bVar11 = TDynamicMeshOverlay<float,3>::IsSameAs
                           (this_01,*(TDynamicMeshOverlay<float,3> **)
                                     ((param_1->NormalLayers).Array.AllocatorInstance.Data + uVar20)
                            ,param_2);
        if (!bVar11) {
          return false;
        }
        uVar16 = (ulonglong)(uVar14 + 1);
        uVar20 = uVar20 + 8;
      } while ((int)(uVar14 + 1) < (this->NormalLayers).Array.ArrayNum);
    }
    uVar16 = uVar24;
    uVar20 = uVar24;
    if (0 < (this->PolygroupLayers).Array.ArrayNum) {
      do {
        uVar14 = (uint)uVar16;
        uVar27 = uVar22;
        if ((int)uVar14 < (this->PolygroupLayers).Array.ArrayNum) {
          uVar27 = ~uVar14 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        pTVar3 = *(TDynamicMeshTriangleAttribute<int,1> **)
                  ((this->PolygroupLayers).Array.AllocatorInstance.Data + uVar20);
        uVar27 = uVar22;
        if ((int)uVar14 < (param_1->PolygroupLayers).Array.ArrayNum) {
          uVar27 = ~uVar14 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        bVar11 = TDynamicMeshTriangleAttribute<int,1>::IsSameAs
                           (pTVar3,*(TDynamicMeshTriangleAttribute<int,1> **)
                                    ((param_1->PolygroupLayers).Array.AllocatorInstance.Data +
                                    uVar20),param_2);
        if (!bVar11) {
          return false;
        }
        uVar16 = (ulonglong)(uVar14 + 1);
        uVar20 = uVar20 + 8;
      } while ((int)(uVar14 + 1) < (this->PolygroupLayers).Array.ArrayNum);
    }
    uVar16 = uVar24;
    uVar20 = uVar24;
    if (0 < (this->WeightLayers).Array.ArrayNum) {
      do {
        uVar14 = (uint)uVar16;
        uVar27 = uVar22;
        if ((int)uVar14 < (this->WeightLayers).Array.ArrayNum) {
          uVar27 = ~uVar14 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        this_02 = *(TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> **)
                   ((this->WeightLayers).Array.AllocatorInstance.Data + uVar20);
        uVar27 = uVar22;
        if ((int)uVar14 < (param_1->WeightLayers).Array.ArrayNum) {
          uVar27 = ~uVar14 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        bVar11 = TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::IsSameAs
                           (this_02,*(TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>
                                      **)((param_1->WeightLayers).Array.AllocatorInstance.Data +
                                         uVar20),param_2);
        if (!bVar11) {
          return false;
        }
        uVar16 = (ulonglong)(uVar14 + 1);
        uVar20 = uVar20 + 8;
      } while ((int)(uVar14 + 1) < (this->WeightLayers).Array.ArrayNum);
    }
    this_03 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
    pTVar4 = (TDynamicMeshOverlay<float,4> *)(param_1->ColorLayer).Ptr;
    if (((this_03 != (TDynamicMeshOverlay<float,4> *)0x0) ==
         (pTVar4 != (TDynamicMeshOverlay<float,4> *)0x0)) &&
       ((this_03 == (TDynamicMeshOverlay<float,4> *)0x0 ||
        (bVar11 = TDynamicMeshOverlay<float,4>::IsSameAs(this_03,pTVar4,param_2), bVar11)))) {
      pTVar3 = (TDynamicMeshTriangleAttribute<int,1> *)(this->MaterialIDAttrib).Ptr;
      pTVar5 = (TDynamicMeshTriangleAttribute<int,1> *)(param_1->MaterialIDAttrib).Ptr;
      if (((pTVar3 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) ==
           (pTVar5 != (TDynamicMeshTriangleAttribute<int,1> *)0x0)) &&
         ((pTVar3 == (TDynamicMeshTriangleAttribute<int,1> *)0x0 ||
          (bVar11 = TDynamicMeshTriangleAttribute<int,1>::IsSameAs(pTVar3,pTVar5,param_2), bVar11)))
         ) {
        iVar21 = *(int *)&(this->SkinWeightAttributes).field_0x8;
        iVar31 = *(int *)&(this->SkinWeightAttributes).field_0x34;
        if (iVar21 - iVar31 ==
            *(int *)&(param_1->SkinWeightAttributes).field_0x8 -
            *(int *)&(param_1->SkinWeightAttributes).field_0x34) {
          if (iVar21 != iVar31) {
            local_198.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10;
            local_198._padding_._0_4_ = 0;
            pTVar1 = &this->SkinWeightAttributes;
            local_198._padding_._4_4_ = 1;
            local_198.UnvisitedBitMask = 0xffffffff;
            local_198.CurrentBitIndex = 0;
            local_198.BaseBitIndex = 0;
            if (*(int *)&(this->SkinWeightAttributes).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
            }
            local_120 = &param_1->SkinWeightAttributes;
            TStack_170._padding_ =
                 CONCAT44(local_198._padding_._4_4_,(undefined4)local_198._padding_);
            TStack_118.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SkinWeightAttributes).field_0x10
            ;
            uVar27 = *(uint *)&(param_1->SkinWeightAttributes).field_0x28;
            TStack_170.CurrentBitIndex = local_198.CurrentBitIndex;
            TStack_170.UnvisitedBitMask = local_198.UnvisitedBitMask;
            TStack_170.BaseBitIndex = local_198.BaseBitIndex;
            TStack_170._28_4_ = local_198._28_4_;
            TStack_170.Array = local_198.Array;
            uVar16 = uVar24;
            uVar14 = 1;
            uVar25 = uVar22;
            uVar26 = uVar22;
            if (uVar27 != 0) {
              puVar29 = *(uint **)&(param_1->SkinWeightAttributes).field_0x20;
              uVar16 = (ulonglong)uVar27;
              if (puVar29 == (uint *)0x0) {
                puVar29 = (uint *)TStack_118.Array;
              }
              uVar14 = *puVar29;
              uVar20 = uVar24;
              uVar28 = uVar24;
              uVar26 = uVar32;
              uVar25 = uVar32;
              while (uVar14 == 0) {
                iVar21 = (int)uVar20;
                uVar26 = (int)uVar28 + 0x20;
                uVar28 = (ulonglong)uVar26;
                uVar25 = iVar21 + 1;
                uVar20 = (ulonglong)uVar25;
                uVar14 = 1;
                if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
                goto LAB_1434ec7fd;
                uVar14 = puVar29[(longlong)iVar21 + 1];
              }
              uVar14 = -uVar14 & uVar14;
              uVar16 = (ulonglong)uVar14 * 2 + 1;
              lVar33 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              local_128 = (int)lVar33;
              uVar15 = local_128 + -1 + uVar26;
              if ((int)uVar27 < (int)uVar15) {
                uVar15 = uVar27;
              }
              uVar16 = (ulonglong)uVar15;
            }
LAB_1434ec7fd:
            uStack_1f8 = CONCAT44(uVar14,uVar25);
            TStack_118.CurrentBitIndex = (int)uVar16;
            TStack_118.UnvisitedBitMask = 0xffffffff;
            TStack_118._padding_ = uStack_1f8;
            TStack_118._28_4_ = local_94;
            TStack_118.BaseBitIndex = uVar26;
            local_178 = pTVar1;
            if ((local_198.CurrentBitIndex < (local_198.Array)->NumBits) &&
               (iVar21 = local_198.CurrentBitIndex, (int)uVar16 < (int)uVar27)) {
              do {
                if (*(longlong *)(*(longlong *)local_178 + (longlong)iVar21 * 0x18) !=
                    *(longlong *)(*(longlong *)local_120 + (longlong)(int)uVar16 * 0x18)) {
                  return false;
                }
                lVar33 = *(longlong *)(*(longlong *)local_178 + 8 + (longlong)iVar21 * 0x18);
                lVar23 = *(longlong *)(*(longlong *)local_120 + 8 + (longlong)(int)uVar16 * 0x18);
                local_1a8 = lVar33;
                local_1a0 = lVar23;
                if (param_2) {
                  lVar6 = *(longlong *)(lVar23 + 0x10);
                  lVar7 = *(longlong *)(lVar33 + 0x10);
                  if (*(int *)(lVar7 + 0x50) != *(int *)(lVar6 + 0x50)) {
                    return false;
                  }
                  FRefCountVector::IndexIterator::IndexIterator
                            (&local_1d0,(FRefCountVector *)(lVar7 + 0x20),0,
                             *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24));
                  iVar21 = *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24);
                  FRefCountVector::IndexIterator::IndexIterator
                            (&local_d0,(FRefCountVector *)(lVar7 + 0x20),iVar21,iVar21);
                  FRefCountVector::IndexIterator::IndexIterator
                            (&local_1c0,(FRefCountVector *)(lVar6 + 0x20),0,
                             *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24));
                  iVar21 = *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24);
                  FRefCountVector::IndexIterator::IndexIterator
                            (local_c0,(FRefCountVector *)(lVar6 + 0x20),iVar21,iVar21);
                  uVar27 = local_d0._8_4_;
                  iVar21 = local_1d0._12_4_;
                  iVar31 = local_1c0._12_4_;
                  if (local_1d0._8_4_ != local_d0._8_4_) {
                    do {
                      if (local_1c0._8_4_ == local_c0[0]._8_4_) break;
                      psVar34 = (short *)((ulonglong)(local_1c0._8_4_ & 0x1ff) * 0x40 +
                                         *(longlong *)
                                          (*(longlong *)(lVar23 + 0x20) +
                                          (ulonglong)((uint)local_1c0._8_4_ >> 9) * 8));
                      lVar33 = (ulonglong)(local_1d0._8_4_ & 0x1ff) * 0x40 +
                               *(longlong *)
                                (*(longlong *)(lVar33 + 0x20) +
                                (ulonglong)((uint)local_1d0._8_4_ >> 9) * 8);
                      iVar17 = *(int *)(lVar33 + 0x38);
                      if (iVar17 != *(int *)(psVar34 + 0x1c)) {
                        return false;
                      }
                      uVar16 = uVar24;
                      uVar20 = uVar24;
                      if (0 < iVar17) {
                        do {
                          uVar14 = (uint)uVar16;
                          uVar27 = uVar32;
                          if ((int)uVar14 < iVar17) {
                            uVar27 = ~uVar14 >> 0x1f;
                          }
                          if ((uVar27 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            uVar12 = (*pcVar10)();
                            return (bool)uVar12;
                          }
                          lVar23 = lVar33;
                          if (*(longlong *)(lVar33 + 0x30) != 0) {
                            lVar23 = *(longlong *)(lVar33 + 0x30);
                          }
                          psVar18 = psVar34;
                          if (*(short **)(psVar34 + 0x18) != (short *)0x0) {
                            psVar18 = *(short **)(psVar34 + 0x18);
                          }
                          psVar19 = psVar18;
                          while( true ) {
                            if (psVar19 == psVar18 + (longlong)*(int *)(psVar34 + 0x1c) * 2) {
                              return false;
                            }
                            if (*(short *)(uVar20 + lVar23) == *psVar19) break;
                            psVar19 = psVar19 + 2;
                          }
                          uVar27 = (uint)((longlong)psVar19 - (longlong)psVar18 >> 2);
                          if (uVar27 == 0xffffffff) {
                            return false;
                          }
                          uVar26 = uVar32;
                          if ((int)uVar14 < *(int *)(lVar33 + 0x38)) {
                            uVar26 = ~uVar14 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            uVar12 = (*pcVar10)();
                            return (bool)uVar12;
                          }
                          lVar23 = lVar33;
                          if (*(longlong *)(lVar33 + 0x30) != 0) {
                            lVar23 = *(longlong *)(lVar33 + 0x30);
                          }
                          uVar26 = uVar22;
                          if ((int)uVar27 < *(int *)(psVar34 + 0x1c)) {
                            uVar26 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            uVar12 = (*pcVar10)();
                            return (bool)uVar12;
                          }
                          psVar18 = psVar34;
                          if (*(short **)(psVar34 + 0x18) != (short *)0x0) {
                            psVar18 = *(short **)(psVar34 + 0x18);
                          }
                          if (*(short *)(lVar23 + 2 + uVar20) !=
                              psVar18[(longlong)(int)uVar27 * 2 + 1]) {
                            return false;
                          }
                          iVar17 = *(int *)(lVar33 + 0x38);
                          uVar16 = (ulonglong)(uVar14 + 1);
                          uVar20 = uVar20 + 4;
                          uVar27 = local_d0._8_4_;
                          iVar21 = local_1d0._12_4_;
                          iVar31 = local_1c0._12_4_;
                        } while ((int)(uVar14 + 1) < iVar17);
                      }
                      local_1d0._8_4_ = local_1d0._8_4_ + 1;
                      if ((int)local_1d0._8_4_ < iVar21) {
                        do {
                          lVar33 = (ulonglong)(local_1d0._8_4_ & 0x1ff) * 2;
                          if ((*(short *)(lVar33 + *(longlong *)
                                                    (*(longlong *)(local_1d0._0_8_ + 8) +
                                                    (ulonglong)((uint)local_1d0._8_4_ >> 9) * 8)) !=
                               0) && (*(short *)(lVar33 + *(longlong *)
                                                           (*(longlong *)(local_1d0._0_8_ + 8) +
                                                           (ulonglong)((uint)local_1d0._8_4_ >> 9) *
                                                           8)) != -1)) break;
                          local_1d0._8_4_ = local_1d0._8_4_ + 1;
                        } while ((int)local_1d0._8_4_ < iVar21);
                      }
                      local_1c0._8_4_ = local_1c0._8_4_ + 1;
                      if ((int)local_1c0._8_4_ < iVar31) {
                        do {
                          lVar33 = (ulonglong)(local_1c0._8_4_ & 0x1ff) * 2;
                          if ((*(short *)(lVar33 + *(longlong *)
                                                    (*(longlong *)(local_1c0._0_8_ + 8) +
                                                    (ulonglong)((uint)local_1c0._8_4_ >> 9) * 8)) !=
                               0) && (*(short *)(lVar33 + *(longlong *)
                                                           (*(longlong *)(local_1c0._0_8_ + 8) +
                                                           (ulonglong)((uint)local_1c0._8_4_ >> 9) *
                                                           8)) != -1)) break;
                          local_1c0._8_4_ = local_1c0._8_4_ + 1;
                        } while ((int)local_1c0._8_4_ < iVar31);
                      }
                      lVar33 = local_1a8;
                      lVar23 = local_1a0;
                    } while (local_1d0._8_4_ != uVar27);
                  }
                }
                else {
                  local_1b0 = *(int *)(lVar33 + 0x18) * 0x200 + *(int *)(lVar33 + 0x1c);
                  if (local_1b0 != *(int *)(lVar23 + 0x18) * 0x200 + *(int *)(lVar23 + 0x1c)) {
                    return false;
                  }
                  local_res20 = 0;
                  uVar16 = uVar24;
                  if (0 < local_1b0) {
                    do {
                      lVar33 = (uVar16 >> 9) * 8;
                      lVar23 = (ulonglong)((uint)uVar16 & 0x1ff) * 0x40;
                      psVar34 = (short *)(*(longlong *)(*(longlong *)(local_1a0 + 0x20) + lVar33) +
                                         lVar23);
                      lVar23 = *(longlong *)(lVar33 + *(longlong *)(local_1a8 + 0x20)) + lVar23;
                      iVar21 = *(int *)(lVar23 + 0x38);
                      if (iVar21 != *(int *)(psVar34 + 0x1c)) {
                        return false;
                      }
                      uVar16 = uVar24;
                      uVar20 = uVar24;
                      if (0 < iVar21) {
                        do {
                          uVar14 = (uint)uVar16;
                          uVar27 = uVar30;
                          if ((int)uVar14 < iVar21) {
                            uVar27 = ~uVar14 >> 0x1f;
                          }
                          if ((uVar27 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            uVar12 = (*pcVar10)();
                            return (bool)uVar12;
                          }
                          lVar33 = lVar23;
                          if (*(longlong *)(lVar23 + 0x30) != 0) {
                            lVar33 = *(longlong *)(lVar23 + 0x30);
                          }
                          psVar18 = psVar34;
                          if (*(short **)(psVar34 + 0x18) != (short *)0x0) {
                            psVar18 = *(short **)(psVar34 + 0x18);
                          }
                          psVar19 = psVar18;
                          while( true ) {
                            if (psVar19 == psVar18 + (longlong)*(int *)(psVar34 + 0x1c) * 2) {
                              return false;
                            }
                            if (*(short *)(uVar20 + lVar33) == *psVar19) break;
                            psVar19 = psVar19 + 2;
                          }
                          uVar27 = (uint)((longlong)psVar19 - (longlong)psVar18 >> 2);
                          if (uVar27 == 0xffffffff) {
                            return false;
                          }
                          uVar26 = uVar32;
                          if ((int)uVar14 < *(int *)(lVar23 + 0x38)) {
                            uVar26 = ~uVar14 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            uVar12 = (*pcVar10)();
                            return (bool)uVar12;
                          }
                          lVar33 = lVar23;
                          if (*(longlong *)(lVar23 + 0x30) != 0) {
                            lVar33 = *(longlong *)(lVar23 + 0x30);
                          }
                          uVar26 = uVar32;
                          if ((int)uVar27 < *(int *)(psVar34 + 0x1c)) {
                            uVar26 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar10 = (code *)swi(3);
                            uVar12 = (*pcVar10)();
                            return (bool)uVar12;
                          }
                          psVar18 = psVar34;
                          if (*(short **)(psVar34 + 0x18) != (short *)0x0) {
                            psVar18 = *(short **)(psVar34 + 0x18);
                          }
                          if (*(short *)(lVar33 + 2 + uVar20) !=
                              psVar18[(longlong)(int)uVar27 * 2 + 1]) {
                            return false;
                          }
                          iVar21 = *(int *)(lVar23 + 0x38);
                          uVar16 = (ulonglong)(uVar14 + 1);
                          uVar20 = uVar20 + 4;
                        } while ((int)(uVar14 + 1) < iVar21);
                      }
                      local_res20 = local_res20 + 1;
                      uVar16 = (ulonglong)local_res20;
                    } while ((int)local_res20 < local_1b0);
                  }
                }
                TStack_170.UnvisitedBitMask =
                     TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
                TStack_118.UnvisitedBitMask =
                     TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
                if ((TStack_170.Array)->NumBits <= TStack_170.CurrentBitIndex) break;
                uVar16 = (ulonglong)(uint)TStack_118.CurrentBitIndex;
                iVar21 = TStack_170.CurrentBitIndex;
              } while (TStack_118.CurrentBitIndex < (TStack_118.Array)->NumBits);
            }
          }
          iVar21 = *(int *)&(this->MorphTargetAttributes).field_0x8;
          iVar31 = *(int *)&(this->MorphTargetAttributes).field_0x34;
          if (iVar21 - iVar31 ==
              *(int *)&(param_1->MorphTargetAttributes).field_0x8 -
              *(int *)&(param_1->MorphTargetAttributes).field_0x34) {
            if (iVar21 != iVar31) {
              local_150 = &this->MorphTargetAttributes;
              uVar14 = 1;
              uVar30 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
              TStack_148.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)&(this->MorphTargetAttributes).field_0x10
              ;
              uVar16 = uVar24;
              uVar27 = uVar22;
              if (uVar30 != 0) {
                puVar29 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
                uVar16 = (ulonglong)uVar30;
                if (puVar29 == (uint *)0x0) {
                  puVar29 = (uint *)TStack_148.Array;
                }
                uVar26 = *puVar29;
                uVar20 = uVar24;
                uVar28 = uVar24;
                uVar27 = uVar32;
                uVar22 = uVar32;
                while (uVar26 == 0) {
                  iVar21 = (int)uVar20;
                  uVar27 = (int)uVar28 + 0x20;
                  uVar28 = (ulonglong)uVar27;
                  uVar22 = iVar21 + 1;
                  uVar20 = (ulonglong)uVar22;
                  if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
                  goto LAB_1434ecf59;
                  uVar26 = puVar29[(longlong)iVar21 + 1];
                }
                uVar14 = -uVar26 & uVar26;
                uVar16 = (ulonglong)uVar14 * 2 + 1;
                lVar33 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                  }
                }
                uVar26 = (int)lVar33 + -1 + uVar27;
                if ((int)uVar30 < (int)uVar26) {
                  uVar26 = uVar30;
                }
                uVar16 = (ulonglong)uVar26;
              }
LAB_1434ecf59:
              local_f8 = &param_1->MorphTargetAttributes;
              TStack_f0.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)
                   &(param_1->MorphTargetAttributes).field_0x10;
              uStack_1f8 = CONCAT44(uVar14,uVar22);
              uVar30 = *(uint *)&(param_1->MorphTargetAttributes).field_0x28;
              uVar14 = (uint)uVar16;
              TStack_148.CurrentBitIndex = uVar14;
              TStack_148.UnvisitedBitMask = 0xffffffff;
              TStack_148._padding_ = uStack_1f8;
              TStack_148._28_4_ = local_74;
              TStack_148.BaseBitIndex = uVar27;
              uVar22 = uVar32;
              if (uVar30 == 0) {
LAB_1434ed01b:
                iVar21 = (int)uVar24;
                uVar27 = 1;
              }
              else {
                puVar29 = *(uint **)&(param_1->MorphTargetAttributes).field_0x20;
                if (puVar29 == (uint *)0x0) {
                  puVar29 = (uint *)TStack_f0.Array;
                }
                uVar27 = *puVar29;
                uVar20 = uVar24;
                while (iVar21 = (int)uVar24, uVar27 == 0) {
                  iVar31 = (int)uVar20;
                  uVar24 = (ulonglong)(iVar21 + 0x20);
                  uVar32 = iVar31 + 1;
                  uVar20 = (ulonglong)uVar32;
                  uVar22 = uVar30;
                  if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
                  goto LAB_1434ed01b;
                  uVar27 = puVar29[(longlong)iVar31 + 1];
                }
                uVar27 = -uVar27 & uVar27;
                uVar24 = (ulonglong)uVar27 * 2 + 1;
                lVar33 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                  }
                }
                uVar22 = (int)lVar33 + -1 + iVar21;
                if ((int)uVar30 < (int)uVar22) {
                  uVar22 = uVar30;
                }
              }
              uStack_1f8 = CONCAT44(uVar27,uVar32);
              TStack_f0.CurrentBitIndex = uVar22;
              TStack_f0.UnvisitedBitMask = 0xffffffff;
              TStack_f0._padding_ = uStack_1f8;
              TStack_f0._28_4_ = local_54;
              TStack_f0.BaseBitIndex = iVar21;
              if ((int)uVar14 < *(int *)&(this->MorphTargetAttributes).field_0x28) {
                do {
                  if ((TStack_f0.Array)->NumBits <= TStack_f0.CurrentBitIndex) break;
                  plVar2 = (longlong *)
                           (*(longlong *)local_f8 + (longlong)TStack_f0.CurrentBitIndex * 0x18);
                  if (*(longlong *)(*(longlong *)local_150 + (longlong)(int)uVar16 * 0x18) !=
                      *plVar2) {
                    return false;
                  }
                  bVar11 = TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::IsSameAs
                                     (*(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>
                                        **)(*(longlong *)local_150 + 8 +
                                           (longlong)(int)uVar14 * 0x18),
                                      (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>
                                       *)plVar2[1],param_2);
                  if (!bVar11) {
                    return false;
                  }
                  TStack_148.UnvisitedBitMask =
                       TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
                  TStack_f0.UnvisitedBitMask =
                       TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
                  uVar16 = (ulonglong)(uint)TStack_148.CurrentBitIndex;
                  uVar14 = TStack_148.CurrentBitIndex;
                } while (TStack_148.CurrentBitIndex < (TStack_148.Array)->NumBits);
              }
            }
            pTVar8 = (this->BoneNameAttrib).Ptr;
            if (((pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) ==
                 ((param_1->BoneNameAttrib).Ptr !=
                 (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) &&
               ((pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0 ||
                ((cVar13 = (**(code **)(pTVar8->_padding_ + 0xd8))(), cVar13 != '\0' &&
                 (pTVar9 = (this->BoneParentIndexAttrib).Ptr,
                 cVar13 = (**(code **)(pTVar9->_padding_ + 0xd8))
                                    (pTVar9,(param_1->BoneParentIndexAttrib).Ptr), cVar13 != '\0')))
                ))) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// IsSameBoneAttributesAs @ 1434eeae0

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSameBoneAttributesAs
          (FDynamicMeshAttributeSet *this,FDynamicMeshAttributeSet *param_1)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar2;
  char cVar3;
  
  pTVar1 = (this->BoneNameAttrib).Ptr;
  if ((pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) ==
      ((param_1->BoneNameAttrib).Ptr !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      return true;
    }
    cVar3 = (**(code **)(pTVar1->_padding_ + 0xd8))();
    if (cVar3 != '\0') {
      pTVar2 = (this->BoneParentIndexAttrib).Ptr;
      cVar3 = (**(code **)(pTVar2->_padding_ + 0xd8))(pTVar2,(param_1->BoneParentIndexAttrib).Ptr);
      return cVar3 != '\0';
    }
  }
  return false;
}

// IsSeamEdge @ 1434f1610

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSeamEdge(FDynamicMeshAttributeSet *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TDynamicMeshOverlay<float,4> *this_00;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->UVLayers).Array.ArrayNum;
  pFVar5 = (this->UVLayers).Array.AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->UVLayers).Array.ArrayNum != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    bVar4 = TDynamicMeshOverlay<float,2>::IsSeamEdge
                      (*(TDynamicMeshOverlay<float,2> **)pFVar5,param_1,(bool *)0x0);
    if (bVar4) {
      return true;
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->NormalLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->NormalLayers).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    bVar4 = TDynamicMeshOverlay<float,3>::IsSeamEdge
                      (*(TDynamicMeshOverlay<float,3> **)pFVar5,param_1,(bool *)0x0);
    if (bVar4) {
      return true;
    }
    pFVar5 = pFVar5 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 == (TDynamicMeshOverlay<float,4> *)0x0) {
    return false;
  }
  bVar4 = TDynamicMeshOverlay<float,4>::IsSeamEdge(this_00,param_1,(bool *)0x0);
  return bVar4;
}

// IsSeamEdge @ 1434f1770

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSeamEdge
          (FDynamicMeshAttributeSet *this,int param_1,bool *param_2,bool *param_3,bool *param_4,
          bool *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TDynamicMeshOverlay<float,4> *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res18 [8];
  bool *local_res20;
  
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  *param_2 = false;
  iVar3 = *piVar1;
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  local_res20 = param_3;
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar2) break;
    bVar5 = TDynamicMeshOverlay<float,2>::IsSeamEdge
                      (*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1,(bool *)0x0);
    if (bVar5) {
      *param_2 = true;
    }
    pFVar9 = pFVar9 + 8;
  }
  iVar3 = (this->NormalLayers).Array.ArrayNum;
  if (iVar3 != 0) {
    if ((iVar3 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = TDynamicMeshOverlay<float,3>::IsSeamEdge
                      (*(TDynamicMeshOverlay<float,3> **)
                        (this->NormalLayers).Array.AllocatorInstance.Data,param_1,(bool *)0x0);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1434f1897;
    }
  }
  bVar5 = false;
LAB_1434f1897:
  uVar8 = 1;
  *local_res20 = bVar5;
  *param_5 = false;
  if (1 < (this->NormalLayers).Array.ArrayNum) {
    lVar10 = 8;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->NormalLayers).Array.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = TDynamicMeshOverlay<float,3>::IsSeamEdge
                        (*(TDynamicMeshOverlay<float,3> **)
                          ((this->NormalLayers).Array.AllocatorInstance.Data + lVar10),param_1,
                         (bool *)0x0);
      if (bVar5) {
        *param_5 = true;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < (this->NormalLayers).Array.ArrayNum);
  }
  *param_4 = false;
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if ((this_00 != (TDynamicMeshOverlay<float,4> *)0x0) &&
     (bVar5 = TDynamicMeshOverlay<float,4>::IsSeamEdge(this_00,param_1,(bool *)0x0), bVar5)) {
    *param_4 = true;
  }
  if ((((*param_2 == false) && (*local_res20 == false)) && (*param_4 == false)) &&
     (*param_5 == false)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

// IsSeamEdge @ 1434f19a0

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSeamEdge
          (FDynamicMeshAttributeSet *this,int param_1,bool *param_2,bool *param_3,bool *param_4)

{
  undefined1 uVar1;
  char local_res8;
  
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  if ((*param_3 == false) && (local_res8 == '\0')) {
    *param_3 = false;
    return (bool)uVar1;
  }
  *param_3 = true;
  return (bool)uVar1;
}

// IsSeamEndEdge @ 1434f3ba0

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSeamEndEdge(FDynamicMeshAttributeSet *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TDynamicMeshOverlay<float,4> *this_00;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->UVLayers).Array.ArrayNum;
  pFVar5 = (this->UVLayers).Array.AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->UVLayers).Array.ArrayNum != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    bVar4 = TDynamicMeshOverlay<float,2>::IsSeamEndEdge
                      (*(TDynamicMeshOverlay<float,2> **)pFVar5,param_1);
    if (bVar4) {
      return true;
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->NormalLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->NormalLayers).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    bVar4 = TDynamicMeshOverlay<float,3>::IsSeamEndEdge
                      (*(TDynamicMeshOverlay<float,3> **)pFVar5,param_1);
    if (bVar4) {
      return true;
    }
    pFVar5 = pFVar5 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 == (TDynamicMeshOverlay<float,4> *)0x0) {
    return false;
  }
  bVar4 = TDynamicMeshOverlay<float,4>::IsSeamEndEdge(this_00,param_1);
  return bVar4;
}

// IsSeamIntersectionVertex @ 1434f4480

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSeamIntersectionVertex
          (FDynamicMeshAttributeSet *this,int param_1)

{
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  TDynamicMeshOverlay<float,4> *this_02;
  TDynamicVector<int,512> *pTVar1;
  bool bVar2;
  FSmallListSet *pFVar3;
  int iVar4;
  int iVar5;
  FSmallListSet *pFVar6;
  undefined1 local_res18 [16];
  undefined1 local_88 [16];
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 local_60 [16];
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  
  iVar5 = (this->UVLayers).Array.ArrayNum;
  local_88._8_8_ = &(this->UVLayers).Array.ArrayNum;
  pFVar6 = (FSmallListSet *)(this->UVLayers).Array.AllocatorInstance.Data;
  local_78 = iVar5;
  pTVar1 = &pFVar6->ListHeads;
  local_50 = iVar5;
  iStack_4c = iStack_74;
  local_88._0_8_ = pFVar6;
  local_60._0_8_ = pFVar6;
  local_60._8_8_ = local_88._8_8_;
  while( true ) {
    if (*(int *)local_60._8_8_ != iVar5) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar6 == (FSmallListSet *)(&pTVar1->CurBlock + (longlong)iVar5 * 2)) {
      iVar5 = (this->NormalLayers).Array.ArrayNum;
      local_88._8_8_ = &(this->NormalLayers).Array.ArrayNum;
      local_50 = iVar5;
      pFVar6 = (FSmallListSet *)(this->NormalLayers).Array.AllocatorInstance.Data;
      pTVar1 = &pFVar6->ListHeads;
      local_78 = iVar5;
      iStack_74 = iStack_4c;
      local_88._0_8_ = pFVar6;
      local_60._0_8_ = pFVar6;
      local_60._8_8_ = local_88._8_8_;
      while( true ) {
        if (*(int *)local_88._8_8_ != iVar5) {
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar6 == (FSmallListSet *)(&pTVar1->CurBlock + (longlong)iVar5 * 2)) break;
        this_01 = *(TDynamicMeshOverlay<float,3> **)&pFVar6->ListHeads;
        iVar4 = 0;
        pFVar3 = &this_01->ParentMesh->VertexEdgeLists;
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  ((BaseValueIterator *)local_60,pFVar3,param_1,false);
        while ((((FSmallListSet *)local_60._0_8_ != pFVar3 || (local_60._8_4_ != param_1)) ||
               ((local_48 != -1 || (local_44 != -1))))) {
          bVar2 = TDynamicMeshOverlay<float,3>::IsSeamEdge(this_01,local_40,(bool *)0x0);
          iVar4 = iVar4 + (uint)bVar2;
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_60);
        }
        if (iVar4 == 1) {
          return true;
        }
        if (2 < iVar4) {
          return true;
        }
        pFVar6 = (FSmallListSet *)&(pFVar6->ListHeads).Blocks;
      }
      this_02 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
      if (this_02 != (TDynamicMeshOverlay<float,4> *)0x0) {
        pFVar6 = &this_02->ParentMesh->VertexEdgeLists;
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  ((BaseValueIterator *)local_60,pFVar6,param_1,false);
        iVar5 = 0;
        while (((((FSmallListSet *)local_60._0_8_ != pFVar6 || (local_60._8_4_ != param_1)) ||
                (local_48 != -1)) || (local_44 != -1))) {
          bVar2 = TDynamicMeshOverlay<float,4>::IsSeamEdge(this_02,local_40,(bool *)0x0);
          iVar5 = iVar5 + (uint)bVar2;
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_60);
        }
        if (iVar5 == 1) {
          return true;
        }
        if (2 < iVar5) {
          return true;
        }
      }
      return false;
    }
    this_00 = *(TDynamicMeshOverlay<float,2> **)&pFVar6->ListHeads;
    iVar4 = 0;
    pFVar3 = &this_00->ParentMesh->VertexEdgeLists;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              ((BaseValueIterator *)local_88,pFVar3,param_1,false);
    while ((((FSmallListSet *)local_88._0_8_ != pFVar3 || (local_88._8_4_ != param_1)) ||
           ((local_70 != -1 || (local_6c != -1))))) {
      bVar2 = TDynamicMeshOverlay<float,2>::IsSeamEdge(this_00,local_68,(bool *)0x0);
      iVar4 = iVar4 + (uint)bVar2;
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_88);
    }
    if ((iVar4 == 1) || (2 < iVar4)) break;
    pFVar6 = (FSmallListSet *)&(pFVar6->ListHeads).Blocks;
  }
  return true;
}

// IsSeamVertex @ 1434f4fc0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::IsSeamVertex
          (FDynamicMeshAttributeSet *this,int param_1,bool param_2)

{
  int iVar1;
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  TDynamicMeshOverlay<float,4> *this_02;
  TDynamicVector<int,512> *pTVar2;
  bool bVar3;
  FSmallListSet *pFVar4;
  FSmallListSet *pFVar5;
  undefined1 local_res20 [8];
  undefined1 local_88 [16];
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  ulonglong local_68;
  undefined1 local_60 [16];
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  pFVar5 = (FSmallListSet *)(this->UVLayers).Array.AllocatorInstance.Data;
  local_88._8_8_ = &(this->UVLayers).Array.ArrayNum;
  iVar1 = *(int *)local_88._8_8_;
  local_78 = iVar1;
  pTVar2 = &pFVar5->ListHeads;
  local_50 = iVar1;
  iStack_4c = iStack_74;
  local_88._0_8_ = pFVar5;
  local_60._0_8_ = pFVar5;
  local_60._8_8_ = local_88._8_8_;
  while( true ) {
    if (*(int *)local_60._8_8_ != iVar1) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar5 == (FSmallListSet *)(&pTVar2->CurBlock + (longlong)iVar1 * 2)) break;
    this_00 = *(TDynamicMeshOverlay<float,2> **)&pFVar5->ListHeads;
    pFVar4 = &this_00->ParentMesh->VertexEdgeLists;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              ((BaseValueIterator *)local_88,pFVar4,param_1,false);
    while ((((FSmallListSet *)local_88._0_8_ != pFVar4 || (local_88._8_4_ != param_1)) ||
           ((local_70 != -1 || (local_6c != -1))))) {
      if (((param_2) ||
          (*(int *)(*(longlong *)
                     ((this_00->ParentMesh->Edges).Blocks.AllocatorInstance.Data +
                     ((local_68 & 0xffffffff) >> 9) * 8) + 0xc +
                   (ulonglong)((uint)local_68 & 0x1ff) * 0x10) != -1)) &&
         (bVar3 = TDynamicMeshOverlay<float,2>::IsSeamEdge(this_00,(uint)local_68,(bool *)0x0),
         bVar3)) {
        return true;
      }
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_88);
    }
    pFVar5 = (FSmallListSet *)&(pFVar5->ListHeads).Blocks;
  }
  iVar1 = (this->NormalLayers).Array.ArrayNum;
  local_88._8_8_ = &(this->NormalLayers).Array.ArrayNum;
  local_50 = iVar1;
  pFVar5 = (FSmallListSet *)(this->NormalLayers).Array.AllocatorInstance.Data;
  pTVar2 = &pFVar5->ListHeads;
  local_78 = iVar1;
  iStack_74 = iStack_4c;
  local_88._0_8_ = pFVar5;
  local_60._0_8_ = pFVar5;
  local_60._8_8_ = local_88._8_8_;
  while( true ) {
    if (*(int *)local_88._8_8_ != iVar1) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar5 == (FSmallListSet *)(&pTVar2->CurBlock + (longlong)iVar1 * 2)) break;
    this_01 = *(TDynamicMeshOverlay<float,3> **)&pFVar5->ListHeads;
    pFVar4 = &this_01->ParentMesh->VertexEdgeLists;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              ((BaseValueIterator *)local_60,pFVar4,param_1,false);
    while ((((FSmallListSet *)local_60._0_8_ != pFVar4 || (local_60._8_4_ != param_1)) ||
           ((local_48 != -1 || (local_44 != -1))))) {
      if (((param_2) ||
          (*(int *)(*(longlong *)
                     ((this_01->ParentMesh->Edges).Blocks.AllocatorInstance.Data +
                     ((local_40 & 0xffffffff) >> 9) * 8) + 0xc +
                   (ulonglong)((uint)local_40 & 0x1ff) * 0x10) != -1)) &&
         (bVar3 = TDynamicMeshOverlay<float,3>::IsSeamEdge(this_01,(uint)local_40,(bool *)0x0),
         bVar3)) {
        return true;
      }
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_60);
    }
    pFVar5 = (FSmallListSet *)&(pFVar5->ListHeads).Blocks;
  }
  this_02 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_02 != (TDynamicMeshOverlay<float,4> *)0x0) {
    pFVar5 = &this_02->ParentMesh->VertexEdgeLists;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              ((BaseValueIterator *)local_60,pFVar5,param_1,false);
    while (((((FSmallListSet *)local_60._0_8_ != pFVar5 || (local_60._8_4_ != param_1)) ||
            (local_48 != -1)) || (local_44 != -1))) {
      if (((param_2) ||
          (*(int *)(*(longlong *)
                     ((this_02->ParentMesh->Edges).Blocks.AllocatorInstance.Data +
                     ((local_40 & 0xffffffff) >> 9) * 8) + 0xc +
                   (ulonglong)((uint)local_40 & 0x1ff) * 0x10) != -1)) &&
         (bVar3 = TDynamicMeshOverlay<float,4>::IsSeamEdge(this_02,(uint)local_40,(bool *)0x0),
         bVar3)) {
        return true;
      }
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_60);
    }
  }
  return false;
}

// NumNormalLayers @ 1434fb970

int __thiscall
UE::Geometry::FDynamicMeshAttributeSet::NumNormalLayers(FDynamicMeshAttributeSet *this)

{
  return (this->NormalLayers).Array.ArrayNum;
}

// NumPolygroupLayers @ 1434fb980

int __thiscall
UE::Geometry::FDynamicMeshAttributeSet::NumPolygroupLayers(FDynamicMeshAttributeSet *this)

{
  return (this->PolygroupLayers).Array.ArrayNum;
}

// NumUVLayers @ 1434fb990

int __thiscall UE::Geometry::FDynamicMeshAttributeSet::NumUVLayers(FDynamicMeshAttributeSet *this)

{
  return (this->UVLayers).Array.ArrayNum;
}

// NumWeightLayers @ 1434fb9a0

int __thiscall
UE::Geometry::FDynamicMeshAttributeSet::NumWeightLayers(FDynamicMeshAttributeSet *this)

{
  return (this->WeightLayers).Array.ArrayNum;
}

// OnCollapseEdge @ 1435007c0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnCollapseEdge
          (FDynamicMeshAttributeSet *this,FEdgeCollapseInfo *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *local_res8;
  FScriptContainerElement *local_res18 [2];
  
  puVar8 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar8 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar8 == puVar2) break;
    (**(code **)(*(longlong *)*puVar8 + 0xa0))((longlong *)*puVar8,param_1);
    puVar8 = puVar8 + 1;
  }
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnCollapseEdge(*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar9 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    pFVar7 = local_res8;
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnCollapseEdge(*(TDynamicMeshOverlay<float,3> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnCollapseEdge(this_00,param_1);
  }
  pTVar5 = (pFVar7->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0xa0))(pTVar5,param_1);
  }
  iVar4 = (pFVar7->PolygroupLayers).Array.ArrayNum;
  pFVar9 = (pFVar7->PolygroupLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    local_res18[0] = pFVar9;
    if ((pFVar7->PolygroupLayers).Array.ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)local_res18[0] + 0xa0))(*(longlong **)local_res18[0],param_1);
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (pFVar7->WeightLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar7->WeightLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar9 + 0xa0))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnFlipEdge @ 1435043d0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnFlipEdge
          (FDynamicMeshAttributeSet *this,FEdgeFlipInfo *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *local_res8;
  FScriptContainerElement *local_res18 [2];
  
  puVar8 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar8 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar8 == puVar2) break;
    (**(code **)(*(longlong *)*puVar8 + 0x98))((longlong *)*puVar8,param_1);
    puVar8 = puVar8 + 1;
  }
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnFlipEdge(*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar9 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    pFVar7 = local_res8;
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnFlipEdge(*(TDynamicMeshOverlay<float,3> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnFlipEdge(this_00,param_1);
  }
  pTVar5 = (pFVar7->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0x98))(pTVar5,param_1);
  }
  iVar4 = (pFVar7->PolygroupLayers).Array.ArrayNum;
  pFVar9 = (pFVar7->PolygroupLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    local_res18[0] = pFVar9;
    if ((pFVar7->PolygroupLayers).Array.ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)local_res18[0] + 0x98))(*(longlong **)local_res18[0],param_1);
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (pFVar7->WeightLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar7->WeightLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar9 + 0x98))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnMergeEdges @ 143506c90

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnMergeEdges
          (FDynamicMeshAttributeSet *this,FMergeEdgesInfo *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *local_res8;
  FScriptContainerElement *local_res18 [2];
  
  puVar8 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar8 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar8 == puVar2) break;
    (**(code **)(*(longlong *)*puVar8 + 0xb0))((longlong *)*puVar8,param_1);
    puVar8 = puVar8 + 1;
  }
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnMergeEdges(*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar9 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    pFVar7 = local_res8;
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnMergeEdges(*(TDynamicMeshOverlay<float,3> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnMergeEdges(this_00,param_1);
  }
  pTVar5 = (pFVar7->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0xb0))(pTVar5,param_1);
  }
  iVar4 = (pFVar7->PolygroupLayers).Array.ArrayNum;
  pFVar9 = (pFVar7->PolygroupLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    local_res18[0] = pFVar9;
    if ((pFVar7->PolygroupLayers).Array.ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)local_res18[0] + 0xb0))(*(longlong **)local_res18[0],param_1);
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (pFVar7->WeightLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar7->WeightLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar9 + 0xb0))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnMergeVertices @ 143508820

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnMergeVertices
          (FDynamicMeshAttributeSet *this,FMergeVerticesInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  bool bVar6;
  TOptional<DynamicMeshInfo::FMergeEdgesInfo> *pTVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5 [5];
  FScriptContainerElement *local_c0;
  int *piStack_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  int *piStack_a0;
  undefined8 local_98;
  FScriptContainerElement *local_90;
  int *piStack_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  int *piStack_70;
  int local_68;
  undefined4 uStack_64;
  FScriptContainerElement *local_60;
  int *piStack_58;
  undefined8 local_50;
  
  if ((param_1->EdgeCollapseInfo).bIsSet == false) {
LAB_143508905:
    if ((param_1->MergeEdgesInfo).bIsSet != false) {
      local_res18[0] = 0;
      bVar6 = `UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices'
              ::__l6::<lambda_2>::operator()(local_res18);
      if (!bVar6) {
        pcVar10 = *(code **)(this->_padding_ + 0x58);
        if ((param_1->MergeEdgesInfo).bIsSet == false) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar6) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pTVar7 = &param_1->MergeEdgesInfo;
        goto LAB_143508899;
      }
    }
    puVar8 = (undefined8 *)this->_padding_;
    iVar4 = (int)this->_padding_;
    puVar3 = puVar8 + iVar4;
    while( true ) {
      if ((int)this->_padding_ != iVar4) {
        `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (puVar8 == puVar3) break;
      (**(code **)(*(longlong *)*puVar8 + 0xb8))((longlong *)*puVar8,param_1);
      puVar8 = puVar8 + 1;
    }
  }
  else {
    local_res10[0] = 0;
    bVar6 = `UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::OnMergeVertices'::
            __l3::<lambda_1>::operator()(local_res10);
    if (bVar6) goto LAB_143508905;
    pcVar10 = *(code **)(this->_padding_ + 0x48);
    if ((param_1->EdgeCollapseInfo).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar7 = (TOptional<DynamicMeshInfo::FMergeEdgesInfo> *)&param_1->EdgeCollapseInfo;
LAB_143508899:
    (*pcVar10)(this,pTVar7);
  }
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  local_b0 = CONCAT44(uStack_64,iVar4);
  local_c0 = pFVar9;
  piStack_b8 = piVar1;
  local_78 = pFVar9;
  piStack_70 = piVar1;
  local_68 = iVar4;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_c8);
    }
    if (pFVar9 == pFVar2) break;
    TDynamicMeshOverlay<float,2>::OnMergeVertices(*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (this->NormalLayers).Array.ArrayNum;
  piVar1 = &(this->NormalLayers).Array.ArrayNum;
  local_b0 = CONCAT44(local_b0._4_4_,iVar4);
  pFVar9 = (this->NormalLayers).Array.AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  local_98 = local_b0;
  local_c0 = pFVar9;
  piStack_b8 = piVar1;
  local_a8 = pFVar9;
  piStack_a0 = piVar1;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_c7);
    }
    if (pFVar9 == pFVar2) break;
    TDynamicMeshOverlay<float,3>::OnMergeVertices(*(TDynamicMeshOverlay<float,3> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnMergeVertices(this_00,param_1);
  }
  pTVar5 = (this->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0xb8))(pTVar5,param_1);
  }
  iVar4 = (this->PolygroupLayers).Array.ArrayNum;
  piVar1 = &(this->PolygroupLayers).Array.ArrayNum;
  pFVar9 = (this->PolygroupLayers).Array.AllocatorInstance.Data;
  local_98 = CONCAT44(local_98._4_4_,iVar4);
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  local_80 = local_98;
  local_a8 = pFVar9;
  piStack_a0 = piVar1;
  local_90 = pFVar9;
  piStack_88 = piVar1;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_c6);
    }
    if (pFVar9 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar9 + 0xb8))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (this->WeightLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->WeightLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  local_80 = CONCAT44(local_80._4_4_,iVar4);
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  local_50 = local_80;
  local_90 = pFVar9;
  piStack_88 = piVar1;
  local_60 = pFVar9;
  piStack_58 = piVar1;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c5);
    }
    if (pFVar9 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar9 + 0xb8))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnNewTriangle @ 143508cc0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnNewTriangle
          (FDynamicMeshAttributeSet *this,int param_1,bool param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshTriangleAttribute<int,1> *this_01;
  longlong lVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  FDynamicMeshAttributeSet *local_res8;
  undefined1 local_res20 [8];
  
  puVar10 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar10 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (puVar10 == puVar2) break;
    (**(code **)(*(longlong *)*puVar10 + 0x68))((longlong *)*puVar10,param_1,param_2);
    puVar10 = puVar10 + 1;
  }
  pFVar11 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
      ;
    }
    if (pFVar11 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::InitializeNewTriangle
              (*(TDynamicMeshOverlay<float,2> **)pFVar11,param_1);
    pFVar11 = pFVar11 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar11 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
      ;
    }
    pFVar7 = local_res8;
    if (pFVar11 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::InitializeNewTriangle
              (*(TDynamicMeshOverlay<float,3> **)pFVar11,param_1);
    pFVar11 = pFVar11 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::InitializeNewTriangle(this_00,param_1);
  }
  this_01 = (TDynamicMeshTriangleAttribute<int,1> *)(pFVar7->MaterialIDAttrib).Ptr;
  if (this_01 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
    local_res8 = (FDynamicMeshAttributeSet *)((ulonglong)local_res8 & 0xffffffff00000000);
    TDynamicMeshTriangleAttribute<int,1>::SetNewValue(this_01,param_1,(int *)&local_res8);
  }
  pFVar11 = (pFVar7->PolygroupLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar7->PolygroupLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar11 == pFVar3) break;
    lVar5 = *(longlong *)pFVar11;
    iVar8 = *(int *)(lVar5 + 0x18);
    uVar9 = iVar8 * 0x200 + *(int *)(lVar5 + 0x1c);
    if (param_1 == uVar9) {
      if (*(int *)(lVar5 + 0x1c) == 0x200) {
        if (iVar8 == *(int *)(lVar5 + 0x28) + -1) {
          TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)(lVar5 + 0x18));
        }
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
        iVar8 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x1c) = 0;
      }
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar8 * 8) +
       (longlong)*(int *)(lVar5 + 0x1c) * 4) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      pFVar11 = pFVar11 + 8;
    }
    else if (uVar9 < (uint)param_1) {
      TDynamicVector<int,512>::Resize((TDynamicVector<int,512> *)(lVar5 + 0x18),param_1);
      iVar8 = *(int *)(lVar5 + 0x1c);
      if (iVar8 == 0x200) {
        if (*(int *)(lVar5 + 0x18) == *(int *)(lVar5 + 0x28) + -1) {
          TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)(lVar5 + 0x18));
        }
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
        iVar8 = 0;
        *(undefined4 *)(lVar5 + 0x1c) = 0;
      }
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)*(int *)(lVar5 + 0x18) * 8) +
       (longlong)iVar8 * 4) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      pFVar11 = pFVar11 + 8;
    }
    else {
      pFVar11 = pFVar11 + 8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)((uint)param_1 >> 9) * 8) +
       (ulonglong)(param_1 & 0x1ff) * 4) = 0;
    }
  }
  return;
}

// OnNewVertex @ 143509170

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnNewVertex
          (FDynamicMeshAttributeSet *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined7 in_register_00000081;
  ulonglong uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FDynamicMeshAttributeSet *local_res8;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FScriptContainerElement *local_98;
  int *piStack_90;
  undefined8 local_88;
  FScriptContainerElement *local_80;
  int *piStack_78;
  int local_70;
  undefined4 uStack_6c;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar18 = CONCAT71(in_register_00000081,param_2);
  puVar16 = (undefined8 *)this->_padding_;
  iVar15 = (int)this->_padding_;
  puVar2 = puVar16 + iVar15;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      uVar18 = (ulonglong)param_2;
    }
    if (puVar16 == puVar2) break;
    (**(code **)(*(longlong *)*puVar16 + 0x58))((longlong *)*puVar16,param_1,uVar18);
    uVar18 = (ulonglong)param_2;
    puVar16 = puVar16 + 1;
  }
  pFVar23 = (this->WeightLayers).Array.AllocatorInstance.Data;
  piStack_90 = &(this->WeightLayers).Array.ArrayNum;
  iVar15 = *piStack_90;
  iVar17 = 0;
  pFVar1 = pFVar23 + (longlong)iVar15 * 8;
  local_88 = CONCAT44(uStack_6c,iVar15);
  local_98 = pFVar23;
  local_80 = pFVar23;
  piStack_78 = piStack_90;
  local_70 = iVar15;
  while( true ) {
    if (*piStack_90 != iVar15) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    pFVar9 = local_res8;
    if (pFVar23 == pFVar1) break;
    lVar13 = *(longlong *)pFVar23;
    iVar12 = *(int *)(lVar13 + 0x18);
    uVar14 = iVar12 * 0x200 + *(int *)(lVar13 + 0x1c);
    if (param_1 == uVar14) {
      if (*(int *)(lVar13 + 0x1c) == 0x200) {
        if (iVar12 == *(int *)(lVar13 + 0x28) + -1) {
          TDynamicVector<float,512>::AddAllocatedBlock((TDynamicVector<float,512> *)(lVar13 + 0x18))
          ;
        }
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
        iVar12 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x1c) = 0;
      }
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (longlong)iVar12 * 8) +
       (longlong)*(int *)(lVar13 + 0x1c) * 4) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      pFVar23 = pFVar23 + 8;
    }
    else if (uVar14 < (uint)param_1) {
      TDynamicVector<float,512>::Resize((TDynamicVector<float,512> *)(lVar13 + 0x18),param_1);
      iVar12 = *(int *)(lVar13 + 0x1c);
      if (*(int *)(lVar13 + 0x1c) == 0x200) {
        if (*(int *)(lVar13 + 0x18) == *(int *)(lVar13 + 0x28) + -1) {
          TDynamicVector<float,512>::AddAllocatedBlock((TDynamicVector<float,512> *)(lVar13 + 0x18))
          ;
        }
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
        *(undefined4 *)(lVar13 + 0x1c) = 0;
        iVar12 = iVar17;
      }
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (longlong)*(int *)(lVar13 + 0x18) * 8) +
       (longlong)iVar12 * 4) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      pFVar23 = pFVar23 + 8;
    }
    else {
      pFVar23 = pFVar23 + 8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (ulonglong)((uint)param_1 >> 9) * 8) +
       (ulonglong)(param_1 & 0x1ff) * 4) = 0;
    }
  }
  uStack_c4 = 1;
  local_c0 = &(local_res8->GenericAttributes).field_0x10;
  iVar15 = *(int *)&(local_res8->GenericAttributes).field_0x28;
  local_d0 = &local_res8->GenericAttributes;
  iStack_b4 = iVar17;
  local_b0 = iVar17;
  if (iVar15 != 0) {
    puVar20 = *(uint **)&(local_res8->GenericAttributes).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_c0;
    }
    uVar14 = *puVar20;
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar17;
      local_b0 = local_b0 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1435093b4;
      uVar14 = puVar20[lVar13 + 1];
    }
    uStack_c4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_c4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a0 = (int)lVar13;
    iStack_b4 = local_a0 + -1 + local_b0;
    if (iVar15 < iStack_b4) {
LAB_1435093b4:
      iStack_b4 = iVar15;
    }
  }
  puVar21 = &(local_res8->GenericAttributes).field_0x10;
  uVar14 = *(uint *)&(local_res8->GenericAttributes).field_0x28;
  iStack_a8 = *(int *)&(local_res8->GenericAttributes).field_0x8 -
              *(int *)&(local_res8->GenericAttributes).field_0x34;
  TStack_60._padding_ = CONCAT44(uStack_c4,iVar17);
  uStack_b8 = 0xffffffff;
  uVar22 = uVar14 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_b4;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_b4;
  TStack_60.BaseBitIndex = local_b0;
  uStack_40 = CONCAT44(uStack_a4,iStack_a8);
  iStack_c8 = iVar17;
  iStack_ac = iStack_b4;
  local_98 = pFVar23;
  local_68 = local_d0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if (((int)uVar14 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(pFVar9->GenericAttributes).field_0x28;
  if (uVar14 != uVar4) {
    puVar5 = *(undefined1 **)&(pFVar9->GenericAttributes).field_0x20;
    puVar19 = puVar21;
    if (puVar5 != (undefined1 *)0x0) {
      puVar19 = puVar5;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1435094bb;
      uVar14 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1435094bb:
  while( true ) {
    pTVar10 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) &&
       (pTVar10 == &pFVar9->GenericAttributes)) break;
    plVar6 = *(longlong **)(*(longlong *)pTVar10 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar6 + 0x58))(plVar6,param_1,param_2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (0 < (pFVar9->SculptLayers).Layers.Array.ArrayNum) {
    lVar13 = *(longlong *)
              ((pFVar9->ParentMesh->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8);
    uVar14 = param_1 * 3;
    puVar2 = (undefined8 *)(lVar13 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    uVar8 = puVar2[1];
    uVar3 = *(undefined8 *)(lVar13 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    lVar13 = *(longlong *)(pFVar9->SculptLayers).Layers.Array.AllocatorInstance.Data;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (ulonglong)(uVar14 >> 9) * 8) +
     (ulonglong)(uVar14 & 0x1ff) * 8) = *puVar2;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
     (ulonglong)(uVar14 + 1 & 0x1ff) * 8) = uVar8;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (ulonglong)(uVar14 + 2 >> 9) * 8) +
     (ulonglong)(uVar14 + 2 & 0x1ff) * 8) = uVar3;
  }
  return;
}

// OnPokeTriangle @ 14350b270

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnPokeTriangle
          (FDynamicMeshAttributeSet *this,FPokeTriangleInfo *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *local_res8;
  FScriptContainerElement *local_res18 [2];
  
  puVar8 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar8 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar8 == puVar2) break;
    (**(code **)(*(longlong *)*puVar8 + 0xa8))((longlong *)*puVar8,param_1);
    puVar8 = puVar8 + 1;
  }
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnPokeTriangle(*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar9 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    pFVar7 = local_res8;
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnPokeTriangle(*(TDynamicMeshOverlay<float,3> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnPokeTriangle(this_00,param_1);
  }
  pTVar5 = (pFVar7->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0xa8))(pTVar5,param_1);
  }
  iVar4 = (pFVar7->PolygroupLayers).Array.ArrayNum;
  pFVar9 = (pFVar7->PolygroupLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    local_res18[0] = pFVar9;
    if ((pFVar7->PolygroupLayers).Array.ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)local_res18[0] + 0xa8))(*(longlong **)local_res18[0],param_1);
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (pFVar7->WeightLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar7->WeightLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar9 + 0xa8))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnRemoveTriangle @ 14350d420

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnRemoveTriangle(FDynamicMeshAttributeSet *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar5 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar2) break;
    (**(code **)(*(longlong *)*puVar5 + 0x70))((longlong *)*puVar5,param_1);
    puVar5 = puVar5 + 1;
  }
  pFVar6 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnRemoveTriangle(*(TDynamicMeshOverlay<float,2> **)pFVar6,param_1)
    ;
    pFVar6 = pFVar6 + 8;
  }
  pFVar6 = (this->NormalLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->NormalLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnRemoveTriangle(*(TDynamicMeshOverlay<float,3> **)pFVar6,param_1)
    ;
    pFVar6 = pFVar6 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnRemoveTriangle(this_00,param_1);
  }
  return;
}

// OnRemoveVertex @ 14350d600

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnRemoveVertex(FDynamicMeshAttributeSet *this,int param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar11 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar11 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar2) break;
    (**(code **)(*(longlong *)*puVar11 + 0x60))((longlong *)*puVar11,param_1);
    puVar11 = puVar11 + 1;
  }
  iVar14 = 0;
  puVar1 = &(this->GenericAttributes).field_0x10;
  iVar4 = *(int *)&(this->GenericAttributes).field_0x28;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->GenericAttributes).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14350d6de;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = iVar16 + -1 + local_res20;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14350d6de:
  uVar13 = *(uint *)&(this->GenericAttributes).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->GenericAttributes).field_0x8 -
                       *(int *)&(this->GenericAttributes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->GenericAttributes).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->GenericAttributes).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14350d7e0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14350d7e0:
  while( true ) {
    if (*(int *)&(this->GenericAttributes).field_0x8 - *(int *)&(this->GenericAttributes).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar5 = *(longlong **)
              (*(longlong *)&this->GenericAttributes + 8 +
              (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnReverseTriOrientation @ 14350e060

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnReverseTriOrientation
          (FDynamicMeshAttributeSet *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  
  puVar14 = (undefined8 *)this->_padding_;
  iVar6 = (int)this->_padding_;
  puVar2 = puVar14 + iVar6;
  while( true ) {
    if ((int)this->_padding_ != iVar6) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar14 == puVar2) break;
    (**(code **)(*(longlong *)*puVar14 + 0x78))((longlong *)*puVar14,param_1);
    puVar14 = puVar14 + 1;
  }
  pFVar17 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar6 = *piVar1;
  local_res20 = param_1 * 3;
  pFVar3 = pFVar17 + (longlong)iVar6 * 8;
  while( true ) {
    if (*piVar1 != iVar6) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    uVar13 = local_res20;
    if (pFVar17 == pFVar3) break;
    lVar9 = *(longlong *)pFVar17;
    uVar13 = param_1 * 3;
    lVar10 = *(longlong *)(lVar9 + 0x78);
    lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar13 >> 9) * 8);
    uVar7 = *(undefined4 *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 4);
    uVar16 = (ulonglong)(uVar13 + 1 & 0x1ff);
    lVar4 = (ulonglong)(uVar13 + 1 >> 9) * 8;
    uVar15 = (ulonglong)(uVar13 + 2 & 0x1ff);
    lVar5 = (ulonglong)(uVar13 + 2 >> 9) * 8;
    pFVar17 = pFVar17 + 8;
    uVar8 = *(undefined4 *)(*(longlong *)(lVar5 + lVar10) + uVar15 * 4);
    *(undefined4 *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 4) =
         *(undefined4 *)(*(longlong *)(lVar4 + lVar10) + uVar16 * 4);
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + lVar4) + uVar16 * 4) = uVar7;
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + lVar5) + uVar15 * 4) = uVar8;
  }
  iVar6 = (this->NormalLayers).Array.ArrayNum;
  pFVar17 = (this->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar17 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->NormalLayers).Array.ArrayNum != iVar6) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar17 == pFVar3) break;
    lVar9 = *(longlong *)pFVar17;
    lVar10 = *(longlong *)(lVar9 + 0x78);
    lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar13 >> 9) * 8);
    uVar7 = *(undefined4 *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 4);
    uVar16 = (ulonglong)(uVar13 + 1 & 0x1ff);
    lVar4 = (ulonglong)(uVar13 + 1 >> 9) * 8;
    uVar15 = (ulonglong)(uVar13 + 2 & 0x1ff);
    pFVar17 = pFVar17 + 8;
    lVar5 = (ulonglong)(uVar13 + 2 >> 9) * 8;
    uVar8 = *(undefined4 *)(*(longlong *)(lVar5 + lVar10) + uVar15 * 4);
    *(undefined4 *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 4) =
         *(undefined4 *)(*(longlong *)(lVar4 + lVar10) + uVar16 * 4);
    *(undefined4 *)(*(longlong *)(lVar4 + *(longlong *)(lVar9 + 0x78)) + uVar16 * 4) = uVar7;
    *(undefined4 *)(*(longlong *)(lVar5 + *(longlong *)(lVar9 + 0x78)) + uVar15 * 4) = uVar8;
  }
  pTVar12 = (this->ColorLayer).Ptr;
  if (pTVar12 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    lVar9 = *(longlong *)&pTVar12->field_0x78;
    lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar13 >> 9) * 8);
    uVar7 = *(undefined4 *)(lVar10 + (ulonglong)(uVar13 & 0x1ff) * 4);
    uVar16 = (ulonglong)(uVar13 + 1 & 0x1ff);
    lVar4 = (ulonglong)(uVar13 + 1 >> 9) * 8;
    uVar15 = (ulonglong)(uVar13 + 2 & 0x1ff);
    lVar5 = (ulonglong)(uVar13 + 2 >> 9) * 8;
    uVar8 = *(undefined4 *)(*(longlong *)(lVar5 + lVar9) + uVar15 * 4);
    *(undefined4 *)(lVar10 + (ulonglong)(uVar13 & 0x1ff) * 4) =
         *(undefined4 *)(*(longlong *)(lVar4 + lVar9) + uVar16 * 4);
    *(undefined4 *)(*(longlong *)(lVar4 + *(longlong *)&pTVar12->field_0x78) + uVar16 * 4) = uVar7;
    *(undefined4 *)(*(longlong *)(lVar5 + *(longlong *)&pTVar12->field_0x78) + uVar15 * 4) = uVar8;
  }
  return;
}

// OnSplitEdge @ 143511c10

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnSplitEdge
          (FDynamicMeshAttributeSet *this,FEdgeSplitInfo *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *local_res8;
  FScriptContainerElement *local_res18 [2];
  
  puVar8 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar8 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar8 == puVar2) break;
    (**(code **)(*(longlong *)*puVar8 + 0x90))((longlong *)*puVar8,param_1);
    puVar8 = puVar8 + 1;
  }
  pFVar9 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnSplitEdge(*(TDynamicMeshOverlay<float,2> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar9 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    pFVar7 = local_res8;
    if (pFVar9 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnSplitEdge(*(TDynamicMeshOverlay<float,3> **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnSplitEdge(this_00,param_1);
  }
  pTVar5 = (pFVar7->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0x90))(pTVar5,param_1);
  }
  iVar4 = (pFVar7->PolygroupLayers).Array.ArrayNum;
  pFVar9 = (pFVar7->PolygroupLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    local_res18[0] = pFVar9;
    if ((pFVar7->PolygroupLayers).Array.ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)local_res18[0] + 0x90))(*(longlong **)local_res18[0],param_1);
    pFVar9 = pFVar9 + 8;
  }
  pFVar9 = (pFVar7->WeightLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar7->WeightLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar9 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar9 + 0x90))(*(longlong **)pFVar9,param_1);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnSplitVertex @ 143513c30

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::OnSplitVertex
          (FDynamicMeshAttributeSet *this,FVertexSplitInfo *param_1,
          TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FDynamicMeshAttributeSet *pFVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  FDynamicMeshAttributeSet *local_res8;
  FScriptContainerElement *local_res20;
  
  puVar9 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar2 = puVar9 + iVar4;
  local_res8 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (puVar9 == puVar2) break;
    (**(code **)(*(longlong *)*puVar9 + 0xc0))((longlong *)*puVar9,param_1,param_2);
    puVar9 = puVar9 + 1;
  }
  pFVar10 = (this->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(this->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (pFVar10 == pFVar3) break;
    TDynamicMeshOverlay<float,2>::OnSplitVertex
              (*(TDynamicMeshOverlay<float,2> **)pFVar10,param_1,param_2);
    pFVar10 = pFVar10 + 8;
  }
  iVar4 = (local_res8->NormalLayers).Array.ArrayNum;
  pTVar6 = &local_res8->NormalLayers;
  pFVar10 = (local_res8->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pTVar6->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    pFVar8 = local_res8;
    if (pFVar10 == pFVar3) break;
    TDynamicMeshOverlay<float,3>::OnSplitVertex
              (*(TDynamicMeshOverlay<float,3> **)pFVar10,param_1,param_2);
    pFVar10 = pFVar10 + 8;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(local_res8->ColorLayer).Ptr;
  if (this_00 != (TDynamicMeshOverlay<float,4> *)0x0) {
    TDynamicMeshOverlay<float,4>::OnSplitVertex(this_00,param_1,param_2);
  }
  pTVar5 = (pFVar8->MaterialIDAttrib).Ptr;
  if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar5 + 0xc0))(pTVar5,param_1,param_2);
  }
  pFVar10 = (pFVar8->PolygroupLayers).Array.AllocatorInstance.Data;
  piVar1 = &(pFVar8->PolygroupLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (pFVar10 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar10 + 0xc0))(*(longlong **)pFVar10,param_1,param_2);
    pFVar10 = pFVar10 + 8;
  }
  iVar4 = (local_res8->WeightLayers).Array.ArrayNum;
  pTVar7 = &local_res8->WeightLayers;
  pFVar10 = (local_res8->WeightLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    local_res20 = pFVar10;
    if ((pTVar7->Array).ArrayNum != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar10 == pFVar3) break;
    (**(code **)(**(longlong **)local_res20 + 0xc0))(*(longlong **)local_res20,param_1,param_2);
    pFVar10 = pFVar10 + 8;
  }
  return;
}

// RemoveAllMorphTargetAttributes @ 143515bb0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::RemoveAllMorphTargetAttributes
          (FDynamicMeshAttributeSet *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  longlong local_b0;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_a8 = &this->MorphTargetAttributes;
  iStack_a0 = 0;
  iVar2 = *(int *)&(this->MorphTargetAttributes).field_0x28;
  local_98 = &(this->MorphTargetAttributes).field_0x10;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_98;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_143515c5e;
      uVar12 = puVar15[lVar8 + 1];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_8c = local_res20 + -1 + local_88;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_143515c5e:
  uVar12 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_80 = *(int *)&(this->MorphTargetAttributes).field_0x8 -
              *(int *)&(this->MorphTargetAttributes).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  iVar10 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_res18 = uVar12;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  if (uVar12 != uVar3) {
    puVar14 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->MorphTargetAttributes).field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar3;
      local_res18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143515d70;
      uVar12 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    local_res18 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
      local_res18 = uVar3;
    }
  }
LAB_143515d70:
  do {
    pTVar6 = local_78;
    if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) != (int)uStack_50
       ) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->MorphTargetAttributes).field_0x10)) &&
       (pTVar6 == &this->MorphTargetAttributes)) {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               *)&this->MorphTargetAttributes);
      return;
    }
    local_b0 = *(longlong *)
                (*(longlong *)&pTVar6->field_0x0 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((((longlong *)this->_padding_ <= &local_b0) &&
        (&local_b0 < (longlong *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (int)this->_padding_;
    if (iVar2 != 0) {
      plVar4 = (longlong *)this->_padding_;
      iVar16 = 0;
      lVar8 = 0;
      bVar7 = *plVar4 != local_b0;
      lVar9 = local_b0;
      iVar10 = 0;
      do {
        iVar13 = iVar10;
        do {
          lVar8 = lVar8 + 1;
          iVar13 = iVar13 + 1;
          if (iVar2 <= lVar8) break;
        } while (bVar7 == (plVar4[lVar8] != lVar9));
        if (bVar7 != false) {
          if (iVar16 != iVar10) {
            memmove(plVar4 + iVar16,plVar4 + iVar10,(longlong)(iVar13 - iVar10) << 3);
            lVar9 = local_b0;
          }
          iVar16 = iVar16 + (iVar13 - iVar10);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar10 = iVar13;
      } while (lVar8 < iVar2);
      *(int *)&this->_padding_ = iVar16;
      uVar12 = local_res18;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// RemoveAllSkinWeightsAttributes @ 143515f00

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::RemoveAllSkinWeightsAttributes
          (FDynamicMeshAttributeSet *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  longlong local_b0;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_a8 = &this->SkinWeightAttributes;
  iStack_a0 = 0;
  iVar2 = *(int *)&(this->SkinWeightAttributes).field_0x28;
  local_98 = &(this->SkinWeightAttributes).field_0x10;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_98;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_143515fae;
      uVar12 = puVar15[lVar8 + 1];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_8c = local_res20 + -1 + local_88;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_143515fae:
  uVar12 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_80 = *(int *)&(this->SkinWeightAttributes).field_0x8 -
              *(int *)&(this->SkinWeightAttributes).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  iVar10 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_res18 = uVar12;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  if (uVar12 != uVar3) {
    puVar14 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->SkinWeightAttributes).field_0x10;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar3;
      local_res18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1435160c0;
      uVar12 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    local_res18 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
      local_res18 = uVar3;
    }
  }
LAB_1435160c0:
  do {
    pTVar6 = local_78;
    if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) != (int)uStack_50
       ) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10)) &&
       (pTVar6 == &this->SkinWeightAttributes)) {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               *)&this->SkinWeightAttributes);
      return;
    }
    local_b0 = *(longlong *)
                (*(longlong *)&pTVar6->field_0x0 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((((longlong *)this->_padding_ <= &local_b0) &&
        (&local_b0 < (longlong *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (int)this->_padding_;
    if (iVar2 != 0) {
      plVar4 = (longlong *)this->_padding_;
      iVar16 = 0;
      lVar8 = 0;
      bVar7 = *plVar4 != local_b0;
      lVar9 = local_b0;
      iVar10 = 0;
      do {
        iVar13 = iVar10;
        do {
          lVar8 = lVar8 + 1;
          iVar13 = iVar13 + 1;
          if (iVar2 <= lVar8) break;
        } while (bVar7 == (plVar4[lVar8] != lVar9));
        if (bVar7 != false) {
          if (iVar16 != iVar10) {
            memmove(plVar4 + iVar16,plVar4 + iVar10,(longlong)(iVar13 - iVar10) << 3);
            lVar9 = local_b0;
          }
          iVar16 = iVar16 + (iVar13 - iVar10);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar10 = iVar13;
      } while (lVar8 < iVar2);
      *(int *)&this->_padding_ = iVar16;
      uVar12 = local_res18;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// RemoveMorphTargetAttribute @ 143516df0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::RemoveMorphTargetAttribute
          (FDynamicMeshAttributeSet *this,FName param_1)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  FName local_res8;
  FName local_res10;
  
  this_00 = &this->MorphTargetAttributes;
  local_res10 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->MorphTargetAttributes).field_0x8 !=
      *(int *)&(this->MorphTargetAttributes).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MorphTargetAttributes).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->MorphTargetAttributes).field_0x48 - 1U &
                              param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      while (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) != param_1) {
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar4 * 0x18);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       *)this_00,param_1);
      if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>
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
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                 *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar5->field_0x8);
      if (*(int *)&(this->MorphTargetAttributes).field_0x8 !=
          *(int *)&(this->MorphTargetAttributes).field_0x34) {
        local_res8 = param_1;
        uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
        TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                             *)this_00,local_res10.Number + uVar3,&local_res8);
      }
    }
  }
  return;
}

// RemoveSkinWeightsAttribute @ 143517050

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::RemoveSkinWeightsAttribute
          (FDynamicMeshAttributeSet *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->SkinWeightAttributes).field_0x8 !=
      *(int *)&(this->SkinWeightAttributes).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SkinWeightAttributes).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->SkinWeightAttributes).field_0x48 - 1U &
                              param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      while (*(FName *)(*(longlong *)&this->SkinWeightAttributes + (longlong)iVar4 * 0x18) !=
             param_1) {
        iVar4 = *(int *)(*(longlong *)&this->SkinWeightAttributes + 0x10 + (longlong)iVar4 * 0x18);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       *)&this->SkinWeightAttributes,param_1);
      if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
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
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                 *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar5->field_0x8);
      if (*(int *)&(this->SkinWeightAttributes).field_0x8 !=
          *(int *)&(this->SkinWeightAttributes).field_0x34) {
        local_res8 = param_1;
        uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
        TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                             *)&this->SkinWeightAttributes,local_res10.Number + uVar3,&local_res8);
      }
    }
  }
  return;
}

// RemoveWeightLayer @ 143517f80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::RemoveWeightLayer
          (FDynamicMeshAttributeSet *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                       ,0x100,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->WeightLayers).Array.ArrayNum <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                       ,0x101,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)
            ((this->WeightLayers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  TArray<void_*,TSizedDefaultAllocator<32>_>::RemoveAt(&(this->WeightLayers).Array,param_1,Default);
  return;
}

// Reparent @ 143518150

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::Reparent
          (FDynamicMeshAttributeSet *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  longlong *plVar4;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar5;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar8;
  code *pcVar9;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  uint uVar26;
  undefined1 *puVar27;
  uint *puVar28;
  ulonglong uVar29;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_10c;
  uint local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  uVar21 = 0;
  this->ParentMesh = param_1;
  iVar12 = (**(code **)(this->_padding_ + 0xa8))();
  uVar23 = 0;
  uVar20 = uVar21;
  uVar29 = uVar21;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar20;
      uVar19 = uVar23;
      if ((int)uVar13 < (this->UVLayers).Array.ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      **(undefined8 **)((this->UVLayers).Array.AllocatorInstance.Data + uVar29) = param_1;
      iVar12 = (**(code **)(this->_padding_ + 0xa8))(this);
      uVar20 = (ulonglong)(uVar13 + 1);
      uVar29 = uVar29 + 8;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  iVar12 = (**(code **)(this->_padding_ + 0xb8))(this);
  uVar20 = uVar21;
  uVar29 = uVar21;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar20;
      uVar19 = uVar23;
      if ((int)uVar13 < (this->NormalLayers).Array.ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      **(undefined8 **)((this->NormalLayers).Array.AllocatorInstance.Data + uVar29) = param_1;
      iVar12 = (**(code **)(this->_padding_ + 0xb8))(this);
      uVar20 = (ulonglong)(uVar13 + 1);
      uVar29 = uVar29 + 8;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  pTVar2 = (this->ColorLayer).Ptr;
  if (pTVar2 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    *(FDynamicMesh3 **)pTVar2 = param_1;
  }
  pTVar3 = (this->MaterialIDAttrib).Ptr;
  if (pTVar3 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    (**(code **)(*(longlong *)pTVar3 + 0x28))(pTVar3,param_1);
  }
  iVar12 = (**(code **)(this->_padding_ + 200))(this);
  uVar20 = uVar21;
  uVar29 = uVar21;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar20;
      uVar19 = uVar23;
      if ((int)uVar13 < (this->PolygroupLayers).Array.ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar4 = *(longlong **)((this->PolygroupLayers).Array.AllocatorInstance.Data + uVar29);
      (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
      iVar12 = (**(code **)(this->_padding_ + 200))(this);
      uVar20 = (ulonglong)(uVar13 + 1);
      uVar29 = uVar29 + 8;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  iVar12 = (**(code **)(this->_padding_ + 0xd8))(this);
  uVar23 = 0;
  uVar20 = uVar21;
  uVar29 = uVar21;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar20;
      uVar19 = uVar23;
      if ((int)uVar13 < (this->WeightLayers).Array.ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar4 = *(longlong **)((this->WeightLayers).Array.AllocatorInstance.Data + uVar29);
      (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
      iVar12 = (**(code **)(this->_padding_ + 0xd8))(this);
      uVar20 = (ulonglong)(uVar13 + 1);
      uVar29 = uVar29 + 8;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10
  ;
  uVar19 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  local_108 = 1;
  iVar12 = 0;
  uVar13 = 1;
  uVar14 = uVar23;
  uVar26 = uVar23;
  if (uVar19 != 0) {
    puVar28 = *(uint **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)TStack_e8.Array;
    }
    uVar13 = *puVar28;
    uVar20 = uVar21;
    uVar26 = 0;
    uVar23 = 0;
    while (uVar13 == 0) {
      iVar12 = (int)uVar21;
      uVar26 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uVar26;
      uVar23 = iVar12 + 1;
      uVar21 = (ulonglong)uVar23;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23) {
        iVar12 = *(int *)&(this->SkinWeightAttributes).field_0x28;
        uVar13 = 1;
        uVar14 = uVar19;
        goto LAB_143518446;
      }
      uVar13 = puVar28[(longlong)iVar12 + 1];
    }
    iVar12 = *(int *)&(this->SkinWeightAttributes).field_0x28;
    uVar13 = -uVar13 & uVar13;
    uVar21 = (ulonglong)uVar13 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar14 = (uVar26 - 1) + (int)lVar17;
    if (iVar12 < (int)uVar14) {
      uVar14 = uVar19;
    }
  }
LAB_143518446:
  local_res20 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  TStack_e8._padding_ = CONCAT44(uVar13,uVar23);
  uVar23 = local_res20 & 0xffffffe0;
  TStack_e8.CurrentBitIndex = uVar14;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_res20 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = uVar26;
  uStack_c8 = CONCAT44(uStack_10c,
                       *(int *)&(this->SkinWeightAttributes).field_0x8 -
                       *(int *)&(this->SkinWeightAttributes).field_0x34);
  bVar16 = (byte)local_res20;
  if ((((int)local_res20 < 0) || (iVar12 < (int)local_res20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar19 = *(uint *)&(this->SkinWeightAttributes).field_0x28;
  if (local_res20 != uVar19) {
    puVar27 = *(undefined1 **)&(this->SkinWeightAttributes).field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(this->SkinWeightAttributes).field_0x10;
    }
    uVar13 = -1 << (bVar16 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar18 * 4);
    while (uVar13 == 0) {
      lVar17 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      local_res20 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_143518577;
      uVar13 = *(uint *)(puVar27 + lVar17 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res20 = (int)lVar17 + -1 + uVar23;
    if ((int)uVar19 < (int)local_res20) {
      local_res20 = uVar19;
    }
  }
LAB_143518577:
  uVar23 = local_res20;
  while( true ) {
    if (*(int *)&(this->SkinWeightAttributes).field_0x8 -
        *(int *)&(this->SkinWeightAttributes).field_0x34 != (int)uStack_c8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_e8.CurrentBitIndex == uVar23) &&
       (TStack_e8.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinWeightAttributes).field_0x10)) break;
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    *(FDynamicMesh3 **)
     (*(longlong *)
       (*(longlong *)&this->SkinWeightAttributes + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18) +
     0x10) = param_1;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar18 = 0;
  puVar27 = &(this->MorphTargetAttributes).field_0x10;
  iVar12 = *(int *)&(this->MorphTargetAttributes).field_0x28;
  local_c0 = &this->MorphTargetAttributes;
  iVar24 = 0;
  iVar15 = 0;
  if (iVar12 != 0) {
    puVar28 = *(uint **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)puVar27;
    }
    uVar23 = *puVar28;
    while (uVar23 == 0) {
      lVar17 = (longlong)iVar18;
      iVar24 = iVar24 + 0x20;
      iVar18 = iVar18 + 1;
      iVar15 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_143518670;
      uVar23 = puVar28[lVar17 + 1];
    }
    local_108 = -uVar23 & uVar23;
    uVar21 = (ulonglong)local_108 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar15 = iVar24 + -1 + (int)lVar17;
    if (iVar12 < iVar15) {
      iVar15 = iVar12;
    }
  }
LAB_143518670:
  uVar23 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  uVar19 = uVar23 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(local_108,iVar18);
  TStack_b8.CurrentBitIndex = iVar15;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar23 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar24;
  uStack_98 = CONCAT44(uStack_10c,
                       *(int *)&(this->MorphTargetAttributes).field_0x8 -
                       *(int *)&(this->MorphTargetAttributes).field_0x34);
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
  if ((((int)uVar23 < 0) || (iVar12 < (int)uVar23)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar13 = *(uint *)&(this->MorphTargetAttributes).field_0x28;
  if (uVar23 != uVar13) {
    puVar25 = *(undefined1 **)&(this->MorphTargetAttributes).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar27;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      lVar17 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar23 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14351877c;
      uVar23 = *(uint *)(puVar25 + lVar17 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar23 = (int)lVar17 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar23) {
      uVar23 = uVar13;
    }
  }
LAB_14351877c:
  while( true ) {
    pTVar10 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b8.CurrentBitIndex == uVar23) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
       (pTVar10 == &this->MorphTargetAttributes)) break;
    plVar4 = *(longlong **)(*(longlong *)pTVar10 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  pTVar5 = (this->BoneNameAttrib).Ptr;
  if (pTVar5 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    (**(code **)(pTVar5->_padding_ + 0x28))(pTVar5,param_1);
  }
  pTVar6 = (this->BoneParentIndexAttrib).Ptr;
  if (pTVar6 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    (**(code **)(pTVar6->_padding_ + 0x28))(pTVar6,param_1);
  }
  pTVar7 = (this->BonePoseAttrib).Ptr;
  if (pTVar7 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    (**(code **)(pTVar7->_padding_ + 0x28))(pTVar7,param_1);
  }
  pTVar8 = (this->BoneColorAttrib).Ptr;
  if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    (**(code **)(pTVar8->_padding_ + 0x28))(pTVar8,param_1);
  }
  puVar22 = (undefined8 *)this->_padding_;
  iVar12 = (int)this->_padding_;
  puVar1 = puVar22 + iVar12;
  while( true ) {
    if ((int)this->_padding_ != iVar12) {
      `TCheckedPointerIterator<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar22 == puVar1) break;
    (**(code **)(*(longlong *)*puVar22 + 0x28))((longlong *)*puVar22,param_1);
    puVar22 = puVar22 + 1;
  }
  return;
}

// Serialize @ 1435299e0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::Serialize
          (FDynamicMeshAttributeSet *this,FArchive *param_1,FCompactMaps *param_2,bool param_3)

{
  uint *puVar1;
  int *piVar2;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_00;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_01;
  int iVar3;
  longlong *plVar4;
  TDynamicMeshOverlay<float,4> *this_02;
  ulonglong *puVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  undefined8 uVar7;
  longlong lVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar9;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar10;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar11;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar12;
  int *piVar13;
  code *pcVar14;
  byte *pbVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 *puVar26;
  longlong lVar27;
  TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>
  *pTVar28;
  TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>
  *pTVar29;
  ulonglong uVar30;
  bool bVar31;
  char cVar32;
  FDynamicMeshAttributeSet *local_res8;
  uint local_res10 [2];
  FCompactMaps *local_res18;
  bool local_res20;
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526;
  undefined1 local_525;
  uint local_524;
  uint local_520;
  uint local_51c;
  uint local_518;
  uint local_514;
  uint local_510;
  uint local_50c;
  uint local_508;
  uint local_504;
  byte *local_500;
  FScriptContainerElement *local_4f8;
  int *piStack_4f0;
  undefined8 local_4e8;
  int local_4e0;
  int local_4dc;
  FName local_4d8;
  FName local_4d0;
  FScriptContainerElement *local_4c8;
  TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>
  *pTStack_4c0;
  int local_4b8;
  undefined4 uStack_4b4;
  FScriptContainerElement *local_4b0;
  int *piStack_4a8;
  undefined8 local_4a0;
  FScriptContainerElement *local_498;
  int *piStack_490;
  undefined8 local_488;
  FScriptContainerElement *local_480;
  int *piStack_478;
  undefined8 local_470;
  undefined4 local_468;
  longlong *local_458;
  undefined1 auStack_450 [16];
  uint uStack_440;
  uint uStack_43c;
  longlong local_438;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  *pTStack_430;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  *local_428;
  undefined2 local_420;
  longlong *local_418;
  undefined1 auStack_410 [16];
  uint uStack_400;
  uint uStack_3fc;
  longlong local_3f8;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  *pTStack_3f0;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  *local_3e8;
  undefined2 local_3e0;
  FSparseArrayAllocationInfo local_3d8;
  undefined1 local_3c8 [32];
  longlong local_3a8;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  *pTStack_3a0;
  undefined1 local_398 [32];
  longlong local_378;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  *pTStack_370;
  FArchiveProxy local_368;
  FArchiveProxy local_2c8;
  FArchiveProxy local_228;
  FArchiveProxy local_188;
  FArchiveProxy local_e8;
  
  local_res8 = this;
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar17 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , 0x37 < iVar17)) {
    puVar5 = *(ulonglong **)&param_1->field_0x8;
    local_res10[0] = local_res10[0] & 0xffffff00;
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      local_518 = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_518 = (uint)param_3;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_518,4);
      if (1 < local_518) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar18 = local_518;
      if ((param_1->field_0x28 & 1) != 0) goto LAB_143529b1d;
    }
    else {
      uVar18 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
LAB_143529b1d:
      local_res20 = uVar18 != 0;
      param_3 = local_res20;
    }
    FDynamicMeshAttributeSet_Local::
    SerializeLayers<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_>
              (&this->UVLayers,param_1,param_2,param_3);
    FDynamicMeshAttributeSet_Local::
    SerializeLayers<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_>
              (&this->NormalLayers,param_1,param_2,param_3);
    FDynamicMeshAttributeSet_Local::
    SerializeLayers<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_>
              (&this->PolygroupLayers,param_1,param_2,param_3);
    if (((param_1->field_0x28 & 1) == 0) ||
       (iVar17 = FArchiveState::CustomVer
                           ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
       0x3d < iVar17)) {
      FDynamicMeshAttributeSet_Local::
      SerializeLayers<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>_>
                (&this->WeightLayers,param_1,param_2,param_3);
    }
  }
  else {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
    operator<<<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::
    TVector2<float>_>_TSizedDefaultAllocator<32>_>(param_1,&this->UVLayers);
    operator<<<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::
    TVector<float>_>_TSizedDefaultAllocator<32>_>(param_1,&this->NormalLayers);
    operator<<<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_TSizedDefaultAllocator<32>_>
              (param_1,&this->PolygroupLayers);
  }
  pFVar25 = local_4f8;
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar24 = (this->UVLayers).Array.AllocatorInstance.Data;
    piVar2 = &(this->UVLayers).Array.ArrayNum;
    iVar17 = *piVar2;
    local_4e8 = CONCAT44(local_4e8._4_4_,iVar17);
    pFVar25 = pFVar24 + (longlong)iVar17 * 8;
    local_4a0 = local_4e8;
    local_4f8 = pFVar24;
    piStack_4f0 = piVar2;
    local_4b0 = pFVar24;
    piStack_4a8 = piVar2;
    while( true ) {
      if (*piVar2 != iVar17) {
        local_528 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_528);
      }
      if (pFVar24 == pFVar25) break;
      puVar22 = *(undefined8 **)pFVar24;
      pFVar24 = pFVar24 + 8;
      *puVar22 = this->ParentMesh;
    }
    pFVar23 = (this->NormalLayers).Array.AllocatorInstance.Data;
    piVar2 = &(this->NormalLayers).Array.ArrayNum;
    iVar17 = *piVar2;
    local_4e8 = CONCAT44(local_4e8._4_4_,iVar17);
    pFVar25 = pFVar23 + (longlong)iVar17 * 8;
    local_488 = local_4e8;
    local_4f8 = pFVar23;
    piStack_4f0 = piVar2;
    local_4b0 = pFVar24;
    local_498 = pFVar23;
    piStack_490 = piVar2;
    while( true ) {
      if (*piVar2 != iVar17) {
        local_527 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_527);
      }
      if (pFVar23 == pFVar25) break;
      puVar22 = *(undefined8 **)pFVar23;
      pFVar23 = pFVar23 + 8;
      *puVar22 = this->ParentMesh;
    }
    pFVar24 = (this->PolygroupLayers).Array.AllocatorInstance.Data;
    piVar2 = &(this->PolygroupLayers).Array.ArrayNum;
    iVar17 = *piVar2;
    local_4e8 = CONCAT44(local_4e8._4_4_,iVar17);
    pFVar25 = pFVar24 + (longlong)iVar17 * 8;
    local_470 = local_4e8;
    local_4f8 = pFVar24;
    piStack_4f0 = piVar2;
    local_498 = pFVar23;
    local_480 = pFVar24;
    piStack_478 = piVar2;
    while( true ) {
      if (*piVar2 != iVar17) {
        local_526 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_526);
      }
      if (pFVar24 == pFVar25) break;
      lVar27 = *(longlong *)pFVar24;
      pFVar24 = pFVar24 + 8;
      *(FDynamicMesh3 **)(lVar27 + 0x10) = this->ParentMesh;
    }
    pFVar25 = (this->WeightLayers).Array.AllocatorInstance.Data;
    piVar2 = &(this->WeightLayers).Array.ArrayNum;
    iVar17 = *piVar2;
    pFVar23 = pFVar25 + (longlong)iVar17 * 8;
    local_4e8 = CONCAT44(uStack_4b4,iVar17);
    local_4f8 = pFVar25;
    piStack_4f0 = piVar2;
    local_4c8 = pFVar25;
    pTStack_4c0 = (TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>
                   *)piVar2;
    local_4b8 = iVar17;
    local_480 = pFVar24;
    while( true ) {
      if (*piVar2 != iVar17) {
        local_525 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_525);
      }
      param_2 = local_res18;
      param_3 = local_res20;
      if (pFVar25 == pFVar23) break;
      lVar27 = *(longlong *)pFVar25;
      pFVar25 = pFVar25 + 8;
      *(FDynamicMesh3 **)(lVar27 + 0x10) = this->ParentMesh;
    }
  }
  local_4f8 = pFVar25;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_520 = (uint)((this->ColorLayer).Ptr !=
                    (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0);
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_520,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_520);
    }
  }
  else {
    local_520 = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if ((int)local_520 < 1) {
      this_02 = (TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr;
      if (this_02 != (TDynamicMeshOverlay<float,4> *)0x0) {
        (this->ColorLayer).Ptr =
             (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
        TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(this_02);
        ::operator_delete(this_02,0x88);
      }
    }
    else {
      EnablePrimaryColors(this);
    }
  }
  if (0 < (int)local_520) {
    TDynamicMeshOverlay<float,4>::Serialize
              ((TDynamicMeshOverlay<float,4> *)(this->ColorLayer).Ptr,param_1,param_2,param_3);
  }
  puVar26 = &param_1->field_0x28;
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  pTVar6 = (this->MaterialIDAttrib).Ptr;
  bVar31 = pTVar6 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  piVar2 = (int *)*puVar5 + 1;
  if ((int *)puVar5[1] < piVar2) {
    local_514 = 0;
    if ((*puVar26 & 1) == 0) {
      local_514 = (uint)(pTVar6 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_514,4);
    if (1 < local_514) {
      local_500 = puVar26;
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar26 & 1) == 0) goto LAB_143529e59;
    bVar31 = local_514 != 0;
LAB_143529e6a:
    local_500 = &param_1->field_0x28;
    if (bVar31) {
      EnableMaterialID(this);
LAB_143529f26:
      TDynamicMeshTriangleAttribute<int,1>::Serialize
                ((TDynamicMeshTriangleAttribute<int,1> *)(this->MaterialIDAttrib).Ptr,param_1,
                 local_res18,local_res20);
    }
    else {
      pTVar6 = (this->MaterialIDAttrib).Ptr;
      if (pTVar6 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        (this->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
        (*(code *)**(undefined8 **)pTVar6)(pTVar6,1);
      }
    }
  }
  else {
    bVar31 = *(int *)*puVar5 != 0;
    *puVar5 = (ulonglong)piVar2;
LAB_143529e59:
    if ((*puVar26 & 1) != 0) goto LAB_143529e6a;
    local_500 = puVar26;
    if (bVar31) goto LAB_143529f26;
  }
  puVar26 = &param_1->field_0x28;
  local_500 = puVar26;
  if ((char)local_res10[0] == '\0') {
    this_00 = &this->SkinWeightAttributes;
    local_51c = *(int *)&(this->SkinWeightAttributes).field_0x8 -
                *(int *)&(this->SkinWeightAttributes).field_0x34;
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_51c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_51c);
      }
    }
    else {
      local_51c = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_1->field_0x28 & 1) == 0) {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_3c8,
                 (TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)this_00);
      bVar31 = local_res20;
      local_420 = 0;
      stack0xfffffffffffffbb8 = local_3c8._16_16_;
      local_458 = (longlong *)local_3c8._0_8_;
      auStack_450._0_8_ = local_3c8._8_8_;
      local_438 = local_3a8;
      pTStack_430 = pTStack_3a0;
      uVar30 = local_3c8._24_8_ >> 0x20;
      local_428 = (TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)this_00;
      if (local_3c8._28_4_ < *(int *)(local_3c8._16_8_ + 0x18)) {
        do {
          FArchiveProxy::FArchiveProxy(&local_2c8,param_1);
          plVar4 = local_458;
          local_2c8._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
          iVar17 = (int)uVar30;
          FNameAsStringProxyArchive::operator<<
                    ((FNameAsStringProxyArchive *)&local_2c8,
                     (FName *)(*local_458 + (longlong)iVar17 * 0x18));
          puVar5 = *(ulonglong **)&param_1->field_0x8;
          lVar27 = *plVar4;
          lVar8 = *(longlong *)(lVar27 + 8 + (longlong)iVar17 * 0x18);
          bVar16 = lVar8 != 0;
          puVar1 = (uint *)*puVar5 + 1;
          if ((uint *)puVar5[1] < puVar1) {
            local_50c = 0;
            if ((*puVar26 & 1) == 0) {
              local_50c = (uint)(lVar8 != 0);
            }
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50c,4);
            if (1 < local_50c) {
              FArchiveState::SetError((FArchiveState *)param_1);
            }
            uVar18 = local_50c;
            if ((*puVar26 & 1) != 0) goto LAB_14352a38b;
          }
          else {
            uVar18 = *(uint *)*puVar5;
            *puVar5 = (ulonglong)puVar1;
LAB_14352a38b:
            bVar16 = uVar18 != 0;
          }
          if (bVar16) {
            TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Serialize
                      (*(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                        (lVar27 + 8 + (longlong)iVar17 * 0x18),param_1,local_res18,bVar31);
          }
          FNameAsStringProxyArchive::~FNameAsStringProxyArchive
                    ((FNameAsStringProxyArchive *)&local_2c8);
          uStack_440 = uStack_440 & ~auStack_450._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_450);
          this = local_res8;
          uVar30 = (ulonglong)uStack_43c;
        } while ((int)uStack_43c < *(int *)(auStack_450._8_8_ + 0x18));
        if (((char)local_420 != '\0') && (local_420._1_1_ != '\0')) {
          uVar18 = *(int *)&(local_428->Elements).field_0x8 -
                   *(int *)&(local_428->Elements).field_0x34;
          if (uVar18 < 4) {
            iVar17 = 1;
          }
          else {
            uVar30 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_468 = (undefined4)lVar27;
            iVar17 = 1 << ((byte)lVar27 & 0x1f);
          }
          if (((0 < (int)uVar18) && (local_428->HashSize < iVar17)) ||
             (iVar17 < local_428->HashSize)) {
            local_428->HashSize = iVar17;
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_428);
          }
        }
      }
    }
    else {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               *)this_00);
      local_524 = 0;
      if (0 < (int)local_51c) {
        do {
          pTVar28 = (TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>
                     *)0x0;
          local_4d8.ComparisonIndex.Value = 0;
          local_4d8.Number = 0;
          FArchiveProxy::FArchiveProxy(&local_368,param_1);
          local_368._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
          FNameAsStringProxyArchive::operator<<((FNameAsStringProxyArchive *)&local_368,&local_4d8);
          iVar17 = *(int *)&(this->SkinWeightAttributes).field_0x34;
          if (iVar17 == 0) {
            iVar19 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x18,8,1,(ForAnyElementType *)this_00,
                                (int *)&(this->SkinWeightAttributes).field_0x8,
                                (int *)&(this->SkinWeightAttributes).field_0xc);
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       &(this->SkinWeightAttributes).field_0x10,false);
          }
          else {
            iVar19 = *(int *)&(this->SkinWeightAttributes).field_0x30;
            iVar17 = iVar17 + -1;
            iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar19 * 0x18);
            *(int *)&(this->SkinWeightAttributes).field_0x30 = iVar3;
            *(int *)&(this->SkinWeightAttributes).field_0x34 = iVar17;
            if (iVar17 != 0) {
              *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,&local_3d8,iVar19);
          if (local_3d8.Pointer !=
              (TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>
               *)0x0) {
            *(FName *)local_3d8.Pointer = local_4d8;
            *(undefined8 *)((longlong)local_3d8.Pointer + 8) = 0;
            *(undefined4 *)((longlong)local_3d8.Pointer + 0x10) = 0xffffffff;
            pTVar28 = local_3d8.Pointer;
          }
          uVar7 = *(undefined8 *)pTVar28;
          local_4e0 = local_3d8.Index;
          uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
          uVar18 = uVar18 + (int)((ulonglong)uVar7 >> 0x20);
          bVar31 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::TryReplaceExisting
                             ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                               *)this_00,uVar18,pTVar28,&local_4e0,(bool *)0x0);
          lVar27 = (longlong)local_4e0;
          if (!bVar31) {
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                            *)this_00,uVar18,pTVar28,local_4e0);
          }
          pbVar15 = local_500;
          puVar5 = *(ulonglong **)&param_1->field_0x8;
          lVar8 = *(longlong *)&this_00->field_0x0;
          piVar2 = (int *)*puVar5 + 1;
          if ((int *)puVar5[1] < piVar2) {
            local_510 = 0;
            if ((*local_500 & 1) == 0) {
              local_510 = (uint)((char)local_res10[0] != '\0');
            }
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_510,4);
            if (1 < local_510) {
              FArchiveState::SetError((FArchiveState *)param_1);
            }
            if ((*pbVar15 & 1) == 0) {
              cVar32 = (char)local_res10[0];
            }
            else {
              local_res10[0] = CONCAT31(local_res10[0]._1_3_,local_510 != 0);
              cVar32 = local_510 != 0;
            }
          }
          else {
            cVar32 = *(int *)*puVar5 != 0;
            *puVar5 = (ulonglong)piVar2;
            local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar32);
          }
          puVar22 = (undefined8 *)0x0;
          if (cVar32 != '\0') {
            puVar21 = ::operator_new(0x30);
            if (puVar21 != (undefined8 *)0x0) {
              puVar21[2] = this->ParentMesh;
              puVar21[1] = 0;
              ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(puVar21 + 3))->CurBlock = 0;
              *puVar21 = &
                         ___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
              ;
              *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
              puVar21[4] = 0;
              puVar21[5] = 0;
              TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                        ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(puVar21 + 3));
              puVar22 = puVar21;
            }
            puVar21 = *(undefined8 **)(lVar8 + 8 + lVar27 * 0x18);
            if ((puVar21 != puVar22) &&
               (*(undefined8 **)(lVar8 + 8 + lVar27 * 0x18) = puVar22, puVar21 != (undefined8 *)0x0)
               ) {
              TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty
                        ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(puVar21 + 3),0);
              if ((void *)puVar21[4] != (void *)0x0) {
                FMemory::Free((void *)puVar21[4]);
              }
              *puVar21 = &___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
              ::operator_delete(puVar21,0x30);
            }
            TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Serialize
                      (*(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                        (lVar8 + 8 + lVar27 * 0x18),param_1,local_res18,local_res20);
            TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
                      ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                       *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                        (lVar8 + 8 + lVar27 * 0x18));
          }
          FNameAsStringProxyArchive::~FNameAsStringProxyArchive
                    ((FNameAsStringProxyArchive *)&local_368);
          local_524 = local_524 + 1;
        } while ((int)local_524 < (int)local_51c);
      }
    }
  }
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar17 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     0xdf < iVar17)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    this_01 = &this->MorphTargetAttributes;
    local_res10[0] =
         *(int *)&(this->MorphTargetAttributes).field_0x8 -
         *(int *)&(this->MorphTargetAttributes).field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_1->field_0x28 & 1) == 0) {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_398,
                 (TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  *)this_01);
      bVar31 = local_res20;
      local_3e0 = 0;
      stack0xfffffffffffffbf8 = local_398._16_16_;
      local_418 = (longlong *)local_398._0_8_;
      auStack_410._0_8_ = local_398._8_8_;
      local_3f8 = local_378;
      pTStack_3f0 = pTStack_370;
      uVar30 = local_398._24_8_ >> 0x20;
      local_3e8 = (TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)this_01;
      if (local_398._28_4_ < *(int *)(local_398._16_8_ + 0x18)) {
        do {
          FArchiveProxy::FArchiveProxy(&local_188,param_1);
          plVar4 = local_418;
          local_188._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
          iVar17 = (int)uVar30;
          FNameAsStringProxyArchive::operator<<
                    ((FNameAsStringProxyArchive *)&local_188,
                     (FName *)(*local_418 + (longlong)iVar17 * 0x18));
          puVar5 = *(ulonglong **)&param_1->field_0x8;
          lVar27 = *plVar4;
          lVar8 = *(longlong *)(lVar27 + 8 + (longlong)iVar17 * 0x18);
          bVar16 = lVar8 != 0;
          puVar1 = (uint *)*puVar5 + 1;
          if ((uint *)puVar5[1] < puVar1) {
            local_504 = 0;
            if ((param_1->field_0x28 & 1) == 0) {
              local_504 = (uint)(lVar8 != 0);
            }
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_504,4);
            if (1 < local_504) {
              FArchiveState::SetError((FArchiveState *)param_1);
            }
            uVar18 = local_504;
            if ((param_1->field_0x28 & 1) != 0) goto LAB_14352a867;
          }
          else {
            uVar18 = *(uint *)*puVar5;
            *puVar5 = (ulonglong)puVar1;
LAB_14352a867:
            bVar16 = uVar18 != 0;
          }
          if (bVar16) {
            TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Serialize
                      (*(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)
                        (lVar27 + 8 + (longlong)iVar17 * 0x18),param_1,local_res18,bVar31);
          }
          FNameAsStringProxyArchive::~FNameAsStringProxyArchive
                    ((FNameAsStringProxyArchive *)&local_188);
          uStack_400 = uStack_400 & ~auStack_410._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_410);
          this = local_res8;
          uVar30 = (ulonglong)uStack_3fc;
        } while ((int)uStack_3fc < *(int *)(auStack_410._8_8_ + 0x18));
        if (((char)local_3e0 != '\0') && (local_3e0._1_1_ != '\0')) {
          uVar18 = *(int *)&(local_3e8->Elements).field_0x8 -
                   *(int *)&(local_3e8->Elements).field_0x34;
          if (uVar18 < 4) {
            iVar17 = 1;
          }
          else {
            uVar30 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_500 = (byte *)CONCAT44(local_500._4_4_,(int)lVar27);
            iVar17 = 1 << ((byte)lVar27 & 0x1f);
          }
          if (((0 < (int)uVar18) && (local_3e8->HashSize < iVar17)) ||
             (iVar17 < local_3e8->HashSize)) {
            local_3e8->HashSize = iVar17;
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_3e8);
          }
        }
      }
    }
    else {
      TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               *)this_01);
      local_res8 = (FDynamicMeshAttributeSet *)((ulonglong)local_res8 & 0xffffffff00000000);
      if (0 < (int)local_res10[0]) {
        bVar31 = false;
        do {
          pTVar29 = (TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>
                     *)0x0;
          local_4d0.ComparisonIndex.Value = 0;
          local_4d0.Number = 0;
          FArchiveProxy::FArchiveProxy(&local_228,param_1);
          local_228._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
          FNameAsStringProxyArchive::operator<<((FNameAsStringProxyArchive *)&local_228,&local_4d0);
          iVar17 = *(int *)&(this->MorphTargetAttributes).field_0x34;
          if (iVar17 == 0) {
            iVar19 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x18,8,1,(ForAnyElementType *)this_01,
                                (int *)&(this->MorphTargetAttributes).field_0x8,
                                (int *)&(this->MorphTargetAttributes).field_0xc);
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       &(this->MorphTargetAttributes).field_0x10,false);
          }
          else {
            iVar19 = *(int *)&(this->MorphTargetAttributes).field_0x30;
            iVar17 = iVar17 + -1;
            iVar3 = *(int *)(*(longlong *)&this_01->field_0x0 + 4 + (longlong)iVar19 * 0x18);
            *(int *)&(this->MorphTargetAttributes).field_0x30 = iVar3;
            *(int *)&(this->MorphTargetAttributes).field_0x34 = iVar17;
            if (iVar17 != 0) {
              *(undefined4 *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar3 * 0x18) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_01,(FSparseArrayAllocationInfo *)&local_4c8,iVar19);
          if (pTStack_4c0 !=
              (TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>
               *)0x0) {
            *(uint *)&pTStack_4c0->field_0x0 = local_4d0.ComparisonIndex.Value;
            *(uint *)&pTStack_4c0->field_0x4 = local_4d0.Number;
            *(undefined8 *)&pTStack_4c0->field_0x8 = 0;
            *(undefined4 *)&pTStack_4c0->field_0x10 = 0xffffffff;
            pTVar29 = pTStack_4c0;
          }
          uVar7 = *(undefined8 *)pTVar29;
          local_4dc = (int)local_4c8;
          uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
          uVar18 = uVar18 + (int)((ulonglong)uVar7 >> 0x20);
          bVar16 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::TryReplaceExisting
                             ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                               *)this_01,uVar18,pTVar29,&local_4dc,(bool *)0x0);
          lVar27 = (longlong)local_4dc;
          if (!bVar16) {
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                            *)this_01,uVar18,pTVar29,local_4dc);
          }
          puVar5 = *(ulonglong **)&param_1->field_0x8;
          lVar8 = *(longlong *)&this_01->field_0x0;
          puVar1 = (uint *)*puVar5 + 1;
          if ((uint *)puVar5[1] < puVar1) {
            local_508 = 0;
            if ((param_1->field_0x28 & 1) == 0) {
              local_508 = (uint)bVar31;
            }
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_508,4);
            if (1 < local_508) {
              FArchiveState::SetError((FArchiveState *)param_1);
            }
            uVar18 = local_508;
            if ((param_1->field_0x28 & 1) != 0) goto LAB_14352a687;
          }
          else {
            uVar18 = *(uint *)*puVar5;
            *puVar5 = (ulonglong)puVar1;
LAB_14352a687:
            bVar31 = uVar18 != 0;
          }
          if (bVar31) {
            puVar22 = ::operator_new(0x30);
            if (puVar22 == (undefined8 *)0x0) {
              puVar22 = (undefined8 *)0x0;
            }
            else {
              puVar22[2] = this->ParentMesh;
              puVar22[1] = 0;
              ((TDynamicVector<float,512> *)(puVar22 + 3))->CurBlock = 0;
              *puVar22 = &
                         ___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
              ;
              *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
              puVar22[4] = 0;
              puVar22[5] = 0;
              TDynamicVector<float,512>::AddAllocatedBlock
                        ((TDynamicVector<float,512> *)(puVar22 + 3));
            }
            puVar21 = *(undefined8 **)(lVar8 + 8 + lVar27 * 0x18);
            if ((puVar21 != puVar22) &&
               (*(undefined8 **)(lVar8 + 8 + lVar27 * 0x18) = puVar22, puVar21 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar21)(puVar21,1);
            }
            TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Serialize
                      (*(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)
                        (lVar8 + 8 + lVar27 * 0x18),param_1,local_res18,local_res20);
            TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
                      ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                       *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                        (lVar8 + 8 + lVar27 * 0x18));
          }
          FNameAsStringProxyArchive::~FNameAsStringProxyArchive
                    ((FNameAsStringProxyArchive *)&local_228);
          iVar17 = (int)local_res8 + 1;
          local_res8 = (FDynamicMeshAttributeSet *)CONCAT44(local_res8._4_4_,iVar17);
        } while (iVar17 < (int)local_res10[0]);
      }
    }
  }
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar17 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID)
     , iVar17 < 0xf)) goto LAB_14352aa29;
  if (((this->BoneNameAttrib).Ptr ==
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) ||
     ((((this->BoneParentIndexAttrib).Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0 ||
       ((this->BonePoseAttrib).Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
       ) || ((this->BoneColorAttrib).Ptr ==
             (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)
             0x0)))) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  piVar2 = (int *)*puVar5 + 1;
  if ((int *)puVar5[1] < piVar2) {
    local_524 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_524 = (uint)bVar31;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_524,4);
    if (1 < local_524) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar31 = local_524 != 0;
      goto LAB_14352a99a;
    }
  }
  else {
    bVar31 = *(int *)*puVar5 != 0;
    *puVar5 = (ulonglong)piVar2;
    if ((param_1->field_0x28 & 1) != 0) {
LAB_14352a99a:
      if (bVar31 == false) {
        pTVar9 = (this->BoneNameAttrib).Ptr;
        if (pTVar9 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
          (this->BoneNameAttrib).Ptr =
               (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
          (**(code **)pTVar9->_padding_)(pTVar9,1);
        }
        pTVar10 = (this->BoneParentIndexAttrib).Ptr;
        if (pTVar10 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
          (this->BoneParentIndexAttrib).Ptr =
               (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
          (**(code **)pTVar10->_padding_)(pTVar10,1);
        }
        pTVar11 = (this->BonePoseAttrib).Ptr;
        if (pTVar11 !=
            (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
            0x0) {
          (this->BonePoseAttrib).Ptr =
               (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                *)0x0;
          (**(code **)pTVar11->_padding_)(pTVar11,1);
        }
        pTVar12 = (this->BoneColorAttrib).Ptr;
        if (pTVar12 !=
            (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0
           ) {
          (this->BoneColorAttrib).Ptr =
               (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)
               0x0;
          (**(code **)pTVar12->_padding_)(pTVar12,1);
        }
        goto LAB_14352aa29;
      }
      EnableBones(this,0);
    }
  }
  if (bVar31 != false) {
    FArchiveProxy::FArchiveProxy(&local_e8,param_1);
    local_e8._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,&((this->BoneNameAttrib).Ptr)->AttribValues);
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              (param_1,&((this->BoneParentIndexAttrib).Ptr)->AttribValues);
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (param_1,&((this->BonePoseAttrib).Ptr)->AttribValues);
    TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
              (param_1,&((this->BoneColorAttrib).Ptr)->AttribValues);
    FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)&local_e8);
  }
LAB_14352aa29:
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar17 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     0xb4 < iVar17)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_res8 = (FDynamicMeshAttributeSet *)
                 CONCAT44(local_res8._4_4_,(this->SculptLayers).Layers.Array.ArrayNum);
    if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_res8);
      }
    }
    else {
      local_res8 = (FDynamicMeshAttributeSet *)CONCAT44(local_res8._4_4_,*(undefined4 *)*plVar4);
      *plVar4 = *plVar4 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      FDynamicMeshSculptLayers::Discard(&this->SculptLayers,this);
      if ((int)local_res8 < 1) {
        return;
      }
      if (this->ParentMesh == (FDynamicMesh3 *)0x0) {
        bVar31 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6248718618683508627>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                            ,0x793,"ParentMesh");
        if (bVar31) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      else {
        FDynamicMeshSculptLayers::Enable(&this->SculptLayers,this,(int)local_res8);
      }
    }
    if (0 < (int)local_res8) {
      piVar2 = &(this->SculptLayers).ActiveLayer;
      piVar13 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar13 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
        }
      }
      else {
        *piVar2 = *piVar13;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      TArrayPrivateFriend::Serialize<double,TSizedDefaultAllocator<32>_>
                (param_1,&(this->SculptLayers).LayerWeights);
      uVar18 = 0;
      if (0 < (int)local_res8) {
        lVar27 = 0;
        do {
          uVar20 = 0;
          if ((int)uVar18 < (this->SculptLayers).Layers.Array.ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Serialize
                    (*(TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> **)
                      ((this->SculptLayers).Layers.Array.AllocatorInstance.Data + lVar27),param_1,
                     local_res18,local_res20);
          uVar18 = uVar18 + 1;
          lVar27 = lVar27 + 8;
        } while ((int)uVar18 < (int)local_res8);
      }
    }
  }
  return;
}

// SetNumNormalLayers @ 14352f240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::SetNumNormalLayers
          (FDynamicMeshAttributeSet *this,int param_1)

{
  TDynamicVector<int,512> *this_00;
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TDynamicMeshOverlay<float,3> *pTVar6;
  TDynamicMeshOverlay<float,3> *this_01;
  ulonglong uVar7;
  TDynamicMeshOverlay<float,3> *local_38 [2];
  
  iVar5 = (this->NormalLayers).Array.ArrayNum;
  if (iVar5 != param_1) {
    if (iVar5 < param_1) {
      if (iVar5 < param_1) {
        uVar7 = (ulonglong)(uint)(param_1 - iVar5);
        do {
          pTVar6 = ::operator_new(0x88);
          this_01 = (TDynamicMeshOverlay<float,3> *)0x0;
          if (pTVar6 != (TDynamicMeshOverlay<float,3> *)0x0) {
            pFVar1 = this->ParentMesh;
            (pTVar6->ElementsRefCounts).RefCounts.CurBlock = 0;
            (pTVar6->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
            (pTVar6->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar6->ElementsRefCounts).RefCounts.Blocks.ArrayNum = 0;
            (pTVar6->ElementsRefCounts).RefCounts.Blocks.ArrayMax = 0;
            TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                      (&(pTVar6->ElementsRefCounts).RefCounts);
            this_00 = &(pTVar6->ElementsRefCounts).FreeIndices;
            (pTVar6->ElementsRefCounts).FreeIndices.CurBlockUsed = 0;
            this_00->CurBlock = 0;
            (pTVar6->ElementsRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar6->ElementsRefCounts).FreeIndices.Blocks.ArrayNum = 0;
            (pTVar6->ElementsRefCounts).FreeIndices.Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
            (pTVar6->ElementsRefCounts).UsedCount = 0;
            (pTVar6->Elements).CurBlock = 0;
            (pTVar6->Elements).CurBlockUsed = 0;
            (pTVar6->Elements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar6->Elements).Blocks.ArrayNum = 0;
            (pTVar6->Elements).Blocks.ArrayMax = 0;
            TDynamicVector<float,512>::AddAllocatedBlock(&pTVar6->Elements);
            (pTVar6->ParentVertices).CurBlockUsed = 0;
            (pTVar6->ParentVertices).CurBlock = 0;
            (pTVar6->ParentVertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar6->ParentVertices).Blocks.ArrayNum = 0;
            (pTVar6->ParentVertices).Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(&pTVar6->ParentVertices);
            (pTVar6->ElementTriangles).CurBlockUsed = 0;
            (pTVar6->ElementTriangles).CurBlock = 0;
            (pTVar6->ElementTriangles).Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar6->ElementTriangles).Blocks.ArrayNum = 0;
            (pTVar6->ElementTriangles).Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(&pTVar6->ElementTriangles);
            pTVar6->ParentMesh = pFVar1;
            this_01 = pTVar6;
          }
          TDynamicMeshOverlay<float,3>::InitializeTriangles
                    (this_01,(this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed);
          pFVar2 = (this->NormalLayers).Array.AllocatorInstance.Data;
          local_38[0] = this_01;
          if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar2 + (longlong)(this->NormalLayers).Array.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (this->NormalLayers).Array.ArrayNum;
          if (iVar5 == (this->NormalLayers).Array.ArrayMax) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&this->NormalLayers,
                               &(this->NormalLayers).Array.ArrayMax);
          }
          (this->NormalLayers).Array.ArrayNum = iVar5 + 1;
          *(TDynamicMeshOverlay<float,3> **)
           ((this->NormalLayers).Array.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_38[0];
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->NormalLayers,param_1,iVar5 - param_1,Default);
    }
    if (((this->NormalLayers).Array.ArrayNum != param_1) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6248718618683507401>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                           ,0x2c9,"NormalLayers.Num() == Num"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetNumPolygroupLayers @ 14352f470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::SetNumPolygroupLayers
          (FDynamicMeshAttributeSet *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TDynamicMeshTriangleAttribute<int,1> *this_00;
  TDynamicMeshTriangleAttribute<int,1> *pTVar6;
  ulonglong uVar7;
  TDynamicMeshTriangleAttribute<int,1> *local_38 [2];
  
  iVar5 = (this->PolygroupLayers).Array.ArrayNum;
  if (iVar5 != param_1) {
    if (iVar5 < param_1) {
      if (iVar5 < param_1) {
        uVar7 = (ulonglong)(uint)(param_1 - iVar5);
        do {
          this_00 = ::operator_new(0x30);
          pTVar6 = (TDynamicMeshTriangleAttribute<int,1> *)0x0;
          if (this_00 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
            pFVar1 = this->ParentMesh;
            (this_00->AttribValues).CurBlock = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ =
                 (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
            (this_00->AttribValues).CurBlockUsed = 0;
            (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this_00->AttribValues).Blocks.ArrayNum = 0;
            (this_00->AttribValues).Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(&this_00->AttribValues);
            this_00->ParentMesh = pFVar1;
            TDynamicMeshTriangleAttribute<int,1>::Initialize(this_00,0);
            this_00->_padding_ =
                 (longlong)&___7__TDynamicMeshScalarTriangleAttribute_H_Geometry_UE__6B_;
            pTVar6 = this_00;
          }
          pFVar2 = (this->PolygroupLayers).Array.AllocatorInstance.Data;
          local_38[0] = pTVar6;
          if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar2 + (longlong)(this->PolygroupLayers).Array.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (this->PolygroupLayers).Array.ArrayNum;
          if (iVar5 == (this->PolygroupLayers).Array.ArrayMax) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&this->PolygroupLayers,
                               &(this->PolygroupLayers).Array.ArrayMax);
          }
          (this->PolygroupLayers).Array.ArrayNum = iVar5 + 1;
          *(TDynamicMeshTriangleAttribute<int,1> **)
           ((this->PolygroupLayers).Array.AllocatorInstance.Data + (longlong)iVar5 * 8) =
               local_38[0];
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->PolygroupLayers,param_1,iVar5 - param_1,Default);
    }
    if (((this->PolygroupLayers).Array.ArrayNum != param_1) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6248718618683507441>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                           ,0x2f1,"PolygroupLayers.Num() == Num"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetNumUVLayers @ 14352f640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::SetNumUVLayers(FDynamicMeshAttributeSet *this,int param_1)

{
  TDynamicVector<int,512> *this_00;
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TDynamicMeshOverlay<float,2> *pTVar6;
  TDynamicMeshOverlay<float,2> *this_01;
  ulonglong uVar7;
  TDynamicMeshOverlay<float,2> *local_38 [2];
  
  iVar5 = (this->UVLayers).Array.ArrayNum;
  if (iVar5 != param_1) {
    if (iVar5 < param_1) {
      if (iVar5 < param_1) {
        uVar7 = (ulonglong)(uint)(param_1 - iVar5);
        do {
          pTVar6 = ::operator_new(0x88);
          this_01 = (TDynamicMeshOverlay<float,2> *)0x0;
          if (pTVar6 != (TDynamicMeshOverlay<float,2> *)0x0) {
            pFVar1 = this->ParentMesh;
            (pTVar6->ElementsRefCounts).RefCounts.CurBlock = 0;
            (pTVar6->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
            (pTVar6->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar6->ElementsRefCounts).RefCounts.Blocks.ArrayNum = 0;
            (pTVar6->ElementsRefCounts).RefCounts.Blocks.ArrayMax = 0;
            TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                      (&(pTVar6->ElementsRefCounts).RefCounts);
            this_00 = &(pTVar6->ElementsRefCounts).FreeIndices;
            (pTVar6->ElementsRefCounts).FreeIndices.CurBlockUsed = 0;
            this_00->CurBlock = 0;
            (pTVar6->ElementsRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar6->ElementsRefCounts).FreeIndices.Blocks.ArrayNum = 0;
            (pTVar6->ElementsRefCounts).FreeIndices.Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
            (pTVar6->ElementsRefCounts).UsedCount = 0;
            (pTVar6->Elements).CurBlock = 0;
            (pTVar6->Elements).CurBlockUsed = 0;
            (pTVar6->Elements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar6->Elements).Blocks.ArrayNum = 0;
            (pTVar6->Elements).Blocks.ArrayMax = 0;
            TDynamicVector<float,512>::AddAllocatedBlock(&pTVar6->Elements);
            (pTVar6->ParentVertices).CurBlockUsed = 0;
            (pTVar6->ParentVertices).CurBlock = 0;
            (pTVar6->ParentVertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar6->ParentVertices).Blocks.ArrayNum = 0;
            (pTVar6->ParentVertices).Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(&pTVar6->ParentVertices);
            (pTVar6->ElementTriangles).CurBlockUsed = 0;
            (pTVar6->ElementTriangles).CurBlock = 0;
            (pTVar6->ElementTriangles).Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar6->ElementTriangles).Blocks.ArrayNum = 0;
            (pTVar6->ElementTriangles).Blocks.ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(&pTVar6->ElementTriangles);
            pTVar6->ParentMesh = pFVar1;
            this_01 = pTVar6;
          }
          TDynamicMeshOverlay<float,2>::InitializeTriangles
                    (this_01,(this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed);
          pFVar2 = (this->UVLayers).Array.AllocatorInstance.Data;
          local_38[0] = this_01;
          if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 <
               pFVar2 + (longlong)(this->UVLayers).Array.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (this->UVLayers).Array.ArrayNum;
          if (iVar5 == (this->UVLayers).Array.ArrayMax) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&this->UVLayers,
                               &(this->UVLayers).Array.ArrayMax);
          }
          (this->UVLayers).Array.ArrayNum = iVar5 + 1;
          *(TDynamicMeshOverlay<float,2> **)
           ((this->UVLayers).Array.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_38[0];
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->UVLayers,param_1,iVar5 - param_1,Default);
    }
    if (((this->UVLayers).Array.ArrayNum != param_1) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6248718618683507366>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                           ,0x2a6,"UVLayers.Num() == Num"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetNumWeightLayers @ 14352fe80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::SetNumWeightLayers
          (FDynamicMeshAttributeSet *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float local_res8 [2];
  int local_res10;
  undefined8 *local_48 [2];
  
  iVar5 = (this->WeightLayers).Array.ArrayNum;
  if (iVar5 != param_1) {
    local_res10 = param_1;
    if (iVar5 < param_1) {
      if (iVar5 < param_1) {
        uVar8 = (ulonglong)(uint)(param_1 - iVar5);
        do {
          puVar6 = ::operator_new(0x30);
          puVar7 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            pFVar1 = this->ParentMesh;
            puVar6[1] = 0;
            puVar6[2] = pFVar1;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            *puVar6 = &
                      ___7__TDynamicVertexAttribute_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
            ;
            TDynamicVector<float,512>::AddAllocatedBlock((TDynamicVector<float,512> *)(puVar6 + 3));
            local_res8[0] = 0.0;
            if ((puVar6[2] == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Parent != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                                   ,0x9a,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TDynamicVector<float,512>::Resize
                      ((TDynamicVector<float,512> *)(puVar6 + 3),
                       *(int *)(puVar6[2] + 0x20) * 0x200 + *(int *)(puVar6[2] + 0x24));
            TDynamicVector<float,512>::Fill((TDynamicVector<float,512> *)(puVar6 + 3),local_res8);
            puVar7 = puVar6;
          }
          pFVar2 = (this->WeightLayers).Array.AllocatorInstance.Data;
          local_48[0] = puVar7;
          if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 <
               pFVar2 + (longlong)(this->WeightLayers).Array.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (this->WeightLayers).Array.ArrayNum;
          if (iVar5 == (this->WeightLayers).Array.ArrayMax) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&this->WeightLayers,
                               &(this->WeightLayers).Array.ArrayMax);
          }
          (this->WeightLayers).Array.ArrayNum = iVar5 + 1;
          *(undefined8 **)((this->WeightLayers).Array.AllocatorInstance.Data + (longlong)iVar5 * 8)
               = local_48[0];
          uVar8 = uVar8 - 1;
          param_1 = local_res10;
        } while (uVar8 != 0);
      }
    }
    else {
      TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->WeightLayers,param_1,iVar5 - param_1,Default);
    }
    if (((this->WeightLayers).Array.ArrayNum != param_1) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6248718618683507477>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshAttributeSet.cpp"
                           ,0x315,"WeightLayers.Num() == Num"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SplitAllBowties @ 1435325e0

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties(FDynamicMeshAttributeSet *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar2;
  code *pcVar3;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FTaskBase *pFVar9;
  FTask *pFVar10;
  undefined8 uVar11;
  longlong lVar12;
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  int iVar13;
  FTaskBase *local_68;
  FTaskBase *local_60;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *local_48;
  char local_40;
  
  iVar6 = (**(code **)(this->_padding_ + 0xa8))();
  iVar7 = (**(code **)(this->_padding_ + 0xb8))(this);
  iVar13 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48 = &local_58;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_40 = param_1;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      if ((iVar13 < (this->UVLayers).Array.ArrayNum) && (-1 < iVar13)) {
        if ((iVar13 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(TDynamicMeshOverlay<float,2> **)
                   ((this->UVLayers).Array.AllocatorInstance.Data + lVar12 * 8);
      }
      else {
        this_00 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      if (local_40 == '\0') {
        TDynamicMeshOverlay<float,2>::SplitBowties(this_00,true);
      }
      else {
        pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                 ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                             *)&Tasks::Private::SmallTaskAllocator);
        if (pFVar9 == (FTaskBase *)0x0) {
          pFVar9 = (FTaskBase *)0x0;
        }
        else {
          Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
          pFVar9->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::`2'::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*>'::`5'::<lambda_1>,void,void>
                ::_vftable_;
          if (((*(ulonglong *)&(pFVar9->LowLevelTask).field_0x38 & 0x20) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsCompleted()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                 ,0x1dd,L"State: %d"), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(*(longlong *)&(pFVar9->LowLevelTask).field_0x28 + 0x18))
                    (&(pFVar9->LowLevelTask).field_0x28,&pFVar9->LowLevelTask);
          *(FTaskBase **)&pFVar9->LowLevelTask = pFVar9;
          *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
          ;
          *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x8 = pFVar9;
          pFVar10 = LowLevelTasks::FTask::GetActiveTask();
          uVar11 = 0;
          if (pFVar10 != (FTask *)0x0) {
            uVar11 = *(undefined8 *)&pFVar10->field_0x30;
          }
          *(undefined8 *)&(pFVar9->LowLevelTask).field_0x30 = uVar11;
          *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xc80000542a822800;
          pFVar9->ExtendedPriority = None;
          FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&pFVar9->_padding_);
          pFVar9[1]._padding_ = (longlong)this_00;
          pFVar9->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTask<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::`2'::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*>'::`5'::<lambda_1>_>
                ::_vftable_;
        }
        Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
        pTVar4 = local_48;
        pFVar1 = (local_48->AllocatorInstance).Data;
        local_68 = pFVar9;
        if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)local_48->ArrayMax * 8)) &&
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
        iVar8 = pTVar4->ArrayNum;
        if (iVar8 == pTVar4->ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
        }
        pTVar4->ArrayNum = iVar8 + 1;
        pFVar1 = (pTVar4->AllocatorInstance).Data;
        *(undefined8 *)(pFVar1 + (longlong)iVar8 * 8) = 0;
        *(FTaskBase **)(pFVar1 + (longlong)iVar8 * 8) = local_68;
        local_68 = (FTaskBase *)0x0;
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar6);
  }
  iVar6 = 0;
  if (0 < iVar7) {
    lVar12 = 0;
    do {
      if ((iVar6 < (this->NormalLayers).Array.ArrayNum) && (-1 < iVar6)) {
        if ((iVar6 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = *(TDynamicMeshOverlay<float,3> **)
                   ((this->NormalLayers).Array.AllocatorInstance.Data + lVar12 * 8);
      }
      else {
        this_01 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      if (local_40 == '\0') {
        TDynamicMeshOverlay<float,3>::SplitBowties(this_01,true);
      }
      else {
        pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                 ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                             *)&Tasks::Private::SmallTaskAllocator);
        if (pFVar9 == (FTaskBase *)0x0) {
          pFVar9 = (FTaskBase *)0x0;
        }
        else {
          Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
          pFVar9->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::`2'::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_*>'::`5'::<lambda_1>,void,void>
                ::_vftable_;
          if (((*(ulonglong *)&(pFVar9->LowLevelTask).field_0x38 & 0x20) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsCompleted()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                 ,0x1dd,L"State: %d"), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(*(longlong *)&(pFVar9->LowLevelTask).field_0x28 + 0x18))
                    (&(pFVar9->LowLevelTask).field_0x28,&pFVar9->LowLevelTask);
          *(FTaskBase **)&pFVar9->LowLevelTask = pFVar9;
          *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
          ;
          *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x8 = pFVar9;
          pFVar10 = LowLevelTasks::FTask::GetActiveTask();
          uVar11 = 0;
          if (pFVar10 != (FTask *)0x0) {
            uVar11 = *(undefined8 *)&pFVar10->field_0x30;
          }
          *(undefined8 *)&(pFVar9->LowLevelTask).field_0x30 = uVar11;
          *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xc80000542a822800;
          pFVar9->ExtendedPriority = None;
          FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&pFVar9->_padding_);
          pFVar9[1]._padding_ = (longlong)this_01;
          pFVar9->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTask<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::`2'::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_*>'::`5'::<lambda_1>_>
                ::_vftable_;
        }
        Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
        pTVar4 = local_48;
        pFVar1 = (local_48->AllocatorInstance).Data;
        local_60 = pFVar9;
        if (((pFVar1 <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 < pFVar1 + (longlong)local_48->ArrayMax * 8)) &&
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
        iVar13 = pTVar4->ArrayNum;
        if (iVar13 == pTVar4->ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
        }
        pTVar4->ArrayNum = iVar13 + 1;
        pFVar1 = (pTVar4->AllocatorInstance).Data;
        *(undefined8 *)(pFVar1 + (longlong)iVar13 * 8) = 0;
        *(FTaskBase **)(pFVar1 + (longlong)iVar13 * 8) = local_60;
        local_60 = (FTaskBase *)0x0;
      }
      iVar6 = iVar6 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar7);
  }
  pTVar2 = (this->ColorLayer).Ptr;
  if (pTVar2 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    `UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::
    operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>
              (&local_48,pTVar2);
  }
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (&local_58,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// AttachAttribute @ 143578260

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
          (FDynamicMeshAttributeSet *this,FName param_1,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_2)

{
  int *piVar1;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar6;
  undefined1 *puVar7;
  TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>
  local_res8;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_res18;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *local_38;
  TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
  **local_30;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **local_28;
  
  this_00 = &this->GenericAttributes;
  local_res8.Value =
       (TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
        *)param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GenericAttributes).field_0x8 != *(int *)&(this->GenericAttributes).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->GenericAttributes).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->GenericAttributes).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) == param_1) {
          pTVar6 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                           *)this_00,(FName)local_res8.Value);
          if ((pTVar6 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                          *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                    ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                     *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar6->field_0x8);
          break;
        }
        iVar5 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_30 = &local_res8.Value;
  local_28 = &local_res18;
  local_res18 = param_2;
  TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_&&>_>
            ((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_30);
  if (local_res18 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  local_38 = param_2;
  if ((((TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)this->_padding_ <= &local_38) &&
      (&local_38 <
       (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)this->_padding_ +
       *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)(this->_padding_ + (longlong)iVar5 * 8) =
       local_38;
  return;
}

// HasAttachedAttribute @ 1435b5b80

bool __thiscall
UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
          (FDynamicMeshAttributeSet *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GenericAttributes).field_0x8 != *(int *)&(this->GenericAttributes).field_0x34)
  {
    puVar3 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->GenericAttributes).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->GenericAttributes).field_0x48 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->GenericAttributes + (longlong)iVar2 * 0x18) == param_1)
        goto LAB_1435b5bfd;
        iVar2 = *(int *)(*(longlong *)&this->GenericAttributes + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1435b5bfd:
  return iVar2 != -1;
}

// RemoveAttribute @ 1435bf920

void __thiscall
UE::Geometry::FDynamicMeshAttributeSet::RemoveAttribute
          (FDynamicMeshAttributeSet *this,FName param_1)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  undefined1 *puVar6;
  FName local_res8;
  FName local_res10;
  
  this_00 = &this->GenericAttributes;
  local_res10 = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GenericAttributes).field_0x8 != *(int *)&(this->GenericAttributes).field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->GenericAttributes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GenericAttributes).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GenericAttributes).field_0x48 - 1U &
                              param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      while (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) != param_1) {
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar4 * 0x18);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       *)this_00,param_1);
      if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
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
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::UnregisterExternalAttribute
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this,
                 *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar5->field_0x8);
      if (*(int *)&(this->GenericAttributes).field_0x8 !=
          *(int *)&(this->GenericAttributes).field_0x34) {
        local_res8 = param_1;
        uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
        TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                             *)this_00,local_res10.Number + uVar3,&local_res8);
      }
    }
  }
  return;
}

// operator() @ 15049f4e0

bool __thiscall
`UE::Geometry::FDynamicMeshAttributeSet::CheckBoneValidity'::__l23::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6248718618683508949>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6248718618683508949>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

