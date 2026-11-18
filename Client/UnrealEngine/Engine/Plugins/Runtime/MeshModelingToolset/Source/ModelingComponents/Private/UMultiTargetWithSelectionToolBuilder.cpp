// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14ca40970

UClass * __cdecl UMultiTargetWithSelectionToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTargetWithSelectionToolBuilder",
               &Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.InnerSingleton,
               StaticRegisterNativesUMultiTargetWithSelectionToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiTargetWithSelectionToolBuilder>,
               InternalVTableHelperCtorCaller<UMultiTargetWithSelectionToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.InnerSingleton;
}

// UMultiTargetWithSelectionToolBuilder @ 14ca685e0

UMultiTargetWithSelectionToolBuilder * __thiscall
UMultiTargetWithSelectionToolBuilder::UMultiTargetWithSelectionToolBuilder
          (UMultiTargetWithSelectionToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UMultiTargetWithSelectionToolBuilder__6B_;
  return this;
}

// UMultiTargetWithSelectionToolBuilder @ 14ca68610

UMultiTargetWithSelectionToolBuilder * __thiscall
UMultiTargetWithSelectionToolBuilder::UMultiTargetWithSelectionToolBuilder
          (UMultiTargetWithSelectionToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UMultiTargetWithSelectionToolBuilder__6B_;
  return this;
}

// ~UMultiTargetWithSelectionToolBuilder @ 14ca6b900

void __thiscall
UMultiTargetWithSelectionToolBuilder::~UMultiTargetWithSelectionToolBuilder
          (UMultiTargetWithSelectionToolBuilder *this)

{
  *(undefined ***)this = &___7UMultiTargetWithSelectionToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// BuildTool @ 14ca7aae0

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
UMultiTargetWithSelectionToolBuilder::BuildTool
          (UMultiTargetWithSelectionToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (UInteractiveTool *)(**(code **)(*(longlong *)this + 0x2d8))();
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar1,param_1);
  return pUVar1;
}

// CanBuildTool @ 14ca7d820

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
UMultiTargetWithSelectionToolBuilder::CanBuildTool
          (UMultiTargetWithSelectionToolBuilder *this,FToolBuilderState *param_1)

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
  return 0 < iVar5;
}

// CreateNewTool @ 14ca85590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMultiTargetWithSelectionTool * __thiscall
UMultiTargetWithSelectionToolBuilder::CreateNewTool
          (UMultiTargetWithSelectionToolBuilder *this,FToolBuilderState *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\MultiTargetWithSelectionTool.h"
             ,0x27,L"Pure virtual not implemented (%s)");
  return (UMultiTargetWithSelectionTool *)0x0;
}

// GetPrivateStaticClass @ 14ca91d30

UClass * __cdecl UMultiTargetWithSelectionToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTargetWithSelectionToolBuilder",
               &Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.InnerSingleton,
               StaticRegisterNativesUMultiTargetWithSelectionToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiTargetWithSelectionToolBuilder>,
               InternalVTableHelperCtorCaller<UMultiTargetWithSelectionToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14ca931f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
UMultiTargetWithSelectionToolBuilder::GetTargetRequirements
          (UMultiTargetWithSelectionToolBuilder *this)

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
    pUStack_30 = Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
    local_28 = Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
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
    atexit(`UMultiTargetWithSelectionToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 14ca96710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMultiTargetWithSelectionToolBuilder::InitializeNewTool
          (UMultiTargetWithSelectionToolBuilder *this,UMultiTargetWithSelectionTool *param_1,
          FToolBuilderState *param_2)

{
  longlong *plVar1;
  UToolTargetManager *pUVar2;
  code *pcVar3;
  TObjectPtr<UToolTarget> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  FGeometrySelection *pFVar13;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArray<UE::Geometry::FGeometrySelection,TSizedDefaultAllocator<32>_> local_58;
  TObjectPtr<UToolTarget> *local_48;
  ulonglong local_40;
  
  pUVar2 = param_2->TargetManager;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2f8);
  (**(code **)(*(longlong *)this + 0x2d0))();
  (*pcVar3)(pUVar2,&local_48,param_2);
  iVar11 = (int)local_40;
  (**(code **)(param_1->_padding_ + 0x3e0))(param_1,local_40 & 0xffffffff);
  pTVar4 = local_48;
  uVar9 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  iVar7 = (int)local_40;
  local_60 = CONCAT44(local_60._4_4_,iVar7);
  if (iVar7 == 0) {
    local_60 = local_40 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&local_68,iVar7,(int *)((longlong)&local_60 + 4));
    ConstructItems<TObjectPtr<UToolTarget>,TObjectPtr<UToolTarget>,int>(local_68.Data,pTVar4,iVar7);
  }
  plVar1 = &param_1->_padding_;
  if ((ForAnyElementType *)plVar1 != &local_68) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_68.Data;
    *(undefined4 *)&param_1->_padding_ = (undefined4)local_60;
    local_68.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_60._4_4_;
    local_60 = 0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  (**(code **)(param_1->_padding_ + 0x3a8))(param_1,param_2->World);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<UE::Geometry::FGeometrySelection,TSizedDefaultAllocator<32>_>::SetNum
            (&local_58,iVar11,Default);
  uVar10 = uVar9;
  if (0 < iVar11) {
    do {
      uVar8 = (uint)uVar9;
      uVar12 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < local_58.ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (FGeometrySelection *)
                (local_58.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x58);
      uVar6 = 0;
      if ((int)uVar8 < (int)local_40) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar5 = UE::Geometry::GetCurrentGeometrySelectionForTarget
                        (param_2,local_48[uVar10].field0_0x0.DebugPtr,pFVar13);
      if (bVar5) {
        pcVar3 = *(code **)(param_1->_padding_ + 0x3b8);
        uVar6 = 0;
        if ((int)uVar8 < local_58.ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*pcVar3)(param_1,local_58.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x58,uVar9);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar11);
  }
  DestructItems<UE::Geometry::FGeometrySelection,int>
            ((FGeometrySelection *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FGeometrySelection *)local_58.AllocatorInstance.Data != (FGeometrySelection *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48 != (TObjectPtr<UToolTarget> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// RequiresInputSelection @ 14caa0160

bool __thiscall
UMultiTargetWithSelectionToolBuilder::RequiresInputSelection
          (UMultiTargetWithSelectionToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesUMultiTargetWithSelectionToolBuilder @ 14caa7230

void __cdecl
UMultiTargetWithSelectionToolBuilder::StaticRegisterNativesUMultiTargetWithSelectionToolBuilder
          (void)

{
  return;
}

