// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14ca40ce0

UClass * __cdecl UMultiSelectionMeshEditingToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiSelectionMeshEditingToolBuilder",
               &Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.InnerSingleton,
               StaticRegisterNativesUMultiSelectionMeshEditingToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiSelectionMeshEditingToolBuilder>,
               InternalVTableHelperCtorCaller<UMultiSelectionMeshEditingToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.InnerSingleton;
}

// UMultiSelectionMeshEditingToolBuilder @ 14ca68460

UMultiSelectionMeshEditingToolBuilder * __thiscall
UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
          (UMultiSelectionMeshEditingToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UMultiSelectionMeshEditingToolBuilder__6B_;
  return this;
}

// UMultiSelectionMeshEditingToolBuilder @ 14ca68490

UMultiSelectionMeshEditingToolBuilder * __thiscall
UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
          (UMultiSelectionMeshEditingToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UMultiSelectionMeshEditingToolBuilder__6B_;
  return this;
}

// ~UMultiSelectionMeshEditingToolBuilder @ 14ca6b860

void __thiscall
UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
          (UMultiSelectionMeshEditingToolBuilder *this)

{
  *(undefined ***)this = &___7UMultiSelectionMeshEditingToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// BuildTool @ 14ca7aa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveTool * __thiscall
UMultiSelectionMeshEditingToolBuilder::BuildTool
          (UMultiSelectionMeshEditingToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (UInteractiveTool *)(**(code **)(*(longlong *)this + 0x2d8))();
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar1,param_1);
  return pUVar1;
}

// CanBuildTool @ 14ca7d7d0

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
UMultiSelectionMeshEditingToolBuilder::CanBuildTool
          (UMultiSelectionMeshEditingToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pUVar1 = param_1->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d8);
  uVar4 = (**(code **)(*(longlong *)this + 0x2d0))();
  iVar3 = (*pcVar2)(pUVar1,param_1,uVar4);
  return 0 < iVar3;
}

// CreateNewTool @ 14ca85560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMultiSelectionMeshEditingTool * __thiscall
UMultiSelectionMeshEditingToolBuilder::CreateNewTool
          (UMultiSelectionMeshEditingToolBuilder *this,FToolBuilderState *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\MultiSelectionMeshEditingTool.h"
             ,0x1f,L"Pure virtual not implemented (%s)");
  return (UMultiSelectionMeshEditingTool *)0x0;
}

// GetPrivateStaticClass @ 14ca91bb0

UClass * __cdecl UMultiSelectionMeshEditingToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiSelectionMeshEditingToolBuilder",
               &Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.InnerSingleton,
               StaticRegisterNativesUMultiSelectionMeshEditingToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiSelectionMeshEditingToolBuilder>,
               InternalVTableHelperCtorCaller<UMultiSelectionMeshEditingToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14ca93030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UMultiSelectionMeshEditingToolBuilder::GetTargetRequirements
          (UMultiSelectionMeshEditingToolBuilder *this)

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
    pUStack_30 = UDynamicMeshCommitter::StaticClass();
    local_28 = Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
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
    atexit(`UMultiSelectionMeshEditingToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 14ca965e0

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
UMultiSelectionMeshEditingToolBuilder::InitializeNewTool
          (UMultiSelectionMeshEditingToolBuilder *this,UMultiSelectionMeshEditingTool *param_1,
          FToolBuilderState *param_2)

{
  longlong *plVar1;
  UToolTargetManager *pUVar2;
  code *pcVar3;
  TObjectPtr<UToolTarget> *pTVar4;
  int iVar5;
  ForAnyElementType local_28;
  undefined8 local_20;
  TObjectPtr<UToolTarget> *local_18;
  ulonglong local_10;
  
  pUVar2 = param_2->TargetManager;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2f8);
  (**(code **)(*(longlong *)this + 0x2d0))();
  (*pcVar3)(pUVar2,&local_18,param_2);
  pTVar4 = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar5 = (int)local_10;
  local_20 = CONCAT44(local_20._4_4_,iVar5);
  if (iVar5 == 0) {
    local_20 = local_10 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&local_28,iVar5,(int *)((longlong)&local_20 + 4));
    ConstructItems<TObjectPtr<UToolTarget>,TObjectPtr<UToolTarget>,int>(local_28.Data,pTVar4,iVar5);
  }
  plVar1 = &param_1->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_28) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_28.Data;
    *(undefined4 *)&param_1->_padding_ = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  (**(code **)(param_1->_padding_ + 0x3a8))(param_1,param_2->World);
  if (local_18 != (TObjectPtr<UToolTarget> *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// StaticRegisterNativesUMultiSelectionMeshEditingToolBuilder @ 14caa7210

void __cdecl
UMultiSelectionMeshEditingToolBuilder::StaticRegisterNativesUMultiSelectionMeshEditingToolBuilder
          (void)

{
  return;
}

