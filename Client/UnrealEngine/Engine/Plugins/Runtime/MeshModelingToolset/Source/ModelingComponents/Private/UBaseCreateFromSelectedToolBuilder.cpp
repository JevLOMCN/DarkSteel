// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// StaticClass @ 14ca41a40

UClass * __cdecl UBaseCreateFromSelectedToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedToolBuilder",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.InnerSingleton,
               StaticRegisterNativesUBaseCreateFromSelectedToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedToolBuilder>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.InnerSingleton;
}

// UBaseCreateFromSelectedToolBuilder @ 14ca675c0

UBaseCreateFromSelectedToolBuilder * __thiscall
UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder
          (UBaseCreateFromSelectedToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UBaseCreateFromSelectedToolBuilder__6B_;
  return this;
}

// UBaseCreateFromSelectedToolBuilder @ 14ca675f0

UBaseCreateFromSelectedToolBuilder * __thiscall
UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder
          (UBaseCreateFromSelectedToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolWithToolTargetsBuilder::UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this,param_1);
  *(undefined ***)this = &___7UBaseCreateFromSelectedToolBuilder__6B_;
  return this;
}

// ~UBaseCreateFromSelectedToolBuilder @ 14ca6b3d0

void __thiscall
UBaseCreateFromSelectedToolBuilder::~UBaseCreateFromSelectedToolBuilder
          (UBaseCreateFromSelectedToolBuilder *this)

{
  *(undefined ***)this = &___7UMultiSelectionMeshEditingToolBuilder__6B_;
  UInteractiveToolWithToolTargetsBuilder::~UInteractiveToolWithToolTargetsBuilder
            ((UInteractiveToolWithToolTargetsBuilder *)this);
  return;
}

// CanBuildTool @ 14ca7d6b0

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
UBaseCreateFromSelectedToolBuilder::CanBuildTool
          (UBaseCreateFromSelectedToolBuilder *this,FToolBuilderState *param_1)

{
  UToolTargetManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pUVar1 = param_1->TargetManager;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2d8);
  uVar7 = (**(code **)(*(longlong *)this + 0x2d0))();
  iVar5 = (*pcVar2)(pUVar1,param_1,uVar7);
  iVar6 = (**(code **)(*(longlong *)this + 0x2f0))(this);
  if (iVar5 < iVar6) {
    return false;
  }
  lVar8 = (**(code **)(*(longlong *)this + 0x2e8))(this,local_res8);
  if (*(char *)(lVar8 + 4) != '\0') {
    piVar9 = (int *)(**(code **)(*(longlong *)this + 0x2e8))(this,local_res10);
    if (((char)piVar9[1] == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*piVar9 < iVar5) {
      return false;
    }
  }
  return true;
}

// CreateNewTool @ 14ca85460

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
UBaseCreateFromSelectedToolBuilder::CreateNewTool
          (UBaseCreateFromSelectedToolBuilder *this,FToolBuilderState *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMultiSelectionMeshEditingTool *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\BaseTools\\BaseCreateFromSelectedTool.cpp"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMultiSelectionMeshEditingTool *)(*pcVar1)();
    return pUVar3;
  }
  return (UMultiSelectionMeshEditingTool *)0x0;
}

// GetPrivateStaticClass @ 14ca90d80

UClass * __cdecl UBaseCreateFromSelectedToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedToolBuilder",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.InnerSingleton,
               StaticRegisterNativesUBaseCreateFromSelectedToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedToolBuilder>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedToolBuilder>,local_res8,
               UMultiSelectionMeshEditingToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.InnerSingleton;
}

// MaxComponentsSupported @ 14ca995e0

TOptional<int> __thiscall
UBaseCreateFromSelectedToolBuilder::MaxComponentsSupported(UBaseCreateFromSelectedToolBuilder *this)

{
  TOptional<int> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// MinComponentsSupported @ 14ca995f0

int __thiscall
UBaseCreateFromSelectedToolBuilder::MinComponentsSupported(UBaseCreateFromSelectedToolBuilder *this)

{
  return 1;
}

// StaticRegisterNativesUBaseCreateFromSelectedToolBuilder @ 14caa70b0

void __cdecl
UBaseCreateFromSelectedToolBuilder::StaticRegisterNativesUBaseCreateFromSelectedToolBuilder(void)

{
  return;
}

