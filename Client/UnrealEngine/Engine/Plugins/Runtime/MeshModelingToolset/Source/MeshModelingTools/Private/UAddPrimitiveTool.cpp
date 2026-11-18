// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 36

// StaticClass @ 14cbd2570

UClass * __cdecl UAddPrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddPrimitiveTool",
               &Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddPrimitiveTool>,local_res8,
               USingleClickTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton;
}

// UAddPrimitiveTool @ 14cbdc270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddPrimitiveTool * __thiscall
UAddPrimitiveTool::UAddPrimitiveTool(UAddPrimitiveTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  USingleClickTool::USingleClickTool((USingleClickTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->CurrentState = PlacingPrimitive;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__USingleClickTool__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolCameraFocusAPI__;
  (this->ShapeSettings).field0_0x0.DebugPtr = (UProceduralShapeToolProperties *)0x0;
  (this->MaterialProperties).field0_0x0.DebugPtr = (UNewMeshMaterialProperties *)0x0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->Gizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  ::FString::FString(&this->AssetName,L"GeneratedAsset");
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ShapeFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ShapeFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ShapeFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.W = 1.0;
  return this;
}

// UAddPrimitiveTool @ 14cbdc380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddPrimitiveTool * __thiscall
UAddPrimitiveTool::UAddPrimitiveTool(UAddPrimitiveTool *this,FObjectInitializer *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UProceduralShapeToolProperties *this_00;
  FName local_res8;
  
  USingleClickTool::USingleClickTool((USingleClickTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->CurrentState = PlacingPrimitive;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__USingleClickTool__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolCameraFocusAPI__;
  (this->ShapeSettings).field0_0x0.DebugPtr = (UProceduralShapeToolProperties *)0x0;
  (this->MaterialProperties).field0_0x0.DebugPtr = (UNewMeshMaterialProperties *)0x0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->Gizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  ::FString::FString(&this->AssetName,L"GeneratedAsset");
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ShapeFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ShapeFrame).Origin.field0_0x0._s_0.Y = (double)uVar2;
  (this->ShapeFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.W = 1.0;
  pFVar3 = ::FName::FName(&local_res8,L"ShapeSettings");
  FVar1 = *pFVar3;
  pUVar4 = UProceduralShapeToolProperties::StaticClass();
  this_00 = (UProceduralShapeToolProperties *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UProceduralShapeToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ShapeSettings).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Transactional);
  return this;
}

// ~UAddPrimitiveTool @ 14cbdfea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::~UAddPrimitiveTool(UAddPrimitiveTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleClickTool__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolCameraFocusAPI__;
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  USingleClickTool::~USingleClickTool((USingleClickTool *)this);
  return;
}

// operator() @ 14cbe2cc0

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
`UAddPrimitiveTool::Setup'::__l2::<lambda_2>::operator()(void *this,EMakeMeshPlacementType param_1)

{
  UAddPrimitiveTool *this_00;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  longlong lVar6;
  FText *pFVar7;
  TTransform<double> *pTVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  FText local_d0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  TVector<double>_u_0 local_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = *(UAddPrimitiveTool **)this;
  if (((this_00->ShapeSettings).field0_0x0.DebugPtr)->TargetSurface == AtOrigin) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_58 = 0;
    local_88._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    local_88._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_60 = (undefined4)__real_3ff0000000000000;
    uStack_5c = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_68 = 0;
    uStack_64 = 0;
    local_50 = 0;
    uStack_48 = 0;
    UAddPrimitiveTool::UpdatePreviewPosition(this_00,(FInputDeviceRay *)&local_88._s_0);
    UAddPrimitiveTool::SetState(this_00,AdjustingSettings);
    lVar6 = (**(code **)(this_00->_padding_ + 0x2d8))(this_00);
    pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x20);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (local_d0,L"UAddPrimitiveTool",L"PlaceMeshTransaction",L"Place Mesh");
    pTVar8 = UPreviewMesh::GetTransform
                       ((this_00->PreviewMesh).field0_0x0.DebugPtr,
                        (TTransform<double> *)&local_88._s_0);
    local_d8 = ::operator_new(0x70);
    if (local_d8 != (undefined8 *)0x0) {
      *local_d8 = &___7FStateChange_UAddPrimitiveTool__6B_;
      dVar5 = (pTVar8->Rotation).XY.m128d_f64[1];
      local_d8[2] = (pTVar8->Rotation).XY.m128d_f64[0];
      local_d8[3] = dVar5;
      dVar5 = (pTVar8->Rotation).ZW.m128d_f64[1];
      local_d8[4] = (pTVar8->Rotation).ZW.m128d_f64[0];
      local_d8[5] = dVar5;
      dVar5 = (pTVar8->Translation).XY.m128d_f64[1];
      local_d8[6] = (pTVar8->Translation).XY.m128d_f64[0];
      local_d8[7] = dVar5;
      dVar5 = (pTVar8->Translation).ZW.m128d_f64[1];
      local_d8[8] = (pTVar8->Translation).ZW.m128d_f64[0];
      local_d8[9] = dVar5;
      uVar2 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
      uVar3 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
      uVar4 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
      *(undefined4 *)(local_d8 + 10) = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
      *(undefined4 *)((longlong)local_d8 + 0x54) = uVar2;
      *(undefined4 *)(local_d8 + 0xb) = uVar3;
      *(undefined4 *)((longlong)local_d8 + 0x5c) = uVar4;
      dVar5 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      local_d8[0xc] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      local_d8[0xd] = dVar5;
    }
    (*pcVar1)(lVar6 + 0x28,this_00,&local_d8,pFVar7);
    if (local_d0[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0[0].TextData.Reference + 0x10))();
    }
  }
  else {
    UAddPrimitiveTool::SetState(this_00,PlacingPrimitive);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cbe6790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputRayHit * __thiscall
UAddPrimitiveTool::BeginHoverSequenceHitTest
          (UAddPrimitiveTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->HitDepth = 0.0;
  __return_storage_ptr__->bHit = true;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res8;
  __return_storage_ptr__->bHit = (int)this->_padding_ == 0;
  return __return_storage_ptr__;
}

// CanAccept @ 14cbe83a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::CanAccept(UAddPrimitiveTool *this)

{
  return this->CurrentState == AdjustingSettings;
}

// CreateShapeSettings @ 14cbeaed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UProceduralShapeToolProperties * __thiscall
UAddPrimitiveTool::CreateShapeSettings(UAddPrimitiveTool *this)

{
  return (UProceduralShapeToolProperties *)0x0;
}

// GenerateAsset @ 14cbec290

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

void __thiscall UAddPrimitiveTool::GenerateAsset(UAddPrimitiveTool *this)

{
  int iVar1;
  code *pcVar2;
  UCreateMeshObjectTypeProperties *pUVar3;
  bool bVar4;
  UMaterialInterface *pUVar5;
  FDynamicMesh3 *pFVar6;
  longlong lVar7;
  FText *pFVar8;
  TTransform<double> *pTVar9;
  UInteractiveToolManager *pUVar10;
  int iVar11;
  undefined1 auStack_7c8 [32];
  UMaterialInterface **local_7a8;
  FScriptContainerElement *local_7a0;
  longlong local_798;
  longlong local_790;
  undefined8 local_788;
  UMaterialInterface *local_778;
  FText local_770;
  FCreateMeshObjectResult local_760;
  FCreateMeshObjectParams local_738;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  pUVar5 = UPreviewMesh::GetMaterial((this->PreviewMesh).field0_0x0.DebugPtr,0);
  pFVar6 = UPreviewMesh::GetMesh((this->PreviewMesh).field0_0x0.DebugPtr);
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar2 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x10);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_770,L"UAddPrimitiveTool",L"AddPrimitiveToolTransactionName",
                      L"Add Primitive Tool");
  (*pcVar2)(lVar7 + 0x28,pFVar8);
  if (local_770.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_770.TextData.Reference + 0x10))();
  }
  FCreateMeshObjectParams::FCreateMeshObjectParams(&local_738,true);
  local_738.TargetWorld.field0_0x0 = (TObjectPtr<UWorld>_u_0)this->TargetWorld;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_738.TargetWorld.field0_0x0.DebugPtr != (TObjectPtr<UWorld>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_738.TargetWorld.field0_0x0);
  }
  pTVar9 = UPreviewMesh::GetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_88);
  local_738.Transform.Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  local_738.Transform.Rotation.XY.m128d_f64[1] = (pTVar9->Rotation).XY.m128d_f64[1];
  local_738.Transform.Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
  local_738.Transform.Rotation.ZW.m128d_f64[1] = (pTVar9->Rotation).ZW.m128d_f64[1];
  local_738.Transform.Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
  local_738.Transform.Translation.XY.m128d_f64[1] = (pTVar9->Translation).XY.m128d_f64[1];
  local_738.Transform.Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
  local_738.Transform.Translation.ZW.m128d_f64[1] = (pTVar9->Translation).ZW.m128d_f64[1];
  local_738.Transform.Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
  local_738.Transform.Scale3D.XY.m128d_f64[1] = (pTVar9->Scale3D).XY.m128d_f64[1];
  local_738.Transform.Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
  local_738.Transform.Scale3D.ZW.m128d_f64[1] = (pTVar9->Scale3D).ZW.m128d_f64[1];
  iVar1 = (this->AssetName).Data.ArrayNum;
  iVar11 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&local_738.BaseName,(wchar_t *)(this->AssetName).Data.AllocatorInstance.Data,iVar11);
  local_778 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  if ((local_738.Materials.AllocatorInstance.Data <= (FScriptContainerElement *)&local_778) &&
     ((FScriptContainerElement *)&local_778 <
      local_738.Materials.AllocatorInstance.Data + (longlong)local_738.Materials.ArrayMax * 8)) {
    local_790 = (longlong)local_738.Materials.ArrayNum;
    local_788 = 8;
    local_7a8 = &local_778;
    local_7a0 = local_738.Materials.AllocatorInstance.Data;
    local_798 = (longlong)local_738.Materials.ArrayMax;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_738.Materials.ArrayNum == local_738.Materials.ArrayMax) {
    local_738.Materials.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_738.Materials.AllocatorInstance,&local_738.Materials.ArrayMax);
  }
  iVar11 = local_738.Materials.ArrayNum + 1;
  *(UMaterialInterface **)
   (local_738.Materials.AllocatorInstance.Data + (longlong)local_738.Materials.ArrayNum * 8) =
       local_778;
  local_738.Materials.ArrayNum = iVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_778 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_778);
  }
  FCreateMeshObjectParams::SetMesh(&local_738,pFVar6);
  pUVar3 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3,&local_738);
  pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::Modeling::CreateMeshObject(&local_760,pUVar10,&local_738);
  if ((local_760.ResultCode == Ok) &&
     (local_760.NewActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
    pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    ToolSelectionUtil::SetNewActorSelection(pUVar10,(AActor *)local_760.NewActor.field0_0x0);
  }
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
  FCreateMeshObjectParams::~FCreateMeshObjectParams(&local_738);
  return;
}

// GenerateMesh @ 14cbed0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::GenerateMesh(UAddPrimitiveTool *this,FDynamicMesh3 *param_1)

{
  return;
}

// GetDefaultPolygroupMode @ 14cbee390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMakeMeshPolygroupMode __thiscall
UAddPrimitiveTool::GetDefaultPolygroupMode(UAddPrimitiveTool *this)

{
  return PerQuad;
}

// GetPrivateStaticClass @ 14cbeeb40

UClass * __cdecl UAddPrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddPrimitiveTool",
               &Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddPrimitiveTool>,local_res8,
               USingleClickTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddPrimitiveTool.InnerSingleton;
}

// GetWorldSpaceFocusBox @ 14cbf20c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
UAddPrimitiveTool::GetWorldSpaceFocusBox
          (UAddPrimitiveTool *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  
  if ((this->_padding_ != 0) && (lVar7 = *(longlong *)(this->_padding_ + 0x50), lVar7 != 0)) {
    dVar1 = *(double *)(lVar7 + 0x110);
    dVar2 = *(double *)(lVar7 + 0x128);
    dVar3 = *(double *)(lVar7 + 0x118);
    dVar4 = *(double *)(lVar7 + 0x130);
    dVar5 = *(double *)(lVar7 + 0x138);
    dVar6 = *(double *)(lVar7 + 0x120);
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
    __return_storage_ptr__->IsValid = '\x01';
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->IsValid = '\0';
  return __return_storage_ptr__;
}

// GetWorldSpaceFocusPoint @ 14cbf2180

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
UAddPrimitiveTool::GetWorldSpaceFocusPoint
          (UAddPrimitiveTool *this,TRay<double> *param_1,TVector<double> *param_2)

{
  UPreviewMesh *this_00;
  bool bVar1;
  TFunction<bool___cdecl(int)> local_138;
  undefined1 local_108 [48];
  double dStack_d8;
  double local_d0;
  int local_64;
  FWeakObjectPtr local_50;
  FWeakObjectPtr FStack_48;
  IActorInstanceManagerInterface *local_40;
  undefined8 uStack_38;
  
  this_00 = (UPreviewMesh *)this->_padding_;
  if (this_00 != (UPreviewMesh *)0x0) {
    memset(local_108,0,0x100);
    local_138._24_4_ = 0xffffffff;
    local_138._29_2_ = 0;
    local_138._31_1_ = 0;
    local_138._16_8_ = 0;
    local_138._28_1_ = 0;
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    FStack_48.ObjectIndex = 0;
    FStack_48.ObjectSerialNumber = 0;
    local_108._4_4_ = 1.0;
    uStack_38._0_4_ = -1;
    uStack_38._4_1_ = Invalid;
    uStack_38._5_3_ = 0;
    local_64 = -1;
    local_138._0_8_ = 0;
    local_40 = (IActorInstanceManagerInterface *)0x0;
    local_138._40_8_ = 0;
    bVar1 = UPreviewMesh::FindRayIntersection(this_00,param_1,(FHitResult *)local_108,&local_138);
    if (bVar1) {
      (param_2->field0_0x0)._s_0.X = (double)local_108._40_8_;
      (param_2->field0_0x0)._s_0.Y = dStack_d8;
      (param_2->field0_0x0)._s_0.Z = local_d0;
      return true;
    }
  }
  return false;
}

// HasAccept @ 14cbf2260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::HasAccept(UAddPrimitiveTool *this)

{
  return true;
}

// HasCancel @ 14cbf2290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::HasCancel(UAddPrimitiveTool *this)

{
  return true;
}

// IsHitByClick @ 14cbf2320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputRayHit * __thiscall
UAddPrimitiveTool::IsHitByClick
          (UAddPrimitiveTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->HitDepth = 0.0;
  __return_storage_ptr__->bHit = true;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->bHasHitNormal = false;
  __return_storage_ptr__->HitIdentifier = 0;
  __return_storage_ptr__->HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->HitObject).WeakPtr = local_res8;
  __return_storage_ptr__->bHit = (int)this->_padding_ == 0;
  return __return_storage_ptr__;
}

// OnBeginHover @ 14cbf2640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::OnBeginHover(UAddPrimitiveTool *this,FInputDeviceRay *param_1)

{
  UpdatePreviewPosition((UAddPrimitiveTool *)&this[-1]._padding_,param_1);
  return;
}

// OnClicked @ 14cbf2660

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

void __thiscall UAddPrimitiveTool::OnClicked(UAddPrimitiveTool *this,FInputDeviceRay *param_1)

{
  longlong *this_00;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  bool bVar6;
  longlong lVar7;
  FText *pFVar8;
  TTransform<double> *pTVar9;
  undefined1 auStackY_d8 [32];
  undefined8 *local_a8;
  FText local_a0;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this_00 = &this[-1]._padding_;
  if ((int)this->_padding_ == 0) {
    UpdatePreviewPosition((UAddPrimitiveTool *)this_00,param_1);
    SetState((UAddPrimitiveTool *)this_00,AdjustingSettings);
    lVar7 = (**(code **)(*this_00 + 0x2d8))(this_00);
    pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_a0,L"UAddPrimitiveTool",L"PlaceMeshTransaction",L"Place Mesh");
    pTVar9 = UPreviewMesh::GetTransform((UPreviewMesh *)this->_padding_,&local_88);
    local_a8 = ::operator_new(0x70);
    if (local_a8 != (undefined8 *)0x0) {
      *local_a8 = &___7FStateChange_UAddPrimitiveTool__6B_;
      dVar5 = (pTVar9->Rotation).XY.m128d_f64[1];
      local_a8[2] = (pTVar9->Rotation).XY.m128d_f64[0];
      local_a8[3] = dVar5;
      dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
      local_a8[4] = (pTVar9->Rotation).ZW.m128d_f64[0];
      local_a8[5] = dVar5;
      dVar5 = (pTVar9->Translation).XY.m128d_f64[1];
      local_a8[6] = (pTVar9->Translation).XY.m128d_f64[0];
      local_a8[7] = dVar5;
      dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
      local_a8[8] = (pTVar9->Translation).ZW.m128d_f64[0];
      local_a8[9] = dVar5;
      uVar2 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 4);
      uVar3 = *(undefined4 *)((pTVar9->Scale3D).XY.m128d_f64 + 1);
      uVar4 = *(undefined4 *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 0xc);
      *(undefined4 *)(local_a8 + 10) = *(undefined4 *)(pTVar9->Scale3D).XY.m128d_f64;
      *(undefined4 *)((longlong)local_a8 + 0x54) = uVar2;
      *(undefined4 *)(local_a8 + 0xb) = uVar3;
      *(undefined4 *)((longlong)local_a8 + 0x5c) = uVar4;
      dVar5 = (pTVar9->Scale3D).ZW.m128d_f64[1];
      local_a8[0xc] = (pTVar9->Scale3D).ZW.m128d_f64[0];
      local_a8[0xd] = dVar5;
    }
    (*pcVar1)(lVar7 + 0x28,this_00,&local_a8,pFVar8);
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8166290227787203018>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\AddPrimitiveTool.cpp"
                       ,0x1ca,"CurrentState == EState::PlacingPrimitive");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnEndHover @ 14cbf27e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::OnEndHover(UAddPrimitiveTool *this)

{
  return;
}

// OnPropertyModified @ 14cbf27f0

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
UAddPrimitiveTool::OnPropertyModified(UAddPrimitiveTool *this,UObject *param_1,FProperty *param_2)

{
  UPreviewMesh *pUVar1;
  UCombinedTransformGizmo *pUVar2;
  UMaterialInterface *pUVar3;
  
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewMesh *)0x0) {
    UPreviewMesh::EnableWireframe
              (pUVar1,((this->MaterialProperties).field0_0x0.DebugPtr)->bShowWireframe);
    pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
    pUVar3 = (UMaterialInterface *)
             FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                  WeakPtr);
    UPreviewMesh::SetMaterial(pUVar1,pUVar3);
    UpdatePreviewMesh(this);
  }
  pUVar2 = (this->Gizmo).field0_0x0.DebugPtr;
  if (pUVar2 != (UCombinedTransformGizmo *)0x0) {
    if ((this->CurrentState == AdjustingSettings) &&
       (((this->ShapeSettings).field0_0x0.DebugPtr)->bShowGizmo != false)) {
                    /* WARNING: Could not recover jumptable at 0x00014cbf2885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cbf288f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,0);
    return;
  }
  return;
}

// OnUpdateHover @ 14cbf3850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::OnUpdateHover(UAddPrimitiveTool *this,FInputDeviceRay *param_1)

{
  UpdatePreviewPosition((UAddPrimitiveTool *)&this[-1]._padding_,param_1);
  return true;
}

// Render @ 14cbf3870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::Render(UAddPrimitiveTool *this,IToolsContextRenderAPI *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cbf387a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  return;
}

// SetState @ 14cbf3d70

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

void __thiscall UAddPrimitiveTool::SetState(UAddPrimitiveTool *this,EState param_1)

{
  UCombinedTransformGizmo *pUVar1;
  code *pcVar2;
  longlong *plVar3;
  TTransform<double> *pTVar4;
  FText *pFVar5;
  undefined4 in_register_00000014;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStack_a8 [32];
  FText local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->CurrentState = param_1;
  pUVar1 = (this->Gizmo).field0_0x0.DebugPtr;
  if ((param_1 == AdjustingSettings) &&
     (((this->ShapeSettings).field0_0x0.DebugPtr)->bShowGizmo != false)) {
    uVar6 = CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1);
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,uVar6);
  ((this->ShapeSettings).field0_0x0.DebugPtr)->bShowGizmoOptions = param_1 == AdjustingSettings;
  (**(code **)(this->_padding_ + 0x340))(this,(this->ShapeSettings).field0_0x0.DebugPtr);
  if (this->CurrentState == PlacingPrimitive) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pwVar8 = 
    L"This Tool creates new shapes. Click in the scene to choose initial placement of mesh.";
    pwVar7 = L"OnStartAddPrimitiveTool";
  }
  else {
    pUVar1 = (this->Gizmo).field0_0x0.DebugPtr;
    pTVar4 = UPreviewMesh::GetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_78);
    UCombinedTransformGizmo::ReinitializeGizmoTransform(pUVar1,pTVar4,true);
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pwVar8 = 
    L"Alter shape settings in the detail panel or modify placement with gizmo, then accept the tool."
    ;
    pwVar7 = L"OnStartAddPrimitiveTool2";
  }
  pcVar2 = *(code **)(*plVar3 + 0x360);
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_88,L"UAddPrimitiveTool",pwVar7,pwVar8);
  (*pcVar2)(plVar3,pFVar5,2);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return;
}

// SetWorld @ 14cbf41a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::SetWorld(UAddPrimitiveTool *this,UWorld *param_1)

{
  this->TargetWorld = param_1;
  return;
}

// Setup @ 14cbf4290

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::Setup(UAddPrimitiveTool *this)

{
  int *piVar1;
  code *pcVar2;
  UProceduralShapeToolProperties *pUVar3;
  EMakeMeshPolygroupMode EVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UCreateMeshObjectTypeProperties *pUVar8;
  void *this_00;
  TPropertyWatcher<EMakeMeshPlacementType> *pTVar9;
  UNewMeshMaterialProperties *pUVar10;
  UPreviewMesh *pUVar11;
  UMaterialInterface *pUVar12;
  UInteractiveToolManager *pUVar13;
  UCombinedTransformGizmo *pUVar14;
  UDragAlignmentMechanic *pUVar15;
  undefined ***pppuVar16;
  TPropertyWatcher<EMakeMeshPlacementType> *pTVar17;
  TObjectPtr<UProceduralShapeToolProperties>_u_0 TVar18;
  undefined1 auStack_148 [32];
  undefined1 local_128 [32];
  undefined **local_108;
  UAddPrimitiveTool *local_100;
  undefined ***local_f0;
  UAddPrimitiveTool *local_e8;
  code *local_d8 [2];
  code *local_c8 [3];
  longlong local_b0;
  undefined1 local_a8 [128];
  TObjectPtr<UCombinedTransformGizmo>_u_0 local_28;
  
  local_28.DebugPtr = (UCombinedTransformGizmo *)(__security_cookie.value ^ (ulonglong)auStack_148);
  USingleClickTool::Setup((USingleClickTool *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = this;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    TVar18.DebugPtr = (UProceduralShapeToolProperties *)(local_a8 + 0x50);
    if ((UProceduralShapeToolProperties *)local_a8._104_8_ != (UProceduralShapeToolProperties *)0x0)
    {
      TVar18 = (TObjectPtr<UProceduralShapeToolProperties>_u_0)local_a8._104_8_;
    }
    (**(code **)((TVar18.DebugPtr)->_padding_ + 0x10))(TVar18.DebugPtr);
  }
  pTVar9 = (TPropertyWatcher<EMakeMeshPlacementType> *)0x0;
  pTVar17 = (TPropertyWatcher<EMakeMeshPlacementType> *)&this->_padding_;
  if (this == (UAddPrimitiveTool *)0x0) {
    pTVar17 = pTVar9;
  }
  (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7,pTVar17);
  (**(code **)(this->_padding_ + 0x2f8))(this,pUVar7,0);
  pUVar8 = NewObject<UCreateMeshObjectTypeProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UCreateMeshObjectTypeProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->OutputTypeProperties).field0_0x0.DebugPtr = pUVar8;
  pcVar2 = *(code **)(pUVar8->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_128,L"");
  (*pcVar2)(pUVar8,this,local_128);
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  UCreateMeshObjectTypeProperties::InitializeDefault
            ((this->OutputTypeProperties).field0_0x0.DebugPtr);
  pUVar8 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_f0 = (undefined ***)0x0;
  local_128._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UAddPrimitiveTool::Setup'::__l2::<lambda_1>,void,FString_const_&>::Call;
  local_100 = this;
  FWatchablePropertySet::WatchProperty<FString>
            ((FWatchablePropertySet *)&pUVar8->_padding_,&pUVar8->OutputType,
             (TFunction<void___cdecl(FString_const_&)> *)(local_128 + 0x10));
  (**(code **)(this->_padding_ + 0x318))(this,(this->OutputTypeProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->ShapeSettings).field0_0x0.DebugPtr);
  pUVar3 = (this->ShapeSettings).field0_0x0.DebugPtr;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAddPrimitiveTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_f0 = (undefined ***)0x0;
  local_128._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UAddPrimitiveTool::Setup'::__l2::<lambda_2>,void,enum_EMakeMeshPlacementType_const_&>
       ::Call;
  local_100 = this;
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    local_d8[0] = (code *)local_128._16_8_;
    local_b0 = 0;
    if ((code *)local_128._16_8_ != (code *)0x0) {
      pppuVar16 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar16 = local_f0;
      }
      (*(code *)**pppuVar16)(pppuVar16,local_d8 + 2);
    }
    pTVar9 = FWatchablePropertySet::TPropertyWatcher<enum_EMakeMeshPlacementType>::
             TPropertyWatcher<enum_EMakeMeshPlacementType><enum_EMakeMeshPlacementType,void>
                       (this_00,&pUVar3->TargetSurface,
                        (TFunction<void___cdecl(EMakeMeshPlacementType_const_&)> *)local_d8);
  }
  iVar5 = (int)pUVar3->_padding_;
  piVar1 = (int *)((longlong)&pUVar3->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar3->_padding_,piVar1);
  }
  *(int *)&pUVar3->_padding_ = iVar5 + 1;
  *(TPropertyWatcher<EMakeMeshPlacementType> **)(pUVar3->_padding_ + (longlong)iVar5 * 8) = pTVar9;
  if ((code *)local_128._16_8_ != (code *)0x0) {
    pppuVar16 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar16 = local_f0;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  EVar4 = (**(code **)(this->_padding_ + 0x3a0))(this);
  ((this->ShapeSettings).field0_0x0.DebugPtr)->PolygroupMode = EVar4;
  pUVar3 = (this->ShapeSettings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_128,L"");
  (*pcVar2)(pUVar3,this,local_128);
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = this;
  pUVar10 = (UNewMeshMaterialProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    TVar18.DebugPtr = (UProceduralShapeToolProperties *)(local_a8 + 0x50);
    if ((UProceduralShapeToolProperties *)local_a8._104_8_ != (UProceduralShapeToolProperties *)0x0)
    {
      TVar18 = (TObjectPtr<UProceduralShapeToolProperties>_u_0)local_a8._104_8_;
    }
    (**(code **)((TVar18.DebugPtr)->_padding_ + 0x10))(TVar18.DebugPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UNewMeshMaterialProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->MaterialProperties).field0_0x0.DebugPtr = pUVar10;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar10);
  pUVar10 = (this->MaterialProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_128,L"");
  (*pcVar2)(pUVar10,this,local_128);
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  pUVar11 = NewObject<UPreviewMesh>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = pUVar11;
  UPreviewMesh::CreateInWorld(pUVar11,this->TargetWorld,&UE::Math::TTransform<double>::Identity);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((this->PreviewMesh).field0_0x0.DebugPtr,(UToolTarget *)0x0);
  UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,false);
  pUVar11 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar12 = (UMaterialInterface *)
            FWeakObjectPtr::Get(&(((this->MaterialProperties).field0_0x0.DebugPtr)->Material).
                                 WeakPtr);
  UPreviewMesh::SetMaterial(pUVar11,pUVar12);
  UPreviewMesh::EnableWireframe
            ((this->PreviewMesh).field0_0x0.DebugPtr,
             ((this->MaterialProperties).field0_0x0.DebugPtr)->bShowWireframe);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UTransformProxy_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = this;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    TVar18.DebugPtr = (UProceduralShapeToolProperties *)(local_a8 + 0x50);
    if ((UProceduralShapeToolProperties *)local_a8._104_8_ != (UProceduralShapeToolProperties *)0x0)
    {
      TVar18 = (TObjectPtr<UProceduralShapeToolProperties>_u_0)local_a8._104_8_;
    }
    (**(code **)((TVar18.DebugPtr)->_padding_ + 0x10))(TVar18.DebugPtr);
  }
  local_e8 = this;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddWeakLambda<UAddPrimitiveTool,_UAddPrimitiveTool::Setup_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)(pUVar7 + 1),(UAddPrimitiveTool *)local_128,(<lambda_3> *)this);
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  pUVar13 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar13,StandardTranslateRotate,this,(FString *)local_128);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->Gizmo).field0_0x0.DebugPtr = pUVar14;
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  pUVar14 = (this->Gizmo).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(*(longlong *)pUVar14 + 0x330);
  (**(code **)(this->_padding_ + 0x2d8))(this);
  (*pcVar2)(pUVar14,pUVar7);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = this;
  pUVar15 = (UDragAlignmentMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    TVar18.DebugPtr = (UProceduralShapeToolProperties *)(local_a8 + 0x50);
    if ((UProceduralShapeToolProperties *)local_a8._104_8_ != (UProceduralShapeToolProperties *)0x0)
    {
      TVar18 = (TObjectPtr<UProceduralShapeToolProperties>_u_0)local_a8._104_8_;
    }
    (**(code **)((TVar18.DebugPtr)->_padding_ + 0x10))(TVar18.DebugPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UDragAlignmentMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = pUVar15;
  (**(code **)(pUVar15->_padding_ + 0x2b0))(pUVar15,this);
  FDragAlignmentBase::AddToGizmo
            ((FDragAlignmentBase *)&((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_,
             (this->Gizmo).field0_0x0.DebugPtr,
             (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
             (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
  UpdatePreviewMesh(this);
  SetState(this,PlacingPrimitive);
  return;
}

// ShouldCenterXY @ 14cbf6700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::ShouldCenterXY(UAddPrimitiveTool *this)

{
  return false;
}

// Shutdown @ 14cbf6720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::Shutdown(UAddPrimitiveTool *this,EToolShutdownType param_1)

{
  UCreateMeshObjectTypeProperties *pUVar1;
  code *pcVar2;
  UProceduralShapeToolProperties *pUVar3;
  UNewMeshMaterialProperties *pUVar4;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar5;
  FString local_18;
  
  if (param_1 == Accept) {
    (**(code **)(this->_padding_ + 0x3b8))();
  }
  (**(code **)(((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  this_00 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar5 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  (**(code **)(pUVar5->_padding_ + 0x2e8))(pUVar5);
  (this->Gizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,false);
  UPreviewMesh::Disconnect((this->PreviewMesh).field0_0x0.DebugPtr);
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  pUVar1 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar1,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->ShapeSettings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar3,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->MaterialProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar4,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUAddPrimitiveTool @ 14cbf6a00

void __cdecl UAddPrimitiveTool::StaticRegisterNativesUAddPrimitiveTool(void)

{
  return;
}

// SupportsWorldSpaceFocusBox @ 14cbf6f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::SupportsWorldSpaceFocusBox(UAddPrimitiveTool *this)

{
  return this->_padding_ != 0;
}

// SupportsWorldSpaceFocusPoint @ 14cbf6f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UAddPrimitiveTool::SupportsWorldSpaceFocusPoint(UAddPrimitiveTool *this)

{
  return this->_padding_ != 0;
}

// UpdatePreviewMesh @ 14cbf8ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddPrimitiveTool::UpdatePreviewMesh(UAddPrimitiveTool *this)

{
  double *pdVar1;
  EMakeMeshPivotLocation EVar2;
  UNewMeshMaterialProperties *pUVar3;
  longlong lVar4;
  byte bVar5;
  atomic<unsigned_char> aVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  short sVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  float fVar21;
  FDynamicMeshEditor local_res10;
  TVector<double>_u_0 local_378;
  double local_360;
  double local_358;
  double local_350;
  FDynamicMesh3 local_328;
  TOptional<UE::Geometry::TTransformSRT3<double>_> local_f8 [2];
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_328);
  (**(code **)(this->_padding_ + 0x3a8))(this);
  if (((this->ShapeSettings).field0_0x0.DebugPtr)->PolygroupMode == PerShape) {
    FaceGroupUtil::SetGroupID(&local_328,0);
  }
  pUVar3 = (this->MaterialProperties).field0_0x0.DebugPtr;
  if ((pUVar3->UVScale != __real_3f800000) || (pUVar3->bWorldSpaceUVScale != false)) {
    local_res10.Mesh = &local_328;
    fVar21 = __real_3f800000;
    if (pUVar3->bWorldSpaceUVScale != false) {
      fVar21 = __real_3c23d70a;
    }
    local_f8[0].bIsSet = false;
    UE::Geometry::FDynamicMeshEditor::RescaleAttributeUVs
              (&local_res10,pUVar3->UVScale * fVar21,pUVar3->bWorldSpaceUVScale,0,local_f8);
  }
  UE::Geometry::FDynamicMesh3::GetBounds
            (&local_328,(TAxisAlignedBox3<double> *)&local_378._s_0,true);
  dVar10 = (local_378._s_0.X + local_360) * __real_3fe0000000000000;
  dVar11 = (local_378._s_0.Y + local_358) * __real_3fe0000000000000;
  dVar9 = (local_350 + local_378._s_0.Z) * __real_3fe0000000000000;
  cVar14 = (**(code **)(this->_padding_ + 0x3c0))(this);
  if (cVar14 == '\0') {
    dVar10 = 0.0;
    dVar11 = 0.0;
  }
  EVar2 = ((this->ShapeSettings).field0_0x0.DebugPtr)->PivotLocation;
  uVar12 = local_378._s_0.Z;
  if ((EVar2 != Base) && (uVar12 = dVar9, EVar2 == Top)) {
    uVar12 = local_350;
  }
  iVar18 = local_328.VertexRefCounts.RefCounts.CurBlock * 0x200 +
           local_328.VertexRefCounts.RefCounts.CurBlockUsed;
  uVar17 = 0;
  if ((iVar18 != 0) &&
     (uVar17 = 0,
     0xfffd < (ushort)(**(short **)local_328.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                      - 1U))) {
    uVar17 = 1;
    uVar13 = 1;
    if (1 < iVar18) {
      do {
        uVar17 = uVar13;
        sVar15 = *(short *)(*(longlong *)
                             (local_328.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 2);
        if ((sVar15 != 0) && (sVar15 != -1)) break;
        uVar17 = uVar17 + 1;
        uVar13 = uVar17;
      } while ((int)uVar17 < iVar18);
    }
  }
  FVar19.Data = local_328.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  do {
    if (uVar17 == local_328.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                  local_328.VertexRefCounts.RefCounts.CurBlockUsed) {
      UPreviewMesh::UpdatePreview
                ((this->PreviewMesh).field0_0x0.DebugPtr,&local_328,FullUpdate,AllVertexAttribs);
      UPreviewMesh::SetTangentsMode((this->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated);
      UPreviewMesh::CalculateTangents((this->PreviewMesh).field0_0x0.DebugPtr);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_328);
      return;
    }
    uVar16 = (ulonglong)(uVar17 & 0x1ff);
    lVar4 = *(longlong *)
             (local_328.Vertices.Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + uVar16 * 0x18);
    dVar7 = *(double *)(lVar4 + 0x10 + uVar16 * 0x18) - (double)uVar12;
    dVar8 = *pdVar1 - dVar10;
    dVar9 = pdVar1[1] - dVar11;
    sVar15 = _dclass(dVar8);
    if (((sVar15 < 1) && (sVar15 = _dclass(dVar9), sVar15 < 1)) &&
       (sVar15 = _dclass(dVar7), sVar15 < 1)) {
      *(double *)(lVar4 + uVar16 * 0x18) = dVar8;
      *(double *)(lVar4 + 8 + uVar16 * 0x18) = dVar9;
      *(double *)(lVar4 + 0x10 + uVar16 * 0x18) = dVar7;
      FVar19.Data = local_328.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
      if (local_328.ChangeStampShape.bIsEnabled != false) {
        LOCK();
        bVar20 = local_328.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
        if (bVar20) {
          local_328.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar20) {
          UE::FMutex::LockSlow(&local_328.ChangeStampShape.Mutex);
        }
        local_328.ChangeStampShape.Value = local_328.ChangeStampShape.Value + 1;
        LOCK();
        aVar6 = local_328.ChangeStampShape.Mutex.State - 1;
        UNLOCK();
        bVar5 = (byte)local_328.ChangeStampShape.Mutex.State & 2;
        local_328.ChangeStampShape.Mutex.State = aVar6;
        FVar19.Data = local_328.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
        if (bVar5 != 0) {
          UE::FMutex::WakeWaitingThread(&local_328.ChangeStampShape.Mutex);
          FVar19.Data = local_328.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
        }
      }
    }
    do {
      uVar17 = uVar17 + 1;
      if (iVar18 <= (int)uVar17) break;
      sVar15 = *(short *)(*(longlong *)(FVar19.Data + (ulonglong)(uVar17 >> 9) * 8) +
                         (ulonglong)(uVar17 & 0x1ff) * 2);
    } while ((sVar15 == 0) || (sVar15 == -1));
  } while( true );
}

// UpdatePreviewPosition @ 14cbf8f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cbf9431) */
/* WARNING: Removing unreachable block (ram,0x00014cbf96ef) */
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
UAddPrimitiveTool::UpdatePreviewPosition(UAddPrimitiveTool *this,FInputDeviceRay *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EMakeMeshPlacementType EVar4;
  code *pcVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  UInteractiveToolManager *pUVar16;
  USceneSnappingManager *pUVar17;
  double extraout_XMM0_Qa;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStackY_4d8 [32];
  TVector<double>_u_0 local_488;
  double dStack_470;
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 uStack_440;
  undefined1 uStack_43c;
  undefined2 uStack_43b;
  undefined1 uStack_439;
  TVector<double>_u_0 local_438;
  double local_420;
  double dStack_418;
  double local_410;
  TQuaternion<double>_u_0 TStack_408;
  TVector<double>_u_0 local_3e8;
  TQuaternion<double>_u_0 local_3d0;
  TVector<double>_u_0 local_3b0;
  TVector<double>_u_0 local_398;
  double local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  double dStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [48];
  double dStack_318;
  double local_310;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  int local_2a4;
  FWeakObjectPtr local_290;
  FWeakObjectPtr FStack_288;
  IActorInstanceManagerInterface *local_280;
  undefined8 uStack_278;
  undefined2 local_246;
  undefined1 local_244;
  ForAnyElementType local_240;
  undefined8 local_238;
  TBitArray<FDefaultBitArrayAllocator> local_230;
  undefined8 uStack_210;
  void *local_200;
  undefined4 local_1f8;
  undefined1 local_1d8;
  undefined1 local_1b8;
  undefined1 local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar1 = _UNK_15061cbc8;
  dVar6 = ___xmm_3ff00000000000000000000000000000;
  dVar8 = __real_3ff0000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_488._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_488._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_488._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_470 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_468 = *(undefined1 (*) [16])((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  uVar18 = local_468._8_4_;
  uVar19 = local_468._12_4_;
  EVar4 = ((this->ShapeSettings).field0_0x0.DebugPtr)->TargetSurface;
  if (EVar4 == GroundPlane) {
    dVar6 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - local_488._s_0.Z) /
            local_468._8_8_;
    if (dVar6 < 0.0) {
LAB_14cbf900c:
      dVar6 = __real_408f400000000000;
    }
    else {
      iVar15 = _finite(dVar6);
      uVar18 = local_468._8_4_;
      uVar19 = local_468._12_4_;
      if (iVar15 == 0) goto LAB_14cbf900c;
    }
    (this->ShapeFrame).Origin.field0_0x0._s_0.X = dStack_470 * dVar6 + local_488._s_0.X;
    (this->ShapeFrame).Origin.field0_0x0._s_0.Y = (double)local_468._0_8_ * dVar6 + local_488._s_0.Y
    ;
    (this->ShapeFrame).Origin.field0_0x0._s_0.Z =
         (double)CONCAT44(uVar19,uVar18) * dVar6 + local_488._s_0.Z;
  }
  else {
    if (EVar4 != OnScene) {
      uStack_360 = 0;
      local_358 = ___xmm_3ff00000000000000000000000000000;
      dStack_350 = _UNK_15061cbc8;
      (this->ShapeFrame).Origin.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined4 *)((longlong)&(this->ShapeFrame).Origin.field0_0x0 + 8) = uVar10;
      *(undefined4 *)((longlong)&(this->ShapeFrame).Origin.field0_0x0 + 0xc) = uVar11;
      local_380 = (double)uVar9;
      uStack_378 = uVar10;
      uStack_374 = uVar11;
      (this->ShapeFrame).Origin.field0_0x0._s_0.Z = (double)uVar12;
      *(undefined4 *)&(this->ShapeFrame).Rotation.field0_0x0 = 0;
      *(undefined4 *)((longlong)&(this->ShapeFrame).Rotation.field0_0x0 + 4) = 0;
      dStack_370 = (double)uVar12;
      local_368 = 0;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = 0.0;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = dVar6;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.W = dVar1;
      goto LAB_14cbf92d1;
    }
    memset(local_348,0,0x100);
    uStack_43b = 0;
    local_458 = 0;
    uStack_450 = 0;
    uStack_439 = 0;
    local_290.ObjectIndex = 0;
    local_290.ObjectSerialNumber = 0;
    FStack_288.ObjectIndex = 0;
    FStack_288.ObjectSerialNumber = 0;
    local_448 = 0;
    uStack_440 = 0xffffffff;
    uStack_43c = 0;
    uStack_278._0_4_ = -1;
    uStack_278._4_1_ = Invalid;
    uStack_278._5_3_ = 0;
    local_348._4_4_ = 1.0;
    local_2a4 = -1;
    local_280 = (IActorInstanceManagerInterface *)0x0;
    bVar14 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                       ((UInteractiveTool *)this,(FHitResult *)local_348,
                        (TRay<double> *)&local_488._s_0,
                        (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                        (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
    if (bVar14) {
      local_438._s_0.X = local_2f0;
      local_438._s_0.Y = dStack_2e8;
      local_438._s_0.Z = local_2e0;
      if (((this->ShapeSettings).field0_0x0.DebugPtr)->bAlignToNormal == false) {
        local_438._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_438._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_438._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      }
      TStack_408._s_0.X = 0.0;
      local_420 = (double)local_348._40_8_;
      dStack_418 = dStack_318;
      TStack_408._s_0.W = dVar8;
      TStack_408._s_0.Y = 0.0;
      TStack_408._s_0.Z = 0.0;
      local_410 = local_310;
      local_3b0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_3b0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_3b0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&TStack_408._s_0,(TVector<double> *)&local_3b0._s_0,
                 (TVector<double> *)&local_438._s_0);
      (this->ShapeFrame).Origin.field0_0x0._s_0.X = local_420;
      (this->ShapeFrame).Origin.field0_0x0._s_0.Y = dStack_418;
      (this->ShapeFrame).Origin.field0_0x0._s_0.Z = local_410;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.X = TStack_408._s_0.X;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = TStack_408._s_0.Y;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = TStack_408._s_0.Z;
      (this->ShapeFrame).Rotation.field0_0x0._s_0.W = TStack_408._s_0.W;
      local_3e8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_3e8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_398._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_398._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_398._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_3e8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      UE::Geometry::TFrame3<double>::ConstrainedAlignPerpAxes
                (&this->ShapeFrame,0,1,2,(TVector<double> *)&local_3e8._s_0,
                 (TVector<double> *)&local_398._s_0,__real_3fe69fbe76c8b439);
      goto LAB_14cbf92d1;
    }
    dVar6 = ((double)uVar12 - local_488._s_0.Z) / (double)local_468._8_8_;
    if ((dVar6 < 0.0) || (iVar15 = _finite(dVar6), iVar15 == 0)) {
      dVar6 = __real_408f400000000000;
    }
    (this->ShapeFrame).Origin.field0_0x0._s_0.X = dStack_470 * dVar6 + local_488._s_0.X;
    (this->ShapeFrame).Origin.field0_0x0._s_0.Y = (double)local_468._0_8_ * dVar6 + local_488._s_0.Y
    ;
    (this->ShapeFrame).Origin.field0_0x0._s_0.Z = (double)local_468._8_8_ * dVar6 + local_488._s_0.Z
    ;
  }
  (this->ShapeFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ShapeFrame).Rotation.field0_0x0._s_0.W = 1.0;
LAB_14cbf92d1:
  pUVar16 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar17 = USceneSnappingManager::Find(pUVar16);
  if (pUVar17 != (USceneSnappingManager *)0x0) {
    local_230.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_230.MaxBits = _UNK_150631d94;
    uStack_210 = _UNK_150631d98;
    local_168 = 0;
    uStack_160 = 0;
    local_246 = 0x100;
    local_158 = 0;
    uStack_150 = 0;
    local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_190 = (this->ShapeFrame).Origin.field0_0x0._s_0.X;
    dStack_188 = (this->ShapeFrame).Origin.field0_0x0._s_0.Y;
    local_240.Data = (FScriptContainerElement *)0x0;
    local_138 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_130 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_180 = (this->ShapeFrame).Origin.field0_0x0._s_0.Z;
    local_238 = 0;
    local_148 = 0;
    local_230.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_200 = (void *)0x0;
    local_1f8 = 0;
    local_1d8 = 0;
    local_1b8 = 0;
    local_198 = 0;
    local_178 = 0x41700000;
    local_120 = 0;
    local_118 = 0;
    local_244 = 4;
    cVar13 = (**(code **)(*(longlong *)pUVar17 + 0x2b8))(pUVar17);
    if (cVar13 != '\0') {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      dVar1 = _DAT_00000030;
      dVar6 = _DAT_00000028;
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->ShapeFrame).Origin.field0_0x0._s_0.X = _DAT_00000020;
      (this->ShapeFrame).Origin.field0_0x0._s_0.Y = dVar6;
      (this->ShapeFrame).Origin.field0_0x0._s_0.Z = dVar1;
    }
    local_1f8 = 0;
    if (local_200 != (void *)0x0) {
      FMemory::Free(local_200);
    }
    uVar7 = local_238 >> 0x20;
    local_238 = local_238 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_240,0,(int *)((longlong)&local_238 + 4));
    }
    iVar15 = local_230.MaxBits;
    uStack_210 = 0xffffffff;
    local_230._24_8_ = (ulonglong)(uint)local_230.MaxBits << 0x20;
    if (0x80 < (uint)iVar15) {
      local_230.NumBits = 0;
      local_230.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_230,0);
    }
    if (local_230.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_230.AllocatorInstance.SecondaryData);
    }
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
  }
  if (((this->ShapeSettings).field0_0x0.DebugPtr)->Rotation != 0.0) {
    dVar6 = (this->ShapeFrame).Rotation.field0_0x0._s_0.W;
    dVar1 = (this->ShapeFrame).Rotation.field0_0x0._s_0.Z;
    dVar1 = dVar1 + dVar1;
    dVar2 = (this->ShapeFrame).Rotation.field0_0x0._s_0.Y;
    dVar3 = (this->ShapeFrame).Rotation.field0_0x0._s_0.X;
    __libm_sse2_sincos_();
    local_3d0._s_0.X = (dVar3 * dVar1 + (dVar2 + dVar2) * dVar6) * extraout_XMM0_Qa;
    local_3d0._s_0.Y = (dVar2 * dVar1 - (dVar3 + dVar3) * dVar6) * extraout_XMM0_Qa;
    local_3d0._s_0.Z =
         (dVar8 - ((dVar2 + dVar2) * dVar2 + (dVar3 + dVar3) * dVar3)) * extraout_XMM0_Qa;
    UE::Geometry::TFrame3<double>::Rotate(&this->ShapeFrame,(TQuaternion<double> *)&local_3d0._s_0);
  }
  UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,true);
  local_108.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&(this->ShapeFrame).Origin.field0_0x0
  ;
  local_108.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->ShapeFrame).Origin.field0_0x0 + 4);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->ShapeFrame).Origin.field0_0x0 + 8);
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->ShapeFrame).Origin.field0_0x0 + 0xc);
  local_108.Rotation.XY.m128d_f64[0] = (this->ShapeFrame).Rotation.field0_0x0._s_0.X;
  local_108.Rotation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->ShapeFrame).Rotation.field0_0x0 + 8);
  local_108.Rotation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->ShapeFrame).Rotation.field0_0x0 + 0xc);
  local_108.Rotation.ZW.m128d_f64[0] = (this->ShapeFrame).Rotation.field0_0x0._s_0.Z;
  local_108.Rotation.ZW.m128d_f64[1] = (this->ShapeFrame).Rotation.field0_0x0._s_0.W;
  local_108.Translation.ZW.m128d_f64[0] = (this->ShapeFrame).Origin.field0_0x0._s_0.Z;
  local_108.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_108.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_108.Translation.ZW.m128d_f64[1] = 0.0;
  local_108.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_108.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  UPreviewMesh::SetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_108);
  return;
}

// UpdateTargetSurface @ 14cbf9720

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

void __thiscall UAddPrimitiveTool::UpdateTargetSurface(UAddPrimitiveTool *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  longlong lVar6;
  FText *pFVar7;
  TTransform<double> *pTVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  FText local_d0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  TVector<double>_u_0 local_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (((this->ShapeSettings).field0_0x0.DebugPtr)->TargetSurface == AtOrigin) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_58 = 0;
    local_88._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    local_88._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_60 = (undefined4)__real_3ff0000000000000;
    uStack_5c = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_68 = 0;
    uStack_64 = 0;
    local_50 = 0;
    uStack_48 = 0;
    UpdatePreviewPosition(this,(FInputDeviceRay *)&local_88._s_0);
    SetState(this,AdjustingSettings);
    lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x20);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (local_d0,L"UAddPrimitiveTool",L"PlaceMeshTransaction",L"Place Mesh");
    pTVar8 = UPreviewMesh::GetTransform
                       ((this->PreviewMesh).field0_0x0.DebugPtr,(TTransform<double> *)&local_88._s_0
                       );
    local_d8 = ::operator_new(0x70);
    if (local_d8 != (undefined8 *)0x0) {
      *local_d8 = &___7FStateChange_UAddPrimitiveTool__6B_;
      dVar5 = (pTVar8->Rotation).XY.m128d_f64[1];
      local_d8[2] = (pTVar8->Rotation).XY.m128d_f64[0];
      local_d8[3] = dVar5;
      dVar5 = (pTVar8->Rotation).ZW.m128d_f64[1];
      local_d8[4] = (pTVar8->Rotation).ZW.m128d_f64[0];
      local_d8[5] = dVar5;
      dVar5 = (pTVar8->Translation).XY.m128d_f64[1];
      local_d8[6] = (pTVar8->Translation).XY.m128d_f64[0];
      local_d8[7] = dVar5;
      dVar5 = (pTVar8->Translation).ZW.m128d_f64[1];
      local_d8[8] = (pTVar8->Translation).ZW.m128d_f64[0];
      local_d8[9] = dVar5;
      uVar2 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
      uVar3 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
      uVar4 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
      *(undefined4 *)(local_d8 + 10) = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
      *(undefined4 *)((longlong)local_d8 + 0x54) = uVar2;
      *(undefined4 *)(local_d8 + 0xb) = uVar3;
      *(undefined4 *)((longlong)local_d8 + 0x5c) = uVar4;
      dVar5 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      local_d8[0xc] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      local_d8[0xd] = dVar5;
    }
    (*pcVar1)(lVar6 + 0x28,this,&local_d8,pFVar7);
    if (local_d0[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0[0].TextData.Reference + 0x10))();
    }
  }
  else {
    SetState(this,PlacingPrimitive);
  }
  return;
}

// _getUObject @ 14cbfce30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall UAddPrimitiveTool::_getUObject(UAddPrimitiveTool *this)

{
  return (UObject *)((longlong)&this[-1].ShapeFrame.Origin.field0_0x0 + 0x10);
}

// _getUObject`adjustor{168}' @ 14cbfce3c

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
   UAddPrimitiveTool::_getUObject`adjustor{168}' (void)const __ptr64 */

UObject * __thiscall UAddPrimitiveTool::_getUObject_adjustor_168__(UAddPrimitiveTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAddPrimitiveTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

