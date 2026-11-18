// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14ca3fb60

UClass * __cdecl UBaseMeshProcessingToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseMeshProcessingToolBuilder",
               &Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.InnerSingleton,
               StaticRegisterNativesUBaseMeshProcessingToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseMeshProcessingToolBuilder>,
               InternalVTableHelperCtorCaller<UBaseMeshProcessingToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.InnerSingleton;
}

// UBaseMeshProcessingToolBuilder @ 14ca67750

UBaseMeshProcessingToolBuilder * __thiscall
UBaseMeshProcessingToolBuilder::UBaseMeshProcessingToolBuilder
          (UBaseMeshProcessingToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UBaseMeshProcessingToolBuilder__6B_;
  return this;
}

// UBaseMeshProcessingToolBuilder @ 14ca67780

UBaseMeshProcessingToolBuilder * __thiscall
UBaseMeshProcessingToolBuilder::UBaseMeshProcessingToolBuilder
          (UBaseMeshProcessingToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UBaseMeshProcessingToolBuilder__6B_;
  return this;
}

// ~UBaseMeshProcessingToolBuilder @ 14ca6b4c0

void __thiscall
UBaseMeshProcessingToolBuilder::~UBaseMeshProcessingToolBuilder
          (UBaseMeshProcessingToolBuilder *this)

{
  *(undefined ***)this = &___7USingleTargetWithSelectionToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// CanBuildTool @ 14ca7d780

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
UBaseMeshProcessingToolBuilder::CanBuildTool
          (UBaseMeshProcessingToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pUVar1 = param_1->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d8);
  uVar4 = (**(code **)(*(longlong *)this + 0x2d0))();
  iVar3 = (*pcVar2)(pUVar1,param_1,uVar4);
  return iVar3 == 1;
}

// CreateNewTool @ 14ca854a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USingleTargetWithSelectionTool * __thiscall
UBaseMeshProcessingToolBuilder::CreateNewTool
          (UBaseMeshProcessingToolBuilder *this,FToolBuilderState *param_1)

{
  USingleTargetWithSelectionTool *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca854a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (USingleTargetWithSelectionTool *)
           (**(code **)(*(longlong *)this + 0x2f0))(this,param_1->ToolManager);
  return pUVar1;
}

// GetPrivateStaticClass @ 14ca90f00

UClass * __cdecl UBaseMeshProcessingToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseMeshProcessingToolBuilder",
               &Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.InnerSingleton,
               StaticRegisterNativesUBaseMeshProcessingToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseMeshProcessingToolBuilder>,
               InternalVTableHelperCtorCaller<UBaseMeshProcessingToolBuilder>,local_res8,
               USingleTargetWithSelectionToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14ca92cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UBaseMeshProcessingToolBuilder::GetTargetRequirements(UBaseMeshProcessingToolBuilder *this)

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
    atexit(`UBaseMeshProcessingToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// MakeNewToolInstance @ 14ca98850

UBaseMeshProcessingTool * __thiscall
UBaseMeshProcessingToolBuilder::MakeNewToolInstance
          (UBaseMeshProcessingToolBuilder *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UBaseMeshProcessingTool *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\BaseMeshProcessingTool.h"
                     ,0x29,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UBaseMeshProcessingTool *)(*pcVar1)();
    return pUVar3;
  }
  return (UBaseMeshProcessingTool *)0x0;
}

// RequiresInputSelection @ 14caa0150

bool __thiscall
UBaseMeshProcessingToolBuilder::RequiresInputSelection(UBaseMeshProcessingToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesUBaseMeshProcessingToolBuilder @ 14caa70d0

void __cdecl
UBaseMeshProcessingToolBuilder::StaticRegisterNativesUBaseMeshProcessingToolBuilder(void)

{
  return;
}

