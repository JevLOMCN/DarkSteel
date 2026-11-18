// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 26

// StaticClass @ 14cd41880

UClass * __cdecl UPolyEditPlanarProjectionUVActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditPlanarProjectionUVActivity",
               &Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditPlanarProjectionUVActivity,0x100,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditPlanarProjectionUVActivity>,
               InternalVTableHelperCtorCaller<UPolyEditPlanarProjectionUVActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton;
}

// UPolyEditPlanarProjectionUVActivity @ 14cd50f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditPlanarProjectionUVActivity * __thiscall
UPolyEditPlanarProjectionUVActivity::UPolyEditPlanarProjectionUVActivity
          (UPolyEditPlanarProjectionUVActivity *this,FVTableHelper *param_1)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  this->bPreviewUpdatePending = false;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->SetUVProperties).field0_0x0.DebugPtr = (UPolyEditSetUVProperties *)0x0;
  (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  return this;
}

// UPolyEditPlanarProjectionUVActivity @ 14cd51070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditPlanarProjectionUVActivity * __thiscall
UPolyEditPlanarProjectionUVActivity::UPolyEditPlanarProjectionUVActivity
          (UPolyEditPlanarProjectionUVActivity *this)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  this->bPreviewUpdatePending = false;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->SetUVProperties).field0_0x0.DebugPtr = (UPolyEditSetUVProperties *)0x0;
  (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  return this;
}

// ~UPolyEditPlanarProjectionUVActivity @ 14cd537e0

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
UPolyEditPlanarProjectionUVActivity::~UPolyEditPlanarProjectionUVActivity
          (UPolyEditPlanarProjectionUVActivity *this)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cd55720

