// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 46

// StaticClass @ 14cc044a0

UClass * __cdecl UDrawPolygonTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonTool",
               &Z_Registration_Info_UClass_UDrawPolygonTool.InnerSingleton,
               StaticRegisterNativesUDrawPolygonTool,0x5c0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawPolygonTool>,
               InternalVTableHelperCtorCaller<UDrawPolygonTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonTool.InnerSingleton;
}

// UDrawPolygonTool @ 14cc1d7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDrawPolygonTool * __thiscall
UDrawPolygonTool::UDrawPolygonTool(UDrawPolygonTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PolygonVertices).ArrayNum = 0;
  (this->PolygonVertices).ArrayMax = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->PolygonHolesVertices).ArrayNum = 0;
  (this->PolygonHolesVertices).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__IClickSequenceBehaviorTarget__;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->CameraState).Orientation.W = 1.0;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->PolygonProperties).field0_0x0.DebugPtr = (UDrawPolygonToolStandardProperties *)0x0;
  (this->SnapProperties).field0_0x0.DebugPtr = (UDrawPolygonToolSnapProperties *)0x0;
  (this->MaterialProperties).field0_0x0.DebugPtr = (UNewMeshMaterialProperties *)0x0;
  (this->PolygonVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygonHolesVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bInFixedPolygonMode = false;
  (this->FixedPolygonClickPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedPolygonClickPoints).ArrayNum = 0;
  (this->FixedPolygonClickPoints).ArrayMax = 0;
  this->bIgnoreSnappingToggle = false;
  UE::Geometry::FPointPlanarSnapSolver::FPointPlanarSnapSolver(&this->SnapEngine);
  (this->LastSnapGeometry).PointCount = 0;
  this->bInInteractiveExtrude = false;
  this->bHasSavedExtrudeHeight = false;
  (this->HeightMechanic).field0_0x0.DebugPtr = (UPlaneDistanceFromHitMechanic *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->PlaneMechanic).field0_0x0.DebugPtr = (UConstructionPlaneMechanic *)0x0;
  this->CurrentCurveTimestamp = 1;
  this->bRestoreInputSelection = true;
  return this;
}

// UDrawPolygonTool @ 14cc1d970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDrawPolygonTool * __thiscall UDrawPolygonTool::UDrawPolygonTool(UDrawPolygonTool *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FText local_18;
  
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PolygonVertices).ArrayNum = 0;
  (this->PolygonVertices).ArrayMax = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->PolygonHolesVertices).ArrayNum = 0;
  (this->PolygonHolesVertices).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__IClickSequenceBehaviorTarget__;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->CameraState).Orientation.W = 1.0;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->PolygonProperties).field0_0x0.DebugPtr = (UDrawPolygonToolStandardProperties *)0x0;
  (this->SnapProperties).field0_0x0.DebugPtr = (UDrawPolygonToolSnapProperties *)0x0;
  (this->MaterialProperties).field0_0x0.DebugPtr = (UNewMeshMaterialProperties *)0x0;
  (this->PolygonVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygonHolesVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->InitialDrawFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialDrawFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bInFixedPolygonMode = false;
  (this->FixedPolygonClickPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedPolygonClickPoints).ArrayNum = 0;
  (this->FixedPolygonClickPoints).ArrayMax = 0;
  this->bIgnoreSnappingToggle = false;
  UE::Geometry::FPointPlanarSnapSolver::FPointPlanarSnapSolver(&this->SnapEngine);
  (this->LastSnapGeometry).PointCount = 0;
  this->bInInteractiveExtrude = false;
  this->bHasSavedExtrudeHeight = false;
  (this->HeightMechanic).field0_0x0.DebugPtr = (UPlaneDistanceFromHitMechanic *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->PlaneMechanic).field0_0x0.DebugPtr = (UConstructionPlaneMechanic *)0x0;
  this->CurrentCurveTimestamp = 1;
  this->bRestoreInputSelection = true;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UDrawPolygonTool",L"ToolName",L"Polygon Extrude");
  pIVar1 = *(ITextData **)&this->field_0x98;
  pIVar2 = (pFVar4->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)&this->field_0x98 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->field_0xa0 = pFVar4->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UDrawPolygonTool @ 14cc229d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::~UDrawPolygonTool(UDrawPolygonTool *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__IClickSequenceBehaviorTarget__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  UE::Geometry::FPointPlanarSnapSolver::~FPointPlanarSnapSolver(&this->SnapEngine);
  pFVar1 = (this->FixedPolygonClickPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->PolygonHolesVertices).AllocatorInstance.Data,
             (this->PolygonHolesVertices).ArrayNum);
  pFVar1 = (this->PolygonHolesVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PolygonVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0xc8 = &___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  *(undefined ***)&this->field_0xc0 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// operator() @ 14cc2a220

TPolygon2<double> * __thiscall
`UDrawPolygonTool::GeneratePolygonMesh'::__l2::<lambda_1>::operator()
          (void *this,TPolygon2<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TFrame3<double> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TPolygon2<double> *pTVar12;
  TVector<double> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  double local_c8;
  double dStack_c0;
  TVector<double> local_b8;
  TVector<double> local_a0 [5];
  
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = 0;
  (__return_storage_ptr__->Vertices).ArrayNum = 0;
  (__return_storage_ptr__->Vertices).ArrayMax = 0;
  lVar16 = (longlong)param_1->ArrayNum;
  if (0 < lVar16) {
    lVar14 = 0;
    do {
      this_00 = *(TFrame3<double> **)this;
      uVar10 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TPolygon2<double> *)(*pcVar5)();
        return pTVar12;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      dVar8 = *(double *)(pFVar4 + lVar14) - (this_00->Origin).field0_0x0._s_0.X;
      dVar7 = *(double *)(pFVar4 + lVar14 + 8) - (this_00->Origin).field0_0x0._s_0.Y;
      dVar6 = *(double *)(pFVar4 + lVar14 + 0x10) - (this_00->Origin).field0_0x0._s_0.Z;
      pTVar13 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_b8,0);
      dVar1 = (pTVar13->field0_0x0)._s_0.Z;
      dVar2 = (pTVar13->field0_0x0)._s_0.Y;
      dVar3 = (pTVar13->field0_0x0)._s_0.X;
      pTVar13 = UE::Geometry::TFrame3<double>::GetAxis(this_00,local_a0,1);
      pFVar4 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      local_c8 = dVar7 * dVar2 + dVar8 * dVar3 + dVar6 * dVar1;
      dStack_c0 = dVar8 * (pTVar13->field0_0x0)._s_0.X + dVar7 * (pTVar13->field0_0x0)._s_0.Y +
                  dVar6 * (pTVar13->field0_0x0)._s_0.Z;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar4 + (longlong)(__return_storage_ptr__->Vertices).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TPolygon2<double> *)(*pcVar5)();
        return pTVar12;
      }
      iVar11 = (__return_storage_ptr__->Vertices).ArrayNum;
      if (iVar11 == (__return_storage_ptr__->Vertices).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)__return_storage_ptr__,
                            &(__return_storage_ptr__->Vertices).ArrayMax);
      }
      uVar15 = uVar15 + 1;
      (__return_storage_ptr__->Vertices).ArrayNum = iVar11 + 1;
      lVar14 = lVar14 + 0x18;
      pFVar4 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
      *(double *)pFVar4 = local_c8;
      *(double *)(pFVar4 + 8) = dStack_c0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return __return_storage_ptr__;
}

// operator() @ 14cc2d4f0

bool __thiscall
`UDrawPolygonTool::GeneratePolygonMesh'::__l30::<lambda_2>::operator()
          (void *this,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          FIndex3i *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TPolygon2<double> *this_00;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  TPolygon2<double> *local_res18;
  TVector2<double>_u_0 local_88 [5];
  
  this_00 = *(TPolygon2<double> **)this;
  uVar16 = (param_2->field0_0x0)._s_0.A;
  uVar15 = 0;
  if ((int)uVar16 < param_1->ArrayNum) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  local_res18 = this_00;
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar15 = (param_2->field0_0x0)._s_0.B;
  pFVar12 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
  uVar16 = 0;
  if ((int)uVar15 < param_1->ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  dVar2 = *(double *)pFVar12;
  dVar3 = *(double *)(pFVar6 + (longlong)(int)uVar15 * 0x10 + 8);
  dVar4 = *(double *)(pFVar6 + (longlong)(int)uVar15 * 0x10);
  dVar19 = *(double *)(pFVar12 + 8);
  uVar16 = (param_2->field0_0x0)._s_0.C;
  uVar15 = 0;
  if ((int)uVar16 < param_1->ArrayNum) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  dVar4 = (dVar2 + dVar4 + *(double *)(pFVar12 + (longlong)(int)uVar16 * 0x10)) *
          __real_3fd5555555555555;
  dVar2 = (dVar3 + dVar19 + *(double *)(pFVar12 + (longlong)(int)uVar16 * 0x10 + 8)) *
          __real_3fd5555555555555;
  local_88[0]._0_8_ = dVar4;
  local_88[0]._8_8_ = dVar2;
  bVar8 = UE::Geometry::TPolygon2<double>::Contains(this_00,(TVector2<double> *)&local_88[0]._s_0);
  if (!bVar8) {
    return false;
  }
  local_res10 = *(uint *)&this_00[2].Vertices.AllocatorInstance.Data;
  uVar10 = (ulonglong)(int)local_res10;
  plVar17 = *(longlong **)&this_00[1].Vertices.ArrayNum;
  plVar18 = plVar17 + uVar10 * 2;
  do {
    if (*(int *)&this_00[2].Vertices.AllocatorInstance.Data != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar17 == plVar18) {
      return true;
    }
    iVar5 = (int)plVar17[1];
    lVar13 = (longlong)iVar5;
    pdVar14 = (double *)*plVar17;
    if ((iVar5 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    iVar11 = 0;
    if (iVar5 != 0) {
      uVar15 = iVar5 - 1;
      uVar16 = 0;
      if ((int)uVar15 < iVar5) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar16 = 0;
      pdVar1 = pdVar14 + (longlong)(int)uVar15 * 2;
      uVar20 = *(undefined4 *)pdVar1;
      uVar21 = *(undefined4 *)((longlong)pdVar1 + 4);
      uVar22 = *(undefined4 *)(pdVar1 + 1);
      uVar23 = *(undefined4 *)((longlong)pdVar1 + 0xc);
      if (0 < iVar5) {
        do {
          uVar15 = 0;
          if ((int)uVar16 < iVar5) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          dVar3 = pdVar14[1];
          dVar19 = (double)CONCAT44(uVar23,uVar22);
          if (dVar2 < dVar19) {
            if ((dVar3 <= dVar2) &&
               ((*pdVar14 - (double)CONCAT44(uVar21,uVar20)) * (dVar2 - dVar19) -
                (dVar4 - (double)CONCAT44(uVar21,uVar20)) * (dVar3 - dVar19) < 0.0)) {
              iVar11 = iVar11 + -1;
            }
          }
          else if ((dVar2 < dVar3) &&
                  (0.0 < (*pdVar14 - (double)CONCAT44(uVar21,uVar20)) * (dVar2 - dVar19) -
                         (dVar4 - (double)CONCAT44(uVar21,uVar20)) * (dVar3 - dVar19))) {
            iVar11 = iVar11 + 1;
          }
          uVar20 = *(undefined4 *)pdVar14;
          uVar21 = *(undefined4 *)((longlong)pdVar14 + 4);
          uVar22 = *(undefined4 *)(pdVar14 + 1);
          uVar23 = *(undefined4 *)((longlong)pdVar14 + 0xc);
          pdVar14 = pdVar14 + 2;
          uVar16 = uVar16 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        if (iVar11 != 0) {
          return false;
        }
      }
    }
    plVar17 = plVar17 + 2;
    uVar10 = (ulonglong)local_res10;
    this_00 = local_res18;
  } while( true );
}

// AllowDrawPlaneUpdates @ 14cc34200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawPolygonTool::AllowDrawPlaneUpdates(UDrawPolygonTool *this)

{
  if (this->bInInteractiveExtrude != false) {
    return false;
  }
  if (this->bInFixedPolygonMode != false) {
    return (this->FixedPolygonClickPoints).ArrayNum == 0;
  }
  return (this->PolygonVertices).ArrayNum == 0;
}

// AppendVertex @ 14cc343a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::AppendVertex(UDrawPolygonTool *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  
  pTVar2 = &this->PolygonVertices;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->PolygonVertices).ArrayMax * 0x18))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->PolygonVertices).ArrayNum;
  piVar1 = &(this->PolygonVertices).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PolygonVertices).ArrayNum = iVar8 + 1;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(double *)pFVar3 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + 8) = dVar6;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  return;
}

// ApplyUndoPoints @ 14cc40630

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
UDrawPolygonTool::ApplyUndoPoints
          (UDrawPolygonTool *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  if ((this->bInInteractiveExtrude == false) && ((this->PolygonVertices).ArrayNum != 0)) {
    this->bHaveSelfIntersection = false;
    if (this->bInFixedPolygonMode == false) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                (&this->PolygonVertices,param_2);
      iVar1 = (this->PolygonVertices).ArrayNum;
    }
    else {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                (&this->FixedPolygonClickPoints,param_1);
      iVar1 = (this->FixedPolygonClickPoints).ArrayNum;
    }
    if (iVar1 == 0) {
      this->CurrentCurveTimestamp = this->CurrentCurveTimestamp + 1;
      this->bAbortActivePolygonDraw = true;
    }
  }
  return;
}

// BeginInteractiveExtrude @ 14cc42da0

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

void __thiscall UDrawPolygonTool::BeginInteractiveExtrude(UDrawPolygonTool *this)

{
  UDrawPolygonToolStandardProperties *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UClass *pUVar5;
  UPlaneDistanceFromHitMechanic *pUVar6;
  longlong *plVar7;
  FText *pFVar8;
  undefined1 auStackY_388 [32];
  FText local_348;
  TVector<double>_u_0 local_338;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  FDynamicMesh3 local_2f8;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pUVar1 = (this->PolygonProperties).field0_0x0.DebugPtr;
  this->bInInteractiveExtrude = true;
  this->bHasSavedExtrudeHeight = true;
  this->SavedExtrudeHeight = pUVar1->ExtrudeHeight;
  (**(code **)((this->SnapEngine)._padding_ + 0x60))();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar5);
  local_c8._8_8_ = this;
  pUVar6 = (UPlaneDistanceFromHitMechanic *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar7 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPlaneDistanceFromHitMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->HeightMechanic).field0_0x0.DebugPtr = pUVar6;
  (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,this);
  pUVar6 = (this->HeightMechanic).field0_0x0.DebugPtr;
  local_48 = *(longlong *)&pUVar6->WorldHitQueryFunc;
  uVar4 = *(undefined8 *)&(pUVar6->WorldHitQueryFunc).field_0x8;
  local_38 = *(longlong *)&(pUVar6->WorldHitQueryFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(pUVar6->WorldHitQueryFunc).field_0x18;
  uVar3 = *(undefined8 *)&(pUVar6->WorldHitQueryFunc).field_0x20;
  plStack_20 = *(longlong **)&(pUVar6->WorldHitQueryFunc).field_0x28;
  *(code **)&pUVar6->WorldHitQueryFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDrawPolygonTool::BeginInteractiveExtrude'::__l2::<lambda_1>,bool,UE::Math::TRay<double>_const_&,FHitResult_&>
       ::Call;
  *(undefined8 *)&(pUVar6->WorldHitQueryFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(pUVar6->WorldHitQueryFunc).field_0x10 = 0x52952840;
  *(undefined4 *)&(pUVar6->WorldHitQueryFunc).field_0x14 = 1;
  *(UDrawPolygonTool **)&(pUVar6->WorldHitQueryFunc).field_0x18 = this;
  *(undefined8 *)&(pUVar6->WorldHitQueryFunc).field_0x20 = local_28;
  *(undefined8 *)&(pUVar6->WorldHitQueryFunc).field_0x28 = 0;
  uStack_40 = uVar4;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pUVar6 = (this->HeightMechanic).field0_0x0.DebugPtr;
  local_48 = *(longlong *)&pUVar6->WorldPointSnapFunc;
  uVar4 = *(undefined8 *)&(pUVar6->WorldPointSnapFunc).field_0x8;
  local_38 = *(longlong *)&(pUVar6->WorldPointSnapFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(pUVar6->WorldPointSnapFunc).field_0x18;
  uVar3 = *(undefined8 *)&(pUVar6->WorldPointSnapFunc).field_0x20;
  plStack_20 = *(longlong **)&(pUVar6->WorldPointSnapFunc).field_0x28;
  *(code **)&pUVar6->WorldPointSnapFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDrawPolygonTool::BeginInteractiveExtrude'::__l2::<lambda_2>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(pUVar6->WorldPointSnapFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(pUVar6->WorldPointSnapFunc).field_0x10 = 0x52952860;
  *(undefined4 *)&(pUVar6->WorldPointSnapFunc).field_0x14 = 1;
  *(UDrawPolygonTool **)&(pUVar6->WorldPointSnapFunc).field_0x18 = this;
  *(undefined8 *)&(pUVar6->WorldPointSnapFunc).field_0x20 = local_28;
  *(undefined8 *)&(pUVar6->WorldPointSnapFunc).field_0x28 = 0;
  uStack_40 = uVar4;
  local_28 = uVar3;
  if (local_48 != 0) {
    plVar7 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  ((this->HeightMechanic).field0_0x0.DebugPtr)->CurrentHeight = 1.0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2f8);
  local_338._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_338._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_338._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_310 = ___xmm_3ff00000000000000000000000000000;
  uStack_308 = _UNK_15061cbc8;
  local_320 = 0;
  uStack_318 = 0;
  GeneratePolygonMesh(this,&this->PolygonVertices,&this->PolygonHolesVertices,&local_2f8,
                      (TFrame3<double> *)&local_338._s_0,false,__real_40f869f000000000,true);
  pUVar6 = (this->HeightMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar6 + 0x2e8))(pUVar6,&local_2f8,&local_338,0);
  plVar7 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar2 = *(code **)(*plVar7 + 0x360);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_348,L"UDrawPolygonTool",L"OnStartExtrude",
                      L"Set the height of the extrusion by positioning the mouse over the extrusion volume, or over objects to snap to their heights. Hold Shift to ignore snapping."
                     );
  (*pcVar2)(plVar7,pFVar8,2);
  if (local_348.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2f8);
  return;
}

// CanAccept @ 14cc47990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawPolygonTool::CanAccept(UDrawPolygonTool *this)

{
  return false;
}

// CanBeginClickSequence @ 14cc479a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDrawPolygonTool::CanBeginClickSequence(UDrawPolygonTool *this,FInputDeviceRay *param_1)

{
  return true;
}

// EmitCurrentPolygon @ 14cc54470

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

void __thiscall UDrawPolygonTool::EmitCurrentPolygon(UDrawPolygonTool *this)

{
  UDrawPolygonToolStandardProperties *pUVar1;
  code *pcVar2;
  UCreateMeshObjectTypeProperties *pUVar3;
  bool bVar4;
  longlong lVar5;
  FText *pFVar6;
  UInteractiveToolManager *pUVar7;
  wchar_t *pwVar8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar9;
  int iVar10;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar11;
  float fVar12;
  undefined1 auStackY_a18 [32];
  FComputeTangentsOptions local_9c8 [4];
  UObject *local_9c0;
  TMeshTangents<float> local_9b8;
  FString local_980;
  TVector<double>_u_0 local_970;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  FText local_938;
  FCreateMeshObjectResult local_928;
  FDynamicMesh3 local_908;
  FCreateMeshObjectParams local_6d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  pwVar8 = L"Extrude";
  if (((this->PolygonProperties).field0_0x0.DebugPtr)->ExtrudeMode == Flat) {
    pwVar8 = L"Polygon";
  }
  ::FString::FString(&local_980,pwVar8);
  local_970._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_970._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_970._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_948 = ___xmm_3ff00000000000000000000000000000;
  dStack_940 = _UNK_15061cbc8;
  local_958 = 0.0;
  dStack_950 = 0.0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_908);
  pUVar1 = (this->PolygonProperties).field0_0x0.DebugPtr;
  if (pUVar1->ExtrudeMode == Flat) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = pUVar1->ExtrudeHeight;
  }
  bVar4 = GeneratePolygonMesh(this,&this->PolygonVertices,&this->PolygonHolesVertices,&local_908,
                              (TFrame3<double> *)&local_970._s_0,false,(double)fVar12,false);
  if (bVar4) {
    pTVar9 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    if (local_908.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
      pTVar11 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pTVar9;
      if (0 < ((local_908.AttributeSet.Ptr)->UVLayers).Array.ArrayNum) {
        pTVar11 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                   ((local_908.AttributeSet.Ptr)->UVLayers).Array.AllocatorInstance.Data;
      }
      if (0 < ((local_908.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar9 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  ((local_908.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      if ((pTVar11 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
         (pTVar9 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
        local_9b8.Mesh = &local_908;
        local_9b8.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9b8.Tangents.ArrayNum = 0;
        local_9b8.Tangents.ArrayMax = 0;
        local_9b8.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9b8.Bitangents.ArrayNum = 0;
        local_9b8.Bitangents.ArrayMax = 0;
        local_9b8.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9b8.AllDegenerateTris.ArrayNum = 0;
        local_9b8.AllDegenerateTris.ArrayMax = 0;
        local_9c8[0].bAveraged = true;
        local_9c8[0].bAngleWeighted = true;
        UE::Geometry::TMeshTangents<float>::ComputeTriVertexTangents
                  (&local_9b8,pTVar9,pTVar11,local_9c8);
        UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(local_908.AttributeSet.Ptr);
        UE::Geometry::TMeshTangents<float>::CopyToOverlays(&local_9b8,&local_908);
        if (local_9b8.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b8.AllDegenerateTris.AllocatorInstance.Data);
        }
        if (local_9b8.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b8.Bitangents.AllocatorInstance.Data);
        }
        if (local_9b8.Tangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b8.Tangents.AllocatorInstance.Data);
        }
      }
    }
    lVar5 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    pcVar2 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_938,L"UDrawPolygonTool",L"CreatePolygon",L"Create Polygon");
    (*pcVar2)(lVar5 + 0x28,pFVar6);
    if (local_938.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_938.TextData.Reference + 0x10))();
    }
    FCreateMeshObjectParams::FCreateMeshObjectParams(&local_6d8,true);
    local_6d8.TargetWorld.field0_0x0 = (TObjectPtr<UWorld>_u_0)this->TargetWorld;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_6d8.TargetWorld.field0_0x0.DebugPtr != (TObjectPtr<UWorld>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_6d8.TargetWorld.field0_0x0);
    }
    local_6d8.Transform.Rotation.ZW.m128d_f64[0] = local_948;
    local_6d8.Transform.Rotation.ZW.m128d_f64[1] = dStack_940;
    iVar10 = local_980.Data.ArrayNum + -1;
    if (local_980.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    local_6d8.Transform.Translation.ZW.m128d_f64[0] = local_970._s_0.Z;
    local_6d8.Transform.Translation.ZW.m128d_f64[1] = 0.0;
    local_6d8.Transform.Rotation.XY.m128d_f64[0] = local_958;
    local_6d8.Transform.Rotation.XY.m128d_f64[1] = dStack_950;
    local_6d8.Transform.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_6d8.Transform.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_6d8.Transform.Translation.XY.m128d_f64[0] = local_970._s_0.X;
    local_6d8.Transform.Translation.XY.m128d_f64[1] = local_970._s_0.Y;
    local_6d8.Transform.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_6d8.Transform.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    ::FString::AssignRange
              (&local_6d8.BaseName,(wchar_t *)local_980.Data.AllocatorInstance.Data,iVar10);
    local_9c0 = FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                     WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_9c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_9c0);
    }
    if (((local_6d8.Materials.AllocatorInstance.Data <= (FScriptContainerElement *)&local_9c0) &&
        ((FScriptContainerElement *)&local_9c0 <
         local_6d8.Materials.AllocatorInstance.Data + (longlong)local_6d8.Materials.ArrayMax * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_6d8.Materials.ArrayNum == local_6d8.Materials.ArrayMax) {
      local_6d8.Materials.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_6d8.Materials.AllocatorInstance,&local_6d8.Materials.ArrayMax);
    }
    iVar10 = local_6d8.Materials.ArrayNum + 1;
    *(UObject **)
     (local_6d8.Materials.AllocatorInstance.Data + (longlong)local_6d8.Materials.ArrayNum * 8) =
         local_9c0;
    local_6d8.Materials.ArrayNum = iVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_9c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_9c0);
    }
    FCreateMeshObjectParams::SetMesh(&local_6d8,&local_908);
    pUVar3 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3,&local_6d8);
    pUVar7 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    UE::Modeling::CreateMeshObject(&local_928,pUVar7,&local_6d8);
    if ((local_928.ResultCode == Ok) &&
       (local_928.NewActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
      this->bRestoreInputSelection = false;
      pUVar7 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      ToolSelectionUtil::SetNewActorSelection(pUVar7,(AActor *)local_928.NewActor.field0_0x0);
    }
    lVar5 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
    if (this->bHasSavedExtrudeHeight != false) {
      ((this->PolygonProperties).field0_0x0.DebugPtr)->ExtrudeHeight = this->SavedExtrudeHeight;
      this->bHasSavedExtrudeHeight = false;
    }
    (**(code **)(*(longlong *)this + 0x3a0))(this);
    FCreateMeshObjectParams::~FCreateMeshObjectParams(&local_6d8);
  }
  else {
    (**(code **)(*(longlong *)this + 0x3a0))(this);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_908);
  if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data.AllocatorInstance.Data);
  }
  return;
}

