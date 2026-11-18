// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14ca3f7a0

UClass * __cdecl USingleSelectionMeshEditingToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleSelectionMeshEditingToolBuilder",
               &Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.InnerSingleton,
               StaticRegisterNativesUSingleSelectionMeshEditingToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleSelectionMeshEditingToolBuilder>,
               InternalVTableHelperCtorCaller<USingleSelectionMeshEditingToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.InnerSingleton;
}

// USingleSelectionMeshEditingToolBuilder @ 14ca68e80

USingleSelectionMeshEditingToolBuilder * __thiscall
USingleSelectionMeshEditingToolBuilder::USingleSelectionMeshEditingToolBuilder
          (USingleSelectionMeshEditingToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7USingleSelectionMeshEditingToolBuilder__6B_;
  return this;
}

// USingleSelectionMeshEditingToolBuilder @ 14ca68eb0

USingleSelectionMeshEditingToolBuilder * __thiscall
USingleSelectionMeshEditingToolBuilder::USingleSelectionMeshEditingToolBuilder
          (USingleSelectionMeshEditingToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7USingleSelectionMeshEditingToolBuilder__6B_;
  return this;
}

// ~USingleSelectionMeshEditingToolBuilder @ 14ca6bbb0

void __thiscall
USingleSelectionMeshEditingToolBuilder::~USingleSelectionMeshEditingToolBuilder
          (USingleSelectionMeshEditingToolBuilder *this)

{
  *(undefined ***)this = &___7USingleSelectionMeshEditingToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// BuildTool @ 14ca7ab30

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
USingleSelectionMeshEditingToolBuilder::BuildTool
          (USingleSelectionMeshEditingToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (UInteractiveTool *)(**(code **)(*(longlong *)this + 0x2d8))();
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar1,param_1);
  return pUVar1;
}

// CanBuildTool @ 14ca7d8b0

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
USingleSelectionMeshEditingToolBuilder::CanBuildTool
          (USingleSelectionMeshEditingToolBuilder *this,FToolBuilderState *param_1)

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

// CreateNewTool @ 14ca855c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USingleSelectionMeshEditingTool * __thiscall
USingleSelectionMeshEditingToolBuilder::CreateNewTool
          (USingleSelectionMeshEditingToolBuilder *this,FToolBuilderState *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\SingleSelectionMeshEditingTool.h"
             ,0x1f,L"Pure virtual not implemented (%s)");
  return (USingleSelectionMeshEditingTool *)0x0;
}

// GetPrivateStaticClass @ 14ca920f0

UClass * __cdecl USingleSelectionMeshEditingToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleSelectionMeshEditingToolBuilder",
               &Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.InnerSingleton,
               StaticRegisterNativesUSingleSelectionMeshEditingToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleSelectionMeshEditingToolBuilder>,
               InternalVTableHelperCtorCaller<USingleSelectionMeshEditingToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14ca933b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
USingleSelectionMeshEditingToolBuilder::GetTargetRequirements
          (USingleSelectionMeshEditingToolBuilder *this)

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
    atexit(`USingleSelectionMeshEditingToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 14ca969f0

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
USingleSelectionMeshEditingToolBuilder::InitializeNewTool
          (USingleSelectionMeshEditingToolBuilder *this,USingleSelectionMeshEditingTool *param_1,
          FToolBuilderState *param_2)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  pUVar1 = param_2->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2f0);
  uVar4 = (**(code **)(*(longlong *)this + 0x2d0))();
  lVar5 = (*pcVar2)(pUVar1,param_2,uVar4);
  if (lVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\SingleSelectionMeshEditingTool.cpp"
                       ,0x2d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0x398))(param_1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00014ca96a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x3b8))(param_1,param_2->World);
  return;
}

// StaticRegisterNativesUSingleSelectionMeshEditingToolBuilder @ 14caa72e0

void __cdecl
USingleSelectionMeshEditingToolBuilder::StaticRegisterNativesUSingleSelectionMeshEditingToolBuilder
          (void)

{
  return;
}

