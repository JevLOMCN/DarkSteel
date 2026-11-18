// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14ca40350

UClass * __cdecl UMeshElementsVisualizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshElementsVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshElementsVisualizer",
               &Z_Registration_Info_UClass_UMeshElementsVisualizer.InnerSingleton,
               StaticRegisterNativesUMeshElementsVisualizer,0x148,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshElementsVisualizer>,
               InternalVTableHelperCtorCaller<UMeshElementsVisualizer>,local_res8,
               UPreviewGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshElementsVisualizer.InnerSingleton;
}

// UMeshElementsVisualizer @ 14ca67df0

UMeshElementsVisualizer * __thiscall
UMeshElementsVisualizer::UMeshElementsVisualizer
          (UMeshElementsVisualizer *this,FVTableHelper *param_1)

{
  UPreviewGeometry::UPreviewGeometry((UPreviewGeometry *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshElementsVisualizer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UMeshElementsVisualizerProperties *)0x0;
  (this->WireframeComponent).field0_0x0.DebugPtr = (UMeshWireframeComponent *)0x0;
  this->bSettingsModified = false;
  (this->WireframeSourceProvider).Object = (IMeshWireframeSourceProvider *)0x0;
  (this->WireframeSourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMeshElementsVisualizer @ 14ca67e40

UMeshElementsVisualizer * __thiscall
UMeshElementsVisualizer::UMeshElementsVisualizer
          (UMeshElementsVisualizer *this,FObjectInitializer *param_1)

{
  UPreviewGeometry::UPreviewGeometry((UPreviewGeometry *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshElementsVisualizer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UMeshElementsVisualizerProperties *)0x0;
  (this->WireframeComponent).field0_0x0.DebugPtr = (UMeshWireframeComponent *)0x0;
  this->bSettingsModified = false;
  (this->WireframeSourceProvider).Object = (IMeshWireframeSourceProvider *)0x0;
  (this->WireframeSourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMeshElementsVisualizer @ 14ca6b710

void __thiscall UMeshElementsVisualizer::~UMeshElementsVisualizer(UMeshElementsVisualizer *this)

{
  this->_padding_ = (longlong)&___7UMeshElementsVisualizer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WireframeSourceProvider).SharedReferenceCount.ReferenceController);
  UPreviewGeometry::~UPreviewGeometry((UPreviewGeometry *)this);
  return;
}

// GetPrivateStaticClass @ 14ca91670

UClass * __cdecl UMeshElementsVisualizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshElementsVisualizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshElementsVisualizer",
               &Z_Registration_Info_UClass_UMeshElementsVisualizer.InnerSingleton,
               StaticRegisterNativesUMeshElementsVisualizer,0x148,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshElementsVisualizer>,
               InternalVTableHelperCtorCaller<UMeshElementsVisualizer>,local_res8,
               UPreviewGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshElementsVisualizer.InnerSingleton;
}

// NotifyMeshChanged @ 14ca99670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshElementsVisualizer::NotifyMeshChanged(UMeshElementsVisualizer *this)

{
  TObjectPtr<UMeshWireframeComponent>_u_0 this_00;
  IMeshWireframeSourceProvider *pIVar1;
  TObjectPtr<UMeshWireframeComponent>_u_0 local_res8 [4];
  code *local_18;
  TObjectPtr<UMeshWireframeComponent>_u_0 *local_10;
  
  this_00 = (TObjectPtr<UMeshWireframeComponent>_u_0)(this->WireframeComponent).field0_0x0.DebugPtr;
  pIVar1 = ((this_00.DebugPtr)->SourceProvider).Object;
  if (pIVar1 != (IMeshWireframeSourceProvider *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_res8[0] = this_00;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00.DebugPtr);
  return;
}

// OnCreated @ 14ca9a6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshElementsVisualizer::OnCreated(UMeshElementsVisualizer *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshElementsVisualizerProperties *pUVar3;
  UMeshWireframeComponent *pUVar4;
  UMaterialInterface *pUVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  code *local_e8 [2];
  undefined **local_d8;
  UMeshElementsVisualizer *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UMeshElementsVisualizerProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = this;
  pUVar3 = (UMeshElementsVisualizerProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMeshElementsVisualizerProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar3;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_1>,void,bool_const_&>
                ::Call;
  local_c0 = 0;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bVisible,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_2>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bShowWireframe,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_3>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bShowBorders,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_4>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bShowUVSeams,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_5>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_5>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bShowNormalSeams,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_6>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_6>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bShowTangentSeams,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_7>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_7>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bShowColorSeams,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_c0 = 0;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_8>,0,0>::
              _vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_8>,void,float_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->ThicknessScale,
             (TFunction<void___cdecl(float_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_9>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_9>,void,float_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->DepthBias,
             (TFunction<void___cdecl(float_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_10>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_10>,void,bool_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->bAdjustDepthBiasUsingMeshSize,
             (TFunction<void___cdecl(bool_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_11>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_11>,void,FColor_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->WireframeColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_12>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_12>,void,FColor_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->BoundaryEdgeColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_13>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_13>,void,FColor_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->UVSeamColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_14>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_14>,void,FColor_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->NormalSeamColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_15>,0,0>::
              _vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_15>,void,FColor_const_&>
                ::Call;
  local_c0 = 0;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->TangentSeamColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_e8);
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshElementsVisualizer::OnCreated'::`2'::<lambda_16>,0,0>::
              _vftable_;
  local_c0 = 0;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshElementsVisualizer::OnCreated'::__l2::<lambda_16>,void,FColor_const_&>
                ::Call;
  local_d0 = this;
  FWatchablePropertySet::WatchProperty<FColor>
            ((FWatchablePropertySet *)&pUVar3->_padding_,&pUVar3->ColorSeamColor,
             (TFunction<void___cdecl(FColor_const_&)> *)local_e8);
  pUVar1 = (UObject *)this->_padding_;
  this->bSettingsModified = false;
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UMeshWireframeComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = pUVar1;
  pUVar4 = (UMeshWireframeComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMeshWireframeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->WireframeComponent).field0_0x0.DebugPtr = pUVar4;
  pUVar5 = ToolSetupUtil::GetDefaultLineComponentMaterial((UInteractiveToolManager *)0x0,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar4->LineMaterial).field0_0x0.DebugPtr = pUVar5;
  (**(code **)(*(longlong *)pUVar4 + 0x6b8))(pUVar4,0,pUVar5);
  local_b8 = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->WireframeComponent).field0_0x0.DebugPtr,
             *(USceneComponent **)(this->_padding_ + 0x1b8),(FName)0x0);
  UActorComponent::RegisterComponent
            ((UActorComponent *)(this->WireframeComponent).field0_0x0.DebugPtr);
  return;
}

// OnTick @ 14ca9c570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshElementsVisualizer::OnTick(UMeshElementsVisualizer *this,float param_1)

{
  UMeshWireframeComponent *this_00;
  TObjectPtr<UMeshWireframeComponent>_u_0 this_01;
  IMeshWireframeSourceProvider *pIVar1;
  TObjectPtr<UMeshWireframeComponent>_u_0 local_res8;
  code *local_18;
  TObjectPtr<UMeshWireframeComponent>_u_0 *local_10;
  
  if (this->bSettingsModified != false) {
    this_00 = (this->WireframeComponent).field0_0x0.DebugPtr;
    if (((this->Settings).field0_0x0.DebugPtr)->bVisible == false) {
      USceneComponent::SetVisibility((USceneComponent *)this_00,false,DirtyOnly);
      this->bSettingsModified = false;
      return;
    }
    USceneComponent::SetVisibility((USceneComponent *)this_00,true,DirtyOnly);
    ((this->WireframeComponent).field0_0x0.DebugPtr)->LineDepthBias =
         ((this->Settings).field0_0x0.DebugPtr)->DepthBias;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->ThicknessScale =
         ((this->Settings).field0_0x0.DebugPtr)->ThicknessScale;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableWireframe =
         ((this->Settings).field0_0x0.DebugPtr)->bShowWireframe;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableBoundaryEdges =
         ((this->Settings).field0_0x0.DebugPtr)->bShowBorders;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableUVSeams =
         ((this->Settings).field0_0x0.DebugPtr)->bShowUVSeams;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableNormalSeams =
         ((this->Settings).field0_0x0.DebugPtr)->bShowNormalSeams;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableTangentSeams =
         ((this->Settings).field0_0x0.DebugPtr)->bShowTangentSeams;
    ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableColorSeams =
         ((this->Settings).field0_0x0.DebugPtr)->bShowColorSeams;
    (((this->WireframeComponent).field0_0x0.DebugPtr)->WireframeColor).field0_0x0 =
         (((this->Settings).field0_0x0.DebugPtr)->WireframeColor).field0_0x0;
    (((this->WireframeComponent).field0_0x0.DebugPtr)->BoundaryEdgeColor).field0_0x0 =
         (((this->Settings).field0_0x0.DebugPtr)->BoundaryEdgeColor).field0_0x0;
    (((this->WireframeComponent).field0_0x0.DebugPtr)->UVSeamColor).field0_0x0 =
         (((this->Settings).field0_0x0.DebugPtr)->UVSeamColor).field0_0x0;
    (((this->WireframeComponent).field0_0x0.DebugPtr)->NormalSeamColor).field0_0x0 =
         (((this->Settings).field0_0x0.DebugPtr)->NormalSeamColor).field0_0x0;
    (((this->WireframeComponent).field0_0x0.DebugPtr)->TangentSeamColor).field0_0x0 =
         (((this->Settings).field0_0x0.DebugPtr)->TangentSeamColor).field0_0x0;
    (((this->WireframeComponent).field0_0x0.DebugPtr)->ColorSeamColor).field0_0x0 =
         (((this->Settings).field0_0x0.DebugPtr)->ColorSeamColor).field0_0x0;
    this_01 = (TObjectPtr<UMeshWireframeComponent>_u_0)
              (this->WireframeComponent).field0_0x0.DebugPtr;
    pIVar1 = ((this_01.DebugPtr)->SourceProvider).Object;
    if (pIVar1 != (IMeshWireframeSourceProvider *)0x0) {
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
                 ::Call;
      local_res8 = this_01;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01.DebugPtr);
    this->bSettingsModified = false;
  }
  return;
}

// SetMeshAccessFunction @ 14caa3d70

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
UMeshElementsVisualizer::SetMeshAccessFunction
          (UMeshElementsVisualizer *this,
          TUniqueFunction<void___cdecl(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>)>
          *param_1)

{
  TSharedPtr<IMeshWireframeSourceProvider,1> *pTVar1;
  TObjectPtr<UMeshWireframeComponent>_u_0 this_00;
  IMeshWireframeSourceProvider *pIVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  atomic<int> aVar9;
  atomic<int> aVar10;
  atomic<int> aVar11;
  atomic<int> aVar12;
  atomic<int> aVar13;
  atomic<int> aVar14;
  bool bVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TObjectPtr<UMeshWireframeComponent>_u_0 local_res8;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  code *local_38;
  TObjectPtr<UMeshWireframeComponent>_u_0 *local_30;
  IMeshWireframeSourceProvider *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  FStack_40.ReferenceController = ::operator_new(0x50);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if (FStack_40.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_40.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17 = FStack_40.ReferenceController + 1;
    (FStack_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_40.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMeshWireframeSourceProvider___00_SharedPointerInternals__6B_
    ;
    FStack_40.ReferenceController[1]._padding_ =
         (longlong)&___7FDynamicMeshWireframeSourceProvider__6B_;
    FStack_40.ReferenceController[2]._padding_ = 0;
    FStack_40.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    FStack_40.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    uVar7 = *(undefined4 *)&param_1->field_0x8;
    uVar8 = *(undefined4 *)&param_1->field_0xc;
    lVar4 = FStack_40.ReferenceController[2]._padding_;
    aVar9 = FStack_40.ReferenceController[2].SharedReferenceCount;
    aVar10 = FStack_40.ReferenceController[2].WeakReferenceCount;
    lVar5 = FStack_40.ReferenceController[3]._padding_;
    aVar11 = FStack_40.ReferenceController[3].SharedReferenceCount;
    aVar12 = FStack_40.ReferenceController[3].WeakReferenceCount;
    lVar6 = FStack_40.ReferenceController[4]._padding_;
    aVar13 = FStack_40.ReferenceController[4].SharedReferenceCount;
    aVar14 = FStack_40.ReferenceController[4].WeakReferenceCount;
    FStack_40.ReferenceController[2]._padding_ = *(longlong *)param_1;
    FStack_40.ReferenceController[2].SharedReferenceCount = (atomic<int>)uVar7;
    FStack_40.ReferenceController[2].WeakReferenceCount = (atomic<int>)uVar8;
    uVar7 = *(undefined4 *)&param_1->field_0x18;
    uVar8 = *(undefined4 *)&param_1->field_0x1c;
    FStack_40.ReferenceController[3]._padding_ = *(longlong *)&param_1->field_0x10;
    FStack_40.ReferenceController[3].SharedReferenceCount = (atomic<int>)uVar7;
    FStack_40.ReferenceController[3].WeakReferenceCount = (atomic<int>)uVar8;
    uVar7 = *(undefined4 *)&param_1->field_0x28;
    uVar8 = *(undefined4 *)&param_1->field_0x2c;
    FStack_40.ReferenceController[4]._padding_ = *(longlong *)&param_1->field_0x20;
    FStack_40.ReferenceController[4].SharedReferenceCount = (atomic<int>)uVar7;
    FStack_40.ReferenceController[4].WeakReferenceCount = (atomic<int>)uVar8;
    *(longlong *)param_1 = lVar4;
    *(atomic<int> *)&param_1->field_0x8 = aVar9;
    *(atomic<int> *)&param_1->field_0xc = aVar10;
    *(longlong *)&param_1->field_0x10 = lVar5;
    *(atomic<int> *)&param_1->field_0x18 = aVar11;
    *(atomic<int> *)&param_1->field_0x1c = aVar12;
    *(longlong *)&param_1->field_0x20 = lVar6;
    *(atomic<int> *)&param_1->field_0x28 = aVar13;
    *(atomic<int> *)&param_1->field_0x2c = aVar14;
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar16 = FStack_40.ReferenceController;
    local_48 = pTVar17;
  }
  pTVar1 = &this->WireframeSourceProvider;
  if (pTVar1 != (TSharedPtr<IMeshWireframeSourceProvider,1> *)&local_48) {
    pTVar1->Object = (IMeshWireframeSourceProvider *)pTVar17;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WireframeSourceProvider).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  UpdateLineDepthBiasScale(this);
  this_00 = (TObjectPtr<UMeshWireframeComponent>_u_0)(this->WireframeComponent).field0_0x0.DebugPtr;
  pTVar16 = (this->WireframeSourceProvider).SharedReferenceCount.ReferenceController;
  pIVar2 = pTVar1->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = ((this_00.DebugPtr)->SourceProvider).Object;
  pTStack_20 = ((this_00.DebugPtr)->SourceProvider).SharedReferenceCount.ReferenceController;
  ((this_00.DebugPtr)->SourceProvider).Object = pIVar2;
  ((this_00.DebugPtr)->SourceProvider).SharedReferenceCount.ReferenceController = pTVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  pIVar2 = ((this_00.DebugPtr)->SourceProvider).Object;
  if (pIVar2 != (IMeshWireframeSourceProvider *)0x0) {
    local_30 = &local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_res8 = this_00;
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_38);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00.DebugPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// StaticRegisterNativesUMeshElementsVisualizer @ 14caa71a0

void __cdecl UMeshElementsVisualizer::StaticRegisterNativesUMeshElementsVisualizer(void)

{
  return;
}

// UpdateLineDepthBiasScale @ 14caa87d0

void __thiscall UMeshElementsVisualizer::UpdateLineDepthBiasScale(UMeshElementsVisualizer *this)

{
  IMeshWireframeSourceProvider *pIVar1;
  UMeshElementsVisualizer *local_res8 [4];
  code *local_18;
  UMeshElementsVisualizer **local_10;
  
  if ((((this->Settings).field0_0x0.DebugPtr)->bAdjustDepthBiasUsingMeshSize != false) &&
     (pIVar1 = (this->WireframeSourceProvider).Object, pIVar1 != (IMeshWireframeSourceProvider *)0x0
     )) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshElementsVisualizer::UpdateLineDepthBiasScale'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_res8[0] = this;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
    return;
  }
  ((this->WireframeComponent).field0_0x0.DebugPtr)->LineDepthBiasSizeScale = 1.0;
  return;
}

// UpdateVisibility @ 14caa8e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshElementsVisualizer::UpdateVisibility(UMeshElementsVisualizer *this)

{
  UMeshWireframeComponent *this_00;
  TObjectPtr<UMeshWireframeComponent>_u_0 this_01;
  IMeshWireframeSourceProvider *pIVar1;
  TObjectPtr<UMeshWireframeComponent>_u_0 local_res8 [4];
  code *local_18;
  TObjectPtr<UMeshWireframeComponent>_u_0 *local_10;
  
  this_00 = (this->WireframeComponent).field0_0x0.DebugPtr;
  if (((this->Settings).field0_0x0.DebugPtr)->bVisible == false) {
    USceneComponent::SetVisibility((USceneComponent *)this_00,false,DirtyOnly);
    return;
  }
  USceneComponent::SetVisibility((USceneComponent *)this_00,true,DirtyOnly);
  ((this->WireframeComponent).field0_0x0.DebugPtr)->LineDepthBias =
       ((this->Settings).field0_0x0.DebugPtr)->DepthBias;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->ThicknessScale =
       ((this->Settings).field0_0x0.DebugPtr)->ThicknessScale;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableWireframe =
       ((this->Settings).field0_0x0.DebugPtr)->bShowWireframe;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableBoundaryEdges =
       ((this->Settings).field0_0x0.DebugPtr)->bShowBorders;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableUVSeams =
       ((this->Settings).field0_0x0.DebugPtr)->bShowUVSeams;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableNormalSeams =
       ((this->Settings).field0_0x0.DebugPtr)->bShowNormalSeams;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableTangentSeams =
       ((this->Settings).field0_0x0.DebugPtr)->bShowTangentSeams;
  ((this->WireframeComponent).field0_0x0.DebugPtr)->bEnableColorSeams =
       ((this->Settings).field0_0x0.DebugPtr)->bShowColorSeams;
  (((this->WireframeComponent).field0_0x0.DebugPtr)->WireframeColor).field0_0x0 =
       (((this->Settings).field0_0x0.DebugPtr)->WireframeColor).field0_0x0;
  (((this->WireframeComponent).field0_0x0.DebugPtr)->BoundaryEdgeColor).field0_0x0 =
       (((this->Settings).field0_0x0.DebugPtr)->BoundaryEdgeColor).field0_0x0;
  (((this->WireframeComponent).field0_0x0.DebugPtr)->UVSeamColor).field0_0x0 =
       (((this->Settings).field0_0x0.DebugPtr)->UVSeamColor).field0_0x0;
  (((this->WireframeComponent).field0_0x0.DebugPtr)->NormalSeamColor).field0_0x0 =
       (((this->Settings).field0_0x0.DebugPtr)->NormalSeamColor).field0_0x0;
  (((this->WireframeComponent).field0_0x0.DebugPtr)->TangentSeamColor).field0_0x0 =
       (((this->Settings).field0_0x0.DebugPtr)->TangentSeamColor).field0_0x0;
  (((this->WireframeComponent).field0_0x0.DebugPtr)->ColorSeamColor).field0_0x0 =
       (((this->Settings).field0_0x0.DebugPtr)->ColorSeamColor).field0_0x0;
  this_01 = (TObjectPtr<UMeshWireframeComponent>_u_0)(this->WireframeComponent).field0_0x0.DebugPtr;
  pIVar1 = ((this_01.DebugPtr)->SourceProvider).Object;
  if (pIVar1 != (IMeshWireframeSourceProvider *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_res8[0] = this_01;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01.DebugPtr);
  return;
}