// EndInteractiveExtrude @ 14cc54fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::EndInteractiveExtrude(UDrawPolygonTool *this)

{
  (**(code **)(*(longlong *)this + 0x3c0))();
  UPreviewMesh::ClearPreview((this->PreviewMesh).field0_0x0.DebugPtr);
  UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,false);
  this->bInInteractiveExtrude = false;
  (this->HeightMechanic).field0_0x0.DebugPtr = (UPlaneDistanceFromHitMechanic *)0x0;
  ShowStartupMessage(this);
  return;
}

// FindDrawPlaneHitPoint @ 14cc57b10

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

bool __thiscall
UDrawPolygonTool::FindDrawPlaneHitPoint
          (UDrawPolygonTool *this,FInputDeviceRay *param_1,TVector<double> *param_2)

{
  bool *pbVar1;
  double dVar2;
  int iVar3;
  UConstructionPlaneMechanic *pUVar4;
  UDrawPolygonToolSnapProperties *pUVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  TVector<double> *pTVar14;
  TVector<double>_u_0 *pTVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  FPointPlanarSnapSolver *pFVar17;
  TFrame3<double> *this_00;
  undefined1 auStackY_2d8 [32];
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278 [2];
  undefined8 local_248;
  undefined4 uStack_240;
  undefined1 uStack_23c;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  undefined1 local_1b8 [48];
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  int local_114;
  FWeakObjectPtr local_100;
  FWeakObjectPtr FStack_f8;
  IActorInstanceManagerInterface *local_f0;
  undefined8 uStack_e8;
  TVector<double> local_b8;
  TVector<double> local_a0;
  undefined4 local_88 [2];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pUVar4 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  this->bHaveSurfaceHit = false;
  local_208._s_0.X = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_208._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  local_208._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  this_00 = &pUVar4->Plane;
  local_1f0._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_1f0._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_1f0._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  bVar12 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                     (this_00,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_208._s_0,
                      2,(TVector<double> *)&local_290._s_0);
  if (bVar12) {
    if ((this->bIgnoreSnappingToggle == false) &&
       (((this->SnapProperties).field0_0x0.DebugPtr)->bEnableSnapping != false)) goto LAB_14cc57c0e;
    pFVar17 = &this->SnapEngine;
    (**(code **)(pFVar17->_padding_ + 0x58))(pFVar17);
    if (this->bInFixedPolygonMode != false) goto LAB_14cc57e98;
    if (0 < (this->PolygonVertices).ArrayNum) {
      (**(code **)(pFVar17->_padding_ + 0x10))
                (pFVar17,(this->PolygonVertices).AllocatorInstance.Data,0x3e9);
    }
  }
  else {
    if (((this->SnapProperties).field0_0x0.DebugPtr)->bEnableSnapping == false) {
      return false;
    }
    if (this->bIgnoreSnappingToggle != false) {
      return false;
    }
LAB_14cc57c0e:
    if ((bVar12) &&
       (bVar13 = ToolSceneQueriesUtil::FindWorldGridSnapPoint
                           ((UInteractiveTool *)this,(TVector<double> *)&local_290._s_0,
                            (TVector<double> *)&local_278[0]._s_0), bVar13)) {
      pTVar14 = UE::Geometry::TFrame3<double>::ToPlane
                          (this_00,&local_b8,(TVector<double> *)&local_278[0]._s_0,2);
      local_278[0]._0_8_ = (pTVar14->field0_0x0)._s_0.X;
      local_278[0]._8_8_ = (pTVar14->field0_0x0)._s_0.Y;
      local_278[0]._16_8_ = (pTVar14->field0_0x0)._s_0.Z;
      uStack_80 = (undefined4)__real_408f380000000000;
      uStack_7c = (undefined4)((ulonglong)__real_408f380000000000 >> 0x20);
      local_88[0] = 0;
      (**(code **)((this->SnapEngine)._padding_ + 8))(&this->SnapEngine,local_278,0x3eb,local_88);
      (this->LastGridSnapPoint).field0_0x0._s_0.X = (double)local_278[0]._0_8_;
      (this->LastGridSnapPoint).field0_0x0._s_0.Y = (double)local_278[0]._8_8_;
      (this->LastGridSnapPoint).field0_0x0._s_0.Z = (double)local_278[0]._16_8_;
    }
    pUVar5 = (this->SnapProperties).field0_0x0.DebugPtr;
    bVar13 = pUVar5->bSnapToVertices;
    pbVar1 = &pUVar5->bSnapToEdges;
    if ((bVar13 != false) || (*pbVar1 != false)) {
      local_238._s_0.X =
           (param_1->WorldRay).Origin.field0_0x0._s_0.X +
           (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      local_238._s_0.Y =
           (param_1->WorldRay).Direction.field0_0x0._s_0.Y +
           (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      pTVar15 = &local_290;
      if (!bVar12) {
        pTVar15 = &local_238;
      }
      local_238._s_0.Z =
           (param_1->WorldRay).Direction.field0_0x0._s_0.Z +
           (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      bVar13 = ToolSceneQueriesUtil::FindSceneSnapPoint
                         ((UInteractiveTool *)this,(TVector<double> *)&pTVar15->_s_0,
                          (TVector<double> *)&local_1d8._s_0,bVar13,*pbVar1,0.0,
                          &this->LastSnapGeometry,(TVector<double> *)0x0);
      if (bVar13) {
        (**(code **)((this->SnapEngine)._padding_ + 0x10))(&this->SnapEngine,&local_1d8,0x3ea);
      }
    }
    pTVar16 = &this->FixedPolygonClickPoints;
    if (this->bInFixedPolygonMode == false) {
      pTVar16 = &this->PolygonVertices;
    }
    UE::Geometry::FPointPlanarSnapSolver::UpdatePointHistory(&this->SnapEngine,pTVar16);
    if (((this->SnapProperties).field0_0x0.DebugPtr)->bSnapToAxes != false) {
      UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLines(&this->SnapEngine,true,true);
    }
    (this->SnapEngine).bEnableSnapToKnownLengths =
         ((this->SnapProperties).field0_0x0.DebugPtr)->bSnapToLengths;
  }
  if ((this->bInFixedPolygonMode == false) && (iVar3 = (this->PolygonVertices).ArrayNum, 0 < iVar3))
  {
    lVar6 = (this->SnapEngine)._padding_;
    if (iVar3 < 3) {
      (**(code **)(lVar6 + 0x40))();
    }
    else {
      (**(code **)(lVar6 + 0x48))(&this->SnapEngine,0x3e9);
    }
  }
LAB_14cc57e98:
  pFVar17 = &this->SnapEngine;
  pTVar15 = &local_290;
  if (!bVar12) {
    pTVar15 = &local_1d8;
  }
  UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint
            (pFVar17,(TVector<double> *)&pTVar15->_s_0);
  (**(code **)(pFVar17->_padding_ + 0x18))(pFVar17,0x3ea);
  (**(code **)(pFVar17->_padding_ + 0x18))(pFVar17);
  if ((char)(this->SnapEngine)._padding_ != '\0') {
    dVar7 = (double)(this->SnapEngine)._padding_;
    dVar2 = (double)(this->SnapEngine)._padding_;
    (param_2->field0_0x0)._s_0.X = (double)(this->SnapEngine)._padding_;
    (param_2->field0_0x0)._s_0.Y = dVar7;
    (param_2->field0_0x0)._s_0.Z = dVar2;
    return true;
  }
  pUVar5 = (this->SnapProperties).field0_0x0.DebugPtr;
  if (((pUVar5->bEnableSnapping != false) && (pUVar5->bSnapToSurfaces != false)) &&
     (this->bIgnoreSnappingToggle == false)) {
    memset(local_1b8,0,0x100);
    uStack_240 = 0xffffffff;
    uStack_23b = 0;
    uStack_239 = 0;
    local_248 = 0;
    uStack_23c = 0;
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    FStack_f8.ObjectIndex = 0;
    FStack_f8.ObjectSerialNumber = 0;
    local_1b8._4_4_ = 1.0;
    uStack_e8._0_4_ = -1;
    uStack_e8._4_1_ = Invalid;
    uStack_e8._5_3_ = 0;
    local_114 = -1;
    local_f0 = (IActorInstanceManagerInterface *)0x0;
    bVar13 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                       ((UInteractiveTool *)this,(FHitResult *)local_1b8,&param_1->WorldRay,
                        (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                        (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
    if (bVar13) {
      pUVar5 = (this->SnapProperties).field0_0x0.DebugPtr;
      (this->SurfaceHitPoint).field0_0x0._s_0.X = (double)local_1b8._40_8_;
      (this->SurfaceHitPoint).field0_0x0._s_0.Y = dStack_188;
      this->bHaveSurfaceHit = true;
      (this->SurfaceHitPoint).field0_0x0._s_0.Z = local_180;
      dVar2 = (double)pUVar5->SnapToSurfacesOffset;
      dVar8 = dVar2 * local_178 + (double)local_1b8._40_8_;
      dVar7 = dVar2 * local_170 + dStack_188;
      dVar9 = dVar2 * local_168 + local_180;
      local_220._s_0.X = dVar8;
      local_220._s_0.Y = dVar7;
      local_220._s_0.Z = dVar9;
      pTVar14 = UE::Geometry::TFrame3<double>::ToPlane
                          (this_00,&local_a0,(TVector<double> *)&local_220._s_0,2);
      dVar10 = (pTVar14->field0_0x0)._s_0.X;
      dVar11 = (pTVar14->field0_0x0)._s_0.Y;
      dVar2 = (pTVar14->field0_0x0)._s_0.Z;
      (this->SurfaceOffsetPoint).field0_0x0._s_0.X = dVar8;
      (this->SurfaceOffsetPoint).field0_0x0._s_0.Y = dVar7;
      (this->SurfaceOffsetPoint).field0_0x0._s_0.Z = dVar9;
      (param_2->field0_0x0)._s_0.X = dVar10;
      (param_2->field0_0x0)._s_0.Y = dVar11;
      (param_2->field0_0x0)._s_0.Z = dVar2;
      return true;
    }
  }
  if (!bVar12) {
    return false;
  }
  (param_2->field0_0x0)._s_0.X = local_290._s_0.X;
  (param_2->field0_0x0)._s_0.Y = local_290._s_0.Y;
  (param_2->field0_0x0)._s_0.Z = local_290._s_0.Z;
  return true;
}

// GenerateFixedPolygon @ 14cc58580

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDrawPolygonTool::GenerateFixedPolygon
          (UDrawPolygonTool *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  double dVar1;
  EDrawPolygonDrawMode EVar2;
  UDrawPolygonToolStandardProperties *pUVar3;
  longlong lVar4;
  UConstructionPlaneMechanic *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  TPolygon2<double> *pTVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  TVector<double> *pTVar20;
  code **ppcVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  longlong lVar31;
  uint uVar32;
  ForAnyElementType FVar33;
  uint extraout_XMM0_Da;
  undefined4 uVar34;
  uint extraout_XMM0_Db;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  uint local_284;
  ForAnyElementType local_280;
  undefined8 local_278;
  TPolygon2<double> local_270;
  uint local_260;
  UDrawPolygonTool *local_258;
  FScriptContainerElement *local_250;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_248;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_240;
  TVector2<double>_u_0 local_238;
  double local_228;
  TVector2<double>_u_0 local_220;
  double local_210;
  int *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVector2<double>_u_0 local_1e0;
  TVector2<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector2<double>_u_0 local_190;
  TPolygon2<double> local_180;
  TPolygon2<double> local_170;
  TPolygon2<double> local_160;
  TPolygon2<double> local_150;
  TPolygon2<double> local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  TVector<double> local_120;
  TVector<double> local_108;
  code *local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_258 = this;
  local_248 = param_2;
  local_240 = param_3;
  GetPolygonParametersFromFixedPoints
            (this,param_1,(TVector2<double> *)&local_220._s_0,(TVector2<double> *)&local_238._s_0,
             &local_228,&local_210);
  __libm_sse2_sincos_();
  pUVar3 = (this->PolygonProperties).field0_0x0.DebugPtr;
  local_200 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  local_280.Data = (FScriptContainerElement *)0x0;
  uStack_1f8 = CONCAT44(extraout_XMM0_Db ^ __xmm_80000000000000008000000000000000._4_4_,
                        extraout_XMM0_Da ^ (uint)__xmm_80000000000000008000000000000000);
  local_278 = 0;
  EVar2 = pUVar3->PolygonDrawMode;
  local_1f0 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_270.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Vertices.ArrayNum = 0;
  local_270.Vertices.ArrayMax = 0;
  uStack_1e8 = local_200;
  if (EVar2 == Square) {
    local_190 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    pTVar17 = UE::Geometry::TPolygon2<double>::MakeRectangle
                        (&local_180,(TVector2<double> *)&local_190._s_0,
                         local_238._s_0.X + local_238._s_0.X,local_238._s_0.X + local_238._s_0.X);
    local_160.Vertices.AllocatorInstance.Data = local_180.Vertices.AllocatorInstance.Data;
    if (&local_270 != pTVar17) {
      local_270.Vertices.AllocatorInstance.Data = (pTVar17->Vertices).AllocatorInstance.Data;
      (pTVar17->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Vertices.ArrayNum = (pTVar17->Vertices).ArrayNum;
      local_270.Vertices.ArrayMax = (pTVar17->Vertices).ArrayMax;
      (pTVar17->Vertices).ArrayNum = 0;
      (pTVar17->Vertices).ArrayMax = 0;
    }
  }
  else if (EVar2 == Rectangle) {
    local_1d0._s_0.X = local_238._s_0.X * __real_3fe0000000000000;
    local_1d0._s_0.Y = local_238._s_0.Y * local_228 * __real_3fe0000000000000;
    pTVar17 = UE::Geometry::TPolygon2<double>::MakeRectangle
                        (&local_140,(TVector2<double> *)&local_1d0._s_0,local_238._s_0.X,
                         local_238._s_0.Y);
    local_160.Vertices.AllocatorInstance.Data = local_140.Vertices.AllocatorInstance.Data;
    if (&local_270 != pTVar17) {
      local_270.Vertices.AllocatorInstance.Data = (pTVar17->Vertices).AllocatorInstance.Data;
      (pTVar17->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Vertices.ArrayNum = (pTVar17->Vertices).ArrayNum;
      local_270.Vertices.ArrayMax = (pTVar17->Vertices).ArrayMax;
      (pTVar17->Vertices).ArrayNum = 0;
      (pTVar17->Vertices).ArrayMax = 0;
    }
  }
  else if (EVar2 == RoundedRectangle) {
    dVar1 = (double)pUVar3->FeatureSizeRatio;
    dVar36 = __real_3f847ae147ae147b;
    if ((__real_3f847ae147ae147b <= dVar1) && (dVar36 = dVar1, __real_3fefae147ae147ae <= dVar1)) {
      dVar36 = __real_3fefae147ae147ae;
    }
    local_1e0._s_0.X = local_238._s_0.X * __real_3fe0000000000000;
    uVar34 = SUB84(local_238._s_0.Y,0);
    uVar35 = (int)((ulonglong)local_238._8_8_ >> 0x20);
    if (local_238._s_0.X <= local_238._s_0.Y) {
      uVar34 = SUB84(local_238._s_0.X,0);
      uVar35 = (int)((ulonglong)local_238._0_8_ >> 0x20);
    }
    local_1e0._s_0.Y = local_238._s_0.Y * local_228 * __real_3fe0000000000000;
    pTVar17 = UE::Geometry::TPolygon2<double>::MakeRoundedRectangle
                        (&local_150,(TVector2<double> *)&local_1e0._s_0,local_238._s_0.X,
                         local_238._s_0.Y,
                         (double)CONCAT44(uVar35,uVar34) * dVar36 * __real_3fe0000000000000,
                         pUVar3->RadialSlices);
    local_160.Vertices.AllocatorInstance.Data = local_150.Vertices.AllocatorInstance.Data;
    if (&local_270 != pTVar17) {
      local_270.Vertices.AllocatorInstance.Data = (pTVar17->Vertices).AllocatorInstance.Data;
      (pTVar17->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Vertices.ArrayNum = (pTVar17->Vertices).ArrayNum;
      local_270.Vertices.ArrayMax = (pTVar17->Vertices).ArrayMax;
      (pTVar17->Vertices).ArrayNum = 0;
      (pTVar17->Vertices).ArrayMax = 0;
    }
  }
  else {
    pTVar17 = UE::Geometry::TPolygon2<double>::MakeCircle
                        (&local_170,local_238._s_0.X,pUVar3->RadialSlices,0.0);
    if (&local_270 != pTVar17) {
      local_270.Vertices.AllocatorInstance.Data = (pTVar17->Vertices).AllocatorInstance.Data;
      (pTVar17->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Vertices.ArrayNum = (pTVar17->Vertices).ArrayNum;
      local_270.Vertices.ArrayMax = (pTVar17->Vertices).ArrayMax;
      (pTVar17->Vertices).ArrayNum = 0;
      (pTVar17->Vertices).ArrayMax = 0;
    }
    if (local_170.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Vertices.AllocatorInstance.Data);
    }
    pUVar3 = (this->PolygonProperties).field0_0x0.DebugPtr;
    if (pUVar3->PolygonDrawMode != Ring) goto LAB_14cc5893c;
    dVar1 = (double)pUVar3->FeatureSizeRatio;
    dVar36 = __real_3f847ae147ae147b;
    if ((__real_3f847ae147ae147b <= dVar1) && (dVar36 = dVar1, __real_3fefae147ae147ae <= dVar1)) {
      dVar36 = __real_3fefae147ae147ae;
    }
    pFVar25 = (FScriptContainerElement *)
              UE::Geometry::TPolygon2<double>::MakeCircle
                        (&local_160,dVar36 * local_238._s_0.X,pUVar3->RadialSlices,0.0);
    if (((local_280.Data <= pFVar25) &&
        (pFVar25 < local_280.Data + (longlong)local_278._4_4_ * 0x10)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar24 = (uint)local_278;
    if ((uint)local_278 == local_278._4_4_) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_280,(int *)((longlong)&local_278 + 4));
    }
    local_278 = CONCAT44(local_278._4_4_,iVar24 + 1);
    lVar31 = (longlong)iVar24;
    *(undefined8 *)(local_280.Data + lVar31 * 0x10) = 0;
    *(undefined8 *)(local_280.Data + lVar31 * 0x10) = *(undefined8 *)pFVar25;
    *(undefined8 *)pFVar25 = 0;
    *(int *)(local_280.Data + lVar31 * 0x10 + 8) = *(int *)(pFVar25 + 8);
    *(int *)(local_280.Data + lVar31 * 0x10 + 0xc) = *(int *)(pFVar25 + 0xc);
    *(undefined8 *)(pFVar25 + 8) = 0;
  }
  if (local_160.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Vertices.AllocatorInstance.Data);
  }
LAB_14cc5893c:
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x28,8);
  uVar34 = (undefined4)local_200;
  uVar35 = local_200._4_4_;
  uVar37 = (undefined4)uStack_1f8;
  uVar38 = uStack_1f8._4_4_;
  uVar39 = (undefined4)local_1f0;
  uVar40 = local_1f0._4_4_;
  uVar41 = (undefined4)uStack_1e8;
  uVar42 = uStack_1e8._4_4_;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UDrawPolygonTool::GenerateFixedPolygon'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(undefined4 *)(local_90 + 1) = (undefined4)local_200;
  *(undefined4 *)((longlong)local_90 + 0xc) = local_200._4_4_;
  *(undefined4 *)(local_90 + 2) = (undefined4)uStack_1f8;
  *(undefined4 *)((longlong)local_90 + 0x14) = uStack_1f8._4_4_;
  *(undefined4 *)(local_90 + 3) = (undefined4)local_1f0;
  *(undefined4 *)((longlong)local_90 + 0x1c) = local_1f0._4_4_;
  *(undefined4 *)(local_90 + 4) = (undefined4)uStack_1e8;
  *(undefined4 *)((longlong)local_90 + 0x24) = uStack_1e8._4_4_;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDrawPolygonTool::GenerateFixedPolygon'::__l2::<lambda_1>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&>
                  ::Call;
  }
  UE::Geometry::TPolygon2<double>::Transform
            (&local_270,
             (TFunction<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&)> *)
             local_b8);
  if (local_b8[0] != (code *)0x0) {
    ppcVar21 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar21 = local_90;
    }
    (**(code **)(*ppcVar21 + 0x10))();
  }
  uVar18 = (ulonglong)(int)(uint)local_278;
  local_260 = (uint)local_278;
  pFVar25 = local_280.Data + uVar18 * 0x10;
  uVar23 = uVar18;
  FVar33.Data = local_280.Data;
  local_250 = pFVar25;
  do {
    uVar32 = 0;
    if ((int)uVar18 != (int)uVar23) {
      local_288[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_288);
    }
    if (FVar33.Data == pFVar25) {
      iVar24 = local_270.Vertices.ArrayNum;
      pUVar5 = (local_258->PlaneMechanic).field0_0x0.DebugPtr;
      local_250 = (FScriptContainerElement *)&pUVar5->Plane;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (local_248,local_270.Vertices.ArrayNum,Default);
      if (0 < iVar24) {
        lVar31 = 0;
        lVar30 = 0;
        do {
          uVar27 = 0;
          if ((int)uVar32 < iVar24) {
            uVar27 = ~uVar32 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_1c0._s_0.Z = 0.0;
          local_1c0._s_0.X =
               local_220._s_0.X + *(double *)(local_270.Vertices.AllocatorInstance.Data + lVar30);
          local_1c0._s_0.Y =
               local_220._s_0.Y +
               *(double *)(local_270.Vertices.AllocatorInstance.Data + lVar30 + 8);
          pTVar20 = UE::Geometry::operator*<double>
                              (&local_120,&(pUVar5->Plane).Rotation,
                               (TVector<double> *)&local_1c0._s_0);
          pTVar12 = local_248;
          dVar1 = (pTVar20->field0_0x0)._s_0.X;
          dVar10 = (pTVar20->field0_0x0)._s_0.Y;
          dVar11 = (((TVector<double> *)&local_250->field_0x0)->field0_0x0)._s_0.Y;
          dVar36 = (((TVector<double> *)&local_250->field_0x0)->field0_0x0)._s_0.X;
          uVar27 = 0;
          if ((int)uVar32 < local_248->ArrayNum) {
            uVar27 = ~uVar32 >> 0x1f;
          }
          dVar9 = (pTVar20->field0_0x0)._s_0.Z +
                  (((TVector<double> *)&local_250->field_0x0)->field0_0x0)._s_0.Z;
          if ((uVar27 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = (pTVar12->AllocatorInstance).Data;
          uVar32 = uVar32 + 1;
          lVar30 = lVar30 + 0x10;
          *(double *)(pFVar25 + lVar31) = dVar1 + dVar36;
          auVar7._8_4_ = SUB84(dVar9,0);
          auVar7._0_8_ = dVar10 + dVar11;
          auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          *(undefined1 (*) [16])(pFVar25 + lVar31 + 8) = auVar7;
          lVar31 = lVar31 + 0x18;
          iVar24 = local_270.Vertices.ArrayNum;
        } while ((int)uVar32 < local_270.Vertices.ArrayNum);
      }
      this_00 = local_240;
      lVar31 = 0;
      iVar24 = local_240->ArrayNum;
      piVar26 = &local_240->ArrayNum;
      uVar32 = (uint)local_278;
      local_208 = piVar26;
      if (iVar24 < (int)(uint)local_278) {
        iVar24 = (uint)local_278 - iVar24;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar24,&local_240->AllocatorInstance,piVar26,&local_240->ArrayMax
                           );
        memset((this_00->AllocatorInstance).Data + (longlong)iVar15 * 0x10,0,(longlong)iVar24 << 4);
      }
      else {
        if ((int)(uint)local_278 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(local_278 & 0xffffffff);
        }
        if ((int)(uint)local_278 < iVar24) {
          uVar27 = iVar24 - (uint)local_278;
          if (((int)(uVar27 | (uint)local_278) < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar27 != 0) {
            TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(this_00,uVar32,uVar27);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_00->AllocatorInstance,*piVar26,&this_00->ArrayMax);
          }
        }
      }
      local_284 = 0;
      if (0 < (int)(uint)local_278) {
        local_258 = (UDrawPolygonTool *)0x0;
        do {
          uVar32 = local_284;
          uVar28 = ~local_284 >> 0x1f;
          uVar27 = 0;
          if ((int)local_284 < (int)(uint)local_278) {
            uVar27 = uVar28;
          }
          local_260 = uVar28;
          if ((uVar27 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar27 = *(uint *)(local_280.Data + lVar31 + 8);
          uVar16 = 0;
          if ((int)uVar32 < *piVar26) {
            uVar16 = uVar28;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar29 = (this_00->AllocatorInstance).Data + lVar31;
          iVar24 = *(int *)&pFVar29[8].field_0x0;
          pFVar25 = pFVar29 + 8;
          if (iVar24 < (int)uVar27) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar27 - iVar24,(ForAnyElementType *)pFVar29,(int *)pFVar25,
                       (int *)(pFVar29 + 0xc));
          }
          else {
            if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
            }
            if ((int)uVar27 < iVar24) {
              uVar28 = iVar24 - uVar27;
              if (((int)(uVar28 | uVar27) < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar32 = local_284;
              if (uVar28 != 0) {
                iVar24 = (*(int *)&pFVar25->field_0x0 - uVar28) - uVar27;
                if (iVar24 != 0) {
                  memmove(*(FScriptContainerElement **)&pFVar29->field_0x0 +
                          (longlong)(int)uVar27 * 0x18,
                          *(FScriptContainerElement **)&pFVar29->field_0x0 +
                          (longlong)(int)uVar27 * 0x18 + (longlong)(int)uVar28 * 0x18,
                          (longlong)iVar24 * 0x18);
                }
                *(uint *)&pFVar25->field_0x0 = *(int *)&pFVar25->field_0x0 - uVar28;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,(ForAnyElementType *)pFVar29,*(int *)&pFVar25->field_0x0,
                           (int *)(pFVar29 + 0xc));
                uVar32 = local_284;
              }
            }
          }
          uVar28 = 0;
          if (0 < (int)uVar27) {
            lVar30 = 0;
            local_248 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
            do {
              uVar16 = 0;
              if ((int)uVar32 < (int)(uint)local_278) {
                uVar16 = local_260;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar33.Data = local_280.Data;
              uVar32 = 0;
              if ((int)uVar28 < *(int *)(local_280.Data + lVar31 + 8)) {
                uVar32 = ~uVar28 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar25 = local_250;
              local_1a8._s_0.X =
                   local_220._s_0.X +
                   *(double *)
                    ((longlong)&(local_248->AllocatorInstance).Data +
                    *(longlong *)(FVar33.Data + lVar31));
              local_1a8._s_0.Y =
                   local_220._s_0.Y +
                   *(double *)((longlong)&local_248->ArrayNum + *(longlong *)(FVar33.Data + lVar31))
              ;
              local_1a8._s_0.Z = 0.0;
              pTVar20 = UE::Geometry::operator*<double>
                                  (&local_108,(TQuaternion<double> *)((longlong)local_250 + 0x18),
                                   (TVector<double> *)&local_1a8._s_0);
              dVar10 = (((TVector<double> *)&pFVar25->field_0x0)->field0_0x0)._s_0.Y;
              dVar1 = (pTVar20->field0_0x0)._s_0.X;
              dVar11 = (pTVar20->field0_0x0)._s_0.Y;
              dVar36 = (((TVector<double> *)&pFVar25->field_0x0)->field0_0x0)._s_0.X;
              uVar32 = 0;
              if ((int)local_284 < local_240->ArrayNum) {
                uVar32 = local_260;
              }
              dVar9 = (pTVar20->field0_0x0)._s_0.Z +
                      (((TVector<double> *)&pFVar25->field_0x0)->field0_0x0)._s_0.Z;
              if ((uVar32 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar25 = (local_240->AllocatorInstance).Data;
              uVar32 = 0;
              if ((int)uVar28 < *(int *)(pFVar25 + lVar31 + 8)) {
                uVar32 = ~uVar28 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)(pFVar25 + lVar31);
              uVar28 = uVar28 + 1;
              local_248 = local_248 + 1;
              *(double *)(lVar4 + lVar30) = dVar1 + dVar36;
              auVar8._8_4_ = SUB84(dVar9,0);
              auVar8._0_8_ = dVar11 + dVar10;
              auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              *(undefined1 (*) [16])(lVar4 + 8 + lVar30) = auVar8;
              lVar30 = lVar30 + 0x18;
              this_00 = local_240;
              uVar32 = local_284;
            } while ((int)uVar28 < (int)uVar27);
          }
          local_258 = (UDrawPolygonTool *)((longlong)local_258 + 1);
          local_284 = uVar32 + 1;
          lVar31 = lVar31 + 0x10;
          piVar26 = local_208;
        } while ((int)local_284 < (int)(uint)local_278);
      }
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)local_280.Data,(uint)local_278);
      if (local_280.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data);
      }
      if (local_270.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Vertices.AllocatorInstance.Data);
      }
      return;
    }
    local_e8 = (code *)0x0;
    local_c0 = (longlong *)0x0;
    local_c0 = FMemory::Malloc(0x28,8);
    *(undefined4 *)(local_c0 + 1) = uVar34;
    *(undefined4 *)((longlong)local_c0 + 0xc) = uVar35;
    *(undefined4 *)(local_c0 + 2) = uVar37;
    *(undefined4 *)((longlong)local_c0 + 0x14) = uVar38;
    *local_c0 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UDrawPolygonTool::GenerateFixedPolygon'::`23'::<lambda_2>,0,1>
                 ::_vftable_;
    *(undefined4 *)(local_c0 + 3) = uVar39;
    *(undefined4 *)((longlong)local_c0 + 0x1c) = uVar40;
    *(undefined4 *)(local_c0 + 4) = uVar41;
    *(undefined4 *)((longlong)local_c0 + 0x24) = uVar42;
    lVar31 = (longlong)*(int *)(FVar33.Data + 8);
    if (local_c0 != (longlong *)&DAT_fffffffffffffff8) {
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDrawPolygonTool::GenerateFixedPolygon'::__l23::<lambda_2>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&>
                 ::Call;
    }
    if (0 < lVar31) {
      lVar30 = 0;
      do {
        uVar27 = 0;
        if ((int)uVar32 < *(int *)(FVar33.Data + 8)) {
          uVar27 = ~uVar32 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)FVar33.Data;
        UE::Core::Private::Function::CheckCallable(local_e8);
        pcVar6 = local_e8;
        plVar22 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar22 = local_c0;
        }
        uVar19 = (**(code **)(*plVar22 + 8))();
        (*pcVar6)(&local_130,uVar19,(longlong)(int)uVar32 * 0x10 + lVar4);
        uVar13 = uStack_128;
        uVar19 = local_130;
        uVar27 = 0;
        if ((int)uVar32 < *(int *)(FVar33.Data + 8)) {
          uVar27 = ~uVar32 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)FVar33.Data;
        uVar32 = uVar32 + 1;
        *(undefined8 *)(lVar30 + lVar4) = uVar19;
        ((undefined8 *)(lVar30 + lVar4))[1] = uVar13;
        lVar30 = lVar30 + 0x10;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      pFVar25 = local_250;
      uVar34 = (undefined4)local_200;
      uVar35 = local_200._4_4_;
      uVar37 = (undefined4)uStack_1f8;
      uVar38 = uStack_1f8._4_4_;
      uVar39 = (undefined4)local_1f0;
      uVar40 = local_1f0._4_4_;
      uVar41 = (undefined4)uStack_1e8;
      uVar42 = uStack_1e8._4_4_;
    }
    if (local_e8 != (code *)0x0) {
      plVar22 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar22 = local_c0;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar18 = local_278 & 0xffffffff;
    FVar33.Data = FVar33.Data + 0x10;
    uVar23 = (ulonglong)local_260;
  } while( true );
}

// GeneratePolygonMesh @ 14cc59210

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

bool __thiscall
UDrawPolygonTool::GeneratePolygonMesh
          (UDrawPolygonTool *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2,FDynamicMesh3 *param_3,TFrame3<double> *param_4,bool param_5,double param_6,
          bool param_7)

{
  FMutex *pFVar1;
  uint *puVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  EDrawPolygonDrawMode EVar10;
  UConstructionPlaneMechanic *pUVar11;
  UDrawPolygonToolStandardProperties *pUVar12;
  UNewMeshMaterialProperties *pUVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined1 uVar25;
  short sVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  TVector<double> *pTVar30;
  TVector2<double> *pTVar31;
  TPolygon2<double> *pTVar32;
  TAxisAlignedBox2<double> *pTVar33;
  ulonglong uVar34;
  FMeshShapeGenerator *pFVar35;
  FRoundedRectangleMeshGenerator *this_00;
  longlong *plVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  undefined8 *puVar44;
  uint uVar45;
  UDrawPolygonTool *this_01;
  undefined8 *puVar46;
  int iVar47;
  FScriptContainerElement *pFVar48;
  ForAnyElementType FVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 extraout_XMM0 [16];
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStackY_a18 [32];
  undefined1 local_9c8;
  undefined1 local_9c7 [7];
  double local_9c0;
  uint local_9b8;
  TGeneralPolygon2<double> local_9b0;
  int local_988;
  int iStack_984;
  TConstrainedDelaunay2<double> local_978;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_928;
  UDrawPolygonTool *local_918;
  IndexIterator local_910;
  TFrame3<double> *local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  TVector2<double>_u_0 local_8e8;
  FDynamicMesh3 *local_8d8;
  TGeneralPolygon2<double> *local_8d0;
  double local_8c8;
  double local_8c0;
  FDynamicMeshEditor local_8b8;
  undefined1 local_8b0 [16];
  double local_8a0;
  TVector2<double>_u_0 local_898;
  IndexIterator local_888;
  TVector2<double>_u_0 local_878;
  TVector2<double>_u_0 local_868;
  code *local_858;
  TGeneralPolygon2<double> **local_850;
  TVector2<double>_u_0 local_848;
  double local_838;
  double local_830;
  TVector2<double>_u_0 local_828;
  double local_818;
  double local_810;
  double local_808;
  TVector<double> local_800;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  undefined8 local_7c0;
  FFlatTriangulationMeshGenerator local_7b8;
  TVector2<double> local_6c8;
  TVector<double> local_6b8;
  FRoundedRectangleMeshGenerator local_698;
  undefined1 local_598 [176];
  int local_4e8;
  undefined4 local_4e4;
  float local_4c8;
  TAxisAlignedBox2<double> local_4b8;
  undefined1 local_498 [176];
  int local_3e8;
  int local_3e4;
  TOptional<UE::Geometry::TTransformSRT3<double>_> local_3c8;
  code *local_368;
  undefined8 uStack_360;
  longlong local_358 [2];
  double *local_348;
  longlong *plStack_340;
  undefined1 local_338 [32];
  undefined4 local_318;
  undefined4 uStack_314;
  double *pdStack_310;
  double *local_308;
  longlong *plStack_300;
  double local_2f8;
  bool local_2f0;
  float local_2ec;
  ForAnyElementType local_2e8;
  int local_2e0;
  undefined1 local_2d8 [336];
  undefined1 local_188 [64];
  void *local_148;
  undefined4 local_140;
  _RTL_CRITICAL_SECTION local_138;
  TScaleGridIndexer2<double> local_110;
  int local_108;
  double local_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  pUVar11 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  uVar45 = 0;
  local_9c0 = param_6;
  dVar16 = (pUVar11->Plane).Origin.field0_0x0._s_0.Y;
  (param_4->Origin).field0_0x0._s_0.X = (pUVar11->Plane).Origin.field0_0x0._s_0.X;
  (param_4->Origin).field0_0x0._s_0.Y = dVar16;
  dVar17 = (pUVar11->Plane).Rotation.field0_0x0._s_0.X;
  dVar16 = 0.0;
  dVar52 = 0.0;
  (param_4->Origin).field0_0x0._s_0.Z = (pUVar11->Plane).Origin.field0_0x0._s_0.Z;
  (param_4->Rotation).field0_0x0._s_0.X = dVar17;
  dVar15 = (pUVar11->Plane).Rotation.field0_0x0._s_0.Z;
  dVar17 = 0.0;
  (param_4->Rotation).field0_0x0._s_0.Y = (pUVar11->Plane).Rotation.field0_0x0._s_0.Y;
  (param_4->Rotation).field0_0x0._s_0.Z = dVar15;
  (param_4->Rotation).field0_0x0._s_0.W = (pUVar11->Plane).Rotation.field0_0x0._s_0.W;
  local_9b8 = param_1->ArrayNum;
  lVar41 = (longlong)(int)local_9b8;
  dVar15 = 0.0;
  dVar53 = 0.0;
  dVar51 = 0.0;
  local_918 = this;
  local_8d8 = param_3;
  if (0 < (int)local_9b8) {
    lVar42 = 0;
    do {
      uVar38 = 0;
      if ((int)uVar45 < param_1->ArrayNum) {
        uVar38 = ~uVar45 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        uVar25 = (*pcVar14)();
        return (bool)uVar25;
      }
      pFVar48 = (param_1->AllocatorInstance).Data;
      uVar45 = uVar45 + 1;
      dVar16 = dVar16 + *(double *)(pFVar48 + lVar42);
      dVar52 = dVar52 + *(double *)(pFVar48 + lVar42 + 8);
      dVar17 = dVar17 + *(double *)(pFVar48 + lVar42 + 0x10);
      lVar42 = lVar42 + 0x18;
      lVar41 = lVar41 + -1;
      dVar15 = dVar16;
      dVar53 = dVar52;
      dVar51 = dVar17;
    } while (lVar41 != 0);
  }
  uVar45 = local_9b8;
  dVar20 = __real_3ff0000000000000 / (double)(int)local_9b8;
  dVar18 = dVar20 * dVar51 - (param_4->Origin).field0_0x0._s_0.Z;
  dVar19 = dVar20 * dVar15 - (param_4->Origin).field0_0x0._s_0.X;
  dVar21 = dVar20 * dVar53 - (param_4->Origin).field0_0x0._s_0.Y;
  pTVar30 = UE::Geometry::TFrame3<double>::GetAxis(param_4,&local_6b8,0);
  dVar16 = (pTVar30->field0_0x0)._s_0.Z;
  dVar52 = (pTVar30->field0_0x0)._s_0.X;
  dVar17 = (pTVar30->field0_0x0)._s_0.Y;
  pTVar30 = UE::Geometry::TFrame3<double>::GetAxis(param_4,&local_800,1);
  dVar6 = (pTVar30->field0_0x0)._s_0.Y;
  dVar7 = (pTVar30->field0_0x0)._s_0.X;
  dVar8 = (pTVar30->field0_0x0)._s_0.Z;
  (param_4->Origin).field0_0x0._s_0.X = dVar20 * dVar15;
  (param_4->Origin).field0_0x0._s_0.Y = dVar20 * dVar53;
  (param_4->Origin).field0_0x0._s_0.Z = dVar20 * dVar51;
  local_900 = param_4;
  `UDrawPolygonTool::GeneratePolygonMesh'::__l2::<lambda_1>::operator()
            (&local_900,(TPolygon2<double> *)&local_928,param_1);
  uVar38 = 0;
  this_01 = local_918;
  if (param_5) {
    uVar45 = uVar45 - 1;
    uVar40 = 0;
    if ((int)uVar45 < param_1->ArrayNum) {
      uVar40 = ~uVar45 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar14 = (code *)swi(3);
      uVar25 = (*pcVar14)();
      return (bool)uVar25;
    }
    this_01 = local_918;
    lVar41 = (longlong)(int)uVar45;
    pFVar48 = (param_1->AllocatorInstance).Data;
    dVar53 = *(double *)(pFVar48 + lVar41 * 0x18) - (local_918->PreviewVertex).field0_0x0._s_0.X;
    dVar51 = *(double *)(pFVar48 + lVar41 * 0x18 + 8) - (local_918->PreviewVertex).field0_0x0._s_0.Y
    ;
    dVar15 = *(double *)(pFVar48 + lVar41 * 0x18 + 0x10) -
             (local_918->PreviewVertex).field0_0x0._s_0.Z;
    auVar54._0_8_ = dVar51 * dVar51;
    auVar54._8_8_ = 0;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = dVar53 * dVar53 + auVar54._0_8_ + dVar15 * dVar15;
    auVar55 = sqrtpd(auVar54,auVar55);
    if (__real_3fb999999999999a < auVar55._0_8_) {
      pTVar31 = UE::Geometry::TFrame3<double>::ToPlaneUV
                          (param_4,&local_6c8,&local_918->PreviewVertex,2);
      UE::Geometry::TPolygon2<double>::AppendVertex((TPolygon2<double> *)&local_928,pTVar31);
    }
  }
  UE::Geometry::TPolygon2<double>::Bounds
            ((TPolygon2<double> *)&local_928,(TAxisAlignedBox2<double> *)&local_848._s_0);
  EVar10 = ((this_01->PolygonProperties).field0_0x0.DebugPtr)->PolygonDrawMode;
  if (((EVar10 == Ring) || (EVar10 == Circle)) || (EVar10 == RoundedRectangle)) {
    GetPolygonParametersFromFixedPoints
              (this_01,&this_01->FixedPolygonClickPoints,(TVector2<double> *)&local_898._s_0,
               (TVector2<double> *)&local_8e8._s_0,&local_8c0,&local_8c8);
    dVar52 = local_898._s_0.X - (dVar19 * dVar52 + dVar21 * dVar17 + dVar18 * dVar16);
    dVar17 = local_898._s_0.Y - (dVar21 * dVar6 + dVar19 * dVar7 + dVar18 * dVar8);
    __libm_sse2_sincos_();
    uVar45 = extraout_XMM0._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    uVar38 = extraout_XMM0._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar16 = extraout_XMM0._8_8_;
    EVar10 = ((this_01->PolygonProperties).field0_0x0.DebugPtr)->PolygonDrawMode;
    if (EVar10 == Ring) {
      UE::Geometry::FPuncturedDiscMeshGenerator::FPuncturedDiscMeshGenerator
                ((FPuncturedDiscMeshGenerator *)local_598);
      pUVar12 = (this_01->PolygonProperties).field0_0x0.DebugPtr;
      local_598._160_4_ = (undefined4)local_8e8._s_0.X;
      local_4e8 = pUVar12->RadialSlices;
      local_4e4 = 1;
      dVar15 = (double)pUVar12->FeatureSizeRatio;
      dVar53 = __real_3f847ae140000000;
      if ((__real_3f847ae140000000 <= dVar15) &&
         (dVar53 = dVar15, __real_3fefae1480000000 <= dVar15)) {
        dVar53 = __real_3fefae1480000000;
      }
      local_4c8 = (float)(dVar53 * local_8e8._s_0.X);
      pFVar35 = UE::Geometry::FPuncturedDiscMeshGenerator::Generate
                          ((FPuncturedDiscMeshGenerator *)local_598);
      UE::Geometry::FDynamicMesh3::Copy(param_3,pFVar35);
      this_00 = (FRoundedRectangleMeshGenerator *)local_598;
LAB_14cc5a115:
      UE::Geometry::FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this_00);
    }
    else {
      if (EVar10 == Circle) {
        UE::Geometry::FDiscMeshGenerator::FDiscMeshGenerator((FDiscMeshGenerator *)local_498);
        local_498._160_4_ = (undefined4)local_8e8._s_0.X;
        local_3e8 = ((this_01->PolygonProperties).field0_0x0.DebugPtr)->RadialSlices;
        local_3e4 = 1;
        pFVar35 = UE::Geometry::FDiscMeshGenerator::Generate((FDiscMeshGenerator *)local_498);
        UE::Geometry::FDynamicMesh3::Copy(param_3,pFVar35);
        this_00 = (FRoundedRectangleMeshGenerator *)local_498;
        goto LAB_14cc5a115;
      }
      if (EVar10 == RoundedRectangle) {
        UE::Geometry::FRoundedRectangleMeshGenerator::FRoundedRectangleMeshGenerator(&local_698);
        pUVar12 = (this_01->PolygonProperties).field0_0x0.DebugPtr;
        local_698.AngleSamples = pUVar12->RadialSlices;
        dVar15 = local_8e8._s_0.Y * local_8c0 * __real_3fe0000000000000;
        dVar53 = (double)pUVar12->FeatureSizeRatio;
        dVar52 = dVar52 + dVar15 * (double)CONCAT44(uVar38,uVar45) +
                          local_8e8._s_0.X * __real_3fe0000000000000 * dVar16;
        dVar17 = dVar17 + local_8e8._s_0.X * __real_3fe0000000000000 * extraout_XMM0._0_8_ +
                          dVar15 * dVar16;
        local_698.Radius = __real_3f847ae140000000;
        if ((__real_3f847ae140000000 <= dVar53) &&
           (local_698.Radius = dVar53, __real_3fefae1480000000 <= dVar53)) {
          local_698.Radius = __real_3fefae1480000000;
        }
        uVar9 = local_8e8._s_0.Y;
        if (local_8e8._s_0.X <= local_8e8._s_0.Y) {
          uVar9 = local_8e8._s_0.X;
        }
        local_698._padding_._0_4_ = 1;
        local_698._padding_._4_4_ = 1;
        local_698.Radius = (double)uVar9 * __real_3fe0000000000000 * local_698.Radius;
        local_698._padding_ = (longlong)(local_8e8._s_0.Y - (local_698.Radius + local_698.Radius));
        local_698._padding_ = (longlong)(local_8e8._s_0.X - (local_698.Radius + local_698.Radius));
        pFVar35 = UE::Geometry::FRoundedRectangleMeshGenerator::Generate(&local_698);
        UE::Geometry::FDynamicMesh3::Copy(param_3,pFVar35);
        this_00 = &local_698;
        goto LAB_14cc5a115;
      }
    }
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_910,&param_3->VertexRefCounts,0,
               (param_3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_3->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar29 = (param_3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_3->VertexRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_888,&param_3->VertexRefCounts,iVar29,iVar29);
    uVar40 = local_888._8_4_;
    if (local_910._8_4_ != local_888._8_4_) {
      do {
        uVar56 = local_910._8_4_;
        uVar43 = (ulonglong)(local_910._8_4_ & 0x1ff);
        local_7c0 = 0;
        lVar41 = *(longlong *)
                  ((param_3->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)local_910._8_4_ >> 9) * 8);
        pdVar3 = (double *)(lVar41 + uVar43 * 0x18);
        dVar53 = *pdVar3;
        dVar51 = pdVar3[1];
        local_800.field0_0x0._s_0.Z = *(double *)(lVar41 + 0x10 + uVar43 * 0x18);
        dVar15 = dVar53 * extraout_XMM0._0_8_ + dVar16 * dVar51 + dVar17;
        sVar26 = _dclass();
        if ((sVar26 < 1) && (((uint)((ulonglong)dVar15 >> 0x34) & 0x7ff) != 0x7ff)) {
          pdVar3 = (double *)(lVar41 + uVar43 * 0x18);
          *pdVar3 = dVar53 * dVar16 + (double)CONCAT44(uVar38,uVar45) * dVar51 + dVar52;
          pdVar3[1] = dVar15;
          *(undefined8 *)(lVar41 + 0x10 + uVar43 * 0x18) = local_7c0;
          if ((param_3->ChangeStampShape).bIsEnabled != false) {
            pFVar1 = &(param_3->ChangeStampShape).Mutex;
            LOCK();
            bVar24 = pFVar1->State == (atomic<unsigned_char>)0x0;
            if (bVar24) {
              pFVar1->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar24) {
              UE::FMutex::LockSlow(pFVar1);
            }
            puVar2 = &(param_3->ChangeStampShape).Value;
            *puVar2 = *puVar2 + 1;
            LOCK();
            aVar4 = pFVar1->State;
            pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(pFVar1);
            }
          }
        }
        local_910._8_4_ = uVar56 + 1;
        if ((int)local_910._8_4_ < (int)local_910._12_4_) {
          do {
            uVar40 = local_888._8_4_;
            if ((*(short *)(*(longlong *)
                             (*(longlong *)(local_910._0_8_ + 8) +
                             (ulonglong)((uint)local_910._8_4_ >> 9) * 8) +
                           (ulonglong)(local_910._8_4_ & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(local_910._0_8_ + 8) +
                            (ulonglong)((uint)local_910._8_4_ >> 9) * 8) +
                          (ulonglong)(local_910._8_4_ & 0x1ff) * 2) != -1)) break;
            local_910._8_4_ = local_910._8_4_ + 1;
          } while ((int)local_910._8_4_ < (int)local_910._12_4_);
        }
      } while (local_910._8_4_ != uVar40);
    }
  }
  else {
    local_9b0.Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9b0.Outer.Vertices.ArrayNum = 0;
    local_9b0.Outer.Vertices.ArrayMax = 0;
    local_9b0.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9b0.Holes.ArrayNum = 0;
    local_9b0.Holes.ArrayMax = 0;
    UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_7b8);
    bVar24 = UE::Geometry::TPolygon2<double>::IsClockwise((TPolygon2<double> *)&local_928);
    if ((!bVar24) && (lVar41 = (longlong)(local_928.ArrayNum / 2), 0 < local_928.ArrayNum / 2)) {
      pFVar48 = local_928.AllocatorInstance.Data + (longlong)(local_928.ArrayNum + -1) * 0x10;
      FVar49.Data = local_928.AllocatorInstance.Data;
      do {
        uVar9 = *(undefined8 *)(pFVar48 + 8);
        uVar22 = *(undefined8 *)FVar49.Data;
        uVar23 = *(undefined8 *)(FVar49.Data + 8);
        *(undefined8 *)FVar49.Data = *(undefined8 *)pFVar48;
        *(undefined8 *)(FVar49.Data + 8) = uVar9;
        FVar49.Data = FVar49.Data + 0x10;
        *(undefined8 *)pFVar48 = uVar22;
        *(undefined8 *)(pFVar48 + 8) = uVar23;
        lVar41 = lVar41 + -1;
        pFVar48 = pFVar48 + -0x10;
      } while (lVar41 != 0);
    }
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&local_9b0,
               &local_928);
    local_9b0.bOuterIsCW =
         UE::Geometry::TPolygon2<double>::IsClockwise((TPolygon2<double> *)&local_928);
    iVar29 = param_2->ArrayNum;
    if (0 < iVar29) {
      do {
        uVar45 = 0;
        if ((int)uVar38 < iVar29) {
          uVar45 = ~uVar38 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          uVar25 = (*pcVar14)();
          return (bool)uVar25;
        }
        pTVar32 = `UDrawPolygonTool::GeneratePolygonMesh'::__l2::<lambda_1>::operator()
                            (&local_900,(TPolygon2<double> *)local_8b0,
                             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10));
        UE::Geometry::TGeneralPolygon2<double>::AddHole(&local_9b0,pTVar32,true,false);
        iVar29 = param_2->ArrayNum;
        uVar38 = uVar38 + 1;
      } while ((int)uVar38 < iVar29);
    }
    uVar43 = 0;
    local_978.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_978.Vertices.ArrayNum = 0;
    local_978.Vertices.ArrayMax = 0;
    local_978.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_978.Edges.ArrayNum = 0;
    local_978.Edges.ArrayMax = 0;
    local_978.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_978.HoleEdges.ArrayNum = 0;
    local_978.HoleEdges.ArrayMax = 0;
    local_978.bOrientedEdges = true;
    local_978.bOutputCCW = false;
    local_978.bSplitBowties = false;
    uVar45 = 0;
    local_978.FillRule = Odd;
    local_978.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_978.Triangles.ArrayNum = 0;
    local_978.Triangles.ArrayMax = 0;
    local_978.AddedVerticesStartIndex = -1;
    if (((this_01->PolygonProperties).field0_0x0.DebugPtr)->bAllowSelfIntersections == false) {
      UE::Geometry::TConstrainedDelaunay2<double>::Add<double>(&local_978,&local_9b0.Outer,false);
      iVar29 = local_9b0.Holes.ArrayNum;
      uVar34 = uVar43;
      if (0 < local_9b0.Holes.ArrayNum) {
        while( true ) {
          uVar40 = (uint)uVar43;
          uVar38 = uVar45;
          if ((int)uVar40 < local_9b0.Holes.ArrayNum) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            uVar25 = (*pcVar14)();
            return (bool)uVar25;
          }
          UE::Geometry::TConstrainedDelaunay2<double>::Add<double>
                    (&local_978,
                     (TPolygon2<double> *)(local_9b0.Holes.AllocatorInstance.Data + uVar34),true);
          uVar43 = (ulonglong)(uVar40 + 1);
          if (iVar29 <= (int)(uVar40 + 1)) break;
          uVar34 = uVar34 + 0x10;
        }
      }
    }
    else {
      pTVar33 = UE::Geometry::TPolygon2<double>::Bounds((TPolygon2<double> *)&local_928,&local_4b8);
      UE::Geometry::FDynamicGraph2<double>::FDynamicGraph2<double>
                ((FDynamicGraph2<double> *)local_2d8);
      dVar16 = (pTVar33->Max).field0_0x0._s_0.Y - (pTVar33->Min).field0_0x0._s_0.Y;
      dVar52 = (pTVar33->Max).field0_0x0._s_0.X - (pTVar33->Min).field0_0x0._s_0.X;
      local_188._0_8_ = 0;
      local_188._8_8_ = 0;
      local_188._32_8_ = 0;
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      local_188._40_4_ = 0;
      if (dVar52 <= 0.0) {
        dVar52 = 0.0;
      }
      local_188._44_4_ = 0x80;
      local_188._48_4_ = 0xffffffff;
      local_188._52_4_ = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      if (dVar16 <= dVar52) {
        dVar16 = dVar52;
      }
      dVar52 = dVar16 * __real_3f90000000000000;
      if (dVar16 * __real_3f90000000000000 <= __real_3e45798ee2308c3a) {
        dVar52 = __real_3e45798ee2308c3a;
      }
      InitializeCriticalSectionAndSpinCount(&local_138,4000);
      local_110.CellSize = dVar52;
      if ((dVar52 < __real_3e45798ee2308c3a) &&
         (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2954329834790059998>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing2.h"
                              ,0x22,"CellSize >= TMathUtil<RealType>::ZeroTolerance"), bVar24)) {
        pcVar14 = (code *)swi(3);
        uVar25 = (*pcVar14)();
        return (bool)uVar25;
      }
      iVar29 = local_9b0.Outer.Vertices.ArrayNum;
      local_100 = __real_3ee4f8b588e368f1;
      local_108 = -1;
      local_978._48_2_ = local_978._48_2_ & 0xff00;
      local_978.bSplitBowties = true;
      while (uVar38 = (uint)uVar43, iVar29 != uVar38) {
        uVar40 = local_9b0.Outer.Vertices.ArrayNum;
        if (local_9b0.Outer.Vertices.ArrayNum <= (int)uVar38) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("polygon != nullptr && i < polygon->VertexCount()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                              ,0xd7,L"");
          if (bVar24) {
            pcVar14 = (code *)swi(3);
            uVar25 = (*pcVar14)();
            return (bool)uVar25;
          }
          uVar40 = local_9b0.Outer.Vertices.ArrayNum;
        }
        uVar37 = (int)(uVar38 + 1) % (int)uVar40;
        uVar27 = uVar45;
        if ((int)uVar37 < (int)uVar40) {
          uVar27 = ~uVar37 >> 0x1f;
        }
        if (uVar27 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar14 = (code *)swi(3);
            uVar25 = (*pcVar14)();
            return (bool)uVar25;
          }
          uVar40 = local_9b0.Outer.Vertices.ArrayNum;
        }
        FVar49.Data = local_9b0.Outer.Vertices.AllocatorInstance.Data;
        uVar27 = uVar45;
        if ((int)uVar38 < (int)uVar40) {
          uVar27 = ~uVar38 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          uVar25 = (*pcVar14)();
          return (bool)uVar25;
        }
        UE::Geometry::TSegment2<double>::TSegment2<double>
                  ((TSegment2<double> *)&local_828._s_0,
                   (TVector2<double> *)
                   (local_9b0.Outer.Vertices.AllocatorInstance.Data + (longlong)(int)uVar38 * 0x10),
                   (TVector2<double> *)(FVar49.Data + (longlong)(int)uVar37 * 0x10));
        local_878._s_0.X = local_828._s_0.X + local_818 * local_808;
        local_868._s_0.X = local_828._s_0.X - local_818 * local_808;
        local_878._s_0.Y = local_828._s_0.Y + local_810 * local_808;
        local_868._s_0.Y = local_828._s_0.Y - local_810 * local_808;
        UE::Geometry::FArrangement2d::insert_segment
                  ((FArrangement2d *)local_2d8,(TVector2<double> *)&local_868._s_0,
                   (TVector2<double> *)&local_878._s_0,-1,local_100);
        uVar43 = (ulonglong)(uVar38 + 1);
      }
      UE::Geometry::TConstrainedDelaunay2<double>::Add<double>
                (&local_978,(FDynamicGraph2<double> *)local_2d8);
      uVar34 = (ulonglong)local_9b0.Holes.ArrayNum;
      pFVar48 = local_9b0.Holes.AllocatorInstance.Data + uVar34 * 0x10;
      local_9b8 = local_9b0.Holes.ArrayNum;
      uVar43 = uVar34;
      FVar49.Data = local_9b0.Holes.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar34 != (int)uVar43) {
          local_9c7[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_9c7);
        }
        if (FVar49.Data == pFVar48) break;
        iVar29 = *(int *)(FVar49.Data + 8);
        iVar39 = local_978.Vertices.ArrayNum;
        puVar46 = *(undefined8 **)FVar49.Data;
        puVar44 = puVar46 + (longlong)iVar29 * 2;
        iVar47 = iVar29 + local_978.Vertices.ArrayNum;
        while( true ) {
          if (*(int *)(FVar49.Data + 8) != iVar29) {
            local_9c8 = 0;
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_9c8);
          }
          if (puVar46 == puVar44) break;
          local_8f8 = *puVar46;
          uStack_8f0 = puVar46[1];
          if (((local_978.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8f8)
              && ((FScriptContainerElement *)&local_8f8 <
                  local_978.Vertices.AllocatorInstance.Data +
                  (longlong)local_978.Vertices.ArrayMax * 0x10)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar14 = (code *)swi(3);
            uVar25 = (*pcVar14)();
            return (bool)uVar25;
          }
          iVar28 = local_978.Vertices.ArrayNum;
          if (local_978.Vertices.ArrayNum == local_978.Vertices.ArrayMax) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&local_978,&local_978.Vertices.ArrayMax);
          }
          local_978.Vertices.ArrayNum = iVar28 + 1;
          puVar46 = puVar46 + 2;
          *(undefined8 *)(local_978.Vertices.AllocatorInstance.Data + (longlong)iVar28 * 0x10) =
               local_8f8;
          *(undefined8 *)(local_978.Vertices.AllocatorInstance.Data + (longlong)iVar28 * 0x10 + 8) =
               uStack_8f0;
        }
        iVar28 = iVar47 + -1;
        iVar29 = local_988;
        for (; local_988 = iVar28, iVar39 < iVar47; iVar39 = iVar39 + 1) {
          iStack_984 = iVar39;
          if (((local_978.HoleEdges.AllocatorInstance.Data <= (FScriptContainerElement *)&local_988)
              && ((FScriptContainerElement *)&local_988 <
                  local_978.HoleEdges.AllocatorInstance.Data +
                  (longlong)local_978.HoleEdges.ArrayMax * 8)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar14 = (code *)swi(3);
            uVar25 = (*pcVar14)();
            return (bool)uVar25;
          }
          iVar29 = local_978.HoleEdges.ArrayNum;
          if (local_978.HoleEdges.ArrayNum == local_978.HoleEdges.ArrayMax) {
            iVar29 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_978.HoleEdges.AllocatorInstance,
                                &local_978.HoleEdges.ArrayMax);
          }
          local_978.HoleEdges.ArrayNum = iVar29 + 1;
          *(ulonglong *)(local_978.HoleEdges.AllocatorInstance.Data + (longlong)iVar29 * 8) =
               CONCAT44(iStack_984,local_988);
          iVar28 = iVar39;
          iVar29 = local_988;
        }
        uVar34 = local_9b0.Holes._8_8_ & 0xffffffff;
        FVar49.Data = FVar49.Data + 0x10;
        uVar43 = (ulonglong)local_9b8;
        local_988 = iVar29;
      }
      DeleteCriticalSection(&local_138);
      param_3 = local_8d8;
      local_140 = 0;
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_188);
      UE::Geometry::TDynamicVector<double,512>::Empty
                ((TDynamicVector<double,512> *)(local_2d8 + 0x138),0);
      if ((FScriptContainerElement *)local_2d8._320_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2d8._320_8_);
      }
      UE::Geometry::FDynamicGraph::~FDynamicGraph((FDynamicGraph *)local_2d8);
    }
    local_8d0 = &local_9b0;
    local_850 = &local_8d0;
    local_858 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDrawPolygonTool::GeneratePolygonMesh'::__l30::<lambda_2>,bool,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&>
                ::Call;
    UE::Geometry::TConstrainedDelaunay2<double>::Triangulate
              (&local_978,
               (TFunctionRef<bool___cdecl(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&)>
                *)&local_858);
    FVar49.Data = local_978.Vertices.AllocatorInstance.Data;
    if (local_978.Triangles.ArrayNum == 0) {
      if (local_978.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Triangles.AllocatorInstance.Data);
      }
      if (local_978.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.HoleEdges.AllocatorInstance.Data);
      }
      if (local_978.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Edges.AllocatorInstance.Data);
      }
      if (local_978.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Vertices.AllocatorInstance.Data);
      }
      UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_7b8);
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)local_9b0.Holes.AllocatorInstance.Data,
                 local_9b0.Holes.ArrayNum);
      if (local_9b0.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b0.Holes.AllocatorInstance.Data);
      }
      if (local_9b0.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b0.Outer.Vertices.AllocatorInstance.Data);
      }
      bVar24 = false;
      goto LAB_14cc5a73b;
    }
    iVar29 = local_978.Vertices.ArrayNum;
    lVar41 = (longlong)local_978.Vertices.ArrayNum;
    local_7b8.Vertices2D.ArrayNum = local_978.Vertices.ArrayNum;
    if ((local_978.Vertices.ArrayNum == 0) && (local_7b8.Vertices2D.ArrayMax == 0)) {
      local_7b8.Vertices2D.ArrayMax = 0;
      iVar29 = local_978.Triangles.ArrayNum;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_978.Vertices.ArrayNum,local_7b8.Vertices2D.ArrayMax,
                 &local_7b8.Vertices2D.AllocatorInstance,local_978.Vertices.ArrayNum,
                 &local_7b8.Vertices2D.ArrayMax);
      if (iVar29 != 0) {
        memcpy(local_7b8.Vertices2D.AllocatorInstance.Data,FVar49.Data,lVar41 << 4);
      }
      iVar29 = local_978.Triangles.ArrayNum;
    }
    FVar49.Data = local_978.Triangles.AllocatorInstance.Data;
    local_7b8.Triangles2D.ArrayNum = iVar29;
    if ((iVar29 == 0) && (local_7b8.Triangles2D.ArrayMax == 0)) {
      local_7b8.Triangles2D.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar29,local_7b8.Triangles2D.ArrayMax,
                 &local_7b8.Triangles2D.AllocatorInstance,iVar29,&local_7b8.Triangles2D.ArrayMax);
      if (iVar29 != 0) {
        memcpy(local_7b8.Triangles2D.AllocatorInstance.Data,FVar49.Data,(longlong)iVar29 * 0xc);
      }
    }
    pFVar35 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_7b8);
    UE::Geometry::FDynamicMesh3::Copy(param_3,pFVar35);
    if (local_978.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Triangles.AllocatorInstance.Data);
    }
    if (local_978.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.HoleEdges.AllocatorInstance.Data);
    }
    if (local_978.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Edges.AllocatorInstance.Data);
    }
    if (local_978.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Vertices.AllocatorInstance.Data);
    }
    UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_7b8);
    DestructItems<UE::Geometry::TPolygon2<double>,int>
              ((TPolygon2<double> *)local_9b0.Holes.AllocatorInstance.Data,local_9b0.Holes.ArrayNum)
    ;
    if (local_9b0.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b0.Holes.AllocatorInstance.Data);
    }
    if (local_9b0.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b0.Outer.Vertices.AllocatorInstance.Data);
    }
  }
  uVar23 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  uVar22 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  uVar43 = 0;
  if (param_7) {
    iVar29 = (param_3->VertexRefCounts).RefCounts.CurBlockUsed +
             (param_3->VertexRefCounts).RefCounts.CurBlock * 0x200;
    if (((iVar29 != 0) &&
        (pFVar48 = (param_3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar48 - 1U))) && (uVar43 = 1, 1 < iVar29)) {
      do {
        uVar34 = (ulonglong)((uint)uVar43 & 0x1ff);
        lVar41 = *(longlong *)(pFVar48 + (uVar43 >> 9) * 8);
        if ((*(short *)(lVar41 + uVar34 * 2) != 0) && (*(short *)(lVar41 + uVar34 * 2) != -1))
        break;
        uVar45 = (uint)uVar43 + 1;
        uVar43 = (ulonglong)uVar45;
      } while ((int)uVar45 < iVar29);
    }
    uVar45 = (param_3->VertexRefCounts).RefCounts.CurBlock;
    uVar56 = SUB84(local_9c0,0);
    uVar57 = (undefined4)((ulonglong)local_9c0 >> 0x20);
    uVar38 = (param_3->VertexRefCounts).RefCounts.CurBlockUsed;
    iVar39 = (int)uVar43;
    local_8b0._0_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_8b0._8_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_8a0 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    while (iVar39 != uVar45 * 0x200 + uVar38) {
      while( true ) {
        uVar34 = (ulonglong)((uint)uVar43 & 0x1ff);
        lVar41 = *(longlong *)
                  ((param_3->Vertices).Blocks.AllocatorInstance.Data + (uVar43 >> 9) * 8);
        pdVar3 = (double *)(lVar41 + uVar34 * 0x18);
        dVar52 = *pdVar3;
        dVar17 = pdVar3[1];
        local_800.field0_0x0._s_0.Z = *(double *)(lVar41 + 0x10 + uVar34 * 0x18);
        dVar16 = local_800.field0_0x0._s_0.Z - (double)uVar23 * (double)CONCAT44(uVar57,uVar56);
        sVar26 = _dclass();
        if (((sVar26 < 1) && (sVar26 = _dclass(), sVar26 < 1)) && (sVar26 = _dclass(), sVar26 < 1))
        {
          *(double *)(lVar41 + uVar34 * 0x18) =
               dVar52 - (double)uVar9 * (double)CONCAT44(uVar57,uVar56);
          *(double *)(lVar41 + 8 + uVar34 * 0x18) =
               dVar17 - (double)uVar22 * (double)CONCAT44(uVar57,uVar56);
          *(double *)(lVar41 + 0x10 + uVar34 * 0x18) = dVar16;
          if ((param_3->ChangeStampShape).bIsEnabled != false) {
            pFVar1 = &(param_3->ChangeStampShape).Mutex;
            LOCK();
            bVar24 = pFVar1->State == (atomic<unsigned_char>)0x0;
            if (bVar24) {
              pFVar1->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar24) {
              UE::FMutex::LockSlow(pFVar1);
            }
            puVar2 = &(param_3->ChangeStampShape).Value;
            *puVar2 = *puVar2 + 1;
            LOCK();
            aVar4 = pFVar1->State;
            pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(pFVar1);
            }
          }
          uVar56 = SUB84(local_9c0,0);
          uVar57 = (undefined4)((ulonglong)local_9c0 >> 0x20);
        }
        uVar40 = (uint)uVar43 + 1;
        uVar43 = (ulonglong)uVar40;
        if (iVar29 <= (int)uVar40) break;
        while( true ) {
          uVar34 = (ulonglong)((uint)uVar43 & 0x1ff);
          lVar41 = *(longlong *)
                    ((param_3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar43 >> 9) * 8);
          if ((*(short *)(lVar41 + uVar34 * 2) != 0) && (*(short *)(lVar41 + uVar34 * 2) != -1))
          break;
          uVar40 = (uint)uVar43 + 1;
          uVar43 = (ulonglong)uVar40;
          if (iVar29 <= (int)uVar40) goto LAB_14cc5a4a1;
        }
      }
LAB_14cc5a4a1:
      iVar39 = (int)uVar43;
    }
    local_9c0 = (double)CONCAT44(uVar57,uVar56) * __real_4000000000000000;
  }
  if (local_9c0 != 0.0) {
    UE::Geometry::FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)local_338,param_3);
    plStack_340 = plStack_300;
    local_348 = local_308;
    uVar9 = local_338._24_8_;
    local_368 = (code *)local_338._16_8_;
    dVar16 = local_838 - local_848._s_0.X;
    dVar52 = local_830 - local_848._s_0.Y;
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    local_2f8 = local_9c0;
    if (dVar52 <= 0.0) {
      dVar52 = 0.0;
    }
    if (local_9c0 < 0.0) {
      local_2f0 = false;
    }
    pdStack_310 = &local_9c0;
    if (dVar16 <= dVar52) {
      dVar16 = dVar52;
    }
    local_318 = 0x52952880;
    uStack_314 = 1;
    local_2ec = (float)(__real_3ff0000000000000 / dVar16);
    local_7e8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dStack_7e0 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_7d8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_338._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDrawPolygonTool::GeneratePolygonMesh'::__l61::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<float>_const_&,int>
         ::Call;
    local_338._24_8_ = uStack_360;
    local_308 = &local_7e8;
    plStack_300 = (longlong *)0x0;
    uStack_360 = uVar9;
    if (local_368 != (code *)0x0) {
      plVar36 = local_358;
      if (plStack_340 != (longlong *)0x0) {
        plVar36 = plStack_340;
      }
      (**(code **)(*plVar36 + 0x10))();
    }
    UE::Geometry::FExtrudeMesh::Apply((FExtrudeMesh *)local_338);
    local_338._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
    DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
              ((FExtrusionInfo *)local_2e8.Data,local_2e0);
    if ((FExtrusionInfo *)local_2e8.Data != (FExtrusionInfo *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
    if ((code *)local_338._16_8_ != (code *)0x0) {
      plVar36 = (longlong *)&local_318;
      if (plStack_300 != (longlong *)0x0) {
        plVar36 = plStack_300;
      }
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  local_838 = local_838 - local_848._s_0.X;
  local_830 = local_830 - local_848._s_0.Y;
  if (local_838 <= 0.0) {
    local_838 = 0.0;
  }
  pUVar13 = (local_918->MaterialProperties).field0_0x0.DebugPtr;
  if (local_830 <= 0.0) {
    local_830 = 0.0;
  }
  fVar5 = pUVar13->UVScale;
  if (local_838 <= local_830) {
    local_838 = local_830;
  }
  fVar50 = (float)((double)CONCAT44((uint)((ulonglong)local_9c0 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_9c0,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (double)(float)(__real_3ff0000000000000 / local_838));
  if (fVar50 <= __real_3f800000) {
    fVar50 = __real_3f800000;
  }
  fVar50 = fVar5 / fVar50;
  if (pUVar13->bWorldSpaceUVScale != false) {
    fVar50 = (float)(((double)fVar5 * __real_3f847ae147ae147b) /
                    (double)(float)(__real_3ff0000000000000 / local_838));
  }
  local_3c8.bIsSet = false;
  local_8b8.Mesh = param_3;
  UE::Geometry::FDynamicMeshEditor::RescaleAttributeUVs(&local_8b8,fVar50,false,0,&local_3c8);
  bVar24 = true;
LAB_14cc5a73b:
  if (local_928.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.AllocatorInstance.Data);
  }
  return bVar24;
}

// GetPolygonParametersFromFixedPoints @ 14cc5b4c0

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

void __thiscall
UDrawPolygonTool::GetPolygonParametersFromFixedPoints
          (UDrawPolygonTool *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UConstructionPlaneMechanic *pUVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TVector<double> *pTVar12;
  FScriptContainerElement *pFVar13;
  TFrame3<double> *this_00;
  int iVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar18 [16];
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0;
  
  if (1 < param_1->ArrayNum) {
    pUVar6 = (this->PlaneMechanic).field0_0x0.DebugPtr;
    this_00 = &pUVar6->Plane;
    pFVar13 = (param_1->AllocatorInstance).Data;
    dVar9 = *(double *)pFVar13 - (this_00->Origin).field0_0x0._s_0.X;
    dVar10 = *(double *)(pFVar13 + 8) - (pUVar6->Plane).Origin.field0_0x0._s_0.Y;
    dVar8 = *(double *)(pFVar13 + 0x10) - (pUVar6->Plane).Origin.field0_0x0._s_0.Z;
    pTVar12 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_118,0);
    iVar14 = 1;
    dVar1 = (pTVar12->field0_0x0)._s_0.Y;
    dVar2 = (pTVar12->field0_0x0)._s_0.X;
    dVar3 = (pTVar12->field0_0x0)._s_0.Z;
    pTVar12 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_100,1);
    dVar15 = (pTVar12->field0_0x0)._s_0.Y;
    dVar4 = (pTVar12->field0_0x0)._s_0.X;
    dVar5 = (pTVar12->field0_0x0)._s_0.Z;
    (param_2->field0_0x0)._s_0.X = dVar10 * dVar1 + dVar9 * dVar2 + dVar8 * dVar3;
    (param_2->field0_0x0)._s_0.Y = dVar10 * dVar15 + dVar9 * dVar4 + dVar8 * dVar5;
    if (param_1->ArrayNum < 2) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar13 = (param_1->AllocatorInstance).Data;
    dVar4 = *(double *)(pFVar13 + 0x18) - (this_00->Origin).field0_0x0._s_0.X;
    dVar5 = *(double *)(pFVar13 + 0x20) - (pUVar6->Plane).Origin.field0_0x0._s_0.Y;
    dVar15 = *(double *)(pFVar13 + 0x28) - (pUVar6->Plane).Origin.field0_0x0._s_0.Z;
    pTVar12 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_e8,0);
    dVar1 = (pTVar12->field0_0x0)._s_0.Y;
    dVar2 = (pTVar12->field0_0x0)._s_0.X;
    dVar3 = (pTVar12->field0_0x0)._s_0.Z;
    pTVar12 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_d0,1);
    dVar2 = (dVar5 * dVar1 + dVar4 * dVar2 + dVar15 * dVar3) - (param_2->field0_0x0)._s_0.X;
    dVar1 = (dVar5 * (pTVar12->field0_0x0)._s_0.Y + dVar4 * (pTVar12->field0_0x0)._s_0.X +
            dVar15 * (pTVar12->field0_0x0)._s_0.Z) - (param_2->field0_0x0)._s_0.Y;
    dVar15 = atan2(dVar1,dVar2);
    dVar3 = __real_3ff0000000000000;
    *param_5 = dVar15;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar1 * dVar1 + dVar2 * dVar2;
    auVar18 = sqrtpd(unaff_XMM13,auVar18);
    dVar15 = auVar18._0_8_;
    if (dVar15 == 0.0) {
      dVar4 = 0.0;
    }
    else {
      dVar4 = dVar3 / dVar15;
      dVar3 = dVar4 * dVar2;
      dVar4 = dVar4 * dVar1;
    }
    if (param_1->ArrayNum == 3) {
      pFVar13 = (param_1->AllocatorInstance).Data + 0x30;
    }
    else {
      if (param_1->ArrayNum < 2) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar13 = (param_1->AllocatorInstance).Data + 0x18;
    }
    dVar9 = *(double *)pFVar13 - (this_00->Origin).field0_0x0._s_0.X;
    dVar10 = *(double *)(pFVar13 + 8) - (pUVar6->Plane).Origin.field0_0x0._s_0.Y;
    dVar8 = *(double *)(pFVar13 + 0x10) - (pUVar6->Plane).Origin.field0_0x0._s_0.Z;
    pTVar12 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_b8,0);
    dVar1 = (pTVar12->field0_0x0)._s_0.Y;
    dVar2 = (pTVar12->field0_0x0)._s_0.X;
    dVar5 = (pTVar12->field0_0x0)._s_0.Z;
    pTVar12 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_a0,1);
    dVar1 = ((dVar10 * (pTVar12->field0_0x0)._s_0.Y + dVar9 * (pTVar12->field0_0x0)._s_0.X +
             dVar8 * (pTVar12->field0_0x0)._s_0.Z) - (param_2->field0_0x0)._s_0.Y) * dVar3 +
            ((param_2->field0_0x0)._s_0.X - (dVar10 * dVar1 + dVar9 * dVar2 + dVar8 * dVar5)) *
            dVar4;
    if (dVar1 <= 0.0) {
      iVar14 = (0.0 <= dVar1) - 1;
    }
    uVar16 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    *param_4 = (double)iVar14;
    (param_3->field0_0x0)._s_0.X = dVar15;
    (param_3->field0_0x0)._s_0.Y = (double)CONCAT44(uVar17,uVar16);
  }
  return;
}

