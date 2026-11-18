// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 18

// StaticClass @ 14cab07c0

UClass * __cdecl UUVLayoutPreview::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"UVLayoutPreview",
               &Z_Registration_Info_UClass_UUVLayoutPreview.InnerSingleton,
               StaticRegisterNativesUUVLayoutPreview,0x180,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutPreview>,
               InternalVTableHelperCtorCaller<UUVLayoutPreview>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutPreview.InnerSingleton;
}

// UUVLayoutPreview @ 14cacfca0

UUVLayoutPreview * __thiscall
UUVLayoutPreview::UUVLayoutPreview(UUVLayoutPreview *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bShowBackingRectangle = true;
  *(undefined ***)this = &___7UUVLayoutPreview__6B_;
  (this->SourceMaterials).Materials.ArrayNum = 0;
  (this->SourceMaterials).Materials.ArrayMax = 0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Settings).field0_0x0.DebugPtr = (UUVLayoutPreviewProperties *)0x0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->MeshElementsVisualizer).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->TriangleComponent).field0_0x0.DebugPtr = (UTriangleSetComponent *)0x0;
  (this->BackingRectangleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SourceMaterials).Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  this->bSettingsModified = false;
  return this;
}

// UUVLayoutPreview @ 14cacfe40

UUVLayoutPreview * __thiscall
UUVLayoutPreview::UUVLayoutPreview(UUVLayoutPreview *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bShowBackingRectangle = true;
  *(undefined ***)this = &___7UUVLayoutPreview__6B_;
  (this->SourceMaterials).Materials.ArrayNum = 0;
  (this->SourceMaterials).Materials.ArrayMax = 0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Settings).field0_0x0.DebugPtr = (UUVLayoutPreviewProperties *)0x0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->MeshElementsVisualizer).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->TriangleComponent).field0_0x0.DebugPtr = (UTriangleSetComponent *)0x0;
  (this->BackingRectangleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SourceMaterials).Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  this->bSettingsModified = false;
  return this;
}

// ~UUVLayoutPreview @ 14cad2e60

void __thiscall UUVLayoutPreview::~UUVLayoutPreview(UUVLayoutPreview *this)

