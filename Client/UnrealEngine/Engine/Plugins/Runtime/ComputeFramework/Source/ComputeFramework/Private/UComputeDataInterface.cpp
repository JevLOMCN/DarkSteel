// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 24

// StaticClass @ 1494bb730

UClass * __cdecl UComputeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterface",
               &Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton,
               StaticRegisterNativesUComputeDataInterface,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataInterface>,
               InternalVTableHelperCtorCaller<UComputeDataInterface>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton;
}

// UComputeDataInterface @ 1494c48f0

UComputeDataInterface * __thiscall
UComputeDataInterface::UComputeDataInterface(UComputeDataInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UComputeDataInterface__6B_;
  return this;
}

// UComputeDataInterface @ 1494c4920

UComputeDataInterface * __thiscall
UComputeDataInterface::UComputeDataInterface
          (UComputeDataInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UComputeDataInterface__6B_;
  return this;
}

// ~UComputeDataInterface @ 1494c5cd0

void __thiscall UComputeDataInterface::~UComputeDataInterface(UComputeDataInterface *this)

{
  *(undefined ***)this = &___7UComputeDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanSupportUnifiedDispatch @ 1494cac80

bool __thiscall UComputeDataInterface::CanSupportUnifiedDispatch(UComputeDataInterface *this)

{
  return false;
}

// CreateDataProvider @ 1494cb000

UComputeDataProvider * __thiscall
UComputeDataInterface::CreateDataProvider
          (UComputeDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,ulong64 param_3)

{
  return (UComputeDataProvider *)0x0;
}

// CreateDataProvider @ 1494cb010

UComputeDataProvider * __thiscall
UComputeDataInterface::CreateDataProvider(UComputeDataInterface *this)

{
  return (UComputeDataProvider *)0x0;
}

// GetBindingType @ 1494cf1f0

UClass * __thiscall UComputeDataInterface::GetBindingType(UComputeDataInterface *this)

{
  return (UClass *)0x0;
}

// GetClassName @ 1494cf200

wchar_t * __thiscall UComputeDataInterface::GetClassName(UComputeDataInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Public\\ComputeFramework\\ComputeDataInterface.h"
             ,0x1d,L"Pure virtual not implemented (%s)");
  return (wchar_t *)0x0;
}

// GetDefines @ 1494cf3d0

void __thiscall
UComputeDataInterface::GetDefines(UComputeDataInterface *this,FComputeKernelDefinitionSet *param_1)

{
  return;
}

// GetHLSL @ 1494cf7e0

void __thiscall
UComputeDataInterface::GetHLSL(UComputeDataInterface *this,FString *param_1,FString *param_2)

{
  return;
}

// GetPermutations @ 1494d02c0

void __thiscall
UComputeDataInterface::GetPermutations
          (UComputeDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  return;
}

// GetPrivateStaticClass @ 1494d0390

UClass * __cdecl UComputeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterface",
               &Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton,
               StaticRegisterNativesUComputeDataInterface,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataInterface>,
               InternalVTableHelperCtorCaller<UComputeDataInterface>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterface.InnerSingleton;
}

// GetRequiresPostSubmitCall @ 1494d0e90

bool __thiscall UComputeDataInterface::GetRequiresPostSubmitCall(UComputeDataInterface *this)

{
  return false;
}

// GetRequiresPreSubmitCall @ 1494d0ea0

bool __thiscall UComputeDataInterface::GetRequiresPreSubmitCall(UComputeDataInterface *this)

{
  return false;
}

// GetRequiresReadback @ 1494d0eb0

bool __thiscall UComputeDataInterface::GetRequiresReadback(UComputeDataInterface *this)

{
  return false;
}

// GetShaderHash @ 1494d1050

void __thiscall UComputeDataInterface::GetShaderHash(UComputeDataInterface *this,FString *param_1)

{
  return;
}

// GetShaderParameters @ 1494d13e0

void __thiscall
UComputeDataInterface::GetShaderParameters
          (UComputeDataInterface *this,wchar_t *param_1,FShaderParametersMetadataBuilder *param_2,
          FShaderParametersMetadataAllocations *param_3)

{
  return;
}

// GetShaderVirtualPath @ 1494d1790

wchar_t * __thiscall UComputeDataInterface::GetShaderVirtualPath(UComputeDataInterface *this)

{
  return (wchar_t *)0x0;
}

// GetStructDeclarations @ 1494d1980

void __thiscall
UComputeDataInterface::GetStructDeclarations
          (UComputeDataInterface *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetSupportedInputs @ 1494d1990

void __thiscall
UComputeDataInterface::GetSupportedInputs
          (UComputeDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetSupportedOutputs @ 1494d1d90

void __thiscall
UComputeDataInterface::GetSupportedOutputs
          (UComputeDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// IsExecutionInterface @ 1494d4700

bool __thiscall UComputeDataInterface::IsExecutionInterface(UComputeDataInterface *this)

{
  return false;
}

// StaticRegisterNativesUComputeDataInterface @ 1494d7e20

void __cdecl UComputeDataInterface::StaticRegisterNativesUComputeDataInterface(void)

{
  return;
}

