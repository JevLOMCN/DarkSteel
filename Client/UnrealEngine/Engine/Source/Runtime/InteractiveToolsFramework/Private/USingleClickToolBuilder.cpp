// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 8

// StaticClass @ 149671e60

UClass * __cdecl USingleClickToolBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickToolBuilder",
               &Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton,
               StaticRegisterNativesUSingleClickToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USingleClickToolBuilder>,
               InternalVTableHelperCtorCaller<USingleClickToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton;
}

// USingleClickToolBuilder @ 149688400

USingleClickToolBuilder * __thiscall
USingleClickToolBuilder::USingleClickToolBuilder
          (USingleClickToolBuilder *this,FVTableHelper *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7USingleClickToolBuilder__6B_;
  return this;
}

// USingleClickToolBuilder @ 149688430

USingleClickToolBuilder * __thiscall
USingleClickToolBuilder::USingleClickToolBuilder
          (USingleClickToolBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveToolBuilder::UInteractiveToolBuilder((UInteractiveToolBuilder *)this,param_1);
  *(undefined ***)this = &___7USingleClickToolBuilder__6B_;
  return this;
}

// ~USingleClickToolBuilder @ 14968aac0

void __thiscall USingleClickToolBuilder::~USingleClickToolBuilder(USingleClickToolBuilder *this)

{
  *(undefined ***)this = &___7USingleClickToolBuilder__6B_;
  UInteractiveToolBuilder::~UInteractiveToolBuilder((UInteractiveToolBuilder *)this);
  return;
}

// BuildTool @ 1496949d0

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
USingleClickToolBuilder::BuildTool(USingleClickToolBuilder *this,FToolBuilderState *param_1)

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
  pUVar2 = USingleClickTool::StaticClass();
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

// CanBuildTool @ 149696a50

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
USingleClickToolBuilder::CanBuildTool(USingleClickToolBuilder *this,FToolBuilderState *param_1)

{
  return true;
}

// GetPrivateStaticClass @ 1496a7760

UClass * __cdecl USingleClickToolBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickToolBuilder",
               &Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton,
               StaticRegisterNativesUSingleClickToolBuilder,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USingleClickToolBuilder>,
               InternalVTableHelperCtorCaller<USingleClickToolBuilder>,local_res8,
               UInteractiveToolBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickToolBuilder.InnerSingleton;
}

// StaticRegisterNativesUSingleClickToolBuilder @ 1496c2d80

void __cdecl USingleClickToolBuilder::StaticRegisterNativesUSingleClickToolBuilder(void)

{
  return;
}

