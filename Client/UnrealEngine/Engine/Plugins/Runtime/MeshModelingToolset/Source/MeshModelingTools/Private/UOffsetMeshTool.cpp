// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 14

// StaticClass @ 14cc96170

UClass * __cdecl UOffsetMeshTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"OffsetMeshTool",
               &Z_Registration_Info_UClass_UOffsetMeshTool.InnerSingleton,
               StaticRegisterNativesUOffsetMeshTool,0x4c0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UOffsetMeshTool>,
               InternalVTableHelperCtorCaller<UOffsetMeshTool>,local_res8,
               UBaseMeshProcessingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetMeshTool.InnerSingleton;
}

// UOffsetMeshTool @ 14ccbefe0

UOffsetMeshTool * __thiscall
UOffsetMeshTool::UOffsetMeshTool(UOffsetMeshTool *this,FVTableHelper *param_1)

{
  UBaseMeshProcessingTool::UBaseMeshProcessingTool((UBaseMeshProcessingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OffsetProperties).field0_0x0.DebugPtr = (UOffsetMeshToolProperties *)0x0;
  (this->IterativeProperties).field0_0x0.DebugPtr = (UIterativeOffsetProperties *)0x0;
  (this->ImplicitProperties).field0_0x0.DebugPtr = (UImplicitOffsetProperties *)0x0;
  (this->WeightMapProperties).field0_0x0.DebugPtr = (UOffsetWeightMapSetProperties *)0x0;
  return this;
}

// UOffsetMeshTool @ 14ccbf050

UOffsetMeshTool * __thiscall UOffsetMeshTool::UOffsetMeshTool(UOffsetMeshTool *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FText local_18;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  this->_padding_ = (longlong)&UBaseMeshProcessingTool::_vftable__for__UObject__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UBaseMeshProcessingTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ =
       (longlong)&UBaseMeshProcessingTool::_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ =
       (longlong)
       &UBaseMeshProcessingTool::_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this->_padding_ = (longlong)(double)fVar3;
  this->_padding_ = (longlong)(double)fVar4;
  this->_padding_ = (longlong)(double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  this->_padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this->_padding_ = (longlong)(double)fVar3;
  this->_padding_ = (longlong)(double)fVar4;
  this->_padding_ = (longlong)(double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this->_padding_ = (longlong)(double)fVar3;
  this->_padding_ = (longlong)(double)fVar4;
  this->_padding_ = (longlong)(double)fVar5;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OffsetProperties).field0_0x0.DebugPtr = (UOffsetMeshToolProperties *)0x0;
  (this->IterativeProperties).field0_0x0.DebugPtr = (UIterativeOffsetProperties *)0x0;
  (this->ImplicitProperties).field0_0x0.DebugPtr = (UImplicitOffsetProperties *)0x0;
  (this->WeightMapProperties).field0_0x0.DebugPtr = (UOffsetWeightMapSetProperties *)0x0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_18,L"UOffsetMeshTool",L"ToolName",L"Offset")
  ;
  pIVar1 = (ITextData *)this->_padding_;
  pIVar2 = (pFVar6->TextData).Reference;
  if (pIVar1 != pIVar2) {
    this->_padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar6->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UOffsetMeshTool @ 14ccc49f0

void __thiscall UOffsetMeshTool::~UOffsetMeshTool(UOffsetMeshTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  UBaseMeshProcessingTool::~UBaseMeshProcessingTool((UBaseMeshProcessingTool *)this);
  return;
}

// GetAcceptTransactionName @ 14ccfc710

FText * __thiscall
UOffsetMeshTool::GetAcceptTransactionName(UOffsetMeshTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UOffsetMeshTool",L"OffsetMeshToolTransactionName",
             L"Offset Mesh");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cd00df0

UClass * __cdecl UOffsetMeshTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOffsetMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"OffsetMeshTool",
               &Z_Registration_Info_UClass_UOffsetMeshTool.InnerSingleton,
               StaticRegisterNativesUOffsetMeshTool,0x4c0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UOffsetMeshTool>,
               InternalVTableHelperCtorCaller<UOffsetMeshTool>,local_res8,
               UBaseMeshProcessingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOffsetMeshTool.InnerSingleton;
}

// GetToolMessageString @ 14cd02bb0

FText * __thiscall
UOffsetMeshTool::GetToolMessageString(UOffsetMeshTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UOffsetMeshTool",L"StartOffsetToolMessage",
             L"Offset the mesh vertex positions using various Offsetting methods.");
  return __return_storage_ptr__;
}

// HasMeshTopologyChanged @ 14cd035b0

bool __thiscall UOffsetMeshTool::HasMeshTopologyChanged(UOffsetMeshTool *this)

{
  return ((this->OffsetProperties).field0_0x0.DebugPtr)->bCreateShell;
}

// InitializeProperties @ 14cd066c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UOffsetMeshTool::InitializeProperties(UOffsetMeshTool *this)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  UClass *pUVar9;
  UOffsetMeshToolProperties *pUVar10;
  void *this_00;
  TPropertyWatcher<EOffsetMeshToolOffsetType> *pTVar11;
  UIterativeOffsetProperties *pUVar12;
  UImplicitOffsetProperties *pUVar13;
  UOffsetWeightMapSetProperties *pUVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  code *local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  code *local_178 [2];
  undefined **local_168;
  UOffsetMeshTool *pUStack_160;
  undefined8 local_158;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  UOffsetMeshTool *pUStack_130;
  undefined8 local_128;
  undefined ***local_120;
  undefined1 local_118 [16];
  undefined **local_108;
  UOffsetMeshTool *pUStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  UOffsetMeshTool *pUStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UOffsetMeshToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar10 = (UOffsetMeshToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar16 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UOffsetMeshToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OffsetProperties).field0_0x0.DebugPtr = pUVar10;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar10);
  pUVar10 = (this->OffsetProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString(&local_b8,L"");
  (*pcVar2)(pUVar10,this,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pUVar10 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_1>,0,0>::
               _vftable_;
  pTVar11 = (TPropertyWatcher<EOffsetMeshToolOffsetType> *)0x0;
  uStack_180 = (longlong *)0x0;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UOffsetMeshTool::InitializeProperties'::__l2::<lambda_1>,void,enum_EOffsetMeshToolOffsetType_const_&>
              ::Call;
  uStack_190 = (code *)this;
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    local_118._0_8_ = local_1a8;
    local_f0 = (undefined ***)0x0;
    if (local_1a8 != (code *)0x0) {
      plVar16 = &local_198;
      if (uStack_180 != (longlong *)0x0) {
        plVar16 = uStack_180;
      }
      (**(code **)*plVar16)(plVar16,&local_108);
    }
    pTVar11 = FWatchablePropertySet::TPropertyWatcher<enum_EOffsetMeshToolOffsetType>::
              TPropertyWatcher<enum_EOffsetMeshToolOffsetType><enum_EOffsetMeshToolOffsetType,void>
                        (this_00,&pUVar10->OffsetType,
                         (TFunction<void___cdecl(EOffsetMeshToolOffsetType_const_&)> *)local_118);
  }
  iVar8 = (int)pUVar10->_padding_;
  piVar1 = (int *)((longlong)&pUVar10->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar10->_padding_,piVar1);
  }
  *(int *)&pUVar10->_padding_ = iVar8 + 1;
  *(TPropertyWatcher<EOffsetMeshToolOffsetType> **)(pUVar10->_padding_ + (longlong)iVar8 * 8) =
       pTVar11;
  if (local_1a8 != (code *)0x0) {
    plVar16 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar16 = uStack_180;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  pUVar10 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_2>,0,0>::
               _vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UOffsetMeshTool::InitializeProperties'::__l2::<lambda_2>,void,float_const_&>
                 ::Call;
  pUStack_160 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->Distance,
             (TFunction<void___cdecl(float_const_&)> *)local_178);
  pUVar10 = (this->OffsetProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_3>,0,0>::
               _vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UOffsetMeshTool::InitializeProperties'::__l2::<lambda_3>,void,bool_const_&>
                 ::Call;
  pUStack_160 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->bCreateShell,
             (TFunction<void___cdecl(bool_const_&)> *)local_178);
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_4>,1,0>::
               _vftable_;
  uStack_190 = `UBaseMeshProcessingTool::AddOptionalPropertySet<UIterativeOffsetProperties>'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  uStack_180 = (longlong *)0x0;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`UOffsetMeshTool::InitializeProperties'::__l2::<lambda_4>,bool>::
              Call;
  local_198 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_1a8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_120 = (undefined ***)0x0;
  local_150 = (undefined ***)0x0;
  local_138 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_4>,1,0>::
               _vftable_;
  local_128 = local_158;
  local_178[0] = (code *)0x0;
  pUStack_160 = this;
  pUStack_130 = this;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UIterativeOffsetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar12 = (UIterativeOffsetProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar16 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  local_c0 = uStack_180;
  local_e8[0] = local_1a8;
  local_d8 = local_198;
  pUStack_d0 = (UOffsetMeshTool *)uStack_190;
  local_c8 = local_188;
  if (local_1a8 != (code *)0x0) {
    local_1a8 = (code *)0x0;
  }
  local_118._0_8_ = local_148;
  local_f0 = local_120;
  local_108 = local_138;
  pUStack_100 = pUStack_130;
  local_f8 = local_128;
  if (local_148 != (code *)0x0) {
    local_148 = (code *)0x0;
  }
  local_1b8 = 1;
  (**(code **)(this->_padding_ + 0x408))(this,pUVar12,local_118,local_e8);
  if (local_148 != (code *)0x0) {
    pppuVar15 = &local_138;
    if (local_120 != (undefined ***)0x0) {
      pppuVar15 = local_120;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if (local_1a8 != (code *)0x0) {
    plVar16 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar16 = uStack_180;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (local_178[0] != (code *)0x0) {
    pppuVar15 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar15 = local_150;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UIterativeOffsetProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_5>,1,0>::
               _vftable_;
  pUStack_130 = (UOffsetMeshTool *)
                `UBaseMeshProcessingTool::AddOptionalPropertySet<UImplicitOffsetProperties>'::__l2::
                <lambda_1>::<lambda_invoker_cdecl>;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UOffsetMeshTool::InitializeProperties'::__l2::<lambda_5>,bool>::
              Call;
  (this->IterativeProperties).field0_0x0.DebugPtr = pUVar12;
  local_120 = (undefined ***)0x0;
  local_138 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_148 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  uStack_180 = (longlong *)0x0;
  local_150 = (undefined ***)0x0;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_5>,1,0>::
               _vftable_;
  local_188 = local_158;
  local_178[0] = (code *)0x0;
  uStack_190 = (code *)this;
  pUStack_160 = this;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UImplicitOffsetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar13 = (UImplicitOffsetProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar16 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  local_f0 = local_120;
  local_118._0_8_ = local_148;
  local_108 = local_138;
  pUStack_100 = pUStack_130;
  local_f8 = local_128;
  if (local_148 != (code *)0x0) {
    local_148 = (code *)0x0;
  }
  local_e8[0] = local_1a8;
  local_c0 = uStack_180;
  local_d8 = local_198;
  pUStack_d0 = (UOffsetMeshTool *)uStack_190;
  local_c8 = local_188;
  if (local_1a8 != (code *)0x0) {
    local_1a8 = (code *)0x0;
  }
  local_1b8 = 1;
  (**(code **)(this->_padding_ + 0x408))(this,pUVar13,local_e8,local_118);
  if (local_1a8 != (code *)0x0) {
    plVar16 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar16 = uStack_180;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (local_148 != (code *)0x0) {
    pppuVar15 = &local_138;
    if (local_120 != (undefined ***)0x0) {
      pppuVar15 = local_120;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if (local_178[0] != (code *)0x0) {
    pppuVar15 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar15 = local_150;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UImplicitOffsetProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->ImplicitProperties).field0_0x0.DebugPtr = pUVar13;
  local_198 = &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
  uStack_180 = (longlong *)0x0;
  uStack_190 = <lambda_70_>::<lambda_invoker_cdecl>;
  local_1a8 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UOffsetWeightMapSetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar14 = (UOffsetWeightMapSetProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar16 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x448))(this,pUVar14);
  lVar4 = this->_padding_;
  lVar5 = this->_padding_;
  lVar6 = this->_padding_;
  lVar7 = this->_padding_;
  lVar3 = this->_padding_;
  plVar16 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)local_1a8;
  this->_padding_ = lStack_1a0;
  *(undefined4 *)&this->_padding_ = (undefined4)local_198;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_198._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)uStack_190;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_190._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)local_188;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_188._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)uStack_180;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_180._4_4_;
  local_198 = (undefined **)lVar6;
  uStack_190 = (code *)lVar7;
  local_188 = lVar3;
  uStack_180 = plVar16;
  local_1a8 = (code *)lVar4;
  lStack_1a0 = lVar5;
  if (lVar4 != 0) {
    plVar17 = &local_198;
    if (plVar16 != (longlong *)0x0) {
      plVar17 = plVar16;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UOffsetWeightMapSetProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->WeightMapProperties).field0_0x0.DebugPtr = pUVar14;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UOffsetMeshTool::InitializeProperties'::`2'::<lambda_6>,0,0>::
               _vftable_;
  local_f0 = (undefined ***)0x0;
  local_118._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UOffsetMeshTool::InitializeProperties'::__l2::<lambda_6>,void,float_const_&>
       ::Call;
  pUStack_100 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->MinDistance,
             (TFunction<void___cdecl(float_const_&)> *)local_118);
  return;
}

// MakeNewOperator @ 14cd09b90

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UOffsetMeshTool::MakeNewOperator(UOffsetMeshTool *this)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMeshNormals *pFVar5;
  FMeshBoundaryLoops *pFVar6;
  TIndexedWeightMap<float> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMeshOffsetBaseOp *this_00;
  TSharedPtr<UE::Geometry::FMeshNormals,1> *pTVar9;
  TSharedPtr<UE::Geometry::FMeshBoundaryLoops,1> *pTVar10;
  TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *pTVar11;
  FDynamicMeshOperator *in_RDX;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TQuaternion<double>_u_0 local_60;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  cVar2 = *(char *)(this->_padding_ + 0xb0);
  if ((cVar2 == '\0') || (cVar2 != '\x01')) {
    this_00 = ::operator_new(0x130);
    if (this_00 == (FMeshOffsetBaseOp *)0x0) {
      this_00 = (FMeshOffsetBaseOp *)0x0;
    }
    else {
      UE::Geometry::FMeshOffsetBaseOp::FMeshOffsetBaseOp(this_00,(FDynamicMesh3 *)&this->_padding_);
      *(undefined4 *)&this_00[1]._padding_ = 1;
      this_00->_padding_ = (longlong)&___7FIterativeOffsetMeshOp_Geometry_UE__6B_;
      this_00[1]._padding_ = 0x3fb999999999999a;
      this_00[1]._padding_ = 0x3fc999999999999a;
      *(undefined1 *)&this_00[1]._padding_ = 0;
    }
    *(undefined4 *)&this_00[1]._padding_ = *(undefined4 *)(this->_padding_ + 0xb0);
    this_00[1]._padding_ = (longlong)(double)*(float *)(this->_padding_ + 0xb8);
    *(undefined1 *)&this_00[1]._padding_ = *(undefined1 *)(this->_padding_ + 0xbc);
    this_00->bFixedBoundary = *(char *)(this->_padding_ + 0xb4) == '\0';
  }
  else {
    this_00 = ::operator_new(0x120);
    if (this_00 == (FMeshOffsetBaseOp *)0x0) {
      this_00 = (FMeshOffsetBaseOp *)0x0;
    }
    else {
      UE::Geometry::FMeshOffsetBaseOp::FMeshOffsetBaseOp(this_00,(FDynamicMesh3 *)&this->_padding_);
      *(undefined1 *)&this_00[1]._padding_ = 1;
      this_00->_padding_ = (longlong)&___7FLaplacianOffsetMeshOp_Geometry_UE__6B_;
      this_00[1]._padding_ = 0;
    }
    dVar12 = (double)*(float *)(this->_padding_ + 0xb0);
    this_00[1]._padding_ =
         (longlong)(dVar12 * dVar12 * __real_3f947ae147ae147b * (double)(int)this->_padding_);
    *(bool *)&this_00[1]._padding_ = *(char *)(this->_padding_ + 0xb4) == '\0';
    this_00->bFixedBoundary = true;
  }
  dVar12 = __real_3ff0000000000000;
  dVar14 = __real_3ff0000000000000 / (double)this->_padding_;
  dVar15 = (double)(float)(*(uint *)(this->_padding_ + 0xb4) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
  dVar13 = (double)(float)(*(uint *)(this->_padding_ + 0xd0) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (dVar15 <= dVar13) {
    dVar13 = dVar15;
  }
  (this_00->OffsetRange).Min = dVar13 * dVar14;
  (this_00->OffsetRange).Max = dVar14 * dVar15;
  pfVar1 = (float *)(this->_padding_ + 0xb4);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    dVar12 = __real_bff0000000000000;
  }
  this_00->OffsetSign = dVar12;
  pTVar9 = UBaseMeshProcessingTool::GetInitialVtxNormals
                     ((UBaseMeshProcessingTool *)&this[-1]._padding_);
  pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar9->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this_00->BaseNormals).SharedReferenceCount.ReferenceController;
  (this_00->BaseNormals).Object = pFVar5;
  (this_00->BaseNormals).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  bVar3 = *(bool *)(this->_padding_ + 0xb8);
  this_00->bCreateShell = bVar3;
  if (bVar3 != false) {
    pTVar10 = UBaseMeshProcessingTool::GetInitialBoundaryLoops
                        ((UBaseMeshProcessingTool *)&this[-1]._padding_);
    pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar10->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (this_00->BoundaryLoops).SharedReferenceCount.ReferenceController;
    (this_00->BoundaryLoops).Object = pFVar6;
    (this_00->BoundaryLoops).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  pTVar11 = UBaseMeshProcessingTool::GetActiveWeightMap
                      ((UBaseMeshProcessingTool *)&this[-1]._padding_);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar7 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this_00->WeightMap).SharedReferenceCount.ReferenceController;
  (this_00->WeightMap).Object = pTVar7;
  (this_00->WeightMap).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  this_00->bUseWeightMap = true;
  local_60._s_0.X = (double)this->_padding_;
  local_60._s_0.Y = (double)this->_padding_;
  local_60._s_0.Z = (double)this->_padding_;
  local_60._s_0.W = (double)this->_padding_;
  local_30 = this->_padding_;
  local_18 = this->_padding_;
  local_40 = this->_padding_;
  lStack_38 = this->_padding_;
  local_28 = this->_padding_;
  lStack_20 = this->_padding_;
  UE::Geometry::FSimpleMeshProcessingBaseOp::SetTransform
            ((FSimpleMeshProcessingBaseOp *)this_00,(TTransformSRT3<double> *)&local_60._s_0);
  in_RDX->_padding_ = (longlong)this_00;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnShutdown @ 14cd12d30

void __thiscall UOffsetMeshTool::OnShutdown(UOffsetMeshTool *this,EToolShutdownType param_1)

{
  UOffsetMeshToolProperties *pUVar1;
  code *pcVar2;
  FString local_18;
  
  pUVar1 = (this->OffsetProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar1,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RequiresInitialBoundaryLoops @ 14cd1c320

bool __thiscall UOffsetMeshTool::RequiresInitialBoundaryLoops(UOffsetMeshTool *this)

{
  return true;
}

// RequiresInitialVtxNormals @ 14cd1c330

bool __thiscall UOffsetMeshTool::RequiresInitialVtxNormals(UOffsetMeshTool *this)

{
  return true;
}

// StaticRegisterNativesUOffsetMeshTool @ 14cd2f230

void __cdecl UOffsetMeshTool::StaticRegisterNativesUOffsetMeshTool(void)

{
  return;
}

