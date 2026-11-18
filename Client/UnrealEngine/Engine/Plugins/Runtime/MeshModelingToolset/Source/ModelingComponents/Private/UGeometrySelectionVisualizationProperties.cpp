// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 15

// StaticClass @ 14caabe60

UClass * __cdecl UGeometrySelectionVisualizationProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionVisualizationProperties",
               &Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionVisualizationProperties,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometrySelectionVisualizationProperties>,
               InternalVTableHelperCtorCaller<UGeometrySelectionVisualizationProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.InnerSingleton;
}

// UGeometrySelectionVisualizationProperties @ 14cacd570

UGeometrySelectionVisualizationProperties * __thiscall
UGeometrySelectionVisualizationProperties::UGeometrySelectionVisualizationProperties
          (UGeometrySelectionVisualizationProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableShowTriangleROIBorder = false;
  this->bEnableShowEdgeSelectionVertices = false;
  this->_padding_ = (longlong)&___7UGeometrySelectionVisualizationProperties__6B_;
  this->bShowSelection = false;
  this->bShowTriangleROIBorder = true;
  this->bShowHidden = false;
  this->bShowEdgeSelectionVertices = false;
  this->LineThickness = 3.0;
  this->PointSize = 5.0;
  this->DepthBias = 0.2;
  (this->FaceColor).field0_0x0._s_0 = (FColor_u_0_s_0)DefaultFaceColor.field0_0x0;
  (this->LineColor).field0_0x0._s_0 = (FColor_u_0_s_0)DefaultLineColor.field0_0x0;
  (this->PointColor).field0_0x0._s_0 = (FColor_u_0_s_0)DefaultPointColor.field0_0x0;
  (this->TriangleROIBorderColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)DefaultTriangleROIBorderColor.field0_0x0;
  (this->TriangleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LineMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PointMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TriangleMaterialShowingHidden).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LineMaterialShowingHidden).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PointMaterialShowingHidden).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->bVisualizationDirty = false;
  return this;
}

// UGeometrySelectionVisualizationProperties @ 14cacd630

UGeometrySelectionVisualizationProperties * __thiscall
UGeometrySelectionVisualizationProperties::UGeometrySelectionVisualizationProperties
          (UGeometrySelectionVisualizationProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bEnableShowTriangleROIBorder = false;
  this->bEnableShowEdgeSelectionVertices = false;
  this->_padding_ = (longlong)&___7UGeometrySelectionVisualizationProperties__6B_;
  this->bShowSelection = false;
  this->bShowTriangleROIBorder = true;
  this->bShowHidden = false;
  this->bShowEdgeSelectionVertices = false;
  this->LineThickness = 3.0;
  this->PointSize = 5.0;
  this->DepthBias = 0.2;
  (this->FaceColor).field0_0x0._s_0 = (FColor_u_0_s_0)DefaultFaceColor.field0_0x0;
  (this->LineColor).field0_0x0._s_0 = (FColor_u_0_s_0)DefaultLineColor.field0_0x0;
  (this->PointColor).field0_0x0._s_0 = (FColor_u_0_s_0)DefaultPointColor.field0_0x0;
  (this->TriangleROIBorderColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)DefaultTriangleROIBorderColor.field0_0x0;
  (this->TriangleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LineMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PointMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->TriangleMaterialShowingHidden).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LineMaterialShowingHidden).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PointMaterialShowingHidden).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->bVisualizationDirty = false;
  return this;
}

// ~UGeometrySelectionVisualizationProperties @ 14cad22a0

void __thiscall
UGeometrySelectionVisualizationProperties::~UGeometrySelectionVisualizationProperties
          (UGeometrySelectionVisualizationProperties *this)

{
  this->_padding_ = (longlong)&___7UGeometrySelectionVisualizationProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFaceMaterial @ 14cb10040

UMaterialInterface * __thiscall
UGeometrySelectionVisualizationProperties::GetFaceMaterial
          (UGeometrySelectionVisualizationProperties *this)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  longlong lVar4;
  
  if ((this->TriangleMaterial).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7992839120294510530>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\GeometrySelectionVisualizationProperties.cpp"
                       ,0x3e,"TriangleMaterial");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterialInterface *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((this->TriangleMaterialShowingHidden).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7992839120294510529>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\GeometrySelectionVisualizationProperties.cpp"
                       ,0x3f,"TriangleMaterialShowingHidden");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterialInterface *)(*pcVar1)();
      return pUVar3;
    }
  }
  lVar4 = 0xf0;
  if (this->bShowHidden == false) {
    lVar4 = 0xd8;
  }
  return *(UMaterialInterface **)((longlong)&this->_padding_ + lVar4);
}

