// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// PostBuildTool @ 1496b6690

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
UInteractiveToolBuilder::PostBuildTool
          (UInteractiveToolBuilder *this,UInteractiveTool *param_1,FToolBuilderState *param_2)

{
  return;
}

// PostSetupTool @ 1496b6b10

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
UInteractiveToolBuilder::PostSetupTool
          (UInteractiveToolBuilder *this,UInteractiveTool *param_1,FToolBuilderState *param_2)

{
  return;
}

// StaticClass @ 1496c2710

UClass * __cdecl UInteractiveToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolBuilder.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolBuilder",
               &Z_Registration_Info_UClass_UInteractiveToolBuilder.InnerSingleton,
               StaticRegisterNativesUInteractiveToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolBuilder>,
               InternalVTableHelperCtorCaller<UInteractiveToolBuilder>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolBuilder.InnerSingleton;
}

// UInteractiveToolBuilder @ 1496d2c80

UInteractiveToolBuilder * __thiscall
UInteractiveToolBuilder::UInteractiveToolBuilder
          (UInteractiveToolBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolBuilder__6B_;
  return this;
}

// UInteractiveToolBuilder @ 1496d2cb0

UInteractiveToolBuilder * __thiscall
UInteractiveToolBuilder::UInteractiveToolBuilder
          (UInteractiveToolBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolBuilder__6B_;
  return this;
}

// ~UInteractiveToolBuilder @ 1496d44d0

void __thiscall UInteractiveToolBuilder::~UInteractiveToolBuilder(UInteractiveToolBuilder *this)

{
  *(undefined ***)this = &___7UInteractiveToolBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildTool @ 1496d84a0

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
UInteractiveToolBuilder::BuildTool(UInteractiveToolBuilder *this,FToolBuilderState *param_1)

{
  code *pcVar1;
  bool bVar2;
  UInteractiveTool *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\InteractiveToolBuilder.h"
                     ,0x33,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UInteractiveTool *)(*pcVar1)();
    return pUVar3;
  }
  return (UInteractiveTool *)0x0;
}

// CanBuildTool @ 1496d8d20

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
UInteractiveToolBuilder::CanBuildTool(UInteractiveToolBuilder *this,FToolBuilderState *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\InteractiveToolBuilder.h"
                     ,0x28,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetPrivateStaticClass @ 1496dd5e0

UClass * __cdecl UInteractiveToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolBuilder",
               &Z_Registration_Info_UClass_UInteractiveToolBuilder.InnerSingleton,
               StaticRegisterNativesUInteractiveToolBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolBuilder>,
               InternalVTableHelperCtorCaller<UInteractiveToolBuilder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolBuilder @ 1496e66e0

void __cdecl UInteractiveToolBuilder::StaticRegisterNativesUInteractiveToolBuilder(void)

{
  return;
}

