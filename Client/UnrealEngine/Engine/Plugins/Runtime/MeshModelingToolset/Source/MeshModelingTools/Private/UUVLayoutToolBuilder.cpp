// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cd420b0

UClass * __cdecl UUVLayoutToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVLayoutToolBuilder",
               &Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton,
               StaticRegisterNativesUUVLayoutToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutToolBuilder>,
               InternalVTableHelperCtorCaller<UUVLayoutToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton;
}

// UUVLayoutToolBuilder @ 14cd51870

UUVLayoutToolBuilder * __thiscall
UUVLayoutToolBuilder::UUVLayoutToolBuilder(UUVLayoutToolBuilder *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UUVLayoutToolBuilder__6B_;
  return this;
}

// UUVLayoutToolBuilder @ 14cd518a0

UUVLayoutToolBuilder * __thiscall
UUVLayoutToolBuilder::UUVLayoutToolBuilder(UUVLayoutToolBuilder *this,FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UUVLayoutToolBuilder__6B_;
  return this;
}

// ~UUVLayoutToolBuilder @ 14cd539a0

void __thiscall UUVLayoutToolBuilder::~UUVLayoutToolBuilder(UUVLayoutToolBuilder *this)

{
  *(undefined ***)this = &___7UUVLayoutToolBuilder__6B_;
  UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this);
  return;
}

// CanBuildTool @ 14cd63130

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
UUVLayoutToolBuilder::CanBuildTool(UUVLayoutToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  code *local_18;
  undefined1 *local_10;
  
  bVar3 = UMultiSelectionMeshEditingToolBuilder::CanBuildTool
                    ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  if (bVar3) {
    pUVar1 = param_1->TargetManager;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e8);
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUVLayoutToolBuilder::CanBuildTool'::__l2::<lambda_1>,bool,UActorComponent_&>
               ::Call;
    uVar5 = (**(code **)(*(longlong *)this + 0x2d0))(this);
    iVar4 = (*pcVar2)(pUVar1,param_1,uVar5,&local_18);
    if (0 < iVar4) {
      return true;
    }
  }
  return false;
}

// CreateNewTool @ 14cd67d50

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

UMultiSelectionMeshEditingTool * __thiscall
UUVLayoutToolBuilder::CreateNewTool(UUVLayoutToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UMultiSelectionMeshEditingTool *pUVar3;
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
  pUVar2 = UUVLayoutTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMultiSelectionMeshEditingTool *)
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

// GetPrivateStaticClass @ 14cd6e8e0

UClass * __cdecl UUVLayoutToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVLayoutToolBuilder",
               &Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton,
               StaticRegisterNativesUUVLayoutToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutToolBuilder>,
               InternalVTableHelperCtorCaller<UUVLayoutToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14cd6f6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UUVLayoutToolBuilder::GetTargetRequirements(UUVLayoutToolBuilder *this)

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
    pUStack_30 = Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
    local_28 = Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
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
    atexit(`UUVLayoutToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// StaticRegisterNativesUUVLayoutToolBuilder @ 14cd81520

void __cdecl UUVLayoutToolBuilder::StaticRegisterNativesUUVLayoutToolBuilder(void)

{
  return;
}

