// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// StaticClass @ 14ca404f0

UClass * __cdecl UMeshSurfacePointMeshEditingToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshSurfacePointMeshEditingToolBuilder",
               &Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshSurfacePointMeshEditingToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSurfacePointMeshEditingToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointMeshEditingToolBuilder>,local_res8,
               UMeshSurfacePointToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.InnerSingleton;
}

// UMeshSurfacePointMeshEditingToolBuilder @ 14ca68030

UMeshSurfacePointMeshEditingToolBuilder * __thiscall
UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
          (UMeshSurfacePointMeshEditingToolBuilder *this,FVTableHelper *param_1)

{
  UMeshSurfacePointToolBuilder::UMeshSurfacePointToolBuilder
            ((UMeshSurfacePointToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UMeshSurfacePointMeshEditingToolBuilder__6B_;
  return this;
}

// UMeshSurfacePointMeshEditingToolBuilder @ 14ca68060

UMeshSurfacePointMeshEditingToolBuilder * __thiscall
UMeshSurfacePointMeshEditingToolBuilder::UMeshSurfacePointMeshEditingToolBuilder
          (UMeshSurfacePointMeshEditingToolBuilder *this,FObjectInitializer *param_1)

{
  UMeshSurfacePointToolBuilder::UMeshSurfacePointToolBuilder
            ((UMeshSurfacePointToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UMeshSurfacePointMeshEditingToolBuilder__6B_;
  return this;
}

// ~UMeshSurfacePointMeshEditingToolBuilder @ 14ca6b780

void __thiscall
UMeshSurfacePointMeshEditingToolBuilder::~UMeshSurfacePointMeshEditingToolBuilder
          (UMeshSurfacePointMeshEditingToolBuilder *this)

{
  *(undefined ***)this = &___7UMeshSurfacePointMeshEditingToolBuilder__6B_;
  UMeshSurfacePointToolBuilder::~UMeshSurfacePointToolBuilder((UMeshSurfacePointToolBuilder *)this);
  return;
}

// CreateNewTool @ 14ca854c0

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

UMeshSurfacePointTool * __thiscall
UMeshSurfacePointMeshEditingToolBuilder::CreateNewTool
          (UMeshSurfacePointMeshEditingToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UMeshSurfacePointTool *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UMeshSurfacePointTool_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMeshSurfacePointTool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14ca918b0

UClass * __cdecl UMeshSurfacePointMeshEditingToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshSurfacePointMeshEditingToolBuilder",
               &Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.InnerSingleton,
               StaticRegisterNativesUMeshSurfacePointMeshEditingToolBuilder,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSurfacePointMeshEditingToolBuilder>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointMeshEditingToolBuilder>,local_res8,
               UMeshSurfacePointToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointMeshEditingToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14ca92e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UMeshSurfacePointMeshEditingToolBuilder::GetTargetRequirements
          (UMeshSurfacePointMeshEditingToolBuilder *this)

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
    local_28 = UDynamicMeshCommitter::StaticClass();
    pUStack_20 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
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
    atexit(`UMeshSurfacePointMeshEditingToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// StaticRegisterNativesUMeshSurfacePointMeshEditingToolBuilder @ 14caa71d0

void __cdecl
UMeshSurfacePointMeshEditingToolBuilder::
StaticRegisterNativesUMeshSurfacePointMeshEditingToolBuilder(void)

{
  return;
}