// GetPrivateStaticClass @ 14cc5c6b0

UClass * __cdecl UDrawPolygonTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPolygonTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DrawPolygonTool",
               &Z_Registration_Info_UClass_UDrawPolygonTool.InnerSingleton,
               StaticRegisterNativesUDrawPolygonTool,0x5c0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawPolygonTool>,
               InternalVTableHelperCtorCaller<UDrawPolygonTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPolygonTool.InnerSingleton;
}

// HasAccept @ 14cc5ea60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawPolygonTool::HasAccept(UDrawPolygonTool *this)

{
  return false;
}

// HasCancel @ 14cc5eac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawPolygonTool::HasCancel(UDrawPolygonTool *this)

{
  return false;
}

// IsInputSelectionValidOnOutput @ 14cc62490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawPolygonTool::IsInputSelectionValidOnOutput(UDrawPolygonTool *this)

{
  return (bool)(char)(this->SnapEngine).IgnoreTargets.Hash._padding_;
}

// OnBeginClickSequence @ 14cc65650

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
UDrawPolygonTool::OnBeginClickSequence(UDrawPolygonTool *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  TVector<double> local_28;
  
  pTVar2 = &this[-1].SnapEngine.PointHistory;
  (**(code **)((pTVar2->AllocatorInstance).Data + 0x3a0))(pTVar2);
  cVar4 = (**(code **)((pTVar2->AllocatorInstance).Data + 0x3b8))(pTVar2,param_1);
  if (cVar4 != '\0') {
    bVar5 = ToolSceneQueriesUtil::IsPointVisible((FViewCameraState *)&this->field_0x70,&local_28);
    if (bVar5) {
      (**(code **)((pTVar2->AllocatorInstance).Data + 0x3a8))(pTVar2);
      piVar1 = (int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x14);
      *(bool *)((longlong)&(this->PreviewVertex).field0_0x0 + 1) =
           *(char *)(*(longlong *)&this->field_0x18 + 0xb0) != '\0';
      iVar3 = *piVar1;
      *(undefined4 *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10) = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&(this->PreviewVertex).field0_0x0._s_0.Y,0,piVar1);
      }
      (**(code **)(*(longlong *)this + 0x38))(this,param_1);
      return;
    }
  }
  *(undefined1 *)&(this->PreviewVertex).field0_0x0 = 1;
  return;
}

