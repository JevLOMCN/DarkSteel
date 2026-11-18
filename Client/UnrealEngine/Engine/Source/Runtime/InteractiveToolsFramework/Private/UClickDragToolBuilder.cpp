// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 8

// StaticClass @ 14966fdc0

UClass * __cdecl UClickDragToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragToolBuilder",
               &Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton,
               StaticRegisterNativesUClickDragToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UClickDragToolBuilder>,
               InternalVTableHelperCtorCaller<UClickDragToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton;
}

// UClickDragToolBuilder @ 149683630

UClickDragToolBuilder * __thiscall
UClickDragToolBuilder::UClickDragToolBuilder(UClickDragToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UClickDragToolBuilder__6B_;
  return this;
}

// UClickDragToolBuilder @ 149683660

UClickDragToolBuilder * __thiscall
UClickDragToolBuilder::UClickDragToolBuilder
          (UClickDragToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7UClickDragToolBuilder__6B_;
  return this;
}

// ~UClickDragToolBuilder @ 149689580

void __thiscall UClickDragToolBuilder::~UClickDragToolBuilder(UClickDragToolBuilder *this)

{
  *(undefined ***)this = &___7UClickDragToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  return;
}

// BuildTool @ 1496948e0

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

UInteractiveTool * __thiscall
UClickDragToolBuilder::BuildTool(UClickDragToolBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveToolManager *pUVar1;
  UClass *pUVar2;
  UInteractiveTool *pUVar3;
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
  pUVar2 = UClickDragTool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UInteractiveTool *)
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

// CanBuildTool @ 1496969f0

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
UClickDragToolBuilder::CanBuildTool(UClickDragToolBuilder *this,FToolBuilderState *param_1)

{
  return true;
}

// GetPrivateStaticClass @ 1496a4350

UClass * __cdecl UClickDragToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragToolBuilder",
               &Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton,
               StaticRegisterNativesUClickDragToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UClickDragToolBuilder>,
               InternalVTableHelperCtorCaller<UClickDragToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUClickDragToolBuilder @ 1496c2790

void __cdecl UClickDragToolBuilder::StaticRegisterNativesUClickDragToolBuilder(void)

{
  return;
}

