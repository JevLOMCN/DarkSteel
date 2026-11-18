// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 7

// StaticClass @ 1494bd280

UClass * __cdecl UComputeKernelSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernelSource",
               &Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton,
               StaticRegisterNativesUComputeKernelSource,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeKernelSource>,
               InternalVTableHelperCtorCaller<UComputeKernelSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton;
}

// UComputeKernelSource @ 1494c4e40

UComputeKernelSource * __thiscall
UComputeKernelSource::UComputeKernelSource(UComputeKernelSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeKernelSource__6B_;
  (this->EntryPoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryPoint).Data.ArrayNum = 0;
  (this->EntryPoint).Data.ArrayMax = 0;
  (this->PermutationSet).BooleanOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PermutationSet).BooleanOptions.ArrayNum = 0;
  (this->PermutationSet).BooleanOptions.ArrayMax = 0;
  (this->DefinitionsSet).Defines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefinitionsSet).Defines.ArrayNum = 0;
  (this->DefinitionsSet).Defines.ArrayMax = 0;
  (this->AdditionalSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSources).ArrayNum = 0;
  (this->AdditionalSources).ArrayMax = 0;
  (this->ExternalInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalInputs).ArrayNum = 0;
  (this->ExternalInputs).ArrayMax = 0;
  (this->ExternalOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalOutputs).ArrayNum = 0;
  (this->ExternalOutputs).ArrayMax = 0;
  (this->GroupSize).field0_0x0._s_0.X = 0x40;
  (this->GroupSize).field0_0x0._s_0.Y = 1;
  (this->GroupSize).field0_0x0._s_0.Z = 1;
  return this;
}

// UComputeKernelSource @ 1494c4ec0

UComputeKernelSource * __thiscall
UComputeKernelSource::UComputeKernelSource(UComputeKernelSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeKernelSource__6B_;
  (this->EntryPoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryPoint).Data.ArrayNum = 0;
  (this->EntryPoint).Data.ArrayMax = 0;
  (this->PermutationSet).BooleanOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PermutationSet).BooleanOptions.ArrayNum = 0;
  (this->PermutationSet).BooleanOptions.ArrayMax = 0;
  (this->DefinitionsSet).Defines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefinitionsSet).Defines.ArrayNum = 0;
  (this->DefinitionsSet).Defines.ArrayMax = 0;
  (this->AdditionalSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSources).ArrayNum = 0;
  (this->AdditionalSources).ArrayMax = 0;
  (this->ExternalInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalInputs).ArrayNum = 0;
  (this->ExternalInputs).ArrayMax = 0;
  (this->ExternalOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalOutputs).ArrayNum = 0;
  (this->ExternalOutputs).ArrayMax = 0;
  (this->GroupSize).field0_0x0._s_0.X = 0x40;
  (this->GroupSize).field0_0x0._s_0.Y = 1;
  (this->GroupSize).field0_0x0._s_0.Z = 1;
  return this;
}

// ~UComputeKernelSource @ 1494c5eb0

void __thiscall UComputeKernelSource::~UComputeKernelSource(UComputeKernelSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UComputeKernelSource__6B_;
  DestructItems<FShaderFunctionDefinition,int>
            ((FShaderFunctionDefinition *)(this->ExternalOutputs).AllocatorInstance.Data,
             (this->ExternalOutputs).ArrayNum);
  pFVar1 = (this->ExternalOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FShaderFunctionDefinition,int>
            ((FShaderFunctionDefinition *)(this->ExternalInputs).AllocatorInstance.Data,
             (this->ExternalInputs).ArrayNum);
  pFVar1 = (this->ExternalInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FComputeKernelDefinition,int>
            ((FComputeKernelDefinition *)(this->DefinitionsSet).Defines.AllocatorInstance.Data,
             (this->DefinitionsSet).Defines.ArrayNum);
  pFVar1 = (this->DefinitionsSet).Defines.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FComputeKernelPermutationBool,int>
            ((FComputeKernelPermutationBool *)
             (this->PermutationSet).BooleanOptions.AllocatorInstance.Data,
             (this->PermutationSet).BooleanOptions.ArrayNum);
  pFVar1 = (this->PermutationSet).BooleanOptions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryPoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494d0950

UClass * __cdecl UComputeKernelSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernelSource",
               &Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton,
               StaticRegisterNativesUComputeKernelSource,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeKernelSource>,
               InternalVTableHelperCtorCaller<UComputeKernelSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernelSource.InnerSingleton;
}

// GetSource @ 1494d17c0

FString * __thiscall
UComputeKernelSource::GetSource(UComputeKernelSource *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Public\\ComputeFramework\\ComputeKernelSource.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUComputeKernelSource @ 1494d7ed0

void __cdecl UComputeKernelSource::StaticRegisterNativesUComputeKernelSource(void)

{
  return;
}