// OnBeginSequencePreview @ 14cc66980

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
UDrawPolygonTool::OnBeginSequencePreview(UDrawPolygonTool *this,FInputDeviceRay *param_1)

{
  char cVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pTVar2 = &this[-1].SnapEngine.PointHistory;
  cVar1 = (**(code **)((pTVar2->AllocatorInstance).Data + 0x3b8))(pTVar2,param_1,&local_28);
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x50 = local_28;
    *(undefined8 *)&this->field_0x58 = uStack_20;
    *(undefined8 *)&this->field_0x60 = local_18;
  }
  return;
}

// OnNextSequenceClick @ 14cc67240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UDrawPolygonTool::OnNextSequenceClick(UDrawPolygonTool *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  FDrawPolygonStateChange *pFVar18;
  longlong lVar19;
  longlong lVar20;
  FText *pFVar21;
  int iVar22;
  FDrawPolygonStateChange *pFVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  FDrawPolygonStateChange *local_res8;
  FText local_68;
  TVector<double>_u_0 local_58 [2];
  
  pFVar6 = this[-1].SnapEngine.PointHistory.AllocatorInstance.Data;
  if ((this->SnapEngine).IgnoreTargets.Elements.field_0x18 != '\0') {
    (**(code **)(pFVar6 + 0x3d0))(&this[-1].SnapEngine.PointHistory);
    return false;
  }
  cVar13 = (**(code **)(pFVar6 + 0x3b8))(&this[-1].SnapEngine.PointHistory,param_1,local_58);
  if (cVar13 == '\0') {
    return true;
  }
  pFVar18 = ::operator_new(0x30);
  pdVar3 = &(this->PreviewVertex).field0_0x0._s_0.Y;
  if (pFVar18 == (FDrawPolygonStateChange *)0x0) {
    pFVar18 = (FDrawPolygonStateChange *)0x0;
  }
  else {
    pFVar18 = FDrawPolygonStateChange::FDrawPolygonStateChange
                        (pFVar18,*(int *)&(this->SnapEngine).IgnoreTargets.Hash.SecondaryData,
                         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)pdVar3,
                         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                         &this->field_0x30);
  }
  if (*(char *)((longlong)&(this->PreviewVertex).field0_0x0 + 1) == '\0') {
    if (0 < *(int *)&this->field_0x38) {
      uVar26 = *(int *)&this->field_0x38 - 1;
      uVar16 = 0;
      if ((int)uVar26 < *(int *)&this->field_0x38) {
        uVar16 = ~uVar26 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      bVar14 = ToolSceneQueriesUtil::PointSnapQuery
                         ((UInteractiveTool *)&this[-1].SnapEngine.PointHistory,
                          (TVector<double> *)
                          (*(longlong *)&this->field_0x30 + (longlong)(int)uVar26 * 0x18),
                          (TVector<double> *)&local_58[0]._s_0,0.0);
      if (bVar14) goto LAB_14cc67839;
    }
    if (*(char *)&this->TargetWorld == '\0') {
      if (((char)(this->SnapEngine)._padding_ == '\0') ||
         ((int)(this->SnapEngine)._padding_ != 0x3e9)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
    }
    else {
      iVar17 = *(int *)((longlong)&this->TargetWorld + 4);
      if (iVar17 < *(int *)&this->field_0x38 + -1) {
        uVar26 = iVar17 + 1;
        uVar16 = 0;
        if ((int)uVar26 < *(int *)&this->field_0x38) {
          uVar16 = ~uVar26 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        lVar19 = (longlong)(int)uVar26;
        lVar20 = *(longlong *)&this->field_0x30;
        dVar7 = (this->CameraState).Position.field0_0x0._s_0.X - *(double *)(lVar20 + lVar19 * 0x18)
        ;
        if (((((__real_bef4f8b580000000 < dVar7) && (dVar7 < __real_3ef4f8b580000000)) &&
             (dVar7 = (this->CameraState).Position.field0_0x0._s_0.Y -
                      *(double *)(lVar20 + 8 + lVar19 * 0x18), __real_bef4f8b580000000 < dVar7)) &&
            ((dVar7 < __real_3ef4f8b580000000 &&
             (dVar7 = (this->CameraState).Position.field0_0x0._s_0.Z -
                      *(double *)(lVar20 + 0x10 + lVar19 * 0x18), __real_bef4f8b580000000 < dVar7)))
            ) && (dVar7 < __real_3ef4f8b580000000)) {
          piVar1 = (int *)((longlong)&this->TargetWorld + 4);
          *piVar1 = *piVar1 + 1;
        }
      }
      iVar17 = *(int *)((longlong)&this->TargetWorld + 4);
      uVar25 = (ulonglong)iVar17;
      iVar22 = *(int *)&this->field_0x38;
      if (iVar17 < iVar22) {
        lVar20 = uVar25 * 0x18;
        do {
          uVar26 = (uint)uVar25;
          uVar16 = 0;
          if ((int)uVar26 < iVar22) {
            uVar16 = ~uVar26 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar15 = (*pcVar8)();
            return (bool)uVar15;
          }
          uVar24 = uVar26 - *(int *)((longlong)&this->TargetWorld + 4);
          puVar4 = (undefined8 *)(lVar20 + *(longlong *)&this->field_0x30);
          uVar9 = *puVar4;
          uVar10 = puVar4[1];
          uVar5 = *(undefined8 *)(lVar20 + 0x10 + *(longlong *)&this->field_0x30);
          uVar16 = 0;
          if ((int)uVar24 < *(int *)&this->field_0x38) {
            uVar16 = ~uVar24 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar15 = (*pcVar8)();
            return (bool)uVar15;
          }
          uVar25 = (ulonglong)(uVar26 + 1);
          lVar20 = lVar20 + 0x18;
          lVar19 = *(longlong *)&this->field_0x30;
          puVar4 = (undefined8 *)(lVar19 + (longlong)(int)uVar24 * 0x18);
          *puVar4 = uVar9;
          puVar4[1] = uVar10;
          *(undefined8 *)(lVar19 + 0x10 + (longlong)(int)uVar24 * 0x18) = uVar5;
          iVar22 = *(int *)&this->field_0x38;
        } while ((int)(uVar26 + 1) < iVar22);
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->field_0x30,
                 iVar22 - *(int *)((longlong)&this->TargetWorld + 4),Default);
      dVar11 = (this->CameraState).Position.field0_0x0._s_0.X;
      dVar12 = (this->CameraState).Position.field0_0x0._s_0.Y;
      dVar7 = (this->CameraState).Position.field0_0x0._s_0.Z;
      *(double *)&this->field_0x50 = dVar11;
      *(double *)&this->field_0x58 = dVar12;
      *(double *)&this->field_0x60 = dVar7;
      if ((*(int *)&this->field_0x38 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      pdVar3 = *(double **)&this->field_0x30;
      bVar14 = true;
      *pdVar3 = dVar11;
      pdVar3[1] = dVar12;
      pdVar3[2] = dVar7;
    }
LAB_14cc67779:
    pTVar2 = &this[-1].SnapEngine.PointHistory;
    lVar20 = (**(code **)(this[-1].SnapEngine.PointHistory.AllocatorInstance.Data + 0x2d8))(pTVar2);
    pcVar8 = *(code **)(*(longlong *)(lVar20 + 0x28) + 0x20);
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_68,L"UDrawPolygonTool",L"DrawPolyAddPoint",L"Add Point");
    pFVar23 = (FDrawPolygonStateChange *)0x0;
    local_res8 = pFVar18;
    (*pcVar8)(lVar20 + 0x28,pTVar2,&local_res8,pFVar21);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (!bVar14) {
      (**(code **)(this[-1].SnapEngine.PointHistory.AllocatorInstance.Data + 0x3b0))
                (&this[-1].SnapEngine.PointHistory,local_58);
      if ((*(char *)((longlong)&(this->PreviewVertex).field0_0x0 + 1) == '\0') &&
         (*(int *)&this->field_0x38 == 1)) {
        pcVar8 = *(code **)&((this->PreviewMesh).field0_0x0.DebugPtr)->field_0x10;
        if ((*(int *)&this->field_0x38 < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        (*pcVar8)(&this->PreviewMesh,*(undefined8 *)&this->field_0x30,0x3e9,1);
      }
      pTVar2 = &this[-1].SnapEngine.PointHistory;
      (**(code **)((pTVar2->AllocatorInstance).Data + 0x3a8))(pTVar2,local_58);
      return true;
    }
    pFVar6 = this[-1].SnapEngine.PointHistory.AllocatorInstance.Data;
    (this->CameraState).field_0x18 = 0;
    if (*(char *)(*(longlong *)&this->field_0x18 + 0xc1) != '\x02') {
      (**(code **)(pFVar6 + 0x3c0))(&this[-1].SnapEngine.PointHistory);
      UPreviewMesh::ClearPreview((UPreviewMesh *)(this->OutputTypeProperties).field0_0x0.DebugPtr);
      UPreviewMesh::SetVisible
                ((UPreviewMesh *)(this->OutputTypeProperties).field0_0x0.DebugPtr,false);
      bVar14 = false;
      goto LAB_14cc67861;
    }
    (**(code **)(pFVar6 + 0x3c8))();
    UPreviewMesh::ClearPreview((UPreviewMesh *)(this->OutputTypeProperties).field0_0x0.DebugPtr);
    UPreviewMesh::SetVisible((UPreviewMesh *)(this->OutputTypeProperties).field0_0x0.DebugPtr,true);
    pFVar18 = pFVar23;
  }
  else {
    iVar17 = *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10);
    if (iVar17 < 1) {
LAB_14cc6737e:
      if ((((TVector<double>_u_0 *)*pdVar3 <= local_58) &&
          (local_58 <
           (TVector<double>_u_0 *)*pdVar3 +
           *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x14))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      iVar17 = *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10);
      piVar1 = (int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x14);
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pdVar3,piVar1);
        *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10) = iVar17;
      }
      *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10) = iVar17 + 1;
      dVar7 = *pdVar3;
      pdVar3 = (double *)((longlong)dVar7 + (longlong)iVar17 * 0x18);
      *pdVar3 = (double)local_58[0]._0_8_;
      pdVar3[1] = (double)local_58[0]._8_8_;
      *(undefined8 *)((longlong)dVar7 + (longlong)iVar17 * 0x18 + 0x10) = local_58[0]._s_0.Z;
      cVar13 = *(char *)(*(longlong *)&this->field_0x18 + 0xb0);
      if ((cVar13 == '\x03') || (iVar17 = 2, cVar13 == '\x04')) {
        iVar17 = 3;
      }
      bVar14 = *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10) == iVar17;
      if (bVar14) {
        GenerateFixedPolygon
                  ((UDrawPolygonTool *)&this[-1].SnapEngine.PointHistory,
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   ((longlong)&(this->PreviewVertex).field0_0x0 + 8),
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   &this->field_0x30,
                   (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)&this->field_0x40);
      }
      goto LAB_14cc67779;
    }
    uVar26 = iVar17 - 1;
    uVar16 = 0;
    if ((int)uVar26 < *(int *)((longlong)&(this->PreviewVertex).field0_0x0 + 0x10)) {
      uVar16 = ~uVar26 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    bVar14 = ToolSceneQueriesUtil::PointSnapQuery
                       ((UInteractiveTool *)&this[-1].SnapEngine.PointHistory,
                        (TVector<double> *)((longlong)*pdVar3 + (longlong)(int)uVar26 * 0x18),
                        (TVector<double> *)&local_58[0]._s_0,0.0);
    if (!bVar14) goto LAB_14cc6737e;
  }
LAB_14cc67839:
  bVar14 = true;
  pFVar23 = pFVar18;
LAB_14cc67861:
  if (pFVar23 != (FDrawPolygonStateChange *)0x0) {
    (**(code **)(pFVar23->_padding_ + 0x48))(pFVar23,1);
  }
  return bVar14;
}

