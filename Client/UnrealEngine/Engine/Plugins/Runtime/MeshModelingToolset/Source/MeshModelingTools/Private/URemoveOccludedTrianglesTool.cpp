// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 19

// StaticClass @ 14cc8fb50

UClass * __cdecl URemoveOccludedTrianglesTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesTool",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesTool,0x210,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesTool>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.InnerSingleton;
}

// URemoveOccludedTrianglesTool @ 14ccbfa80

URemoveOccludedTrianglesTool * __thiscall
URemoveOccludedTrianglesTool::URemoveOccludedTrianglesTool
          (URemoveOccludedTrianglesTool *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesTool__6B_;
  (this->Previews).ArrayNum = 0;
  (this->Previews).ArrayMax = 0;
  (this->PreviewCopies).ArrayNum = 0;
  (this->PreviewCopies).ArrayMax = 0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  (this->OccluderTrees).ArrayNum = 0;
  (this->OccluderTrees).ArrayMax = 0;
  (this->OccluderWindings).ArrayNum = 0;
  (this->OccluderWindings).ArrayMax = 0;
  (this->OccluderTransforms).ArrayNum = 0;
  (this->OccluderTransforms).ArrayMax = 0;
  (this->PreviewToCopyIdx).ArrayNum = 0;
  (this->PreviewToCopyIdx).ArrayMax = 0;
  (this->PreviewToTargetIdx).ArrayNum = 0;
  (this->PreviewToTargetIdx).ArrayMax = 0;
  (this->TargetToPreviewIdx).ArrayNum = 0;
  (this->TargetToPreviewIdx).ArrayMax = 0;
  (this->OccludedGroupIDs).ArrayNum = 0;
  (this->OccludedGroupIDs).ArrayMax = 0;
  (this->OccludedGroupLayers).ArrayNum = 0;
  (this->OccludedGroupLayers).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->BasicProperties).field0_0x0.DebugPtr = (URemoveOccludedTrianglesToolProperties *)0x0;
  (this->PolygroupLayersProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  (this->AdvancedProperties).field0_0x0.DebugPtr = (URemoveOccludedTrianglesAdvancedProperties *)0x0
  ;
  (this->Previews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewCopies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderTrees).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderWindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewToCopyIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewToTargetIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetToPreviewIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccludedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccludedGroupLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  return this;
}

// URemoveOccludedTrianglesTool @ 14ccbfbe0

URemoveOccludedTrianglesTool * __thiscall
URemoveOccludedTrianglesTool::URemoveOccludedTrianglesTool(URemoveOccludedTrianglesTool *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesTool__6B_;
  (this->Previews).ArrayNum = 0;
  (this->Previews).ArrayMax = 0;
  (this->PreviewCopies).ArrayNum = 0;
  (this->PreviewCopies).ArrayMax = 0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  (this->OccluderTrees).ArrayNum = 0;
  (this->OccluderTrees).ArrayMax = 0;
  (this->OccluderWindings).ArrayNum = 0;
  (this->OccluderWindings).ArrayMax = 0;
  (this->OccluderTransforms).ArrayNum = 0;
  (this->OccluderTransforms).ArrayMax = 0;
  (this->PreviewToCopyIdx).ArrayNum = 0;
  (this->PreviewToCopyIdx).ArrayMax = 0;
  (this->PreviewToTargetIdx).ArrayNum = 0;
  (this->PreviewToTargetIdx).ArrayMax = 0;
  (this->TargetToPreviewIdx).ArrayNum = 0;
  (this->TargetToPreviewIdx).ArrayMax = 0;
  (this->OccludedGroupIDs).ArrayNum = 0;
  (this->OccludedGroupIDs).ArrayMax = 0;
  (this->OccludedGroupLayers).ArrayNum = 0;
  (this->OccludedGroupLayers).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->BasicProperties).field0_0x0.DebugPtr = (URemoveOccludedTrianglesToolProperties *)0x0;
  (this->PolygroupLayersProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  (this->AdvancedProperties).field0_0x0.DebugPtr = (URemoveOccludedTrianglesAdvancedProperties *)0x0
  ;
  (this->Previews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewCopies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderTrees).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderWindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewToCopyIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewToTargetIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetToPreviewIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccludedGroupIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccludedGroupLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"URemoveOccludedTrianglesTool",L"ProjectToTargetToolName",L"Jacket"
                     );
  pIVar1 = (ITextData *)this->_padding_;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    this->_padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar3->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~URemoveOccludedTrianglesTool @ 14ccc4cf0

void __thiscall
URemoveOccludedTrianglesTool::~URemoveOccludedTrianglesTool(URemoveOccludedTrianglesTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesTool__6B_;
  pFVar1 = (this->OccludedGroupLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OccludedGroupIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetToPreviewIdx).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewToTargetIdx).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->PreviewToCopyIdx).AllocatorInstance.Data,(this->PreviewToCopyIdx).ArrayNum);
  pFVar1 = (this->PreviewToCopyIdx).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OccluderTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,int>
            ((TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *)
             (this->OccluderWindings).AllocatorInstance.Data,(this->OccluderWindings).ArrayNum);
  pFVar1 = (this->OccluderWindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,int>
            ((TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
             (this->OccluderTrees).AllocatorInstance.Data,(this->OccluderTrees).ArrayNum);
  pFVar1 = (this->OccluderTrees).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,int>
            ((TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)
             (this->OriginalDynamicMeshes).AllocatorInstance.Data,
             (this->OriginalDynamicMeshes).ArrayNum);
  pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewCopies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Previews).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14ccd1ca0

bool __thiscall
`URemoveOccludedTrianglesTool::SetupPreviews'::__l4::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar10;
  uint uVar11;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar11 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 400)) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0x188) + (longlong)(int)uVar1 * 4);
  if (iVar2 < 0) {
    return false;
  }
  uVar1 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar11 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x1a0)) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = *(int *)(*(longlong *)(lVar3 + 0x198) + (longlong)(int)uVar1 * 4);
  if (iVar8 < 0) {
    iVar8 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(param_1,param_2);
    return iVar8 == iVar2;
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (((pFVar4 == (FDynamicMeshAttributeSet *)0x0) ||
      (iVar9 = (**(code **)(pFVar4->_padding_ + 200))(), iVar9 <= iVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->HasAttributes() && Mesh->Attributes()->NumPolygroupLayers() > LayerIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemoveOccludedTrianglesTool.cpp"
                         ,0xd6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pTVar10 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                      ((param_1->AttributeSet).Ptr,iVar8);
  return *(int *)(*(longlong *)
                   (*(longlong *)&pTVar10->field_0x20 + (ulonglong)((uint)param_2 >> 9) * 8) +
                 (ulonglong)(param_2 & 0x1ff) * 4) == iVar2;
}

// operator() @ 14ccd3190

void __thiscall
`URemoveOccludedTrianglesTool::SetupPreviews'::__l7::<lambda_3>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar2 = *(undefined4 *)&param_1[2].ResultTransform.Rotation.field0_0x0;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 400)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(undefined4 *)(*(longlong *)(lVar3 + 0x188) + (longlong)(int)uVar1 * 4) = uVar2;
  uVar1 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar2 = *(undefined4 *)((longlong)&param_1[2].ResultTransform.Rotation.field0_0x0 + 4);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x1a0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(undefined4 *)(*(longlong *)(lVar3 + 0x198) + (longlong)(int)uVar1 * 4) = uVar2;
  return;
}

// operator() @ 14ccd3c10

