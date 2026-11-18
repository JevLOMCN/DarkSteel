// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 17

// StaticClass @ 14cd43ec0

UClass * __cdecl USmoothMeshTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshTool",
               &Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton,
               StaticRegisterNativesUSmoothMeshTool,0x4d0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmoothMeshTool>,
               InternalVTableHelperCtorCaller<USmoothMeshTool>,local_res8,
               UBaseMeshProcessingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton;
}

// USmoothMeshTool @ 14cd512a0

USmoothMeshTool * __thiscall
USmoothMeshTool::USmoothMeshTool(USmoothMeshTool *this,FVTableHelper *param_1)

{
  UBaseMeshProcessingTool::UBaseMeshProcessingTool((UBaseMeshProcessingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&___7USmoothMeshTool__6B_;
  (this->SmoothProperties).field0_0x0.DebugPtr = (USmoothMeshToolProperties *)0x0;
  (this->IterativeProperties).field0_0x0.DebugPtr = (UIterativeSmoothProperties *)0x0;
  (this->DiffusionProperties).field0_0x0.DebugPtr = (UDiffusionSmoothProperties *)0x0;
  (this->ImplicitProperties).field0_0x0.DebugPtr = (UImplicitSmoothProperties *)0x0;
  (this->WeightMapProperties).field0_0x0.DebugPtr = (USmoothWeightMapSetProperties *)0x0;
  return this;
}

// USmoothMeshTool @ 14cd51330

USmoothMeshTool * __thiscall USmoothMeshTool::USmoothMeshTool(USmoothMeshTool *this)

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
  this->_padding_ = (longlong)&___7USmoothMeshTool__6B_;
  (this->SmoothProperties).field0_0x0.DebugPtr = (USmoothMeshToolProperties *)0x0;
  (this->IterativeProperties).field0_0x0.DebugPtr = (UIterativeSmoothProperties *)0x0;
  (this->DiffusionProperties).field0_0x0.DebugPtr = (UDiffusionSmoothProperties *)0x0;
  (this->ImplicitProperties).field0_0x0.DebugPtr = (UImplicitSmoothProperties *)0x0;
  (this->WeightMapProperties).field0_0x0.DebugPtr = (USmoothWeightMapSetProperties *)0x0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_18,L"USmoothMeshTool",L"ToolName",L"Smooth")
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

// ~USmoothMeshTool @ 14cd53850

void __thiscall USmoothMeshTool::~USmoothMeshTool(USmoothMeshTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UBaseMeshProcessingTool::~UBaseMeshProcessingTool((UBaseMeshProcessingTool *)this);
  return;
}

// GetAcceptTransactionName @ 14cd6b210

FText * __thiscall
USmoothMeshTool::GetAcceptTransactionName(USmoothMeshTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"USmoothMeshTool",L"SmoothMeshToolTransactionName",
             L"Smooth Mesh");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cd6e520

UClass * __cdecl USmoothMeshTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SmoothMeshTool",
               &Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton,
               StaticRegisterNativesUSmoothMeshTool,0x4d0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmoothMeshTool>,
               InternalVTableHelperCtorCaller<USmoothMeshTool>,local_res8,
               UBaseMeshProcessingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmoothMeshTool.InnerSingleton;
}

// GetToolMessageString @ 14cd6f890

FText * __thiscall
USmoothMeshTool::GetToolMessageString(USmoothMeshTool *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"USmoothMeshTool",L"StartSmoothToolMessage",
             L"Smooth the mesh vertex positions using various smoothing methods.");
  return __return_storage_ptr__;
}

// HasMeshTopologyChanged @ 14cd6fba0

bool __thiscall USmoothMeshTool::HasMeshTopologyChanged(USmoothMeshTool *this)

{
  return false;
}

