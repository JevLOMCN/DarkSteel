// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// UBlueprintFunctionLibrary @ 147688510

UBlueprintFunctionLibrary * __thiscall
UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
          (UBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  return this;
}

// UBlueprintFunctionLibrary @ 147688540

UBlueprintFunctionLibrary * __thiscall
UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
          (UBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  return this;
}

// ~UBlueprintFunctionLibrary @ 14768a7e0

void __thiscall
UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary(UBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetFunctionCallspace @ 1476b0dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UBlueprintFunctionLibrary::GetFunctionCallspace
          (UBlueprintFunctionLibrary *this,UFunction *param_1,FFrame *param_2)

{
  int iVar1;
  
  iVar1 = UEngine::GetGlobalFunctionCallspace(GEngine,param_1,(UObject *)this,param_2);
  return iVar1;
}

// GetPrivateStaticClass @ 1476b3e90

UClass * __cdecl UBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintFunctionLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUBlueprintFunctionLibrary @ 1476ca240

void __cdecl UBlueprintFunctionLibrary::StaticRegisterNativesUBlueprintFunctionLibrary(void)

{
  return;
}

