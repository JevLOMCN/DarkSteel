// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14ca3f5f0

UClass * __cdecl USingleTargetWithSelectionToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleTargetWithSelectionToolBuilder",
               &Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.InnerSingleton,
               StaticRegisterNativesUSingleTargetWithSelectionToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleTargetWithSelectionToolBuilder>,
               InternalVTableHelperCtorCaller<USingleTargetWithSelectionToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.InnerSingleton;
}

// USingleTargetWithSelectionToolBuilder @ 14ca69080

USingleTargetWithSelectionToolBuilder * __thiscall
USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
          (USingleTargetWithSelectionToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7USingleTargetWithSelectionToolBuilder__6B_;
  return this;
}

// USingleTargetWithSelectionToolBuilder @ 14ca690b0

USingleTargetWithSelectionToolBuilder * __thiscall
USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder
          (USingleTargetWithSelectionToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7USingleTargetWithSelectionToolBuilder__6B_;
  return this;
}

// ~USingleTargetWithSelectionToolBuilder @ 14ca6bc40

void __thiscall
USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder
          (USingleTargetWithSelectionToolBuilder *this)

{
  *(undefined ***)this = &___7USingleTargetWithSelectionToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// BuildTool @ 14ca7ab80

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
USingleTargetWithSelectionToolBuilder::BuildTool
          (USingleTargetWithSelectionToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (UInteractiveTool *)(**(code **)(*(longlong *)this + 0x2d8))();
  (**(code **)(*(longlong *)this + 0x2e0))(this,pUVar1,param_1);
  return pUVar1;
}

// CanBuildTool @ 14ca7d900

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
USingleTargetWithSelectionToolBuilder::CanBuildTool
          (USingleTargetWithSelectionToolBuilder *this,FToolBuilderState *param_1)

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

// CreateNewTool @ 14ca855f0

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
USingleTargetWithSelectionToolBuilder::CreateNewTool
          (USingleTargetWithSelectionToolBuilder *this,FToolBuilderState *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\BaseTools\\SingleTargetWithSelectionTool.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  return (USingleTargetWithSelectionTool *)0x0;
}

// GetPrivateStaticClass @ 14ca92270

UClass * __cdecl USingleTargetWithSelectionToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleTargetWithSelectionToolBuilder",
               &Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.InnerSingleton,
               StaticRegisterNativesUSingleTargetWithSelectionToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleTargetWithSelectionToolBuilder>,
               InternalVTableHelperCtorCaller<USingleTargetWithSelectionToolBuilder>,local_res8,
               UInteractiveToolWithToolTargetsBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.InnerSingleton;
}

// GetTargetRequirements @ 14ca93570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolTargetTypeRequirements * __thiscall
USingleTargetWithSelectionToolBuilder::GetTargetRequirements
          (USingleTargetWithSelectionToolBuilder *this)

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
    atexit(`USingleTargetWithSelectionToolBuilder::GetTargetRequirements'::__l2::
           _dynamic_atexit_destructor_for__TypeRequirements__);
    _Init_thread_footer(&::_TSS0);
  }
  return &TypeRequirements;
}

// InitializeNewTool @ 14ca96aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USingleTargetWithSelectionToolBuilder::InitializeNewTool
          (USingleTargetWithSelectionToolBuilder *this,USingleTargetWithSelectionTool *param_1,
          FToolBuilderState *param_2)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  UToolTarget *pUVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pUVar1 = param_2->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2f0);
  uVar6 = (**(code **)(*(longlong *)this + 0x2d0))();
  pUVar7 = (UToolTarget *)(*pcVar2)(pUVar1,param_2,uVar6);
  if (pUVar7 == (UToolTarget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\SingleTargetWithSelectionTool.cpp"
                       ,0x3a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(param_1->_padding_ + 0x398))(param_1,pUVar7);
  (**(code **)(param_1->_padding_ + 0x3b8))(param_1,param_2->World);
  local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_80.MaxBits = _UNK_150631d94;
  uStack_60 = _UNK_150631d98;
  local_98._0_4_ = Face;
  local_98._4_4_ = Triangle;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  bVar5 = UE::Geometry::GetCurrentGeometrySelectionForTarget
                    (param_2,pUVar7,(FGeometrySelection *)local_98);
  if (bVar5) {
    (**(code **)(param_1->_padding_ + 0x3c8))(param_1);
  }
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  uVar3 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  iVar4 = local_80.MaxBits;
  uStack_60 = 0xffffffff;
  local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  if (0x80 < (uint)iVar4) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// RequiresInputSelection @ 14caa0170

bool __thiscall
USingleTargetWithSelectionToolBuilder::RequiresInputSelection
          (USingleTargetWithSelectionToolBuilder *this)

{
  return false;
}

// StaticRegisterNativesUSingleTargetWithSelectionToolBuilder @ 14caa7300

void __cdecl
USingleTargetWithSelectionToolBuilder::StaticRegisterNativesUSingleTargetWithSelectionToolBuilder
          (void)

{
  return;
}