void __thiscall
`UPolyEditPlanarProjectionUVActivity::UpdateSetUVS'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TVector2<float>_u_0 local_res8;
  FDynamicMeshEditor local_res10;
  uint local_48 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  uVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_res10.Mesh = param_1;
  uVar7 = 0;
  if ((uVar8 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar7 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar8) {
      do {
        lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar6 >> 9) * 8);
        if ((*(short *)(lVar2 + (ulonglong)(uVar6 & 0x1ff) * 2) != 0) &&
           (uVar7 = uVar6, *(short *)(lVar2 + (ulonglong)(uVar6 & 0x1ff) * 2) != -1)) break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
      } while ((int)uVar6 < (int)uVar8);
    }
  }
joined_r0x00014cd557b8:
  do {
    if (uVar7 == uVar8) {
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      UE::Geometry::FDynamicMeshEditor::SetTriangleUVsFromProjection
                (&local_res10,&local_40,*(TFrame3<double> **)this,
                 (float)**(double **)((longlong)this + 8),(TVector2<float> *)&local_res8._s_0,false,
                 0);
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      local_48[0] = uVar7;
      if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 4)) &&
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
      if (local_40.ArrayNum == local_40.ArrayMax) {
        local_40.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_40.AllocatorInstance,&local_40.ArrayMax);
      }
      iVar5 = local_40.ArrayNum + 1;
      uVar7 = uVar7 + 1;
      *(uint *)(local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 4) = local_48[0];
      local_40.ArrayNum = iVar5;
      if ((int)uVar8 <= (int)uVar7) break;
      pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar1 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar1 + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 2) != -1)) break;
        uVar7 = uVar7 + 1;
        if ((int)uVar8 <= (int)uVar7) goto joined_r0x00014cd557b8;
      }
    }
  } while( true );
}

// ApplySetUVs @ 14cd5dd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UPolyEditPlanarProjectionUVActivity::ApplySetUVs(UPolyEditPlanarProjectionUVActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  TObjectPtr<UCollectSurfacePathMechanic>_u_0 TVar3;
  double *pdVar4;
  UCollectSurfacePathMechanic *pUVar5;
  FScriptContainerElement *pFVar6;
  UPolyEditPreviewMesh *this_00;
  code *pcVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  TTransform<double> *pTVar10;
  TVector<double> *pTVar11;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar12;
  FText *pFVar13;
  UObject *this_01;
  UClass *pUVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double extraout_XMM0_Qa;
  double dVar22;
  double dVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStackY_568 [32];
  undefined1 local_528 [8];
  ForAnyElementType local_520;
  int local_518;
  int local_514;
  TVector2<float>_u_0 local_510;
  TArray<int,TSizedDefaultAllocator<32>_> local_508;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  TVector<double>_u_0 local_4c0;
  TQuaternion<double>_u_0 local_4a8;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  FDynamicMeshEditor local_3f0;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3c8;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_380;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_310;
  TVector<double>_u_0 local_2f8;
  TQuaternion<double>_u_0 local_2e0;
  TQuaternion<double>_u_0 local_2b8;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  TVector<double>_u_0 local_268;
  double local_240;
  FText local_238;
  TVector<double> local_220;
  TVector<double> local_208;
  FDynamicMeshChangeTracker local_1e8;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_568;
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  plVar15 = (longlong *)0x0;
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ArrayNum = 0;
  local_508.ArrayMax = 0;
  if ((pUVar1->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar1->CurrentTopology).Object,(FGroupTopologySelection *)&pUVar2->_padding_,
             &local_508);
  TVar3 = (this->SurfacePathMechanic).field0_0x0;
  if (((TVar3.DebugPtr)->HitPath).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pdVar4 = *(double **)((longlong)TVar3 + 0xa8);
  dVar23 = 0.0;
  dVar29 = 0.0;
  dVar21 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y;
  pUVar5 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  local_4f8 = *pdVar4;
  dStack_4f0 = pdVar4[1];
  local_4e8 = pdVar4[2];
  dStack_4e0 = pdVar4[3];
  local_4d8 = pdVar4[4];
  dStack_4d0 = pdVar4[5];
  local_4c8 = pdVar4[6];
  if (dVar21 <= 0.0) {
    dVar21 = dVar23;
  }
  dVar25 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X;
  dVar20 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z;
  if (dVar25 <= 0.0) {
    dVar25 = dVar23;
  }
  if (dVar20 <= 0.0) {
    dVar20 = dVar23;
  }
  if (dVar21 <= dVar20) {
    dVar21 = dVar20;
  }
  if (dVar21 <= dVar25) {
    dVar21 = dVar25;
  }
  if ((pUVar5->HitPath).ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar20 = __real_3ff0000000000000;
  pFVar6 = (pUVar5->HitPath).AllocatorInstance.Data;
  dVar26 = *(double *)(pFVar6 + 0x38) - local_4f8;
  dVar27 = *(double *)(pFVar6 + 0x40) - dStack_4f0;
  dVar25 = *(double *)(pFVar6 + 0x48) - local_4e8;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar27 * dVar27 + dVar26 * dVar26 + dVar25 * dVar25;
  auVar24 = sqrtpd(in_XMM3,auVar24);
  dVar22 = auVar24._0_8_;
  if (dVar22 <= 0.0) {
    local_470._s_0.X = 0.0;
    dVar22 = 0.0;
    local_470._s_0.Y = 0.0;
    local_470._s_0.Z = 0.0;
  }
  else {
    dVar28 = __real_3ff0000000000000 / dVar22;
    local_470._s_0.X = dVar28 * dVar26;
    local_470._s_0.Y = dVar28 * dVar27;
    local_470._s_0.Z = dVar28 * dVar25;
  }
  dVar26 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z;
  dVar27 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y;
  dVar25 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X;
  if (dVar26 <= 0.0) {
    dVar26 = 0.0;
  }
  if (dVar27 <= 0.0) {
    dVar27 = dVar23;
  }
  if (dVar25 <= 0.0) {
    dVar25 = dVar23;
  }
  if (dVar26 <= dVar27) {
    dVar26 = dVar27;
  }
  if (dVar26 <= dVar25) {
    dVar26 = dVar25;
  }
  dVar22 = dVar22 / dVar26;
  if (0.0 <= dVar22) {
    if (__real_3ff0000000000000 <= dVar22) {
      dVar22 = __real_3ff0000000000000;
    }
  }
  else {
    dVar22 = 0.0;
  }
  local_430 = dStack_4d0 + dStack_4d0;
  local_510 = (TVector2<float>_u_0)(local_4c8 * (dStack_4e0 + dStack_4e0));
  local_418 = ((__real_3ff0000000000000 - dVar22) + dVar22 * __real_4039000000000000) / dVar21;
  local_428 = local_4d8 + local_4d8;
  local_408 = dStack_4e0 * local_430;
  local_400 = local_4c8 * local_428;
  local_3c8._s_0.X = local_408 + local_400;
  local_3f8 = local_4d8 * local_430;
  local_420 = local_4d8 * local_428;
  local_3c8._s_0.Y = local_3f8 - (double)local_510;
  local_410 = dStack_4e0 * (dStack_4e0 + dStack_4e0);
  local_3c8._s_0.Z = __real_3ff0000000000000 - (local_420 + local_410);
  pTVar10 = UPreviewMesh::GetTransform
                      ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                        DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_138);
  local_2b8._s_0.X = (pTVar10->Rotation).XY.m128d_f64[0];
  local_2b8._s_0.Y = (pTVar10->Rotation).XY.m128d_f64[1];
  local_2b8._s_0.Z = (pTVar10->Rotation).ZW.m128d_f64[0];
  local_2b8._s_0.W = (pTVar10->Rotation).ZW.m128d_f64[1];
  auVar24 = *(undefined1 (*) [16])(pTVar10->Scale3D).XY.m128d_f64;
  local_288 = (pTVar10->Translation).ZW.m128d_f64[0];
  local_380 = (pTVar10->Scale3D).ZW.m128d_f64[0];
  local_488._s_0.X = (pTVar10->Translation).XY.m128d_f64[0];
  local_488._s_0.Y = (pTVar10->Translation).XY.m128d_f64[1];
  local_298 = local_488._s_0.X;
  dStack_290 = local_488._s_0.Y;
  local_280 = auVar24;
  local_270 = local_380;
  local_240 = local_288;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)&local_2b8._s_0,(TVector<double> *)&local_358._s_0,
             (TVector<double> *)&local_3c8._s_0);
  dVar22 = __real_3e45798ee2308c3a;
  dVar23 = auVar24._0_8_;
  dVar25 = auVar24._8_8_;
  dVar26 = dVar23 * local_358._s_0.X;
  dVar27 = dVar25 * local_358._s_0.Y;
  dVar28 = local_380 * local_358._s_0.Z;
  local_378._8_4_ = auVar24._8_4_;
  local_378._s_0.X = dVar25;
  local_378._12_4_ = auVar24._12_4_;
  dVar21 = SQRT(dVar27 * dVar27 + dVar26 * dVar26 + dVar28 * dVar28);
  if (dVar21 <= 0.0) {
    local_3e8._s_0.Z = 0.0;
    local_3e8._s_0.X = 0.0;
    local_3e8._s_0.Y = 0.0;
  }
  else {
    dVar21 = dVar20 / dVar21;
    local_3e8._s_0.X = dVar26 * dVar21;
    local_3e8._s_0.Y = dVar27 * dVar21;
    local_3e8._s_0.Z = dVar28 * dVar21;
  }
  uVar35 = auVar24._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar36 = auVar24._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar36,uVar35) &&
      (double)CONCAT44(uVar36,uVar35) != __real_3e45798ee2308c3a) {
    dVar21 = dVar20 / dVar23;
  }
  else {
    dVar21 = 0.0;
  }
  uVar31 = auVar24._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar32 = auVar24._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar32,uVar31) &&
      (double)CONCAT44(uVar32,uVar31) != __real_3e45798ee2308c3a) {
    dVar25 = dVar20 / dVar25;
  }
  else {
    dVar25 = 0.0;
  }
  uVar33 = SUB84(local_380,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar34 = (uint)((ulonglong)local_380 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar34,uVar33) &&
      (double)CONCAT44(uVar34,uVar33) != __real_3e45798ee2308c3a) {
    dVar26 = dVar20 / local_380;
  }
  else {
    dVar26 = 0.0;
  }
  local_340._s_0.X = local_4f8 - local_488._s_0.X;
  local_340._s_0.Y = dStack_4f0 - local_488._s_0.Y;
  local_3c8._s_0.X = local_488._s_0.Y;
  local_3c8._s_0.Y = local_488._s_0.Y;
  local_340._s_0.Z = local_4e8 - local_240;
  pTVar11 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_2b8._s_0,&local_220,
                       (TVector<double> *)&local_340._s_0);
  local_4c0._s_0.X = dVar21 * (pTVar11->field0_0x0)._s_0.X;
  local_4c0._s_0.Y = dVar25 * (pTVar11->field0_0x0)._s_0.Y;
  local_4c0._s_0.Z = dVar26 * (pTVar11->field0_0x0)._s_0.Z;
  local_268._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_268._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_4a8._s_0.X = 0.0;
  local_4a8._s_0.W = dVar20;
  local_4a8._s_0.Y = 0.0;
  local_4a8._s_0.Z = 0.0;
  local_268._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_4a8._s_0,(TVector<double> *)&local_268._s_0,
             (TVector<double> *)&local_3e8._s_0);
  local_398 = local_4a8._s_0.Y + local_4a8._s_0.Y;
  local_3a8 = local_4a8._s_0.Z + local_4a8._s_0.Z;
  local_450 = local_4a8._s_0.W * local_398;
  local_458 = local_4a8._s_0.X * local_3a8;
  local_448 = local_458 + local_450;
  local_3a0 = local_4a8._s_0.Y * local_398;
  local_440 = local_4a8._s_0.Y * local_3a8 -
              local_4a8._s_0.W * (local_4a8._s_0.X + local_4a8._s_0.X);
  local_438 = dVar20 - (local_4a8._s_0.X * (local_4a8._s_0.X + local_4a8._s_0.X) + local_3a0);
  if (dVar22 <= (double)CONCAT44(uVar36,uVar35) && (double)CONCAT44(uVar36,uVar35) != dVar22) {
    dVar21 = dVar20 / dVar23;
  }
  else {
    dVar21 = 0.0;
  }
  if (dVar22 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar22) {
    dVar25 = dVar20 / local_378._s_0.X;
  }
  else {
    dVar25 = 0.0;
  }
  if (dVar22 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar22) {
    dVar26 = dVar20 / local_380;
  }
  else {
    dVar26 = 0.0;
  }
  local_328._s_0.X = local_448;
  local_328._s_0.Y = local_440;
  local_328._s_0.Z = local_438;
  pTVar11 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_2b8._s_0,&local_208,
                       (TVector<double> *)&local_470._s_0);
  local_310._s_0.X = dVar21 * (pTVar11->field0_0x0)._s_0.X;
  local_310._s_0.Y = dVar25 * (pTVar11->field0_0x0)._s_0.Y;
  local_310._s_0.Z = dVar26 * (pTVar11->field0_0x0)._s_0.Z;
  local_2f8._s_0.X = dVar20 - (local_4a8._s_0.Z * local_3a8 + local_3a0);
  local_2f8._s_0.Y = local_4a8._s_0.W * local_3a8 + local_4a8._s_0.X * local_398;
  local_2f8._s_0.Z = local_458 - local_450;
  UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
            ((TVector<double> *)&local_2f8._s_0,(TVector<double> *)&local_310._s_0,
             (TVector<double> *)&local_328._s_0);
  __libm_sse2_sincos_();
  local_2e0._s_0.X = local_448 * extraout_XMM0_Qa;
  local_2e0._s_0.Z = local_438 * extraout_XMM0_Qa;
  local_2e0._s_0.Y = local_440 * extraout_XMM0_Qa;
  UE::Geometry::TFrame3<double>::Rotate
            ((TFrame3<double> *)&local_4c0._s_0,(TQuaternion<double> *)&local_2e0._s_0);
  if (dVar22 <= (double)CONCAT44(uVar36,uVar35) && (double)CONCAT44(uVar36,uVar35) != dVar22) {
    dVar23 = dVar20 / dVar23;
  }
  else {
    dVar23 = 0.0;
  }
  if (dVar22 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar22) {
    dVar21 = dVar20 / local_378._s_0.X;
  }
  else {
    dVar21 = 0.0;
  }
  if (dVar22 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar22) {
    dVar29 = dVar20 / local_380;
  }
  local_488._s_0.X =
       (((dVar20 - (local_420 + dStack_4d0 * local_430)) +
        (dStack_4e0 * local_428 - local_4c8 * local_430)) * local_418 * __real_3fe6a09e667f3bcc +
       local_4f8) - local_488._s_0.X;
  local_488._s_0.Y =
       (((dVar20 - (local_410 + dStack_4d0 * local_430)) +
        dStack_4e0 * local_428 + local_4c8 * local_430) * local_418 * __real_3fe6a09e667f3bcc +
       dStack_4f0) - local_3c8._s_0.X;
  local_488._s_0.Z =
       (((local_408 - local_400) + local_3f8 + (double)local_510) * local_418 *
        __real_3fe6a09e667f3bcc + local_4e8) - local_240;
  pTVar11 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_2b8._s_0,(TVector<double> *)&local_378._s_0,
                       (TVector<double> *)&local_488._s_0);
  auVar30._0_8_ = dVar29 * (pTVar11->field0_0x0)._s_0.Z;
  auVar30._8_8_ = 0;
  dVar23 = local_4c0._s_0.X - dVar23 * (pTVar11->field0_0x0)._s_0.X;
  dVar21 = local_4c0._s_0.Y - dVar21 * (pTVar11->field0_0x0)._s_0.Y;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar21 * dVar21 + dVar23 * dVar23 +
                 (local_4c0._s_0.Z - auVar30._0_8_) * (local_4c0._s_0.Z - auVar30._0_8_);
  auVar24 = sqrtpd(auVar30,auVar8);
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
            (&local_1e8,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_1e8);
  FVar16.Data = local_508.AllocatorInstance.Data;
  lVar19 = (longlong)local_508.ArrayNum;
  local_520.Data = (FScriptContainerElement *)0x0;
  local_518 = local_508.ArrayNum;
  if (local_508.ArrayNum == 0) {
    local_514 = 0;
    iVar17 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_508.ArrayNum,0,&local_520,local_508.ArrayNum,&local_514);
    memcpy(local_520.Data,FVar16.Data,lVar19 << 2);
    iVar17 = local_518;
  }
  pFVar6 = local_520.Data + (longlong)iVar17 * 4;
  FVar16.Data = local_520.Data;
  iVar18 = iVar17;
  while( true ) {
    if (iVar18 != iVar17) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_528);
    }
    if (FVar16.Data == pFVar6) break;
    UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_1e8,*(int *)FVar16.Data,true);
    FVar16.Data = FVar16.Data + 4;
    iVar18 = local_518;
  }
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  local_3f0.Mesh = (((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object;
  local_510 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  UE::Geometry::FDynamicMeshEditor::SetTriangleUVsFromProjection
            (&local_3f0,&local_508,(TFrame3<double> *)&local_4c0._s_0,(float)auVar24._0_8_,
             (TVector2<float> *)&local_510._s_0,false,0);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  TVar12 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_1e8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_238,L"UPolyEditPlanarProjectionUVActivity",L"PolyMeshSetUVsChange",
                       L"Set UVs");
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
                *)&pUVar1->EmitCurrentMeshChangeAndUpdate,pFVar13,TVar12,
               (FGroupTopologySelection *)&pUVar2->_padding_);
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,0);
  this->bIsRunning = false;
  this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (this_01 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_UToolActivityHost_NoRegister();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar14);
  }
  (**(code **)(*plVar15 + 0x10))(plVar15,this);
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_1e8);
  if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.AllocatorInstance.Data);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cd5f850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInputRayHit * __thiscall
UPolyEditPlanarProjectionUVActivity::BeginHoverSequenceHitTest
          (UPolyEditPlanarProjectionUVActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  __return_storage_ptr__->bHit = SUB81(this->_padding_,0);
  return __return_storage_ptr__;
}

// BeginSetUVs @ 14cd600d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UPolyEditPlanarProjectionUVActivity::BeginSetUVs(UPolyEditPlanarProjectionUVActivity *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  UPolyEditActivityContext *pUVar4;
  UPolygonSelectionMechanic *pUVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  bool bVar14;
  UInteractiveTool *pUVar15;
  UPolyEditPreviewMesh *pUVar16;
  UCollectSurfacePathMechanic *pUVar17;
  UObject *pUVar18;
  TAxisAlignedBox3<double> *pTVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  EPreviewMaterialType EVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_438 [32];
  undefined1 local_418 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_410;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  TAxisAlignedBox3<double> local_3e8;
  FDynamicMesh3 local_3b8;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_410.ArrayNum = 0;
  local_410.ArrayMax = 0;
  pUVar5 = (pUVar4->SelectionMechanic).field0_0x0.DebugPtr;
  if ((pUVar4->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar4->CurrentTopology).Object,(FGroupTopologySelection *)&pUVar5->_padding_,
             &local_410);
  UPreviewMesh::GetTransform
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,&local_158);
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  pUVar15 = (UInteractiveTool *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pUVar16 = UE::Geometry::PolyEditActivityUtil::CreatePolyEditPreviewMesh(pUVar15,pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UPolyEditPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->EditPreview).field0_0x0.DebugPtr = pUVar16;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_3f0 = local_158.Translation.ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_400 = local_158.Translation.XY.m128d_f64[0];
  dStack_3f8 = local_158.Translation.XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UPreviewMesh::SetTransform((UPreviewMesh *)pUVar16,&local_98);
  local_f8.Rotation.XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
  local_f8.Rotation.XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
  local_f8.Rotation.ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
  local_f8.Rotation.ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
  local_f8.Scale3D.XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
  local_f8.Scale3D.XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
  local_f8.Scale3D.ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
  local_f8.Scale3D.ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
  local_f8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_f8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_f8.Translation.ZW.m128d_f64[1] = 0.0;
  UPolyEditPreviewMesh::InitializeStaticType
            ((this->EditPreview).field0_0x0.DebugPtr,
             (((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object,&local_410,
             &local_f8);
  pUVar16 = (this->EditPreview).field0_0x0.DebugPtr;
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  bVar14 = ((this->SetUVProperties).field0_0x0.DebugPtr)->bShowMaterial;
  pUVar15 = (UInteractiveTool *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  EVar23 = UVMaterial;
  if (bVar14 != false) {
    EVar23 = SourceMaterials;
  }
  UE::Geometry::PolyEditActivityUtil::UpdatePolyEditPreviewMaterials(pUVar15,pUVar4,pUVar16,EVar23);
  EVar23 = UVMaterial;
  if (((this->SetUVProperties).field0_0x0.DebugPtr)->bShowMaterial != false) {
    EVar23 = SourceMaterials;
  }
  this->CurrentPreviewMaterial = EVar23;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_3b8);
  UPolyEditPreviewMesh::MakeInsetTypeTargetMesh((this->EditPreview).field0_0x0.DebugPtr,&local_3b8);
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,false);
  pUVar17 = NewObject<UCollectSurfacePathMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UCollectSurfacePathMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = pUVar17;
  pcVar6 = *(code **)(*(longlong *)pUVar17 + 0x2b0);
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar6)(pUVar17,pUVar18);
  pUVar17 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar17 + 0x2e0))(pUVar17,&local_3b8);
  pUVar17 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar17 + 0x2f0))(pUVar17,2);
  uStack_160 = (longlong *)0x0;
  ((this->SurfacePathMechanic).field0_0x0.DebugPtr)->bSnapToTargetMeshVertices = true;
  local_178 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  uStack_170 = this;
  dVar7 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  pUVar17 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  local_188 = *(longlong *)&pUVar17->SpatialSnapPointsFunc;
  uVar10 = *(undefined8 *)&(pUVar17->SpatialSnapPointsFunc).field_0x8;
  lVar11 = *(longlong *)&(pUVar17->SpatialSnapPointsFunc).field_0x10;
  uVar12 = *(undefined8 *)&(pUVar17->SpatialSnapPointsFunc).field_0x18;
  uVar8 = *(undefined8 *)&(pUVar17->SpatialSnapPointsFunc).field_0x20;
  plVar9 = *(longlong **)&(pUVar17->SpatialSnapPointsFunc).field_0x28;
  *(code **)&pUVar17->SpatialSnapPointsFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPolyEditPlanarProjectionUVActivity::BeginSetUVs'::__l2::<lambda_1>,bool,UE::Math::TVector<double>,UE::Math::TVector<double>_>
       ::Call;
  *(undefined8 *)&(pUVar17->SpatialSnapPointsFunc).field_0x8 = uStack_180;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x10 = (undefined4)local_178;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x14 = local_178._4_4_;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x18 = (undefined4)uStack_170;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x1c = uStack_170._4_4_;
  local_168._0_4_ = SUB84(dVar7,0);
  local_168._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x20 = (undefined4)local_168;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x24 = local_168._4_4_;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x28 = (undefined4)uStack_160;
  *(undefined4 *)&(pUVar17->SpatialSnapPointsFunc).field_0x2c = uStack_160._4_4_;
  local_178 = (undefined **)lVar11;
  uStack_170 = (UPolyEditPlanarProjectionUVActivity *)uVar12;
  local_168 = uVar8;
  uStack_160 = plVar9;
  uStack_180 = uVar10;
  if (local_188 != 0) {
    plVar20 = &local_178;
    if (plVar9 != (longlong *)0x0) {
      plVar20 = plVar9;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  iVar13 = local_410.ArrayNum;
  uVar21 = (ulonglong)local_410.ArrayNum;
  pFVar1 = local_410.AllocatorInstance.Data + uVar21 * 4;
  FVar22.Data = local_410.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar21 != iVar13) {
      local_418[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_418);
    }
    if (FVar22.Data == pFVar1) break;
    pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
    iVar3 = *(int *)FVar22.Data;
    if ((pUVar4->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar19 = UE::Geometry::FDynamicMesh3::GetTriBounds
                        ((pUVar4->CurrentMesh).Object,&local_3e8,iVar3);
    uVar21 = local_410._8_8_ & 0xffffffff;
    FVar22.Data = FVar22.Data + 4;
    dVar7 = *(double *)&(pTVar19->Min).field0_0x0;
    uVar24 = SUB84(dVar7,0);
    uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = *(double *)&(this->ActiveSelectionBounds).Min.field0_0x0;
    if (dVar2 <= dVar7) {
      uVar24 = SUB84(dVar2,0);
      uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar25,uVar24);
    dVar7 = *(double *)((longlong)&(pTVar19->Min).field0_0x0 + 8);
    uVar24 = SUB84(dVar7,0);
    uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->ActiveSelectionBounds).Min.field0_0x0 + 8);
    if (dVar2 <= dVar7) {
      uVar24 = SUB84(dVar2,0);
      uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar25,uVar24);
    dVar7 = *(double *)((longlong)&(pTVar19->Min).field0_0x0 + 0x10);
    uVar24 = SUB84(dVar7,0);
    uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->ActiveSelectionBounds).Min.field0_0x0 + 0x10);
    if (dVar2 <= dVar7) {
      uVar24 = SUB84(dVar2,0);
      uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar25,uVar24);
    dVar7 = *(double *)&(pTVar19->Max).field0_0x0;
    uVar24 = SUB84(dVar7,0);
    uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = *(double *)&(this->ActiveSelectionBounds).Max.field0_0x0;
    if (dVar7 <= dVar2) {
      uVar24 = SUB84(dVar2,0);
      uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar25,uVar24);
    dVar7 = *(double *)((longlong)&(pTVar19->Max).field0_0x0 + 8);
    uVar24 = SUB84(dVar7,0);
    uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->ActiveSelectionBounds).Max.field0_0x0 + 8);
    if (dVar7 <= dVar2) {
      uVar24 = SUB84(dVar2,0);
      uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar25,uVar24);
    dVar7 = *(double *)((longlong)&(pTVar19->Max).field0_0x0 + 0x10);
    uVar24 = SUB84(dVar7,0);
    uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->ActiveSelectionBounds).Max.field0_0x0 + 0x10);
    if (dVar7 <= dVar2) {
      uVar24 = SUB84(dVar2,0);
      uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar25,uVar24);
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,1);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_3b8);
  if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.AllocatorInstance.Data);
  }
  return;
}

// CanAccept @ 14cd63010

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
UPolyEditPlanarProjectionUVActivity::CanAccept(UPolyEditPlanarProjectionUVActivity *this)

{
  return false;
}

// CanStart @ 14cd63ca0

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
UPolyEditPlanarProjectionUVActivity::CanStart(UPolyEditPlanarProjectionUVActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (pUVar1 == (UPolyEditActivityContext *)0x0) {
    return false;
  }
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  return (int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4);
}

// Clear @ 14cd64940

/* WARNING: Type propagation algorithm not settling */
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
UPolyEditPlanarProjectionUVActivity::Clear(UPolyEditPlanarProjectionUVActivity *this)

{
  UPolyEditPreviewMesh *this_00;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014cd6498c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,0);
  return;
}

// End @ 14cd68e40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EToolActivityEndResult __thiscall
UPolyEditPlanarProjectionUVActivity::End
          (UPolyEditPlanarProjectionUVActivity *this,EToolShutdownType param_1)

{
  bool bVar1;
  UPolyEditPreviewMesh *this_00;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,0);
  bVar1 = this->bIsRunning;
  this->bIsRunning = false;
  return ErrorDuringEnd - (bVar1 != false);
}

// GetPrivateStaticClass @ 14cd6e2e0

UClass * __cdecl UPolyEditPlanarProjectionUVActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditPlanarProjectionUVActivity",
               &Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditPlanarProjectionUVActivity,0x100,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditPlanarProjectionUVActivity>,
               InternalVTableHelperCtorCaller<UPolyEditPlanarProjectionUVActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.InnerSingleton;
}

// IsHitByClick @ 14cd71af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInputRayHit * __thiscall
UPolyEditPlanarProjectionUVActivity::IsHitByClick
          (UPolyEditPlanarProjectionUVActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  __return_storage_ptr__->bHit = SUB81(this->_padding_,0);
  return __return_storage_ptr__;
}

// IsRunning @ 14cd71bc0

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
UPolyEditPlanarProjectionUVActivity::IsRunning(UPolyEditPlanarProjectionUVActivity *this)

{
  return this->bIsRunning;
}

// OnBeginHover @ 14cd746a0

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
UPolyEditPlanarProjectionUVActivity::OnBeginHover
          (UPolyEditPlanarProjectionUVActivity *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cd74cb0

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
UPolyEditPlanarProjectionUVActivity::OnClicked
          (UPolyEditPlanarProjectionUVActivity *this,FInputDeviceRay *param_1)

{
  char cVar1;
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((char)this->_padding_ != '\0') {
    local_38 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    dStack_30 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    local_28 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
    uStack_24 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
    uStack_20 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
    uStack_1c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
    local_18 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
    uStack_14 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
    uStack_10 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
    uStack_c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 800))((longlong *)this->_padding_,&local_38)
    ;
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x330))();
      if (cVar1 != '\0') {
        ApplySetUVs((UPolyEditPlanarProjectionUVActivity *)&this[-1].CameraState.Orientation.Z);
      }
    }
  }
  return;
}

// OnEndHover @ 14cd74e30

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
UPolyEditPlanarProjectionUVActivity::OnEndHover(UPolyEditPlanarProjectionUVActivity *this)

{
  return;
}

// OnUpdateHover @ 14cd765b0

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
UPolyEditPlanarProjectionUVActivity::OnUpdateHover
          (UPolyEditPlanarProjectionUVActivity *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  dStack_30 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_28 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
  uStack_24 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
  uStack_20 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
  uStack_1c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
  local_18 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  uStack_14 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
  uStack_10 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
  uStack_c = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
  (**(code **)(*(longlong *)this->_padding_ + 0x318))((longlong *)this->_padding_,&local_38);
  lVar1 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return (bool)(char)lVar1;
}

// Render @ 14cd7ace0

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
UPolyEditPlanarProjectionUVActivity::Render
          (UPolyEditPlanarProjectionUVActivity *this,IToolsContextRenderAPI *param_1)

{
  UCollectSurfacePathMechanic *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  plVar3 = (longlong *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,&this->CameraState);
  pUVar1 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (UCollectSurfacePathMechanic *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,param_1);
  }
  return;
}

// Setup @ 14cd7d130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPolyEditPlanarProjectionUVActivity::Setup
          (UPolyEditPlanarProjectionUVActivity *this,UInteractiveTool *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPolyEditSetUVProperties *pUVar4;
  USingleClickInputBehavior *pUVar5;
  UMouseHoverBehavior *pUVar6;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UPolyEditSetUVProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  pUVar4 = (UPolyEditSetUVProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPolyEditSetUVProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SetUVProperties).field0_0x0.DebugPtr = pUVar4;
  pcVar1 = *(code **)(pUVar4->_padding_ + 0x2b8);
  ::FString::FString(&local_b8,L"");
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar1)(pUVar4,pUVar2,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->SetUVProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,0);
  pUVar2 = GetTransientPackageAsObject();
  pUVar5 = NewObject<USingleClickInputBehavior>(pUVar2);
  plVar8 = &this->_padding_;
  if (this == (UPolyEditPlanarProjectionUVActivity *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)(pUVar5->_padding_ + 0x378))(pUVar5,plVar8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,pUVar5,0);
  pUVar2 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UMouseHoverBehavior>(pUVar2);
  plVar8 = &this->_padding_;
  if (this == (UPolyEditPlanarProjectionUVActivity *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6,plVar8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,pUVar6,0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar7 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar7;
  return;
}

// Shutdown @ 14cd7fa40

/* WARNING: Type propagation algorithm not settling */
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
UPolyEditPlanarProjectionUVActivity::Shutdown
          (UPolyEditPlanarProjectionUVActivity *this,EToolShutdownType param_1)

{
  UPolyEditPreviewMesh *this_00;
  UPolyEditSetUVProperties *pUVar1;
  code *pcVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  FString local_28;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,0);
  pUVar1 = (this->SetUVProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar1,pUVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->SetUVProperties).field0_0x0.DebugPtr = (UPolyEditSetUVProperties *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  this->_padding_ = (longlong)local_res8;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return;
}

// Start @ 14cd811b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EToolActivityStartResult __thiscall
UPolyEditPlanarProjectionUVActivity::Start(UPolyEditPlanarProjectionUVActivity *this)

{
  code *pcVar1;
  UPolyEditPreviewMesh *this_00;
  UPolyEditActivityContext *pUVar2;
  char cVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FText *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FText local_18;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2e8))();
  if (cVar3 == '\0') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar1 = *(code **)(*plVar5 + 0x360);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UPolyEditPlanarProjectionUVActivity",L"OnSetUVsFailedMesssage",
                        L"Cannot set UVs without face selection.");
    (*pcVar1)(plVar5,pFVar6,3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return FailedStart;
  }
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->SurfacePathMechanic).field0_0x0.DebugPtr = (UCollectSurfacePathMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->SetUVProperties).field0_0x0.DebugPtr,0);
  BeginSetUVs(this);
  this->bIsRunning = true;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
  pcVar1 = *(code **)(*plVar5 + 0x360);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolyEditPlanarProjectionUVActivity",L"OnBeginSetUVsMessage",
                      L"Click on the face to Set UVs");
  (*pcVar1)(plVar5,pFVar6,1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolyEditPlanarProjectionUVActivity",L"BeginSetUVsActivity",
                      L"Begin Set UVs");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar2->EmitActivityStart);
  pcVar1 = *(code **)&pUVar2->EmitActivityStart;
  plVar5 = *(longlong **)&(pUVar2->EmitActivityStart).field_0x28;
  plVar8 = (longlong *)&(pUVar2->EmitActivityStart).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar1)(uVar7,pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return Running;
}

// StaticRegisterNativesUPolyEditPlanarProjectionUVActivity @ 14cd814a0

void __cdecl
UPolyEditPlanarProjectionUVActivity::StaticRegisterNativesUPolyEditPlanarProjectionUVActivity(void)

{
  return;
}

// Tick @ 14cd81e40

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
UPolyEditPlanarProjectionUVActivity::Tick(UPolyEditPlanarProjectionUVActivity *this,float param_1)

{
  UPolyEditPreviewMesh *pUVar1;
  UPolyEditActivityContext *pUVar2;
  UInteractiveTool *pUVar3;
  EPreviewMaterialType EVar4;
  
  EVar4 = UVMaterial;
  if (((this->SetUVProperties).field0_0x0.DebugPtr)->bShowMaterial != false) {
    EVar4 = SourceMaterials;
  }
  if (this->CurrentPreviewMaterial != EVar4) {
    pUVar1 = (this->EditPreview).field0_0x0.DebugPtr;
    pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
    pUVar3 = (UInteractiveTool *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UE::Geometry::PolyEditActivityUtil::UpdatePolyEditPreviewMaterials(pUVar3,pUVar2,pUVar1,EVar4);
    this->CurrentPreviewMaterial = EVar4;
  }
  if (this->bPreviewUpdatePending != false) {
    UpdateSetUVS(this);
    this->bPreviewUpdatePending = false;
  }
  return;
}

// UpdateSetUVS @ 14cd85020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UPolyEditPlanarProjectionUVActivity::UpdateSetUVS(UPolyEditPlanarProjectionUVActivity *this)

{
  int iVar1;
  UCollectSurfacePathMechanic *pUVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UCollectSurfacePathMechanic>_u_0 TVar4;
  double *pdVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  double dVar9;
  bool bVar10;
  TTransform<double> *pTVar11;
  TVector<double> *pTVar12;
  double dVar13;
  double dVar14;
  double extraout_XMM0_Qa;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined8 uVar20;
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  longlong local_4a0;
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double local_460;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_420;
  TQuaternion<double>_u_0 local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  undefined1 local_3d0 [16];
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double dStack_380;
  double local_378;
  TQuaternion<double>_u_0 TStack_370;
  double local_350;
  double dStack_348;
  double local_340;
  TQuaternion<double>_u_0 TStack_338;
  TVector<double>_u_0 *local_318;
  double *local_310;
  code *local_308;
  TVector<double>_u_0 **local_300;
  TVector<double>_u_0 local_2f8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TQuaternion<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  undefined1 local_1b0 [16];
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  TVector<double>_u_0 local_180;
  TVector<double> local_168;
  TVector<double> local_150;
  TVector<double> local_138;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  dVar9 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  pUVar2 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  dVar15 = 0.0;
  local_498 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z -
              (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z;
  local_490 = (pUVar2->PreviewPathPoint).Origin.field0_0x0._s_0.X;
  dStack_488 = (pUVar2->PreviewPathPoint).Origin.field0_0x0._s_0.Y;
  local_480 = (pUVar2->PreviewPathPoint).Origin.field0_0x0._s_0.Z;
  dStack_478 = (pUVar2->PreviewPathPoint).Rotation.field0_0x0._s_0.X;
  if (local_498 <= 0.0) {
    local_498 = 0.0;
  }
  local_470 = (pUVar2->PreviewPathPoint).Rotation.field0_0x0._s_0.Y;
  dStack_468 = (pUVar2->PreviewPathPoint).Rotation.field0_0x0._s_0.Z;
  dVar13 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y;
  local_460 = (pUVar2->PreviewPathPoint).Rotation.field0_0x0._s_0.W;
  dVar16 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X -
           (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  if (local_498 <= dVar13) {
    local_498 = dVar13;
  }
  if (local_498 <= dVar16) {
    local_498 = dVar16;
  }
  local_498 = __real_3ff0000000000000 / local_498;
  pTVar11 = UPreviewMesh::GetTransform
                      ((UPreviewMesh *)(this->EditPreview).field0_0x0.DebugPtr,&local_118);
  pUVar2 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
  local_408._s_0.X = (pTVar11->Rotation).XY.m128d_f64[0];
  local_408._s_0.Y = (pTVar11->Rotation).XY.m128d_f64[1];
  local_408._s_0.Z = (pTVar11->Rotation).ZW.m128d_f64[0];
  local_408._s_0.W = (pTVar11->Rotation).ZW.m128d_f64[1];
  dVar13 = (pTVar11->Translation).XY.m128d_f64[0];
  dVar16 = (pTVar11->Translation).XY.m128d_f64[1];
  auVar18 = *(undefined1 (*) [16])(pTVar11->Scale3D).XY.m128d_f64;
  local_3d8 = (pTVar11->Translation).ZW.m128d_f64[0];
  local_3c0 = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_3e8 = dVar13;
  dStack_3e0 = dVar16;
  local_3d0 = auVar18;
  local_1b0 = auVar18;
  local_1a0 = local_3c0;
  local_198 = dVar13;
  dStack_190 = dVar16;
  local_188 = local_3d8;
  if ((pUVar2->HitPath).ArrayNum == 1) {
    (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2,&local_490);
    pUVar2 = (this->SurfacePathMechanic).field0_0x0.DebugPtr;
    iVar1 = (pUVar2->HitPath).ArrayNum;
    if (iVar1 < 1) {
      local_4a8 = 0;
      local_4a0 = (longlong)iVar1;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar3 = (pUVar2->HitPath).AllocatorInstance.Data;
    dVar21 = local_490 - *(double *)pFVar3;
    dVar22 = dStack_488 - *(double *)(pFVar3 + 8);
    dVar13 = local_480 - *(double *)(pFVar3 + 0x10);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar22 * dVar22 + dVar21 * dVar21 + dVar13 * dVar13;
    auVar18 = sqrtpd(in_XMM3,auVar18);
    dVar16 = auVar18._0_8_;
    if (dVar16 <= 0.0) {
      local_420._s_0.X = 0.0;
      dVar16 = 0.0;
      local_420._s_0.Y = 0.0;
      local_420._s_0.Z = 0.0;
    }
    else {
      dVar14 = dVar9 / dVar16;
      local_420._s_0.X = dVar21 * dVar14;
      local_420._s_0.Y = dVar22 * dVar14;
      local_420._s_0.Z = dVar13 * dVar14;
    }
    dVar13 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y -
             (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y;
    dVar21 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z -
             (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z;
    dVar22 = (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X -
             (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    if (dVar21 <= 0.0) {
      dVar21 = 0.0;
    }
    if (dVar22 <= 0.0) {
      dVar22 = 0.0;
    }
    if (dVar13 <= dVar21) {
      dVar13 = dVar21;
    }
    if (dVar13 <= dVar22) {
      dVar13 = dVar22;
    }
    dVar16 = dVar16 / dVar13;
    if (0.0 <= dVar16) {
      if (dVar9 <= dVar16) {
        dVar16 = dVar9;
      }
    }
    else {
      dVar16 = 0.0;
    }
    TVar4 = (this->SurfacePathMechanic).field0_0x0;
    local_498 = local_498 * ((dVar9 - dVar16) + dVar16 * __real_4039000000000000);
    iVar1 = ((TVar4.DebugPtr)->HitPath).ArrayNum;
    if (iVar1 < 1) {
      local_4a8 = 0;
      local_4a0 = (longlong)iVar1;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pdVar5 = *(double **)((longlong)TVar4 + 0xa8);
    local_490 = *pdVar5;
    dStack_488 = pdVar5[1];
    local_480 = pdVar5[2];
    dStack_478 = pdVar5[3];
    local_470 = pdVar5[4];
    dStack_468 = pdVar5[5];
    local_460 = pdVar5[6];
    local_260._s_0.X = dStack_478 * (dStack_468 + dStack_468) + local_460 * (local_470 + local_470);
    local_260._s_0.Y = local_470 * (dStack_468 + dStack_468) - local_460 * (dStack_478 + dStack_478)
    ;
    local_260._s_0.Z =
         dVar9 - (local_470 * (local_470 + local_470) + dStack_478 * (dStack_478 + dStack_478));
    UE::Geometry::TQuaternion<double>::InverseMultiply
              ((TQuaternion<double> *)&local_408._s_0,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&local_260._s_0);
    dVar13 = __real_3e45798ee2308c3a;
    uVar20 = local_3d0._0_8_;
    dVar16 = (double)local_3d0._0_8_ * local_248._s_0.X;
    dVar21 = (double)local_3d0._8_8_ * local_248._s_0.Y;
    dVar22 = local_3c0 * local_248._s_0.Z;
    auVar17._0_8_ = dVar22 * dVar22;
    auVar17._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar21 * dVar21 + dVar16 * dVar16 + auVar17._0_8_;
    auVar18 = sqrtpd(auVar17,auVar7);
    if (auVar18._0_8_ <= 0.0) {
      local_438._s_0.Z = 0.0;
      local_438._s_0.X = 0.0;
      local_438._s_0.Y = 0.0;
    }
    else {
      dVar14 = dVar9 / auVar18._0_8_;
      local_438._s_0.X = dVar16 * dVar14;
      local_438._s_0.Y = dVar21 * dVar14;
      local_438._s_0.Z = dVar22 * dVar14;
    }
    uVar27 = local_3d0._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = local_3d0._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar28,uVar27) &&
        (double)CONCAT44(uVar28,uVar27) != __real_3e45798ee2308c3a) {
      dVar16 = dVar9 / (double)local_3d0._0_8_;
    }
    else {
      dVar16 = 0.0;
    }
    uVar23 = local_3d0._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar24 = local_3d0._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar24,uVar23) &&
        (double)CONCAT44(uVar24,uVar23) != __real_3e45798ee2308c3a) {
      dVar21 = dVar9 / (double)local_3d0._8_8_;
    }
    else {
      dVar21 = 0.0;
    }
    uVar25 = SUB84(local_3c0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar26 = (uint)((ulonglong)local_3c0 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar26,uVar25) &&
        (double)CONCAT44(uVar26,uVar25) != __real_3e45798ee2308c3a) {
      dVar22 = dVar9 / local_3c0;
    }
    else {
      dVar22 = 0.0;
    }
    local_230._s_0.X = local_490 - local_3e8;
    local_230._s_0.Y = dStack_488 - dStack_3e0;
    local_230._s_0.Z = local_480 - local_3d8;
    pTVar12 = UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_408._s_0,&local_138,
                         (TVector<double> *)&local_230._s_0);
    TStack_370._s_0.X = 0.0;
    local_388 = dVar16 * (pTVar12->field0_0x0)._s_0.X;
    dStack_380 = dVar21 * (pTVar12->field0_0x0)._s_0.Y;
    local_378 = dVar22 * (pTVar12->field0_0x0)._s_0.Z;
    local_1c8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_1c8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    TStack_370._s_0.W = dVar9;
    TStack_370._s_0.Y = 0.0;
    TStack_370._s_0.Z = 0.0;
    local_1c8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&TStack_370._s_0,(TVector<double> *)&local_1c8._s_0,
               (TVector<double> *)&local_438._s_0);
    local_2f8._s_0.X = local_388;
    local_2f8._s_0.Y = dStack_380;
    local_2c8 = TStack_370._s_0.W;
    dVar21 = TStack_370._s_0.Y + TStack_370._s_0.Y;
    local_458._s_0.X = TStack_370._s_0.Z;
    local_458._s_0.Y = TStack_370._s_0.Z;
    dVar16 = TStack_370._s_0.Z + TStack_370._s_0.Z;
    local_3a8 = dVar21 * TStack_370._s_0.W;
    local_2f8._s_0.Z = local_378;
    dStack_2e0 = TStack_370._s_0.X;
    local_3b0 = dVar16 * TStack_370._s_0.X;
    local_3a0 = local_3b0 + local_3a8;
    local_2d8 = TStack_370._s_0.Y;
    dStack_2d0 = TStack_370._s_0.Z;
    local_438._s_0.X = TStack_370._s_0.X;
    local_438._s_0.Y = TStack_370._s_0.X;
    local_398 = dVar16 * TStack_370._s_0.Y -
                (TStack_370._s_0.X + TStack_370._s_0.X) * TStack_370._s_0.W;
    local_3b8 = dVar21 * TStack_370._s_0.Y;
    local_390 = dVar9 - ((TStack_370._s_0.X + TStack_370._s_0.X) * TStack_370._s_0.X + local_3b8);
    if (dVar13 <= (double)CONCAT44(uVar28,uVar27) && (double)CONCAT44(uVar28,uVar27) != dVar13) {
      dVar22 = dVar9 / (double)uVar20;
    }
    else {
      dVar22 = 0.0;
    }
    if (dVar13 <= (double)CONCAT44(uVar24,uVar23) && (double)CONCAT44(uVar24,uVar23) != dVar13) {
      dVar14 = dVar9 / (double)local_3d0._8_8_;
    }
    else {
      dVar14 = 0.0;
    }
    if (dVar13 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar13) {
      dVar15 = dVar9 / local_3c0;
    }
    local_218._s_0.X = local_3a0;
    local_218._s_0.Y = local_398;
    local_218._s_0.Z = local_390;
    pTVar12 = UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_408._s_0,&local_168,
                         (TVector<double> *)&local_420._s_0);
    local_200._s_0.X = dVar22 * (pTVar12->field0_0x0)._s_0.X;
    local_200._s_0.Y = dVar14 * (pTVar12->field0_0x0)._s_0.Y;
    local_2c0._s_0.Y = dVar16 * TStack_370._s_0.W + dVar21 * local_438._s_0.X;
    local_200._s_0.Z = dVar15 * (pTVar12->field0_0x0)._s_0.Z;
    local_2c0._s_0.X = dVar9 - (dVar16 * local_458._s_0.X + local_3b8);
    local_2c0._s_0.Z = local_3b0 - local_3a8;
    UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
              ((TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_200._s_0,
               (TVector<double> *)&local_218._s_0);
    __libm_sse2_sincos_();
    local_1e8._s_0.Y = extraout_XMM0_Qa * local_398;
    local_1e8._s_0.X = extraout_XMM0_Qa * local_3a0;
    local_1e8._s_0.Z = extraout_XMM0_Qa * local_390;
    UE::Geometry::TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_2f8._s_0,(TQuaternion<double> *)&local_1e8._s_0);
  }
  else {
    uVar20 = 0;
    local_2a8._s_0.X = dStack_478 * (dStack_468 + dStack_468) + local_460 * (local_470 + local_470);
    local_2a8._s_0.Y = local_470 * (dStack_468 + dStack_468) - local_460 * (dStack_478 + dStack_478)
    ;
    local_2a8._s_0.Z =
         dVar9 - (local_470 * (local_470 + local_470) + dStack_478 * (dStack_478 + dStack_478));
    UE::Geometry::TQuaternion<double>::InverseMultiply
              ((TQuaternion<double> *)&local_408._s_0,(TVector<double> *)&local_290._s_0,
               (TVector<double> *)&local_2a8._s_0);
    dVar22 = auVar18._0_8_ * local_290._s_0.X;
    dVar21 = local_1a0 * local_290._s_0.Z;
    auVar8._4_8_ = uVar20;
    auVar8._0_4_ = auVar18._4_4_;
    auVar19._0_8_ = auVar8._0_8_ << 0x20;
    auVar19._8_4_ = auVar18._8_4_;
    auVar19._12_4_ = auVar18._12_4_;
    dVar14 = auVar18._8_8_ * local_290._s_0.Y;
    dVar15 = SQRT(dVar14 * dVar14 + dVar22 * dVar22 + dVar21 * dVar21);
    if (dVar15 <= 0.0) {
      local_458._s_0.Z = 0.0;
      local_458._s_0.X = 0.0;
      local_458._s_0.Y = 0.0;
    }
    else {
      dVar15 = dVar9 / dVar15;
      local_458._s_0.X = dVar15 * dVar22;
      local_458._s_0.Y = dVar15 * dVar14;
      local_458._s_0.Z = dVar15 * dVar21;
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44(auVar18._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         auVar18._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar15 = dVar9 / auVar18._0_8_;
    }
    else {
      dVar15 = 0.0;
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44(auVar18._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         auVar18._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar21 = dVar9 / auVar19._8_8_;
    }
    else {
      dVar21 = 0.0;
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)local_1a0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_1a0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar22 = dVar9 / local_1a0;
    }
    else {
      dVar22 = 0.0;
    }
    local_278._s_0.X = local_490 - dVar13;
    local_278._s_0.Y = dStack_488 - dVar16;
    local_278._s_0.Z = local_480 - local_188;
    pTVar12 = UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_408._s_0,&local_150,
                         (TVector<double> *)&local_278._s_0);
    TStack_338._s_0.X = 0.0;
    local_350 = dVar15 * (pTVar12->field0_0x0)._s_0.X;
    dStack_348 = dVar21 * (pTVar12->field0_0x0)._s_0.Y;
    local_340 = dVar22 * (pTVar12->field0_0x0)._s_0.Z;
    local_180._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_180._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    TStack_338._s_0.W = dVar9;
    TStack_338._s_0.Y = 0.0;
    TStack_338._s_0.Z = 0.0;
    local_180._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&TStack_338._s_0,(TVector<double> *)&local_180._s_0,
               (TVector<double> *)&local_458._s_0);
    local_2f8._s_0.X = local_350;
    local_2f8._s_0.Y = dStack_348;
    local_2f8._s_0.Z = local_340;
    dStack_2e0 = TStack_338._s_0.X;
    local_2d8 = TStack_338._s_0.Y;
    dStack_2d0 = TStack_338._s_0.Z;
    local_2c8 = TStack_338._s_0.W;
  }
  local_318 = &local_2f8;
  local_310 = &local_498;
  local_300 = &local_318;
  local_308 = UE::Core::Private::Function::
              TFunctionRefCaller<`UPolyEditPlanarProjectionUVActivity::UpdateSetUVS'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
              ::Call;
  UPolyEditPreviewMesh::UpdateStaticType
            ((this->EditPreview).field0_0x0.DebugPtr,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_308,false);
  return;
}

