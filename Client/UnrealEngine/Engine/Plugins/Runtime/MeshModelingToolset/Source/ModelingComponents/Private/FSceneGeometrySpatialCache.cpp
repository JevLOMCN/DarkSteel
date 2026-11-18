// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// FSceneGeometrySpatialCache @ 14cb62300

FSceneGeometrySpatialCache * __thiscall
UE::Geometry::FSceneGeometrySpatialCache::FSceneGeometrySpatialCache
          (FSceneGeometrySpatialCache *this)

{
  this->_padding_ = (longlong)&___7FSceneGeometrySpatialCache_Geometry_UE__6B_;
  this->UniqueIDGenerator = 0;
  *(undefined8 *)&this->ComponentMap = 0;
  *(undefined8 *)&(this->ComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentMap).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x48 = 0;
  *(undefined8 *)&this->Spatials = 0;
  *(undefined8 *)&(this->Spatials).field_0x8 = 0;
  *(undefined8 *)&(this->Spatials).field_0x20 = 0;
  *(undefined4 *)&(this->Spatials).field_0x28 = 0;
  *(undefined4 *)&(this->Spatials).field_0x2c = 0x80;
  *(undefined4 *)&(this->Spatials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Spatials).field_0x34 = 0;
  *(undefined8 *)&(this->Spatials).field_0x40 = 0;
  *(undefined4 *)&(this->Spatials).field_0x48 = 0;
  FSparseDynamicOctree3::FSparseDynamicOctree3(&this->BoundsOctree);
  (this->BoundsOctree).RootDimension = 100000.0;
  (this->BoundsOctree).MaxTreeDepth = 7;
  return this;
}

// ~FSceneGeometrySpatialCache @ 14cb64a60

void __thiscall
UE::Geometry::FSceneGeometrySpatialCache::~FSceneGeometrySpatialCache
          (FSceneGeometrySpatialCache *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSceneGeometrySpatialCache_Geometry_UE__6B_;
  FSparseDynamicOctree3::~FSparseDynamicOctree3(&this->BoundsOctree);
  *(undefined4 *)&(this->Spatials).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Spatials).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Spatials);
  *(undefined4 *)&(this->ComponentMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComponentMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentMap);
  return;
}

