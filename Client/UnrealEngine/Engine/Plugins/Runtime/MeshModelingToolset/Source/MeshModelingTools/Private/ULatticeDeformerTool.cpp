// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 38

// StaticClass @ 14cc91750

UClass * __cdecl ULatticeDeformerTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerTool",
               &Z_Registration_Info_UClass_ULatticeDeformerTool.InnerSingleton,
               StaticRegisterNativesULatticeDeformerTool,0x250,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<ULatticeDeformerTool>,
               InternalVTableHelperCtorCaller<ULatticeDeformerTool>,local_res8,
               UMultiTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerTool.InnerSingleton;
}

// ULatticeDeformerTool @ 14ccbb440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULatticeDeformerTool * __thiscall
ULatticeDeformerTool::ULatticeDeformerTool(ULatticeDeformerTool *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMultiTargetWithSelectionTool::UMultiTargetWithSelectionTool
            ((UMultiTargetWithSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  this->_padding_ = (longlong)&_vftable__for__IModelingToolExternalDynamicMeshUpdateAPI__;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->Submesh).Object = (FDynamicSubmesh3 *)0x0;
  (this->Submesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Lattice).Object = (FFFDLattice *)0x0;
  (this->Lattice).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ControlPointsMechanic).field0_0x0.DebugPtr = (ULatticeControlPointsMechanic *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (ULatticeDeformerToolProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->SculptLayerProperties).field0_0x0.DebugPtr = (UMeshSculptLayerProperties *)0x0;
  *(undefined8 *)&this->LatticeStorage = 0;
  *(undefined8 *)&(this->LatticeStorage).field_0x8 = 0;
  (this->DeformationSolver).Ptr = (IConstrainedMeshSolver *)0x0;
  (this->LatticeGraph).Ptr = (FDynamicGraph3<double> *)0x0;
  *(undefined8 *)&this->ConstrainedLatticePoints = 0;
  *(undefined8 *)&(this->ConstrainedLatticePoints).field_0x8 = 0;
  *(undefined8 *)&(this->ConstrainedLatticePoints).field_0x20 = 0;
  this->bLatticeDeformed = false;
  this->bShouldRebuild = false;
  this->bHasSelection = false;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x28 = 0;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x34 = 0;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstrainedLatticePoints).field_0x40 = 0;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x48 = 0;
  this->CurrentChangeStamp = 0;
  this->PendingAction = NoAction;
  return this;
}

// ULatticeDeformerTool @ 14ccbb5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULatticeDeformerTool * __thiscall
ULatticeDeformerTool::ULatticeDeformerTool(ULatticeDeformerTool *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMultiTargetWithSelectionTool::UMultiTargetWithSelectionTool
            ((UMultiTargetWithSelectionTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  this->_padding_ = (longlong)&_vftable__for__IModelingToolExternalDynamicMeshUpdateAPI__;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->Submesh).Object = (FDynamicSubmesh3 *)0x0;
  (this->Submesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Lattice).Object = (FFFDLattice *)0x0;
  (this->Lattice).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ControlPointsMechanic).field0_0x0.DebugPtr = (ULatticeControlPointsMechanic *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (ULatticeDeformerToolProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->SculptLayerProperties).field0_0x0.DebugPtr = (UMeshSculptLayerProperties *)0x0;
  *(undefined8 *)&this->LatticeStorage = 0;
  *(undefined8 *)&(this->LatticeStorage).field_0x8 = 0;
  (this->DeformationSolver).Ptr = (IConstrainedMeshSolver *)0x0;
  (this->LatticeGraph).Ptr = (FDynamicGraph3<double> *)0x0;
  *(undefined8 *)&this->ConstrainedLatticePoints = 0;
  *(undefined8 *)&(this->ConstrainedLatticePoints).field_0x8 = 0;
  *(undefined8 *)&(this->ConstrainedLatticePoints).field_0x20 = 0;
  this->bLatticeDeformed = false;
  this->bShouldRebuild = false;
  this->bHasSelection = false;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x28 = 0;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x34 = 0;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstrainedLatticePoints).field_0x40 = 0;
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x48 = 0;
  this->CurrentChangeStamp = 0;
  this->PendingAction = NoAction;
  return this;
}

// ~ULatticeDeformerTool @ 14ccc36b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::~ULatticeDeformerTool(ULatticeDeformerTool *this)

{
  void *pvVar1;
  FDynamicGraph3<double> *pFVar2;
  IConstrainedMeshSolver *pIVar3;
  
  *(undefined4 *)&(this->ConstrainedLatticePoints).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstrainedLatticePoints).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstrainedLatticePoints);
  pFVar2 = (this->LatticeGraph).Ptr;
  if (pFVar2 != (FDynamicGraph3<double> *)0x0) {
    (*(code *)pFVar2[-1].Vertices.Data.Blocks.AllocatorInstance.Data)
              (&pFVar2[-1].Vertices.Data.Blocks);
  }
  pIVar3 = (this->DeformationSolver).Ptr;
  if (pIVar3 != (IConstrainedMeshSolver *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Lattice).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Submesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IModelingToolExternalDynamicMeshUpdateAPI__6B_;
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UMultiTargetWithSelectionTool::~UMultiTargetWithSelectionTool
            ((UMultiTargetWithSelectionTool *)this);
  return;
}

// operator() @ 14ccc55c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `ULatticeDeformerTool::Setup'::__l2::<lambda_11>::operator()(void *this)

{
  longlong lVar1;
  
  if ((((*(ULatticeDeformerTool **)this)->Settings).field0_0x0.DebugPtr)->bSoftDeformation != false)
  {
    ULatticeDeformerTool::SoftDeformLattice(*(ULatticeDeformerTool **)this);
  }
  ULatticeControlPointsMechanic::UpdatePointLocations
            (*(ULatticeControlPointsMechanic **)(*(longlong *)this + 0x1b0),
             (TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
              *)(*(longlong *)this + 0x1f8));
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            (*(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)this + 0x1c0));
  *(bool *)(*(longlong *)(*(longlong *)this + 0x1b8) + 0xca) =
       *(char *)(*(longlong *)(*(longlong *)this + 0x1b0) + 0x80) == '\0';
  lVar1 = *(longlong *)(*(longlong *)this + 0x1c8);
  if (lVar1 != 0) {
    *(bool *)(lVar1 + 0x40) = *(char *)(*(longlong *)(*(longlong *)this + 0x1b0) + 0x80) == '\0';
  }
  return;
}

// operator() @ 14ccc5720