// OnNextSequencePreview @ 14cc67960

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
UDrawPolygonTool::OnNextSequencePreview(UDrawPolygonTool *this,FInputDeviceRay *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  char cVar2;
  undefined1 local_28 [32];
  
  this_00 = &this[-1].SnapEngine.PointHistory;
  if ((this->SnapEngine).IgnoreTargets.Elements.field_0x18 != '\0') {
    (**(code **)(**(longlong **)&(this->SnapEngine).IgnoreTargets.Elements.field_0x28 + 0x2f0))();
    *(undefined4 *)(*(longlong *)&this->field_0x18 + 0xc4) =
         *(undefined4 *)(*(longlong *)&(this->SnapEngine).IgnoreTargets.Elements.field_0x28 + 0x90);
    (this->SnapEngine).IgnoreTargets.Elements.field_0x20 = 1;
    return;
  }
  cVar2 = (**(code **)((this_00->AllocatorInstance).Data + 0x3b8))(this_00,param_1,local_28);
  if (cVar2 != '\0') {
    pFVar1 = (this_00->AllocatorInstance).Data;
    if (*(char *)((longlong)&(this->PreviewVertex).field0_0x0 + 1) != '\0') {
      (**(code **)(pFVar1 + 0x3a8))();
      (this->SnapEngine).IgnoreTargets.Elements.field_0x20 = 1;
      return;
    }
    (**(code **)(pFVar1 + 0x3a8))(this_00,local_28);
    UpdateSelfIntersection((UDrawPolygonTool *)this_00);
    if (2 < *(int *)&this->field_0x38) {
      (this->SnapEngine).IgnoreTargets.Elements.field_0x20 = 1;
    }
  }
  return;
}

// OnTerminateClickSequence @ 14cc69980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::OnTerminateClickSequence(UDrawPolygonTool *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cc6998a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1].SnapEngine.PointHistory.AllocatorInstance.Data + 0x3a0))();
  return;
}

// OnTick @ 14cc69ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::OnTick(UDrawPolygonTool *this,float param_1)

{
  UDrawPolygonToolSnapProperties *pUVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 local_58 [80];
  
  if ((this->SnapProperties).field0_0x0.DebugPtr != (UDrawPolygonToolSnapProperties *)0x0) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
    pcVar3 = (char *)(**(code **)(*plVar2 + 0x30))(plVar2,local_58);
    pUVar1 = (this->SnapProperties).field0_0x0.DebugPtr;
    if (pUVar1->bSnapToWorldGrid != (bool)*pcVar3) {
      pUVar1->bSnapToWorldGrid = (bool)*pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00014cc69b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x340))(this,(this->SnapProperties).field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// OnUpdateModifierState @ 14cc6c3c0

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
UDrawPolygonTool::OnUpdateModifierState(UDrawPolygonTool *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    *(bool *)&(this->CameraState).DPIScale = param_2;
  }
  return;
}

// RegisterActions @ 14cc6de60

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
UDrawPolygonTool::RegisterActions(UDrawPolygonTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_68;
  FText local_58;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  UDrawPolygonTool *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDrawPolygonTool::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDrawPolygonTool::RegisterActions'::__l2::<lambda_1>,void>::Call
  ;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UDrawPolygonTool",L"ToggleGizmoVisibilityTooltip",
                      L"Toggle visibility of the transformation gizmo");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UDrawPolygonTool",L"ToggleGizmoVisibilityUIName",L"Toggle Gizmo");
  ::FString::FString(&local_68,L"ToggleGizmoVisibility");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2712,&local_68,pFVar2,pFVar1,'\0',&EKeys::Invalid,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 14cc70df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall UDrawPolygonTool::Render(UDrawPolygonTool *this,IToolsContextRenderAPI *param_1)