// operator() @ 14cb6d1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall
`UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ISceneGeometrySpatial *pIVar2;
  FSceneQueryVisibilityFilter *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar6;
  UPrimitiveComponent *pUVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FSceneGeometryID local_res10 [2];
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  local_res10[0].UniqueID = param_1;
  pTVar6 = TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
           ::FindChecked((TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
                          *)(*(longlong *)this + 0x60),local_res10);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pIVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FSceneQueryVisibilityFilter *)**(undefined8 **)((longlong)this + 8);
  if (this_00 == (FSceneQueryVisibilityFilter *)0x0) {
LAB_14cb6d234:
    local_70 = 0xffffffffffffffff;
    local_a0 = 0;
    local_88 = __real_47efffffe0000000;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_98 = ___xmm_3ff00000000000000000000000000000;
    uStack_90 = _UNK_15061cbc8;
    local_80 = 0;
    local_78 = 0;
    local_68 = 0;
    local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        dVar8 = (double)(*pcVar3)();
        return dVar8;
      }
    }
    cVar5 = (**(code **)(pIVar2->_padding_ + 0x28))
                      (pIVar2,*(undefined8 *)((longlong)this + 0x10),&local_b8,
                       (int)**(undefined8 **)((longlong)this + 0x18));
    if (cVar5 != '\0') {
      uVar9 = (undefined4)local_88;
      uVar10 = (undefined4)((ulonglong)local_88 >> 0x20);
      goto LAB_14cb6d314;
    }
  }
  else {
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        dVar8 = (double)(*pcVar3)();
        return dVar8;
      }
    }
    pUVar7 = (UPrimitiveComponent *)(**(code **)(pIVar2->_padding_ + 0x18))(pIVar2);
    bVar4 = FSceneQueryVisibilityFilter::IsVisible(this_00,pUVar7);
    if (bVar4) goto LAB_14cb6d234;
  }
  uVar9 = (undefined4)__real_7fefffffffffffff;
  uVar10 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
LAB_14cb6d314:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (double)CONCAT44(uVar10,uVar9);
}

// DisableComponentTracking @ 14cb82380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneGeometrySpatialCache::DisableComponentTracking
          (FSceneGeometrySpatialCache *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *pTVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 local_res8 [2];
  UPrimitiveComponent *local_res10;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->ComponentMap).field_0x8 != *(int *)&(this->ComponentMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ComponentMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ComponentMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->ComponentMap).field_0x48 - 1U & uVar6) * 4
                    );
    if (iVar3 != -1) {
      while (*(UPrimitiveComponent **)(*(longlong *)&this->ComponentMap + (longlong)iVar3 * 0x18) !=
             param_1) {
        iVar3 = *(int *)(*(longlong *)&this->ComponentMap + 0x10 + (longlong)iVar3 * 0x18);
        if (iVar3 == -1) {
          return;
        }
      }
      pTVar4 = TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                       *)&this->ComponentMap,param_1);
      if (pTVar4 == (TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *)0x0) {
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
      local_res8[0] = *(undefined4 *)&pTVar4->field_0x8;
      local_res10 = param_1;
      if (*(int *)&(this->ComponentMap).field_0x8 != *(int *)&(this->ComponentMap).field_0x34) {
        TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
        ::RemoveImpl<UPrimitiveComponent_const_*>
                  ((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                    *)&this->ComponentMap,uVar6,&local_res10);
      }
      (**(code **)(this->_padding_ + 0x18))(this,local_res8);
    }
  }
  return;
}

// DisableGeometryTracking @ 14cb824b0

void __thiscall
UE::Geometry::FSceneGeometrySpatialCache::DisableGeometryTracking
          (FSceneGeometrySpatialCache *this,FSceneGeometryID *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar1 = param_1->UniqueID;
  if (*(int *)&(this->Spatials).field_0x8 != *(int *)&(this->Spatials).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Spatials).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Spatials).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Spatials).field_0x48 - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Spatials).field_0x0;
      while (*(uint *)((longlong)iVar3 * 0x20 + lVar2) != uVar1) {
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar2);
        if (iVar3 == -1) {
          return;
        }
      }
      FSparseDynamicOctree3::RemoveObject(&this->BoundsOctree,uVar1);
      if (*(int *)&(this->Spatials).field_0x8 != *(int *)&(this->Spatials).field_0x34) {
        TSet<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::Geometry::FSceneGeometryID>
                  ((TSet<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>,FDefaultSetAllocator>
                    *)&this->Spatials,param_1->UniqueID,param_1);
      }
    }
  }
  return;
}

// EnableComponentTracking @ 14cb88850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneGeometrySpatialCache::EnableComponentTracking
          (FSceneGeometrySpatialCache *this,UPrimitiveComponent *param_1,FSceneGeometryID *param_2)

{
  TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  TConsoleVariableData<bool> *pTVar6;
  FSceneGeometryID *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UPrimitiveComponent *pUVar13;
  TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *pTVar14;
  TAxisAlignedBox3<double> *pTVar15;
  FSharedReferencer<1> FVar16;
  undefined1 *puVar17;
  TReferenceControllerBase<1> *pTVar18;
  UPrimitiveComponent *pUVar19;
  UPrimitiveComponent *pUVar20;
  TPairInitializer<UPrimitiveComponent_*_const_&,UE::Geometry::FSceneGeometryID_const_&> local_res8;
  TReferenceControllerBase<1> *local_f8;
  FSharedReferencer<1> FStack_f0;
  code *local_e8;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  FSceneGeometryID **local_c0;
  FSceneGeometryID *local_b8;
  FSceneGeometryID *local_b0;
  TReferenceControllerBase<1> **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [56];
  
  pTVar6 = CVarEnableModelingVolumeSnapping.Ref;
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_res8.Value = (FSceneGeometryID *)param_1;
  if (*(int *)&(this->ComponentMap).field_0x8 != *(int *)&(this->ComponentMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->ComponentMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ComponentMap).field_0x38;
    }
    iVar11 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&(this->ComponentMap).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4
                     );
    if (iVar11 != -1) {
      do {
        if (*(UPrimitiveComponent **)(*(longlong *)&this->ComponentMap + (longlong)iVar11 * 0x18) ==
            param_1) {
          pTVar14 = TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                            *)&this->ComponentMap,param_1);
          if ((pTVar14 == (TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          param_2->UniqueID = *(int *)&pTVar14->field_0x8;
          return true;
        }
        iVar11 = *(int *)(*(longlong *)&this->ComponentMap + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  bVar8 = IsInParallelGameThread();
  pUVar19 = (UPrimitiveComponent *)0x0;
  if (bVar8) {
LAB_14cb8891c:
    pUVar13 = pUVar19;
  }
  else {
    bVar8 = IsInGameThread();
    pUVar13 = (UPrimitiveComponent *)&DAT_00000001;
    if (bVar8) goto LAB_14cb8891c;
  }
  pFVar7 = local_res8.Value;
  local_f8 = (TReferenceControllerBase<1> *)0x0;
  FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6->ShadowedValue[(longlong)&pUVar13->field_0x0] == false) {
LAB_14cb88be5:
    pFVar7 = local_res8.Value;
    if ((UPrimitiveComponent *)local_res8.Value == (UPrimitiveComponent *)0x0) goto LAB_14cb88d10;
    pUVar12 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    lVar2 = *(longlong *)
             ((TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)((longlong)pFVar7 + 0x10))->Pad;
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) goto LAB_14cb88d10;
    iVar11 = this->UniqueIDGenerator;
    this->UniqueIDGenerator = iVar11 + 1;
    param_2->UniqueID = iVar11;
    pUVar13 = (UPrimitiveComponent *)
              SharedPointerInternals::NewIntrusiveReferenceController<1,FSceneDynamicMeshSpatial>();
    pTVar1 = (TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)&pUVar13->field_0x10;
    if ((pTVar1 == (TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    if (pUVar13 != (UPrimitiveComponent *)0x0) {
      LOCK();
      *(int *)&pUVar13->field_0x8 = (int)*(longlong *)&pUVar13->field_0x8 + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar13);
    if ((pTVar1 == (TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pUVar20 = (UPrimitiveComponent *)local_res8.Value;
    pcVar3 = *(code **)(*(longlong *)pTVar1->Pad + 0x48);
    if ((UPrimitiveComponent *)local_res8.Value == (UPrimitiveComponent *)0x0) {
LAB_14cb88ccf:
      pUVar20 = pUVar19;
    }
    else {
      pUVar12 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      lVar2 = *(longlong *)
               ((TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)((longlong)pUVar20 + 0x10))->Pad;
      iVar11 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar12->_padding_)) goto LAB_14cb88ccf;
    }
    (*pcVar3)(pTVar1,pUVar20);
    if (pUVar13 != (UPrimitiveComponent *)0x0) {
      LOCK();
      *(int *)&pUVar13->field_0x8 = (int)*(longlong *)&pUVar13->field_0x8 + 1;
      UNLOCK();
    }
    local_d0 = 0;
    local_f8 = (TReferenceControllerBase<1> *)pTVar1;
    local_c8.ReferenceController = (TReferenceControllerBase<1> *)pUVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f0,&local_c8);
    FVar16.ReferenceController = local_c8.ReferenceController;
  }
  else {
    if ((UPrimitiveComponent *)local_res8.Value == (UPrimitiveComponent *)0x0) goto LAB_14cb88d10;
    pUVar12 = Z_Construct_UClass_UBrushComponent_NoRegister();
    lVar2 = *(longlong *)
             ((TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)((longlong)pFVar7 + 0x10))->Pad;
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) goto LAB_14cb88be5;
    iVar11 = this->UniqueIDGenerator;
    this->UniqueIDGenerator = iVar11 + 1;
    param_2->UniqueID = iVar11;
    pUVar13 = ::operator_new(0x1d0);
    if (pUVar13 == (UPrimitiveComponent *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
      pUVar13 = pUVar19;
    }
    else {
      *(atomic<int> *)&pUVar13->field_0x8 = (atomic<int>)0x1;
      *(atomic<int> *)&pUVar13->field_0xc = (atomic<int>)0x1;
      *(undefined ***)pUVar13 =
           &
           ___7__TIntrusiveReferenceController_VFSceneVolumeSpatial___00_SharedPointerInternals__6B_
      ;
      memset(&pUVar13->field_0x1c,0,0x1b4);
      *(undefined4 *)&pUVar13->field_0x18 = 0;
      *(undefined ***)((TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)&pUVar13->field_0x10)->Pad
           = &___7ISceneGeometrySpatial_Geometry_UE__6B_;
      aVar5 = ISceneGeometrySpatial::UniqueIDGenerator;
      uStack_98 = _UNK_150a9e648;
      local_a0 = ___xmm_7fefffffffffffff7fefffffffffffff;
      uStack_80 = _UNK_1508ffb58;
      local_88 = ___xmm_ffefffffffffffffffefffffffffffff;
      local_78 = __real_ffefffffffffffff;
      local_90 = __real_7fefffffffffffff;
      LOCK();
      ISceneGeometrySpatial::UniqueIDGenerator =
           (atomic<int>)((int)ISceneGeometrySpatial::UniqueIDGenerator + 1);
      UNLOCK();
      *(undefined ***)((TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)&pUVar13->field_0x10)->Pad
           = &___7FSceneVolumeSpatial__6B_;
      *(atomic<int> *)&pUVar13->field_0x18 = aVar5;
      *(undefined8 *)&pUVar13->field_0x20 = 0;
      *(undefined8 *)&pUVar13->field_0x28 = local_a0;
      *(undefined8 *)&pUVar13->field_0x30 = uStack_98;
      *(undefined8 *)&pUVar13->field_0x38 = local_90;
      *(undefined8 *)&pUVar13->field_0x40 = local_88;
      *(undefined8 *)&pUVar13->field_0x48 = uStack_80;
      *(undefined8 *)&pUVar13->field_0x50 = local_78;
      *(undefined8 *)&pUVar13->field_0x58 = 0;
      *(undefined8 *)&pUVar13->field_0x60 = 0;
      uVar4 = _UNK_15061cbc8;
      *(undefined8 *)&pUVar13->field_0x68 = ___xmm_3ff00000000000000000000000000000;
      *(undefined8 *)&pUVar13->field_0x70 = uVar4;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)&pUVar13->field_0x78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&pUVar13->field_0x80 = uVar4;
      *(double *)&pUVar13->field_0x88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      *(double *)&pUVar13->field_0x90 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      *(undefined8 *)&pUVar13->field_0x98 = uVar4;
      *(double *)&pUVar13->field_0xa0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      FColliderMesh::FColliderMesh((FColliderMesh *)&pUVar13->field_0xb0);
      pTVar18 = (TReferenceControllerBase<1> *)&pUVar13->field_0x10;
      if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      LOCK();
      *(atomic<int> *)&pUVar13->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pUVar13->field_0x8 + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar13);
      if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    pUVar19 = (UPrimitiveComponent *)local_res8.Value;
    local_e8 = *(code **)(pTVar18->_padding_ + 0x48);
    if ((UPrimitiveComponent *)local_res8.Value == (UPrimitiveComponent *)0x0) {
LAB_14cb88ba6:
      pUVar19 = (UPrimitiveComponent *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UBrushComponent_NoRegister();
      lVar2 = *(longlong *)
               ((TTypeCompatibleBytes<FSceneDynamicMeshSpatial> *)((longlong)pUVar19 + 0x10))->Pad;
      iVar11 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar12->_padding_)) goto LAB_14cb88ba6;
    }
    (*local_e8)(pTVar18,pUVar19);
    if (pUVar13 != (UPrimitiveComponent *)0x0) {
      LOCK();
      *(atomic<int> *)&pUVar13->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pUVar13->field_0x8 + 1);
      UNLOCK();
    }
    local_e0 = 0;
    local_f8 = pTVar18;
    local_d8.ReferenceController = (TReferenceControllerBase<1> *)pUVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f0,&local_d8);
    FVar16.ReferenceController = local_d8.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar13);
LAB_14cb88d10:
  if (local_f8 == (TReferenceControllerBase<1> *)0x0) {
    bVar8 = false;
  }
  else {
    local_c0 = &local_res8.Value;
    local_b8 = param_2;
    TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UPrimitiveComponent_*_const_&,UE::Geometry::FSceneGeometryID_const_&>_>
              ((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                *)&this->ComponentMap,&local_res8,(bool *)&local_c0);
    local_a8 = &local_f8;
    local_b0 = param_2;
    TSet<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Geometry::FSceneGeometryID_const_&,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_const_&>_>
              ((TSet<TTuple<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>,FDefaultSetAllocator>
                *)&this->Spatials,
               (TPairInitializer<UE::Geometry::FSceneGeometryID_const_&,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>_const_&>
                *)&stack0x00000020,(bool *)&local_b0);
    if ((local_f8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    (**(code **)(local_f8->_padding_ + 0x38))(local_f8,1);
    if ((local_f8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pTVar15 = (TAxisAlignedBox3<double> *)
              (**(code **)(local_f8->_padding_ + 0x20))(local_f8,local_70);
    FSparseDynamicOctree3::InsertObject(&this->BoundsOctree,param_2->UniqueID,pTVar15);
    bVar8 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_f0.ReferenceController);
  return bVar8;
}

// FindNearestHit @ 14cb8d670

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
UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit
          (FSceneGeometrySpatialCache *this,TRay<double> *param_1,FSceneGeometryPoint *param_2,
          FSceneGeometryID *param_3,FSceneQueryVisibilityFilter *param_4,double param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ISceneGeometrySpatial *pIVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar13;
  FSceneGeometryID local_res8 [2];
  FSceneGeometrySpatialCache *local_res10;
  code *local_1b8;
  FSceneGeometrySpatialCache **local_1b0;
  code *local_1a8;
  FSceneGeometrySpatialCache **local_1a0;
  FSceneGeometrySpatialCache *local_198;
  FSceneQueryVisibilityFilter **local_190;
  TRay<double> *local_188;
  double *local_180;
  double local_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  AActor *pAStack_140;
  UPrimitiveComponent *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar5 = _UNK_15291a4a8;
  dVar4 = ___xmm_47efffffe00000003ff0000000000000;
  local_90 = 0xffffffffffffffff;
  local_88 = 0;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b0 = ___xmm_47efffffe00000003ff0000000000000;
  dStack_a8 = _UNK_15291a4a8;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (param_2->Ray).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->Ray).Origin.field0_0x0._s_0.Y = (double)uVar7;
  (param_2->Ray).Origin.field0_0x0._s_0.Z = (double)uVar8;
  (param_2->Ray).Direction.field0_0x0._s_0.X = 0.0;
  (param_2->Ray).Direction.field0_0x0._s_0.Y = 0.0;
  (param_2->Ray).Direction.field0_0x0._s_0.Z = dVar4;
  param_2->RayDistance = dVar5;
  param_2->Actor = (AActor *)0x0;
  param_2->Component = (UPrimitiveComponent *)0x0;
  param_2->ComponentElementIndex = -1;
  param_2->GeometryIndex = -1;
  *(undefined8 *)&param_2->GeometryType = 0;
  (param_2->PointBaryCoords).field0_0x0._s_0.X = (double)uVar6;
  (param_2->PointBaryCoords).field0_0x0._s_0.Y = (double)uVar7;
  (param_2->PointBaryCoords).field0_0x0._s_0.Z = (double)uVar8;
  (param_2->LocalPoint).field0_0x0._s_0.X = (double)uVar6;
  (param_2->LocalPoint).field0_0x0._s_0.Y = (double)uVar7;
  local_190 = &param_4;
  local_180 = &param_5;
  local_1b0 = &local_198;
  local_1b8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
              ::Call;
  local_1a0 = &local_res10;
  (param_2->LocalPoint).field0_0x0._s_0.Z = (double)uVar8;
  (param_2->WorldPoint).field0_0x0._s_0.X = (double)uVar6;
  (param_2->WorldPoint).field0_0x0._s_0.Y = (double)uVar7;
  (param_2->WorldPoint).field0_0x0._s_0.Z = (double)uVar8;
  local_1a8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSceneGeometrySpatialCache::FindNearestHit'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
              ::Call;
  local_res10 = this;
  local_198 = this;
  local_188 = param_1;
  iVar12 = FSparseDynamicOctree3::FindNearestHitObject
                     (&this->BoundsOctree,param_1,
                      (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)
                      &local_1a8,
                      (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_1b8
                      ,__real_7fefffffffffffff);
  if (-1 < iVar12) {
    local_res8[0].UniqueID = iVar12;
    pTVar13 = TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
              ::FindChecked((TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
                             *)&this->Spatials,local_res8);
    pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar13->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    dStack_160 = 0.0;
    local_148 = __real_47efffffe0000000;
    local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158 = ___xmm_3ff00000000000000000000000000000;
    dStack_150 = _UNK_15061cbc8;
    pAStack_140 = (AActor *)0x0;
    local_138 = (UPrimitiveComponent *)0x0;
    uStack_130 = 0xffffffffffffffff;
    local_128 = 0;
    dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if ((pIVar2 == (ISceneGeometrySpatial *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    cVar11 = (**(code **)(pIVar2->_padding_ + 0x28))(pIVar2,param_1,&local_178,param_5);
    if (cVar11 != '\0') {
      (param_2->Ray).Origin.field0_0x0._s_0.X = local_178;
      (param_2->Ray).Origin.field0_0x0._s_0.Y = dStack_170;
      (param_2->Ray).Origin.field0_0x0._s_0.Z = dStack_168;
      (param_2->Ray).Direction.field0_0x0._s_0.X = dStack_160;
      (param_2->Ray).Direction.field0_0x0._s_0.Y = local_158;
      (param_2->Ray).Direction.field0_0x0._s_0.Z = dStack_150;
      param_2->RayDistance = local_148;
      param_2->Actor = pAStack_140;
      param_2->Component = local_138;
      param_2->ComponentElementIndex = (undefined4)uStack_130;
      param_2->GeometryIndex = uStack_130._4_4_;
      *(ulonglong *)&param_2->GeometryType = CONCAT44(uStack_124,local_128);
      (param_2->PointBaryCoords).field0_0x0._s_0.X = dStack_120;
      (param_2->PointBaryCoords).field0_0x0._s_0.Y = local_118;
      (param_2->PointBaryCoords).field0_0x0._s_0.Z = dStack_110;
      (param_2->LocalPoint).field0_0x0._s_0.X = local_108;
      (param_2->LocalPoint).field0_0x0._s_0.Y = dStack_100;
      (param_2->LocalPoint).field0_0x0._s_0.Z = dStack_f8;
      (param_2->WorldPoint).field0_0x0._s_0.X = dStack_f0;
      (param_2->WorldPoint).field0_0x0._s_0.Y = local_e8;
      (param_2->WorldPoint).field0_0x0._s_0.Z = dStack_e0;
      param_3->UniqueID = iVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return true;
    }
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1898223674788413935>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneGeometrySpatialCache.cpp"
                       ,0x1ef,"bHit");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return false;
}

// GetGeometry @ 14cb964c0

bool __thiscall
UE::Geometry::FSceneGeometrySpatialCache::GetGeometry
          (FSceneGeometrySpatialCache *this,FSceneGeometryID param_1,EGeometryPointType param_2,
          int param_3,bool param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->Spatials).field_0x8 != *(int *)&(this->Spatials).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Spatials).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Spatials).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->Spatials).field_0x48 - 1U & param_1.UniqueID) * 4);
    if (iVar4 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)&this->Spatials);
        if (*piVar5 == param_1.UniqueID) {
          plVar6 = (longlong *)(piVar5 + 2);
          if (piVar5 == (int *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          if (plVar6 == (longlong *)0x0) {
            return false;
          }
          if ((*plVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar3 = (**(code **)(*(longlong *)*plVar6 + 0x30))
                            ((longlong *)*plVar6,param_2,param_3,param_4,param_5,param_6,param_7);
          return (bool)uVar3;
        }
        iVar4 = piVar5[6];
      } while (iVar4 != -1);
    }
  }
  return false;
}

// HaveCacheForComponent @ 14cba1410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneGeometrySpatialCache::HaveCacheForComponent
          (FSceneGeometrySpatialCache *this,UPrimitiveComponent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ISceneGeometrySpatial *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *pTVar6;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar7;
  FSceneGeometryID *pFVar8;
  
  pTVar6 = TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                   *)&this->ComponentMap,param_1);
  pFVar8 = (FSceneGeometryID *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *)0x0) {
    pFVar8 = (FSceneGeometryID *)0x0;
  }
  if (pFVar8 != (FSceneGeometryID *)0x0) {
    pTVar7 = TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
             ::FindChecked((TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
                            *)&this->Spatials,pFVar8);
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar7->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar5 = (**(code **)(pIVar2->_padding_ + 8))(pIVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return (bool)uVar5;
  }
  return false;
}

// NotifyGeometryUpdate @ 14cba5110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneGeometrySpatialCache::NotifyGeometryUpdate
          (FSceneGeometrySpatialCache *this,UPrimitiveComponent *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ISceneGeometrySpatial *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *pTVar6;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar7;
  TAxisAlignedBox3<double> *pTVar8;
  FSceneGeometryID *pFVar9;
  undefined1 local_38 [48];
  
  pTVar6 = TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                   *)&this->ComponentMap,param_1);
  pFVar9 = (FSceneGeometryID *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *)0x0) {
    pFVar9 = (FSceneGeometryID *)0x0;
  }
  if (pFVar9 != (FSceneGeometryID *)0x0) {
    pTVar7 = TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
             ::FindChecked((TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
                            *)&this->Spatials,pFVar9);
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar7->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,param_2);
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pTVar8 = (TAxisAlignedBox3<double> *)(**(code **)(pIVar2->_padding_ + 0x20))(pIVar2,local_38);
    FSparseDynamicOctree3::ReinsertObject(&this->BoundsOctree,pFVar9->UniqueID,pTVar8,0xffffffff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  return false;
}

// NotifyTransformUpdate @ 14cba52f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSceneGeometrySpatialCache::NotifyTransformUpdate
          (FSceneGeometrySpatialCache *this,UPrimitiveComponent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ISceneGeometrySpatial *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *pTVar6;
  TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1> *pTVar7;
  TAxisAlignedBox3<double> *pTVar8;
  FSceneGeometryID *pFVar9;
  undefined1 local_38 [48];
  
  pTVar6 = TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID,0>,FDefaultSetAllocator>
                   *)&this->ComponentMap,param_1);
  pFVar9 = (FSceneGeometryID *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<UPrimitiveComponent_*,UE::Geometry::FSceneGeometryID> *)0x0) {
    pFVar9 = (FSceneGeometryID *)0x0;
  }
  if (pFVar9 != (FSceneGeometryID *)0x0) {
    pTVar7 = TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
             ::FindChecked((TMapBase<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FSceneGeometryID,TSharedPtr<UE::Geometry::ISceneGeometrySpatial,1>,0>_>
                            *)&this->Spatials,pFVar9);
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar7->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    (**(code **)(pIVar2->_padding_ + 0x40))(pIVar2);
    if (pIVar2 == (ISceneGeometrySpatial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pTVar8 = (TAxisAlignedBox3<double> *)(**(code **)(pIVar2->_padding_ + 0x20))(pIVar2,local_38);
    FSparseDynamicOctree3::ReinsertObject(&this->BoundsOctree,pFVar9->UniqueID,pTVar8,0xffffffff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  return false;
}