bool __thiscall `ULatticeDeformerTool::Setup'::__l2::<lambda_13>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  uVar7 = 1;
  iVar16 = 0;
  lVar3 = *(longlong *)(*(longlong *)this + 0x1b0);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x358);
  iVar9 = *(int *)(lVar3 + 0x370);
  iVar8 = 0;
  if (iVar9 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x368);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x368) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ccc57cd;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = local_res10 + -1 + iVar16;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14ccc57cd:
  uVar13 = *(uint *)(lVar3 + 0x370);
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)(lVar3 + 0x350) - *(int *)(lVar3 + 0x37c));
  TStack_60.Array = pTVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)(lVar3 + 0x370);
  if (uVar13 != uVar7) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x368);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar3 + 0x368) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ccc58d0;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14ccc58d0:
  while( true ) {
    if (*(int *)(lVar3 + 0x350) - *(int *)(lVar3 + 0x37c) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) && (TStack_60.Array == pTVar1)) {
      return true;
    }
    lVar10 = *(longlong *)this;
    uVar7 = *(uint *)(*(longlong *)(lVar3 + 0x348) + (longlong)TStack_60.CurrentBitIndex * 0xc);
    if (*(int *)(lVar10 + 0x200) == *(int *)(lVar10 + 0x22c)) {
      return false;
    }
    lVar11 = lVar10 + 0x230;
    if (*(longlong *)(lVar10 + 0x238) != 0) {
      lVar11 = *(longlong *)(lVar10 + 0x238);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar10 + 0x240) - 1U & uVar7) * 4);
    if (iVar9 == -1) break;
    while (*(uint *)(*(longlong *)(lVar10 + 0x1f8) + (longlong)iVar9 * 0x28) != uVar7) {
      iVar9 = *(int *)(*(longlong *)(lVar10 + 0x1f8) + 0x20 + (longlong)iVar9 * 0x28);
      if (iVar9 == -1) {
        return false;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// AllowToolMeshUpdates @ 14ccde2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULatticeDeformerTool::AllowToolMeshUpdates(ULatticeDeformerTool *this)

{
  if ((*(char *)(this->_padding_ + 0x2f0) == '\0') && (*(char *)(this->_padding_ + 0x80) == '\0')) {
    return true;
  }
  return false;
}

// ApplyAction @ 14ccde9c0

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
ULatticeDeformerTool::ApplyAction(ULatticeDeformerTool *this,ELatticeDeformerToolAction param_1)

{
  if (param_1 == Constrain) {
    ConstrainSelectedPoints(this);
    return;
  }
  if (param_1 == ClearConstraints) {
    ClearConstrainedPoints(this);
    return;
  }
  return;
}

// CanAccept @ 14cceb9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULatticeDeformerTool::CanAccept(ULatticeDeformerTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  
  pUVar1 = (this->Preview).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMeshOpPreviewWithBackgroundCompute *)0x0) && (pUVar1->bResultValid != false)) {
    return true;
  }
  return false;
}

// ClearConstrainedPoints @ 14ccedbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::ClearConstrainedPoints(ULatticeDeformerTool *this)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStackY_c8 [32];
  undefined8 *local_98 [2];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  puVar5 = (undefined8 *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->ConstrainedLatticePoints);
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *)&this->ConstrainedLatticePoints);
  UpdateMechanicColorOverrides(this);
  lVar3 = (**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar2 = *(code **)(*(longlong *)(lVar3 + 0x28) + 0x20);
  puVar4 = ::operator_new(0xb0);
  if (puVar4 != (undefined8 *)0x0) {
    iVar1 = this->CurrentChangeStamp;
    *puVar4 = &___7FLatticeDeformerToolConstrainedPointsChange__6B_;
    *(undefined8 *)
     &((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
        *)(puVar4 + 1))->Elements = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0x80;
    *(undefined4 *)(puVar4 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)(puVar4 + 1),
                (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)local_88);
    *(undefined8 *)
     &((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
        *)(puVar4 + 0xb))->Elements = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x84) = 0x80;
    *(undefined4 *)(puVar4 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x8c) = 0;
    puVar4[0x13] = 0;
    *(undefined4 *)(puVar4 + 0x14) = 0;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)(puVar4 + 0xb),
                (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)&this->ConstrainedLatticePoints);
    *(int *)(puVar4 + 0x15) = iVar1;
    puVar5 = puVar4;
  }
  local_98[0] = puVar5;
  (*pcVar2)(lVar3 + 0x28,this,local_98,&LatticeConstraintChangeTransactionText);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// ConstrainSelectedPoints @ 14ccf1510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::ConstrainSelectedPoints(ULatticeDeformerTool *this)

{
  TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
  *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  ULatticeControlPointsMechanic *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [4];
  uint local_124;
  int local_120 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  undefined8 *local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_88.Elements._44_4_ = 0x80;
  this_00 = &this->ConstrainedLatticePoints;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  iVar19 = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=(&local_88,
              (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)this_00);
  local_d8 = ULatticeControlPointsMechanic::GetControlPoints
                       ((this->ControlPointsMechanic).field0_0x0.DebugPtr);
  pUVar5 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  local_f0 = 0;
  uStack_104 = 1;
  puVar1 = &(pUVar5->SelectedPointIDs).Elements.field_0x10;
  iVar12 = *(int *)&(pUVar5->SelectedPointIDs).Elements.field_0x28;
  local_118 = &pUVar5->SelectedPointIDs;
  iStack_f4 = iVar19;
  if (iVar12 != 0) {
    puVar21 = *(uint **)&(pUVar5->SelectedPointIDs).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iVar19 = 0;
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar19;
      local_f0 = local_f0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_f4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ccf162e;
      uVar18 = puVar21[lVar14 + 1];
    }
    uStack_104 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_e0 = (int)lVar14;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar12 < iStack_f4) {
      iStack_f4 = iVar12;
    }
  }
LAB_14ccf162e:
  iStack_e8 = *(int *)&(pUVar5->SelectedPointIDs).Elements.field_0x8 -
              *(int *)&(pUVar5->SelectedPointIDs).Elements.field_0x34;
  uVar18 = *(uint *)&(pUVar5->SelectedPointIDs).Elements.field_0x28;
  uStack_f8 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_104,iVar19);
  uVar17 = uVar18 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = iStack_f4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_b0._28_4_ = iStack_f4;
  TStack_b0.BaseBitIndex = local_f0;
  uStack_90 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = local_118;
  iStack_108 = iVar19;
  local_100 = puVar1;
  iStack_ec = iStack_f4;
  local_b8 = local_118;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar9 = local_d8;
  pTVar8 = local_118;
  uVar4 = *(uint *)&(pUVar5->SelectedPointIDs).Elements.field_0x28;
  if (uVar18 != uVar4) {
    puVar20 = *(undefined1 **)&(pUVar5->SelectedPointIDs).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ccf1750;
      uVar18 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_dc = (int)lVar14;
    uVar18 = local_dc + -1 + uVar17;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_14ccf1750:
  do {
    pTVar10 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_b0.CurrentBitIndex == uVar18) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar8))
    {
      UpdateMechanicColorOverrides(this);
      lVar14 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar7 = *(code **)(*(longlong *)(lVar14 + 0x28) + 0x20);
      puVar13 = ::operator_new(0xb0);
      local_c0 = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        iVar12 = this->CurrentChangeStamp;
        *(undefined8 *)
         &((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
            *)(puVar13 + 1))->Elements = 0;
        *puVar13 = &___7FLatticeDeformerToolConstrainedPointsChange__6B_;
        puVar13[2] = 0;
        puVar13[5] = 0;
        *(undefined4 *)(puVar13 + 6) = 0;
        *(undefined4 *)((longlong)puVar13 + 0x34) = 0x80;
        *(undefined4 *)(puVar13 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
        puVar13[9] = 0;
        *(undefined4 *)(puVar13 + 10) = 0;
        TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                     *)(puVar13 + 1),&local_88);
        *(undefined8 *)
         &((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
            *)(puVar13 + 0xb))->Elements = 0;
        puVar13[0xc] = 0;
        puVar13[0xf] = 0;
        *(undefined4 *)(puVar13 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar13 + 0x84) = 0x80;
        *(undefined4 *)(puVar13 + 0x11) = 0xffffffff;
        *(undefined4 *)((longlong)puVar13 + 0x8c) = 0;
        puVar13[0x13] = 0;
        *(undefined4 *)(puVar13 + 0x14) = 0;
        TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                     *)(puVar13 + 0xb),
                    (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                     *)this_00);
        *(int *)(puVar13 + 0x15) = iVar12;
        local_c0 = puVar13;
      }
      (*pcVar7)(lVar14 + 0x28,this,&local_c0,&LatticeConstraintChangeTransactionText);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    iVar12 = pTVar9->ArrayNum;
    local_124 = *(uint *)(*(longlong *)&pTVar10->Elements +
                         (longlong)TStack_b0.CurrentBitIndex * 0xc);
    lVar14 = (longlong)(int)local_124;
    uVar17 = 0;
    if ((int)local_124 < iVar12) {
      uVar17 = ~local_124 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_138 = lVar14, local_130 = (longlong)iVar12,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (pTVar9->AllocatorInstance).Data;
    pFVar2 = pFVar6 + lVar14 * 0x18;
    uVar22 = *(undefined4 *)pFVar2;
    uVar23 = *(undefined4 *)(pFVar2 + 4);
    local_d8 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)pFVar2;
    uStack_d0 = *(undefined4 *)(pFVar2 + 8);
    uStack_cc = *(undefined4 *)(pFVar2 + 0xc);
    local_118 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                 (pFVar6 + lVar14 * 0x18 + 0x10);
    uVar24 = SUB84(local_118,0);
    uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
    if (*(int *)&(this->ConstrainedLatticePoints).field_0x8 !=
        *(int *)&(this->ConstrainedLatticePoints).field_0x34) {
      puVar20 = *(undefined1 **)&(this->ConstrainedLatticePoints).field_0x40;
      puVar15 = &(this->ConstrainedLatticePoints).field_0x38;
      if (puVar20 != (undefined1 *)0x0) {
        puVar15 = puVar20;
      }
      iVar12 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->ConstrainedLatticePoints).field_0x48 - 1U & local_124) * 4);
      if (iVar12 != -1) {
        do {
          lVar14 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x28;
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x28) == local_124) {
            if (lVar14 != 0) goto LAB_14ccf189c;
            break;
          }
          iVar12 = *(int *)(lVar14 + 0x20);
        } while (iVar12 != -1);
      }
    }
    local_c8 = &local_124;
    local_138 = 0;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_120,(TKeyInitializer<int_const_&> *)(ulonglong)local_124,
               (bool *)&local_c8);
    uVar24 = SUB84(local_118,0);
    uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
    lVar14 = *(longlong *)&this_00->field_0x0 + (longlong)local_120[0] * 0x28;
    uVar22 = (undefined4)local_d8;
    uVar23 = local_d8._4_4_;
LAB_14ccf189c:
    *(undefined4 *)(lVar14 + 8) = uVar22;
    *(undefined4 *)(lVar14 + 0xc) = uVar23;
    *(undefined4 *)(lVar14 + 0x10) = uStack_d0;
    *(undefined4 *)(lVar14 + 0x14) = uStack_cc;
    *(ulonglong *)(lVar14 + 0x18) = CONCAT44(uVar25,uVar24);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// DrawHUD @ 14ccf7680

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
ULatticeDeformerTool::DrawHUD
          (ULatticeDeformerTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ccf768a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->ControlPointsMechanic).field0_0x0.DebugPtr + 0x2e8))();
  return;
}

// GetLatticeResolution @ 14ccfe490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVector3i * __thiscall
ULatticeDeformerTool::GetLatticeResolution
          (ULatticeDeformerTool *this,FVector3i *__return_storage_ptr__)

{
  ULatticeDeformerToolProperties *pUVar1;
  
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  (__return_storage_ptr__->field0_0x0)._s_0.X = pUVar1->XAxisResolution;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = pUVar1->YAxisResolution;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = pUVar1->ZAxisResolution;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14ccff6c0

UClass * __cdecl ULatticeDeformerTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerTool",
               &Z_Registration_Info_UClass_ULatticeDeformerTool.InnerSingleton,
               StaticRegisterNativesULatticeDeformerTool,0x250,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<ULatticeDeformerTool>,
               InternalVTableHelperCtorCaller<ULatticeDeformerTool>,local_res8,
               UMultiTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerTool.InnerSingleton;
}

// HasAccept @ 14cd03420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULatticeDeformerTool::HasAccept(ULatticeDeformerTool *this)

{
  return true;
}

// HasCancel @ 14cd034c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULatticeDeformerTool::HasCancel(ULatticeDeformerTool *this)

{
  return true;
}

// InitializeLattice @ 14cd05e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
ULatticeDeformerTool::InitializeLattice
          (ULatticeDeformerTool *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  FDynamicSubmesh3 *pFVar2;
  ULatticeDeformerToolProperties *pUVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  bool bVar5;
  TTransformSRT3<double> *pTVar6;
  TAxisAlignedBox3<double> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  UClass *pUVar10;
  longlong *plVar11;
  TSharedPtr<UE::Geometry::FFFDLattice,1> *pTVar12;
  FDynamicMesh3 *pFVar13;
  FFFDLattice *pFVar14;
  undefined1 auStackY_198 [32];
  FFFDLattice *local_168;
  FSharedReferencer<1> FStack_160;
  FFFDLattice *local_158;
  FSharedReferencer<1> FStack_150;
  FVector3i_u_0 local_148;
  FVector3i_u_0 local_13c;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *local_130;
  undefined1 local_128 [48];
  undefined1 local_f8 [80];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->bHasSelection == false) ||
     (pFVar2 = (this->Submesh).Object, pFVar13 = &pFVar2->Submesh, pFVar2 == (FDynamicSubmesh3 *)0x0
     )) {
    pFVar13 = (this->OriginalMesh).Object;
  }
  local_130 = param_2;
  if ((*(longlong *)&this->LatticeStorage == 0) ||
     (*(longlong *)&(this->LatticeStorage).field_0x8 == 0)) {
    pUVar3 = (this->Settings).field0_0x0.DebugPtr;
    local_13c._s_0.Y = pUVar3->YAxisResolution;
    local_13c._s_0.Z = pUVar3->ZAxisResolution;
    local_13c._s_0.X = pUVar3->XAxisResolution;
    pTVar9 = ::operator_new(200);
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_158 = ___xmm_00000000000000000000000000000010;
      pFVar14 = (FFFDLattice *)&DAT_00000010;
      FStack_150.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      fVar1 = pUVar3->Padding;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFFFDLattice_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FFFDLattice::FFFDLattice
                ((FFFDLattice *)(pTVar9 + 1),(FVector3i *)&local_13c._s_0,pFVar13,fVar1);
      pFVar14 = (FFFDLattice *)(pTVar9 + 1);
      if ((pFVar14 == (FFFDLattice *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      FStack_150.ReferenceController = pTVar9;
      pTVar8 = pTVar9;
      local_158 = pFVar14;
    }
    if (&this->Lattice != (TSharedPtr<UE::Geometry::FFFDLattice,1> *)&local_158) {
      (this->Lattice).Object = pFVar14;
      local_158 = (FFFDLattice *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Lattice).SharedReferenceCount,&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  else {
    plVar11 = *(longlong **)&(this->LatticeStorage).field_0x8;
    pTVar6 = (TTransformSRT3<double> *)(**(code **)(*plVar11 + 0x38))(plVar11,local_f8);
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = pTVar9;
    if (*(longlong *)&this->LatticeStorage != 0) {
      pTVar8 = *(TReferenceControllerBase<1> **)&(this->LatticeStorage).field_0x8;
    }
    pTVar7 = (TAxisAlignedBox3<double> *)(**(code **)(pTVar8->_padding_ + 0x30))(pTVar8,local_128);
    pUVar3 = (this->Settings).field0_0x0.DebugPtr;
    local_148._s_0.Y = pUVar3->YAxisResolution;
    local_148._s_0.Z = pUVar3->ZAxisResolution;
    local_148._s_0.X = pUVar3->XAxisResolution;
    pTVar8 = ::operator_new(200);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      local_168 = ___xmm_00000000000000000000000000000010;
      pFVar14 = (FFFDLattice *)&DAT_00000010;
      FStack_160.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFFFDLattice_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FFFDLattice::FFFDLattice
                ((FFFDLattice *)(pTVar8 + 1),(FVector3i *)&local_148._s_0,pFVar13,0.0,pTVar7,pTVar6)
      ;
      pFVar14 = (FFFDLattice *)(pTVar8 + 1);
      if ((pFVar14 == (FFFDLattice *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      FStack_160.ReferenceController = pTVar8;
      pTVar9 = pTVar8;
      local_168 = pFVar14;
    }
    if (&this->Lattice != (TSharedPtr<UE::Geometry::FFFDLattice,1> *)&local_168) {
      (this->Lattice).Object = pFVar14;
      local_168 = (FFFDLattice *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Lattice).SharedReferenceCount,&FStack_160);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_160.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    param_2 = local_130;
  }
  pTVar12 = &this->Lattice;
  plVar11 = (longlong *)0x0;
  if ((pTVar12->Object == (FFFDLattice *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Geometry::FFFDLattice::GenerateInitialLatticePositions(pTVar12->Object,param_1);
  if ((*(longlong *)&this->LatticeStorage == 0) ||
     (*(longlong *)&(this->LatticeStorage).field_0x8 == 0)) {
    if (((int)this->_padding_ < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(UObjectBaseUtility **)this->_padding_;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar10 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
      plVar11 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar10);
    }
    (**(code **)(*plVar11 + 0x28))(plVar11,local_a8);
    Algo::
    ForEach<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,_ULatticeDeformerTool::InitializeLattice_::__l15::<lambda_1>_>
              (param_1,(TTransform<double> *)local_a8);
  }
  if ((pTVar12->Object == (FFFDLattice *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Geometry::FFFDLattice::GenerateLatticeEdges(pTVar12->Object,param_2);
  return;
}

// IsInputSelectionValidOnOutput @ 14cd086e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULatticeDeformerTool::IsInputSelectionValidOnOutput(ULatticeDeformerTool *this)

{
  return true;
}

// NumToolMeshes @ 14cd0c3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULatticeDeformerTool::NumToolMeshes(ULatticeDeformerTool *this)

{
  return 1;
}

// OnShutdown @ 14cd125d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
ULatticeDeformerTool::OnShutdown(ULatticeDeformerTool *this,EToolShutdownType param_1)

{
  code *pcVar1;
  ULatticeDeformerToolProperties *pUVar2;
  UObjectBaseUtility *this_00;
  UMeshOpPreviewWithBackgroundCompute *this_01;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> TVar3;
  bool bVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FText *pFVar9;
  undefined1 auStackY_1c8 [32];
  FConversionToMeshDescriptionOptions local_198;
  FString local_188;
  FText local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  TQuaternion<double>_u_0 local_138;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  FDynamicMeshOpResult local_e8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (((param_1 == Accept) && (*(longlong *)&this->LatticeStorage != 0)) &&
     (*(longlong *)&(this->LatticeStorage).field_0x8 != 0)) {
    plVar7 = *(longlong **)&(this->LatticeStorage).field_0x8;
    pcVar1 = *(code **)(*plVar7 + 0x10);
    pTVar5 = ULatticeControlPointsMechanic::GetControlPoints
                       ((this->ControlPointsMechanic).field0_0x0.DebugPtr);
    (*pcVar1)(plVar7,pTVar5);
    if (*(longlong *)&this->LatticeStorage == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&(this->LatticeStorage).field_0x8;
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,((this->Settings).field0_0x0.DebugPtr)->InterpolationType);
  }
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  pcVar1 = *(code **)(pUVar2->_padding_ + 0x2b0);
  ::FString::FString(&local_188,L"");
  (*pcVar1)(pUVar2,this,&local_188);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)(this->ControlPointsMechanic).field0_0x0.DebugPtr + 0x2b8))();
  if ((int)this->_padding_ < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(UObjectBaseUtility **)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7,1);
  this_01 = (this->Preview).field0_0x0.DebugPtr;
  if (this_01 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Shutdown(this_01,&local_e8);
    if (param_1 == Accept) {
      lVar8 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar1 = *(code **)(*(longlong *)(lVar8 + 0x28) + 0x10);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_178,L"ULatticeDeformerTool",L"LatticeDeformerTool",
                          L"Lattice Deformer");
      (*pcVar1)(lVar8 + 0x28,pFVar9);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      TVar3.Ptr = local_e8.Mesh.Ptr;
      if (local_e8.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMeshResult != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                           ,0x20c,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_88);
      local_138._s_0.X = local_88;
      local_138._s_0.Z = local_78;
      local_138._s_0.Y = dStack_80;
      local_158 = local_58;
      local_138._s_0.W = dStack_70;
      local_108 = local_58;
      local_140 = local_38;
      local_168 = local_68;
      uStack_160 = uStack_60;
      local_f0 = local_38;
      local_118 = local_68;
      uStack_110 = uStack_60;
      local_150 = local_48;
      uStack_148 = uStack_40;
      local_100 = local_48;
      uStack_f8 = uStack_40;
      MeshTransforms::ApplyTransformInverse
                (TVar3.Ptr,(TTransformSRT3<double> *)&local_138._s_0,true,~SculptLayers);
      local_198.bSetPolyGroups = true;
      local_198.bUpdatePositions = true;
      local_198.bUpdateNormals = true;
      local_198.bUpdateTangents = false;
      local_198.bUpdateUVs = false;
      local_198.bUpdateVtxColors = false;
      local_198.bTransformVtxColorsSRGBToLinear = true;
      local_198.bConvertBackToNonManifold = false;
      local_198.bSetHardEdgesFromNormalSeams = true;
      if ((int)this->_padding_ < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UE::ToolTarget::CommitDynamicMeshUpdate
                (*(UToolTarget **)this->_padding_,TVar3.Ptr,true,&local_198,
                 (FComponentMaterialSet *)0x0);
      lVar8 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x18))(lVar8 + 0x28);
    }
    if (local_e8.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_e8.Mesh.Ptr)->_padding_)(local_e8.Mesh.Ptr,1);
    }
  }
  if ((*(longlong *)&this->LatticeStorage != 0) &&
     (*(longlong *)&(this->LatticeStorage).field_0x8 != 0)) {
    (**(code **)(**(longlong **)&(this->LatticeStorage).field_0x8 + 0x50))();
  }
  return;
}

// OnTick @ 14cd135e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::OnTick(ULatticeDeformerTool *this,float param_1)

{
  ELatticeDeformerToolAction EVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  ULatticeControlPointsMechanic *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  EVar1 = this->PendingAction;
  if (EVar1 != NoAction) {
    if (EVar1 == Constrain) {
      ConstrainSelectedPoints(this);
    }
    else if (EVar1 == ClearConstraints) {
      ClearConstrainedPoints(this);
    }
    this->PendingAction = NoAction;
  }
  if ((this->Preview).field0_0x0.DebugPtr != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    if (this->bShouldRebuild != false) {
      ClearConstrainedPoints(this);
      plVar7 = (longlong *)0x0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      InitializeLattice(this,&local_98,&local_a8);
      iVar2 = (int)this->_padding_;
      if (iVar2 < 1) {
        local_b8 = 0;
        local_b0 = (longlong)iVar2;
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
      this_00 = *(UObjectBaseUtility **)this->_padding_;
      if (this_00 != (UObjectBaseUtility *)0x0) {
        pUVar6 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
        plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,local_88);
      pUVar3 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3,&local_98,&local_a8,local_88);
      UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
      this->bShouldRebuild = false;
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
    UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
  }
  return;
}

// ProcessToolMeshes @ 14cd169d0

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
ULatticeDeformerTool::ProcessToolMeshes
          (ULatticeDeformerTool *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&,int)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 local_res8 [2];
  
  if (this->_padding_ == 0) {
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
  local_res8[0] = 0;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this->_padding_,local_res8);
  return;
}

// RebuildDeformer @ 14cd17340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::RebuildDeformer(ULatticeDeformerTool *this)

{
  TDynamicVector<int,512> *pTVar1;
  TDynamicVector<unsigned_short,512> *this_00;
  TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this_01;
  TDynamicVector<double,512> *this_02;
  TPimplPtr<UE::Geometry::FDynamicGraph3<double>,0> *pTVar2;
  int *piVar3;
  TUniquePtr<UE::Solvers::IConstrainedMeshSolver,TDefaultDelete<UE::Solvers::IConstrainedMeshSolver>_>
  *pTVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  FDynamicGraph3<double> *pFVar7;
  longlong lVar8;
  FDynamicGraph3<double> *pFVar9;
  FScriptContainerElement *pFVar10;
  IConstrainedMeshSolver *pIVar11;
  undefined1 *puVar12;
  ULatticeControlPointsMechanic *pUVar13;
  ForElementType<FSetElementId> FVar14;
  code *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  short sVar20;
  uint uVar21;
  int iVar22;
  TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar23;
  FScriptContainerElement *pFVar24;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  TUniquePtr<UE::Solvers::IConstrainedMeshSolver,TDefaultDelete<UE::Solvers::IConstrainedMeshSolver>_>
  TVar26;
  TVector<double> *pTVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar32;
  TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined8 *local_res10;
  longlong local_98 [4];
  undefined8 local_78;
  
  pTVar23 = ::operator_new(0x140);
  pTVar33 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
             *)0x0;
  pTVar32 = pTVar33;
  if (pTVar23 !=
      (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)0x0)
  {
    pTVar23->ArrayNum = 0;
    pTVar23->ArrayMax = 0;
    (pTVar23->AllocatorInstance).Data =
         (FScriptContainerElement *)
         UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FDynamicGraph3<double>_>;
    memset(pTVar23 + 3,0,0x108);
    *(undefined8 *)((longlong)(pTVar23 + 1) + 8) = 0;
    *(undefined ***)(pTVar23 + 1) = &___7FDynamicGraph_Geometry_UE__6B_;
    pTVar23[2].AllocatorInstance = 0;
    *(undefined8 *)((longlong)(pTVar23 + 2) + 8) = 0;
    UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
              ((TDynamicVector<unsigned_short,512> *)((longlong)(pTVar23 + 1) + 8));
    pTVar1 = (TDynamicVector<int,512> *)(pTVar23 + 3);
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    *(undefined8 *)((longlong)(pTVar23 + 3) + 8) = 0;
    pTVar23[4].AllocatorInstance = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
    *(undefined4 *)((longlong)(pTVar23 + 4) + 8) = 0;
    UE::Geometry::FSmallListSet::FSmallListSet((FSmallListSet *)(pTVar23 + 5));
    this_00 = (TDynamicVector<unsigned_short,512> *)(pTVar23 + 0xc);
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    *(undefined8 *)((longlong)(pTVar23 + 0xc) + 8) = 0;
    pTVar23[0xd].AllocatorInstance = 0;
    UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock(this_00);
    pTVar1 = (TDynamicVector<int,512> *)((longlong)(pTVar23 + 0xd) + 8);
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    pTVar23[0xe].AllocatorInstance = 0;
    *(undefined8 *)((longlong)(pTVar23 + 0xe) + 8) = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
    this_01 = (TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *)
              ((longlong)(pTVar23 + 0xf) + 8);
    *(undefined4 *)(pTVar23 + 0xf) = 0;
    this_01->CurBlock = 0;
    this_01->CurBlockUsed = 0;
    pTVar23[0x10].AllocatorInstance = 0;
    *(undefined8 *)((longlong)(pTVar23 + 0x10) + 8) = 0;
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock(this_01)
    ;
    this_02 = (TDynamicVector<double,512> *)(pTVar23 + 0x12);
    pTVar23[0x11].AllocatorInstance = 0;
    this_02->CurBlock = 0;
    this_02->CurBlockUsed = 0;
    *(undefined ***)(pTVar23 + 1) = &___7__FDynamicGraph3_N_Geometry_UE__6B_;
    *(undefined8 *)((longlong)(pTVar23 + 0x12) + 8) = 0;
    pTVar23[0x13].AllocatorInstance = 0;
    *(undefined4 *)((longlong)(pTVar23 + 0x11) + 8) = 0;
    UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(this_02);
    pTVar32 = pTVar23;
  }
  pTVar2 = &this->LatticeGraph;
  if ((TPimplPtr<UE::Geometry::FDynamicGraph3<double>,0> *)local_98 == pTVar2) {
    if ((FDynamicGraph3<double> *)(pTVar32 + 1) == (FDynamicGraph3<double> *)0x0)
    goto LAB_14cd1748b;
    pFVar24 = (pTVar32->AllocatorInstance).Data;
  }
  else {
    pFVar7 = pTVar2->Ptr;
    pTVar2->Ptr = (FDynamicGraph3<double> *)(pTVar32 + 1);
    if (pFVar7 == (FDynamicGraph3<double> *)0x0) goto LAB_14cd1748b;
    pFVar24 = pFVar7[-1].Vertices.Data.Blocks.AllocatorInstance.Data;
    pTVar32 = &pFVar7[-1].Vertices.Data.Blocks;
  }
  (*(code *)pFVar24)(pTVar32);
LAB_14cd1748b:
  pFVar7 = pTVar2->Ptr;
  if (((this->Lattice).Object == (FFFDLattice *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  ::`anonymous_namespace'::MakeLatticeGraph((this->Lattice).Object,pFVar7);
  pTVar25 = ULatticeControlPointsMechanic::GetControlPoints
                      ((this->ControlPointsMechanic).field0_0x0.DebugPtr);
  if (((int)pTVar2->Ptr->_padding_ != pTVar25->ArrayNum) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("LatticeGraph->VertexCount() == CurrentLatticePoints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                          ,0x1a1,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar7 = pTVar2->Ptr;
  uVar34 = *(int *)((longlong)&pFVar7->_padding_ + 4) + (int)pFVar7->_padding_ * 0x200;
  pTVar32 = pTVar33;
  if (((uVar34 != 0) &&
      (pTVar32 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                  *)0x0, 0xfffd < (ushort)(**(short **)pFVar7->_padding_ - 1U))) &&
     (pTVar32 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                 *)&DAT_00000001, 1 < (int)uVar34)) {
    do {
      uVar28 = (ulonglong)((uint)pTVar32 & 0x1ff);
      lVar8 = ((undefined8 *)pFVar7->_padding_)[(ulonglong)pTVar32 >> 9];
      if ((*(short *)(lVar8 + uVar28 * 2) != 0) && (*(short *)(lVar8 + uVar28 * 2) != -1)) break;
      uVar31 = (uint)pTVar32 + 1;
      pTVar32 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                 *)(ulonglong)uVar31;
    } while ((int)uVar31 < (int)uVar34);
  }
  uVar31 = (uint)pTVar32;