{
  TVector<double> *pTVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  UPreviewMesh *pUVar9;
  UDrawPolygonToolStandardProperties *pUVar10;
  UConstructionPlaneMechanic *pUVar11;
  FScriptContainerElement *pFVar12;
  UPlaneDistanceFromHitMechanic *pUVar13;
  code *pcVar14;
  undefined1 auVar15 [12];
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  FColor FVar19;
  FColor FVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  FPrimitiveDrawInterface *pFVar24;
  longlong *plVar25;
  UMaterialInterface *pUVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  FColor_u_0 FVar31;
  uint uVar32;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  float fVar38;
  double dVar39;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar40 [16];
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_bc8 [32];
  byte bStack_b5f;
  byte bStack_b5e;
  byte bStack_b5d;
  byte local_b5c;
  byte bStack_b57;
  byte bStack_b56;
  byte bStack_b55;
  byte bStack_b53;
  byte bStack_b52;
  byte bStack_b51;
  uint local_b50;
  longlong local_b48;
  FColor_u_0 local_b40;
  longlong local_b38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b18;
  FColor_u_0 local_b08;
  uint local_b04;
  FColor_u_0 local_b00;
  UDrawPolygonTool *local_af8;
  float local_af0;
  float local_aec;
  float local_ae8;
  float local_ae4;
  float local_ae0;
  float local_adc;
  float local_ad8;
  float local_ad4;
  float local_ad0;
  float local_acc;
  float local_ac8;
  float local_ac4;
  float local_ac0;
  float local_abc;
  float local_ab8;
  float local_ab4;
  FLinearColor_u_0 local_ab0;
  float local_aa0;
  float local_a9c;
  float local_a98;
  float local_a94;
  FLinearColor_u_0 local_a90;
  float local_a80;
  float local_a7c;
  float local_a78;
  float local_a74;
  FLinearColor_u_0 local_a70;
  FLinearColor_u_0 local_a60;
  float local_a50;
  float local_a4c;
  float local_a48;
  float local_a44;
  float local_a40;
  float local_a3c;
  float local_a38;
  float local_a34;
  float local_a30;
  float local_a2c;
  float local_a28;
  float local_a24;
  float local_a20;
  float local_a1c;
  float local_a18;
  float local_a14;
  float local_a10;
  float local_a0c;
  float local_a08;
  float local_a04;
  float local_a00;
  float local_9fc;
  float local_9f8;
  float local_9f4;
  float local_9f0;
  float local_9ec;
  float local_9e8;
  float local_9e4;
  float local_9e0;
  float local_9dc;
  float local_9d8;
  float local_9d4;
  float local_9d0;
  float local_9cc;
  float local_9c8;
  float local_9c4;
  float local_9c0;
  float local_9bc;
  float local_9b8;
  float local_9b4;
  float local_9b0;
  float local_9ac;
  float local_9a8;
  float local_9a4;
  float local_9a0;
  float local_99c;
  float local_998;
  float local_994;
  IToolsContextRenderAPI *local_990;
  TVector<double>_u_0 local_988;
  TVector<double>_u_0 local_970;
  TVector<double>_u_0 local_958;
  double local_940;
  double dStack_938;
  double local_930;
  double dStack_928;
  TVector<double>_u_0 local_920;
  TVector<double>_u_0 local_908;
  TVector<double>_u_0 local_8f0;
  double local_8d8;
  TVector<double>_u_0 local_8d0;
  TVector<double>_u_0 local_8b8;
  double local_8a0;
  TVector<double>_u_0 local_898;
  TVector<double>_u_0 local_878;
  TQuat<double> local_858;
  float local_838;
  char local_82c;
  TVector<double>_u_0 local_818;
  TVector<double>_u_0 local_7f8;
  TVector<double>_u_0 local_7d8;
  double local_7c0;
  double dStack_7b8;
  double local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  TVector<double>_u_0 local_788;
  TVector<double>_u_0 local_768;
  TVector<double>_u_0 local_748;
  TVector<double>_u_0 local_728;
  TVector<double>_u_0 local_708;
  TVector<double>_u_0 local_6e8;
  double local_6d0;
  double dStack_6c8;
  double local_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  double local_670;
  double dStack_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  double local_628;
  double dStack_620;
  double local_618;
  double local_610;
  double dStack_608;
  double local_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  TVector<double>_u_0 local_490;
  double local_478;
  longlong local_470;
  longlong lStack_468;
  longlong local_460;
  longlong local_458;
  longlong lStack_450;
  longlong local_448;
  longlong local_440;
  longlong lStack_438;
  longlong local_430;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  TVector<double> local_410;
  TVector<double> local_3f8;
  TVector<double> local_3e0;
  TVector<double> local_3c8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double dStack_388;
  FDynamicMesh3 local_378;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  local_af8 = this;
  local_990 = param_1;
  pFVar24 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
  plVar25 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  plVar25 = (longlong *)(**(code **)(*plVar25 + 0x398))(plVar25);
  (**(code **)(*plVar25 + 0x18))(plVar25,&this->CameraState);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_878);
  fVar43 = local_838 * __real_3c360b61;
  if (this->bPreviewUpdatePending != false) {
    if (((1 < (this->PolygonVertices).ArrayNum) &&
        (pUVar9 = (this->PreviewMesh).field0_0x0.DebugPtr, pUVar9 != (UPreviewMesh *)0x0)) &&
       (bVar21 = UPreviewMesh::IsVisible(pUVar9), bVar21)) {
      local_958._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_958._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_958._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_930 = ___xmm_3ff00000000000000000000000000000;
      dStack_928 = _UNK_15061cbc8;
      local_940 = 0.0;
      dStack_938 = 0.0;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_378);
      pUVar10 = (this->PolygonProperties).field0_0x0.DebugPtr;
      if (pUVar10->ExtrudeMode == Flat) {
        fVar38 = 0.0;
      }
      else {
        fVar38 = pUVar10->ExtrudeHeight;
      }
      bVar21 = GeneratePolygonMesh(this,&this->PolygonVertices,&this->PolygonHolesVertices,
                                   &local_378,(TFrame3<double> *)&local_958._s_0,false,
                                   (double)fVar38,false);
      if (bVar21) {
        local_148.Rotation.ZW.m128d_f64[0] = local_930;
        local_148.Rotation.ZW.m128d_f64[1] = dStack_928;
        local_148.Translation.ZW.m128d_f64[0] = local_958._s_0.Z;
        local_148.Translation.ZW.m128d_f64[1] = 0.0;
        local_148.Rotation.XY.m128d_f64[0] = local_940;
        local_148.Rotation.XY.m128d_f64[1] = dStack_938;
        local_148.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_148.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_148.Translation.XY.m128d_f64[0] = local_958._s_0.X;
        local_148.Translation.XY.m128d_f64[1] = local_958._s_0.Y;
        local_148.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_148.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        UPreviewMesh::SetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_148);
        pUVar9 = (this->PreviewMesh).field0_0x0.DebugPtr;
        pUVar26 = (UMaterialInterface *)
                  FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                       WeakPtr);
        UPreviewMesh::SetMaterial(pUVar9,pUVar26);
        UPreviewMesh::EnableWireframe
                  ((this->PreviewMesh).field0_0x0.DebugPtr,
                   ((this->MaterialProperties).field0_0x0.DebugPtr)->bShowWireframe);
        UPreviewMesh::UpdatePreview
                  ((this->PreviewMesh).field0_0x0.DebugPtr,&local_378,FullUpdate,AllVertexAttribs);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_378);
    }
    this->bPreviewUpdatePending = false;
  }
  dVar18 = __real_3ff0000000000000;
  pTVar1 = &this->PreviewVertex;
  dVar39 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                     ((FViewCameraState *)&local_878._s_0,pTVar1,__real_3ff0000000000000);
  FVar31 = FColor::Orange.field0_0x0;
  FVar20 = FColor::Magenta;
  local_b40 = FColor::Yellow.field0_0x0;
  FVar19 = FColor::Green;
  local_b00 = FColor::Green.field0_0x0;
  local_b08 = FColor::Orange.field0_0x0;
  if ((this->bInInteractiveExtrude == false) &&
     (((char)(this->SnapEngine)._padding_ == '\0' || ((int)(this->SnapEngine)._padding_ != 0x3e9))))
  {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  ((this->PlaneMechanic).field0_0x0.DebugPtr)->bShowGrid = this->bInInteractiveExtrude == false;
  pUVar11 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar11 + 0x2c0))(pUVar11,param_1);
  if (this->bInFixedPolygonMode != false) {
    iVar7 = (this->FixedPolygonClickPoints).ArrayNum;
    if (0 < iVar7) {
      pFVar28 = (this->FixedPolygonClickPoints).AllocatorInstance.Data;
      local_b18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b18.ArrayNum = iVar7;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,0,&local_b18.AllocatorInstance,iVar7,&local_b18.ArrayMax);
      memcpy(local_b18.AllocatorInstance.Data,pFVar28,(longlong)iVar7 * 0x18);
      if (this->bInInteractiveExtrude == false) {
        if (((local_b18.AllocatorInstance.Data <= pTVar1) &&
            (pTVar1 < local_b18.AllocatorInstance.Data + (longlong)local_b18.ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (local_b18.ArrayNum == local_b18.ArrayMax) {
          local_b18.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_b18.AllocatorInstance,&local_b18.ArrayMax);
        }
        dVar3 = (this->PreviewVertex).field0_0x0._s_0.Y;
        *(double *)(local_b18.AllocatorInstance.Data + (longlong)local_b18.ArrayNum * 0x18) =
             (pTVar1->field0_0x0)._s_0.X;
        *(double *)(local_b18.AllocatorInstance.Data + (longlong)local_b18.ArrayNum * 0x18 + 8) =
             dVar3;
        *(double *)(local_b18.AllocatorInstance.Data + (longlong)local_b18.ArrayNum * 0x18 + 0x10) =
             (this->PreviewVertex).field0_0x0._s_0.Z;
        local_b18.ArrayNum = local_b18.ArrayNum + 1;
      }
      GenerateFixedPolygon(this,&local_b18,&this->PolygonVertices,&this->PolygonHolesVertices);
      if (local_b18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b18.AllocatorInstance.Data);
      }
    }
  }
  fVar44 = __real_41700000;
  fVar38 = __real_3b808081;
  bVar22 = this->bInFixedPolygonMode;
  bStack_b5d = local_b40._s_0.A;
  bStack_b5e = local_b40._s_0.R;
  bStack_b5f = local_b40._s_0.G;
  iVar7 = (this->PolygonVertices).ArrayNum;
  local_b5c = local_b40._s_0.B;
  if ((char)(this->SnapEngine)._padding_ != '\0') {
    local_460 = (this->SnapEngine)._padding_;
    local_ae0 = FLinearColor::sRGBToLinearTable[bStack_b5e];
    local_adc = FLinearColor::sRGBToLinearTable[bStack_b5f];
    local_ad8 = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
    local_470 = (this->SnapEngine)._padding_;
    lStack_468 = (this->SnapEngine)._padding_;
    fVar42 = (float)bStack_b5d * __real_3b808081;
    local_ad4 = fVar42;
    (**(code **)(pFVar24->_padding_ + 0x40))(pFVar24,&local_470,&local_ae0,fVar43 * __real_41200000)
    ;
    local_448 = (this->SnapEngine)._padding_;
    local_ad0 = FLinearColor::sRGBToLinearTable[bStack_b5e];
    local_acc = FLinearColor::sRGBToLinearTable[bStack_b5f];
    local_ac8 = FLinearColor::sRGBToLinearTable[local_b5c];
    local_458 = (this->SnapEngine)._padding_;
    lStack_450 = (this->SnapEngine)._padding_;
    fVar45 = (float)bStack_b5d * fVar38;
    local_ac4 = fVar45;
    (**(code **)(pFVar24->_padding_ + 0x40))(pFVar24,&local_458,&local_ad0,fVar43 * fVar44);
    local_ac0 = FLinearColor::sRGBToLinearTable[bStack_b5e];
    local_abc = FLinearColor::sRGBToLinearTable[bStack_b5f];
    local_ab8 = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
    local_440 = (this->SnapEngine)._padding_;
    lStack_438 = (this->SnapEngine)._padding_;
    local_430 = (this->SnapEngine)._padding_;
    local_428 = (this->SnapEngine)._padding_;
    lStack_420 = (this->SnapEngine)._padding_;
    local_418 = (this->SnapEngine)._padding_;
    local_ab4 = fVar42;
    (**(code **)(pFVar24->_padding_ + 0x30))(pFVar24,&local_428,&local_440,&local_ac0);
    if ((char)(this->SnapEngine)._padding_ != '\0') {
      iVar8 = (int)(this->SnapEngine)._padding_;
      if (iVar8 == 0x3ea) {
        if ((this->LastSnapGeometry).PointCount == 1) {
          local_ab0._s_0.B = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
          local_818._s_0.X = 0.0;
          local_818._s_0.Y = 0.0;
          local_818._s_0.Z = dVar18;
          local_ab0._s_0.R = FLinearColor::sRGBToLinearTable[bStack_b5e];
          local_ab0._s_0.G = FLinearColor::sRGBToLinearTable[bStack_b5f];
          local_ab0._s_0.A = fVar45;
          UE::Math::TQuat<double>::RotateVector
                    (&local_858,&local_3c8,(TVector<double> *)&local_818._s_0);
          local_7f8._s_0.X = ___xmm_3ff00000000000000000000000000000;
          local_7f8._s_0.Y = _UNK_15061cbc8;
          local_7f8._s_0.Z = 0.0;
          UE::Math::TQuat<double>::RotateVector
                    (&local_858,&local_410,(TVector<double> *)&local_7f8._s_0);
          local_7d8._s_0.X = (this->LastSnapGeometry).Points[0].field0_0x0._s_0.X;
          local_7d8._s_0.Y = (this->LastSnapGeometry).Points[0].field0_0x0._s_0.Y;
          local_7d8._s_0.Z = (this->LastSnapGeometry).Points[0].field0_0x0._s_0.Z;
          DrawCircle(pFVar24,(TVector<double> *)&local_7d8._s_0,&local_410,&local_3c8,
                     (FLinearColor *)&local_ab0._s_0,(double)(float)dVar39,0x20,'\x01',fVar43,0.0,
                     true);
        }
        else {
          local_a98 = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
          local_7c0 = (this->LastSnapGeometry).Points[1].field0_0x0._s_0.X;
          dStack_7b8 = (this->LastSnapGeometry).Points[1].field0_0x0._s_0.Y;
          local_7b0 = (this->LastSnapGeometry).Points[1].field0_0x0._s_0.Z;
          local_7a8 = (this->LastSnapGeometry).Points[0].field0_0x0._s_0.X;
          dStack_7a0 = (this->LastSnapGeometry).Points[0].field0_0x0._s_0.Y;
          local_798 = (this->LastSnapGeometry).Points[0].field0_0x0._s_0.Z;
          local_aa0 = FLinearColor::sRGBToLinearTable[bStack_b5e];
          local_a9c = FLinearColor::sRGBToLinearTable[bStack_b5f];
          local_a94 = fVar45;
          (**(code **)(pFVar24->_padding_ + 0x30))(pFVar24,&local_7a8,&local_7c0,&local_aa0);
        }
      }
      else if (iVar8 == 0x3eb) {
        local_788._s_0.Z = dVar18;
        local_a90._s_0.R = FLinearColor::sRGBToLinearTable[bStack_b5e];
        local_a90._s_0.G = FLinearColor::sRGBToLinearTable[bStack_b5f];
        local_a90._s_0.B = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
        local_788._0_16_ = ZEXT416(0);
        local_a90._s_0.A = fVar45;
        UE::Math::TQuat<double>::RotateVector
                  (&local_858,&local_3f8,(TVector<double> *)&local_788._s_0);
        local_768._s_0.X = ___xmm_3ff00000000000000000000000000000;
        local_768._s_0.Y = _UNK_15061cbc8;
        local_768._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_858,&local_3e0,(TVector<double> *)&local_768._s_0);
        local_748._s_0.X = (this->LastGridSnapPoint).field0_0x0._s_0.X;
        local_748._s_0.Y = (this->LastGridSnapPoint).field0_0x0._s_0.Y;
        local_748._s_0.Z = (this->LastGridSnapPoint).field0_0x0._s_0.Z;
        DrawCircle(pFVar24,(TVector<double> *)&local_748._s_0,&local_3e0,&local_3f8,
                   (FLinearColor *)&local_a90._s_0,(double)(float)dVar39,4,'\x01',fVar43,0.0,true);
      }
    }
    if (((char)(this->SnapEngine)._padding_ != '\0') &&
       (*(char *)((longlong)&(this->SnapEngine)._padding_ + 1) != '\0')) {
      local_3a0 = (double)(this->SnapEngine)._padding_;
      dStack_398 = (double)(this->SnapEngine)._padding_;
      local_3b0 = (double)(this->SnapEngine)._padding_;
      dStack_3a8 = (double)(this->SnapEngine)._padding_;
      local_390 = (double)(this->SnapEngine)._padding_;
      dStack_388 = (double)(this->SnapEngine)._padding_;
      local_970._s_0.X = local_3b0 - dStack_398 * __real_40f869f000000000;
      local_988._s_0.X = dStack_398 * __real_40f869f000000000 + local_3b0;
      local_988._s_0.Y = local_390 * __real_40f869f000000000 + dStack_3a8;
      local_970._s_0.Y = dStack_3a8 - local_390 * __real_40f869f000000000;
      local_970._s_0.Z = local_3a0 - dStack_388 * __real_40f869f000000000;
      local_988._s_0.Z = dStack_388 * __real_40f869f000000000 + local_3a0;
      if (local_82c == '\0') {
        local_728._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_728._s_0.Y = _UNK_150689518;
        local_728._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_858,(TVector<double> *)&local_898._s_0,(TVector<double> *)&local_728._s_0)
        ;
        local_708._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_708._s_0.Y = _UNK_150689518;
        local_708._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_858,(TVector<double> *)&local_6e8._s_0,(TVector<double> *)&local_708._s_0)
        ;
        auVar15._4_8_ = extraout_XMM0_Qb;
        auVar15._0_4_ = local_6e8._4_4_;
        auVar40._0_8_ = auVar15._0_8_ << 0x20;
        auVar40._8_4_ = local_6e8._8_4_;
        auVar40._12_4_ = local_6e8._12_4_;
        local_490._0_16_ = local_6e8._0_16_;
        local_490._s_0.Z = local_6e8._s_0.Z;
        local_478 = (local_878._s_0.Y + local_898._s_0.Y) * auVar40._8_8_ +
                    (local_878._s_0.X + local_898._s_0.X) * local_6e8._0_8_ +
                    (local_878._s_0.Z + local_898._s_0.Z) * local_6e8._s_0.Z;
        UE::Geometry::TPlane3<double>::ClipSegment
                  ((TPlane3<double> *)&local_490._s_0,(TVector<double> *)&local_970._s_0,
                   (TVector<double> *)&local_988._s_0);
      }
      local_6d0 = local_988._s_0.X;
      dStack_6c8 = local_988._s_0.Y;
      local_a80 = FLinearColor::sRGBToLinearTable[bStack_b5e];
      local_6b8 = local_970._s_0.X;
      dStack_6b0 = local_970._s_0.Y;
      local_a7c = FLinearColor::sRGBToLinearTable[bStack_b5f];
      local_a78 = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
      local_6c0 = local_988._s_0.Z;
      local_6a8 = local_970._s_0.Z;
      local_a74 = fVar45;
      (**(code **)(pFVar24->_padding_ + 0x30))(pFVar24,&local_6b8,&local_6d0,&local_a80);
      fVar44 = __real_41700000;
      if (((char)(this->SnapEngine)._padding_ != '\0') &&
         ((char)(this->SnapEngine)._padding_ != '\0')) {
        pTVar33 = &this->FixedPolygonClickPoints;
        uVar30 = *(uint *)((longlong)&(this->SnapEngine)._padding_ + 4);
        lVar35 = (longlong)(int)uVar30;
        if (this->bInFixedPolygonMode == false) {
          pTVar33 = &this->PolygonVertices;
        }
        pUVar11 = (this->PlaneMechanic).field0_0x0.DebugPtr;
        dVar3 = (pUVar11->Plane).Rotation.field0_0x0._s_0.Y;
        dVar4 = (pUVar11->Plane).Rotation.field0_0x0._s_0.X;
        dVar41 = (pUVar11->Plane).Rotation.field0_0x0._s_0.Z;
        dVar5 = (pUVar11->Plane).Rotation.field0_0x0._s_0.W;
        dVar41 = dVar41 + dVar41;
        local_920._s_0.X = dVar5 * (dVar3 + dVar3) + dVar41 * dVar4;
        local_a70._s_0.R = FLinearColor::sRGBToLinearTable[bStack_b5e];
        local_920._s_0.Y = dVar41 * dVar3 - dVar5 * (dVar4 + dVar4);
        local_a70._s_0.G = FLinearColor::sRGBToLinearTable[bStack_b5f];
        local_920._s_0.Z = dVar18 - ((dVar3 + dVar3) * dVar3 + (dVar4 + dVar4) * dVar4);
        local_a70._s_0.B = FLinearColor::sRGBToLinearTable[local_b5c];
        uVar32 = 0;
        if ((int)(uVar30 + 1) < pTVar33->ArrayNum) {
          uVar32 = ~(uVar30 + 1) >> 0x1f;
        }
        local_a70._s_0.A = (float)bStack_b5d * fVar38;
        if ((uVar32 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar28 = (pTVar33->AllocatorInstance).Data;
        lVar27 = (longlong)(int)(uVar30 + 1);
        uVar32 = 0;
        if ((int)uVar30 < pTVar33->ArrayNum) {
          uVar32 = ~uVar30 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        dVar18 = __real_3fe0000000000000;
        pFVar12 = (pTVar33->AllocatorInstance).Data;
        local_8d8 = 0.0;
        local_8f0._s_0.X =
             *(double *)(pFVar28 + lVar27 * 0x18) - *(double *)(pFVar12 + lVar35 * 0x18);
        local_8f0._s_0.Z =
             *(double *)(pFVar28 + lVar27 * 0x18 + 0x10) -
             *(double *)(pFVar12 + lVar35 * 0x18 + 0x10);
        local_908._s_0.X =
             (*(double *)(pFVar12 + lVar35 * 0x18) + *(double *)(pFVar28 + lVar27 * 0x18)) *
             __real_3fe0000000000000;
        local_908._s_0.Z =
             (*(double *)(pFVar12 + lVar35 * 0x18 + 0x10) +
             *(double *)(pFVar28 + lVar27 * 0x18 + 0x10)) * __real_3fe0000000000000;
        local_8f0._s_0.Y =
             *(double *)(pFVar28 + lVar27 * 0x18 + 8) - *(double *)(pFVar12 + lVar35 * 0x18 + 8);
        local_908._s_0.Y =
             (*(double *)(pFVar12 + lVar35 * 0x18 + 8) + *(double *)(pFVar28 + lVar27 * 0x18 + 8)) *
             __real_3fe0000000000000;
        local_8d8 = UE::Geometry::Normalize<double>((TVector<double> *)&local_8f0._s_0,0.0);
        fVar44 = (float)dVar39 * __real_3f400000;
        local_8d8 = local_8d8 * dVar18;
        DrawEdgeTicks(pFVar24,(TSegment3<double> *)&local_908._s_0,fVar44,
                      (TVector<double> *)&local_920._s_0,(FLinearColor *)&local_a70._s_0,'\x01',
                      fVar43,true);
        local_a60._s_0.R = FLinearColor::sRGBToLinearTable[bStack_b5e];
        uVar29 = pTVar33->ArrayNum - 1;
        local_a60._s_0.G = FLinearColor::sRGBToLinearTable[bStack_b5f];
        local_a60._s_0.B = FLinearColor::sRGBToLinearTable[local_b5c];
        uVar32 = 0;
        if ((int)uVar29 < pTVar33->ArrayNum) {
          uVar32 = ~uVar29 >> 0x1f;
        }
        local_a60._s_0.A = (float)bStack_b5d * fVar38;
        if ((uVar32 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        dVar39 = (this->PreviewVertex).field0_0x0._s_0.X;
        dVar3 = (this->PreviewVertex).field0_0x0._s_0.Y;
        dVar4 = (this->PreviewVertex).field0_0x0._s_0.Z;
        lVar27 = (longlong)(int)uVar29;
        local_8a0 = 0.0;
        pFVar28 = (pTVar33->AllocatorInstance).Data;
        local_8b8._s_0.X = dVar39 - *(double *)(pFVar28 + lVar27 * 0x18);
        local_8b8._s_0.Y = dVar3 - *(double *)(pFVar28 + lVar27 * 0x18 + 8);
        local_8d0._s_0.X = (*(double *)(pFVar28 + lVar27 * 0x18) + dVar39) * dVar18;
        local_8d0._s_0.Y = (*(double *)(pFVar28 + lVar27 * 0x18 + 8) + dVar3) * dVar18;
        local_8b8._s_0.Z = dVar4 - *(double *)(pFVar28 + lVar27 * 0x18 + 0x10);
        local_8d0._s_0.Z = (*(double *)(pFVar28 + lVar27 * 0x18 + 0x10) + dVar4) * dVar18;
        local_8a0 = UE::Geometry::Normalize<double>((TVector<double> *)&local_8b8._s_0,0.0);
        local_8a0 = local_8a0 * dVar18;
        DrawEdgeTicks(pFVar24,(TSegment3<double> *)&local_8d0._s_0,fVar44,
                      (TVector<double> *)&local_920._s_0,(FLinearColor *)&local_a60._s_0,'\x01',
                      fVar43,true);
        pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
        local_a50 = FLinearColor::sRGBToLinearTable[bStack_b5e];
        local_a4c = FLinearColor::sRGBToLinearTable[bStack_b5f];
        local_a48 = FLinearColor::sRGBToLinearTable[local_b5c];
        uVar32 = 0;
        if ((int)(uVar30 + 1) < pTVar33->ArrayNum) {
          uVar32 = ~(uVar30 + 1) >> 0x1f;
        }
        local_a44 = (float)bStack_b5d * fVar38;
        if ((uVar32 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (pTVar33->AllocatorInstance).Data;
        pFVar28 = pFVar12 + (longlong)(int)(uVar30 + 1) * 0x18;
        local_6a0 = *(undefined8 *)pFVar28;
        uStack_698 = *(undefined8 *)(pFVar28 + 8);
        local_690 = *(undefined8 *)(pFVar12 + (longlong)(int)(uVar30 + 1) * 0x18 + 0x10);
        uVar32 = 0;
        if ((int)uVar30 < pTVar33->ArrayNum) {
          uVar32 = ~uVar30 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (pTVar33->AllocatorInstance).Data;
        pFVar28 = pFVar12 + lVar35 * 0x18;
        local_688 = *(undefined8 *)pFVar28;
        uStack_680 = *(undefined8 *)(pFVar28 + 8);
        local_678 = *(undefined8 *)(pFVar12 + lVar35 * 0x18 + 0x10);
        (*pcVar14)(pFVar24,&local_688,&local_6a0,&local_a50);
        fVar44 = __real_41700000;
      }
    }
  }
  if (this->bHaveSurfaceHit != false) {
    local_660 = (this->SurfaceHitPoint).field0_0x0._s_0.Z;
    uVar36 = (ulonglong)bStack_b5e;
    local_a40 = FLinearColor::sRGBToLinearTable[uVar36];
    uVar34 = (ulonglong)bStack_b5f;
    local_a3c = FLinearColor::sRGBToLinearTable[uVar34];
    local_a38 = FLinearColor::sRGBToLinearTable[local_b5c];
    local_670 = (this->SurfaceHitPoint).field0_0x0._s_0.X;
    dStack_668 = (this->SurfaceHitPoint).field0_0x0._s_0.Y;
    fVar42 = (float)bStack_b5d * fVar38;
    local_a34 = fVar42;
    (**(code **)(pFVar24->_padding_ + 0x40))(pFVar24,&local_670,&local_a40,fVar43 * __real_41200000)
    ;
    if (((this->SnapProperties).field0_0x0.DebugPtr)->SnapToSurfacesOffset != 0.0) {
      local_a30 = FLinearColor::sRGBToLinearTable[(byte)local_b08._2_1_];
      local_a2c = FLinearColor::sRGBToLinearTable[(byte)local_b08._1_1_];
      local_a28 = FLinearColor::sRGBToLinearTable[FVar31.Bits & 0xff];
      local_658 = (this->SurfaceOffsetPoint).field0_0x0._s_0.X;
      dStack_650 = (this->SurfaceOffsetPoint).field0_0x0._s_0.Y;
      local_a24 = (float)(local_b08.Bits >> 0x18) * fVar38;
      local_648 = (this->SurfaceOffsetPoint).field0_0x0._s_0.Z;
      (**(code **)(pFVar24->_padding_ + 0x40))(pFVar24,&local_658,&local_a30,fVar43 * fVar44);
      local_a20 = FLinearColor::sRGBToLinearTable[uVar36];
      local_a1c = FLinearColor::sRGBToLinearTable[uVar34];
      local_630 = (this->SurfaceHitPoint).field0_0x0._s_0.Z;
      local_a18 = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
      local_640 = (this->SurfaceHitPoint).field0_0x0._s_0.X;
      dStack_638 = (this->SurfaceHitPoint).field0_0x0._s_0.Y;
      local_628 = (this->SurfaceOffsetPoint).field0_0x0._s_0.X;
      dStack_620 = (this->SurfaceOffsetPoint).field0_0x0._s_0.Y;
      local_618 = (this->SurfaceOffsetPoint).field0_0x0._s_0.Z;
      local_a14 = fVar42;
      (**(code **)(pFVar24->_padding_ + 0x30))(pFVar24,&local_628,&local_640,&local_a20);
    }
    local_a10 = FLinearColor::sRGBToLinearTable[uVar36];
    local_a0c = FLinearColor::sRGBToLinearTable[uVar34];
    local_600 = (this->PreviewVertex).field0_0x0._s_0.Z;
    local_5e8 = (this->SurfaceOffsetPoint).field0_0x0._s_0.Z;
    local_a08 = FLinearColor::sRGBToLinearTable[local_b40.Bits & 0xff];
    local_610 = (this->PreviewVertex).field0_0x0._s_0.X;
    dStack_608 = (this->PreviewVertex).field0_0x0._s_0.Y;
    local_5f8 = (this->SurfaceOffsetPoint).field0_0x0._s_0.X;
    dStack_5f0 = (this->SurfaceOffsetPoint).field0_0x0._s_0.Y;
    local_a04 = fVar42;
    (**(code **)(pFVar24->_padding_ + 0x30))(pFVar24,&local_5f8,&local_610,&local_a10);
  }
  if (0 < (this->PolygonVertices).ArrayNum) {
    if (bVar21 || bVar22 != false) {
      pFVar28 = (this->PolygonVertices).AllocatorInstance.Data;
      FVar31 = local_b40;
    }
    else {
      pFVar28 = (FScriptContainerElement *)&this->PreviewVertex;
      local_b40 = FVar19.field0_0x0;
      if (this->bHaveSelfIntersection != false) {
        FVar31 = FVar20.field0_0x0;
        local_b40 = FVar20.field0_0x0;
      }
    }
    uVar16 = *(undefined8 *)&pFVar28->field_0x0;
    uVar17 = *(undefined8 *)(pFVar28 + 8);
    uVar6 = *(undefined8 *)(pFVar28 + 0x10);
    bStack_b57 = FVar31._s_0.G;
    bStack_b56 = FVar31._s_0.R;
    if (0 < iVar7 + -1) {
      lVar35 = 0;
      uVar30 = 0;
      do {
        pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
        local_a00 = FLinearColor::sRGBToLinearTable[bStack_b56];
        local_9fc = FLinearColor::sRGBToLinearTable[bStack_b57];
        local_9f8 = FLinearColor::sRGBToLinearTable[FVar31.Bits & 0xff];
        uVar32 = uVar30 + 1;
        uVar29 = 0;
        if ((int)uVar32 < (this->PolygonVertices).ArrayNum) {
          uVar29 = ~uVar32 >> 0x1f;
        }
        local_9f4 = (float)(FVar31.Bits >> 0x18) * fVar38;
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (this->PolygonVertices).AllocatorInstance.Data;
        pFVar28 = pFVar12 + lVar35 + 0x18;
        local_5e0 = *(undefined8 *)pFVar28;
        uStack_5d8 = *(undefined8 *)(pFVar28 + 8);
        local_5d0 = *(undefined8 *)(pFVar12 + lVar35 + 0x28);
        uVar29 = 0;
        if ((int)uVar30 < (this->PolygonVertices).ArrayNum) {
          uVar29 = ~uVar30 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (this->PolygonVertices).AllocatorInstance.Data;
        pFVar28 = pFVar12 + lVar35;
        local_5c8 = *(undefined8 *)pFVar28;
        uStack_5c0 = *(undefined8 *)(pFVar28 + 8);
        local_5b8 = *(undefined8 *)(pFVar12 + lVar35 + 0x10);
        (*pcVar14)(pFVar24,&local_5c8,&local_5e0,&local_a00);
        lVar35 = lVar35 + 0x18;
        uVar30 = uVar32;
      } while ((int)uVar32 < iVar7 + -1);
    }
    uVar32 = iVar7 - 1;
    pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
    bStack_b52 = local_b40._s_0.R;
    local_9f0 = FLinearColor::sRGBToLinearTable[bStack_b52];
    bStack_b53 = local_b40._s_0.G;
    local_9ec = FLinearColor::sRGBToLinearTable[bStack_b53];
    local_9e8 = FLinearColor::sRGBToLinearTable[(byte)local_b40._0_1_];
    bStack_b51 = local_b40._s_0.A;
    uVar30 = 0;
    if ((int)uVar32 < (this->PolygonVertices).ArrayNum) {
      uVar30 = ~uVar32 >> 0x1f;
    }
    local_9e4 = (float)bStack_b51 * fVar38;
    local_5b0 = uVar16;
    uStack_5a8 = uVar17;
    local_5a0 = uVar6;
    if ((uVar30 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar12 = (this->PolygonVertices).AllocatorInstance.Data;
    pFVar28 = pFVar12 + (longlong)(int)uVar32 * 0x18;
    local_598 = *(undefined8 *)pFVar28;
    uStack_590 = *(undefined8 *)(pFVar28 + 8);
    local_588 = *(undefined8 *)(pFVar12 + (longlong)(int)uVar32 * 0x18 + 0x10);
    (*pcVar14)(pFVar24,&local_598,&local_5b0,&local_9f0);
    uVar30 = 0;
    bStack_b55 = FVar31._s_0.A;
    if (0 < (this->PolygonHolesVertices).ArrayNum) {
      lVar35 = 0;
      do {
        uVar32 = 0;
        if ((int)uVar30 < (this->PolygonHolesVertices).ArrayNum) {
          uVar32 = ~uVar30 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar28 = (this->PolygonHolesVertices).AllocatorInstance.Data;
        iVar8 = *(int *)(pFVar28 + lVar35 + 8);
        local_b38 = (longlong)iVar8;
        local_b04 = iVar8 - 1;
        if (0 < iVar8) {
          lVar27 = (longlong)(int)local_b04 * 0x18;
          lVar37 = 0;
          uVar32 = 0;
          do {
            uVar29 = uVar32;
            pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
            local_9e0 = FLinearColor::sRGBToLinearTable[bStack_b56];
            local_9dc = FLinearColor::sRGBToLinearTable[bStack_b57];
            local_9d8 = FLinearColor::sRGBToLinearTable[FVar31.Bits & 0xff];
            uVar32 = 0;
            if ((int)uVar29 < *(int *)(pFVar28 + lVar35 + 8)) {
              uVar32 = ~uVar29 >> 0x1f;
            }
            local_9d4 = (float)bStack_b55 * fVar38;
            if ((uVar32 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            puVar2 = (undefined8 *)(lVar37 + *(longlong *)(pFVar28 + lVar35));
            local_580 = *puVar2;
            uStack_578 = puVar2[1];
            local_570 = *(undefined8 *)(lVar37 + 0x10 + *(longlong *)(pFVar28 + lVar35));
            uVar32 = 0;
            if ((int)local_b04 < *(int *)(pFVar28 + lVar35 + 8)) {
              uVar32 = ~local_b04 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            puVar2 = (undefined8 *)(*(longlong *)(pFVar28 + lVar35) + lVar27);
            local_568 = *puVar2;
            uStack_560 = puVar2[1];
            local_558 = *(undefined8 *)(*(longlong *)(pFVar28 + lVar35) + 0x10 + lVar27);
            (*pcVar14)(pFVar24,&local_568,&local_580,&local_9e0);
            local_b38 = local_b38 + -1;
            this = local_af8;
            lVar27 = lVar37;
            lVar37 = lVar37 + 0x18;
            uVar32 = uVar29 + 1;
            local_b04 = uVar29;
          } while (local_b38 != 0);
        }
        lVar35 = lVar35 + 0x10;
        uVar30 = uVar30 + 1;
      } while ((int)uVar30 < (this->PolygonHolesVertices).ArrayNum);
    }
    if (0 < iVar7 + -1) {
      lVar35 = 0;
      uVar30 = 0;
      do {
        pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
        local_9d0 = FLinearColor::sRGBToLinearTable[bStack_b56];
        local_9cc = FLinearColor::sRGBToLinearTable[bStack_b57];
        local_9c8 = FLinearColor::sRGBToLinearTable[FVar31.Bits & 0xff];
        uVar32 = uVar30 + 1;
        uVar29 = 0;
        if ((int)uVar32 < (this->PolygonVertices).ArrayNum) {
          uVar29 = ~uVar32 >> 0x1f;
        }
        local_9c4 = (float)bStack_b55 * fVar38;
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (this->PolygonVertices).AllocatorInstance.Data;
        pFVar28 = pFVar12 + lVar35 + 0x18;
        local_550 = *(undefined8 *)pFVar28;
        uStack_548 = *(undefined8 *)(pFVar28 + 8);
        local_540 = *(undefined8 *)(pFVar12 + lVar35 + 0x28);
        uVar29 = 0;
        if ((int)uVar30 < (this->PolygonVertices).ArrayNum) {
          uVar29 = ~uVar30 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar12 = (this->PolygonVertices).AllocatorInstance.Data;
        pFVar28 = pFVar12 + lVar35;
        local_538 = *(undefined8 *)pFVar28;
        uStack_530 = *(undefined8 *)(pFVar28 + 8);
        local_528 = *(undefined8 *)(pFVar12 + lVar35 + 0x10);
        (*pcVar14)(pFVar24,&local_538,&local_550,&local_9d0);
        lVar35 = lVar35 + 0x18;
        uVar30 = uVar32;
      } while ((int)uVar32 < iVar7 + -1);
    }
    uVar32 = iVar7 - 1;
    pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
    local_9c0 = FLinearColor::sRGBToLinearTable[bStack_b52];
    local_9bc = FLinearColor::sRGBToLinearTable[bStack_b53];
    local_9b8 = FLinearColor::sRGBToLinearTable[(byte)local_b40._0_1_];
    uVar30 = 0;
    if ((int)uVar32 < (this->PolygonVertices).ArrayNum) {
      uVar30 = ~uVar32 >> 0x1f;
    }
    local_9b4 = (float)bStack_b51 * fVar38;
    local_520 = uVar16;
    uStack_518 = uVar17;
    local_510 = uVar6;
    if ((uVar30 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar12 = (this->PolygonVertices).AllocatorInstance.Data;
    pFVar28 = pFVar12 + (longlong)(int)uVar32 * 0x18;
    local_508 = *(undefined8 *)pFVar28;
    uStack_500 = *(undefined8 *)(pFVar28 + 8);
    local_4f8 = *(undefined8 *)(pFVar12 + (longlong)(int)uVar32 * 0x18 + 0x10);
    (*pcVar14)(pFVar24,&local_508,&local_520,&local_9c0);
    local_b50 = 0;
    if (0 < (this->PolygonHolesVertices).ArrayNum) {
      lVar35 = 0;
      do {
        uVar30 = 0;
        if ((int)local_b50 < (this->PolygonHolesVertices).ArrayNum) {
          uVar30 = ~local_b50 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar28 = (this->PolygonHolesVertices).AllocatorInstance.Data;
        iVar7 = *(int *)(pFVar28 + lVar35 + 8);
        local_b48 = (longlong)iVar7;
        if (0 < iVar7) {
          lVar27 = 0;
          uVar30 = 0;
          uVar32 = iVar7 - 1U;
          local_b38 = (longlong)(int)(iVar7 - 1U) * 0x18;
          do {
            uVar29 = uVar30;
            lVar37 = lVar27;
            pcVar14 = *(code **)(pFVar24->_padding_ + 0x30);
            local_9b0 = FLinearColor::sRGBToLinearTable[bStack_b56];
            local_9ac = FLinearColor::sRGBToLinearTable[bStack_b57];
            local_9a8 = FLinearColor::sRGBToLinearTable[FVar31.Bits & 0xff];
            uVar30 = 0;
            if ((int)uVar29 < *(int *)(pFVar28 + lVar35 + 8)) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            local_9a4 = (float)bStack_b55 * fVar38;
            if ((uVar30 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            puVar2 = (undefined8 *)(*(longlong *)(pFVar28 + lVar35) + lVar37);
            local_4f0 = *puVar2;
            uStack_4e8 = puVar2[1];
            local_4e0 = *(undefined8 *)(*(longlong *)(pFVar28 + lVar35) + 0x10 + lVar37);
            uVar30 = 0;
            if ((int)uVar32 < *(int *)(pFVar28 + lVar35 + 8)) {
              uVar30 = ~uVar32 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            puVar2 = (undefined8 *)(*(longlong *)(pFVar28 + lVar35) + local_b38);
            local_4d8 = *puVar2;
            uStack_4d0 = puVar2[1];
            local_4c8 = *(undefined8 *)(*(longlong *)(pFVar28 + lVar35) + 0x10 + local_b38);
            (*pcVar14)(pFVar24,&local_4d8,&local_4f0,&local_9b0);
            local_b48 = local_b48 + -1;
            this = local_af8;
            lVar27 = lVar37 + 0x18;
            uVar30 = uVar29 + 1;
            uVar32 = uVar29;
            local_b38 = lVar37;
          } while (local_b48 != 0);
        }
        local_b50 = local_b50 + 1;
        lVar35 = lVar35 + 0x10;
      } while ((int)local_b50 < (this->PolygonHolesVertices).ArrayNum);
    }
    if ((this->bHaveSelfIntersection != false) && (this->bInInteractiveExtrude == false)) {
      local_9a0 = FLinearColor::sRGBToLinearTable[bStack_b5e];
      local_99c = FLinearColor::sRGBToLinearTable[bStack_b5f];
      local_998 = FLinearColor::sRGBToLinearTable[local_b5c];
      local_4c0 = (this->SelfIntersectionPoint).field0_0x0._s_0.X;
      dStack_4b8 = (this->SelfIntersectionPoint).field0_0x0._s_0.Y;
      local_994 = (float)bStack_b5d * fVar38;
      local_4b0 = (this->SelfIntersectionPoint).field0_0x0._s_0.Z;
      (**(code **)(pFVar24->_padding_ + 0x40))
                (pFVar24,&local_4c0,&local_9a0,fVar43 * __real_41400000);
    }
  }
  if (this->bInInteractiveExtrude == false) {
    local_af0 = FLinearColor::sRGBToLinearTable[(byte)local_b00._2_1_];
    local_aec = FLinearColor::sRGBToLinearTable[(byte)local_b00._1_1_];
    local_ae8 = FLinearColor::sRGBToLinearTable[(uint)FVar19.field0_0x0 & 0xff];
    local_4a8 = (this->PreviewVertex).field0_0x0._s_0.X;
    dStack_4a0 = (this->PreviewVertex).field0_0x0._s_0.Y;
    local_ae4 = (float)(local_b00.Bits >> 0x18) * fVar38;
    local_498 = (this->PreviewVertex).field0_0x0._s_0.Z;
    (**(code **)(pFVar24->_padding_ + 0x40))(pFVar24,&local_4a8,&local_af0,fVar43 * __real_41200000)
    ;
  }
  if (this->bInInteractiveExtrude != false) {
    pUVar13 = (this->HeightMechanic).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar13 + 0x2c0))(pUVar13,local_990);
  }
  return;
}

// RequestAbortClickSequence @ 14cc73360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDrawPolygonTool::RequestAbortClickSequence(UDrawPolygonTool *this)

{
  if (*(char *)&(this->PreviewVertex).field0_0x0 != '\0') {
    *(undefined1 *)&(this->PreviewVertex).field0_0x0 = 0;
    return true;
  }
  return false;
}

// ResetPolygon @ 14cc73490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::ResetPolygon(UDrawPolygonTool *this)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  (this->PolygonVertices).ArrayNum = 0;
  if ((this->PolygonVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PolygonVertices).AllocatorInstance,0,
               &(this->PolygonVertices).ArrayMax);
  }
  piVar1 = &(this->PolygonHolesVertices).ArrayMax;
  pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           (this->PolygonHolesVertices).AllocatorInstance.Data;
  iVar2 = (this->PolygonHolesVertices).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->PolygonHolesVertices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PolygonHolesVertices).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->PolygonHolesVertices).ArrayNum = 0;
  }
  (**(code **)((this->SnapEngine)._padding_ + 0x58))();
  this->CurrentCurveTimestamp = this->CurrentCurveTimestamp + 1;
  this->bHaveSurfaceHit = false;
  this->bInFixedPolygonMode = false;
  this->bHaveSelfIntersection = false;
  return;
}

// SetWorld @ 14cc75fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::SetWorld(UDrawPolygonTool *this,UWorld *param_1)

{
  this->TargetWorld = param_1;
  return;
}

// Setup @ 14cc78d70

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDrawPolygonTool::Setup(UDrawPolygonTool *this)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UCreateMeshObjectTypeProperties *pUVar13;
  UDrawPolygonToolStandardProperties *pUVar14;
  UConstructionPlaneMechanic *pUVar15;
  UDragAlignmentMechanic *pUVar16;
  UNewMeshMaterialProperties *pUVar17;
  UPreviewMesh *this_00;
  UMaterialInterface *pUVar18;
  UDrawPolygonToolSnapProperties *pUVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  int *piVar22;
  undefined ***pppuVar23;
  UMaterialInterface *pUVar24;
  undefined1 auStack_3a8 [32];
  undefined4 *local_388;
  undefined4 *local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  undefined4 local_358 [2];
  TPairInitializer<int_const_&,TFunction<bool___cdecl(FInputDeviceState_const_&)>_const_&> local_350
  ;
  undefined4 *local_340;
  code **local_338;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  <lambda_4> local_2f0;
  code *local_2e8 [2];
  undefined **local_2d8;
  UDrawPolygonTool *local_2d0;
  undefined8 local_2c0;
  code *local_2b8 [2];
  undefined **local_2a8;
  UDrawPolygonTool *local_2a0;
  undefined8 local_290;
  undefined1 local_288 [80];
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pUVar11 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UMultiClickSequenceInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_238,pUVar12);
  local_238._8_8_ = pUVar11;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
  if (local_238._64_8_ != 0) {
    plVar20 = (longlong *)(local_238 + 0x50);
    if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_238._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  pUVar18 = (UMaterialInterface *)0x0;
  pUVar24 = (UMaterialInterface *)&this->field_0xc0;
  if (this == (UDrawPolygonTool *)0x0) {
    pUVar24 = pUVar18;
  }
  (**(code **)(*(longlong *)pUVar11 + 0x378))(pUVar11,pUVar24);
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar21 = &pUVar11[3].field_0x18;
  piVar22 = *(int **)puVar21;
  local_40 = FInputDeviceState::IsShiftKeyDown;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  local_358[0] = 1;
  piVar1 = piVar22 + *(int *)&pUVar11[3].field_0x20;
  do {
    if (piVar22 == piVar1) {
LAB_14cc78eac:
      puVar2 = *(undefined4 **)puVar21;
      if ((puVar2 <= local_358) && (local_358 < puVar2 + *(int *)&pUVar11[3].field_0x24)) {
        local_370 = (longlong)*(int *)&pUVar11[3].field_0x20;
        local_368 = 4;
        local_388 = local_358;
        local_380 = puVar2;
        local_378 = (longlong)*(int *)&pUVar11[3].field_0x24;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar10 = *(int *)&pUVar11[3].field_0x20;
      if (iVar10 == *(int *)&pUVar11[3].field_0x24) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)puVar21,(int *)&pUVar11[3].field_0x24);
      }
      *(int *)&pUVar11[3].field_0x20 = iVar10 + 1;
      *(undefined4 *)(*(longlong *)puVar21 + (longlong)iVar10 * 4) = local_358[0];
      local_340 = local_358;
      local_338 = local_58;
      TSet<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_const_&,TFunction<bool___cdecl(FInputDeviceState_const_&)>_const_&>_>
                ((TSet<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>,FDefaultSetAllocator>
                  *)(pUVar11 + 4),&local_350,(bool *)&local_340);
      if (local_58[0] != (code *)0x0) {
        pppuVar23 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar23 = local_30;
        }
        (*(code *)(*pppuVar23)[2])();
      }
      (**(code **)(*(longlong *)this + 0x2f8))(this,pUVar11,0);
      pUVar13 = NewObject<UCreateMeshObjectTypeProperties>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UCreateMeshObjectTypeProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this->OutputTypeProperties).field0_0x0.DebugPtr = pUVar13;
      pcVar3 = *(code **)(pUVar13->_padding_ + 0x2b8);
      ::FString::FString(&local_330,L"");
      (*pcVar3)(pUVar13,this,&local_330);
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      UCreateMeshObjectTypeProperties::InitializeDefault
                ((this->OutputTypeProperties).field0_0x0.DebugPtr);
      pUVar13 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
      local_2d8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UDrawPolygonTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
      local_2c0 = 0;
      local_2e8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UDrawPolygonTool::Setup'::__l2::<lambda_1>,void,FString_const_&>
                     ::Call;
      local_2d0 = this;
      FWatchablePropertySet::WatchProperty<FString>
                ((FWatchablePropertySet *)&pUVar13->_padding_,&pUVar13->OutputType,
                 (TFunction<void___cdecl(FString_const_&)> *)local_2e8);
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = UDrawPolygonToolStandardProperties::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1b8,pUVar12);
      local_1b8._8_8_ = this;
      pUVar14 = (UDrawPolygonToolStandardProperties *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
      if (local_1b8._64_8_ != 0) {
        plVar20 = (longlong *)(local_1b8 + 0x50);
        if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
          plVar20 = (longlong *)local_1b8._104_8_;
        }
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UDrawPolygonToolStandardProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (this->PolygonProperties).field0_0x0.DebugPtr = pUVar14;
      pcVar3 = *(code **)(pUVar14->_padding_ + 0x2b8);
      ::FString::FString(&local_320,L"");
      (*pcVar3)(pUVar14,this,&local_320);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      pUVar14 = (this->PolygonProperties).field0_0x0.DebugPtr;
      local_2a8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UDrawPolygonTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
      local_290 = 0;
      local_2b8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UDrawPolygonTool::Setup'::__l2::<lambda_2>,void,bool_const_&>
                     ::Call;
      local_2a0 = this;
      FWatchablePropertySet::WatchProperty<bool>
                ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bShowGridGizmo,
                 (TFunction<void___cdecl(bool_const_&)> *)local_2b8);
      pUVar15 = NewObject<UConstructionPlaneMechanic>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar15 != (UConstructionPlaneMechanic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      (this->PlaneMechanic).field0_0x0.DebugPtr = pUVar15;
      (**(code **)(*(longlong *)pUVar15 + 0x2b0))(pUVar15,this);
      pUVar15 = (this->PlaneMechanic).field0_0x0.DebugPtr;
      local_b8 = *(longlong *)&pUVar15->CanUpdatePlaneFunc;
      uVar7 = *(undefined8 *)&(pUVar15->CanUpdatePlaneFunc).field_0x8;
      local_a8 = *(longlong *)&(pUVar15->CanUpdatePlaneFunc).field_0x10;
      uStack_a0 = *(undefined8 *)&(pUVar15->CanUpdatePlaneFunc).field_0x18;
      uVar5 = *(undefined8 *)&(pUVar15->CanUpdatePlaneFunc).field_0x20;
      plStack_90 = *(longlong **)&(pUVar15->CanUpdatePlaneFunc).field_0x28;
      *(code **)&pUVar15->CanUpdatePlaneFunc =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDrawPolygonTool::Setup'::__l2::<lambda_3>,bool>::Call;
      *(undefined8 *)&(pUVar15->CanUpdatePlaneFunc).field_0x8 = uStack_b0;
      *(undefined4 *)&(pUVar15->CanUpdatePlaneFunc).field_0x10 = 0x529527a0;
      *(undefined4 *)&(pUVar15->CanUpdatePlaneFunc).field_0x14 = 1;
      *(UDrawPolygonTool **)&(pUVar15->CanUpdatePlaneFunc).field_0x18 = this;
      *(undefined4 *)&(pUVar15->CanUpdatePlaneFunc).field_0x20 = (undefined4)local_98;
      *(undefined4 *)&(pUVar15->CanUpdatePlaneFunc).field_0x24 = local_98._4_4_;
      *(undefined4 *)&(pUVar15->CanUpdatePlaneFunc).field_0x28 = 0;
      *(undefined4 *)&(pUVar15->CanUpdatePlaneFunc).field_0x2c = 0;
      uStack_b0 = uVar7;
      local_98 = uVar5;
      if (local_b8 != 0) {
        plVar20 = &local_a8;
        if (plStack_90 != (longlong *)0x0) {
          plVar20 = plStack_90;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      local_350.Value = (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)this;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddLambda<_UDrawPolygonTool::Setup_::__l2::<lambda_4>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &((this->PlaneMechanic).field0_0x0.DebugPtr)->OnPlaneChanged,&local_2f0);
      UConstructionPlaneMechanic::Initialize
                ((this->PlaneMechanic).field0_0x0.DebugPtr,this->TargetWorld,&this->InitialDrawFrame
                );
      pUVar16 = NewObject<UDragAlignmentMechanic>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar16 != (UDragAlignmentMechanic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      (this->DragAlignmentMechanic).field0_0x0.DebugPtr = pUVar16;
      (**(code **)(pUVar16->_padding_ + 0x2b0))(pUVar16,this);
      FDragAlignmentBase::AddToGizmo
                ((FDragAlignmentBase *)
                 &((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_,
                 (((this->PlaneMechanic).field0_0x0.DebugPtr)->PlaneTransformGizmo).field0_0x0.
                 DebugPtr,(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                 (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
      pUVar17 = NewObject<UNewMeshMaterialProperties>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar17 != (UNewMeshMaterialProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      (this->MaterialProperties).field0_0x0.DebugPtr = pUVar17;
      pcVar3 = *(code **)(pUVar17->_padding_ + 0x2b8);
      ::FString::FString(&local_310,L"");
      (*pcVar3)(pUVar17,this,&local_310);
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      ((this->MaterialProperties).field0_0x0.DebugPtr)->bShowExtendedOptions = true;
      this_00 = NewObject<UPreviewMesh>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPreviewMesh *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->PreviewMesh).field0_0x0.DebugPtr = this_00;
      UPreviewMesh::CreateInWorld(this_00,this->TargetWorld,&UE::Math::TTransform<double>::Identity)
      ;
      ToolSetupUtil::ApplyRenderingConfigurationToPreview
                ((this->PreviewMesh).field0_0x0.DebugPtr,(UToolTarget *)0x0);
      UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,false);
      bVar9 = FWeakObjectPtr::IsValid
                        (&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).WeakPtr);
      if (bVar9) {
        pUVar18 = (UMaterialInterface *)
                  FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                       WeakPtr);
      }
      UPreviewMesh::SetMaterial((this->PreviewMesh).field0_0x0.DebugPtr,pUVar18);
      this->bPreviewUpdatePending = false;
      dVar4 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
      (this->SnapEngine)._padding_ = (longlong)dVar4;
      local_88 = (this->SnapEngine)._padding_;
      lVar8 = (this->SnapEngine)._padding_;
      local_78 = (this->SnapEngine)._padding_;
      lStack_70 = (this->SnapEngine)._padding_;
      lVar6 = (this->SnapEngine)._padding_;
      plStack_60 = (longlong *)(this->SnapEngine)._padding_;
      (this->SnapEngine)._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDrawPolygonTool::Setup'::__l2::<lambda_5>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
           ::Call;
      (this->SnapEngine)._padding_ = lStack_80;
      *(undefined4 *)&(this->SnapEngine)._padding_ = 0x529527c0;
      *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4) = 1;
      (this->SnapEngine)._padding_ = (longlong)this;
      *(undefined4 *)&(this->SnapEngine)._padding_ = (undefined4)local_68;
      *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4) = local_68._4_4_;
      *(undefined4 *)&(this->SnapEngine)._padding_ = 0;
      *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4) = 0;
      lStack_80 = lVar8;
      local_68 = lVar6;
      if (local_88 != 0) {
        plVar20 = &local_78;
        if (plStack_60 != (longlong *)0x0) {
          plVar20 = plStack_60;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      pUVar15 = (this->PlaneMechanic).field0_0x0.DebugPtr;
      dVar4 = (pUVar15->Plane).Origin.field0_0x0._s_0.Y;
      (this->SnapEngine).Plane.Origin.field0_0x0._s_0.X = (pUVar15->Plane).Origin.field0_0x0._s_0.X;
      (this->SnapEngine).Plane.Origin.field0_0x0._s_0.Y = dVar4;
      dVar4 = (pUVar15->Plane).Rotation.field0_0x0._s_0.X;
      (this->SnapEngine).Plane.Origin.field0_0x0._s_0.Z = (pUVar15->Plane).Origin.field0_0x0._s_0.Z;
      (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.X = dVar4;
      dVar4 = (pUVar15->Plane).Rotation.field0_0x0._s_0.Z;
      (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.Y =
           (pUVar15->Plane).Rotation.field0_0x0._s_0.Y;
      (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.Z = dVar4;
      (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.W =
           (pUVar15->Plane).Rotation.field0_0x0._s_0.W;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = UDrawPolygonToolSnapProperties::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_138,pUVar12);
      local_138._8_8_ = this;
      pUVar19 = (UDrawPolygonToolSnapProperties *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
      if (local_138._64_8_ != 0) {
        plVar20 = (longlong *)(local_138 + 0x50);
        if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
          plVar20 = (longlong *)local_138._104_8_;
        }
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar19 != (UDrawPolygonToolSnapProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      (this->SnapProperties).field0_0x0.DebugPtr = pUVar19;
      pcVar3 = *(code **)(pUVar19->_padding_ + 0x2b8);
      ::FString::FString(&local_300,L"");
      (*pcVar3)(pUVar19,this,&local_300);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      plVar20 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x398))(plVar20);
      puVar21 = (undefined1 *)(**(code **)(*plVar20 + 0x30))(plVar20,local_288);
      ((this->SnapProperties).field0_0x0.DebugPtr)->bSnapToWorldGrid = (bool)*puVar21;
      bVar9 = UCreateMeshObjectTypeProperties::ShouldShowPropertySet
                        ((this->OutputTypeProperties).field0_0x0.DebugPtr);
      if (bVar9) {
        (**(code **)(*(longlong *)this + 0x318))
                  (this,(this->OutputTypeProperties).field0_0x0.DebugPtr);
      }
      (**(code **)(*(longlong *)this + 0x318))(this,(this->PolygonProperties).field0_0x0.DebugPtr);
      (**(code **)(*(longlong *)this + 0x318))(this,(this->SnapProperties).field0_0x0.DebugPtr);
      (**(code **)(*(longlong *)this + 0x318))(this,(this->MaterialProperties).field0_0x0.DebugPtr);
      ShowStartupMessage(this);
      return;
    }
    if (*piVar22 == 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModifierIDs.Contains(ModifierID) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseBehaviors\\InputBehaviorModifierStates.h"
                         ,0x26,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14cc78eac;
    }
    piVar22 = piVar22 + 1;
  } while( true );
}

// ShowExtrudeMessage @ 14cc7fc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::ShowExtrudeMessage(UDrawPolygonTool *this)

{
  code *pcVar1;
  longlong *plVar2;
  FText *pFVar3;
  FText local_18;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pcVar1 = *(code **)(*plVar2 + 0x360);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UDrawPolygonTool",L"OnStartExtrude",
                      L"Set the height of the extrusion by positioning the mouse over the extrusion volume, or over objects to snap to their heights. Hold Shift to ignore snapping."
                     );
  (*pcVar1)(plVar2,pFVar3,2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// ShowStartupMessage @ 14cc7fc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::ShowStartupMessage(UDrawPolygonTool *this)

{
  code *pcVar1;
  longlong *plVar2;
  FText *pFVar3;
  FText local_18;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  pcVar1 = *(code **)(*plVar2 + 0x360);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UDrawPolygonTool",L"OnStartDraw",
                      L"Draw a polygon on the drawing plane, and extrude it. Left-click to place polygon vertices. Hold Shift to ignore snapping while drawing."
                     );
  (*pcVar1)(plVar2,pFVar3,2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// Shutdown @ 14cc7ffd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDrawPolygonTool::Shutdown(UDrawPolygonTool *this,EToolShutdownType param_1)

{
  longlong lVar1;
  UCreateMeshObjectTypeProperties *pUVar2;
  code *pcVar3;
  UDrawPolygonToolStandardProperties *pUVar4;
  UDrawPolygonToolSnapProperties *pUVar5;
  UNewMeshMaterialProperties *pUVar6;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar7;
  FString local_18;
  
  if (this->bHasSavedExtrudeHeight != false) {
    ((this->PolygonProperties).field0_0x0.DebugPtr)->ExtrudeHeight = this->SavedExtrudeHeight;
    this->bHasSavedExtrudeHeight = false;
  }
  UPreviewMesh::Disconnect((this->PreviewMesh).field0_0x0.DebugPtr);
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (**(code **)(((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  (**(code **)(*(longlong *)(this->PlaneMechanic).field0_0x0.DebugPtr + 0x2b8))();
  lVar1 = *(longlong *)this;
  (this->PlaneMechanic).field0_0x0.DebugPtr = (UConstructionPlaneMechanic *)0x0;
  this_00 = (UInteractiveToolManager *)(**(code **)(lVar1 + 0x2d8))(this);
  pUVar7 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  (**(code **)(pUVar7->_padding_ + 0x2e8))(pUVar7,this);
  pUVar2 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar3)(pUVar2,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->PolygonProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar3)(pUVar4,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->SnapProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar3)(pUVar5,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar6 = (this->MaterialProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar6->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar3)(pUVar6,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUDrawPolygonTool @ 14cc823e0

void __cdecl UDrawPolygonTool::StaticRegisterNativesUDrawPolygonTool(void)

{
  return;
}

// UndoCurrentOperation @ 14cc82e00

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
UDrawPolygonTool::UndoCurrentOperation
          (UDrawPolygonTool *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  if (this->bInInteractiveExtrude != false) {
    UPreviewMesh::ClearPreview((this->PreviewMesh).field0_0x0.DebugPtr);
    UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,false);
    this->bInInteractiveExtrude = false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cc82e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x3d8))(this,param_1,param_2);
  return;
}

// UpdateLivePreview @ 14cc855d0

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

void __thiscall UDrawPolygonTool::UpdateLivePreview(UDrawPolygonTool *this)

{
  UPreviewMesh *pUVar1;
  UDrawPolygonToolStandardProperties *pUVar2;
  bool bVar3;
  UMaterialInterface *pUVar4;
  float fVar5;
  undefined1 auStackY_328 [32];
  TVector<double>_u_0 local_2e8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double dStack_2b8;
  FDynamicMesh3 local_2a8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if ((1 < (this->PolygonVertices).ArrayNum) &&
     (pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr, pUVar1 != (UPreviewMesh *)0x0)) {
    bVar3 = UPreviewMesh::IsVisible(pUVar1);
    if (bVar3) {
      local_2e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2c0 = ___xmm_3ff00000000000000000000000000000;
      dStack_2b8 = _UNK_15061cbc8;
      local_2d0 = 0.0;
      dStack_2c8 = 0.0;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2a8);
      pUVar2 = (this->PolygonProperties).field0_0x0.DebugPtr;
      if (pUVar2->ExtrudeMode == Flat) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = pUVar2->ExtrudeHeight;
      }
      bVar3 = GeneratePolygonMesh(this,&this->PolygonVertices,&this->PolygonHolesVertices,&local_2a8
                                  ,(TFrame3<double> *)&local_2e8._s_0,false,(double)fVar5,false);
      if (bVar3) {
        local_78.Rotation.ZW.m128d_f64[0] = local_2c0;
        local_78.Rotation.ZW.m128d_f64[1] = dStack_2b8;
        local_78.Translation.ZW.m128d_f64[0] = local_2e8._s_0.Z;
        local_78.Translation.ZW.m128d_f64[1] = 0.0;
        local_78.Rotation.XY.m128d_f64[0] = local_2d0;
        local_78.Rotation.XY.m128d_f64[1] = dStack_2c8;
        local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_78.Translation.XY.m128d_f64[0] = local_2e8._s_0.X;
        local_78.Translation.XY.m128d_f64[1] = local_2e8._s_0.Y;
        local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        UPreviewMesh::SetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_78);
        pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
        pUVar4 = (UMaterialInterface *)
                 FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                      WeakPtr);
        UPreviewMesh::SetMaterial(pUVar1,pUVar4);
        UPreviewMesh::EnableWireframe
                  ((this->PreviewMesh).field0_0x0.DebugPtr,
                   ((this->MaterialProperties).field0_0x0.DebugPtr)->bShowWireframe);
        UPreviewMesh::UpdatePreview
                  ((this->PreviewMesh).field0_0x0.DebugPtr,&local_2a8,FullUpdate,AllVertexAttribs);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2a8);
    }
  }
  return;
}

// UpdatePreviewVertex @ 14cc85e20

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
UDrawPolygonTool::UpdatePreviewVertex(UDrawPolygonTool *this,TVector<double> *param_1)

{
  TVector<double> *pTVar1;
  EDrawPolygonDrawMode EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double local_res8;
  double local_res10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  TVector2<double> local_68;
  TVector2<double> local_58 [2];
  double local_38;
  
  dVar12 = (param_1->field0_0x0)._s_0.Y;
  pTVar1 = &this->PreviewVertex;
  (pTVar1->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->PreviewVertex).field0_0x0._s_0.Y = dVar12;
  iVar3 = (this->PolygonVertices).ArrayNum;
  (this->PreviewVertex).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (0 < iVar3) {
    uVar8 = iVar3 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar3) {
      uVar7 = ~uVar8 >> 0x1f;
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
    pFVar4 = (this->PolygonVertices).AllocatorInstance.Data;
    local_38 = *(double *)(pFVar4 + (longlong)(int)uVar8 * 0x18 + 0x10);
    pFVar4 = pFVar4 + (longlong)(int)uVar8 * 0x18;
    if (this->bInFixedPolygonMode == false) {
      dVar12 = (pTVar1->field0_0x0)._s_0.X - *(double *)pFVar4;
      local_38 = (this->PreviewVertex).field0_0x0._s_0.Z - local_38;
      dVar13 = (this->PreviewVertex).field0_0x0._s_0.Y - *(double *)(pFVar4 + 8);
      auVar10._0_8_ = local_38 * local_38;
      auVar10._8_8_ = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13 * dVar13 + dVar12 * dVar12 + auVar10._0_8_;
      auVar11 = sqrtpd(auVar10,auVar11);
      ((this->PolygonProperties).field0_0x0.DebugPtr)->Distance = (float)auVar11._0_8_;
    }
    else {
      local_78.ArrayNum = (this->FixedPolygonClickPoints).ArrayNum;
      lVar9 = (longlong)local_78.ArrayNum;
      uVar14 = 0;
      uVar15 = 0;
      if (0 < local_78.ArrayNum) {
        pFVar4 = (this->FixedPolygonClickPoints).AllocatorInstance.Data;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
                   &local_78.ArrayMax);
        memcpy(local_78.AllocatorInstance.Data,pFVar4,lVar9 * 0x18);
        if (((local_78.AllocatorInstance.Data <= pTVar1) &&
            (pTVar1 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x18)) &&
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
        if (local_78.ArrayNum == local_78.ArrayMax) {
          local_78.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_78.AllocatorInstance,&local_78.ArrayMax);
        }
        dVar12 = (this->PreviewVertex).field0_0x0._s_0.Y;
        *(double *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x18) =
             (pTVar1->field0_0x0)._s_0.X;
        *(double *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x18 + 8) =
             dVar12;
        *(double *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x18 + 0x10) =
             (this->PreviewVertex).field0_0x0._s_0.Z;
        local_78.ArrayNum = local_78.ArrayNum + 1;
        GetPolygonParametersFromFixedPoints
                  (this,&local_78,local_58,&local_68,&local_res10,&local_res8);
        EVar2 = ((this->PolygonProperties).field0_0x0.DebugPtr)->PolygonDrawMode;
        uVar14 = SUB84(local_68.field0_0x0._s_0.X,0);
        uVar15 = (undefined4)((ulonglong)local_68.field0_0x0._0_8_ >> 0x20);
        if (((EVar2 == Rectangle) || (EVar2 == RoundedRectangle)) && (local_78.ArrayNum != 2)) {
          uVar14 = SUB84(local_68.field0_0x0._s_0.Y,0);
          uVar15 = (undefined4)((ulonglong)local_68.field0_0x0._8_8_ >> 0x20);
        }
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
      }
      ((this->PolygonProperties).field0_0x0.DebugPtr)->Distance =
           (float)(double)CONCAT44(uVar15,uVar14);
    }
  }
  return;
}

// UpdateSelfIntersection @ 14cc879f0

/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall UDrawPolygonTool::UpdateSelfIntersection(UDrawPolygonTool *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UConstructionPlaneMechanic *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  TFrame3<double> *this_00;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  TVector2<double>_u_0 local_2e8;
  TVector2<double>_u_0 local_2d8;
  TVector2<double>_u_0 local_2c8;
  TVector2<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a8;
  TVector2<double>_u_0 local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  TVector2<double>_u_0 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  TVector2<double>_u_0 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1a8;
  TVector<double> local_198;
  TVector<double> local_180;
  TVector<double> local_168;
  TVector<double> local_150;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  TVector<double> local_f0;
  TVector<double> local_d8 [7];
  
  this->bHaveSelfIntersection = false;
  if (((this->bInFixedPolygonMode != false) ||
      (((this->PolygonProperties).field0_0x0.DebugPtr)->bAllowSelfIntersections == true)) ||
     (iVar4 = (this->PolygonVertices).ArrayNum, iVar4 < 3)) {
    return false;
  }
  pUVar5 = (this->PlaneMechanic).field0_0x0.DebugPtr;
  this_00 = &pUVar5->Plane;
  dVar8 = (this->PreviewVertex).field0_0x0._s_0.Z - (pUVar5->Plane).Origin.field0_0x0._s_0.Z;
  dVar9 = (this->PreviewVertex).field0_0x0._s_0.X - (this_00->Origin).field0_0x0._s_0.X;
  dVar10 = (this->PreviewVertex).field0_0x0._s_0.Y - (pUVar5->Plane).Origin.field0_0x0._s_0.Y;
  pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_198,0);
  dVar1 = (pTVar17->field0_0x0)._s_0.Z;
  dVar2 = (pTVar17->field0_0x0)._s_0.X;
  dVar3 = (pTVar17->field0_0x0)._s_0.Y;
  pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_180,1);
  uVar20 = iVar4 - 1;
  local_2e8._s_0.X = dVar9 * dVar2 + dVar10 * dVar3 + dVar8 * dVar1;
  uVar19 = 0;
  if ((int)uVar20 < (this->PolygonVertices).ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  local_2e8._s_0.Y =
       dVar10 * (pTVar17->field0_0x0)._s_0.Y + dVar9 * (pTVar17->field0_0x0)._s_0.X +
       dVar8 * (pTVar17->field0_0x0)._s_0.Z;
  if ((uVar19 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    uVar15 = (*pcVar7)();
    return (bool)uVar15;
  }
  lVar18 = (longlong)(int)uVar20;
  pFVar6 = (this->PolygonVertices).AllocatorInstance.Data;
  dVar9 = *(double *)(pFVar6 + lVar18 * 0x18) - (this_00->Origin).field0_0x0._s_0.X;
  dVar10 = *(double *)(pFVar6 + lVar18 * 0x18 + 8) - (pUVar5->Plane).Origin.field0_0x0._s_0.Y;
  dVar8 = *(double *)(pFVar6 + lVar18 * 0x18 + 0x10) - (pUVar5->Plane).Origin.field0_0x0._s_0.Z;
  pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_168,0);
  dVar1 = (pTVar17->field0_0x0)._s_0.Z;
  dVar2 = (pTVar17->field0_0x0)._s_0.X;
  dVar3 = (pTVar17->field0_0x0)._s_0.Y;
  pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_150,1);
  local_2d8._s_0.X = dVar10 * dVar3 + dVar9 * dVar2 + dVar8 * dVar1;
  local_2d8._s_0.Y =
       dVar10 * (pTVar17->field0_0x0)._s_0.Y + dVar9 * (pTVar17->field0_0x0)._s_0.X +
       dVar8 * (pTVar17->field0_0x0)._s_0.Z;
  UE::Geometry::TSegment2<double>::TSegment2<double>
            ((TSegment2<double> *)&local_290._s_0,(TVector2<double> *)&local_2d8._s_0,
             (TVector2<double> *)&local_2e8._s_0);
  uVar13 = _UNK_1529129e8;
  uVar12 = ___xmm_3e45798ee2308c3a0000000000000000;
  uVar22 = (undefined4)__real_7fefffffffffffff;
  uVar23 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  if (0 < iVar4 + -2) {
    lVar18 = 0;
    uVar20 = 0;
    do {
      uVar19 = uVar20 + 1;
      uVar16 = 0;
      if ((int)uVar19 < (this->PolygonVertices).ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
      pFVar6 = (this->PolygonVertices).AllocatorInstance.Data;
      dVar9 = *(double *)(pFVar6 + lVar18 + 0x18) - (this_00->Origin).field0_0x0._s_0.X;
      dVar10 = *(double *)(pFVar6 + lVar18 + 0x20) - (pUVar5->Plane).Origin.field0_0x0._s_0.Y;
      dVar8 = *(double *)(pFVar6 + lVar18 + 0x28) - (pUVar5->Plane).Origin.field0_0x0._s_0.Z;
      pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_138,0);
      dVar1 = (pTVar17->field0_0x0)._s_0.Z;
      dVar2 = (pTVar17->field0_0x0)._s_0.X;
      dVar3 = (pTVar17->field0_0x0)._s_0.Y;
      pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_120,1);
      local_2c8._s_0.X = dVar9 * dVar2 + dVar10 * dVar3 + dVar8 * dVar1;
      uVar16 = 0;
      if ((int)uVar20 < (this->PolygonVertices).ArrayNum) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      local_2c8._s_0.Y =
           dVar10 * (pTVar17->field0_0x0)._s_0.Y + dVar9 * (pTVar17->field0_0x0)._s_0.X +
           dVar8 * (pTVar17->field0_0x0)._s_0.Z;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
      pFVar6 = (this->PolygonVertices).AllocatorInstance.Data;
      dVar9 = *(double *)(pFVar6 + lVar18) - (this_00->Origin).field0_0x0._s_0.X;
      dVar10 = *(double *)(pFVar6 + lVar18 + 8) - (pUVar5->Plane).Origin.field0_0x0._s_0.Y;
      dVar8 = *(double *)(pFVar6 + lVar18 + 0x10) - (pUVar5->Plane).Origin.field0_0x0._s_0.Z;
      pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_108,0);
      dVar1 = (pTVar17->field0_0x0)._s_0.Z;
      dVar2 = (pTVar17->field0_0x0)._s_0.X;
      dVar3 = (pTVar17->field0_0x0)._s_0.Y;
      pTVar17 = UE::Geometry::TFrame3<double>::GetAxis(this_00,&local_f0,1);
      local_2b8._s_0.X = dVar10 * dVar3 + dVar9 * dVar2 + dVar8 * dVar1;
      local_2b8._s_0.Y =
           dVar10 * (pTVar17->field0_0x0)._s_0.Y + dVar9 * (pTVar17->field0_0x0)._s_0.X +
           dVar8 * (pTVar17->field0_0x0)._s_0.Z;
      UE::Geometry::TSegment2<double>::TSegment2<double>
                ((TSegment2<double> *)&local_268._s_0,(TVector2<double> *)&local_2b8._s_0,
                 (TVector2<double> *)&local_2c8._s_0);
      local_1d8 = 0;
      local_238._s_0.X = local_290._s_0.X;
      local_238._s_0.Y = local_290._s_0.Y;
      local_228 = local_280;
      uStack_220 = uStack_278;
      local_1d0 = 0;
      local_218 = local_270;
      local_210 = local_268._s_0.X;
      dStack_208 = local_268._s_0.Y;
      local_200 = local_258;
      uStack_1f8 = uStack_250;
      local_1f0 = local_248;
      local_1e8 = uVar12;
      uStack_1e0 = uVar13;
      bVar14 = UE::Geometry::TIntrSegment2Segment2<double>::Find
                         ((TIntrSegment2Segment2<double> *)&local_238._s_0);
      if (bVar14) {
        uVar21 = SUB84(local_1a8,0);
        uVar11 = (ulonglong)local_1a8 >> 0x20;
        this->bHaveSelfIntersection = true;
        if (local_1a8 < (double)CONCAT44(uVar23,uVar22)) {
          local_2a8._s_0.Z = 0.0;
          this->SelfIntersectSegmentIdx = uVar20;
          local_2a8._s_0.X = local_1c8;
          local_2a8._s_0.Y = dStack_1c0;
          pTVar17 = UE::Geometry::operator*<double>
                              (local_d8,&(pUVar5->Plane).Rotation,(TVector<double> *)&local_2a8._s_0
                              );
          dVar1 = (pTVar17->field0_0x0)._s_0.Y;
          dVar2 = (pTVar17->field0_0x0)._s_0.Z;
          dVar3 = (pUVar5->Plane).Origin.field0_0x0._s_0.Y;
          dVar8 = (pUVar5->Plane).Origin.field0_0x0._s_0.Z;
          (this->SelfIntersectionPoint).field0_0x0._s_0.X =
               (pTVar17->field0_0x0)._s_0.X + (this_00->Origin).field0_0x0._s_0.X;
          (this->SelfIntersectionPoint).field0_0x0._s_0.Y = dVar1 + dVar3;
          (this->SelfIntersectionPoint).field0_0x0._s_0.Z = dVar2 + dVar8;
          uVar22 = uVar21;
          uVar23 = (int)uVar11;
        }
      }
      lVar18 = lVar18 + 0x18;
      uVar20 = uVar19;
    } while ((int)uVar19 < iVar4 + -2);
  }
  return this->bHaveSelfIntersection;
}

// __DefaultConstructor @ 14cc8a1e0

void __cdecl UDrawPolygonTool::__DefaultConstructor(FObjectInitializer *param_1)

{
  UInteractiveTool *this;
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FText local_18;
  
  this = (UInteractiveTool *)param_1->Obj;
  if (this != (UInteractiveTool *)0x0) {
    UInteractiveTool::UInteractiveTool(this);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined8 *)&this[1].OnPropertySetsModified.field_0x8 = 0;
    this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
    *(undefined8 *)&this[1].OnPropertySetsModified.field_0x18 = 0;
    this[1].InputBehaviors.field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
    this[1].ToolPropertyObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ToolPropertyObjects.ArrayNum = 0;
    this[1].ToolPropertyObjects.ArrayMax = 0;
    this[1]._padding_ = (longlong)&_vftable__for__IClickSequenceBehaviorTarget__;
    this[1].ToolActionSet = (FInteractiveToolActionSet *)0x0;
    this[1].DefaultToolInfo.ToolDisplayName.TextData.Reference = (ITextData *)0x0;
    *(undefined8 *)&this[1].DefaultToolInfo.ToolDisplayName.Flags = 0;
    this[1]._padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
    this[1].DefaultToolInfo.ToolDisplayMessage.TextData.Reference = (ITextData *)0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnPropertySetsModified = 0;
    *(undefined8 *)&this[1].OnPropertySetsModified.field_0x10 = 0;
    this[1].DefaultToolInfo.ToolDisplayMessage.Flags = 0x42b40000;
    *(undefined4 *)&this[1].DefaultToolInfo.ToolDisplayMessage.field_0xc = 0x42c80000;
    *(undefined4 *)&this[1].DefaultToolInfo.ToolIcon = 0x3f800000;
    *(undefined2 *)((longlong)&this[1].DefaultToolInfo.ToolIcon + 4) = 0;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified.field_0x10 = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified.field_0x8 = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified.field_0x18 = 0x3ff0000000000000;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[2]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[2]._padding_ = uVar3;
    this[2]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&this[2].OnPropertySetsModified = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified.field_0x8 = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified.field_0x10 = 0;
    *(undefined8 *)&this[2].OnPropertySetsModified.field_0x18 = 0x3ff0000000000000;
    this[2].OnPropertyModifiedDirectlyByTool.field_0x1 = 0;
    *(undefined8 *)&this[2].OnPropertyModifiedDirectlyByTool.field_0x8 = 0;
    *(undefined8 *)&this[2].OnPropertyModifiedDirectlyByTool.field_0x10 = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    UE::Geometry::FPointPlanarSnapSolver::FPointPlanarSnapSolver
              ((FPointPlanarSnapSolver *)&this[3]._padding_);
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined2 *)&this[7].OnPropertySetsModified.field_0x18 = 0;
    *(undefined8 *)&this[7].OnPropertyModifiedDirectlyByTool.field_0x8 = 0;
    *(undefined8 *)&this[7].OnPropertyModifiedDirectlyByTool.field_0x10 = 0;
    *(undefined8 *)&this[7].OnPropertyModifiedDirectlyByTool.field_0x18 = 0;
    *(undefined4 *)&this[7].InputBehaviors.field0_0x0 = 1;
    *(undefined1 *)((longlong)&this[7].InputBehaviors.field0_0x0 + 4) = 1;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UDrawPolygonTool",L"ToolName",L"Polygon Extrude");
    pIVar1 = (this->DefaultToolInfo).ToolDisplayName.TextData.Reference;
    pIVar2 = (pFVar4->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (this->DefaultToolInfo).ToolDisplayName.TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->DefaultToolInfo).ToolDisplayName.Flags = pFVar4->Flags;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// _getUObject @ 14cc8a490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall UDrawPolygonTool::_getUObject(UDrawPolygonTool *this)

{
  return (UObject *)&this[-1].HeightMechanic;
}

// _getUObject`adjustor{160}' @ 14cc8a49c

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
   UDrawPolygonTool::_getUObject`adjustor{160}' (void)const __ptr64 */

UObject * __thiscall UDrawPolygonTool::_getUObject_adjustor_160__(UDrawPolygonTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDrawPolygonTool *)&this[-1].LastSnapGeometry);
  return (UObject *)pUVar1;
}