// InitializeProperties @ 14cd70db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USmoothMeshTool::InitializeProperties(USmoothMeshTool *this)

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
  USmoothMeshToolProperties *pUVar10;
  void *this_00;
  TPropertyWatcher<ESmoothMeshToolSmoothType> *pTVar11;
  UIterativeSmoothProperties *pUVar12;
  UDiffusionSmoothProperties *pUVar13;
  UImplicitSmoothProperties *pUVar14;
  USmoothWeightMapSetProperties *pUVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  code *local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  code *local_178;
  undefined **local_168;
  USmoothMeshTool *pUStack_160;
  undefined8 local_158;
  undefined ***local_150;
  longlong local_148;
  undefined **local_138;
  USmoothMeshTool *pUStack_130;
  undefined8 local_128;
  undefined ***local_120;
  undefined1 local_118 [16];
  undefined **local_108;
  USmoothMeshTool *pUStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  USmoothMeshTool *pUStack_d0;
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
  pUVar9 = USmoothMeshToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar10 = (USmoothMeshToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar17 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (USmoothMeshToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->SmoothProperties).field0_0x0.DebugPtr = pUVar10;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar10);
  pUVar10 = (this->SmoothProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString(&local_b8,L"");
  (*pcVar2)(pUVar10,this,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pUVar10 = (this->SmoothProperties).field0_0x0.DebugPtr;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_1>,0,0>::
               _vftable_;
  pTVar11 = (TPropertyWatcher<ESmoothMeshToolSmoothType> *)0x0;
  uStack_180 = (longlong *)0x0;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_1>,void,enum_ESmoothMeshToolSmoothType_const_&>
              ::Call;
  uStack_190 = (code *)this;
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    local_118._0_8_ = local_1a8;
    local_f0 = (undefined ***)0x0;
    if (local_1a8 != (code *)0x0) {
      plVar17 = &local_198;
      if (uStack_180 != (longlong *)0x0) {
        plVar17 = uStack_180;
      }
      (**(code **)*plVar17)(plVar17,&local_108);
    }
    pTVar11 = FWatchablePropertySet::TPropertyWatcher<enum_ESmoothMeshToolSmoothType>::
              TPropertyWatcher<enum_ESmoothMeshToolSmoothType><enum_ESmoothMeshToolSmoothType,void>
                        (this_00,&pUVar10->SmoothingType,
                         (TFunction<void___cdecl(ESmoothMeshToolSmoothType_const_&)> *)local_118);
  }
  iVar8 = (int)pUVar10->_padding_;
  piVar1 = (int *)((longlong)&pUVar10->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar10->_padding_,piVar1);
  }
  *(int *)&pUVar10->_padding_ = iVar8 + 1;
  *(TPropertyWatcher<ESmoothMeshToolSmoothType> **)(pUVar10->_padding_ + (longlong)iVar8 * 8) =
       pTVar11;
  if (local_1a8 != (code *)0x0) {
    plVar17 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar17 = uStack_180;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  local_138 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_2>,1,0>::
               _vftable_;
  uStack_190 = `UBaseMeshProcessingTool::AddOptionalPropertySet<UIterativeSmoothProperties>'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  uStack_180 = (longlong *)0x0;
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_2>,bool>::
              Call;
  local_198 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_1a8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_150 = (undefined ***)0x0;
  local_120 = (undefined ***)0x0;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_2>,1,0>::
               _vftable_;
  local_158 = local_128;
  local_148 = 0;
  pUStack_160 = this;
  pUStack_130 = this;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UIterativeSmoothProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar12 = (UIterativeSmoothProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar17 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  local_c0 = uStack_180;
  local_e8[0] = local_1a8;
  local_d8 = local_198;
  pUStack_d0 = (USmoothMeshTool *)uStack_190;
  local_c8 = local_188;
  if (local_1a8 != (code *)0x0) {
    local_1a8 = (code *)0x0;
  }
  local_118._0_8_ = local_178;
  local_f0 = local_150;
  local_108 = local_168;
  pUStack_100 = pUStack_160;
  local_f8 = local_158;
  if (local_178 != (code *)0x0) {
    local_178 = (code *)0x0;
  }
  local_1b8 = 1;
  (**(code **)(this->_padding_ + 0x408))(this,pUVar12,local_118,local_e8);
  if (local_178 != (code *)0x0) {
    pppuVar16 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar16 = local_150;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_1a8 != (code *)0x0) {
    plVar17 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar17 = uStack_180;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_148 != 0) {
    pppuVar16 = &local_138;
    if (local_120 != (undefined ***)0x0) {
      pppuVar16 = local_120;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UIterativeSmoothProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  local_138 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_3>,1,0>::
               _vftable_;
  pUStack_160 = (USmoothMeshTool *)
                `UBaseMeshProcessingTool::AddOptionalPropertySet<UDiffusionSmoothProperties>'::__l2
                ::<lambda_1>::<lambda_invoker_cdecl>;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_3>,bool>::
              Call;
  (this->IterativeProperties).field0_0x0.DebugPtr = pUVar12;
  local_150 = (undefined ***)0x0;
  local_168 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_178 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  uStack_180 = (longlong *)0x0;
  local_120 = (undefined ***)0x0;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_3>,1,0>::
               _vftable_;
  local_188 = local_128;
  local_148 = 0;
  uStack_190 = (code *)this;
  pUStack_130 = this;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UDiffusionSmoothProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar13 = (UDiffusionSmoothProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar17 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  local_f0 = local_150;
  local_118._0_8_ = local_178;
  local_108 = local_168;
  pUStack_100 = pUStack_160;
  local_f8 = local_158;
  if (local_178 != (code *)0x0) {
    local_178 = (code *)0x0;
  }
  local_e8[0] = local_1a8;
  local_c0 = uStack_180;
  local_d8 = local_198;
  pUStack_d0 = (USmoothMeshTool *)uStack_190;
  local_c8 = local_188;
  if (local_1a8 != (code *)0x0) {
    local_1a8 = (code *)0x0;
  }
  local_1b8 = 1;
  (**(code **)(this->_padding_ + 0x408))(this,pUVar13,local_e8,local_118);
  if (local_1a8 != (code *)0x0) {
    plVar17 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar17 = uStack_180;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_178 != (code *)0x0) {
    pppuVar16 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar16 = local_150;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_148 != 0) {
    pppuVar16 = &local_138;
    if (local_120 != (undefined ***)0x0) {
      pppuVar16 = local_120;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UDiffusionSmoothProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  local_138 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_4>,1,0>::
               _vftable_;
  pUStack_160 = (USmoothMeshTool *)
                `UBaseMeshProcessingTool::AddOptionalPropertySet<UImplicitSmoothProperties>'::__l2::
                <lambda_1>::<lambda_invoker_cdecl>;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_4>,bool>::
              Call;
  (this->DiffusionProperties).field0_0x0.DebugPtr = pUVar13;
  local_150 = (undefined ***)0x0;
  local_168 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_178 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  uStack_180 = (longlong *)0x0;
  local_120 = (undefined ***)0x0;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_4>,1,0>::
               _vftable_;
  local_188 = local_128;
  local_148 = 0;
  uStack_190 = (code *)this;
  pUStack_130 = this;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UImplicitSmoothProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar14 = (UImplicitSmoothProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar17 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  local_f0 = local_150;
  local_118._0_8_ = local_178;
  local_108 = local_168;
  pUStack_100 = pUStack_160;
  local_f8 = local_158;
  if (local_178 != (code *)0x0) {
    local_178 = (code *)0x0;
  }
  local_e8[0] = local_1a8;
  local_c0 = uStack_180;
  local_d8 = local_198;
  pUStack_d0 = (USmoothMeshTool *)uStack_190;
  local_c8 = local_188;
  if (local_1a8 != (code *)0x0) {
    local_1a8 = (code *)0x0;
  }
  local_1b8 = 1;
  (**(code **)(this->_padding_ + 0x408))(this,pUVar14,local_e8,local_118);
  if (local_1a8 != (code *)0x0) {
    plVar17 = &local_198;
    if (uStack_180 != (longlong *)0x0) {
      plVar17 = uStack_180;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_178 != (code *)0x0) {
    pppuVar16 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar16 = local_150;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_148 != 0) {
    pppuVar16 = &local_138;
    if (local_120 != (undefined ***)0x0) {
      pppuVar16 = local_120;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UImplicitSmoothProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->ImplicitProperties).field0_0x0.DebugPtr = pUVar14;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_5>,1,0>::
               _vftable_;
  uStack_180 = (longlong *)0x0;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_5>,bool>::
              Call;
  uStack_190 = (code *)this;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = USmoothWeightMapSetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  local_a8._8_8_ = this;
  pUVar15 = (USmoothWeightMapSetProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar17 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x448))(this,pUVar15);
  lVar4 = this->_padding_;
  lVar5 = this->_padding_;
  lVar6 = this->_padding_;
  lVar7 = this->_padding_;
  lVar3 = this->_padding_;
  plVar17 = (longlong *)this->_padding_;
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
  uStack_180 = plVar17;
  local_1a8 = (code *)lVar4;
  lStack_1a0 = lVar5;
  if (lVar4 != 0) {
    plVar18 = &local_198;
    if (plVar17 != (longlong *)0x0) {
      plVar18 = plVar17;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (USmoothWeightMapSetProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->WeightMapProperties).field0_0x0.DebugPtr = pUVar15;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USmoothMeshTool::InitializeProperties'::`2'::<lambda_6>,0,0>::
               _vftable_;
  local_f0 = (undefined ***)0x0;
  local_118._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`USmoothMeshTool::InitializeProperties'::__l2::<lambda_6>,void,float_const_&>
       ::Call;
  pUStack_100 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar15->_padding_,&pUVar15->MinSmoothMultiplier,
             (TFunction<void___cdecl(float_const_&)> *)local_118);
  return;
}

// IsInputSelectionValidOnOutput @ 14cd71b30

bool __thiscall USmoothMeshTool::IsInputSelectionValidOnOutput(USmoothMeshTool *this)

{
  return true;
}

// MakeNewOperator @ 14cd737a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall USmoothMeshTool::MakeNewOperator(USmoothMeshTool *this)

{
  longlong *this_00;
  float fVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FSharedReferencer<1> FVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  FGeometrySelection *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FDynamicSubmesh3 *pFVar13;
  TSharedPtr<UE::Geometry::FMeshNormals,1> *pTVar14;
  TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *pTVar15;
  FIterativeSmoothingOp *this_01;
  FSmoothingOpBase *this_02;
  FCotanSmoothingOp *this_03;
  FDynamicMeshOperator *in_RDX;
  undefined1 auStackY_d28 [32];
  FOptions local_cf8;
  undefined1 local_ca8 [16];
  double local_c98;
  undefined8 *local_c90;
  undefined1 local_c88 [32];
  TVector<double>_u_0 local_c68;
  TVector<double>_u_0 local_c50;
  undefined1 local_c38 [1272];
  undefined1 local_740 [32];
  void *local_720;
  undefined8 local_718;
  undefined8 uStack_710;
  ForElementType<FSetElementId> local_700;
  int local_6f8;
  undefined1 local_6f0 [32];
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  ForElementType<FSetElementId> local_6b0;
  int local_6a8;
  undefined1 local_6a0 [32];
  void *local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  ForElementType<FSetElementId> local_660;
  int local_658;
  bool local_650;
  FDynamicSubmesh3 local_648;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_d28;
  this_02 = (FSmoothingOpBase *)0x0;
  local_c38._0_8_ = (FDynamicMesh3 *)0x0;
  bVar4 = false;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(local_c38 + 8));
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)(local_c38 + 0x238));
  this_00 = &this[-1]._padding_;
  local_740._0_8_ = (FScriptContainerElement *)0x0;
  local_740._8_8_ = 0;
  local_720 = (void *)0x0;
  local_718 = ___xmm_00000000ffffffff0000008000000000;
  uStack_710 = _UNK_150631d98;
  local_700 = (ForElementType<FSetElementId>)0x0;
  local_6f8 = 0;
  local_6f0._0_8_ = (FScriptContainerElement *)0x0;
  local_6f0._8_8_ = 0;
  local_6d0 = (void *)0x0;
  local_6c8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_6c0 = _UNK_150631d98;
  local_6b0 = (ForElementType<FSetElementId>)0x0;
  local_6a8 = 0;
  local_6a0._0_8_ = (FScriptContainerElement *)0x0;
  local_6a0._8_8_ = 0;
  local_680 = (void *)0x0;
  local_678 = ___xmm_00000000ffffffff0000008000000000;
  uStack_670 = _UNK_150631d98;
  local_660 = (ForElementType<FSetElementId>)0x0;
  local_658 = 0;
  local_650 = true;
  cVar9 = (**(code **)(*this_00 + 0x3d8))(this_00);
  if (cVar9 != '\0') {
    local_c88._0_8_ = (FScriptContainerElement *)0x0;
    local_c88._8_8_ = 0.0;
    local_c68._s_0.X = 0.0;
    local_c68._s_0.Y = 2.71615461243555e-312;
    local_c68._s_0.Z = 2.12199579047121e-314;
    local_c50._s_0.Y = 0.0;
    local_c50._s_0.Z = (double)((ulonglong)local_c50._s_0.Z & 0xffffffff00000000);
    pFVar11 = (FGeometrySelection *)(**(code **)(*this_00 + 0x3e0))(this_00);
    local_c90 = (undefined8 *)local_c88;
    local_ca8._8_8_ = &local_c90;
    local_ca8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`USmoothMeshTool::MakeNewOperator'::__l5::<lambda_1>,void,int>::Call;
    UE::Geometry::EnumerateSelectionTriangles
              (pFVar11,(FDynamicMesh3 *)&this->_padding_,
               (TFunctionRef<void___cdecl(int)> *)local_ca8,(FPolygroupSet *)0x0);
    pTVar12 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c88,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)local_ca8);
    pFVar13 = UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3
                        (&local_648,(FDynamicMesh3 *)&this->_padding_,pTVar12,0xf,true);
    local_c38._0_8_ = pFVar13->BaseMesh;
    UE::Geometry::FDynamicMesh3::operator=((FDynamicMesh3 *)(local_c38 + 8),&pFVar13->Submesh);
    UE::Geometry::FMeshIndexMappings::operator=
              ((FMeshIndexMappings *)(local_c38 + 0x238),&pFVar13->Mappings);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_740 != &pFVar13->BaseBorderE)
    {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_740,
                 &pFVar13->BaseBorderE);
    }
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_6f0 !=
        &pFVar13->BaseBoundaryE) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_6f0,
                 &pFVar13->BaseBoundaryE);
    }
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_6a0 != &pFVar13->BaseBorderV)
    {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_6a0,
                 &pFVar13->BaseBorderV);
    }
    local_650 = pFVar13->bComputeTriMaps;
    UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3(&local_648);
    if ((FScriptContainerElement *)local_ca8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_ca8._0_8_);
    }
    bVar4 = true;
    local_c50._s_0.Z = (double)((ulonglong)local_c50._s_0.Z & 0xffffffff00000000);
    if ((ForElementType<FSetElementId>)local_c50._s_0.Y != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c50._s_0.Y);
    }
    iVar5 = SUB84(local_c88._8_8_,4);
    local_c88._8_8_ = local_c88._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_c88,0,(int *)(local_c88 + 0xc));
    }
    uVar7 = local_c68._12_4_;
    local_c68._s_0.Z = 2.12199579047121e-314;
    local_c68._s_0.Y = (double)((ulonglong)(uint)local_c68._12_4_ << 0x20);
    if (0x80 < (uint)uVar7) {
      local_c68._s_0.Y = 2.71615461243555e-312;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c88 + 0x10),0);
    }
    if ((void *)local_c68._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_c68._s_0.X);
    }
    if ((FScriptContainerElement *)local_c88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c88._0_8_);
    }
  }
  local_cf8.WeightClamp = __real_47efffffe0000000;
  local_cf8.NormalOffset = 0.0;
  local_cf8.BaseNormals.Object = (FMeshNormals *)0x0;
  local_cf8.BaseNormals.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_cf8.Iterations = 1;
  local_cf8.SmoothPower = 1.0;
  local_cf8.bSmoothBoundary = true;
  local_cf8.WeightMap.Object = (TIndexedWeightMap<float> *)0x0;
  local_cf8.WeightMap.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_cf8.bUseWeightMap = false;
  local_cf8.WeightMapMinMultiplier = 0.0;
  pTVar14 = UBaseMeshProcessingTool::GetInitialVtxNormals((UBaseMeshProcessingTool *)this_00);
  FVar6.ReferenceController = local_cf8.BaseNormals.SharedReferenceCount.ReferenceController;
  local_cf8.BaseNormals.SharedReferenceCount.ReferenceController =
       (pTVar14->SharedReferenceCount).ReferenceController;
  local_cf8.BaseNormals.Object = pTVar14->Object;
  if (local_cf8.BaseNormals.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_cf8.BaseNormals.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_cf8.BaseNormals.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  bVar10 = UBaseMeshProcessingTool::HasActiveWeightMap((UBaseMeshProcessingTool *)this_00);
  if (bVar10) {
    local_cf8.bUseWeightMap = true;
    pTVar15 = UBaseMeshProcessingTool::GetActiveWeightMap((UBaseMeshProcessingTool *)this_00);
    FVar6.ReferenceController = local_cf8.WeightMap.SharedReferenceCount.ReferenceController;
    local_cf8.WeightMap.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    local_cf8.WeightMap.Object = pTVar15->Object;
    if (local_cf8.WeightMap.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_cf8.WeightMap.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_cf8.WeightMap.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    local_cf8.WeightMapMinMultiplier = *(float *)(this->_padding_ + 0xd0);
  }
  cVar9 = *(char *)(this->_padding_ + 0xb0);
  dVar3 = 0.0;
  if (cVar9 == '\0') {
LAB_14cd73cd1:
    lVar2 = this->_padding_;
    local_cf8.SmoothAlpha = *(float *)(lVar2 + 0xb0);
    if ((0.0 <= *(float *)(lVar2 + 0xb0)) &&
       (dVar3 = (double)*(float *)(lVar2 + 0xb0), __real_3ff0000000000000 <= dVar3)) {
      dVar3 = __real_3ff0000000000000;
    }
    local_cf8.Iterations = *(int *)(lVar2 + 0xb4);
    local_cf8.bSmoothBoundary = *(bool *)(lVar2 + 0xb8);
    local_cf8.bUniform = true;
    local_cf8.bUseImplicit = false;
  }
  else {
    if (cVar9 == '\x01') {
      lVar2 = this->_padding_;
      local_cf8.SmoothAlpha = *(float *)(lVar2 + 0xb0);
      local_cf8.BoundarySmoothAlpha = 0.0;
      local_cf8.SmoothPower =
           (float)((double)*(float *)(lVar2 + 0xb4) * (double)*(float *)(lVar2 + 0xb4) *
                   __real_3f947ae147ae147b * (double)(int)this->_padding_);
      local_cf8.bUniform = *(char *)(lVar2 + 0xb8) == '\0';
      local_cf8.bUseImplicit = true;
      local_cf8.NormalOffset = (double)*(float *)(lVar2 + 0xbc);
      this_03 = ::operator_new(0x100);
      if (bVar4) {
        if (this_03 != (FCotanSmoothingOp *)0x0) {
          this_02 = (FSmoothingOpBase *)
                    UE::Geometry::FCotanSmoothingOp::FCotanSmoothingOp
                              (this_03,(FDynamicMesh3 *)&this->_padding_,&local_cf8,
                               (FDynamicSubmesh3 *)local_c38);
        }
      }
      else if (this_03 != (FCotanSmoothingOp *)0x0) {
        this_02 = (FSmoothingOpBase *)
                  UE::Geometry::FCotanSmoothingOp::FCotanSmoothingOp
                            (this_03,(FDynamicMesh3 *)&this->_padding_,&local_cf8);
      }
      goto LAB_14cd73d52;
    }
    if (cVar9 != '\x02') goto LAB_14cd73cd1;
    lVar2 = this->_padding_;
    local_cf8.SmoothAlpha = *(float *)(lVar2 + 0xb0);
    fVar1 = *(float *)(this->_padding_ + 0xb0);
    if ((0.0 <= fVar1) && (dVar3 = (double)fVar1, __real_3ff0000000000000 <= dVar3)) {
      dVar3 = __real_3ff0000000000000;
    }
    local_cf8.Iterations = *(int *)(lVar2 + 0xb4);
    local_cf8.bUniform = *(char *)(lVar2 + 0xb8) == '\0';
    local_cf8.bUseImplicit = true;
  }
  local_cf8.BoundarySmoothAlpha = (float)(dVar3 * __real_3feccccccccccccd);
  this_01 = ::operator_new(0x100);
  if (bVar4) {
    if (this_01 != (FIterativeSmoothingOp *)0x0) {
      this_02 = (FSmoothingOpBase *)
                UE::Geometry::FIterativeSmoothingOp::FIterativeSmoothingOp
                          (this_01,(FDynamicMesh3 *)&this->_padding_,&local_cf8,
                           (FDynamicSubmesh3 *)local_c38);
    }
  }
  else if (this_01 != (FIterativeSmoothingOp *)0x0) {
    this_02 = (FSmoothingOpBase *)
              UE::Geometry::FIterativeSmoothingOp::FIterativeSmoothingOp
                        (this_01,(FDynamicMesh3 *)&this->_padding_,&local_cf8);
  }
LAB_14cd73d52:
  local_c88._0_8_ = this->_padding_;
  local_c88._8_8_ = this->_padding_;
  local_c88._16_8_ = this->_padding_;
  local_c88._24_8_ = this->_padding_;
  local_c68._s_0.Z = (double)this->_padding_;
  local_c98 = (double)this->_padding_;
  local_c68._s_0.X = (double)this->_padding_;
  local_c68._s_0.Y = (double)this->_padding_;
  local_c50._s_0.X = (double)this->_padding_;
  local_c50._s_0.Y = (double)this->_padding_;
  local_c50._s_0.Z = local_c98;
  UE::Geometry::FSmoothingOpBase::SetTransform(this_02,(TTransformSRT3<double> *)local_c88);
  in_RDX->_padding_ = (longlong)this_02;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf8.WeightMap.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf8.BaseNormals.SharedReferenceCount.ReferenceController);
  local_658 = 0;
  if (local_660 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_660);
  }
  iVar5 = SUB84(local_6a0._8_8_,4);
  local_6a0._8_8_ = local_6a0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_6a0,0,(int *)(local_6a0 + 0xc));
  }
  uVar8 = local_678._4_4_;
  uStack_670 = 0xffffffff;
  local_678 = (ulonglong)local_678._4_4_ << 0x20;
  if (0x80 < uVar8) {
    local_678 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_6a0 + 0x10),0);
  }
  if (local_680 != (void *)0x0) {
    FMemory::Free(local_680);
  }
  if ((FScriptContainerElement *)local_6a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_6a0._0_8_);
  }
  local_6a8 = 0;
  if (local_6b0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_6b0);
  }
  iVar5 = SUB84(local_6f0._8_8_,4);
  local_6f0._8_8_ = local_6f0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_6f0,0,(int *)(local_6f0 + 0xc));
  }
  uVar8 = local_6c8._4_4_;
  uStack_6c0 = 0xffffffff;
  local_6c8 = (ulonglong)local_6c8._4_4_ << 0x20;
  if (0x80 < uVar8) {
    local_6c8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_6f0 + 0x10),0);
  }
  if (local_6d0 != (void *)0x0) {
    FMemory::Free(local_6d0);
  }
  if ((FScriptContainerElement *)local_6f0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_6f0._0_8_);
  }
  local_6f8 = 0;
  if (local_700 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_700);
  }
  iVar5 = SUB84(local_740._8_8_,4);
  local_740._8_8_ = local_740._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_740,0,(int *)(local_740 + 0xc));
  }
  uVar8 = local_718._4_4_;
  uStack_710 = 0xffffffff;
  local_718 = (ulonglong)local_718._4_4_ << 0x20;
  if (0x80 < uVar8) {
    local_718 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_740 + 0x10),0);
  }
  if (local_720 != (void *)0x0) {
    FMemory::Free(local_720);
  }
  if ((FScriptContainerElement *)local_740._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_740._0_8_);
  }
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)(local_c38 + 0x238));
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3((FDynamicMesh3 *)(local_c38 + 8));
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnShutdown @ 14cd754b0