void __thiscall
`URemoveOccludedTrianglesTool::SetupPreviews'::__l9::<lambda_4>::operator()
          (void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  uint uVar1;
  longlong lVar2;
  UPreviewMesh *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDynamicMesh3 *pFVar6;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x110)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(UPreviewMesh **)(*(longlong *)(lVar2 + 0x108) + (longlong)(int)uVar1 * 8);
  pFVar6 = UPreviewMesh::GetMesh((param_1->PreviewMesh).field0_0x0.DebugPtr);
  UPreviewMesh::UpdatePreview(this_00,pFVar6,FullUpdate,AllVertexAttribs);
  return;
}

// CanAccept @ 14ccebaf0

bool __thiscall URemoveOccludedTrianglesTool::CanAccept(URemoveOccludedTrianglesTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(char *)(*(longlong *)pFVar4 + 0xa1) == '\0') {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  uVar3 = (**(code **)(this->_padding_ + 0x398))(this);
  return (bool)uVar3;
}

// GenerateAsset @ 14ccfc020

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
URemoveOccludedTrianglesTool::GenerateAsset
          (URemoveOccludedTrianglesTool *this,
          TArray<FDynamicMeshOpResult,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  FDynamicMesh3 *pFVar2;
  bool bVar3;
  Type TVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FText *pFVar8;
  FText *pFVar9;
  UPrimitiveComponent *pUVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  longlong local_res18;
  FCommitMeshParameters local_res20;
  AActor *local_b8;
  longlong local_b0;
  FText local_a8;
  FText local_98;
  FText local_88;
  undefined4 local_78 [2];
  ForAnyElementType local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))();
  pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x10);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"URemoveOccludedTrianglesTool",
                      L"RemoveOccludedTrianglesToolTransactionName",L"Remove Occluded Triangles");
  (*pcVar1)(lVar7 + 0x28,pFVar8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if ((param_1->ArrayNum != (this->Previews).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Results.Num() == Previews.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemoveOccludedTrianglesTool.cpp"
                         ,0x1d5,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = false;
  uVar14 = 0;
  uVar15 = uVar14;
  bVar18 = bVar3;
  if (0 < (this->Previews).ArrayNum) {
    do {
      uVar16 = (uint)uVar14;
      if (bVar3) {
LAB_14ccfc157:
        bVar3 = true;
      }
      else {
        uVar13 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(*(longlong *)((param_1->AllocatorInstance).Data + uVar15) + 0x170) == 0)
        goto LAB_14ccfc157;
        bVar3 = false;
      }
      uVar14 = (ulonglong)(uVar16 + 1);
      uVar15 = uVar15 + 0x58;
    } while ((int)(uVar16 + 1) < (this->Previews).ArrayNum);
    bVar18 = false;
    if (bVar3) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"URemoveOccludedTrianglesTool",L"RemoveOccludedDestroyTitle",
                          L"Delete mesh components?");
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"URemoveOccludedTrianglesTool",L"RemoveOccludedDestroyQuestion"
                          ,
                          L"Jacketing has removed all triangles from at least one mesh. Do you actually want to delete these mesh components? Note that either way all actors will remain, and meshes that would not have all triangles removed will still be jacketed as normal."
                         );
      TVar4 = FMessageDialog::Open(YesNo,pFVar9,pFVar8);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      bVar18 = (TVar4 & ~Cancel) != No;
    }
  }
  uVar16 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  if (0 < (this->Previews).ArrayNum) {
    local_res18 = 0;
    local_b0 = 0;
    do {
      lVar7 = local_b0;
      uVar12 = ~uVar16 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*(longlong *)((param_1->AllocatorInstance).Data + local_res18) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Results[PreviewIdx].Mesh.Get() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemoveOccludedTrianglesTool.cpp"
                             ,0x1ec,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar16 < (this->PreviewToTargetIdx).ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar13 = *(uint *)((this->PreviewToTargetIdx).AllocatorInstance.Data + lVar7);
      uVar5 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(*(longlong *)((param_1->AllocatorInstance).Data + local_res18) + 0x170) == 0) {
        if ((bVar18) && (uVar13 = 0, 0 < (int)this->_padding_)) {
          lVar17 = 0;
          lVar7 = 0;
          do {
            uVar12 = 0;
            if ((int)uVar13 < (this->TargetToPreviewIdx).ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(uint *)((this->TargetToPreviewIdx).AllocatorInstance.Data + lVar7) == uVar16) {
              uVar12 = 0;
              if ((int)uVar13 < (int)this->_padding_) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pUVar10 = UE::ToolTarget::GetTargetComponent
                                  (*(UToolTarget **)(lVar17 + this->_padding_));
              (**(code **)(*(longlong *)pUVar10 + 0x4a0))(pUVar10,0);
            }
            uVar13 = uVar13 + 1;
            lVar7 = lVar7 + 4;
            lVar17 = lVar17 + 8;
          } while ((int)uVar13 < (int)this->_padding_);
        }
      }
      else {
        local_res20.bHaveTargetLOD = false;
        local_res20._1_3_ = 0;
        local_res20.TargetLOD = Default;
        uVar5 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar2 = *(FDynamicMesh3 **)((param_1->AllocatorInstance).Data + local_res18);
        uVar12 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::ToolTarget::CommitMeshDescriptionUpdateViaDynamicMesh
                  (*(UToolTarget **)(this->_padding_ + (longlong)(int)uVar13 * 8),pFVar2,true,
                   &local_res20);
        uVar12 = 0;
        if ((int)uVar13 < (int)this->_padding_) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_b8 = UE::ToolTarget::GetTargetActor
                             (*(UToolTarget **)(this->_padding_ + (longlong)(int)uVar13 * 8));
        if (((local_70.Data <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < local_70.Data + (longlong)local_68._4_4_ * 8))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = (int)local_68;
        if ((int)local_68 == local_68._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_70,(int *)((longlong)&local_68 + 4));
        }
        local_68 = CONCAT44(local_68._4_4_,iVar6 + 1);
        *(AActor **)(local_70.Data + (longlong)iVar6 * 8) = local_b8;
      }
      local_res18 = local_res18 + 0x58;
      local_b0 = local_b0 + 4;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (this->Previews).ArrayNum);
  }
  if (bVar18) {
    local_78[0] = 3;
    if (0 < (int)local_68) {
      local_78[0] = 0;
    }
    plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar11 + 0x370))(plVar11,local_78);
  }
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14cd01860

UClass * __cdecl URemoveOccludedTrianglesTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesTool",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesTool,0x210,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesTool>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.InnerSingleton;
}

// HasAccept @ 14cd034a0

bool __thiscall URemoveOccludedTrianglesTool::HasAccept(URemoveOccludedTrianglesTool *this)

{
  return true;
}

// HasCancel @ 14cd03540

bool __thiscall URemoveOccludedTrianglesTool::HasCancel(URemoveOccludedTrianglesTool *this)

{
  return true;
}

// MakePolygroupLayerProperties @ 14cd0b6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
URemoveOccludedTrianglesTool::MakePolygroupLayerProperties(URemoveOccludedTrianglesTool *this)

{
  uint *puVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  UClass *pUVar13;
  UPolygroupLayersProperties *pUVar14;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar15;
  ulonglong uVar16;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar17;
  byte bVar18;
  longlong *plVar19;
  FDynamicMeshAttributeSet *pFVar20;
  ForAnyElementType FVar21;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStackY_278 [32];
  uint local_248;
  int local_240;
  uint uStack_23c;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  longlong local_220;
  longlong local_218;
  FName local_210;
  undefined4 local_208;
  int local_204;
  undefined8 local_200;
  URemoveOccludedTrianglesTool *local_1f8;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  FSparseArrayAllocationInfo local_1c8;
  FName local_1b8 [2];
  undefined1 local_1a8 [128];
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  int local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f8 = this;
  pFVar12 = ::FName::FName(local_1b8,L"Polygroup Layer");
  FVar2 = *pFVar12;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar13);
  local_1a8._24_4_ = RF_NoFlags;
  local_1a8._40_8_ = (UObject *)0x0;
  local_1a8[0x20] = false;
  local_1a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1a8._56_8_ = (UPackage *)0x0;
  local_1a8._8_8_ = this;
  local_1a8._16_8_ = FVar2;
  pUVar14 = (UPolygroupLayersProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar19 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UPolygroupLayersProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->PolygroupLayersProperties).field0_0x0.DebugPtr = pUVar14;
  if (((this->OriginalDynamicMeshes).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalDynamicMeshes.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RemoveOccludedTrianglesTool.cpp"
                         ,0x99,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->OriginalDynamicMeshes).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
  if ((*(longlong *)pFVar3 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar4 = *(longlong *)pFVar3;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  if (*(longlong *)(lVar4 + 0x208) != 0) {
    for (iVar24 = 0; iVar9 = (**(code **)(**(longlong **)(lVar4 + 0x208) + 200))(), iVar24 < iVar9;
        iVar24 = iVar24 + 1) {
      pFVar20 = (FDynamicMeshAttributeSet *)0x0;
      if (*(FDynamicMeshAttributeSet **)(lVar4 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
        pFVar20 = *(FDynamicMeshAttributeSet **)(lVar4 + 0x208);
      }
      pTVar15 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar20,iVar24);
      local_200 = *(undefined8 *)&pTVar15->field_0x8;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&local_d8,&local_210,(bool *)&local_200);
    }
  }
  local_248 = 1;
  if (1 < (this->OriginalDynamicMeshes).ArrayNum) {
    local_218 = 0x10;
    local_220 = 1;
    do {
      uVar11 = 0;
      if ((int)local_248 < (this->OriginalDynamicMeshes).ArrayNum) {
        uVar11 = ~local_248 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar3 + local_220 * 0x10) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)(pFVar3 + local_218);
      local_128._0_8_ = (FScriptContainerElement *)0x0;
      local_128._8_8_ = 0;
      local_108 = (ForElementType<unsigned_int>)0x0;
      local_100 = 0;
      local_fc = 0x80;
      local_f8 = -1;
      local_f4 = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      if (*(longlong *)(lVar4 + 0x208) != 0) {
        for (iVar24 = 0; iVar9 = (**(code **)(**(longlong **)(lVar4 + 0x208) + 200))(),
            this = local_1f8, iVar24 < iVar9; iVar24 = iVar24 + 1) {
          pFVar20 = (FDynamicMeshAttributeSet *)0x0;
          if (*(FDynamicMeshAttributeSet **)(lVar4 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
            pFVar20 = *(FDynamicMeshAttributeSet **)(lVar4 + 0x208);
          }
          pTVar15 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar20,iVar24);
          lVar23 = *(longlong *)&pTVar15->field_0x8;
          if (local_f4 == 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,4,1,(ForAnyElementType *)local_128,(int *)(local_128 + 8),
                               (int *)(local_128 + 0xc));
            iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),1);
            FVar22 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
            if (local_108 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_108;
            }
            bVar18 = (byte)iVar10 & 0x1f;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0x1f;
              bVar18 = bVar18 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar10 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar18 & 0x1f));
            iVar10 = local_f8;
          }
          else {
            local_f4 = local_f4 + -1;
            iVar10 = *(int *)(local_128._0_8_ + (longlong)local_f8 * 0x10 + 4);
            iVar9 = local_f8;
            if (local_f4 != 0) {
              *(undefined4 *)(local_128._0_8_ + (longlong)iVar10 * 0x10) = 0xffffffff;
            }
          }
          local_f8 = iVar10;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_128,&local_1c8,iVar9);
          pvVar7 = local_1c8.Pointer;
          iVar9 = local_1c8.Index;
          if (local_1c8.Pointer != (longlong *)0x0) {
            *(longlong *)local_1c8.Pointer = lVar23;
            *(undefined4 *)((longlong)local_1c8.Pointer + 8) = 0xffffffff;
          }
          lVar23 = *(longlong *)local_1c8.Pointer;
          uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar23);
          uVar11 = uVar11 + (int)((ulonglong)lVar23 >> 0x20);
          if ((local_128._8_4_ - local_f4 != 1) && (local_128._8_4_ != local_f4)) {
            FVar21.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_e8.Data;
            }
            for (iVar10 = *(int *)(FVar21.Data + (ulonglong)(local_e0 - 1 & uVar11) * 4);
                iVar10 != -1; iVar10 = *(int *)(local_128._0_8_ + (longlong)iVar10 * 0x10 + 8)) {
              if (*(longlong *)(local_128._0_8_ + (longlong)iVar10 * 0x10) == *(longlong *)pvVar7) {
                if (iVar10 != -1) {
                  *(longlong *)(local_128._0_8_ + (longlong)iVar10 * 0x10) = *(longlong *)pvVar7;
                  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_128,iVar9,1);
                  goto LAB_14cd0bea7;
                }
                break;
              }
            }
          }
          uVar27 = local_128._8_4_ - local_f4;
          uVar25 = 1;
          if (3 < uVar27) {
            uVar28 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_208 = (undefined4)lVar23;
            uVar25 = 1 << ((byte)lVar23 & 0x1f);
          }
          if (((int)uVar27 < 1) || ((int)uVar25 <= (int)local_e0)) {
            uVar11 = local_e0 - 1 & uVar11;
            *(uint *)((longlong)pvVar7 + 0xc) = uVar11;
            FVar21.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_e8.Data;
            }
            uVar28 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)((longlong)pvVar7 + 8) = *(undefined4 *)(FVar21.Data + uVar28 * 4);
            *(int *)(FVar21.Data + uVar28 * 4) = iVar9;
          }
          else {
            local_e0 = uVar25;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
            }
            if (uVar25 != 0) {
              uVar11 = uVar25;
              if (uVar25 < 2) {
                if (local_e8.Data != (FScriptContainerElement *)0x0) {
                  uVar11 = 0;
                  goto LAB_14cd0bc9d;
                }
              }
              else {
LAB_14cd0bc9d:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_e8,0,uVar11,4);
              }
              if (0 < (int)uVar25) {
                uVar29 = (ulonglong)uVar25;
                uVar28 = 0;
                do {
                  FVar21.Data = local_f0;
                  if (local_e8.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_e8.Data;
                  }
                  uVar16 = uVar28 & (longlong)(int)uVar25 - 1U;
                  uVar28 = uVar28 + 1;
                  *(undefined4 *)(FVar21.Data + uVar16 * 4) = 0xffffffff;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            if (local_e0 != 0) {
              local_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
              uStack_23c = 1;
              local_240 = 0;
              iStack_22c = 0;
              iStack_228 = 0;
              if (local_100 != 0) {
                FVar22 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
                if (local_108 != (ForElementType<unsigned_int>)0x0) {
                  FVar22 = local_108;
                }
                uVar11 = *(uint *)FVar22;
                iStack_228 = 0;
                local_240 = 0;
                while (uVar11 == 0) {
                  iStack_228 = iStack_228 + 0x20;
                  lVar23 = (longlong)local_240;
                  local_240 = local_240 + 1;
                  if ((int)(local_100 + -1 + (local_100 + -1 >> 0x1f & 0x1fU)) >> 5 < local_240)
                  goto LAB_14cd0bdc1;
                  uVar11 = ((uint *)((longlong)FVar22 + 4))[lVar23];
                }
                uStack_23c = -uVar11 & uVar11;
                uVar28 = (ulonglong)uStack_23c * 2 + 1;
                lVar23 = 0x3f;
                if (uVar28 != 0) {
                  for (; uVar28 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                local_204 = (int)lVar23;
                iStack_22c = local_204 + -1 + iStack_228;
                if (local_100 < iStack_22c) {
LAB_14cd0bdc1:
                  iStack_22c = local_100;
                }
              }
              local_1f0 = (longlong *)local_128;
              local_1e8._padding_ = CONCAT44(uStack_23c,local_240);
              local_1e8.CurrentBitIndex = iStack_22c;
              local_1e8.UnvisitedBitMask = 0xffffffff;
              local_1e8._28_4_ = uStack_224;
              local_1e8.BaseBitIndex = iStack_228;
              if (iStack_22c < local_100) {
                do {
                  puVar26 = (undefined8 *)((longlong)iStack_22c * 0x10 + *local_1f0);
                  uVar5 = *puVar26;
                  uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
                  uVar11 = local_e0 - 1 & uVar11 + (int)((ulonglong)uVar5 >> 0x20);
                  *(uint *)((longlong)puVar26 + 0xc) = uVar11;
                  FVar21.Data = local_f0;
                  if (local_e8.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_e8.Data;
                  }
                  uVar28 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar11;
                  *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(FVar21.Data + uVar28 * 4);
                  *(int *)(FVar21.Data + uVar28 * 4) = iStack_22c;
                  local_1e8.UnvisitedBitMask =
                       local_1e8.UnvisitedBitMask & ~local_1e8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
                  iStack_22c = local_1e8.CurrentBitIndex;
                } while (local_1e8.CurrentBitIndex < (local_1e8.Array)->NumBits);
              }
            }
          }
LAB_14cd0bea7:
        }
      }
      pTVar17 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Intersect
                          (&local_d8,&local_88,
                           (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_128);
      if (&local_d8 != pTVar17) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>(&local_d8,pTVar17);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_e0 = 0;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      bVar8 = local_128._12_4_ != 0;
      local_128._8_8_ = (ulonglong)(uint)local_128._12_4_ << 0x20;
      if (bVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
      }
      local_f8 = -1;
      local_f4 = 0;
      local_100 = 0;
      if (0x80 < local_fc) {
        local_fc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
      }
      if (local_108 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108);
      }
      if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._0_8_);
      }
      local_248 = local_248 + 1;
      local_220 = local_220 + 1;
      local_218 = local_218 + 0x10;
    } while ((int)local_248 < (this->OriginalDynamicMeshes).ArrayNum);
  }
  UPolygroupLayersProperties::InitializeGroupLayers
            ((this->PolygroupLayersProperties).field0_0x0.DebugPtr,&local_d8);
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  return;
}

// OnPropertyModified @ 14cd11e20

void __thiscall
URemoveOccludedTrianglesTool::OnPropertyModified
          (URemoveOccludedTrianglesTool *this,UObject *param_1,FProperty *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnShutdown @ 14cd132c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URemoveOccludedTrianglesTool::OnShutdown
          (URemoveOccludedTrianglesTool *this,EToolShutdownType param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UPreviewMesh *this_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FDynamicMeshOpResult *pFVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FDynamicMeshOpResult,TSizedDefaultAllocator<32>_> local_a8;
  FDynamicMeshOpResult local_98;
  
  if ((param_1 == Accept) && (cVar10 = (**(code **)(this->_padding_ + 0x398))(), cVar10 == '\0')) {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    param_1 = Cancel;
  }
  uVar15 = 0;
  if (0 < (int)this->_padding_) {
    lVar16 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar15 < (int)this->_padding_) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::ToolTarget::ShowSourceObject(*(UToolTarget **)(lVar16 + this->_padding_));
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar15 < (int)this->_padding_);
  }
  pFVar17 = (this->PreviewCopies).AllocatorInstance.Data;
  iVar4 = (this->PreviewCopies).ArrayNum;
  pFVar2 = pFVar17 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->PreviewCopies).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPreviewMesh>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar17 == pFVar2) break;
    this_00 = *(UPreviewMesh **)pFVar17;
    UPreviewMesh::SetVisible(this_00,false);
    UPreviewMesh::Disconnect(this_00);
    pFVar17 = pFVar17 + 8;
  }
  piVar1 = &(this->PreviewCopies).ArrayMax;
  (this->PreviewCopies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PreviewCopies).AllocatorInstance,0,piVar1);
  }
  pFVar17 = (this->Previews).AllocatorInstance.Data;
  iVar4 = (this->Previews).ArrayNum;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pFVar2 = pFVar17 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar2) break;
    pFVar14 = UMeshOpPreviewWithBackgroundCompute::Shutdown
                        (*(UMeshOpPreviewWithBackgroundCompute **)pFVar17,&local_98);
    if (((local_a8.AllocatorInstance.Data <= pFVar14) &&
        (pFVar14 < (FDynamicMeshOpResult *)
                   (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x58))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = local_a8.ArrayNum;
    if (local_a8.ArrayNum == local_a8.ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
    }
    local_a8.ArrayNum = iVar13 + 1;
    lVar16 = (longlong)iVar13 * 0x58;
    *(FDynamicMesh3 **)&local_a8.AllocatorInstance.Data[lVar16].field_0x0 = (pFVar14->Mesh).Ptr;
    (pFVar14->Mesh).Ptr = (FDynamicMesh3 *)0x0;
    dVar9 = (pFVar14->Transform).Rotation.field0_0x0._s_0.Y;
    *(double *)(local_a8.AllocatorInstance.Data + lVar16 + 8) =
         (pFVar14->Transform).Rotation.field0_0x0._s_0.X;
    *(double *)(local_a8.AllocatorInstance.Data + lVar16 + 8 + 8) = dVar9;
    dVar9 = (pFVar14->Transform).Rotation.field0_0x0._s_0.W;
    *(double *)(local_a8.AllocatorInstance.Data + lVar16 + 0x18) =
         (pFVar14->Transform).Rotation.field0_0x0._s_0.Z;
    *(double *)(local_a8.AllocatorInstance.Data + lVar16 + 0x18 + 8) = dVar9;
    dVar9 = (pFVar14->Transform).Translation.field0_0x0._s_0.Y;
    *(double *)(local_a8.AllocatorInstance.Data + lVar16 + 0x28) =
         (pFVar14->Transform).Translation.field0_0x0._s_0.X;
    *(double *)(local_a8.AllocatorInstance.Data + lVar16 + 0x28 + 8) = dVar9;
    uVar6 = *(undefined4 *)((longlong)&(pFVar14->Transform).Translation.field0_0x0 + 0x14);
    uVar7 = *(undefined4 *)&(pFVar14->Transform).Scale3D.field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&(pFVar14->Transform).Scale3D.field0_0x0 + 4);
    pFVar3 = local_a8.AllocatorInstance.Data + lVar16 + 0x38;
    *(undefined4 *)pFVar3 =
         *(undefined4 *)((longlong)&(pFVar14->Transform).Translation.field0_0x0 + 0x10);
    *(undefined4 *)(pFVar3 + 4) = uVar6;
    *(undefined4 *)(pFVar3 + 8) = uVar7;
    *(undefined4 *)(pFVar3 + 0xc) = uVar8;
    uVar6 = *(undefined4 *)((longlong)&(pFVar14->Transform).Scale3D.field0_0x0 + 0xc);
    uVar7 = *(undefined4 *)((longlong)&(pFVar14->Transform).Scale3D.field0_0x0 + 0x10);
    uVar8 = *(undefined4 *)((longlong)&(pFVar14->Transform).Scale3D.field0_0x0 + 0x14);
    pFVar3 = local_a8.AllocatorInstance.Data + lVar16 + 0x48;
    *(undefined4 *)pFVar3 = *(undefined4 *)((longlong)&(pFVar14->Transform).Scale3D.field0_0x0 + 8);
    *(undefined4 *)(pFVar3 + 4) = uVar6;
    *(undefined4 *)(pFVar3 + 8) = uVar7;
    *(undefined4 *)(pFVar3 + 0xc) = uVar8;
    if (local_98.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_98.Mesh.Ptr)->_padding_)(local_98.Mesh.Ptr,1);
    }
    pFVar17 = pFVar17 + 8;
  }
  if (param_1 == Accept) {
    GenerateAsset(this,&local_a8);
  }
  DestructItems<FDynamicMeshOpResult,int>
            ((FDynamicMeshOpResult *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FDynamicMeshOpResult *)local_a8.AllocatorInstance.Data != (FDynamicMeshOpResult *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// OnTick @ 14cd15210

void __thiscall
URemoveOccludedTrianglesTool::OnTick(URemoveOccludedTrianglesTool *this,float param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  char local_res20;
  uint local_68;
  longlong local_60;
  
  pFVar11 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar4 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar4) break;
    UMeshOpPreviewWithBackgroundCompute::Tick
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar11,param_1);
    pFVar11 = pFVar11 + 8;
  }
  local_68 = 0;
  if (0 < (this->Previews).ArrayNum) {
    lVar14 = 0;
    local_60 = 0;
    do {
      uVar8 = 0;
      if ((int)local_68 < (this->Previews).ArrayNum) {
        uVar8 = ~local_68 >> 0x1f;
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
      this_00 = *(UMeshOpPreviewWithBackgroundCompute **)
                 ((this->Previews).AllocatorInstance.Data + local_60);
      cVar7 = UMeshOpPreviewWithBackgroundCompute::IsUsingWorkingMaterial(this_00);
      uVar8 = 0;
      if ((int)local_68 < (this->PreviewToCopyIdx).ArrayNum) {
        uVar8 = ~local_68 >> 0x1f;
      }
      local_res20 = cVar7;
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
      pFVar4 = (this->PreviewToCopyIdx).AllocatorInstance.Data;
      uVar8 = *(uint *)(pFVar4 + lVar14 + 8);
      uVar10 = (ulonglong)(int)uVar8;
      puVar15 = *(uint **)(pFVar4 + lVar14);
      puVar1 = puVar15 + uVar10;
      while( true ) {
        if (*(int *)(pFVar4 + lVar14 + 8) != (int)uVar10) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (puVar15 == puVar1) break;
        uVar3 = *puVar15;
        lVar12 = (longlong)(int)uVar3;
        iVar2 = (this->PreviewCopies).ArrayNum;
        uVar13 = ~uVar3 >> 0x1f;
        if (cVar7 == '\0') {
          uVar9 = 0;
          if ((int)uVar3 < iVar2) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
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
          UPreviewMesh::ClearOverrideRenderMaterial
                    (*(UPreviewMesh **)((this->PreviewCopies).AllocatorInstance.Data + lVar12 * 8));
          uVar9 = 0;
          if ((int)uVar3 < (this->PreviewCopies).ArrayNum) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
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
          UPreviewMesh::SetSecondaryRenderMaterial
                    (*(UPreviewMesh **)((this->PreviewCopies).AllocatorInstance.Data + lVar12 * 8),
                     (this_00->SecondaryMaterial).field0_0x0.DebugPtr);
          uVar10 = (ulonglong)uVar8;
          puVar15 = puVar15 + 1;
          cVar7 = local_res20;
        }
        else {
          uVar9 = 0;
          if ((int)uVar3 < iVar2) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
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
          UPreviewMesh::SetOverrideRenderMaterial
                    (*(UPreviewMesh **)((this->PreviewCopies).AllocatorInstance.Data + lVar12 * 8),
                     (this_00->WorkingMaterial).field0_0x0.DebugPtr);
          uVar9 = 0;
          if ((int)uVar3 < (this->PreviewCopies).ArrayNum) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
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
          UPreviewMesh::ClearSecondaryRenderMaterial
                    (*(UPreviewMesh **)((this->PreviewCopies).AllocatorInstance.Data + lVar12 * 8));
          uVar10 = (ulonglong)uVar8;
          puVar15 = puVar15 + 1;
          cVar7 = local_res20;
        }
      }
      lVar14 = lVar14 + 0x10;
      local_68 = local_68 + 1;
      local_60 = local_60 + 8;
    } while ((int)local_68 < (this->Previews).ArrayNum);
  }
  return;
}

// Setup @ 14cd2ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall URemoveOccludedTrianglesTool::Setup(URemoveOccludedTrianglesTool *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  FText *pFVar11;
  FName *pFVar12;
  UClass *pUVar13;
  URemoveOccludedTrianglesToolProperties *pUVar14;
  URemoveOccludedTrianglesAdvancedProperties *pUVar15;
  void *this_01;
  TPropertyWatcher<EOccludedAction> *pTVar16;
  undefined ***pppuVar17;
  uint uVar18;
  TPropertyWatcher<EOccludedAction> *pTVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  TPropertyWatcher<EOccludedAction> *pTVar22;
  uint uVar23;
  undefined1 auStackY_238 [32];
  uint local_1e8;
  char local_1e4;
  undefined1 local_1e3 [3];
  TArray<int,TSizedDefaultAllocator<32>_> local_1e0;
  code *local_1c8;
  undefined **local_1b8;
  URemoveOccludedTrianglesTool *local_1b0;
  undefined ***local_1a0;
  FName local_198;
  FName local_190;
  FText local_188;
  FText local_178;
  code *local_168 [2];
  code *local_158 [3];
  undefined8 local_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pTVar16 = (TPropertyWatcher<EOccludedAction> *)0x0;
  uVar23 = 0;
  pTVar19 = pTVar16;
  pTVar22 = pTVar16;
  if (0 < (int)this->_padding_) {
    do {
      uVar18 = (uint)pTVar19;
      uVar7 = uVar23;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar7 = ~uVar18 >> 0x1f;
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
      UE::ToolTarget::HideSourceObject
                (*(UToolTarget **)((longlong)&pTVar22->_padding_ + this->_padding_));
      pTVar19 = (TPropertyWatcher<EOccludedAction> *)(ulonglong)(uVar18 + 1);
      pTVar22 = (TPropertyWatcher<EOccludedAction> *)&pTVar22->Cached;
    } while ((int)(uVar18 + 1) < (int)this->_padding_);
  }
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_1e4 = UMultiSelectionMeshEditingTool::GetMapToSharedSourceData
                        ((UMultiSelectionMeshEditingTool *)this,&local_1e0);
  this_00 = &this->TargetToPreviewIdx;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,(int)this->_padding_,Default);
  pTVar2 = &this->PreviewToTargetIdx;
  piVar1 = &(this->PreviewToTargetIdx).ArrayMax;
  (this->PreviewToTargetIdx).ArrayNum = 0;
  if ((this->PreviewToTargetIdx).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_1e8 = 0;
  pTVar19 = pTVar16;
  if (0 < local_1e0.ArrayNum) {
    do {
      uVar18 = (uint)pTVar19;
      uVar7 = uVar23;
      if ((int)uVar18 < local_1e0.ArrayNum) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(uint *)(local_1e0.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) == local_1e8) {
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        iVar9 = (this->PreviewToTargetIdx).ArrayNum;
        if (((pFVar3 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->PreviewToTargetIdx).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PreviewToTargetIdx).ArrayNum = iVar8 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_1e8;
      }
      else {
        lVar20 = (longlong)(int)local_1e8;
        uVar7 = uVar23;
        if ((int)local_1e8 < local_1e0.ArrayNum) {
          uVar7 = ~local_1e8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = *(uint *)(local_1e0.AllocatorInstance.Data + lVar20 * 4);
        uVar18 = 0;
        if ((int)uVar7 < (this->TargetToPreviewIdx).ArrayNum) {
          uVar18 = ~uVar7 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
      }
      lVar20 = (longlong)(int)local_1e8;
      uVar7 = 0;
      if ((int)local_1e8 < (this->TargetToPreviewIdx).ArrayNum) {
        uVar7 = ~local_1e8 >> 0x1f;
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
      *(int *)((this_00->AllocatorInstance).Data + lVar20 * 4) = iVar9;
      local_1e8 = local_1e8 + 1;
      pTVar19 = (TPropertyWatcher<EOccludedAction> *)(ulonglong)local_1e8;
    } while ((int)local_1e8 < local_1e0.ArrayNum);
  }
  if (local_1e4 != '\0') {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar5 = *(code **)(*plVar10 + 0x360);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_188,L"URemoveOccludedTrianglesTool",
                         L"JacketingMultipleAssetWithSameSource",
                         L"WARNING: Multiple meshes in your selection use the same source asset!  Triangles will be conservatively removed from these meshes only when they are occluded in every selected instance."
                        );
    (*pcVar5)(plVar10,pFVar11,3);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
  }
  SetupPreviews(this);
  pFVar12 = ::FName::FName(&local_198,L"Remove Occluded Triangle Settings");
  FVar4 = *pFVar12;
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = URemoveOccludedTrianglesToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar13);
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._24_4_ = RF_NoFlags;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._8_8_ = this;
  local_138._16_8_ = FVar4;
  pUVar14 = (URemoveOccludedTrianglesToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar10 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (URemoveOccludedTrianglesToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->BasicProperties).field0_0x0.DebugPtr = pUVar14;
  pFVar12 = ::FName::FName(&local_190,L"Advanced Settings");
  FVar4 = *pFVar12;
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = URemoveOccludedTrianglesAdvancedProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar13);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  local_b8._16_8_ = FVar4;
  pUVar15 = (URemoveOccludedTrianglesAdvancedProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (URemoveOccludedTrianglesAdvancedProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->AdvancedProperties).field0_0x0.DebugPtr = pUVar15;
  MakePolygroupLayerProperties(this);
  pUVar14 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_1b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`URemoveOccludedTrianglesTool::Setup'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_1a0 = (undefined ***)0x0;
  local_1c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`URemoveOccludedTrianglesTool::Setup'::__l2::<lambda_1>,void,enum_EOccludedAction_const_&>
              ::Call;
  local_1b0 = this;
  this_01 = ::operator_new(0xa0);
  if (this_01 != (void *)0x0) {
    local_168[0] = local_1c8;
    local_140 = 0;
    if (local_1c8 != (code *)0x0) {
      pppuVar17 = &local_1b8;
      if (local_1a0 != (undefined ***)0x0) {
        pppuVar17 = local_1a0;
      }
      (*(code *)**pppuVar17)(pppuVar17,local_168 + 2);
    }
    pTVar16 = FWatchablePropertySet::TPropertyWatcher<enum_EOccludedAction>::
              TPropertyWatcher<enum_EOccludedAction><enum_EOccludedAction,void>
                        (this_01,&pUVar14->Action,
                         (TFunction<void___cdecl(EOccludedAction_const_&)> *)local_168);
  }
  iVar9 = (int)pUVar14->_padding_;
  piVar1 = (int *)((longlong)&pUVar14->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar14->_padding_,piVar1);
  }
  *(int *)&pUVar14->_padding_ = iVar9 + 1;
  *(TPropertyWatcher<EOccludedAction> **)(pUVar14->_padding_ + (longlong)iVar9 * 8) = pTVar16;
  if (local_1c8 != (code *)0x0) {
    pppuVar17 = &local_1b8;
    if (local_1a0 != (undefined ***)0x0) {
      pppuVar17 = local_1a0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->BasicProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->PolygroupLayersProperties).field0_0x0.DebugPtr)
  ;
  (**(code **)(this->_padding_ + 0x318))(this,(this->AdvancedProperties).field0_0x0.DebugPtr);
  pFVar21 = (this->Previews).AllocatorInstance.Data;
  iVar9 = (this->Previews).ArrayNum;
  pFVar3 = pFVar21 + (longlong)iVar9 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar9) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1e3);
    }
    if (pFVar21 == pFVar3) break;
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar21);
    pFVar21 = pFVar21 + 8;
  }
  plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar5 = *(code **)(*plVar10 + 0x360);
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_178,L"URemoveOccludedTrianglesTool",
                       L"RemoveOccludedTrianglesToolDescription",
                       L"Remove triangles that are fully contained within the selected Meshes, and hence cannot be visible with opaque shading."
                      );
  (*pcVar5)(plVar10,pFVar11,2);
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// SetupPreviews @ 14cd2b840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall URemoveOccludedTrianglesTool::SetupPreviews(URemoveOccludedTrianglesTool *this)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
  *this_01;
  TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_> *this_02;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_03;
  TArray<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UPreviewMesh>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  UMeshOpPreviewWithBackgroundCompute *this_04;
  UPreviewMesh *pUVar6;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this_05;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  UMeshOpPreviewWithBackgroundCompute *pUVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  UInteractiveToolManager *pUVar22;
  UObject *pUVar23;
  UClass *pUVar24;
  TReferenceControllerBase<1> *pTVar25;
  FDynamicMesh3 *pFVar26;
  FName *pFVar27;
  UWorld *pUVar28;
  UMaterialInterface *pUVar29;
  TTransform<double> *pTVar30;
  ulong64 uVar31;
  longlong *plVar32;
  FScriptContainerElement *pFVar33;
  ForAnyElementType FVar34;
  uint uVar35;
  FSharedReferencer<1> FVar36;
  TReferenceControllerBase<1> *pTVar37;
  uint uVar38;
  TReferenceControllerBase<1> *pTVar39;
  longlong lVar40;
  TReferenceControllerBase<1> *pTVar41;
  longlong lVar42;
  uint uVar43;
  undefined1 auStackY_798 [32];
  int local_744;
  longlong local_740;
  uint local_738;
  UMeshOpPreviewWithBackgroundCompute *local_730;
  int *local_728;
  UPreviewMesh *local_720;
  UMeshOpPreviewWithBackgroundCompute *local_718;
  TReferenceControllerBase<1> *local_710;
  FSharedReferencer<1> FStack_708;
  TReferenceControllerBase<1> *local_700;
  FSharedReferencer<1> FStack_6f8;
  TReferenceControllerBase<1> *local_6f0;
  FSharedReferencer<1> FStack_6e8;
  int local_6e0 [2];
  longlong local_6d8;
  UMaterialInterface *local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_6b8;
  FGetMeshParameters local_6a8;
  int *local_698;
  longlong local_690;
  URemoveOccludedTrianglesTool *local_688;
  uint uStack_680;
  undefined4 uStack_67c;
  FComponentMaterialSet local_678;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_668;
  URemoveOccludedTrianglesTool *local_658;
  uint local_650;
  URemoveOccludedTrianglesTool *local_648;
  int local_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double dStack_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double dStack_5a8;
  double dStack_5a0;
  undefined1 local_598 [16];
  undefined1 local_588 [16];
  undefined8 uStack_578;
  undefined8 local_570;
  TReferenceControllerBase<1> *pTStack_568;
  undefined8 local_560;
  TReferenceControllerBase<1> *pTStack_558;
  double local_550;
  double dStack_548;
  double local_540;
  double local_538;
  double dStack_530;
  double local_528;
  double local_520;
  double dStack_518;
  double local_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  code *local_4e8 [2];
  undefined **local_4d8;
  URemoveOccludedTrianglesTool *local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  code *local_4b8 [2];
  undefined **local_4a8;
  URemoveOccludedTrianglesTool *local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  FDynamicMesh3 local_488;
  undefined1 local_258 [128];
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_798;
  uVar18 = (uint)this->_padding_;
  uVar38 = (this->PreviewToTargetIdx).ArrayNum;
  pUVar22 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  local_588._8_8_ = ___xmm_3f8000003f6666663dcccccd3f666666;
  uStack_578 = _UNK_15297a588;
  local_6d0 = ToolSetupUtil::GetSelectionMaterial((FLinearColor *)(local_588 + 8),pUVar22,0.0);
  local_6e0[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->OccludedGroupIDs,local_6e0,uVar38);
  local_6e0[1] = 0xffffffff;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->OccludedGroupLayers,local_6e0 + 1,uVar38);
  this_00 = &this->OccluderTrees;
  iVar20 = (this->OccluderTrees).ArrayNum;
  piVar1 = &(this->OccluderTrees).ArrayNum;
  local_698 = piVar1;
  if (iVar20 < (int)uVar18) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar18 - iVar20,&this_00->AllocatorInstance,piVar1,
                        &(this->OccluderTrees).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar17 * 0x10,0,
           (longlong)(int)(uVar18 - iVar20) << 4);
  }
  else {
    if ((int)uVar18 < 0) goto LAB_14cd2d241;
    if ((int)uVar18 < iVar20) {
      uVar35 = iVar20 - uVar18;
      if (((int)(uVar18 | uVar35) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar35 != 0) {
        TArray<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar18,uVar35);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->OccluderTrees).ArrayMax);
      }
    }
  }
  this_01 = &this->OccluderWindings;
  iVar20 = (this->OccluderWindings).ArrayNum;
  piVar1 = &(this->OccluderWindings).ArrayNum;
  if (iVar20 < (int)uVar18) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar18 - iVar20,&this_01->AllocatorInstance,piVar1,
                        &(this->OccluderWindings).ArrayMax);
    memset((this_01->AllocatorInstance).Data + (longlong)iVar17 * 0x10,0,
           (longlong)(int)(uVar18 - iVar20) << 4);
  }
  else {
    if ((int)uVar18 < 0) goto LAB_14cd2d241;
    if ((int)uVar18 < iVar20) {
      uVar35 = iVar20 - uVar18;
      if (((int)(uVar18 | uVar35) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar35 != 0) {
        TArray<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_01,uVar18,uVar35);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,*piVar1,&(this->OccluderWindings).ArrayMax);
      }
    }
  }
  pTVar2 = &this->OccluderTransforms;
  iVar20 = (this->OccluderTransforms).ArrayNum;
  piVar1 = &(this->OccluderTransforms).ArrayNum;
  if (iVar20 < (int)uVar18) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,uVar18 - iVar20,&pTVar2->AllocatorInstance,piVar1,
                        &(this->OccluderTransforms).ArrayMax);
    DefaultConstructItems<UE::Geometry::TTransformSRT3<double>,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x50,uVar18 - iVar20);
  }
  else {
    if ((int)uVar18 < 0) {
LAB_14cd2d241:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar20) {
      uVar35 = iVar20 - uVar18;
      if (((int)(uVar18 | uVar35) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar35 != 0) {
        pFVar33 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x50;
        iVar20 = (*piVar1 - uVar35) - uVar18;
        if (iVar20 != 0) {
          memmove(pFVar33,pFVar33 + (longlong)(int)uVar35 * 0x50,(longlong)iVar20 * 0x50);
        }
        *piVar1 = *piVar1 - uVar35;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&pTVar2->AllocatorInstance,*piVar1,&(this->OccluderTransforms).ArrayMax);
      }
    }
  }
  this_02 = &this->OriginalDynamicMeshes;
  iVar20 = (this->OriginalDynamicMeshes).ArrayNum;
  piVar1 = &(this->OriginalDynamicMeshes).ArrayNum;
  local_728 = piVar1;
  if (iVar20 < (int)uVar38) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar38 - iVar20,&this_02->AllocatorInstance,piVar1,
                        &(this->OriginalDynamicMeshes).ArrayMax);
    memset((this_02->AllocatorInstance).Data + (longlong)iVar17 * 0x10,0,
           (longlong)(int)(uVar38 - iVar20) << 4);
  }
  else {
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    if ((int)uVar38 < iVar20) {
      uVar35 = iVar20 - uVar38;
      if (((int)(uVar38 | uVar35) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar35 != 0) {
        TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_02,uVar38,uVar35);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_02->AllocatorInstance,*piVar1,
                   &(this->OriginalDynamicMeshes).ArrayMax);
      }
    }
  }
  this_03 = &this->PreviewToCopyIdx;
  piVar1 = &(this->PreviewToCopyIdx).ArrayMax;
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this_03->AllocatorInstance).Data;
  iVar20 = (this->PreviewToCopyIdx).ArrayNum;
  if ((this->PreviewToCopyIdx).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar20);
    (this->PreviewToCopyIdx).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_03->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar20);
    (this->PreviewToCopyIdx).ArrayNum = 0;
  }
  pTVar39 = (TReferenceControllerBase<1> *)0x0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (this_03,uVar38,Default);
  pTVar14 = _UNK_150651568;
  pTVar13 = ___xmm_00000000000000000000000000000010;
  local_690 = (longlong)(int)uVar18;
  uVar38 = 0;
  if (0 < (int)uVar18) {
    local_740 = 0;
    local_6c8 = 0;
    local_6c0 = 0;
    pTVar37 = pTVar39;
    do {
      lVar42 = local_740;
      uVar43 = (uint)pTVar37;
      uVar35 = ~uVar43 >> 0x1f;
      uVar18 = uVar38;
      if ((int)uVar43 < (this->TargetToPreviewIdx).ArrayNum) {
        uVar18 = uVar35;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = *(uint *)((this->TargetToPreviewIdx).AllocatorInstance.Data + lVar42 * 4);
      lVar40 = (longlong)(int)uVar18;
      local_738 = ~uVar18 >> 0x1f;
      uVar19 = uVar38;
      if ((int)uVar18 < *local_728) {
        uVar19 = local_738;
      }
      local_688 = this;
      uStack_680 = uVar18;
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_6d8 = lVar40 * 0x10;
      if (*(longlong *)((this->OriginalDynamicMeshes).AllocatorInstance.Data + local_6d8) == 0) {
        pUVar23 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar23,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar24 = URemoveOccludedTrianglesOperatorFactory::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_258,pUVar24);
        local_258._8_8_ = pUVar23;
        pUVar23 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
        local_718 = (UMeshOpPreviewWithBackgroundCompute *)pUVar23;
        if (local_258._64_8_ != 0) {
          plVar32 = (longlong *)(local_258 + 0x50);
          if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
            plVar32 = (longlong *)local_258._104_8_;
          }
          (**(code **)(*plVar32 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        *(URemoveOccludedTrianglesTool **)&pUVar23[1].field_0x8 = this;
        *(uint *)&pUVar23[1].field_0x10 = uVar18;
        pTVar25 = ::operator_new(0x240);
        FVar36.ReferenceController = pTVar14;
        pTVar37 = pTVar39;
        pTVar41 = pTVar13;
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
          pTVar25->SharedReferenceCount = (atomic<int>)0x1;
          pTVar25->WeakReferenceCount = (atomic<int>)0x1;
          pTVar25->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
          ;
          UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar25 + 1));
          if ((pTVar25 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          FVar36.ReferenceController = pTVar25;
          pTVar37 = pTVar25;
          pTVar41 = pTVar25 + 1;
        }
        uVar19 = uVar38;
        if ((int)uVar18 < *local_728) {
          uVar19 = local_738;
        }
        local_710 = pTVar41;
        FStack_708.ReferenceController = FVar36.ReferenceController;
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OriginalDynamicMeshes).AllocatorInstance.Data + local_6d8;
        if (pFVar33 != (FScriptContainerElement *)&local_710) {
          *(TReferenceControllerBase<1> **)pFVar33 = pTVar41;
          local_710 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar33 + 8),&FStack_708);
          FVar36.ReferenceController = FStack_708.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar36.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37)
        ;
        local_6a8.bHaveRequestLOD = false;
        local_6a8._1_3_ = 0;
        local_6a8.RequestLOD = Default;
        local_6a8.bWantMeshTangents = false;
        local_6a8._9_3_ = 0;
        uVar19 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar26 = UE::ToolTarget::GetDynamicMeshCopy
                            (&local_488,*(UToolTarget **)(local_6c8 + this->_padding_),&local_6a8);
        uVar19 = uVar38;
        if ((int)uVar18 < *local_728) {
          uVar19 = local_738;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar42 = local_6d8;
        pFVar33 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar33 + local_6d8) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)(pFVar33 + lVar42),pFVar26);
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_488);
        pFVar27 = ::FName::FName((FName *)(local_598 + 8),"Preview");
        pUVar15 = local_718;
        local_730 = NewObject<UMeshOpPreviewWithBackgroundCompute>
                              ((UObject *)local_718,*pFVar27,RF_NoFlags,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_730 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_730);
        }
        pTVar3 = &this->Previews;
        pFVar33 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar33 <= (FScriptContainerElement *)&local_730) &&
            ((FScriptContainerElement *)&local_730 <
             pFVar33 + (longlong)(this->Previews).ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = (this->Previews).ArrayNum;
        piVar1 = &(this->Previews).ArrayMax;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->Previews).ArrayNum = iVar20 + 1;
        pFVar33 = (pTVar3->AllocatorInstance).Data;
        *(UMeshOpPreviewWithBackgroundCompute **)(pFVar33 + (longlong)iVar20 * 8) = local_730;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_730 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_730);
        }
        this_04 = *(UMeshOpPreviewWithBackgroundCompute **)(pFVar33 + (longlong)iVar20 * 8);
        local_718 = this_04;
        pUVar28 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
        UMeshOpPreviewWithBackgroundCompute::Setup
                  (this_04,pUVar28,(IDynamicMeshOperatorFactory *)((longlong)pUVar15 + 0x28));
        ToolSetupUtil::ApplyRenderingConfigurationToPreview
                  ((this_04->PreviewMesh).field0_0x0.DebugPtr,(UToolTarget *)0x0);
        UPreviewMesh::SetTangentsMode((this_04->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated);
        uVar19 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UE::ToolTarget::GetMaterialSet
                  (&local_678,*(UToolTarget **)(this->_padding_ + local_740 * 8),false);
        pUVar22 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
        pUVar29 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar22);
        FVar34.Data = local_678.Materials.AllocatorInstance.Data;
        local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar20 = local_678.Materials.ArrayNum;
        local_6b8.ArrayNum = iVar20;
        if (iVar20 == 0) {
          local_6b8.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar20,0,&local_6b8.AllocatorInstance,iVar20,&local_6b8.ArrayMax);
          memcpy(local_6b8.AllocatorInstance.Data,FVar34.Data,(longlong)iVar20 << 3);
        }
        pUVar15 = local_718;
        UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
                  (local_718,&local_6b8,pUVar29,(UMaterialInterface *)0x0);
        pUVar6 = (pUVar15->PreviewMesh).field0_0x0.DebugPtr;
        uVar19 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar30 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_b8,*(UToolTarget **)(this->_padding_ + local_740 * 8));
        UPreviewMesh::SetTransform(pUVar6,pTVar30);
        uVar19 = local_738;
        pUVar6 = (pUVar15->PreviewMesh).field0_0x0.DebugPtr;
        uVar21 = uVar38;
        if ((int)uVar18 < *local_728) {
          uVar21 = local_738;
        }
        if ((uVar21 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar42 = local_6d8;
        UPreviewMesh::UpdatePreview
                  (pUVar6,*(FDynamicMesh3 **)
                           ((this->OriginalDynamicMeshes).AllocatorInstance.Data + local_6d8),
                   FullUpdate,AllVertexAttribs);
        UMeshOpPreviewWithBackgroundCompute::SetVisibility(local_718,true);
        uVar21 = uVar38;
        if ((int)uVar18 < *local_728) {
          uVar21 = uVar19;
        }
        if ((uVar21 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar26 = *(FDynamicMesh3 **)((this->OriginalDynamicMeshes).AllocatorInstance.Data + lVar42)
        ;
        pTVar25 = ::operator_new(0xd0);
        FVar36.ReferenceController = pTVar14;
        pTVar37 = pTVar39;
        pTVar41 = pTVar13;
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
          pTVar25->SharedReferenceCount = (atomic<int>)0x1;
          pTVar25->WeakReferenceCount = (atomic<int>)0x1;
          pTVar25->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
          ;
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                    ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar25 + 1),pFVar26,true);
          if ((pTVar25 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          FVar36.ReferenceController = pTVar25;
          pTVar37 = pTVar25;
          pTVar41 = pTVar25 + 1;
        }
        uVar19 = uVar38;
        if ((int)uVar43 < *local_698) {
          uVar19 = uVar35;
        }
        local_700 = pTVar41;
        FStack_6f8.ReferenceController = FVar36.ReferenceController;
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OccluderTrees).AllocatorInstance.Data + local_6c0;
        if (pFVar33 != (FScriptContainerElement *)&local_700) {
          *(TReferenceControllerBase<1> **)pFVar33 = pTVar41;
          local_700 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar33 + 8),&FStack_6f8);
          FVar36.ReferenceController = FStack_6f8.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar36.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37)
        ;
        uVar19 = uVar38;
        if ((int)uVar43 < *local_698) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar42 = *(longlong *)((this->OccluderTrees).AllocatorInstance.Data + local_740 * 0x10);
        pTVar25 = ::operator_new(0x48);
        pTVar37 = pTVar39;
        FVar36.ReferenceController = pTVar14;
        pTVar41 = pTVar13;
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
          pTVar25->SharedReferenceCount = (atomic<int>)0x1;
          pTVar25->WeakReferenceCount = (atomic<int>)0x1;
          pTVar25->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
          ;
          pTVar25[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar25[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar25[2]._padding_ = 0;
          pTVar25[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar25[3].WeakReferenceCount = (atomic<int>)0x40000000;
          pTVar25[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar25[3]._padding_ = 0;
          *(undefined4 *)&pTVar25[4]._padding_ = 2;
          pTVar25[1]._padding_ = lVar42;
          if ((lVar42 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Tree",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                                  ,0x16c,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar42 = pTVar25[1]._padding_;
          if ((*(int *)(lVar42 + 0xbc) < 0) ||
             (uVar31 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar42 + 8)),
             *(ulong64 *)(lVar42 + 0x10) != uVar31)) {
            this_05 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pTVar25[1]._padding_;
            UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(this_05,false);
            uVar31 = UE::Geometry::FDynamicMesh3::GetChangeStamp(this_05->Mesh);
            this_05->MeshChangeStamp = uVar31;
          }
          UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
                    ((TFastWindingTree<UE::Geometry::FDynamicMesh3> *)(pTVar25 + 1));
          pTVar25[3]._padding_ = *(longlong *)(pTVar25[1]._padding_ + 0x10);
          if ((pTVar25 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          pTVar37 = pTVar25;
          FVar36.ReferenceController = pTVar25;
          pTVar41 = pTVar25 + 1;
        }
        uVar35 = uVar38;
        if ((int)uVar43 < (this->OccluderWindings).ArrayNum) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        local_6f0 = pTVar41;
        FStack_6e8.ReferenceController = FVar36.ReferenceController;
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OccluderWindings).AllocatorInstance.Data + local_740 * 0x10;
        if (pFVar33 != (FScriptContainerElement *)&local_6f0) {
          *(TReferenceControllerBase<1> **)pFVar33 = pTVar41;
          local_6f0 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar33 + 8),&FStack_6e8);
          FVar36.ReferenceController = FStack_6e8.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar36.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37)
        ;
        uVar35 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar42 = local_740;
        pTVar30 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_1d8,*(UToolTarget **)(this->_padding_ + local_740 * 8));
        local_638 = (pTVar30->Rotation).XY.m128d_f64[0];
        dStack_630 = (pTVar30->Rotation).XY.m128d_f64[1];
        local_628 = (pTVar30->Rotation).ZW.m128d_f64[0];
        dStack_620 = (pTVar30->Rotation).ZW.m128d_f64[1];
        dVar11 = (pTVar30->Translation).XY.m128d_f64[0];
        dVar12 = (pTVar30->Translation).XY.m128d_f64[1];
        local_608 = (pTVar30->Translation).ZW.m128d_f64[0];
        dStack_5f0 = (pTVar30->Scale3D).ZW.m128d_f64[0];
        dStack_600 = (pTVar30->Scale3D).XY.m128d_f64[0];
        dStack_5f8 = (pTVar30->Scale3D).XY.m128d_f64[1];
        uVar35 = uVar38;
        if ((int)uVar43 < (this->OccluderTransforms).ArrayNum) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        local_618 = dVar11;
        dStack_610 = dVar12;
        local_550 = dVar11;
        dStack_548 = dVar12;
        local_540 = local_608;
        local_538 = dStack_600;
        dStack_530 = dStack_5f8;
        local_528 = dStack_5f0;
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OccluderTransforms).AllocatorInstance.Data;
        *(double *)(pFVar33 + lVar42 * 0x50) = local_638;
        *(double *)(pFVar33 + lVar42 * 0x50 + 8) = dStack_630;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x10) = local_628;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x10 + 8) = dStack_620;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x20) = dVar11;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x20 + 8) = dVar12;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x30) = local_608;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x30 + 8) = dStack_600;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x40) = dStack_5f8;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x40 + 8) = dStack_5f0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_6d0 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_6d0);
        }
        pUVar15 = local_718;
        (local_718->SecondaryMaterial).field0_0x0.DebugPtr = local_6d0;
        uVar35 = uVar38;
        if ((int)uVar18 < (this->Previews).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_658 = this;
        local_650 = uVar18;
        TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
        ::AddLambda<_URemoveOccludedTrianglesTool::SetupPreviews_::__l7::<lambda_3>_>
                  ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
                    *)(*(longlong *)((this->Previews).AllocatorInstance.Data + lVar40 * 8) + 0x48),
                   (<lambda_3> *)local_598);
        uStack_4c8._4_4_ = uStack_67c;
        uStack_4c8._0_4_ = uStack_680;
        local_4d8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`URemoveOccludedTrianglesTool::SetupPreviews'::`4'::<lambda_2>,1,0>
                     ::_vftable_;
        local_4c0 = 0;
        local_4e8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`URemoveOccludedTrianglesTool::SetupPreviews'::__l4::<lambda_2>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
                       ::Call;
        local_4d0 = local_688;
        UPreviewMesh::EnableSecondaryTriangleBuffers
                  ((pUVar15->PreviewMesh).field0_0x0.DebugPtr,
                   (TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)
                   local_4e8);
        FVar34.Data = local_678.Materials.AllocatorInstance.Data;
      }
      else {
        local_744 = (this->PreviewCopies).ArrayNum;
        pTVar4 = &this->PreviewCopies;
        local_720 = NewObject<UPreviewMesh>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_720 != (UPreviewMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_720);
        }
        pFVar33 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar33 <= (FScriptContainerElement *)&local_720) &&
            ((FScriptContainerElement *)&local_720 <
             pFVar33 + (longlong)(this->PreviewCopies).ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = (this->PreviewCopies).ArrayNum;
        piVar1 = &(this->PreviewCopies).ArrayMax;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->PreviewCopies).ArrayNum = iVar20 + 1;
        pFVar33 = (pTVar4->AllocatorInstance).Data;
        *(UPreviewMesh **)(pFVar33 + (longlong)iVar20 * 8) = local_720;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_720 != (UPreviewMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_720);
        }
        pUVar6 = *(UPreviewMesh **)(pFVar33 + (longlong)iVar20 * 8);
        uVar35 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar30 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_178,*(UToolTarget **)(this->_padding_ + lVar42 * 8));
        pUVar28 = (UWorld *)(**(code **)(this->_padding_ + 0x3b0))(this);
        UPreviewMesh::CreateInWorld(pUVar6,pUVar28,pTVar30);
        uVar35 = uVar38;
        if ((int)uVar18 < (this->PreviewToCopyIdx).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->PreviewToCopyIdx).AllocatorInstance.Data + lVar40 * 0x10;
        if (((*(int **)&pFVar33->field_0x0 <= &local_744) &&
            (&local_744 < *(int **)&pFVar33->field_0x0 + *(int *)(pFVar33 + 0xc))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = *(int *)&pFVar33[8].field_0x0;
        if (iVar20 == *(int *)(pFVar33 + 0xc)) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
        }
        *(int *)&pFVar33[8].field_0x0 = iVar20 + 1;
        *(int *)(*(longlong *)&pFVar33->field_0x0 + (longlong)iVar20 * 4) = local_744;
        uVar35 = uVar38;
        if ((int)uVar18 < (this->OriginalDynamicMeshes).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UPreviewMesh::UpdatePreview
                  (pUVar6,*(FDynamicMesh3 **)
                           ((this->OriginalDynamicMeshes).AllocatorInstance.Data + lVar40 * 0x10),
                   FullUpdate,AllVertexAttribs);
        uVar35 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UE::ToolTarget::GetMaterialSet
                  ((FComponentMaterialSet *)&local_668,
                   *(UToolTarget **)(this->_padding_ + lVar42 * 8),false);
        UPreviewMesh::SetMaterials(pUVar6,&local_668);
        UPreviewMesh::SetVisible(pUVar6,true);
        uVar35 = uVar38;
        if ((int)uVar18 < (this->PreviewToTargetIdx).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar35 = *(uint *)((this->PreviewToTargetIdx).AllocatorInstance.Data + lVar40 * 4);
        uVar19 = uVar38;
        if ((int)uVar35 < (this->OccluderTrees).ArrayNum) {
          uVar19 = ~uVar35 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OccluderTrees).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10;
        uVar35 = uVar38;
        if ((int)uVar43 < (this->OccluderTrees).ArrayNum) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)(pFVar33 + 8);
        pFVar8 = (this->OccluderTrees).AllocatorInstance.Data;
        uVar9 = *(undefined8 *)pFVar33;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        local_570 = *(undefined8 *)(pFVar8 + lVar42 * 0x10);
        pTStack_568 = *(TReferenceControllerBase<1> **)(pFVar8 + lVar42 * 0x10 + 8);
        *(undefined8 *)(pFVar8 + lVar42 * 0x10) = uVar9;
        *(longlong *)(pFVar8 + lVar42 * 0x10 + 8) = lVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_568);
        uVar35 = uVar38;
        if ((int)uVar18 < (this->PreviewToTargetIdx).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar35 = *(uint *)((this->PreviewToTargetIdx).AllocatorInstance.Data + lVar40 * 4);
        uVar19 = uVar38;
        if ((int)uVar35 < (this->OccluderWindings).ArrayNum) {
          uVar19 = ~uVar35 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OccluderWindings).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10;
        uVar35 = uVar38;
        if ((int)uVar43 < (this->OccluderWindings).ArrayNum) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)(pFVar33 + 8);
        pFVar8 = (this->OccluderWindings).AllocatorInstance.Data;
        uVar9 = *(undefined8 *)pFVar33;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        local_560 = *(undefined8 *)(pFVar8 + lVar42 * 0x10);
        pTStack_558 = *(TReferenceControllerBase<1> **)(pFVar8 + lVar42 * 0x10 + 8);
        *(undefined8 *)(pFVar8 + lVar42 * 0x10) = uVar9;
        *(longlong *)(pFVar8 + lVar42 * 0x10 + 8) = lVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_558);
        uVar35 = uVar38;
        if ((int)uVar43 < (int)this->_padding_) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar30 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_118,*(UToolTarget **)(this->_padding_ + lVar42 * 8));
        local_5e8 = (pTVar30->Rotation).XY.m128d_f64[0];
        dStack_5e0 = (pTVar30->Rotation).XY.m128d_f64[1];
        local_5d8 = (pTVar30->Rotation).ZW.m128d_f64[0];
        dStack_5d0 = (pTVar30->Rotation).ZW.m128d_f64[1];
        dVar11 = (pTVar30->Translation).XY.m128d_f64[0];
        dVar12 = (pTVar30->Translation).XY.m128d_f64[1];
        local_5b8 = (pTVar30->Translation).ZW.m128d_f64[0];
        dStack_5a0 = (pTVar30->Scale3D).ZW.m128d_f64[0];
        dStack_5b0 = (pTVar30->Scale3D).XY.m128d_f64[0];
        dStack_5a8 = (pTVar30->Scale3D).XY.m128d_f64[1];
        uVar35 = uVar38;
        if ((int)uVar43 < (this->OccluderTransforms).ArrayNum) {
          uVar35 = ~uVar43 >> 0x1f;
        }
        local_5c8 = dVar11;
        dStack_5c0 = dVar12;
        local_520 = dVar11;
        dStack_518 = dVar12;
        local_510 = local_5b8;
        local_508 = dStack_5b0;
        dStack_500 = dStack_5a8;
        local_4f8 = dStack_5a0;
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar33 = (this->OccluderTransforms).AllocatorInstance.Data;
        *(double *)(pFVar33 + lVar42 * 0x50) = local_5e8;
        *(double *)(pFVar33 + lVar42 * 0x50 + 8) = dStack_5e0;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x10) = local_5d8;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x10 + 8) = dStack_5d0;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x20) = dVar11;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x20 + 8) = dVar12;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x30) = local_5b8;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x30 + 8) = dStack_5b0;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x40) = dStack_5a8;
        *(double *)(pFVar33 + lVar42 * 0x50 + 0x40 + 8) = dStack_5a0;
        UPreviewMesh::SetSecondaryRenderMaterial(pUVar6,local_6d0);
        uStack_498._4_4_ = uStack_67c;
        uStack_498._0_4_ = uStack_680;
        local_490 = 0;
        local_4a8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`URemoveOccludedTrianglesTool::SetupPreviews'::`4'::<lambda_2>,1,0>
                     ::_vftable_;
        local_4b8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`URemoveOccludedTrianglesTool::SetupPreviews'::__l4::<lambda_2>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
                       ::Call;
        local_4a0 = local_688;
        UPreviewMesh::EnableSecondaryTriangleBuffers
                  (pUVar6,(TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)
                          local_4b8);
        uVar35 = uVar38;
        if ((int)uVar18 < (this->Previews).ArrayNum) {
          uVar35 = ~uVar18 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_640 = local_744;
        local_648 = this;
        TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
        ::AddLambda<_URemoveOccludedTrianglesTool::SetupPreviews_::__l9::<lambda_4>_>
                  ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
                    *)(*(longlong *)((this->Previews).AllocatorInstance.Data + lVar40 * 8) + 0x28),
                   (<lambda_4> *)local_588);
        FVar34.Data = local_668.AllocatorInstance.Data;
      }
      if (FVar34.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar34.Data);
      }
      local_6c8 = local_6c8 + 8;
      local_6c0 = local_6c0 + 0x10;
      local_740 = lVar42 + 1;
      pTVar37 = (TReferenceControllerBase<1> *)(ulonglong)(uVar43 + 1);
    } while (local_740 < local_690);
  }
  return;
}

// StaticRegisterNativesURemoveOccludedTrianglesTool @ 14cd2f310

void __cdecl URemoveOccludedTrianglesTool::StaticRegisterNativesURemoveOccludedTrianglesTool(void)

{
  return;
}

