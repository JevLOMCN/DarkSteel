// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cbd13f0

UClass * __cdecl UCombineMeshesToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesToolBuilder",
               &Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton,
               StaticRegisterNativesUCombineMeshesToolBuilder,0x30,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UCombineMeshesToolBuilder>,
               InternalVTableHelperCtorCaller<UCombineMeshesToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton;
}

// UCombineMeshesToolBuilder @ 14cbdce50

UCombineMeshesToolBuilder * __thiscall
UCombineMeshesToolBuilder::UCombineMeshesToolBuilder
          (UCombineMeshesToolBuilder *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  this->bIsDuplicateTool = false;
  this->_padding_ = (longlong)&___7UCombineMeshesToolBuilder__6B_;
  return this;
}

// UCombineMeshesToolBuilder @ 14cbdce80

UCombineMeshesToolBuilder * __thiscall
UCombineMeshesToolBuilder::UCombineMeshesToolBuilder
          (UCombineMeshesToolBuilder *this,FObjectInitializer *param_1)

{
  UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this,param_1);
  this->bIsDuplicateTool = false;
  this->_padding_ = (longlong)&___7UCombineMeshesToolBuilder__6B_;
  return this;
}

// ~UCombineMeshesToolBuilder @ 14cbe0130

void __thiscall
UCombineMeshesToolBuilder::~UCombineMeshesToolBuilder(UCombineMeshesToolBuilder *this)

{
  this->_padding_ = (longlong)&___7UCombineMeshesToolBuilder__6B_;
  UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder
            ((UMultiSelectionMeshEditingToolBuilder *)this);
  return;
}

// CanBuildTool @ 14cbe8420

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
UCombineMeshesToolBuilder::CanBuildTool(UCombineMeshesToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  pUVar1 = param_1->TargetManager;
  lVar2 = pUVar1->_padding_;
  if (this->bIsDuplicateTool != false) {
    uVar4 = (**(code **)(this->_padding_ + 0x2d0))();
    iVar3 = (**(code **)(lVar2 + 0x2d8))(pUVar1,param_1,uVar4);
    return iVar3 == 1;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x2d0))();
  iVar3 = (**(code **)(lVar2 + 0x2d8))(pUVar1,param_1,uVar4);
  return 1 < iVar3;
}

// CreateNewTool @ 14cbead70

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
UCombineMeshesToolBuilder::CreateNewTool(UCombineMeshesToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = UCombineMeshesTool::StaticClass();
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
  (**(code **)(pUVar3->_padding_ + 0x3b8))(pUVar3,this->bIsDuplicateTool);
  return pUVar3;
}

// GetPrivateStaticClass @ 14cbef2c0

UClass * __cdecl UCombineMeshesToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesToolBuilder",
               &Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton,
               StaticRegisterNativesUCombineMeshesToolBuilder,0x30,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UCombineMeshesToolBuilder>,
               InternalVTableHelperCtorCaller<UCombineMeshesToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14cbf1d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UCombineMeshesToolBuilder::GetTargetRequirements(UCombineMeshesToolBuilder *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  FToolTargetTypeRequirements *pFVar3;
  FToolTargetTypeRequirements *pFVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStackY_98 [32];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  UClass *local_48;
  UClass *pUStack_40;
  UClass *local_38;
  UClass *pUStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar4 = &CombineTypeRequirements;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_48 = Z_Construct_UClass_UMaterialProvider_NoRegister();
      pUStack_40 = Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
      local_38 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
      pUStack_30 = Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 4;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,4,0,&local_58,4,&local_4c);
      iVar2 = local_50;
      FVar1.Data = local_58.Data;
      *(UClass **)local_58.Data = local_48;
      *(UClass **)(local_58.Data + 8) = pUStack_40;
      *(UClass **)(local_58.Data + 0x10) = local_38;
      *(UClass **)(local_58.Data + 0x18) = pUStack_30;
      lVar6 = (longlong)local_50;
      CombineTypeRequirements.Interfaces.AllocatorInstance.SecondaryData =
           (ForElementType<UClass_const_*>)0x0;
      CombineTypeRequirements.Interfaces.ArrayMax = 5;
      CombineTypeRequirements.Interfaces.ArrayNum = local_50;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
                (8,8,local_50,5,(ForElementType<UClass_const_*> *)&CombineTypeRequirements,local_50,
                 &CombineTypeRequirements.Interfaces.ArrayMax);
      pFVar3 = &CombineTypeRequirements;
      if (CombineTypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
          (ForElementType<UClass_const_*>)0x0) {
        pFVar3 = (FToolTargetTypeRequirements *)
                 CombineTypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
      }
      if (iVar2 != 0) {
        memcpy(pFVar3,FVar1.Data,lVar6 << 3);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      atexit(`UCombineMeshesToolBuilder::GetTargetRequirements'::__l2::
             _dynamic_atexit_destructor_for__CombineTypeRequirements__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      local_48 = Z_Construct_UClass_UMaterialProvider_NoRegister();
      pUStack_40 = Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
      local_38 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,3,0,&local_58,3,&local_4c);
      iVar2 = local_50;
      FVar1.Data = local_58.Data;
      *(UClass **)local_58.Data = local_48;
      *(UClass **)(local_58.Data + 8) = pUStack_40;
      *(UClass **)(local_58.Data + 0x10) = local_38;
      lVar6 = (longlong)local_50;
      DuplicateTypeRequirements.Interfaces.AllocatorInstance.SecondaryData =
           (ForElementType<UClass_const_*>)0x0;
      DuplicateTypeRequirements.Interfaces.ArrayMax = 5;
      DuplicateTypeRequirements.Interfaces.ArrayNum = local_50;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
                (8,8,local_50,5,(ForElementType<UClass_const_*> *)&DuplicateTypeRequirements,
                 local_50,&DuplicateTypeRequirements.Interfaces.ArrayMax);
      pFVar3 = &DuplicateTypeRequirements;
      if (DuplicateTypeRequirements.Interfaces.AllocatorInstance.SecondaryData !=
          (ForElementType<UClass_const_*>)0x0) {
        pFVar3 = (FToolTargetTypeRequirements *)
                 DuplicateTypeRequirements.Interfaces.AllocatorInstance.SecondaryData;
      }
      if (iVar2 != 0) {
        memcpy(pFVar3,FVar1.Data,lVar6 << 3);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      atexit(`UCombineMeshesToolBuilder::GetTargetRequirements'::__l2::
             _dynamic_atexit_destructor_for__DuplicateTypeRequirements__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (this->bIsDuplicateTool != false) {
    pFVar4 = &DuplicateTypeRequirements;
  }
  return pFVar4;
}

// StaticRegisterNativesUCombineMeshesToolBuilder @ 14cbf6aa0

void __cdecl UCombineMeshesToolBuilder::StaticRegisterNativesUCombineMeshesToolBuilder(void)

{
  return;
}