void __thiscall USmoothMeshTool::OnShutdown(USmoothMeshTool *this,EToolShutdownType param_1)

{
  USmoothMeshToolProperties *pUVar1;
  code *pcVar2;
  FString local_18;
  
  pUVar1 = (this->SmoothProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar1,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RequiresInitialVtxNormals @ 14cd7b170

bool __thiscall USmoothMeshTool::RequiresInitialVtxNormals(USmoothMeshTool *this)

{
  return true;
}

// StaticRegisterNativesUSmoothMeshTool @ 14cd814d0

void __cdecl USmoothMeshTool::StaticRegisterNativesUSmoothMeshTool(void)

{
  return;
}

// _getUObject @ 14cd86860

UObject * __thiscall USmoothMeshTool::_getUObject(USmoothMeshTool *this)

{
  return (UObject *)&this[-1].SmoothProperties;
}

// _getUObject`adjustor{1144}' @ 14cd8686c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USmoothMeshTool::_getUObject`adjustor{1144}' (void)const __ptr64 */

UObject * __thiscall USmoothMeshTool::_getUObject_adjustor_1144__(USmoothMeshTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USmoothMeshTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{152}' @ 14cd86880

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USmoothMeshTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall USmoothMeshTool::_getUObject_adjustor_152__(USmoothMeshTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USmoothMeshTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