// GetLineMaterial @ 14cb108a0

UMaterialInterface * __thiscall
UGeometrySelectionVisualizationProperties::GetLineMaterial
          (UGeometrySelectionVisualizationProperties *this)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  longlong lVar4;
  
  if ((this->LineMaterial).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7992839120294510537>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\GeometrySelectionVisualizationProperties.cpp"
                       ,0x37,"LineMaterial");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterialInterface *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((this->LineMaterialShowingHidden).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7992839120294510536>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\GeometrySelectionVisualizationProperties.cpp"
                       ,0x38,"LineMaterialShowingHidden");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterialInterface *)(*pcVar1)();
      return pUVar3;
    }
  }
  lVar4 = 0xf8;
  if (this->bShowHidden == false) {
    lVar4 = 0xe0;
  }
  return *(UMaterialInterface **)((longlong)&this->_padding_ + lVar4);
}

// GetPointMaterial @ 14cb11c30

UMaterialInterface * __thiscall
UGeometrySelectionVisualizationProperties::GetPointMaterial
          (UGeometrySelectionVisualizationProperties *this)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  longlong lVar4;
  
  if ((this->PointMaterial).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7992839120294510544>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\GeometrySelectionVisualizationProperties.cpp"
                       ,0x30,"PointMaterial");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterialInterface *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((this->PointMaterialShowingHidden).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7992839120294510543>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\GeometrySelectionVisualizationProperties.cpp"
                       ,0x31,"PointMaterialShowingHidden");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterialInterface *)(*pcVar1)();
      return pUVar3;
    }
  }
  lVar4 = 0x100;
  if (this->bShowHidden == false) {
    lVar4 = 0xe8;
  }
  return *(UMaterialInterface **)((longlong)&this->_padding_ + lVar4);
}

// GetPrivateStaticClass @ 14cb123c0

UClass * __cdecl UGeometrySelectionVisualizationProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionVisualizationProperties",
               &Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionVisualizationProperties,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometrySelectionVisualizationProperties>,
               InternalVTableHelperCtorCaller<UGeometrySelectionVisualizationProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.InnerSingleton;
}

// Initialize @ 14cb1cb90

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
UGeometrySelectionVisualizationProperties::Initialize
          (UGeometrySelectionVisualizationProperties *this,UInteractiveTool *param_1)

