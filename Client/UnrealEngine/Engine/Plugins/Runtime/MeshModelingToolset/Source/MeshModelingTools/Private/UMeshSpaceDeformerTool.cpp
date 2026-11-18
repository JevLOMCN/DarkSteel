// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 27

// StaticClass @ 14cc8eef0

UClass * __cdecl UMeshSpaceDeformerTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSpaceDeformerTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSpaceDeformerTool",
               &Z_Registration_Info_UClass_UMeshSpaceDeformerTool.InnerSingleton,
               StaticRegisterNativesUMeshSpaceDeformerTool,0x300,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSpaceDeformerTool>,
               InternalVTableHelperCtorCaller<UMeshSpaceDeformerTool>,local_res8,
               USingleSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSpaceDeformerTool.InnerSingleton;
}

// UMeshSpaceDeformerTool @ 14ccbd5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshSpaceDeformerTool * __thiscall
UMeshSpaceDeformerTool::UMeshSpaceDeformerTool(UMeshSpaceDeformerTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->Settings).field0_0x0.DebugPtr = (UMeshSpaceDeformerToolProperties *)0x0;
  (this->ToolActions).field0_0x0.DebugPtr = (UMeshSpaceDeformerToolActionPropertySet *)0x0;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->OriginalDynamicMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OriginalMeshPreview).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->IntervalGizmo).field0_0x0.DebugPtr = (UIntervalGizmo *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->UpIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->DownIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->SetPointInWorldConnector).Ptr = (FSelectClickedAction *)0x0;
  (this->VisualizationPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualizationPoints).ArrayNum = 0;
  (this->VisualizationPoints).ArrayMax = 0;
  FToolDataVisualizer::FToolDataVisualizer(&this->VisualizationRenderer);
  return this;
}

// UMeshSpaceDeformerTool @ 14ccbd720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshSpaceDeformerTool * __thiscall
UMeshSpaceDeformerTool::UMeshSpaceDeformerTool(UMeshSpaceDeformerTool *this)

{
  undefined8 uVar1;
  
  USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->Settings).field0_0x0.DebugPtr = (UMeshSpaceDeformerToolProperties *)0x0;
  (this->ToolActions).field0_0x0.DebugPtr = (UMeshSpaceDeformerToolActionPropertySet *)0x0;
  (this->StateTarget).field0_0x0.DebugPtr = (UGizmoTransformChangeStateTarget *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->OriginalDynamicMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OriginalMeshPreview).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->IntervalGizmo).field0_0x0.DebugPtr = (UIntervalGizmo *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->UpIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->DownIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->SetPointInWorldConnector).Ptr = (FSelectClickedAction *)0x0;
  (this->VisualizationPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualizationPoints).ArrayNum = 0;
  (this->VisualizationPoints).ArrayMax = 0;
  FToolDataVisualizer::FToolDataVisualizer(&this->VisualizationRenderer);
  return this;
}

// ~UMeshSpaceDeformerTool @ 14ccc40c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSpaceDeformerTool::~UMeshSpaceDeformerTool(UMeshSpaceDeformerTool *this)