joined_r0x00014cd17580:
  do {
    if (uVar31 == uVar34) {
      TVar26 = UE::MeshDeformation::ConstructUniformConstrainedMeshDeformer
                         ((FDynamicGraph3<double> *)&local_res10);
      pTVar4 = &this->DeformationSolver;
      if ((IConstrainedMeshSolver *)pTVar4 != TVar26.Ptr) {
        pIVar11 = pTVar4->Ptr;
        pTVar4->Ptr = (IConstrainedMeshSolver *)*TVar26.Ptr;
        *TVar26.Ptr = (IConstrainedMeshSolver)0x0;
        if (pIVar11 != (IConstrainedMeshSolver *)0x0) {
          (**(code **)*pIVar11)(pIVar11,1);
        }
      }
      if (local_res10 != (undefined8 *)0x0) {
        (**(code **)*local_res10)(local_res10,1);
      }
      if (0 < pTVar25->ArrayNum) {
        uVar35 = (undefined4)__real_3ff0000000000000;
        do {
          uVar34 = (uint)pTVar33;
          if (*(int *)&(this->ConstrainedLatticePoints).field_0x8 !=
              *(int *)&(this->ConstrainedLatticePoints).field_0x34) {
            puVar12 = *(undefined1 **)&(this->ConstrainedLatticePoints).field_0x40;
            puVar29 = &(this->ConstrainedLatticePoints).field_0x38;
            if (puVar12 != (undefined1 *)0x0) {
              puVar29 = puVar12;
            }
            iVar22 = *(int *)(puVar29 +
                             ((ulonglong)(*(int *)&(this->ConstrainedLatticePoints).field_0x48 - 1)
                             & (ulonglong)pTVar33) * 4);
            if (iVar22 != -1) {
              lVar8 = *(longlong *)&this->ConstrainedLatticePoints;
              do {
                if (*(uint *)(lVar8 + (longlong)iVar22 * 0x28) == uVar34) {
                  pIVar11 = pTVar4->Ptr;
                  pcVar15 = *(code **)((longlong)*pIVar11 + 8);
                  pTVar27 = TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                            ::FindChecked((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                                           *)&this->ConstrainedLatticePoints,uVar34);
                  (*pcVar15)(pIVar11,pTVar33,uVar35,pTVar27,1);
                  goto LAB_14cd1790f;
                }
                iVar22 = *(int *)(lVar8 + 0x20 + (longlong)iVar22 * 0x28);
              } while (iVar22 != -1);
            }
          }
          pUVar13 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
          if (*(int *)&(pUVar13->SelectedPointIDs).Elements.field_0x8 !=
              *(int *)&(pUVar13->SelectedPointIDs).Elements.field_0x34) {
            FVar14 = (pUVar13->SelectedPointIDs).Hash.SecondaryData;
            FVar30 = (ForElementType<FSetElementId>)&(pUVar13->SelectedPointIDs).Hash;
            if (FVar14 != (ForElementType<FSetElementId>)0x0) {
              FVar30 = FVar14;
            }
            iVar22 = *(int *)((longlong)FVar30 +
                             ((ulonglong)((pUVar13->SelectedPointIDs).HashSize - 1) &
                             (ulonglong)pTVar33) * 4);
            if (iVar22 != -1) {
              lVar8 = *(longlong *)&(pUVar13->SelectedPointIDs).Elements;
              do {
                if (*(uint *)(lVar8 + (longlong)iVar22 * 0xc) == uVar34) {
                  uVar31 = 0;
                  if ((int)uVar34 < pTVar25->ArrayNum) {
                    uVar31 = ~uVar34 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  (**(code **)((longlong)*pTVar4->Ptr + 8))
                            (pTVar4->Ptr,pTVar33,uVar35,
                             (pTVar25->AllocatorInstance).Data + (longlong)(int)uVar34 * 0x18,1);
                  break;
                }
                iVar22 = *(int *)(lVar8 + 4 + (longlong)iVar22 * 0xc);
              } while (iVar22 != -1);
            }
          }
LAB_14cd1790f:
          pTVar33 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                     *)(ulonglong)(uVar34 + 1);
        } while ((int)(uVar34 + 1) < pTVar25->ArrayNum);
      }
      return;
    }
    while( true ) {
      uVar31 = (uint)pTVar32;
      pFVar9 = pTVar2->Ptr;
      uVar21 = 0;
      if ((int)uVar31 < pTVar25->ArrayNum) {
        uVar21 = ~uVar31 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar10 = (pTVar25->AllocatorInstance).Data;
      pFVar24 = pFVar10 + (longlong)(int)uVar31 * 0x18;
      uVar35 = *(undefined4 *)pFVar24;
      uVar16 = *(undefined4 *)(pFVar24 + 4);
      uVar17 = *(undefined4 *)(pFVar24 + 8);
      uVar18 = *(undefined4 *)(pFVar24 + 0xc);
      uVar6 = *(undefined8 *)(pFVar10 + (longlong)(int)uVar31 * 0x18 + 0x10);
      sVar20 = _dclass(uVar35);
      local_78 = uVar6;
      if ((((0 < sVar20) || (sVar20 = _dclass(uVar17), 0 < sVar20)) ||
          (sVar20 = _dclass((int)uVar6), 0 < sVar20)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("VectorUtil::IsFinite(VNewPos)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph3.h"
                              ,0x2b,L""), bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if (((-1 < (int)uVar31) &&
          ((int)uVar31 < (int)pFVar9->_padding_ * 0x200 + *(int *)((longlong)&pFVar9->_padding_ + 4)
          )) && ((ushort)(*(short *)(*(longlong *)
                                      (pFVar9->_padding_ + ((ulonglong)pTVar32 >> 9) * 8) +
                                    (ulonglong)(uVar31 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        uVar21 = uVar31 * 3;
        puVar5 = (undefined4 *)
                 (*(longlong *)
                   ((pFVar9->Vertices).Data.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 8);
        *puVar5 = uVar35;
        puVar5[1] = uVar16;
        puVar5 = (undefined4 *)
                 (*(longlong *)
                   ((pFVar9->Vertices).Data.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar21 + 1 >> 9) * 8) + (ulonglong)(uVar21 + 1 & 0x1ff) * 8);
        *puVar5 = uVar17;
        puVar5[1] = uVar18;
        *(undefined8 *)
         (*(longlong *)
           ((pFVar9->Vertices).Data.Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 + 2 >> 9) * 8
           ) + (ulonglong)(uVar21 + 2 & 0x1ff) * 8) = uVar6;
        *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
        piVar3 = (int *)((longlong)&pFVar9->_padding_ + 4);
        *piVar3 = *piVar3 + 1;
      }
      uVar31 = uVar31 + 1;
      pTVar32 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                 *)(ulonglong)uVar31;
      if ((int)uVar34 <= (int)uVar31) break;
      while( true ) {
        uVar28 = (ulonglong)((uint)pTVar32 & 0x1ff);
        lVar8 = *(longlong *)(pFVar7->_padding_ + ((ulonglong)pTVar32 >> 9) * 8);
        if ((*(short *)(lVar8 + uVar28 * 2) != 0) && (*(short *)(lVar8 + uVar28 * 2) != -1)) break;
        uVar31 = (uint)pTVar32 + 1;
        pTVar32 = (TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                   *)(ulonglong)uVar31;
        if ((int)uVar34 <= (int)uVar31) goto joined_r0x00014cd17580;
      }
    }
  } while( true );
}

// Render @ 14cd1b690

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
ULatticeDeformerTool::Render(ULatticeDeformerTool *this,IToolsContextRenderAPI *param_1)

{
  ULatticeControlPointsMechanic *pUVar1;
  
  pUVar1 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (ULatticeControlPointsMechanic *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd1b69f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    return;
  }
  return;
}

// RequestAction @ 14cd1c270

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
ULatticeDeformerTool::RequestAction(ULatticeDeformerTool *this,ELatticeDeformerToolAction param_1)

{
  if (this->PendingAction == NoAction) {
    this->PendingAction = param_1;
  }
  return;
}

// ResetConstrainedPoints @ 14cd1c3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::ResetConstrainedPoints(ULatticeDeformerTool *this)

{
  ULatticeControlPointsMechanic::UpdatePointLocations
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,&this->ConstrainedLatticePoints);
  return;
}

// SetLatticeStorage @ 14cd1eb80

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
ULatticeDeformerTool::SetLatticeStorage
          (ULatticeDeformerTool *this,TScriptInterface<ILatticeStateStorage> *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (*(UObject **)param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1);
  }
  *(undefined8 *)&this->LatticeStorage = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LatticeStorage).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  return;
}

// Setup @ 14cd217f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall ULatticeDeformerTool::Setup(ULatticeDeformerTool *this)

{
  int *piVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  ForElementType<TAlignedBytes<16,16>_> FVar5;
  bool bVar6;
  char cVar7;
  ELatticeInterpolationType EVar8;
  int iVar9;
  FText *pFVar10;
  longlong *plVar11;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar12;
  FDynamicMesh3 *pFVar13;
  FGeometrySelection *pFVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  TPropertyWatcher<ELatticeInterpolationType> *pTVar16;
  UClass *pUVar17;
  double *pdVar18;
  FName *pFVar19;
  ULatticeDeformerToolProperties *pUVar20;
  void *pvVar21;
  ULatticeControlPointsMechanic *pUVar22;
  UWorld *pUVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  UObjectBaseUtility *pUVar26;
  UMeshSculptLayerProperties *this_00;
  undefined ***pppuVar27;
  undefined8 *puVar28;
  FDynamicSubmesh3 *pFVar29;
  TPropertyWatcher<ELatticeInterpolationType> *pTVar30;
  undefined1 auStackY_8c8 [32];
  undefined1 local_898 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_890;
  FDelegateAllocation local_888;
  TFunction<ELatticeInterpolationType___cdecl(void)> *local_878;
  FSharedReferencer<1> FStack_870;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_868;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_858;
  FGetMeshParameters local_848;
  ULatticeDeformerTool *local_838;
  FDynamicMesh3 *local_830;
  FSharedReferencer<1> local_828;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_820;
  int local_810;
  int local_80c;
  int local_808;
  undefined8 *local_800;
  ULatticeDeformerTool *local_7f8;
  ULatticeDeformerTool *local_7f0;
  code *local_7e8;
  undefined **local_7d8;
  ULatticeDeformerTool *local_7d0;
  undefined ***local_7c0;
  code *local_7b8;
  undefined **local_7a8;
  ULatticeDeformerTool *local_7a0;
  undefined ***local_790;
  code *local_788;
  undefined8 **local_780;
  FString local_778;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDestructionSentinel local_738;
  FDestructionSentinel local_720;
  FDelegateAllocation *local_708;
  <lambda_11> local_700;
  <lambda_12> local_6f8;
  FName local_6f0;
  FText local_6e8;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_6d8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double local_6b0;
  double dStack_6a8;
  double local_6a0;
  FText local_698;
  TArray<int,TSizedDefaultAllocator<32>_> local_688;
  TQuaternion<double>_u_0 local_678;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  code *local_628 [2];
  undefined **local_618;
  ULatticeDeformerTool *local_610;
  undefined8 local_600;
  code *local_5f8 [2];
  undefined **local_5e8;
  ULatticeDeformerTool *local_5e0;
  undefined8 local_5d0;
  code *local_5c8 [2];
  undefined **local_5b8;
  ULatticeDeformerTool *local_5b0;
  undefined8 local_5a0;
  code *local_598 [2];
  undefined **local_588;
  ULatticeDeformerTool *local_580;
  undefined8 local_570;
  code *local_568 [2];
  undefined **local_558;
  ULatticeDeformerTool *local_550;
  undefined8 local_540;
  code *local_538 [2];
  undefined **local_528;
  ULatticeDeformerTool *local_520;
  undefined8 local_510;
  code *local_508 [2];
  undefined **local_4f8;
  ULatticeDeformerTool *local_4f0;
  undefined8 local_4e0;
  code *local_4d8 [2];
  code *local_4c8 [3];
  undefined8 local_4b0;
  code *local_4a8 [2];
  code *local_498 [3];
  undefined8 local_480;
  FDynamicMesh3 local_478;
  undefined1 local_248 [128];
  undefined1 local_1c8 [128];
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pcVar3 = *(code **)(this->_padding_ + 0x380);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_6e8,L"ULatticeDeformerTool",L"ToolName",L"Lattice Deform");
  (*pcVar3)(this,pFVar10);
  if (local_6e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
  }
  plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar3 = *(code **)(*plVar11 + 0x360);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_698,L"ULatticeDeformerTool",L"LatticeDeformerToolMessage",
                       L"Drag the lattice control points to deform the mesh");
  (*pcVar3)(plVar11,pFVar10,2);
  if (local_698.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_698.TextData.Reference + 0x10))();
  }
  pTVar12 = MakeShared<UE::Geometry::FDynamicMesh3,1>(&local_6d8);
  local_828.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
  local_830 = pTVar12->Object;
  if (local_828.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_828.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_828.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->OriginalMesh;
  pTVar30 = (TPropertyWatcher<ELatticeInterpolationType> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_830) {
    pTVar2->Object = local_830;
    local_830 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalMesh).SharedReferenceCount,&local_828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_828.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d8.SharedReferenceCount.ReferenceController);
  local_848.bHaveRequestLOD = false;
  local_848._1_3_ = 0;
  local_848.RequestLOD = Default;
  local_848.bWantMeshTangents = false;
  local_848._9_3_ = 0;
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar13 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_478,*(UToolTarget **)this->_padding_,&local_848);
  if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(pTVar2->Object,pFVar13);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_478);
  bVar6 = (bool)(**(code **)(this->_padding_ + 0x3c8))(this,0);
  this->bHasSelection = bVar6;
  if (bVar6 != false) {
    local_148._0_8_ = (FScriptContainerElement *)0x0;
    local_148._8_8_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (ForElementType<FSetElementId>)0x0;
    local_100 = 0;
    pFVar14 = (FGeometrySelection *)(**(code **)(this->_padding_ + 0x3d0))(this,0);
    local_800 = (undefined8 *)local_148;
    local_780 = &local_800;
    local_788 = UE::Core::Private::Function::
                TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l5::<lambda_1>,void,int>::Call;
    if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::Geometry::EnumerateSelectionTriangles
              (pFVar14,pTVar2->Object,(TFunctionRef<void___cdecl(int)> *)&local_788,
               (FPolygroupSet *)0x0);
    pTVar15 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_148,
                         &local_688);
    pFVar13 = pTVar2->Object;
    pTVar16 = ::operator_new(0x600);
    if (pTVar16 == (TPropertyWatcher<ELatticeInterpolationType> *)0x0) {
      local_878 = ___xmm_00000000000000000000000000000010;
      pFVar29 = (FDynamicSubmesh3 *)&DAT_00000010;
      FStack_870.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
      pTVar16 = pTVar30;
    }
    else {
      *(undefined4 *)&pTVar16->Cached = 1;
      pTVar16->_padding_ = 1;
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDynamicSubmesh3_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3
                ((FDynamicSubmesh3 *)&pTVar16->GetValue,pFVar13,pTVar15,0xf,true);
      pFVar29 = (FDynamicSubmesh3 *)&pTVar16->GetValue;
      if ((pFVar29 == (FDynamicSubmesh3 *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      *(int *)&pTVar16->Cached = *(int *)&pTVar16->Cached + 1;
      UNLOCK();
      FStack_870.ReferenceController = (TReferenceControllerBase<1> *)pTVar16;
      local_878 = (TFunction<ELatticeInterpolationType___cdecl(void)> *)pFVar29;
    }
    if (&this->Submesh != (TSharedPtr<UE::Geometry::FDynamicSubmesh3,1> *)&local_878) {
      (this->Submesh).Object = pFVar29;
      local_878 = (TFunction<ELatticeInterpolationType___cdecl(void)> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Submesh).SharedReferenceCount,&FStack_870);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_870.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar16);
    if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.AllocatorInstance.Data);
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    iVar9 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar26 = *(UObjectBaseUtility **)this->_padding_;
  pTVar16 = pTVar30;
  if (pUVar26 != (UObjectBaseUtility *)0x0) {
    pUVar17 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    pTVar16 = UObjectBaseUtility::GetInterfaceAddress(pUVar26,pUVar17);
  }
  pdVar18 = (double *)(**(code **)(pTVar16->_padding_ + 0x28))(pTVar16,local_98);
  local_678._s_0.X = *pdVar18;
  local_678._s_0.Y = pdVar18[1];
  local_678._s_0.Z = pdVar18[2];
  local_678._s_0.W = pdVar18[3];
  local_6b8 = pdVar18[6];
  local_6c8 = pdVar18[4];
  dStack_6c0 = pdVar18[5];
  local_6a0 = pdVar18[10];
  local_6b0 = pdVar18[8];
  dStack_6a8 = pdVar18[9];
  local_658 = local_6c8;
  dStack_650 = dStack_6c0;
  local_648 = local_6b8;
  local_640 = local_6b0;
  dStack_638 = dStack_6a8;
  local_630 = local_6a0;
  if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MeshTransforms::ReverseOrientationIfNeeded
            (pTVar2->Object,(TTransformSRT3<double> *)&local_678._s_0);
  pFVar19 = ::FName::FName(&local_6f0,L"Lattice Deformer Tool Settings");
  FVar4 = *pFVar19;
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar17 = ULatticeDeformerToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_248,pUVar17);
  local_248._48_8_ = (FObjectInstancingGraph *)0x0;
  local_248._56_8_ = (UPackage *)0x0;
  local_248._24_4_ = RF_NoFlags;
  local_248._40_8_ = (UObject *)0x0;
  local_248[0x20] = false;
  local_248._8_8_ = this;
  local_248._16_8_ = FVar4;
  pUVar20 = (ULatticeDeformerToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_248);
  if (local_248._64_8_ != 0) {
    plVar11 = (longlong *)(local_248 + 0x50);
    if ((longlong *)local_248._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_248._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (ULatticeDeformerToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar20;
  local_7f8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar20->ParentTool).WeakPtr,(FObjectPtr)&local_7f8);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar20->_padding_ + 0x2b8);
  ::FString::FString(&local_778,L"");
  (*pcVar3)(pUVar20,this,&local_778);
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->Settings).field0_0x0.DebugPtr);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_618 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_600 = 0;
  local_628[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_2>,void,int_const_&>
                 ::Call;
  local_610 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->XAxisResolution,
             (TFunction<void___cdecl(int_const_&)> *)local_628);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_5e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  local_5d0 = 0;
  local_5f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_3>,void,int_const_&>
                 ::Call;
  local_5e0 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->YAxisResolution,
             (TFunction<void___cdecl(int_const_&)> *)local_5f8);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_5b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  local_5a0 = 0;
  local_5c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_4>,void,int_const_&>
                 ::Call;
  local_5b0 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->ZAxisResolution,
             (TFunction<void___cdecl(int_const_&)> *)local_5c8);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_588 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  local_570 = 0;
  local_598[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_5>,void,float_const_&>
                 ::Call;
  local_580 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->Padding,
             (TFunction<void___cdecl(float_const_&)> *)local_598);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_7a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  local_790 = (undefined ***)0x0;
  local_7b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_6>,void,enum_ELatticeInterpolationType_const_&>
              ::Call;
  local_7a0 = this;
  pvVar21 = ::operator_new(0xa0);
  pTVar16 = pTVar30;
  if (pvVar21 != (void *)0x0) {
    local_4d8[0] = local_7b8;
    local_4b0 = 0;
    if (local_7b8 != (code *)0x0) {
      pppuVar27 = &local_7a8;
      if (local_790 != (undefined ***)0x0) {
        pppuVar27 = local_790;
      }
      (*(code *)**pppuVar27)(pppuVar27,local_4d8 + 2);
    }
    pTVar16 = FWatchablePropertySet::TPropertyWatcher<enum_ELatticeInterpolationType>::
              TPropertyWatcher<enum_ELatticeInterpolationType><enum_ELatticeInterpolationType,void>
                        (pvVar21,&pUVar20->InterpolationType,
                         (TFunction<void___cdecl(ELatticeInterpolationType_const_&)> *)local_4d8);
  }
  iVar9 = (int)pUVar20->_padding_;
  piVar1 = (int *)((longlong)&pUVar20->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar20->_padding_,piVar1);
  }
  *(int *)&pUVar20->_padding_ = iVar9 + 1;
  *(TPropertyWatcher<ELatticeInterpolationType> **)(pUVar20->_padding_ + (longlong)iVar9 * 8) =
       pTVar16;
  if (local_7b8 != (code *)0x0) {
    pppuVar27 = &local_7a8;
    if (local_790 != (undefined ***)0x0) {
      pppuVar27 = local_790;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_558 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  local_540 = 0;
  local_568[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_7>,void,bool_const_&>
                 ::Call;
  local_550 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->bDeformNormals,
             (TFunction<void___cdecl(bool_const_&)> *)local_568);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_7d8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  local_7c0 = (undefined ***)0x0;
  local_7e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_8>,void,enum_EToolContextCoordinateSystem_const_&>
              ::Call;
  local_7d0 = this;
  pvVar21 = ::operator_new(0xa0);
  pTVar16 = pTVar30;
  if (pvVar21 != (void *)0x0) {
    local_4a8[0] = local_7e8;
    local_480 = 0;
    if (local_7e8 != (code *)0x0) {
      pppuVar27 = &local_7d8;
      if (local_7c0 != (undefined ***)0x0) {
        pppuVar27 = local_7c0;
      }
      (*(code *)**pppuVar27)(pppuVar27,local_4a8 + 2);
    }
    pTVar16 = (TPropertyWatcher<ELatticeInterpolationType> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EToolContextCoordinateSystem>::
              TPropertyWatcher<enum_EToolContextCoordinateSystem><enum_EToolContextCoordinateSystem,void>
                        (pvVar21,&pUVar20->GizmoCoordinateSystem,
                         (TFunction<void___cdecl(EToolContextCoordinateSystem_const_&)> *)local_4a8)
    ;
  }
  iVar9 = (int)pUVar20->_padding_;
  piVar1 = (int *)((longlong)&pUVar20->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar20->_padding_,piVar1);
  }
  *(int *)&pUVar20->_padding_ = iVar9 + 1;
  *(TPropertyWatcher<ELatticeInterpolationType> **)(pUVar20->_padding_ + (longlong)iVar9 * 8) =
       pTVar16;
  if (local_7e8 != (code *)0x0) {
    pppuVar27 = &local_7d8;
    if (local_7c0 != (undefined ***)0x0) {
      pppuVar27 = local_7c0;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_4f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  local_4e0 = 0;
  local_508[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_9>,void,bool_const_&>
                 ::Call;
  local_4f0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->bSetPivotMode,
             (TFunction<void___cdecl(bool_const_&)> *)local_508);
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  local_528 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`ULatticeDeformerTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_
  ;
  local_510 = 0;
  local_538[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`ULatticeDeformerTool::Setup'::__l2::<lambda_10>,void,bool_const_&>
                 ::Call;
  local_520 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->bSoftDeformation,
             (TFunction<void___cdecl(bool_const_&)> *)local_538);
  if ((*(longlong *)&this->LatticeStorage != 0) &&
     (*(longlong *)&(this->LatticeStorage).field_0x8 != 0)) {
    plVar11 = *(longlong **)&(this->LatticeStorage).field_0x8;
    (**(code **)(*plVar11 + 0x40))(plVar11,&local_810);
    ((this->Settings).field0_0x0.DebugPtr)->XAxisResolution = local_810;
    ((this->Settings).field0_0x0.DebugPtr)->YAxisResolution = local_80c;
    ((this->Settings).field0_0x0.DebugPtr)->ZAxisResolution = local_808;
  }
  local_858.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_858.ArrayNum = 0;
  local_858.ArrayMax = 0;
  local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_820.ArrayNum = 0;
  local_820.ArrayMax = 0;
  InitializeLattice(this,&local_858,&local_820);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar17 = Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar17);
  local_1c8._8_8_ = this;
  pUVar22 = (ULatticeControlPointsMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar22 != (ULatticeControlPointsMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar22);
  }
  (this->ControlPointsMechanic).field0_0x0.DebugPtr = pUVar22;
  (**(code **)(*(longlong *)pUVar22 + 0x2b0))(pUVar22,this);
  pUVar22 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  pUVar23 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
  ULatticeControlPointsMechanic::SetWorld(pUVar22,pUVar23);
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar26 = *(UObjectBaseUtility **)this->_padding_;
  pTVar16 = pTVar30;
  if (pUVar26 != (UObjectBaseUtility *)0x0) {
    pUVar17 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    pTVar16 = UObjectBaseUtility::GetInterfaceAddress(pUVar26,pUVar17);
  }
  (**(code **)(pTVar16->_padding_ + 0x28))(pTVar16,&local_f8);
  pUVar22 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  (this->WorldTransform).Rotation.XY.m128d_f64[0] = local_f8;
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dStack_f0;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = local_e8;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dStack_e0;
  (this->WorldTransform).Translation.XY.m128d_f64[0] = local_d8;
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dStack_d0;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = local_c8;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dStack_c0;
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = local_b8;
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dStack_b0;
  *(undefined4 *)(this->WorldTransform).Scale3D.ZW.m128d_f64 = local_a8;
  *(undefined4 *)((longlong)(this->WorldTransform).Scale3D.ZW.m128d_f64 + 4) = uStack_a4;
  *(undefined4 *)((this->WorldTransform).Scale3D.ZW.m128d_f64 + 1) = uStack_a0;
  *(undefined4 *)((longlong)(this->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc) = uStack_9c;
  (**(code **)(*(longlong *)pUVar22 + 0x2e0))(pUVar22,&local_858,&local_820,&local_f8);
  local_838 = this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_ULatticeDeformerTool::Setup_::__l2::<lambda_11>_&>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->ControlPointsMechanic).field0_0x0.DebugPtr)->OnPointsChanged,&local_700);
  local_7f0 = this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_ULatticeDeformerTool::Setup_::__l2::<lambda_12>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->ControlPointsMechanic).field0_0x0.DebugPtr)->OnSelectionChanged,&local_6f8);
  ULatticeControlPointsMechanic::SetCoordinateSystem
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->GizmoCoordinateSystem);
  ULatticeControlPointsMechanic::UpdateSetPivotMode
            ((this->ControlPointsMechanic).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->bSetPivotMode);
  local_890.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_888.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_888.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_890,(FWriteAccessScope *)&local_720);
  local_708 = &local_888;
  puVar24 = UE::Core::Private::DelegateAllocate(0x20,&local_888);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar25;
    *puVar24 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`ULatticeDeformerTool::Setup'::`2'::<lambda_13>_>
                ::_vftable_;
    puVar24[3] = this;
  }
  if (local_720.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_720.Accessor,&local_720);
  }
  pUVar22 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_890,(FWriteAccessScope *)&local_738);
  iVar9 = local_888.DelegateSize;
  FVar5 = local_888.DelegateAllocator;
  local_888.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_888.DelegateSize = 0;
  if (local_738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar22->ShouldHideGizmo,
             (FWriteAccessScope *)&local_768);
  if ((*(int *)&(pUVar22->ShouldHideGizmo).field_0x10 != 0) &&
     (puVar24 = *(undefined8 **)&(pUVar22->ShouldHideGizmo).field_0x8, puVar24 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar24)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(pUVar22->ShouldHideGizmo).field_0x8,0,0,0x10);
    *(undefined4 *)&(pUVar22->ShouldHideGizmo).field_0x10 = 0;
  }
  pvVar21 = *(void **)&(pUVar22->ShouldHideGizmo).field_0x8;
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(pUVar22->ShouldHideGizmo).field_0x8 = FVar5;
  *(int *)&(pUVar22->ShouldHideGizmo).field_0x10 = iVar9;
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_890,(FWriteAccessScope *)&local_750);
  if ((local_888.DelegateSize != 0) &&
     (local_888.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_888.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_888,0,0,0x10);
    local_888.DelegateSize = 0;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  if (local_888.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_888.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_890.AccessDetector);
  StartPreview(this);
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar26 = *(UObjectBaseUtility **)this->_padding_;
  if (pUVar26 != (UObjectBaseUtility *)0x0) {
    pUVar17 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    plVar11 = UObjectBaseUtility::GetInterfaceAddress(pUVar26,pUVar17);
    if ((plVar11 != (longlong *)0x0) &&
       (pUVar26 = (UObjectBaseUtility *)(**(code **)(*plVar11 + 0x10))(plVar11),
       pUVar26 != (UObjectBaseUtility *)0x0)) {
      pUVar17 = Z_Construct_UClass_UMeshSculptLayersManager_NoRegister();
      plVar11 = UObjectBaseUtility::GetInterfaceAddress(pUVar26,pUVar17);
      if ((plVar11 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar11 + 0x10))(plVar11), cVar7 != '\0')) {
        this_00 = NewObject<UMeshSculptLayerProperties>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UMeshSculptLayerProperties *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        (this->SculptLayerProperties).field0_0x0.DebugPtr = this_00;
        iVar9 = (**(code **)(*plVar11 + 0x18))(plVar11);
        UMeshSculptLayerProperties::Init
                  (this_00,(IModelingToolExternalDynamicMeshUpdateAPI *)&this->_padding_,iVar9);
        (**(code **)(this->_padding_ + 800))(this,(this->SculptLayerProperties).field0_0x0.DebugPtr)
        ;
      }
    }
  }
  if ((*(longlong *)&this->LatticeStorage != 0) &&
     (*(longlong *)&(this->LatticeStorage).field_0x8 != 0)) {
    plVar11 = *(longlong **)&(this->LatticeStorage).field_0x8;
    local_868.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.ArrayNum = 0;
    local_868.ArrayMax = 0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_868);
    if (local_868.ArrayNum == local_858.ArrayNum) {
      ULatticeControlPointsMechanic::UpdatePointLocations
                ((this->ControlPointsMechanic).field0_0x0.DebugPtr,&local_868);
      ((this->ControlPointsMechanic).field0_0x0.DebugPtr)->bHasChanged = true;
      `ULatticeDeformerTool::Setup'::__l2::<lambda_11>::operator()(&local_838);
    }
    pTVar16 = pTVar30;
    if (*(longlong *)&this->LatticeStorage != 0) {
      pTVar16 = *(TPropertyWatcher<ELatticeInterpolationType> **)&(this->LatticeStorage).field_0x8;
    }
    EVar8 = (**(code **)(pTVar16->_padding_ + 0x28))();
    ((this->Settings).field0_0x0.DebugPtr)->InterpolationType = EVar8;
    if (*(longlong *)&this->LatticeStorage != 0) {
      pTVar30 = *(TPropertyWatcher<ELatticeInterpolationType> **)&(this->LatticeStorage).field_0x8;
    }
    (**(code **)(pTVar30->_padding_ + 0x48))(pTVar30);
    if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.AllocatorInstance.Data);
    }
  }
  if (((this->Settings).field0_0x0.DebugPtr)->bSoftDeformation != false) {
    RebuildDeformer(this);
  }
  pUVar20 = (this->Settings).field0_0x0.DebugPtr;
  puVar28 = (undefined8 *)pUVar20->_padding_;
  iVar9 = (int)pUVar20->_padding_;
  puVar24 = puVar28 + iVar9;
  while( true ) {
    if ((int)pUVar20->_padding_ != iVar9) {
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_898);
    }
    if (puVar28 == puVar24) break;
    (**(code **)(*(longlong *)*puVar28 + 0x10))();
    puVar28 = puVar28 + 1;
  }
  if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.AllocatorInstance.Data);
  }
  if (local_858.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.AllocatorInstance.Data);
  }
  return;
}

// SoftDeformLattice @ 14cd2e6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::SoftDeformLattice(ULatticeDeformerTool *this)

{
  ULatticeControlPointsMechanic *pUVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  undefined1 *puVar4;
  IConstrainedMeshSolver *pIVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  ForElementType<FSetElementId> FVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->Lattice).Object == (FFFDLattice *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3348314542131117628>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                       ,0x1c4,"Lattice");
    if (!bVar7) {
      return;
    }
  }
  else {
    pUVar1 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
    if (pUVar1 == (ULatticeControlPointsMechanic *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3348314542131117623>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                         ,0x1c9,"ControlPointsMechanic");
      if (!bVar7) {
        return;
      }
    }
    else {
      if ((this->DeformationSolver).Ptr != (IConstrainedMeshSolver *)0x0) {
        pTVar11 = ULatticeControlPointsMechanic::GetControlPoints(pUVar1);
        if ((int)((this->LatticeGraph).Ptr)->_padding_ == pTVar11->ArrayNum) {
          uVar15 = 0;
          if (0 < pTVar11->ArrayNum) {
LAB_14cd2e840:
            pUVar1 = (this->ControlPointsMechanic).field0_0x0.DebugPtr;
            uVar14 = (uint)uVar15;
            if (*(int *)&(pUVar1->SelectedPointIDs).Elements.field_0x8 !=
                *(int *)&(pUVar1->SelectedPointIDs).Elements.field_0x34) {
              FVar2 = (pUVar1->SelectedPointIDs).Hash.SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)&(pUVar1->SelectedPointIDs).Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar2;
              }
              iVar9 = *(int *)((longlong)FVar12 +
                              ((pUVar1->SelectedPointIDs).HashSize - 1 & uVar15) * 4);
              if (iVar9 != -1) {
                lVar3 = *(longlong *)&(pUVar1->SelectedPointIDs).Elements;
                do {
                  if (*(uint *)(lVar3 + (longlong)iVar9 * 0xc) == uVar14) {
                    if (*(int *)&(this->ConstrainedLatticePoints).field_0x8 ==
                        *(int *)&(this->ConstrainedLatticePoints).field_0x34) goto LAB_14cd2e909;
                    puVar4 = *(undefined1 **)&(this->ConstrainedLatticePoints).field_0x40;
                    puVar13 = &(this->ConstrainedLatticePoints).field_0x38;
                    if (puVar4 != (undefined1 *)0x0) {
                      puVar13 = puVar4;
                    }
                    iVar9 = *(int *)(puVar13 +
                                    (*(int *)&(this->ConstrainedLatticePoints).field_0x48 - 1 &
                                    uVar15) * 4);
                    if (iVar9 == -1) goto LAB_14cd2e909;
                    goto LAB_14cd2e8f0;
                  }
                  iVar9 = *(int *)(lVar3 + 4 + (longlong)iVar9 * 0xc);
                } while (iVar9 != -1);
              }
            }
            goto LAB_14cd2e9ad;
          }
LAB_14cd2e9bd:
          pIVar5 = (this->DeformationSolver).Ptr;
          local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_18.ArrayNum = 0;
          local_18.ArrayMax = 0;
          (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,&local_18);
          ULatticeControlPointsMechanic::UpdateControlPointPositions
                    ((this->ControlPointsMechanic).field0_0x0.DebugPtr,&local_18);
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3348314542131117611>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                             ,0x1d5,"LatticeGraph->VertexCount() == CurrentLatticePoints.Num()");
          if (bVar7) goto code_r0x00014cd2e80e;
        }
        return;
      }
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3348314542131117618>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                         ,0x1ce,"DeformationSolver");
      if (!bVar7) {
        return;
      }
    }
  }
code_r0x00014cd2e80e:
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
  while (iVar9 = *(int *)(*(longlong *)&this->ConstrainedLatticePoints + 0x20 +
                         (longlong)iVar9 * 0x28), iVar9 != -1) {
LAB_14cd2e8f0:
    if (*(uint *)(*(longlong *)&this->ConstrainedLatticePoints + (longlong)iVar9 * 0x28) == uVar14)
    goto LAB_14cd2e9ad;
  }
LAB_14cd2e909:
  cVar8 = (**(code **)((longlong)*(this->DeformationSolver).Ptr + 0x38))();
  if (cVar8 == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3348314542131117596>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                       ,0x1e4,"DeformationSolver->IsConstrained(LatticePointIndex)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar14 < pTVar11->ArrayNum) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar5 = (this->DeformationSolver).Ptr;
    (**(code **)((longlong)*pIVar5 + 0x10))
              (pIVar5,uVar15,(pTVar11->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x18,1);
  }
LAB_14cd2e9ad:
  uVar15 = (ulonglong)(uVar14 + 1);
  if (pTVar11->ArrayNum <= (int)(uVar14 + 1)) goto LAB_14cd2e9bd;
  goto LAB_14cd2e840;
}

// StartPreview @ 14cd2ea20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall ULatticeDeformerTool::StartPreview(ULatticeDeformerTool *this)

{
  UObjectBaseUtility *pUVar1;
  code *pcVar2;
  void *_Src;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UMeshOpPreviewWithBackgroundCompute *pUVar6;
  UWorld *pUVar7;
  UInteractiveToolManager *pUVar8;
  UMaterialInterface *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  UObject *pUVar13;
  undefined1 auStackY_118 [32];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_d8;
  void *local_c8;
  undefined8 local_c0;
  FLinearColor_u_0 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = ULatticeDeformerOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULatticeDeformerTool *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(ULatticeDeformerTool **)&pUVar4[1].field_0x8 = this;
  pUVar6 = NewObject<UMeshOpPreviewWithBackgroundCompute>(pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar6;
  pUVar7 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
  pUVar10 = (UObject *)0x0;
  pUVar13 = pUVar4 + 1;
  if (pUVar4 == (UObject *)0x0) {
    pUVar13 = pUVar10;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar6,pUVar7,(IDynamicMeshOperatorFactory *)pUVar13);
  if (((int)this->_padding_ < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             *(UToolTarget **)this->_padding_);
  UMeshOpPreviewWithBackgroundCompute::SetIsMeshTopologyConstant
            ((this->Preview).field0_0x0.DebugPtr,true,VertexNormals|Positions);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (((int)this->_padding_ < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = *(UObjectBaseUtility **)this->_padding_;
  pUVar4 = pUVar10;
  if (pUVar1 != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    pUVar4 = UObjectBaseUtility::GetInterfaceAddress(pUVar1,pUVar5);
  }
  (**(code **)(*(longlong *)pUVar4 + 0x20))(pUVar4,&local_c8,0);
  pUVar6 = (this->Preview).field0_0x0.DebugPtr;
  pUVar8 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar9 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar8);
  _Src = local_c8;
  lVar12 = (longlong)(int)local_c0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_d8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_c0,0,&local_d8.AllocatorInstance,(int)local_c0,&local_d8.ArrayMax);
    memcpy(local_d8.AllocatorInstance.Data,_Src,lVar12 << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar6,&local_d8,pUVar9,(UMaterialInterface *)0x0);
  pUVar8 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  local_b8._0_8_ = ___xmm_3f800000000000003f4000003f4ccccd;
  local_b8._8_8_ = _UNK_15297a578;
  pUVar9 = ToolSetupUtil::GetSelectionMaterial((FLinearColor *)&local_b8._s_0,pUVar8,0.0);
  if (pUVar9 != (UMaterialInterface *)0x0) {
    UPreviewMesh::SetSecondaryRenderMaterial
              ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,pUVar9);
  }
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,NoTangents);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  if (((int)this->_padding_ < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = *(UObjectBaseUtility **)this->_padding_;
  if (pUVar1 != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    pUVar10 = UObjectBaseUtility::GetInterfaceAddress(pUVar1,pUVar5);
  }
  (**(code **)(*(longlong *)pUVar10 + 0x20))(pUVar10,0);
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// StaticRegisterNativesULatticeDeformerTool @ 14cd2eec0

void __cdecl ULatticeDeformerTool::StaticRegisterNativesULatticeDeformerTool(void)

{
  return;
}

// UpdateMechanicColorOverrides @ 14cd353b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeDeformerTool::UpdateMechanicColorOverrides(ULatticeDeformerTool *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FColor FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FColor_u_0 *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<int,FColor>,TDefaultMapHashableKeyFuncs<int,FColor,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,FColor>,TDefaultMapHashableKeyFuncs<int,FColor,0>,FDefaultSetAllocator>
              *)&((this->ControlPointsMechanic).field0_0x0.DebugPtr)->ColorOverrides);
  iVar13 = 0;
  puVar1 = &(this->ConstrainedLatticePoints).field_0x10;
  iVar3 = *(int *)&(this->ConstrainedLatticePoints).field_0x28;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ConstrainedLatticePoints).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cd3546d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar8 = local_res18 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14cd3546d:
  uVar12 = *(uint *)&(this->ConstrainedLatticePoints).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ConstrainedLatticePoints).field_0x8 -
                       *(int *)&(this->ConstrainedLatticePoints).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->ConstrainedLatticePoints).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->ConstrainedLatticePoints).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cd35570;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14cd35570:
  while( true ) {
    if (*(int *)&(this->ConstrainedLatticePoints).field_0x8 -
        *(int *)&(this->ConstrainedLatticePoints).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    FVar5.field0_0x0 = FColor::Cyan.field0_0x0;
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_res10[0] =
         *(uint *)(*(longlong *)&this->ConstrainedLatticePoints +
                  (longlong)TStack_60.CurrentBitIndex * 0x28);
    pFVar9 = &TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>::
              FindOrAddImpl<int_const_&>
                        ((TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
                          *)&((this->ControlPointsMechanic).field0_0x0.DebugPtr)->ColorOverrides,
                         local_res10[0],(int *)local_res10)->field0_0x0;
    pFVar9->_s_0 = (FColor_u_0_s_0)FVar5.field0_0x0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  RebuildDeformer(this);
  ULatticeControlPointsMechanic::UpdateDrawables((this->ControlPointsMechanic).field0_0x0.DebugPtr);
  return;
}

// UpdateToolMeshes @ 14cd3c340

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
ULatticeDeformerTool::UpdateToolMeshes
          (ULatticeDeformerTool *this,
          TFunctionRef<TUniquePtr<FMeshRegionChangeBase,TDefaultDelete<FMeshRegionChangeBase>_>___cdecl(UE::Geometry::FDynamicMesh3_&,int)>
          *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  longlong *local_res18 [2];
  
  cVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar2 != '\0') {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res8[0] = 0;
    (**(code **)param_1)(local_res18,*(undefined8 *)&param_1->field_0x8,this->_padding_,local_res8);
    if (local_res18[0] != (longlong *)0x0) {
      (**(code **)(*local_res18[0] + 0x48))(local_res18[0],1);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// __VTableCtorCaller @ 14cd3f3c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl ULatticeDeformerTool::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UMultiTargetWithSelectionTool *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  this = (UMultiTargetWithSelectionTool *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMultiTargetWithSelectionTool *)0x0) {
    UMultiTargetWithSelectionTool::UMultiTargetWithSelectionTool(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UMultiTargetWithSelectionTool__;
    this[1]._padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
    this[1]._padding_ = (longlong)&_vftable__for__IModelingToolExternalDynamicMeshUpdateAPI__;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].TargetWorld.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].GeometrySelectionArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].GeometrySelectionArray.ArrayNum = 0;
    this[1].GeometrySelectionArray.ArrayMax = 0;
    this[1].GeometrySelectionBoolArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].GeometrySelectionViz.field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// _getUObject @ 14cd3f5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall ULatticeDeformerTool::_getUObject(ULatticeDeformerTool *this)

{
  return (UObject *)&this[-1].ConstrainedLatticePoints.field_0x30;
}

// _getUObject`adjustor{152}' @ 14cd3f5dc

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ULatticeDeformerTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall ULatticeDeformerTool::_getUObject_adjustor_152__(ULatticeDeformerTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ULatticeDeformerTool *)&this[-1].Settings);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{232}' @ 14cd3f5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ULatticeDeformerTool::_getUObject`adjustor{232}' (void)const __ptr64 */

UObject * __thiscall ULatticeDeformerTool::_getUObject_adjustor_232__(ULatticeDeformerTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ULatticeDeformerTool *)
                       (this[-1].WorldTransform.Translation.XY.m128d_f64 + 1));
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{240}' @ 14cd3f604

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ULatticeDeformerTool::_getUObject`adjustor{240}' (void)const __ptr64 */

UObject * __thiscall ULatticeDeformerTool::_getUObject_adjustor_240__(ULatticeDeformerTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ULatticeDeformerTool *)&this[-1].WorldTransform.Translation);
  return (UObject *)pUVar1;
}