{
  UInteractiveToolManager *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  longlong *plVar4;
  FLinearColor_u_0 local_58;
  code *local_48 [2];
  undefined **local_38;
  UGeometrySelectionVisualizationProperties *local_30;
  undefined8 local_20;
  
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_1>,void,bool_const_&>
                ::Call;
  local_20 = 0;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&this->_padding_,&this->bShowSelection,
             (TFunction<void___cdecl(bool_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_2>,void,bool_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&this->_padding_,&this->bShowTriangleROIBorder,
             (TFunction<void___cdecl(bool_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_3>,void,bool_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&this->_padding_,&this->bShowHidden,
             (TFunction<void___cdecl(bool_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_4>,void,bool_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&this->_padding_,&this->bShowEdgeSelectionVertices,
             (TFunction<void___cdecl(bool_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_5>,void,float_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&this->_padding_,&this->LineThickness,
             (TFunction<void___cdecl(float_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_6>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_6>,void,float_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&this->_padding_,&this->PointSize,
             (TFunction<void___cdecl(float_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_7>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_7>,void,float_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&this->_padding_,&this->DepthBias,
             (TFunction<void___cdecl(float_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_8>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_8>,void,FColor_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&this->_padding_,&this->FaceColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_9>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_9>,void,FColor_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&this->_padding_,&this->LineColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_10>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_10>,void,FColor_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&this->_padding_,&this->PointColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_48);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGeometrySelectionVisualizationProperties::Initialize'::`2'::<lambda_11>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometrySelectionVisualizationProperties::Initialize'::__l2::<lambda_11>,void,FColor_const_&>
                ::Call;
  local_30 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&this->_padding_,&this->TriangleROIBorderColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_48);
  pUVar1 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar2 = ToolSetupUtil::GetDefaultPointComponentMaterial(pUVar1,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PointMaterial).field0_0x0.DebugPtr = pUVar2;
  pUVar1 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar2 = ToolSetupUtil::GetDefaultPointComponentMaterial(pUVar1,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PointMaterialShowingHidden).field0_0x0.DebugPtr = pUVar2;
  pUVar1 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar2 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar1,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->LineMaterial).field0_0x0.DebugPtr = pUVar2;
  pUVar1 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar2 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar1,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->LineMaterialShowingHidden).field0_0x0.DebugPtr = pUVar2;
  local_58._s_0.R = FLinearColor::sRGBToLinearTable[(this->FaceColor).field0_0x0._s_0.R];
  local_58._s_0.G = FLinearColor::sRGBToLinearTable[(this->FaceColor).field0_0x0._s_0.G];
  local_58._s_0.B = FLinearColor::sRGBToLinearTable[(this->FaceColor).field0_0x0._s_0.B];
  local_58._s_0.A = (float)(this->FaceColor).field0_0x0._s_0.A * __real_3b808081;
  pUVar1 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar3 = ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
                     (pUVar1,(FLinearColor *)&local_58._s_0,__real_3d4ccccd,__real_3e99999a);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->TriangleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar3;
  plVar4 = (longlong *)
           (**(code **)(((GEngine->ConstraintLimitMaterialX).field0_0x0.DebugPtr)->_padding_ + 0x310
                       ))();
  pUVar2 = (UMaterialInterface *)(**(code **)(*plVar4 + 0x40))(plVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->TriangleMaterialShowingHidden).field0_0x0.DebugPtr = pUVar2;
  return;
}

// ShowEdgeSelectionLineSet @ 14cb3bb10

bool __thiscall
UGeometrySelectionVisualizationProperties::ShowEdgeSelectionLineSet
          (UGeometrySelectionVisualizationProperties *this)

{
  if ((this->bShowSelection != false) && (this->SelectionElementType == Edge)) {
    if (this->bEnableShowEdgeSelectionVertices != false) {
      return this->bShowEdgeSelectionVertices == false;
    }
    return true;
  }
  return false;
}

// ShowEdgeSelectionVerticesPointSet @ 14cb3bb50

bool __thiscall
UGeometrySelectionVisualizationProperties::ShowEdgeSelectionVerticesPointSet
          (UGeometrySelectionVisualizationProperties *this)

{
  if ((this->bShowSelection != false) && (this->SelectionElementType == Edge)) {
    if (this->bEnableShowEdgeSelectionVertices != false) {
      return this->bShowEdgeSelectionVertices;
    }
    return true;
  }
  return false;
}

// ShowFaceSelectionTriangleSet @ 14cb3bb80

bool __thiscall
UGeometrySelectionVisualizationProperties::ShowFaceSelectionTriangleSet
          (UGeometrySelectionVisualizationProperties *this)

{
  if (this->bShowSelection != false) {
    return this->SelectionElementType == Face;
  }
  return false;
}

// ShowTriangleROIBorderLineSet @ 14cb3bc20

bool __thiscall
UGeometrySelectionVisualizationProperties::ShowTriangleROIBorderLineSet
          (UGeometrySelectionVisualizationProperties *this)

{
  if (this->bEnableShowTriangleROIBorder == false) {
    return false;
  }
  return this->bShowTriangleROIBorder;
}

// ShowVertexSelectionPointSet @ 14cb3bc40

bool __thiscall
UGeometrySelectionVisualizationProperties::ShowVertexSelectionPointSet
          (UGeometrySelectionVisualizationProperties *this)

{
  if (this->bShowSelection != false) {
    return this->SelectionElementType == Vertex;
  }
  return false;
}

// StaticRegisterNativesUGeometrySelectionVisualizationProperties @ 14cb3eb00

void __cdecl
UGeometrySelectionVisualizationProperties::
StaticRegisterNativesUGeometrySelectionVisualizationProperties(void)

{
  return;
}