{
  FScriptContainerElement *pFVar1;
  FSelectClickedAction *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  FToolDataVisualizer::~FToolDataVisualizer(&this->VisualizationRenderer);
  pFVar1 = (this->VisualizationPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->SetPointInWorldConnector).Ptr;
  if (pFVar2 != (FSelectClickedAction *)0x0) {
    (**(code **)&pFVar2[-1].bShiftModifierToggle)(&pFVar2[-1].bShiftModifierToggle);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  USingleSelectionMeshEditingTool::~USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14ccd3a60

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
`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_4>::operator()
          (void *this,IGizmoFloatParameterSource *param_1,FGizmoFloatParameterChange param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  float fStackX_c;
  
  lVar2 = *(longlong *)this;
  fStackX_c = param_2.CurrentValue;
  dVar6 = (double)fStackX_c;
  lVar3 = *(longlong *)(lVar2 + 0xe0);
  cVar1 = *(char *)(lVar3 + 0xb0);
  if (cVar1 == '\0') {
    *(float *)(lVar3 + 0xbc) =
         (float)((dVar6 * __real_4066800000000000) / *(double *)(lVar2 + 0x1a8));
  }
  else {
    if (cVar1 == '\x01') {
      *(float *)(lVar3 + 200) =
           (float)((dVar6 * __real_4059000000000000) / *(double *)(lVar2 + 0x1a8));
      UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)this);
      return;
    }
    if (cVar1 == '\x02') {
      *(float *)(lVar3 + 0xc0) =
           (float)((dVar6 * __real_4076800000000000) / *(double *)(lVar2 + 0x1a8));
      UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)this);
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshSpaceDeformerTool.cpp"
                       ,0x20d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UMeshSpaceDeformerTool::UpdatePreview(*(UMeshSpaceDeformerTool **)this);
  return;
}

// ApplyAction @ 14ccdea90

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
UMeshSpaceDeformerTool::ApplyAction
          (UMeshSpaceDeformerTool *this,EMeshSpaceDeformerToolAction param_1)

{
  double dVar1;
  undefined1 auStack_b8 [64];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->PendingAction == ShiftToCenter) {
    local_78.Translation.ZW.m128d_f64[0] = (this->MeshCenter).field0_0x0._s_0.Z;
    dVar1 = (this->MeshCenter).field0_0x0._s_0.Y;
    (this->GizmoFrame).Origin.field0_0x0._s_0.X = (this->MeshCenter).field0_0x0._s_0.X;
    (this->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar1;
    (this->GizmoFrame).Origin.field0_0x0._s_0.Z = local_78.Translation.ZW.m128d_f64[0];
    local_78.Translation.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)&(this->GizmoFrame).Origin.field0_0x0;
    local_78.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 4);
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 8);
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 0xc);
    local_78.Rotation.XY.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
    local_78.Rotation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 8);
    local_78.Rotation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 0xc);
    local_78.Rotation.ZW.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
    local_78.Rotation.ZW.m128d_f64[1] = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    UCombinedTransformGizmo::ReinitializeGizmoTransform
              ((this->TransformGizmo).field0_0x0.DebugPtr,&local_78,true);
    UpdatePreview(this);
  }
  return;
}

// ApplyModifierGizmoValue @ 14ccdedb0

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
UMeshSpaceDeformerTool::ApplyModifierGizmoValue(UMeshSpaceDeformerTool *this,double param_1)

{
  ENonlinearOperationType EVar1;
  UMeshSpaceDeformerToolProperties *pUVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  EVar1 = pUVar2->SelectedOperationType;
  if (EVar1 == Bend) {
    pUVar2->BendDegrees = (float)((param_1 * __real_4066800000000000) / this->ModifierGizmoLength);
  }
  else {
    if (EVar1 == Flare) {
      pUVar2->FlarePercentY =
           (float)((param_1 * __real_4059000000000000) / this->ModifierGizmoLength);
      return;
    }
    if (EVar1 == Twist) {
      pUVar2->TwistDegrees =
           (float)((param_1 * __real_4076800000000000) / this->ModifierGizmoLength);
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshSpaceDeformerTool.cpp"
                       ,0x20d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// CanAccept @ 14cceba10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSpaceDeformerTool::CanAccept(UMeshSpaceDeformerTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 0x3a8))();
  if ((cVar2 != '\0') &&
     ((pUVar1 = (this->Preview).field0_0x0.DebugPtr,
      pUVar1 == (UMeshOpPreviewWithBackgroundCompute *)0x0 || (pUVar1->bResultValid != false)))) {
    return true;
  }
  return false;
}

// GetModifierGizmoValue @ 14ccfebd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSpaceDeformerTool::GetModifierGizmoValue(UMeshSpaceDeformerTool *this)

{
  ENonlinearOperationType EVar1;
  UMeshSpaceDeformerToolProperties *pUVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  EVar1 = pUVar2->SelectedOperationType;
  if (EVar1 == Bend) {
    return (double)pUVar2->BendDegrees * this->ModifierGizmoLength * __real_3f76c16c16c16c17;
  }
  if (EVar1 == Flare) {
    return (double)pUVar2->FlarePercentY * this->ModifierGizmoLength * __real_3f847ae147ae147b;
  }
  if (EVar1 == Twist) {
    return (double)pUVar2->TwistDegrees * this->ModifierGizmoLength * __real_3f66c16c16c16c17;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshSpaceDeformerTool.cpp"
                     ,0x1fc,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    dVar5 = (double)(*pcVar3)();
    return dVar5;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14cd002b0

UClass * __cdecl UMeshSpaceDeformerTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSpaceDeformerTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSpaceDeformerTool",
               &Z_Registration_Info_UClass_UMeshSpaceDeformerTool.InnerSingleton,
               StaticRegisterNativesUMeshSpaceDeformerTool,0x300,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSpaceDeformerTool>,
               InternalVTableHelperCtorCaller<UMeshSpaceDeformerTool>,local_res8,
               USingleSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSpaceDeformerTool.InnerSingleton;
}

// HasAccept @ 14cd03450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSpaceDeformerTool::HasAccept(UMeshSpaceDeformerTool *this)

{
  return true;
}

// HasCancel @ 14cd034f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSpaceDeformerTool::HasCancel(UMeshSpaceDeformerTool *this)

{
  return true;
}

// IsInputSelectionValidOnOutput @ 14cd08700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSpaceDeformerTool::IsInputSelectionValidOnOutput(UMeshSpaceDeformerTool *this)

{
  return true;
}

// OnPropertyModified @ 14cd11c10

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
UMeshSpaceDeformerTool::OnPropertyModified
          (UMeshSpaceDeformerTool *this,UObject *param_1,FProperty *param_2)

{
  double dVar1;
  
  ((this->UpIntervalSource).field0_0x0.DebugPtr)->Value =
       ((this->Settings).field0_0x0.DebugPtr)->UpperBoundsInterval;
  ((this->DownIntervalSource).field0_0x0.DebugPtr)->Value =
       ((this->Settings).field0_0x0.DebugPtr)->LowerBoundsInterval;
  dVar1 = GetModifierGizmoValue(this);
  ((this->ForwardIntervalSource).field0_0x0.DebugPtr)->Value = (float)dVar1;
  UpdatePreview(this);
  UPreviewMesh::SetVisible
            ((this->OriginalMeshPreview).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->bShowOriginalMesh);
  return;
}

// OnShutdown @ 14cd12b10

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
UMeshSpaceDeformerTool::OnShutdown(UMeshSpaceDeformerTool *this,EToolShutdownType param_1)

{
  UMeshSpaceDeformerToolProperties *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  UObjectBaseUtility *this_00;
  UMeshOpPreviewWithBackgroundCompute *this_01;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> TVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  FText *pFVar7;
  UInteractiveToolManager *this_02;
  UInteractiveGizmoManager *pUVar8;
  FConversionToMeshDescriptionOptions local_98;
  FString local_88;
  FText local_78;
  FDynamicMeshOpResult local_68;
  
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_88,L"");
  (*UNRECOVERED_JUMPTABLE)(pUVar1,this,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
  }
  (**(code **)(*plVar5 + 0x20))();
  UPreviewMesh::SetVisible((this->OriginalMeshPreview).field0_0x0.DebugPtr,false);
  UPreviewMesh::Disconnect((this->OriginalMeshPreview).field0_0x0.DebugPtr);
  (this->OriginalMeshPreview).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  this_01 = (this->Preview).field0_0x0.DebugPtr;
  if (this_01 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Shutdown(this_01,&local_68);
    if (param_1 == Accept) {
      lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x10);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"MeshSpaceDeformerTool",L"MeshSpaceDeformer",L"Space Deformer")
      ;
      (*UNRECOVERED_JUMPTABLE)(lVar6 + 0x28,pFVar7);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      TVar2.Ptr = local_68.Mesh.Ptr;
      if (local_68.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMeshResult != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshSpaceDeformerTool.cpp"
                           ,0x150,L"");
        if (bVar3) {
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      local_98.bSetPolyGroups = true;
      local_98.bUpdatePositions = true;
      local_98.bUpdateNormals = true;
      local_98.bUpdateTangents = false;
      local_98.bUpdateUVs = false;
      local_98.bUpdateVtxColors = false;
      local_98.bTransformVtxColorsSRGBToLinear = true;
      local_98.bConvertBackToNonManifold = false;
      local_98.bSetHardEdgesFromNormalSeams = true;
      UE::ToolTarget::CommitDynamicMeshUpdate
                ((UToolTarget *)this->_padding_,TVar2.Ptr,true,&local_98,
                 (FComponentMaterialSet *)0x0);
      lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
    }
    if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
    }
  }
  (**(code **)(((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  this_02 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar8 = UInteractiveToolManager::GetPairedGizmoManager(this_02);
  (**(code **)(pUVar8->_padding_ + 0x2e8))(pUVar8,this);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar8->_padding_ + 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x00014cd12d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar8,&UIntervalGizmo::GizmoName,UNRECOVERED_JUMPTABLE);
  return;
}

// OnTick @ 14cd142a0

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

void __thiscall UMeshSpaceDeformerTool::OnTick(UMeshSpaceDeformerTool *this,float param_1)

{
  UMeshOpPreviewWithBackgroundCompute *this_00;
  double dVar1;
  undefined1 auStack_c8 [64];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->PendingAction != NoAction) {
    if (this->PendingAction == ShiftToCenter) {
      local_88.Translation.ZW.m128d_f64[0] = (this->MeshCenter).field0_0x0._s_0.Z;
      dVar1 = (this->MeshCenter).field0_0x0._s_0.Y;
      (this->GizmoFrame).Origin.field0_0x0._s_0.X = (this->MeshCenter).field0_0x0._s_0.X;
      (this->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar1;
      (this->GizmoFrame).Origin.field0_0x0._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
      local_88.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)&(this->GizmoFrame).Origin.field0_0x0;
      local_88.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 4);
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 8);
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 0xc);
      local_88.Rotation.XY.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
      local_88.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 8);
      local_88.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 0xc);
      local_88.Rotation.ZW.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
      local_88.Rotation.ZW.m128d_f64[1] = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
      local_88.Translation.ZW.m128d_f64[1] = 0.0;
      local_88.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_88.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_88.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_88.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      UCombinedTransformGizmo::ReinitializeGizmoTransform
                ((this->TransformGizmo).field0_0x0.DebugPtr,&local_88,true);
      UpdatePreview(this);
    }
    this->PendingAction = NoAction;
  }
  this_00 = (this->Preview).field0_0x0.DebugPtr;
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Tick(this_00,param_1);
  }
  return;
}

// Render @ 14cd1b870

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
UMeshSpaceDeformerTool::Render(UMeshSpaceDeformerTool *this,IToolsContextRenderAPI *param_1)

{
  FToolDataVisualizer *this_00;
  FScriptContainerElement *pFVar1;
  UMeshSpaceDeformerToolProperties *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  FViewCameraState *pFVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined1 local_d8 [16];
  undefined1 local_b8 [160];
  
  (**(code **)(((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  if ((pUVar2->bDrawVisualization != false) && (pUVar2->SelectedOperationType == Bend)) {
    this_00 = &this->VisualizationRenderer;
    pFVar17 = (FViewCameraState *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_b8);
    FToolDataVisualizer::BeginFrame(this_00,param_1,pFVar17);
    iVar18 = (this->VisualizationPoints).ArrayNum;
    uVar19 = 1;
    if (1 < iVar18) {
      lVar20 = 0x18;
      do {
        uVar16 = 0;
        if ((int)uVar19 < iVar18) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->VisualizationPoints).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)(uVar19 - 1) < (this->VisualizationPoints).ArrayNum) {
          uVar16 = -uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = pFVar3 + lVar20;
        local_108 = *(double *)pFVar1;
        dStack_100 = *(double *)(pFVar1 + 8);
        pFVar1 = (this->VisualizationPoints).AllocatorInstance.Data;
        local_f8 = *(double *)(pFVar3 + lVar20 + 0x10);
        auVar33 = *(undefined1 (*) [16])
                   (this->VisualizationRenderer).TotalTransform.Rotation.XY.m128d_f64;
        dVar11 = local_f8 * (this->VisualizationRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
        dVar12 = (this->VisualizationRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar13 = (this->VisualizationRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
        auVar21 = *(undefined1 (*) [16])
                   (this->VisualizationRenderer).TotalTransform.Rotation.XY.m128d_f64;
        dVar7 = (this->VisualizationRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * local_108;
        dVar9 = (this->VisualizationRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] * dStack_100;
        uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar24 = *(undefined1 (*) [16])
                   (this->VisualizationRenderer).TotalTransform.Rotation.ZW.m128d_f64;
        auVar39._8_4_ = SUB84(dVar9,0);
        auVar39._0_8_ = dVar7;
        auVar39._12_4_ = uVar38;
        dVar6 = auVar24._0_8_;
        auVar27 = blendpd(auVar21,auVar24,2);
        auVar40._0_8_ = auVar39._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar7;
        auVar40._8_8_ = dVar11 * auVar21._8_8_ - dVar6 * dVar9;
        auVar30._8_4_ = SUB84(dVar9,0);
        auVar30._0_8_ = dVar7;
        auVar30._12_4_ = uVar38;
        auVar21._8_4_ = SUB84(dVar12,0);
        auVar21._0_8_ = dVar11;
        auVar21._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar21 = blendpd(auVar30,auVar21,2);
        auVar22._0_8_ = auVar21._0_8_ * dVar6 - auVar27._0_8_ * dVar11;
        auVar22._8_8_ = auVar21._8_8_ * auVar24._8_8_ - auVar27._8_8_ * dVar12;
        auVar21 = blendpd(auVar40,auVar22,2);
        auVar41._0_8_ = auVar21._0_8_ + auVar21._0_8_;
        auVar41._8_8_ = auVar21._8_8_ + auVar21._8_8_;
        dVar12 = auVar40._8_8_ + auVar40._8_8_;
        dVar5 = auVar22._0_8_ + auVar22._0_8_;
        uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
        auVar34._8_4_ = SUB84(dVar5,0);
        auVar34._0_8_ = dVar12;
        auVar34._12_4_ = uVar38;
        auVar28._8_4_ = SUB84(dVar5,0);
        auVar28._0_8_ = dVar12;
        auVar28._12_4_ = uVar38;
        auVar21 = blendpd(auVar28,auVar41,2);
        auVar35._0_8_ = auVar34._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar12;
        auVar35._8_8_ = auVar41._0_8_ * auVar33._8_8_ - dVar6 * dVar5;
        auVar27._8_4_ = SUB84(auVar35._8_8_,0);
        auVar27._0_8_ = auVar35._0_8_;
        auVar27._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
        auVar33 = blendpd(auVar33,auVar24,2);
        pFVar3 = pFVar1 + lVar20 + -0x18;
        local_f0 = *(double *)pFVar3;
        dStack_e8 = *(double *)(pFVar3 + 8);
        dVar14 = (this->VisualizationRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
        dVar8 = (this->VisualizationRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * local_f0;
        dVar10 = (this->VisualizationRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] * dStack_e8;
        uVar38 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar29._0_8_ = auVar21._0_8_ * dVar6 - auVar33._0_8_ * auVar41._0_8_;
        auVar29._8_8_ = auVar21._8_8_ * auVar24._8_8_ - auVar33._8_8_ * auVar41._8_8_;
        auVar33 = *(undefined1 (*) [16])
                   (this->VisualizationRenderer).TotalTransform.Rotation.ZW.m128d_f64;
        local_e0 = *(double *)(pFVar1 + lVar20 + -8);
        dVar6 = dVar5 * dVar13 + dVar9 + auVar29._0_8_ +
                (this->VisualizationRenderer).TotalTransform.Translation.XY.m128d_f64[1];
        local_d8 = *(undefined1 (*) [16])
                    (this->VisualizationRenderer).TotalTransform.Rotation.XY.m128d_f64;
        dVar9 = local_e0 * (this->VisualizationRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
        dVar5 = (this->VisualizationRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar21 = blendpd(auVar35,auVar29,2);
        local_128 = auVar41._0_8_ * dVar13 + dVar11 + auVar21._0_8_ +
                    (this->VisualizationRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
        local_138._8_4_ = SUB84(dVar6,0);
        local_138._0_8_ =
             dVar12 * dVar13 + dVar7 + auVar27._8_8_ +
             (this->VisualizationRenderer).TotalTransform.Translation.XY.m128d_f64[0];
        local_138._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar42._8_4_ = SUB84(dVar10,0);
        auVar42._0_8_ = dVar8;
        auVar42._12_4_ = uVar38;
        dVar6 = auVar33._0_8_;
        auVar43._0_8_ = auVar42._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar8;
        auVar43._8_8_ = dVar9 * local_d8._8_8_ - dVar6 * dVar10;
        auVar23._8_4_ = SUB84(dVar10,0);
        auVar23._0_8_ = dVar8;
        auVar23._12_4_ = uVar38;
        auVar24._8_4_ = SUB84(dVar5,0);
        auVar24._0_8_ = dVar9;
        auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar24 = blendpd(auVar23,auVar24,2);
        auVar21 = *(undefined1 (*) [16])
                   (this->VisualizationRenderer).TotalTransform.Rotation.XY.m128d_f64;
        auVar30 = blendpd(local_d8,auVar33,2);
        auVar25._0_8_ = auVar24._0_8_ * dVar6 - auVar30._0_8_ * dVar9;
        auVar25._8_8_ = auVar24._8_8_ * auVar33._8_8_ - auVar30._8_8_ * dVar5;
        auVar24 = blendpd(auVar43,auVar25,2);
        dVar12 = auVar43._8_8_ + auVar43._8_8_;
        dVar5 = auVar25._0_8_ + auVar25._0_8_;
        uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
        auVar44._0_8_ = auVar24._0_8_ + auVar24._0_8_;
        auVar44._8_8_ = auVar24._8_8_ + auVar24._8_8_;
        auVar36._8_4_ = SUB84(dVar5,0);
        auVar36._0_8_ = dVar12;
        auVar36._12_4_ = uVar38;
        auVar31._8_4_ = SUB84(dVar5,0);
        auVar31._0_8_ = dVar12;
        auVar31._12_4_ = uVar38;
        auVar24 = blendpd(auVar31,auVar44,2);
        auVar37._0_8_ = auVar36._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
        auVar37._8_8_ = auVar44._0_8_ * auVar21._8_8_ - dVar6 * dVar5;
        auVar26._8_4_ = SUB84(auVar37._8_8_,0);
        auVar26._0_8_ = auVar37._0_8_;
        auVar26._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
        auVar21 = blendpd(auVar21,auVar33,2);
        auVar32._0_8_ = auVar24._0_8_ * dVar6 - auVar21._0_8_ * auVar44._0_8_;
        auVar32._8_8_ = auVar24._8_8_ * auVar33._8_8_ - auVar21._8_8_ * auVar44._8_8_;
        dVar6 = dVar5 * dVar14 + dVar10 + auVar32._0_8_ +
                (this->VisualizationRenderer).TotalTransform.Translation.XY.m128d_f64[1];
        auVar33 = blendpd(auVar37,auVar32,2);
        local_120._8_4_ = SUB84(dVar6,0);
        local_120._0_8_ =
             dVar12 * dVar14 + dVar8 + auVar26._8_8_ +
             (this->VisualizationRenderer).TotalTransform.Translation.XY.m128d_f64[0];
        local_120._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_110 = auVar44._0_8_ * dVar14 + dVar9 + auVar33._0_8_ +
                    (this->VisualizationRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
        (**(code **)(this_00->_padding_ + 8))
                  (this_00,local_120,local_138,&(this->VisualizationRenderer).LineColor,
                   (this->VisualizationRenderer).LineThickness,
                   (this->VisualizationRenderer).bDepthTested);
        iVar18 = (this->VisualizationPoints).ArrayNum;
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x18;
      } while ((int)uVar19 < iVar18);
    }
    FToolDataVisualizer::EndFrame(this_00);
  }
  return;
}

// RequestAction @ 14cd1c2d0

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
UMeshSpaceDeformerTool::RequestAction
          (UMeshSpaceDeformerTool *this,EMeshSpaceDeformerToolAction param_1)

{
  if (this->PendingAction == NoAction) {
    this->PendingAction = param_1;
  }
  return;
}

// SetGizmoFrameFromWorldPos @ 14cd1e830

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
UMeshSpaceDeformerTool::SetGizmoFrameFromWorldPos
          (UMeshSpaceDeformerTool *this,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auStack_118 [32];
  TQuaternion<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_118;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  (this->GizmoFrame).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar7;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Z = dVar1;
  if (param_3) {
    auVar6 = *(undefined1 (*) [16])&param_2->field0_0x0;
    local_98 = (param_2->field0_0x0)._s_0.Z;
    local_d8._s_0.Z = (double)auVar6._0_8_;
    dStack_b0 = auVar6._8_8_;
    dVar7 = dStack_b0 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
            local_98 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dStack_b8 = local_98 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
                local_d8._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    dVar1 = local_d8._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
            dStack_b0 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    auVar4._8_4_ = auVar6._8_4_;
    auVar4._0_8_ = dVar7;
    auVar4._12_4_ = auVar6._12_4_;
    auVar5._8_8_ = auVar4._8_8_;
    auVar5._0_8_ = dVar7 * dVar7;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dStack_b8 * dStack_b8 + auVar5._0_8_ + dVar1 * dVar1;
    auVar6 = sqrtpd(auVar5,auVar6);
    if (auVar6._0_8_ <= 0.0) {
      local_d8._s_0.Y = 0.0;
      dStack_b8 = 0.0;
      local_a0 = 0.0;
    }
    else {
      local_a0 = __real_3ff0000000000000 / auVar6._0_8_;
      local_d8._s_0.Y = local_a0 * dVar7;
      dStack_b8 = local_a0 * dStack_b8;
      local_a0 = local_a0 * dVar1;
    }
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
    local_d8._s_0.X = local_98 * dStack_b8 - dStack_b0 * local_a0;
    uStack_c0 = local_d8._s_0.Z * local_a0 - local_98 * local_d8._s_0.Y;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.W = __real_3ff0000000000000;
    dStack_a8 = dStack_b0 * local_d8._s_0.Y - local_d8._s_0.Z * dStack_b8;
    local_f8._s_0.Y = 0.0;
    local_f8._s_0.Z = 0.0;
    UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
              ((TQuaternion<double> *)&local_f8._s_0,(TMatrix3<double> *)&local_d8._s_0);
    uStack_c0._0_4_ = SUB84(local_f8._s_0.X,0);
    uStack_c0._4_4_ = (undefined4)((ulonglong)local_f8._0_8_ >> 0x20);
    (this->GizmoFrame).Origin.field0_0x0._s_0.X = dVar1;
    (this->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar7;
    *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 0x10) = uVar2;
    *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 0x14) = uVar3;
    *(undefined4 *)&(this->GizmoFrame).Rotation.field0_0x0 = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 4) = uStack_c0._4_4_;
    (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = local_f8._s_0.Y;
    (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = local_f8._s_0.Z;
    (this->GizmoFrame).Rotation.field0_0x0._s_0.W = local_f8._s_0.W;
  }
  dStack_b8 = (this->GizmoFrame).Origin.field0_0x0._s_0.X;
  dStack_b0 = (this->GizmoFrame).Origin.field0_0x0._s_0.Y;
  local_d8._s_0.X = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
  local_d8._s_0.Y = (this->GizmoFrame).Rotation.field0_0x0._s_0.Y;
  local_d8._s_0.Z = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
  uStack_c0 = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
  dStack_a8 = (this->GizmoFrame).Origin.field0_0x0._s_0.Z;
  local_88 = ___xmm_00000000000000003ff0000000000000;
  uStack_80 = _UNK_150689518;
  local_a0 = 0.0;
  local_98 = (double)___xmm_3ff00000000000003ff0000000000000;
  uStack_90 = _UNK_150689688;
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((this->TransformGizmo).field0_0x0.DebugPtr,(TTransform<double> *)&local_d8._s_0,true);
  UpdatePreview(this);
  return;
}

// Setup @ 14cd24cf0

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

void __thiscall UMeshSpaceDeformerTool::Setup(UMeshSpaceDeformerTool *this)

{
  int *piVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar2;
  TVector<double> *pTVar3;
  TPimplPtr<FSelectClickedAction,0> *pTVar4;
  UObjectBaseUtility *this_00;
  FSelectClickedAction *pFVar5;
  UGizmoTransformChangeStateTarget *pUVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  FLinearColor FVar15;
  bool bVar16;
  int iVar17;
  UClass *pUVar18;
  UMeshSpaceDeformerToolProperties *pUVar19;
  UMeshSpaceDeformerToolActionPropertySet *pUVar20;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar21;
  FDynamicMesh3 *pFVar22;
  bool *pbVar23;
  UObject *pUVar24;
  UPreviewMesh *pUVar25;
  UWorld *pUVar26;
  UInteractiveToolManager *pUVar27;
  UMaterialInstanceDynamic *pUVar28;
  double *pdVar29;
  TFrame3<double> *pTVar30;
  TVector<double>_u_0 *pTVar31;
  code *pcVar32;
  USceneSnappingManager *pUVar33;
  UTransformProxy *pUVar34;
  UCombinedTransformGizmo *pUVar35;
  longlong lVar36;
  UGizmoLocalFloatParameterSource *pUVar37;
  UInteractiveGizmoManager *pUVar38;
  UIntervalGizmo *pUVar39;
  FName *pFVar40;
  UMeshOpPreviewWithBackgroundCompute *pUVar41;
  FComponentMaterialSet *pFVar42;
  UMaterialInterface *pUVar43;
  UDragAlignmentMechanic *pUVar44;
  FText *pFVar45;
  longlong *plVar46;
  FString *pFVar47;
  bool *pbVar48;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar49;
  FScriptContainerElement *pFVar50;
  wchar_t *pwVar51;
  TVector<double>_u_0 *pTVar52;
  longlong lVar53;
  TVector<double>_u_0 *pTVar54;
  TFrame3<double> *this_01;
  wchar_t *pwVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  undefined1 auStackY_b88 [32];
  undefined8 local_b38;
  bool *local_b30;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> local_b28;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_b18;
  FGetMeshParameters local_b08;
  FString local_af8;
  FDynamicMesh3 *local_ae8;
  FSharedReferencer<1> local_ae0;
  FString local_ad8;
  UMeshSpaceDeformerTool *local_ac8;
  UMeshSpaceDeformerTool *local_ac0;
  UMeshSpaceDeformerTool *local_ab8;
  UMeshSpaceDeformerTool *local_ab0;
  undefined8 local_aa8;
  TQuaternion<double>_u_0 local_aa0;
  FString local_a80;
  double local_a70 [2];
  double local_a60;
  TVector<double>_u_0 local_a58;
  double local_a40;
  double local_a38;
  double local_a30;
  undefined1 local_a28 [56];
  TReferenceControllerBase<1> *local_9f0;
  code *local_9e8;
  longlong lStack_9e0;
  FComponentMaterialSet local_9d8;
  FText local_9c8;
  FText local_9b8;
  TVector<double>_u_0 local_9a8;
  undefined1 local_990 [16];
  double local_980;
  double local_978;
  double dStack_970;
  double local_968;
  TVector<double>_u_0 local_960;
  TVector<double>_u_0 local_948;
  TVector<double>_u_0 local_930;
  TVector<double>_u_0 local_918;
  TVector<double>_u_0 local_900;
  TVector<double>_u_0 local_8e8;
  TVector<double>_u_0 local_8d0;
  TVector<double>_u_0 local_8b8;
  undefined1 local_8a0 [40];
  TPimplPtr<FSelectClickedAction,0> local_878;
  FString local_870;
  FString local_860;
  FString local_850;
  FComponentMaterialSet local_840;
  TFrame3<double> local_830;
  TFrame3<double> local_7f8;
  TFrame3<double> local_7c0;
  FDynamicMesh3 local_788;
  undefined1 local_558 [128];
  undefined1 local_4d8 [128];
  undefined1 local_458 [128];
  undefined1 local_3d8 [128];
  undefined1 local_358 [128];
  undefined1 local_2d8 [128];
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  longlong *plStack_230;
  longlong local_228;
  undefined8 uStack_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  longlong *plStack_200;
  TTransform<double> local_1f8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_b88;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = UMeshSpaceDeformerToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_558,pUVar18);
  local_558._8_8_ = this;
  pUVar19 = (UMeshSpaceDeformerToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_558);
  if (local_558._64_8_ != 0) {
    plVar46 = (longlong *)(local_558 + 0x50);
    if ((longlong *)local_558._104_8_ != (longlong *)0x0) {
      plVar46 = (longlong *)local_558._104_8_;
    }
    (**(code **)(*plVar46 + 0x10))(plVar46);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UMeshSpaceDeformerToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar19;
  pwVar55 = L"";
  pcVar32 = *(code **)(pUVar19->_padding_ + 0x2b8);
  ::FString::FString(&local_af8,L"");
  (*pcVar32)(pUVar19,this,&local_af8);
  if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->Settings).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = UMeshSpaceDeformerToolActionPropertySet::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_4d8,pUVar18);
  local_4d8._8_8_ = this;
  pUVar20 = (UMeshSpaceDeformerToolActionPropertySet *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_4d8);
  if (local_4d8._64_8_ != 0) {
    plVar46 = (longlong *)(local_4d8 + 0x50);
    if ((longlong *)local_4d8._104_8_ != (longlong *)0x0) {
      plVar46 = (longlong *)local_4d8._104_8_;
    }
    (**(code **)(*plVar46 + 0x10))(plVar46);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UMeshSpaceDeformerToolActionPropertySet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->ToolActions).field0_0x0.DebugPtr = pUVar20;
  local_ac8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar20->ParentTool).WeakPtr,(FObjectPtr)&local_ac8);
  (**(code **)(this->_padding_ + 0x318))(this,(this->ToolActions).field0_0x0.DebugPtr);
  pTVar21 = MakeShared<UE::Geometry::FDynamicMesh3,1>
                      ((TSharedRef<UE::Geometry::FDynamicMesh3,1> *)(local_a28 + 0x30));
  local_ae0.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
  local_ae8 = pTVar21->Object;
  if (local_ae0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ae0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_ae0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->OriginalDynamicMesh;
  pbVar48 = (bool *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_ae8) {
    pTVar2->Object = local_ae8;
    local_ae8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalDynamicMesh).SharedReferenceCount,&local_ae0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9f0);
  local_b08.bHaveRequestLOD = false;
  local_b08._1_3_ = 0;
  local_b08.RequestLOD = Default;
  local_b08.bWantMeshTangents = false;
  local_b08._9_3_ = 0;
  pFVar22 = UE::ToolTarget::GetDynamicMeshCopy(&local_788,(UToolTarget *)this->_padding_,&local_b08)
  ;
  if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar16)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(pTVar2->Object,pFVar22);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_788);
  this_00 = (UObjectBaseUtility *)this->_padding_;
  pbVar23 = pbVar48;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar18 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    pbVar23 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar18);
  }
  local_b30 = pbVar23;
  (**(code **)(*(longlong *)pbVar23 + 0x28))(pbVar23,&local_1f8);
  (**(code **)(*(longlong *)pbVar23 + 0x20))(pbVar23,0);
  pUVar24 = GetTransientPackageAsObject();
  pUVar25 = NewObject<UPreviewMesh>(pUVar24);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar25 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar25);
  }
  (this->OriginalMeshPreview).field0_0x0.DebugPtr = pUVar25;
  pUVar26 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  UPreviewMesh::CreateInWorld(pUVar25,pUVar26,&local_1f8);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((this->OriginalMeshPreview).field0_0x0.DebugPtr,(UToolTarget *)this->_padding_);
  UPreviewMesh::UpdatePreview
            ((this->OriginalMeshPreview).field0_0x0.DebugPtr,pTVar2->Object,FullUpdate,
             AllVertexAttribs);
  pUVar25 = (this->OriginalMeshPreview).field0_0x0.DebugPtr;
  pUVar27 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar28 = ToolSetupUtil::GetCustomDepthOffsetMaterial
                      (pUVar27,&FLinearColor::White,__real_bf000000,__real_3ecccccd);
  UPreviewMesh::SetMaterial(pUVar25,0,(UMaterialInterface *)pUVar28);
  UPreviewMesh::SetVisible
            ((this->OriginalMeshPreview).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->bShowOriginalMesh);
  if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  UE::Geometry::FDynamicMesh3::GetBounds
            (pTVar2->Object,(TAxisAlignedBox3<double> *)&local_a58._s_0,false);
  dVar8 = __real_3fe0000000000000;
  if (((local_a40 < local_a58._s_0.X) || (local_a38 < local_a58._s_0.Y)) ||
     (local_a30 < local_a58._s_0.Z)) {
    local_aa0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    local_aa0._s_0.Z = local_a30 - local_a58._s_0.Z;
    uVar7 = local_a38 - local_a58._s_0.Y;
    local_8a0._8_4_ = (int)uVar7;
    local_8a0._0_8_ = local_a40 - local_a58._s_0.X;
    local_8a0._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
    uVar13 = local_a40 - local_a58._s_0.X;
    local_8a0._16_8_ = local_aa0._s_0.Z;
  }
  local_a60 = local_1f8.Scale3D.ZW.m128d_f64[0];
  if (((local_a40 < local_a58._s_0.X) || (local_a38 < local_a58._s_0.Y)) ||
     (local_a30 < local_a58._s_0.Z)) {
    local_978 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_970 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pdVar29 = &local_978;
    local_968 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    auVar14._8_8_ = local_1f8.Rotation.ZW.m128d_f64[1];
    auVar14._0_8_ = local_1f8.Rotation.ZW.m128d_f64[0];
    pdVar29 = (double *)local_990;
    dVar64 = (local_a40 + local_a58._s_0.X) * __real_3fe0000000000000;
    local_878.Ptr =
         (FSelectClickedAction *)((local_a30 + local_a58._s_0.Z) * __real_3fe0000000000000);
    dVar63 = (local_a38 + local_a58._s_0.Y) * __real_3fe0000000000000;
    dVar10 = (double)local_878.Ptr * local_a60;
    dVar11 = local_1f8.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar65._8_8_ = local_1f8.Rotation.XY.m128d_f64[1];
    auVar65._0_8_ = local_1f8.Rotation.XY.m128d_f64[0];
    local_8a0._32_4_ = SUB84(dVar63,0);
    local_8a0._24_8_ = dVar64;
    local_8a0._36_4_ = (int)((ulonglong)dVar63 >> 0x20);
    dVar64 = dVar64 * local_1f8.Scale3D.XY.m128d_f64[0];
    dVar63 = dVar63 * local_1f8.Scale3D.XY.m128d_f64[1];
    auVar65 = blendpd(auVar65,auVar14,2);
    dVar9 = dVar10 * local_1f8.Rotation.XY.m128d_f64[1] -
            local_1f8.Rotation.ZW.m128d_f64[0] * dVar63;
    auVar56._8_4_ = SUB84(dVar63,0);
    auVar56._0_8_ = dVar64;
    auVar56._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
    auVar57._8_4_ = SUB84(dVar11,0);
    auVar57._0_8_ = dVar10;
    auVar57._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar57 = blendpd(auVar56,auVar57,2);
    auVar66._8_4_ = SUB84(dVar9,0);
    auVar66._0_8_ =
         dVar63 * local_1f8.Rotation.XY.m128d_f64[0] - local_1f8.Rotation.XY.m128d_f64[1] * dVar64;
    auVar66._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar58._0_8_ = auVar57._0_8_ * local_1f8.Rotation.ZW.m128d_f64[0] - auVar65._0_8_ * dVar10;
    auVar58._8_8_ = auVar57._8_8_ * local_1f8.Rotation.ZW.m128d_f64[1] - auVar65._8_8_ * dVar11;
    auVar57 = blendpd(auVar66,auVar58,2);
    dVar9 = dVar9 + dVar9;
    dVar11 = auVar58._0_8_ + auVar58._0_8_;
    uVar68 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar67._0_8_ = auVar57._0_8_ + auVar57._0_8_;
    auVar67._8_8_ = auVar57._8_8_ + auVar57._8_8_;
    auVar61._8_4_ = SUB84(dVar11,0);
    auVar61._0_8_ = dVar9;
    auVar61._12_4_ = uVar68;
    auVar59._8_4_ = SUB84(dVar11,0);
    auVar59._0_8_ = dVar9;
    auVar59._12_4_ = uVar68;
    auVar57 = blendpd(auVar59,auVar67,2);
    auVar62._0_8_ =
         auVar61._8_8_ * local_1f8.Rotation.XY.m128d_f64[0] -
         dVar9 * local_1f8.Rotation.XY.m128d_f64[1];
    auVar62._8_8_ =
         auVar67._0_8_ * local_1f8.Rotation.XY.m128d_f64[1] -
         dVar11 * local_1f8.Rotation.ZW.m128d_f64[0];
    auVar60._0_8_ =
         auVar57._0_8_ * local_1f8.Rotation.ZW.m128d_f64[0] - auVar67._0_8_ * auVar65._0_8_;
    auVar60._8_8_ =
         auVar57._8_8_ * local_1f8.Rotation.ZW.m128d_f64[1] - auVar67._8_8_ * auVar65._8_8_;
    auVar57 = blendpd(auVar62,auVar60,2);
    local_1f8.Translation.XY.m128d_f64[1] =
         dVar11 * local_1f8.Rotation.ZW.m128d_f64[1] + dVar63 + auVar60._0_8_ +
         local_1f8.Translation.XY.m128d_f64[1];
    local_990._8_4_ = SUB84(local_1f8.Translation.XY.m128d_f64[1],0);
    local_990._0_8_ =
         dVar9 * local_1f8.Rotation.ZW.m128d_f64[1] + dVar64 + auVar62._8_8_ +
         local_1f8.Translation.XY.m128d_f64[0];
    local_990._12_4_ = (int)((ulonglong)local_1f8.Translation.XY.m128d_f64[1] >> 0x20);
    local_980 = auVar67._0_8_ * local_1f8.Rotation.ZW.m128d_f64[1] + dVar10 + auVar57._0_8_ +
                local_1f8.Translation.ZW.m128d_f64[0];
  }
  dVar11 = pdVar29[1];
  pTVar3 = &this->MeshCenter;
  dVar9 = pdVar29[2];
  (pTVar3->field0_0x0)._s_0.X = *pdVar29;
  (this->MeshCenter).field0_0x0._s_0.Y = dVar11;
  local_a70[0] = local_1f8.Scale3D.XY.m128d_f64[0];
  local_a70[1] = local_1f8.Scale3D.XY.m128d_f64[1];
  (this->MeshCenter).field0_0x0._s_0.Z = dVar9;
  dVar11 = (double)CONCAT44(local_1f8.Scale3D.ZW.m128d_f64[0]._4_4_ &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_1f8.Scale3D.ZW.m128d_f64[0]._0_4_ &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) * local_aa0._s_0.Z;
  dVar9 = (double)CONCAT44(local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) * (double)uVar7;
  dVar64 = (double)CONCAT44(local_1f8.Scale3D.XY.m128d_f64[0]._4_4_ &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_1f8.Scale3D.XY.m128d_f64[0]._0_4_ &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) * (double)uVar13;
  if ((dVar11 < dVar9) || (dVar11 < dVar64)) {
    if (dVar9 < dVar64) {
      pTVar31 = &local_8d0;
      pTVar54 = &local_8b8;
      local_8d0._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_8d0._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      pTVar52 = &local_9a8;
      pTVar30 = &local_7c0;
      local_8d0._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_8b8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_8b8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_8b8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_9a8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_9a8._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_9a8._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      dVar11 = dVar64;
    }
    else {
      pTVar31 = &local_918;
      pTVar54 = &local_900;
      local_918._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_918._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      pTVar52 = &local_8e8;
      pTVar30 = &local_7f8;
      local_918._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_900._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_900._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_900._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_8e8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_8e8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_8e8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      dVar11 = dVar9;
    }
    pTVar30 = UE::Geometry::TFrame3<double>::TFrame3<double>
                        (pTVar30,pTVar3,(TVector<double> *)&pTVar52->_s_0,
                         (TVector<double> *)&pTVar54->_s_0,(TVector<double> *)&pTVar31->_s_0);
  }
  else {
    local_960._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_960._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_960._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_948._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_948._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_948._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_930._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_930._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_930._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    pTVar30 = UE::Geometry::TFrame3<double>::TFrame3<double>
                        (&local_830,pTVar3,(TVector<double> *)&local_930._s_0,
                         (TVector<double> *)&local_948._s_0,(TVector<double> *)&local_960._s_0);
  }
  this_01 = &this->GizmoFrame;
  dVar9 = (pTVar30->Origin).field0_0x0._s_0.Y;
  (this_01->Origin).field0_0x0._s_0.X = (pTVar30->Origin).field0_0x0._s_0.X;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar9;
  dVar9 = (pTVar30->Rotation).field0_0x0._s_0.X;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Z = (pTVar30->Origin).field0_0x0._s_0.Z;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = dVar9;
  dVar9 = (pTVar30->Rotation).field0_0x0._s_0.Z;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = (pTVar30->Rotation).field0_0x0._s_0.Y;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = dVar9;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = (pTVar30->Rotation).field0_0x0._s_0.W;
  local_aa0._s_0.Z = local_1f8.Rotation.ZW.m128d_f64[0];
  local_aa0._s_0.X = local_1f8.Rotation.XY.m128d_f64[0];
  local_aa0._s_0.W = local_1f8.Rotation.ZW.m128d_f64[1];
  local_aa0._s_0.Y = local_1f8.Rotation.XY.m128d_f64[1];
  UE::Geometry::TFrame3<double>::Rotate(this_01,(TQuaternion<double> *)&local_aa0._s_0);
  this->ModifierGizmoLength = dVar11;
  pbVar23 = ::operator_new(0xc0);
  if (pbVar23 != (bool *)0x0) {
    *(longlong *)(pbVar23 + 8) = 0;
    *(code **)pbVar23 = UE::Core::Private::PimplPtr::DeleterFunc<FSelectClickedAction>;
    memset(pbVar23 + 0x10,0,0xb0);
    *(undefined ***)(pbVar23 + 0x10) = &___7FSelectClickedAction__6B_;
    pbVar48 = pbVar23;
  }
  pTVar4 = &this->SetPointInWorldConnector;
  if ((TPimplPtr<FSelectClickedAction,0> *)(local_a28 + 0x28) == pTVar4) {
    if ((FSelectClickedAction *)(pbVar48 + 0x10) == (FSelectClickedAction *)0x0) goto LAB_14cd2563b;
    pcVar32 = *(code **)pbVar48;
  }
  else {
    pFVar5 = pTVar4->Ptr;
    pTVar4->Ptr = (FSelectClickedAction *)(pbVar48 + 0x10);
    if (pFVar5 == (FSelectClickedAction *)0x0) goto LAB_14cd2563b;
    pcVar32 = *(code **)&pFVar5[-1].bShiftModifierToggle;
    pbVar48 = &pFVar5[-1].bShiftModifierToggle;
  }
  (*pcVar32)(pbVar48);
LAB_14cd2563b:
  pUVar27 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar33 = USceneSnappingManager::Find(pUVar27);
  pTVar4->Ptr->SnapManager = pUVar33;
  pFVar5 = pTVar4->Ptr;
  pTVar49 = &pFVar5->InvisibleComponentsToHitTest;
  local_b38 = (**(code **)(*(longlong *)local_b30 + 0x30))();
  pFVar50 = (pTVar49->AllocatorInstance).Data;
  if (((pFVar50 <= (FScriptContainerElement *)&local_b38) &&
      ((FScriptContainerElement *)&local_b38 <
       pFVar50 + (longlong)(pFVar5->InvisibleComponentsToHitTest).ArrayMax * 8)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  iVar17 = (pFVar5->InvisibleComponentsToHitTest).ArrayNum;
  piVar1 = &(pFVar5->InvisibleComponentsToHitTest).ArrayMax;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar49->AllocatorInstance,piVar1);
  }
  (pFVar5->InvisibleComponentsToHitTest).ArrayNum = iVar17 + 1;
  *(undefined8 *)((pTVar49->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_b38;
  pFVar5 = pTVar4->Ptr;
  local_228 = *(longlong *)&pFVar5->OnClickedPositionFunc;
  uVar7 = *(undefined8 *)&(pFVar5->OnClickedPositionFunc).field_0x8;
  local_218 = *(longlong *)&(pFVar5->OnClickedPositionFunc).field_0x10;
  uStack_210 = *(undefined8 *)&(pFVar5->OnClickedPositionFunc).field_0x18;
  uVar13 = *(undefined8 *)&(pFVar5->OnClickedPositionFunc).field_0x20;
  plStack_200 = *(longlong **)&(pFVar5->OnClickedPositionFunc).field_0x28;
  *(code **)&pFVar5->OnClickedPositionFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSpaceDeformerTool::Setup'::__l2::<lambda_1>,void,FHitResult_const_&>
       ::Call;
  *(undefined8 *)&(pFVar5->OnClickedPositionFunc).field_0x8 = uStack_220;
  *(undefined ***)&(pFVar5->OnClickedPositionFunc).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UMeshSpaceDeformerTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  *(UMeshSpaceDeformerTool **)&(pFVar5->OnClickedPositionFunc).field_0x18 = this;
  *(undefined4 *)&(pFVar5->OnClickedPositionFunc).field_0x20 = (undefined4)local_208;
  *(undefined4 *)&(pFVar5->OnClickedPositionFunc).field_0x24 = local_208._4_4_;
  *(undefined4 *)&(pFVar5->OnClickedPositionFunc).field_0x28 = 0;
  *(undefined4 *)&(pFVar5->OnClickedPositionFunc).field_0x2c = 0;
  uStack_220 = uVar7;
  local_208 = uVar13;
  if (local_228 != 0) {
    plVar46 = &local_218;
    if (plStack_200 != (longlong *)0x0) {
      plVar46 = plStack_200;
    }
    (**(code **)(*plVar46 + 0x10))();
  }
  pUVar24 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar24,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_458,pUVar18);
  local_458._8_8_ = pUVar24;
  pUVar24 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_458);
  if (local_458._64_8_ != 0) {
    plVar46 = (longlong *)(local_458 + 0x50);
    if ((longlong *)local_458._104_8_ != (longlong *)0x0) {
      plVar46 = (longlong *)local_458._104_8_;
    }
    (**(code **)(*plVar46 + 0x10))(plVar46);
  }
  local_258 = *(longlong *)&pUVar24[3].field_0x18;
  uVar7 = *(undefined8 *)&pUVar24[3].field_0x20;
  local_248 = *(longlong *)(pUVar24 + 4);
  uStack_240 = *(undefined8 *)&pUVar24[4].field_0x8;
  uVar13 = *(undefined8 *)&pUVar24[4].field_0x10;
  plStack_230 = *(longlong **)&pUVar24[4].field_0x18;
  *(code **)&pUVar24[3].field_0x18 =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  *(undefined8 *)&pUVar24[3].field_0x20 = uStack_250;
  *(undefined ***)(pUVar24 + 4) =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&pUVar24[4].field_0x8 = FInputDeviceState::IsCtrlKeyDown;
  *(undefined4 *)&pUVar24[4].field_0x10 = (undefined4)local_238;
  *(undefined4 *)&pUVar24[4].field_0x14 = local_238._4_4_;
  *(undefined4 *)&pUVar24[4].field_0x18 = 0;
  *(undefined4 *)&pUVar24[4].field_0x1c = 0;
  uStack_250 = uVar7;
  local_238 = uVar13;
  if (local_258 != 0) {
    plVar46 = &local_248;
    if (plStack_230 != (longlong *)0x0) {
      plVar46 = plStack_230;
    }
    (**(code **)(*plVar46 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar24 + 0x378))(pUVar24,pTVar4->Ptr);
  (**(code **)(this->_padding_ + 0x2f8))(this,pUVar24,0);
  pUVar34 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar34 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar34);
  }
  local_198 = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
  dStack_190 = (this->GizmoFrame).Rotation.field0_0x0._s_0.Y;
  (this->TransformProxy).field0_0x0.DebugPtr = pUVar34;
  dVar10 = _UNK_150689688;
  dVar63 = ___xmm_3ff00000000000003ff0000000000000;
  dVar64 = _UNK_150689518;
  dVar9 = ___xmm_00000000000000003ff0000000000000;
  local_178 = *(undefined4 *)&(this_01->Origin).field0_0x0;
  uStack_174 = *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 4);
  uStack_170 = *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 8);
  uStack_16c = *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 0xc);
  local_188 = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
  dStack_180 = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
  local_168 = (this->GizmoFrame).Origin.field0_0x0._s_0.Z;
  uStack_160 = 0;
  local_158 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_150 = _UNK_150689688;
  local_148 = ___xmm_00000000000000003ff0000000000000;
  dStack_140 = _UNK_150689518;
  (**(code **)(pUVar34->_padding_ + 0x2c8))(pUVar34,&local_198);
  local_ad8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.Data.ArrayNum = 0;
  local_ad8.Data.ArrayMax = 0;
  pUVar27 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar35 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar27,StandardTranslateRotate,this,&local_ad8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar35 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar35);
  }
  (this->TransformGizmo).field0_0x0.DebugPtr = pUVar35;
  if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
  }
  pUVar35 = (this->TransformGizmo).field0_0x0.DebugPtr;
  pcVar32 = *(code **)(*(longlong *)pUVar35 + 0x330);
  lVar36 = (**(code **)(this->_padding_ + 0x2d8))(this);
  lVar53 = lVar36 + 0x28;
  if (lVar36 == 0) {
    lVar53 = 0;
  }
  (*pcVar32)(pUVar35,(this->TransformProxy).field0_0x0.DebugPtr,lVar53);
  local_af8.Data.AllocatorInstance.Data = (FScriptContainerElement *)TransformProxyChanged;
  local_af8.Data.ArrayNum = 0;
  lStack_9e0 = (ulonglong)(uint)local_af8.Data.ArrayMax << 0x20;
  local_9e8 = TransformProxyChanged;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UMeshSpaceDeformerTool>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (UMeshSpaceDeformerTool *)local_a28,(pmf_d7094046 *)this);
  pUVar37 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar37 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar37);
  }
  (this->UpIntervalSource).field0_0x0.DebugPtr = pUVar37;
  pUVar37 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar37 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar37);
  }
  (this->DownIntervalSource).field0_0x0.DebugPtr = pUVar37;
  pUVar37 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar37 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar37);
  }
  (this->ForwardIntervalSource).field0_0x0.DebugPtr = pUVar37;
  dVar12 = dVar11 * __real_bfe0000000000000;
  ((this->UpIntervalSource).field0_0x0.DebugPtr)->Value = (float)(dVar11 * dVar8);
  ((this->DownIntervalSource).field0_0x0.DebugPtr)->Value = (float)dVar12;
  dVar8 = GetModifierGizmoValue(this);
  ((this->ForwardIntervalSource).field0_0x0.DebugPtr)->Value = (float)dVar8;
  ((this->Settings).field0_0x0.DebugPtr)->UpperBoundsInterval =
       ((this->UpIntervalSource).field0_0x0.DebugPtr)->Value;
  ((this->Settings).field0_0x0.DebugPtr)->LowerBoundsInterval =
       ((this->DownIntervalSource).field0_0x0.DebugPtr)->Value;
  local_ac0 = this;
  TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::AddLambda<_UMeshSpaceDeformerTool::Setup_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
              *)&((this->UpIntervalSource).field0_0x0.DebugPtr)->_padding_,
             (<lambda_2> *)(local_a28 + 8));
  local_ab8 = this;
  TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::AddLambda<_UMeshSpaceDeformerTool::Setup_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
              *)&((this->DownIntervalSource).field0_0x0.DebugPtr)->_padding_,
             (<lambda_3> *)(local_a28 + 0x10));
  local_ab0 = this;
  TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::AddLambda<_UMeshSpaceDeformerTool::Setup_::__l2::<lambda_4>_>
            ((TMulticastDelegateRegistration<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
              *)&((this->ForwardIntervalSource).field0_0x0.DebugPtr)->_padding_,
             (<lambda_4> *)(local_a28 + 0x18));
  pUVar27 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar38 = UInteractiveToolManager::GetPairedGizmoManager(pUVar27);
  pcVar32 = *(code **)(pUVar38->_padding_ + 0x2c0);
  pUVar24 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar24,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = Z_Construct_UClass_UIntervalGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_3d8,pUVar18);
  local_3d8._8_8_ = pUVar24;
  pUVar24 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3d8);
  if (local_3d8._64_8_ != 0) {
    plVar46 = (longlong *)(local_3d8 + 0x50);
    if ((longlong *)local_3d8._104_8_ != (longlong *)0x0) {
      plVar46 = (longlong *)local_3d8._104_8_;
    }
    (**(code **)(*plVar46 + 0x10))(plVar46);
  }
  (*pcVar32)(pUVar38,&UIntervalGizmo::GizmoName,pUVar24);
  pUVar27 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar38 = UInteractiveToolManager::GetPairedGizmoManager(pUVar27);
  ::FString::FString(&local_a80,L"MeshSpaceDefomerInterval");
  pUVar39 = (UIntervalGizmo *)
            (**(code **)(pUVar38->_padding_ + 0x2d0))
                      (pUVar38,&UIntervalGizmo::GizmoName,&local_a80,this);
  if (pUVar39 != (UIntervalGizmo *)0x0) {
    pUVar18 = Z_Construct_UClass_UIntervalGizmo_NoRegister();
    iVar17 = (int)pUVar18->_padding_;
    if ((iVar17 <= *(int *)(pUVar39->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar39->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar18->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar39);
      }
      (this->IntervalGizmo).field0_0x0.DebugPtr = pUVar39;
      if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a80.Data.AllocatorInstance.Data);
      }
      pUVar39 = (this->IntervalGizmo).field0_0x0.DebugPtr;
      pcVar32 = *(code **)(pUVar39->_padding_ + 0x310);
      (**(code **)(this->_padding_ + 0x2d8))(this);
      (*pcVar32)(pUVar39,(this->TransformProxy).field0_0x0.DebugPtr);
      pUVar39 = (this->IntervalGizmo).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 = (pUVar39->StateTarget).field0_0x0.DebugPtr,
         pUVar6 != (UGizmoTransformChangeStateTarget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->StateTarget).field0_0x0 = (pUVar39->StateTarget).field0_0x0;
      (this->VisualizationRenderer).bDepthTested = false;
      FVar15 = FLinearColor::Yellow;
      (this->VisualizationRenderer).LineThickness = 4.0;
      local_138.Scale3D.XY.m128d_f64[0] = dVar63;
      local_138.Scale3D.XY.m128d_f64[1] = dVar10;
      (this->VisualizationRenderer).LineColor.field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FVar15.field0_0x0;
      local_138.Translation.XY.m128d_f64[0] = (this_01->Origin).field0_0x0._s_0.X;
      local_138.Translation.XY.m128d_f64[1] = (this->GizmoFrame).Origin.field0_0x0._s_0.Y;
      local_138.Rotation.XY.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
      local_138.Rotation.XY.m128d_f64[1] = (this->GizmoFrame).Rotation.field0_0x0._s_0.Y;
      local_138.Rotation.ZW.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
      local_138.Rotation.ZW.m128d_f64[1] = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
      local_138.Translation.ZW.m128d_f64[0] = (this->GizmoFrame).Origin.field0_0x0._s_0.Z;
      local_138.Translation.ZW.m128d_f64[1] = 0.0;
      local_138.Scale3D.ZW.m128d_f64[0] = dVar9;
      local_138.Scale3D.ZW.m128d_f64[1] = dVar64;
      FToolDataVisualizer::SetTransform(&this->VisualizationRenderer,&local_138);
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar18 = USpaceDeformerOperatorFactory::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_358,pUVar18);
      local_358._8_8_ = this;
      pUVar24 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_358);
      if (local_358._64_8_ != 0) {
        plVar46 = (longlong *)(local_358 + 0x50);
        if ((longlong *)local_358._104_8_ != (longlong *)0x0) {
          plVar46 = (longlong *)local_358._104_8_;
        }
        (**(code **)(*plVar46 + 0x10))(plVar46);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UMeshSpaceDeformerTool **)&pUVar24[1].field_0x8 = this;
      pFVar40 = ::FName::FName((FName *)(local_a28 + 0x20),"Preview");
      pUVar41 = NewObject<UMeshOpPreviewWithBackgroundCompute>
                          (pUVar24,*pFVar40,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar41 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar41);
      }
      (this->Preview).field0_0x0.DebugPtr = pUVar41;
      if (pUVar24 == (UObject *)0x0) {
        pUVar24 = (UObject *)0x0;
      }
      else {
        pUVar24 = pUVar24 + 1;
      }
      pUVar26 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
      UMeshOpPreviewWithBackgroundCompute::Setup
                (pUVar41,pUVar26,(IDynamicMeshOperatorFactory *)pUVar24);
      ToolSetupUtil::ApplyRenderingConfigurationToPreview
                ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 (UToolTarget *)this->_padding_);
      UPreviewMesh::SetTangentsMode
                ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 AutoCalculated);
      UMeshOpPreviewWithBackgroundCompute::SetIsMeshTopologyConstant
                ((this->Preview).field0_0x0.DebugPtr,true,VertexNormals|Positions);
      UPreviewMesh::UpdatePreview
                ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 pTVar2->Object,FullUpdate,AllVertexAttribs);
      UPreviewMesh::SetTransform
                ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_1f8
                );
      pFVar50 = (FScriptContainerElement *)0x0;
      iVar17 = 0;
      pFVar42 = UE::ToolTarget::GetMaterialSet(&local_9d8,(UToolTarget *)this->_padding_,false);
      if (&local_840 != pFVar42) {
        pFVar50 = (pFVar42->Materials).AllocatorInstance.Data;
        (pFVar42->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar17 = (pFVar42->Materials).ArrayNum;
        (pFVar42->Materials).ArrayNum = 0;
        (pFVar42->Materials).ArrayMax = 0;
      }
      if (local_9d8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9d8.Materials.AllocatorInstance.Data);
      }
      pUVar41 = (this->Preview).field0_0x0.DebugPtr;
      pUVar27 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pUVar43 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar27);
      local_b18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b18.ArrayNum = iVar17;
      if (iVar17 == 0) {
        local_b18.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar17,0,&local_b18.AllocatorInstance,iVar17,&local_b18.ArrayMax);
        memcpy(local_b18.AllocatorInstance.Data,pFVar50,(longlong)iVar17 << 3);
      }
      UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
                (pUVar41,&local_b18,pUVar43,(UMaterialInterface *)0x0);
      UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
      UpdatePreview(this);
      if (pFVar50 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar50);
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar18 = Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_2d8,pUVar18);
      local_2d8._8_8_ = this;
      pUVar44 = (UDragAlignmentMechanic *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2d8);
      if (local_2d8._64_8_ != 0) {
        plVar46 = (longlong *)(local_2d8 + 0x50);
        if ((longlong *)local_2d8._104_8_ != (longlong *)0x0) {
          plVar46 = (longlong *)local_2d8._104_8_;
        }
        (**(code **)(*plVar46 + 0x10))(plVar46);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar44 != (UDragAlignmentMechanic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar44);
      }
      (this->DragAlignmentMechanic).field0_0x0.DebugPtr = pUVar44;
      (**(code **)(pUVar44->_padding_ + 0x2b0))(pUVar44,this);
      local_aa8 = (**(code **)(*(longlong *)local_b30 + 0x30))();
      local_b28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b28.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_b28.AllocatorInstance,1,&local_b28.ArrayMax);
      *(undefined8 *)local_b28.AllocatorInstance.Data = local_aa8;
      FDragAlignmentBase::AddToGizmo
                ((FDragAlignmentBase *)
                 &((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_,
                 (this->TransformGizmo).field0_0x0.DebugPtr,
                 (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,&local_b28);
      FDragAlignmentBase::AddToGizmo
                ((FDragAlignmentBase *)
                 &((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_,
                 (this->IntervalGizmo).field0_0x0.DebugPtr,
                 (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,&local_b28);
      pcVar32 = *(code **)(this->_padding_ + 0x380);
      pFVar45 = FText::AsLocalizable_Advanced_LocText
                          (&local_9c8,L"MeshSpaceDeformerTool",L"ToolName",L"Space Warp");
      (*pcVar32)(this,pFVar45);
      if (local_9c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_9c8.TextData.Reference + 0x10))();
      }
      plVar46 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar32 = *(code **)(*plVar46 + 0x360);
      pFVar45 = FText::AsLocalizable_Advanced_LocText
                          (&local_9b8,L"MeshSpaceDeformerTool",L"MeshSpaceDeformerToolDescription",
                           L"Deform the vertices of the selected Mesh using various spatial deformations. Use the in-viewport Gizmo to control the extents/strength of the deformation. Hold Ctrl while translating/rotating gizmo to align to world."
                          );
      (*pcVar32)(plVar46,pFVar45,2);
      if (local_9b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_9b8.TextData.Reference + 0x10))();
      }
      if (local_b28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.AllocatorInstance.Data);
      }
      return;
    }
    pFVar47 = GetTypeName<UIntervalGizmo>(&local_850);
    if ((pFVar47->Data).ArrayNum == 0) {
      pwVar51 = L"";
    }
    else {
      pwVar51 = (wchar_t *)(pFVar47->Data).AllocatorInstance.Data;
    }
    pFVar47 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_860,(UInteractiveGizmo *)pUVar39)
    ;
    if ((pFVar47->Data).ArrayNum != 0) {
      pwVar55 = (wchar_t *)(pFVar47->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar55,pwVar51);
  }
  pFVar47 = GetTypeName<UIntervalGizmo>(&local_870);
  if ((pFVar47->Data).ArrayNum != 0) {
    pwVar55 = (wchar_t *)(pFVar47->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar55);
}

// StaticRegisterNativesUMeshSpaceDeformerTool @ 14cd2f080

void __cdecl UMeshSpaceDeformerTool::StaticRegisterNativesUMeshSpaceDeformerTool(void)

{
  return;
}

// TransformProxyChanged @ 14cd309c0

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
UMeshSpaceDeformerTool::TransformProxyChanged
          (UMeshSpaceDeformerTool *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStack_b8 [48];
  double local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar3 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar4 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar5 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar1 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
  local_88 = (param_2->Translation).ZW.m128d_f64[0];
  dVar7 = (param_2->Translation).XY.m128d_f64[1];
  (this->GizmoFrame).Origin.field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  (this->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar7;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Z = local_88;
  *(undefined4 *)&(this->GizmoFrame).Rotation.field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 0xc) = uVar6;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = dVar2;
  local_78.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&(this->GizmoFrame).Origin.field0_0x0;
  local_78.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 4);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 8);
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->GizmoFrame).Origin.field0_0x0 + 0xc);
  local_78.Rotation.XY.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 8);
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->GizmoFrame).Rotation.field0_0x0 + 0xc);
  local_78.Rotation.ZW.m128d_f64[0] = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
  local_78.Rotation.ZW.m128d_f64[1] = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
  local_78.Translation.ZW.m128d_f64[0] = (this->GizmoFrame).Origin.field0_0x0._s_0.Z;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  FToolDataVisualizer::SetTransform(&this->VisualizationRenderer,&local_78);
  UpdatePreview(this);
  return;
}

// UpdateOpParameters @ 14cd35610

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
UMeshSpaceDeformerTool::UpdateOpParameters
          (UMeshSpaceDeformerTool *this,FMeshSpaceDeformerOp *param_1)

{
  UObjectBaseUtility *this_00;
  double dVar1;
  UClass *pUVar2;
  longlong *plVar3;
  double *pdVar4;
  undefined1 auStack_128 [32];
  FDynamicMesh3 *local_108;
  FSharedReferencer<1> local_100 [3];
  double local_e8;
  TQuaternion<double>_u_0 local_e0;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108 = (this->OriginalDynamicMesh).Object;
  local_100[0].ReferenceController =
       (this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController;
  if (local_100[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_100[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar3 = (longlong *)0x0;
  if (&param_1->OriginalMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_108) {
    (param_1->OriginalMesh).Object = local_108;
    local_108 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->OriginalMesh).SharedReferenceCount,local_100);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100[0].ReferenceController);
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  }
  pdVar4 = (double *)(**(code **)(*plVar3 + 0x28))(plVar3,local_88);
  local_e0._s_0.X = *pdVar4;
  local_e0._s_0.Y = pdVar4[1];
  local_e0._s_0.Z = pdVar4[2];
  local_e0._s_0.W = pdVar4[3];
  local_b0 = pdVar4[6];
  local_c0 = pdVar4[4];
  dStack_b8 = pdVar4[5];
  local_e8 = pdVar4[10];
  local_a8 = pdVar4[8];
  dStack_a0 = pdVar4[9];
  local_98 = local_e8;
  UE::Geometry::FMeshSpaceDeformerOp::SetTransform(param_1,(TTransformSRT3<double> *)&local_e0._s_0)
  ;
  dVar1 = (this->GizmoFrame).Origin.field0_0x0._s_0.Y;
  (param_1->GizmoFrame).Origin.field0_0x0._s_0.X = (this->GizmoFrame).Origin.field0_0x0._s_0.X;
  (param_1->GizmoFrame).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
  (param_1->GizmoFrame).Origin.field0_0x0._s_0.Z = (this->GizmoFrame).Origin.field0_0x0._s_0.Z;
  (param_1->GizmoFrame).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
  (param_1->GizmoFrame).Rotation.field0_0x0._s_0.Y = (this->GizmoFrame).Rotation.field0_0x0._s_0.Y;
  (param_1->GizmoFrame).Rotation.field0_0x0._s_0.Z = dVar1;
  (param_1->GizmoFrame).Rotation.field0_0x0._s_0.W = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
  param_1->UpperBoundsInterval = (double)((this->Settings).field0_0x0.DebugPtr)->UpperBoundsInterval
  ;
  param_1->LowerBoundsInterval = (double)((this->Settings).field0_0x0.DebugPtr)->LowerBoundsInterval
  ;
  return;
}

// UpdatePreview @ 14cd35820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSpaceDeformerTool::UpdatePreview(UMeshSpaceDeformerTool *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  UMeshSpaceDeformerToolProperties *pUVar3;
  FScriptContainerElement *pFVar4;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar13;
  
  if (((this->Settings).field0_0x0.DebugPtr)->SelectedOperationType != Bend) goto LAB_14cd35b0c;
  pTVar2 = &this->VisualizationPoints;
  iVar10 = (this->VisualizationPoints).ArrayNum;
  piVar1 = &(this->VisualizationPoints).ArrayNum;
  if (iVar10 < 0x1e) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x1e - iVar10,&pTVar2->AllocatorInstance,piVar1,
               &(this->VisualizationPoints).ArrayMax);
  }
  else if (0x1e < iVar10) {
    iVar10 = iVar10 + -0x1e;
    if (iVar10 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (iVar10 == 0) goto LAB_14cd3595c;
    pFVar9 = (pTVar2->AllocatorInstance).Data + 0x2d0;
    iVar8 = (*piVar1 - iVar10) + -0x1e;
    if (iVar8 != 0) {
      memmove(pFVar9,pFVar9 + (longlong)iVar10 * 0x18,(longlong)iVar8 * 0x18);
    }
    *piVar1 = *piVar1 - iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&pTVar2->AllocatorInstance,*piVar1,&(this->VisualizationPoints).ArrayMax);
  }
LAB_14cd3595c:
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  fVar14 = pUVar3->LowerBoundsInterval;
  dVar6 = (double)(pUVar3->UpperBoundsInterval - fVar14) /
          (double)(pUVar3->BendDegrees * __real_3c8efa36);
  if (pUVar3->bLockBottom == false) {
    fVar14 = 0.0;
  }
  uVar11 = 0;
  uVar15 = SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar13 = uVar11;
  do {
    __libm_sse2_sincos_();
    if ((*piVar1 <= (int)uVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    uVar12 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar12;
    pFVar9 = pFVar4 + uVar11;
    *(undefined8 *)pFVar9 = 0;
    *(double *)(pFVar9 + 8) =
         (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (double)CONCAT44(uVar16,uVar15) +
         dVar6;
    *(double *)(pFVar4 + uVar11 + 0x10) =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)CONCAT44(uVar16,uVar15) +
         (double)fVar14;
    uVar11 = uVar11 + 0x18;
  } while ((int)uVar12 < 0x1e);
LAB_14cd35b0c:
  this_00 = (this->Preview).field0_0x0.DebugPtr;
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult(this_00);
  }
  return;
}

// _getUObject @ 14cd3f660

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

UObject * __thiscall UMeshSpaceDeformerTool::_getUObject(UMeshSpaceDeformerTool *this)

{
  return (UObject *)(this[-1].VisualizationRenderer.TotalTransform.Translation.ZW.m128d_f64 + 1);
}

// _getUObject`adjustor{152}' @ 14cd3f66c

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
   UMeshSpaceDeformerTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UMeshSpaceDeformerTool::_getUObject_adjustor_152__(UMeshSpaceDeformerTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshSpaceDeformerTool *)
                       &this[-1].VisualizationRenderer.CameraState.AspectRatio);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{176}' @ 14cd3f680

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
   UMeshSpaceDeformerTool::_getUObject`adjustor{176}' (void)const __ptr64 */

UObject * __thiscall
UMeshSpaceDeformerTool::_getUObject_adjustor_176__(UMeshSpaceDeformerTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshSpaceDeformerTool *)
                       &this[-1].VisualizationRenderer.CameraState.Orientation.Z);
  return (UObject *)pUVar1;
}

