// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cc906d0

UClass * __cdecl ULatticeDeformerToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerToolBuilder",
               &Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.InnerSingleton,
               StaticRegisterNativesULatticeDeformerToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeDeformerToolBuilder>,
               InternalVTableHelperCtorCaller<ULatticeDeformerToolBuilder>,local_res8,
               UMultiTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.InnerSingleton;
}

// ULatticeDeformerToolBuilder @ 14ccbb740

ULatticeDeformerToolBuilder * __thiscall
ULatticeDeformerToolBuilder::ULatticeDeformerToolBuilder
          (ULatticeDeformerToolBuilder *this,FVTableHelper *param_1)

{
  UMultiTargetWithSelectionToolBuilder::UMultiTargetWithSelectionToolBuilder
            ((UMultiTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined ***)this = &___7ULatticeDeformerToolBuilder__6B_;
  return this;
}

// ULatticeDeformerToolBuilder @ 14ccbb770

ULatticeDeformerToolBuilder * __thiscall
ULatticeDeformerToolBuilder::ULatticeDeformerToolBuilder
          (ULatticeDeformerToolBuilder *this,FObjectInitializer *param_1)

{
  UMultiTargetWithSelectionToolBuilder::UMultiTargetWithSelectionToolBuilder
            ((UMultiTargetWithSelectionToolBuilder *)this,param_1);
  *(undefined ***)this = &___7ULatticeDeformerToolBuilder__6B_;
  return this;
}

// ~ULatticeDeformerToolBuilder @ 14ccc3770

void __thiscall
ULatticeDeformerToolBuilder::~ULatticeDeformerToolBuilder(ULatticeDeformerToolBuilder *this)

{
  *(undefined ***)this = &___7ULatticeDeformerToolBuilder__6B_;
  UMultiTargetWithSelectionToolBuilder::~UMultiTargetWithSelectionToolBuilder
            ((UMultiTargetWithSelectionToolBuilder *)this);
  return;
}

// operator() @ 14cccbd80

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
`ULatticeDeformerToolBuilder::CreateNewTool'::__l2::<lambda_1>::operator()
          (void *this,UActorComponent *param_1)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  void *pvVar5;
  
  pUVar4 = (UClass *)param_1->_padding_;
  pUVar3 = Z_Construct_UClass_ULatticeStateStorage_NoRegister();
  bVar2 = UClass::ImplementsInterface(pUVar4,pUVar3);
  if (bVar2) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pUVar4 = Z_Construct_UClass_ULatticeStateStorage_NoRegister();
    pvVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar4);
    lVar1 = **(longlong **)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UActorComponent **)(lVar1 + 0x1d0) = param_1;
    *(void **)(lVar1 + 0x1d8) = pvVar5;
  }
  return;
}

// CanBuildTool @ 14ccebc20

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
ULatticeDeformerToolBuilder::CanBuildTool
          (ULatticeDeformerToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  
  cVar3 = (**(code **)(*(longlong *)this + 0x2e8))();
  if (cVar3 != '\0') {
    bVar4 = UE::Geometry::HaveAvailableGeometrySelection(param_1);
    if (!bVar4) {
      return false;
    }
  }
  pUVar1 = param_1->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d8);
  uVar6 = (**(code **)(*(longlong *)this + 0x2d0))(this);
  iVar5 = (*pcVar2)(pUVar1,param_1,uVar6);
  return iVar5 == 1;
}

// CreateNewTool @ 14ccf5450

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

UMultiTargetWithSelectionTool * __thiscall
ULatticeDeformerToolBuilder::CreateNewTool
          (ULatticeDeformerToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UToolTargetManager *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  UMultiTargetWithSelectionTool *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_f8 [32];
  UMultiTargetWithSelectionTool *local_c8;
  UMultiTargetWithSelectionTool **local_c0;
  code *local_b8;
  UMultiTargetWithSelectionTool ***local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = ULatticeDeformerTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = pUVar1;
  local_c8 = (UMultiTargetWithSelectionTool *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8 != (UMultiTargetWithSelectionTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  pUVar2 = param_1->TargetManager;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2d8);
  uVar7 = (**(code **)(*(longlong *)this + 0x2d0))(this);
  iVar5 = (*pcVar3)(pUVar2,param_1,uVar7);
  if (iVar5 != 1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3348314542131117960>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\LatticeDeformerTool.cpp"
                       ,0x78,
                       "SceneState.TargetManager->CountSelectedAndTargetable(SceneState, GetTargetRequirements()) == 1"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UMultiTargetWithSelectionTool *)(*pcVar3)();
      return pUVar8;
    }
  }
  pUVar2 = param_1->TargetManager;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2e0);
  local_c0 = &local_c8;
  local_b0 = &local_c0;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULatticeDeformerToolBuilder::CreateNewTool'::__l2::<lambda_1>,void,UActorComponent_*>
             ::Call;
  uVar7 = (**(code **)(*(longlong *)this + 0x2d0))(this);
  (*pcVar3)(pUVar2,param_1,uVar7,&local_b8);
  return local_c8;
}

// GetPrivateStaticClass @ 14ccff780

UClass * __cdecl ULatticeDeformerToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerToolBuilder",
               &Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.InnerSingleton,
               StaticRegisterNativesULatticeDeformerToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeDeformerToolBuilder>,
               InternalVTableHelperCtorCaller<ULatticeDeformerToolBuilder>,local_res8,
               UMultiTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14cd024a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
ULatticeDeformerToolBuilder::GetTargetRequirements(ULatticeDeformerToolBuilder *this)

{
  ForAnyElementType _Src;
  int iVar1;
  FToolTargetTypeRequirements *_Dst;
  longlong lVar2;
  undefined1 auStackY_88 [32];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  UClass *local_38;
  UClass *pUStack_30;
  UClass *local_28;
  UClass *pUStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_38 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    pUStack_30 = Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
    local_28 = Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
    pUStack_20 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    local_40 = 4;
    local_48.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,0,&local_48,4,&local_3c);
    iVar1 = local_40;
    _Src.Data = local_48.Data;
    *(UClass **)local_48.Data = local_38;
    *(UClass **)(local_48.Data + 8) = pUStack_30;
    *(UClass **)(local_48.Data + 0x10) = local_28;
    *(UClass **)(local_48.Data + 0x18) = pUStack_20;
    lVar2 = (longlong)local_40;
    TypeRequirements.Interfaces.AllocatorInstance.SecondaryData =
         (ForElementType<UClass_const_*>)0x0;
    TypeRequirements.Interfaces.ArrayMax = 5;
    TypeRequirements.Interfaces.ArrayNum = local_40;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
              (8,8,local_40,5,(ForElementType<UClass_const_*> *)&TypeRequirements,local_40,
               &TypeRequirements.Interfaces.ArrayMax);
    _Dst = &TypeRequirements;
    if (TypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
        (ForElementType<UClass_const_*>)0x0) {
      _Dst = (FToolTargetTypeRequirements *)
             TypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
    }
    if (iVar1 != 0) {
      memcpy(_Dst,_Src.Data,lVar2 << 3);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    atexit(`ULatticeDeformerToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// RequiresInputSelection @ 14cd1c340

bool __thiscall
ULatticeDeformerToolBuilder::RequiresInputSelection(ULatticeDeformerToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesULatticeDeformerToolBuilder @ 14cd2eed0

void __cdecl ULatticeDeformerToolBuilder::StaticRegisterNativesULatticeDeformerToolBuilder(void)

{
  return;
}

