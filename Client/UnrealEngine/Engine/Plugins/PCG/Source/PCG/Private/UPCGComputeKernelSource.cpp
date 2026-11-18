// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149721090

UClass * __cdecl UPCGComputeKernelSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeKernelSource",
               &Z_Registration_Info_UClass_UPCGComputeKernelSource.InnerSingleton,
               StaticRegisterNativesUPCGComputeKernelSource,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeKernelSource>,
               InternalVTableHelperCtorCaller<UPCGComputeKernelSource>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeKernelSource.InnerSingleton;
}

// UPCGComputeKernelSource @ 149725540

UPCGComputeKernelSource * __thiscall
UPCGComputeKernelSource::UPCGComputeKernelSource
          (UPCGComputeKernelSource *this,FVTableHelper *param_1)

{
  UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)this,param_1);
  *(undefined ***)this = &___7UPCGComputeKernelSource__6B_;
  return this;
}

// UPCGComputeKernelSource @ 149725570

UPCGComputeKernelSource * __thiscall
UPCGComputeKernelSource::UPCGComputeKernelSource
          (UPCGComputeKernelSource *this,FObjectInitializer *param_1)

{
  UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)this,param_1);
  *(undefined ***)this = &___7UPCGComputeKernelSource__6B_;
  return this;
}

// ~UPCGComputeKernelSource @ 149725de0

void __thiscall UPCGComputeKernelSource::~UPCGComputeKernelSource(UPCGComputeKernelSource *this)

{
  *(undefined ***)this = &___7UPCGComputeKernelSource__6B_;
  UComputeKernelSource::~UComputeKernelSource((UComputeKernelSource *)this);
  return;
}

// GetPrivateStaticClass @ 1497270a0

UClass * __cdecl UPCGComputeKernelSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeKernelSource",
               &Z_Registration_Info_UClass_UPCGComputeKernelSource.InnerSingleton,
               StaticRegisterNativesUPCGComputeKernelSource,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeKernelSource>,
               InternalVTableHelperCtorCaller<UPCGComputeKernelSource>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeKernelSource.InnerSingleton;
}

// GetSource @ 149727750

FString * __thiscall
UPCGComputeKernelSource::GetSource(UPCGComputeKernelSource *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4686377518339457003>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernelSource.h"
                     ,0x15,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGComputeKernelSource @ 149727fc0

void __cdecl UPCGComputeKernelSource::StaticRegisterNativesUPCGComputeKernelSource(void)

{
  return;
}

