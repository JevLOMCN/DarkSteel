// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14962d340

UClass * __cdecl UInteractiveGizmoBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveGizmoBuilder",
               &Z_Registration_Info_UClass_UInteractiveGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUInteractiveGizmoBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveGizmoBuilder>,
               InternalVTableHelperCtorCaller<UInteractiveGizmoBuilder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveGizmoBuilder.InnerSingleton;
}

// UInteractiveGizmoBuilder @ 14963b670

UInteractiveGizmoBuilder * __thiscall
UInteractiveGizmoBuilder::UInteractiveGizmoBuilder
          (UInteractiveGizmoBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveGizmoBuilder__6B_;
  return this;
}

// UInteractiveGizmoBuilder @ 14963b6a0

UInteractiveGizmoBuilder * __thiscall
UInteractiveGizmoBuilder::UInteractiveGizmoBuilder
          (UInteractiveGizmoBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveGizmoBuilder__6B_;
  return this;
}

// ~UInteractiveGizmoBuilder @ 14963eaf0

void __thiscall UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder(UInteractiveGizmoBuilder *this)

{
  *(undefined ***)this = &___7UInteractiveGizmoBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildGizmo @ 14964bd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UInteractiveGizmoBuilder::BuildGizmo(UInteractiveGizmoBuilder *this,FToolBuilderState *param_1)

{
  code *pcVar1;
  bool bVar2;
  UInteractiveGizmo *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\InteractiveGizmoBuilder.h"
                     ,0x1f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UInteractiveGizmo *)(*pcVar1)();
    return pUVar3;
  }
  return (UInteractiveGizmo *)0x0;
}

// GetPrivateStaticClass @ 149656d10

UClass * __cdecl UInteractiveGizmoBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveGizmoBuilder",
               &Z_Registration_Info_UClass_UInteractiveGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUInteractiveGizmoBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveGizmoBuilder>,
               InternalVTableHelperCtorCaller<UInteractiveGizmoBuilder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveGizmoBuilder.InnerSingleton;
}

// StaticRegisterNativesUInteractiveGizmoBuilder @ 149664bb0

void __cdecl UInteractiveGizmoBuilder::StaticRegisterNativesUInteractiveGizmoBuilder(void)

{
  return;
}