{
  UPreviewMesh *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  *(undefined ***)this = &___7UUVLayoutPreview__6B_;
  if (pUVar1 != (UPreviewMesh *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PreviewMesh == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\UVLayoutPreview.cpp"
                       ,0xe,L"You must explicitly Disconnect() UVLayoutPreview before it is GCd");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->SourceMaterials).Materials.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateInWorld @ 14cafea50

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

void __thiscall UUVLayoutPreview::CreateInWorld(UUVLayoutPreview *this,UWorld *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UDynamicMeshComponent *pUVar3;
  UMeshElementsVisualizerProperties *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UPreviewMesh *pUVar8;
  UMeshElementsVisualizer *pUVar9;
  UTriangleSetComponent *this_00;
  UUVLayoutPreviewProperties *pUVar10;
  UMaterialInterface *pUVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_278 [32];
  undefined1 local_258 [8];
  undefined8 local_250;
  code *local_248 [2];
  undefined **local_238;
  UUVLayoutPreview *local_230;
  undefined8 local_220;
  code *local_218 [2];
  undefined **local_208;
  UUVLayoutPreview *local_200;
  undefined8 local_1f0;
  undefined1 local_1e8 [128];
  undefined1 local_168 [128];
  undefined1 local_e8 [128];
  code *local_68 [2];
  undefined **local_58;
  UUVLayoutPreview *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UPreviewMesh::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,pUVar7);
  local_1e8._8_8_ = this;
  pUVar8 = (UPreviewMesh *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    plVar13 = (longlong *)(local_1e8 + 0x50);
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = pUVar8;
  UPreviewMesh::CreateInWorld(pUVar8,param_1,&UE::Math::TTransform<double>::Identity);
  pUVar8 = (this->PreviewMesh).field0_0x0.DebugPtr;
  if (((pUVar8->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,300,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar3 = (pUVar8->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0xbd0))(pUVar3,0);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_168,pUVar7);
  local_168._8_8_ = this;
  pUVar9 = (UMeshElementsVisualizer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
  if (local_168._64_8_ != 0) {
    plVar13 = (longlong *)(local_168 + 0x50);
    if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_168._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UMeshElementsVisualizer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->MeshElementsVisualizer).field0_0x0.DebugPtr = pUVar9;
  UPreviewGeometry::CreateInWorld
            ((UPreviewGeometry *)pUVar9,param_1,&UE::Math::TTransform<double>::Identity);
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UUVLayoutPreview::CreateInWorld'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UUVLayoutPreview::CreateInWorld'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>_>
                ::Call;
  local_40 = (undefined ***)0x0;
  local_50 = this;
  UMeshElementsVisualizer::SetMeshAccessFunction
            ((this->MeshElementsVisualizer).field0_0x0.DebugPtr,
             (TUniqueFunction<void___cdecl(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>)>
              *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar12 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar12 = local_40;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  this_00 = NewObject<UTriangleSetComponent>
                      ((UObject *)((this->PreviewMesh).field0_0x0.DebugPtr)->TemporaryParentActor);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UTriangleSetComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->TriangleComponent).field0_0x0.DebugPtr = this_00;
  local_250 = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,
             (USceneComponent *)
             (((this->PreviewMesh).field0_0x0.DebugPtr)->DynamicMeshComponent).field0_0x0.DebugPtr,
             (FName)0x0);
  UActorComponent::RegisterComponent
            ((UActorComponent *)(this->TriangleComponent).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UUVLayoutPreviewProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar7);
  local_e8._8_8_ = this;
  pUVar10 = (UUVLayoutPreviewProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if (local_e8._64_8_ != 0) {
    plVar13 = (longlong *)(local_e8 + 0x50);
    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_e8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UUVLayoutPreviewProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar10;
  local_238 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UUVLayoutPreview::CreateInWorld'::`2'::<lambda_2>,0,0>::
               _vftable_;
  local_220 = 0;
  local_248[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UUVLayoutPreview::CreateInWorld'::__l2::<lambda_2>,void,bool_const_&>
                 ::Call;
  local_230 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->bEnabled,
             (TFunction<void___cdecl(bool_const_&)> *)local_248);
  pUVar10 = (this->Settings).field0_0x0.DebugPtr;
  local_208 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UUVLayoutPreview::CreateInWorld'::`2'::<lambda_3>,0,0>::
               _vftable_;
  local_1f0 = 0;
  local_218[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UUVLayoutPreview::CreateInWorld'::__l2::<lambda_3>,void,bool_const_&>
                 ::Call;
  local_200 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->bShowWireframe,
             (TFunction<void___cdecl(bool_const_&)> *)local_218);
  pUVar9 = (this->MeshElementsVisualizer).field0_0x0.DebugPtr;
  pUVar10 = (this->Settings).field0_0x0.DebugPtr;
  this->bSettingsModified = true;
  ((pUVar9->Settings).field0_0x0.DebugPtr)->bVisible = pUVar10->bEnabled;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  bShowWireframe = ((this->Settings).field0_0x0.DebugPtr)->bShowWireframe;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  bShowBorders = ((this->Settings).field0_0x0.DebugPtr)->bShowWireframe;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  bShowUVSeams = false;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  bShowNormalSeams = false;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  bShowColorSeams = false;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  ThicknessScale = 0.5;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->DepthBias
       = 0.5;
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
  bAdjustDepthBiasUsingMeshSize = false;
  pUVar4 = (((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  puVar14 = (undefined8 *)pUVar4->_padding_;
  iVar2 = (int)pUVar4->_padding_;
  puVar1 = puVar14 + iVar2;
  while( true ) {
    if ((int)pUVar4->_padding_ != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_258);
    }
    if (puVar14 == puVar1) break;
    (**(code **)(*(longlong *)*puVar14 + 8))();
    puVar14 = puVar14 + 1;
  }
  pUVar11 = ToolSetupUtil::GetSelectionMaterial
                      (&FLinearColor::White,(UInteractiveToolManager *)0x0,0.0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar11 == (UMaterialInterface *)0x0)
     ) {
    (this->BackingRectangleMaterial).field0_0x0.DebugPtr = pUVar11;
    if (pUVar11 != (UMaterialInterface *)0x0) {
      return;
    }
    pUVar11 = ToolSetupUtil::GetDefaultMaterial();
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar11 == (UMaterialInterface *)0x0)) goto LAB_14cafee93;
  }
  UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14cafee93:
  (this->BackingRectangleMaterial).field0_0x0.DebugPtr = pUVar11;
  return;
}

// Disconnect @ 14cb01f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UUVLayoutPreview::Disconnect(UUVLayoutPreview *this)

{
  UPreviewMesh *pUVar1;
  UDynamicMeshComponent *this_00;
  UMeshElementsVisualizer *pUVar2;
  
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  this_00 = (pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (this_00 != (UDynamicMeshComponent *)0x0) {
    UActorComponent::UnregisterComponent((UActorComponent *)this_00);
    (**(code **)(((pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x4a0))();
    (pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  }
  if (pUVar1->TemporaryParentActor != (APreviewMeshActor *)0x0) {
    AActor::Destroy((AActor *)pUVar1->TemporaryParentActor,false,true);
    pUVar1->TemporaryParentActor = (APreviewMeshActor *)0x0;
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  pUVar2 = (this->MeshElementsVisualizer).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2);
  if ((AActor *)pUVar2->_padding_ != (AActor *)0x0) {
    AActor::Destroy((AActor *)pUVar2->_padding_,false,true);
    pUVar2->_padding_ = 0;
  }
  (this->MeshElementsVisualizer).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  return;
}

// GetCurrentScale @ 14cb0f010

float __thiscall UUVLayoutPreview::GetCurrentScale(UUVLayoutPreview *this)

{
  double dVar1;
  
  dVar1 = (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y -
          (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (float)(dVar1 * (double)((this->Settings).field0_0x0.DebugPtr)->Scale);
}

// GetPrivateStaticClass @ 14cb13330

UClass * __cdecl UUVLayoutPreview::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"UVLayoutPreview",
               &Z_Registration_Info_UClass_UUVLayoutPreview.InnerSingleton,
               StaticRegisterNativesUUVLayoutPreview,0x180,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutPreview>,
               InternalVTableHelperCtorCaller<UUVLayoutPreview>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutPreview.InnerSingleton;
}

// OnTick @ 14cb27b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UUVLayoutPreview::OnTick(UUVLayoutPreview *this,float param_1)

{
  bool bVar1;
  UPreviewMesh *this_00;
  UDynamicMeshComponent *pUVar2;
  char cVar3;
  
  if (this->bSettingsModified != false) {
    this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
    bVar1 = ((this->Settings).field0_0x0.DebugPtr)->bEnabled;
    pUVar2 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
    if (pUVar2 != (UDynamicMeshComponent *)0x0) {
      cVar3 = (**(code **)(pUVar2->_padding_ + 0x560))();
      if ((bool)cVar3 != bVar1) {
        USceneComponent::SetVisibility
                  ((USceneComponent *)(this_00->DynamicMeshComponent).field0_0x0.DebugPtr,bVar1,
                   Propagate);
        UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(this_00);
      }
    }
    ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->bVisible
         = bVar1;
    ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
    bShowWireframe = ((this->Settings).field0_0x0.DebugPtr)->bShowWireframe;
    ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
    bShowBorders = ((this->Settings).field0_0x0.DebugPtr)->bShowWireframe;
    FWatchablePropertySet::CheckAndUpdateWatched
              ((FWatchablePropertySet *)
               &((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.
                DebugPtr)->_padding_);
    this->bSettingsModified = false;
  }
  UMeshElementsVisualizer::OnTick((this->MeshElementsVisualizer).field0_0x0.DebugPtr,param_1);
  return;
}

// RecalculatePosition @ 14cb2cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UUVLayoutPreview::RecalculatePosition(UUVLayoutPreview *this)

{
  double *pdVar1;
  double *pdVar2;
  UUVLayoutPreviewProperties *pUVar3;
  AActor *this_00;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  double *pdVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  double dVar15;
  double extraout_XMM0_Qa;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auStack_348 [32];
  double local_318;
  TVector<double>_u_0 local_310;
  TQuaternion<double>_u_0 local_2f8;
  double local_2d8;
  double local_2d0;
  TQuaternion<double>_u_0 local_2c8;
  TQuaternion<double>_u_0 local_2a8;
  TQuaternion<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TQuaternion<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double> local_188;
  TVector<double> local_170;
  TVector<double> local_158;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_310._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_310._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_310._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_2f8._s_0.W = _UNK_15061cbc8;
  local_1e8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_1e8._s_0.Y = _UNK_150689518;
  local_1e8._s_0.Z = 0.0;
  local_2f8._s_0.X = 0.0;
  local_2f8._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_268._s_0,
             (TVector<double> *)&local_1e8._s_0);
  dVar16 = __real_3ff0000000000000;
  local_250._0_4_ = local_268._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
  local_250._4_4_ = local_268._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
  local_250._8_4_ = local_268._8_4_ ^ _UNK_15066df78;
  local_250._12_4_ = local_268._12_4_ ^ _UNK_15066df7c;
  local_1c8._s_0.Z = __real_3ff0000000000000;
  local_250._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)local_268._16_8_ >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(local_268._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_288._s_0.X = 0.0;
  local_1c8._s_0.X = 0.0;
  local_1c8._s_0.Y = 0.0;
  local_288._s_0.W = __real_3ff0000000000000;
  local_288._s_0.Y = 0.0;
  local_288._s_0.Z = 0.0;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_288._s_0,(TVector<double> *)&local_1c8._s_0,
             (TVector<double> *)&local_250._s_0);
  UE::Geometry::operator*<double>
            ((TQuaternion<double> *)&local_2c8._s_0,(TQuaternion<double> *)&local_288._s_0,
             (TQuaternion<double> *)&local_2f8._s_0);
  dVar5 = 0.0;
  local_2d8 = 0.0;
  auVar18._0_8_ = local_2c8._s_0.Y * local_2c8._s_0.Y + local_2c8._s_0.X * local_2c8._s_0.X;
  auVar18._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ =
       local_2c8._s_0.W * local_2c8._s_0.W + local_2c8._s_0.Z * local_2c8._s_0.Z + auVar18._0_8_;
  auVar19 = sqrtpd(auVar18,auVar19);
  local_318 = 0.0;
  if (auVar19._0_8_ <= 0.0) {
    local_2d0 = dVar16;
    local_2c8._s_0.Z = 0.0;
    local_2c8._s_0.W = 0.0;
    local_2c8._s_0.X = 0.0;
    local_2c8._s_0.Y = 0.0;
    dVar5 = 0.0;
  }
  else {
    local_2d0 = dVar16;
    dVar15 = dVar16 / auVar19._0_8_;
    local_2c8._s_0.X = local_2c8._s_0.X * dVar15;
    local_2c8._s_0.Y = local_2c8._s_0.Y * dVar15;
    local_2c8._s_0.Z = local_2c8._s_0.Z * dVar15;
    local_2c8._s_0.W = local_2c8._s_0.W * dVar15;
    if (0.0 < dVar15) {
      dVar5 = local_2c8._s_0.Y;
      local_318 = local_2c8._s_0.X;
      local_2f8._s_0.X = local_2c8._s_0.X;
      local_2f8._s_0.Y = local_2c8._s_0.Y;
      local_2f8._s_0.Z = local_2c8._s_0.Z;
      local_2f8._s_0.W = local_2c8._s_0.W;
      local_2d8 = local_2c8._s_0.Z;
      local_2d0 = local_2c8._s_0.W;
    }
  }
  local_1a8._s_0.Z = 0.0;
  dVar22 = dVar5 + dVar5;
  dVar17 = local_2d8 + local_2d8;
  dVar15 = dVar22 * local_2d0;
  dVar6 = dVar17 * dVar5 - (local_318 + local_318) * local_2d0;
  local_1a8._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_1a8._s_0.Y = _UNK_15061cbc8;
  dVar7 = dVar17 * local_318 + dVar15;
  dVar21 = dVar16 - ((local_318 + local_318) * local_318 + dVar22 * dVar5);
  local_238._s_0.X = dVar7;
  local_238._s_0.Y = dVar6;
  local_238._s_0.Z = dVar21;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,&local_188,(TVector<double> *)&local_1a8._s_0);
  local_220._s_0.Z = dVar17 * local_318 - dVar15;
  local_220._s_0.Y = dVar17 * local_2d0 + dVar22 * local_318;
  local_220._s_0.X = dVar16 - (dVar17 * local_2d8 + dVar22 * dVar5);
  UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
            ((TVector<double> *)&local_220._s_0,&local_188,(TVector<double> *)&local_238._s_0);
  __libm_sse2_sincos_();
  local_208._s_0.X = extraout_XMM0_Qa * dVar7;
  local_208._s_0.Y = extraout_XMM0_Qa * dVar6;
  local_208._s_0.Z = extraout_XMM0_Qa * dVar21;
  UE::Geometry::operator*<double>
            ((TQuaternion<double> *)&local_2a8._s_0,(TQuaternion<double> *)&local_208._s_0,
             (TQuaternion<double> *)&local_2f8._s_0);
  auVar20._0_8_ = local_2a8._s_0.Y * local_2a8._s_0.Y + local_2a8._s_0.X * local_2a8._s_0.X;
  auVar20._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_2a8._s_0.W * local_2a8._s_0.W + local_2a8._s_0.Z * local_2a8._s_0.Z +
                 auVar20._0_8_;
  auVar19 = sqrtpd(auVar20,auVar4);
  if (auVar19._0_8_ <= 0.0) {
    local_2a8._s_0.Z = 0.0;
    local_2a8._s_0.W = 0.0;
    local_2a8._s_0.X = 0.0;
    local_2a8._s_0.Y = 0.0;
  }
  else {
    dVar16 = dVar16 / auVar19._0_8_;
    local_2a8._s_0.X = local_2a8._s_0.X * dVar16;
    local_2a8._s_0.Y = local_2a8._s_0.Y * dVar16;
    local_2a8._s_0.Z = local_2a8._s_0.Z * dVar16;
    local_2a8._s_0.W = local_2a8._s_0.W * dVar16;
    if (0.0 < dVar16) {
      local_2f8._s_0.X = local_2a8._s_0.X;
      local_2f8._s_0.Y = local_2a8._s_0.Y;
      local_2f8._s_0.Z = local_2a8._s_0.Z;
      local_2f8._s_0.W = local_2a8._s_0.W;
    }
  }
  pdVar1 = &(this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Z;
  pdVar2 = &(this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y;
  uVar14 = 0;
  local_310._s_0.Z =
       (*pdVar1 + (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  local_310._s_0.X =
       ((this->SourceObjectWorldBounds).Max.field0_0x0._s_0.X +
       (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_310._s_0.Y =
       ((this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y + *pdVar2) * __real_3fe0000000000000;
  dVar5 = __real_7fefffffffffffff;
  dVar16 = __real_ffefffffffffffff;
  do {
    uVar10 = local_310._s_0.Z;
    uVar9 = local_310._s_0.Y;
    uVar8 = local_310._s_0.X;
    lVar11 = 0xb8;
    if (((uVar14 >> 1 ^ uVar14) & 1) == 0) {
      lVar11 = 0xa0;
    }
    dVar15 = *(double *)(&this->field_0x0 + lVar11);
    pdVar12 = &(this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y;
    if ((uVar14 & 2) == 0) {
      pdVar12 = pdVar2;
    }
    dVar17 = *pdVar12;
    pdVar12 = &(this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Z;
    if (uVar14 < 4) {
      pdVar12 = pdVar1;
    }
    dVar21 = *pdVar12;
    pTVar13 = UE::Geometry::TFrame3<double>::GetAxis
                        ((TFrame3<double> *)&local_310._s_0,&local_170,0);
    dVar15 = (dVar17 - (double)uVar9) * (pTVar13->field0_0x0)._s_0.Y +
             (dVar15 - (double)uVar8) * (pTVar13->field0_0x0)._s_0.X +
             (dVar21 - (double)uVar10) * (pTVar13->field0_0x0)._s_0.Z;
    UE::Geometry::TFrame3<double>::GetAxis((TFrame3<double> *)&local_310._s_0,&local_158,1);
    if (dVar15 < dVar5) {
      dVar5 = dVar15;
    }
    if (dVar16 < dVar15) {
      dVar16 = dVar15;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  dVar15 = dVar16 - dVar5;
  dVar17 = (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y -
           (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y;
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  local_138.Scale3D.ZW.m128d_f64[0] = (double)(float)(dVar17 * (double)pUVar3->Scale);
  dVar17 = (pUVar3->Offset).field0_0x0._s_0.X;
  dVar16 = (dVar16 + dVar15 * __real_3fb999999999999a) * dVar17;
  if (pUVar3->Side == Left) {
    dVar16 = dVar5 - (dVar15 * __real_3fb999999999999a + local_138.Scale3D.ZW.m128d_f64[0]) * dVar17
    ;
  }
  dVar22 = local_2f8._s_0.Z + local_2f8._s_0.Z;
  dVar5 = local_138.Scale3D.ZW.m128d_f64[0] * (pUVar3->Offset).field0_0x0._s_0.Y;
  dVar21 = local_2f8._s_0.Y + local_2f8._s_0.Y;
  dVar15 = ((__real_3ff0000000000000 - (dVar21 * local_2f8._s_0.Y + dVar22 * local_2f8._s_0.Z)) *
            dVar16 - (dVar21 * local_2f8._s_0.X - dVar22 * local_2f8._s_0.W) * dVar5) +
           local_310._s_0.X;
  dVar17 = ((dVar21 * local_2f8._s_0.X + dVar22 * local_2f8._s_0.W) * dVar16 -
           (__real_3ff0000000000000 -
           ((local_2f8._s_0.X + local_2f8._s_0.X) * local_2f8._s_0.X + dVar22 * local_2f8._s_0.Z)) *
           dVar5) + local_310._s_0.Y;
  local_138.Translation.ZW.m128d_f64[0] =
       ((dVar22 * local_2f8._s_0.X - dVar21 * local_2f8._s_0.W) * dVar16 -
       (dVar22 * local_2f8._s_0.Y + (local_2f8._s_0.X + local_2f8._s_0.X) * local_2f8._s_0.W) *
       dVar5) + local_310._s_0.Z;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.X = dVar15;
  *(double *)((longlong)&(this->CurrentWorldFrame).Origin.field0_0x0 + 8) = dVar17;
  (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Z = local_138.Translation.ZW.m128d_f64[0];
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.X = local_2f8._s_0.X;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y = local_2f8._s_0.Y;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z = local_2f8._s_0.Z;
  (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.W = local_2f8._s_0.W;
  local_138.Rotation.ZW.m128d_f64[0] = local_2f8._s_0.Z;
  local_138.Rotation.ZW.m128d_f64[1] = local_2f8._s_0.W;
  local_138.Rotation.XY.m128d_f64[0] = local_2f8._s_0.X;
  local_138.Rotation.XY.m128d_f64[1] = local_2f8._s_0.Y;
  local_138.Translation.ZW.m128d_f64[1] = 0.0;
  local_138.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar17,0);
  local_138.Translation.XY.m128d_f64[0] = dVar15;
  local_138.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_138.Scale3D.XY.m128d_f64[0] =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * local_138.Scale3D.ZW.m128d_f64[0];
  local_138.Scale3D.XY.m128d_f64[1] =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * local_138.Scale3D.ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[0] =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * local_138.Scale3D.ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
  UPreviewMesh::SetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_138);
  this_00 = (AActor *)((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->_padding_;
  if (this_00 != (AActor *)0x0) {
    AActor::SetActorTransform(this_00,&local_138,false,(FHitResult *)0x0,None);
  }
  return;
}

// Render @ 14cb31070

void __thiscall UUVLayoutPreview::Render(UUVLayoutPreview *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UUVLayoutPreviewProperties *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  double *pdVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_f8 [240];
  
  pdVar10 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_f8);
  dVar1 = pdVar10[1];
  (this->CameraState).Position.field0_0x0._s_0.X = *pdVar10;
  (this->CameraState).Position.field0_0x0._s_0.Y = dVar1;
  dVar1 = pdVar10[3];
  (this->CameraState).Position.field0_0x0._s_0.Z = pdVar10[2];
  *(double *)&(this->CameraState).field_0x18 = dVar1;
  dVar1 = pdVar10[5];
  (this->CameraState).Orientation.X = pdVar10[4];
  (this->CameraState).Orientation.Y = dVar1;
  dVar1 = pdVar10[7];
  (this->CameraState).Orientation.Z = pdVar10[6];
  (this->CameraState).Orientation.W = dVar1;
  dVar1 = pdVar10[9];
  *(double *)&(this->CameraState).HorizontalFOVDegrees = pdVar10[8];
  *(double *)&(this->CameraState).AspectRatio = dVar1;
  dVar1 = pdVar10[0xb];
  (this->CameraState).DPIScale = pdVar10[10];
  *(double *)&(this->CameraState).field_0x58 = dVar1;
  RecalculatePosition(this);
  pUVar5 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar5->bEnabled != false) {
    dVar1 = (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.X;
    dVar12 = (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y -
             (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y;
    dVar2 = (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.W;
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    dVar3 = (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y;
    local_148 = (this->CurrentWorldFrame).Origin.field0_0x0._s_0.X;
    dStack_140 = (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Y;
    dVar4 = (this->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z;
    dVar6 = dVar4 + dVar4;
    local_138 = (this->CurrentWorldFrame).Origin.field0_0x0._s_0.Z;
    dVar14 = (double)(float)(dVar12 * (double)pUVar5->Scale);
    dVar13 = dVar3 + dVar3;
    dVar7 = (dVar2 * dVar6 + dVar1 * dVar13) * dVar14;
    dVar8 = (dVar1 * dVar13 - dVar2 * dVar6) * dVar14;
    dVar12 = (__real_3ff0000000000000 - (dVar13 * dVar3 + dVar6 * dVar4)) * dVar14;
    dVar13 = (dVar1 * dVar6 - dVar2 * dVar13) * dVar14;
    dVar2 = ((dVar1 + dVar1) * dVar2 + dVar6 * dVar3) * dVar14;
    dVar14 = (__real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + dVar6 * dVar4)) * dVar14;
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    uVar9 = __real_3f000000;
    local_130 = dVar12 + local_148;
    local_128 = dVar7 + dStack_140;
    local_120 = dVar13 + local_138;
    (**(code **)(*plVar11 + 0x30))
              (plVar11,&local_148,&local_130,&FLinearColor::Black,1,__real_3f000000,0,1);
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    local_118 = dVar12 + local_148;
    local_110 = dVar7 + dStack_140;
    local_108 = dVar13 + local_138;
    local_130 = dVar8 + local_118;
    local_128 = dVar14 + local_110;
    local_120 = dVar2 + local_108;
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_118,&local_130,&FLinearColor::Black,1,uVar9,0,1);
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    local_118 = dVar8 + local_148;
    local_130 = dVar12 + local_148 + dVar8;
    local_128 = dVar7 + dStack_140 + dVar14;
    local_110 = dVar14 + dStack_140;
    local_120 = dVar13 + local_138 + dVar2;
    local_108 = dVar2 + local_138;
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_130,&local_118,&FLinearColor::Black,1,uVar9,0,1);
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    local_118 = dVar8 + local_148;
    local_110 = dVar14 + dStack_140;
    local_108 = dVar2 + local_138;
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_118,&local_148,&FLinearColor::Black,1,uVar9,0,1);
  }
  return;
}

// SetCurrentCameraState @ 14cb35ed0

void __thiscall
UUVLayoutPreview::SetCurrentCameraState(UUVLayoutPreview *this,FViewCameraState *param_1)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (this->CameraState).Position.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->CameraState).Position.field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  (this->CameraState).Position.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->CameraState).field_0x18 = uVar2;
  dVar1 = (param_1->Orientation).Y;
  (this->CameraState).Orientation.X = (param_1->Orientation).X;
  (this->CameraState).Orientation.Y = dVar1;
  dVar1 = (param_1->Orientation).W;
  (this->CameraState).Orientation.Z = (param_1->Orientation).Z;
  (this->CameraState).Orientation.W = dVar1;
  fVar3 = param_1->OrthoWorldCoordinateWidth;
  fVar4 = param_1->AspectRatio;
  bVar5 = param_1->bIsOrthographic;
  bVar6 = param_1->bIsVR;
  uVar7 = *(undefined2 *)&param_1->field_0x4e;
  (this->CameraState).HorizontalFOVDegrees = param_1->HorizontalFOVDegrees;
  (this->CameraState).OrthoWorldCoordinateWidth = fVar3;
  (this->CameraState).AspectRatio = fVar4;
  (this->CameraState).bIsOrthographic = bVar5;
  (this->CameraState).bIsVR = bVar6;
  *(undefined2 *)&(this->CameraState).field_0x4e = uVar7;
  uVar2 = *(undefined8 *)&param_1->field_0x58;
  (this->CameraState).DPIScale = param_1->DPIScale;
  *(undefined8 *)&(this->CameraState).field_0x58 = uVar2;
  return;
}

// SetSourceMaterials @ 14cb37df0

void __thiscall
UUVLayoutPreview::SetSourceMaterials(UUVLayoutPreview *this,FComponentMaterialSet *param_1)

{
  FComponentMaterialSet *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->SourceMaterials;
  if (pFVar1 != param_1) {
    iVar3 = (this->SourceMaterials).Materials.ArrayMax;
    piVar2 = &(this->SourceMaterials).Materials.ArrayMax;
    _Src = (param_1->Materials).AllocatorInstance.Data;
    iVar4 = (param_1->Materials).ArrayNum;
    (this->SourceMaterials).Materials.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pFVar1->Materials).AllocatorInstance.Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  UPreviewMesh::SetMaterials((this->PreviewMesh).field0_0x0.DebugPtr,&pFVar1->Materials);
  return;
}

// SetSourceWorldPosition @ 14cb37f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UUVLayoutPreview::SetSourceWorldPosition
          (UUVLayoutPreview *this,TTransform<double> *param_1,TBox<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar11 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar12 = _UNK_150a9e6d4;
  uStack_30 = _UNK_150a9e6d8;
  uStack_2c = _UNK_150a9e6dc;
  dVar13 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar14 = _UNK_1508ffb58;
  uVar15 = _UNK_1508ffb5c;
  dVar16 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar17 = _UNK_150a9e648;
  if (param_2->IsValid != '\0') {
    uVar1 = *(undefined8 *)&(param_2->Max).field0_0x0;
    uStack_30 = (undefined4)uVar1;
    uStack_2c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar11 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0x10);
    uVar12 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0x14);
    dVar13 = (param_2->Max).field0_0x0._s_0.Y;
    uVar14 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0x10);
    uVar15 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0x14);
    dVar16 = (param_2->Min).field0_0x0._s_0.X;
    dVar17 = (param_2->Min).field0_0x0._s_0.Y;
  }
  dVar2 = (param_1->Rotation).XY.m128d_f64[0];
  uVar7 = *(undefined4 *)((param_1->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc);
  dVar9 = (param_1->Translation).XY.m128d_f64[0];
  dVar10 = (param_1->Translation).XY.m128d_f64[1];
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.X = dVar16;
  (this->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y = dVar17;
  uVar3 = *(undefined4 *)(param_1->Rotation).ZW.m128d_f64;
  uVar4 = *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 4);
  uVar5 = *(undefined4 *)((param_1->Rotation).ZW.m128d_f64 + 1);
  uVar6 = *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc);
  *(undefined4 *)((longlong)&(this->SourceObjectWorldBounds).Min.field0_0x0 + 0x10) = uVar11;
  *(undefined4 *)((longlong)&(this->SourceObjectWorldBounds).Min.field0_0x0 + 0x14) = uVar12;
  *(undefined4 *)&(this->SourceObjectWorldBounds).Max.field0_0x0 = uStack_30;
  *(undefined4 *)((longlong)&(this->SourceObjectWorldBounds).Max.field0_0x0 + 4) = uStack_2c;
  dVar16 = (param_1->Translation).ZW.m128d_f64[0];
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.X = dVar9;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.Y = dVar10;
  (this->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y = dVar13;
  *(undefined4 *)((longlong)&(this->SourceObjectWorldBounds).Max.field0_0x0 + 0x10) = uVar14;
  *(undefined4 *)((longlong)&(this->SourceObjectWorldBounds).Max.field0_0x0 + 0x14) = uVar15;
  (this->SourceObjectFrame).Origin.field0_0x0._s_0.Z = dVar16;
  (this->SourceObjectFrame).Rotation.field0_0x0._s_0.X = dVar2;
  *(undefined4 *)((longlong)&(this->SourceObjectFrame).Rotation.field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&(this->SourceObjectFrame).Rotation.field0_0x0 + 0xc) = uVar8;
  *(undefined4 *)((longlong)&(this->SourceObjectFrame).Rotation.field0_0x0 + 0x10) = uVar3;
  *(undefined4 *)((longlong)&(this->SourceObjectFrame).Rotation.field0_0x0 + 0x14) = uVar4;
  *(undefined4 *)((longlong)&(this->SourceObjectFrame).Rotation.field0_0x0 + 0x18) = uVar5;
  *(undefined4 *)((longlong)&(this->SourceObjectFrame).Rotation.field0_0x0 + 0x1c) = uVar6;
  return;
}

// SetTransform @ 14cb384e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UUVLayoutPreview::SetTransform(UUVLayoutPreview *this,TTransform<double> *param_1)

{
  AActor *this_00;
  
  UPreviewMesh::SetTransform((this->PreviewMesh).field0_0x0.DebugPtr,param_1);
  this_00 = (AActor *)((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->_padding_;
  if (this_00 != (AActor *)0x0) {
    AActor::SetActorTransform(this_00,param_1,false,(FHitResult *)0x0,None);
  }
  return;
}

// SetVisible @ 14cb38680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UUVLayoutPreview::SetVisible(UUVLayoutPreview *this,bool param_1)

{
  UPreviewMesh *this_00;
  UDynamicMeshComponent *pUVar1;
  char cVar2;
  
  this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar1 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x560))();
    if ((bool)cVar2 != param_1) {
      USceneComponent::SetVisibility
                ((USceneComponent *)(this_00->DynamicMeshComponent).field0_0x0.DebugPtr,param_1,
                 Propagate);
      UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(this_00);
    }
  }
  ((((this->MeshElementsVisualizer).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->bVisible =
       param_1;
  return;
}

// StaticRegisterNativesUUVLayoutPreview @ 14cb3ece0

void __cdecl UUVLayoutPreview::StaticRegisterNativesUUVLayoutPreview(void)

{
  return;
}

// UpdateUVMesh @ 14cb49cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UUVLayoutPreview::UpdateUVMesh(UUVLayoutPreview *this,FDynamicMesh3 *param_1,int param_2)

{
  float fVar1;
  FDynamicMeshAttributeSet *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  UTriangleSetComponent *this_01;
  TObjectPtr<UMaterialInterface>_u_0 TVar5;
  UPreviewMesh *this_02;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TDynamicMeshOverlay<float,2> *this_03;
  int iVar17;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar18;
  FDynamicMesh3 *pFVar19;
  ulong64 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  TDynamicMeshOverlay<float,3> *this_04;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_5b8 [32];
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined8 local_568;
  undefined8 local_560;
  float local_558;
  TVector<double>_u_0 local_550;
  undefined8 local_538;
  float local_530;
  undefined8 local_52c;
  float local_524;
  TVector2<float>_u_0 local_520;
  undefined2 local_518;
  undefined1 local_516;
  FColor_u_0 local_510;
  undefined4 uStack_50c;
  undefined1 local_508 [16];
  UUVLayoutPreview *local_4f8;
  TObjectPtr<UMaterialInterface>_u_0 local_4e8;
  undefined1 local_4e0 [16];
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [16];
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined1 local_450 [16];
  undefined8 local_440;
  undefined8 uStack_438;
  float local_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  TObjectPtr<UMaterialInterface>_u_0 local_408;
  undefined1 local_400 [16];
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined1 local_370 [16];
  undefined8 local_360;
  undefined8 uStack_358;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  FDynamicMesh3 local_328;
  float local_f8 [6];
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_4f8 = this;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_328);
  UE::Geometry::FDynamicMesh3::EnableAttributes(&local_328);
  if (((local_328.AttributeSet.Ptr)->UVLayers).Array.ArrayNum < 1) {
    local_568 = (TDynamicMeshOverlay<float,2> *)0x0;
  }
  else {
    local_568 = *(TDynamicMeshOverlay<float,2> **)
                 ((local_328.AttributeSet.Ptr)->UVLayers).Array.AllocatorInstance.Data;
  }
  if (((local_328.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum < 1) {
    this_04 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    this_04 = *(TDynamicMeshOverlay<float,3> **)
               ((local_328.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_598 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  uStack_590 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  if (((param_1 != (FDynamicMesh3 *)0x0) &&
      (this_00 = (param_1->AttributeSet).Ptr, this_00 != (FDynamicMeshAttributeSet *)0x0)) &&
     (pTVar18 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(this_00,param_2),
     this_03 = local_568, fVar10 = __real_3f000000,
     pTVar18 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
    uVar21 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar23 = 0;
    if ((uVar21 != 0) &&
       (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar23 = 0,
       0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
      uVar22 = 1;
      uVar23 = 1;
      if (1 < (int)uVar21) {
        do {
          lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar22 >> 9) * 8);
          if ((*(short *)(lVar3 + (ulonglong)(uVar22 & 0x1ff) * 2) != 0) &&
             (uVar23 = uVar22, *(short *)(lVar3 + (ulonglong)(uVar22 & 0x1ff) * 2) != -1)) break;
          uVar22 = uVar22 + 1;
          uVar23 = uVar22;
        } while ((int)uVar22 < (int)uVar21);
      }
    }
    if (uVar23 != uVar21) {
      fVar25 = (float)uStack_590._4_4_;
      fVar26 = (float)(undefined4)uStack_590;
      fVar27 = (float)local_598._4_4_;
      fVar30 = (float)(undefined4)local_598;
LAB_14cb49e60:
      do {
        lVar3 = *(longlong *)&pTVar18->field_0x78;
        uVar22 = uVar23 * 3;
        iVar17 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar22 >> 9) * 8) +
                         (ulonglong)(uVar22 & 0x1ff) * 4);
        if (-1 < iVar17) {
          lVar4 = *(longlong *)&pTVar18->field_0x48;
          local_598._4_4_ =
               *(undefined4 *)
                (*(longlong *)(lVar3 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                (ulonglong)(uVar22 + 1 & 0x1ff) * 4);
          local_598._0_4_ = iVar17;
          lVar24 = 0;
          uStack_590._0_4_ =
               *(undefined4 *)
                (*(longlong *)(lVar3 + (ulonglong)(uVar22 + 2 >> 9) * 8) +
                (ulonglong)(uVar22 + 2 & 0x1ff) * 4);
          do {
            uVar22 = *(uint *)((longlong)&local_598 + lVar24 * 4);
            local_568 = (TDynamicMeshOverlay<float,2> *)
                        CONCAT44(*(undefined4 *)
                                  (*(longlong *)
                                    (lVar4 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                  (ulonglong)(uVar22 * 2 + 1 & 0x1ff) * 4),
                                 *(undefined4 *)
                                  (*(longlong *)
                                    (lVar4 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8) +
                                  (ulonglong)(uVar22 * 2 & 0x1ff) * 4));
            *(TDynamicMeshOverlay<float,2> **)(local_f8 + lVar24 * 2) = local_568;
            fVar1 = local_f8[lVar24 * 2];
            if (fVar1 < fVar30) {
              fVar30 = fVar1;
            }
            if (fVar26 < fVar1) {
              fVar26 = fVar1;
            }
            fVar1 = local_f8[lVar24 * 2 + 1];
            if (fVar1 < fVar27) {
              fVar27 = fVar1;
            }
            if (fVar25 < fVar1) {
              fVar25 = fVar1;
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 < 3);
          local_588._0_8_ = 0xffffffffffffffff;
          local_588._8_4_ = -1;
          local_578._0_8_ = 0xffffffffffffffff;
          local_578._8_4_ = -1;
          local_508._0_8_ = 0xffffffffffffffff;
          local_508._8_4_ = -1;
          iVar17 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_03,local_f8);
          local_550._s_0.X = (double)local_f8[0];
          local_578._0_4_ = iVar17;
          local_530 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_524 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_550._s_0.Y = (double)local_f8[1];
          local_520 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_518 = 0;
          local_516 = 0;
          local_538 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_52c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_550._s_0.Z = 0.0;
          iVar17 = UE::Geometry::FDynamicMesh3::AppendVertex
                             (&local_328,(FVertexInfo *)&local_550._s_0);
          local_588._0_4_ = iVar17;
          local_560 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
          local_558 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
          iVar17 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (this_04,(float *)&local_560);
          local_508._0_4_ = iVar17;
          iVar17 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_03,local_f8 + 2);
          local_550._s_0.X = (double)local_f8[2];
          local_578._4_4_ = iVar17;
          local_530 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_524 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_550._s_0.Y = (double)local_f8[3];
          local_520 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_518 = 0;
          local_516 = 0;
          local_538 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_52c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_550._s_0.Z = 0.0;
          iVar17 = UE::Geometry::FDynamicMesh3::AppendVertex
                             (&local_328,(FVertexInfo *)&local_550._s_0);
          local_588._4_4_ = iVar17;
          local_560 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
          local_558 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
          iVar17 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (this_04,(float *)&local_560);
          local_508._4_4_ = iVar17;
          local_578._8_4_ =
               UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_03,local_f8 + 4);
          local_550._s_0.X = (double)local_f8[4];
          local_550._s_0.Y = (double)local_f8[5];
          local_530 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_524 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_520 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_550._s_0.Z = 0.0;
          local_538 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_52c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_518 = 0;
          local_516 = 0;
          local_588._8_4_ =
               UE::Geometry::FDynamicMesh3::AppendVertex(&local_328,(FVertexInfo *)&local_550._s_0);
          local_560 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
          local_558 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
          local_508._8_4_ =
               UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                         (this_04,(float *)&local_560);
          if (0.0 < ((local_f8[5] - local_f8[1]) * (local_f8[2] - local_f8[0]) -
                    (local_f8[3] - local_f8[1]) * (local_f8[4] - local_f8[0])) * fVar10) {
            uVar28 = local_588._4_4_;
            uVar29 = local_578._4_4_;
            local_588._4_4_ = local_588._0_4_;
            local_588._0_4_ = uVar28;
            local_578._4_4_ = local_578._0_4_;
            local_578._0_4_ = uVar29;
          }
          iVar17 = UE::Geometry::FDynamicMesh3::AppendTriangle(&local_328,(FIndex3i *)local_588,0);
          UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                    (this_03,iVar17,(FIndex3i *)local_578,true);
          UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                    (this_04,iVar17,(FIndex3i *)local_508,true);
        }
        uVar23 = uVar23 + 1;
        if ((int)uVar23 < (int)uVar21) {
          do {
            lVar3 = *(longlong *)
                     ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar23 >> 9) * 8);
            if ((*(short *)(lVar3 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar3 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) goto LAB_14cb49e60;
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < (int)uVar21);
        }
        this = local_4f8;
      } while (uVar23 != uVar21);
      goto LAB_14cb4a2b0;
    }
  }
  fVar25 = (float)uStack_590._4_4_;
  fVar26 = (float)(undefined4)uStack_590;
  fVar27 = (float)local_598._4_4_;
  fVar30 = (float)(undefined4)local_598;
LAB_14cb4a2b0:
  fVar26 = fVar26 + __real_3c23d70a;
  fVar25 = fVar25 + __real_3c23d70a;
  fVar30 = fVar30 - __real_3c23d70a;
  fVar27 = fVar27 - __real_3c23d70a;
  UTriangleSetComponent::Clear((this->TriangleComponent).field0_0x0.DebugPtr);
  if (this->bShowBackingRectangle != false) {
    this_01 = (this->TriangleComponent).field0_0x0.DebugPtr;
    TVar5 = (TObjectPtr<UMaterialInterface>_u_0)(this->BackingRectangleMaterial).field0_0x0.DebugPtr
    ;
    dVar7 = (double)fVar26;
    dVar6 = (double)fVar30;
    uVar28 = SUB84((double)fVar27,0);
    uVar29 = (undefined4)((ulonglong)(double)fVar27 >> 0x20);
    uVar31 = SUB84((double)fVar25,0);
    uVar32 = (undefined4)((ulonglong)(double)fVar25 >> 0x20);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    uVar16 = _UNK_1529129f8;
    uVar15 = ___xmm_3ff0000000000000bf847ae140000000;
    uVar14 = _UNK_1529129d8;
    uVar13 = ___xmm_0000000000000000bf847ae140000000;
    uVar12 = _UNK_1508ffb28;
    uVar11 = ___xmm_bff00000000000000000000000000000;
    uVar8 = CONCAT44(uStack_50c,FColor::White.field0_0x0);
    local_498._8_4_ = uVar31;
    local_498._0_8_ = dVar6;
    local_498._12_4_ = uVar32;
    local_458 = CONCAT44(uStack_50c,FColor::White.field0_0x0);
    local_510 = FColor::White.field0_0x0;
    uVar9 = CONCAT44(uStack_50c,FColor::White.field0_0x0);
    local_478 = 0;
    uStack_470 = 0;
    local_488 = ___xmm_3ff0000000000000bf847ae140000000;
    uStack_480 = _UNK_1529129f8;
    local_468 = ___xmm_bff00000000000000000000000000000;
    uStack_460 = _UNK_1508ffb28;
    local_4e0._8_4_ = uVar28;
    local_4e0._0_8_ = dVar6;
    local_4e0._12_4_ = uVar29;
    local_4d0 = ___xmm_0000000000000000bf847ae140000000;
    uStack_4c8 = _UNK_1529129d8;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = ___xmm_bff00000000000000000000000000000;
    uStack_4a8 = _UNK_1508ffb28;
    local_598._4_4_ = _UNK_150689514;
    local_598._0_4_ = ___xmm_00000000000000003ff0000000000000;
    uStack_590._4_4_ = _UNK_15068951c;
    uStack_590._0_4_ = _UNK_150689518;
    local_508._0_8_ = ___xmm_bff00000000000000000000000000000;
    local_508._8_8_ = _UNK_1508ffb28;
    local_450._8_4_ = uVar31;
    local_450._0_8_ = dVar7;
    local_450._12_4_ = uVar32;
    local_440 = ___xmm_3ff0000000000000bf847ae140000000;
    uStack_438 = _UNK_1529129f8;
    local_430 = ___xmm_00000000000000003ff0000000000000;
    fStack_42c = _UNK_150689514;
    fStack_428 = _UNK_150689518;
    fStack_424 = _UNK_15068951c;
    local_420 = ___xmm_bff00000000000000000000000000000;
    uStack_418 = _UNK_1508ffb28;
    local_398 = ___xmm_00000000000000003ff0000000000000;
    fStack_394 = _UNK_150689514;
    fStack_390 = _UNK_150689518;
    fStack_38c = _UNK_15068951c;
    local_4e8 = TVar5;
    local_4a0 = uVar8;
    local_410 = uVar9;
    local_408 = TVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      local_398 = (float)(undefined4)local_598;
      fStack_394 = (float)local_598._4_4_;
      fStack_390 = (float)(undefined4)uStack_590;
      fStack_38c = (float)uStack_590._4_4_;
    }
    local_370._8_4_ = uVar28;
    local_370._0_8_ = dVar7;
    local_370._12_4_ = uVar29;
    local_330 = CONCAT44(uStack_50c,FColor::White.field0_0x0);
    local_400._8_4_ = uVar28;
    local_400._0_8_ = dVar6;
    local_400._12_4_ = uVar29;
    local_3f0 = uVar13;
    uStack_3e8 = uVar14;
    local_3e0 = 0;
    uStack_3d8 = 0;
    local_3d0 = uVar11;
    uStack_3c8 = uVar12;
    local_3b8._8_4_ = uVar31;
    local_3b8._0_8_ = dVar7;
    local_3b8._12_4_ = uVar32;
    local_3a8 = uVar15;
    uStack_3a0 = uVar16;
    local_388 = uVar11;
    uStack_380 = uVar12;
    local_360 = uVar13;
    uStack_358 = uVar14;
    local_340 = uVar11;
    uStack_338 = uVar12;
    local_510 = FColor::White.field0_0x0;
    local_3c0 = uVar8;
    local_378 = uVar9;
    local_350 = ___xmm_00000000000000003ff0000000000000;
    fStack_34c = _UNK_150689514;
    fStack_348 = _UNK_150689518;
    fStack_344 = _UNK_15068951c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
    UTriangleSetComponent::AddTriangleInternal(this_01,(FRenderableTriangle *)&local_4e8.ObjectPtr);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
    UTriangleSetComponent::AddTriangleInternal(this_01,(FRenderableTriangle *)&local_408.ObjectPtr);
  }
  this_02 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pFVar19 = (FDynamicMesh3 *)
            (**(code **)(((this_02->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))
                      ();
  UE::Geometry::FDynamicMesh3::operator=(pFVar19,&local_328);
  if (this_02->bBuildSpatialDataStructure != false) {
    pFVar19 = (FDynamicMesh3 *)
              (**(code **)(((this_02->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38)
              )();
    (this_02->MeshAABBTree).MeshChangeStamp = 0;
    (this_02->MeshAABBTree).Mesh = pFVar19;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this_02->MeshAABBTree,false);
    uVar20 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this_02->MeshAABBTree).Mesh);
    (this_02->MeshAABBTree).MeshChangeStamp = uVar20;
  }
  (**(code **)(((this_02->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this_02->bDecompositionEnabled != false) {
    UPreviewMesh::UpdateRenderMeshDecomposition(this_02);
  }
  UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(this_02);
  UMeshElementsVisualizer::NotifyMeshChanged((this->MeshElementsVisualizer).field0_0x0.DebugPtr);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_328);
  return;
}

