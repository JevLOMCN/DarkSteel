// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e1034e0

UClass * __cdecl UOptimusLoopTerminalDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusLoopTerminalDataProvider",
               &Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusLoopTerminalDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusLoopTerminalDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusLoopTerminalDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.InnerSingleton;
}

// UOptimusLoopTerminalDataProvider @ 14e15a570

UOptimusLoopTerminalDataProvider * __thiscall
UOptimusLoopTerminalDataProvider::UOptimusLoopTerminalDataProvider
          (UOptimusLoopTerminalDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusLoopTerminalDataProvider__6B_;
  this->Index = 0;
  this->Count = 0;
  return this;
}

// UOptimusLoopTerminalDataProvider @ 14e15a5a0

UOptimusLoopTerminalDataProvider * __thiscall
UOptimusLoopTerminalDataProvider::UOptimusLoopTerminalDataProvider
          (UOptimusLoopTerminalDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusLoopTerminalDataProvider__6B_;
  this->Index = 0;
  this->Count = 0;
  return this;
}

// ~UOptimusLoopTerminalDataProvider @ 14e162e00

void __thiscall
UOptimusLoopTerminalDataProvider::~UOptimusLoopTerminalDataProvider
          (UOptimusLoopTerminalDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusLoopTerminalDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6670

UClass * __cdecl UOptimusLoopTerminalDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusLoopTerminalDataProvider",
               &Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusLoopTerminalDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusLoopTerminalDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusLoopTerminalDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusLoopTerminalDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd4f0

FComputeDataProviderRenderProxy * __thiscall
UOptimusLoopTerminalDataProvider::GetRenderProxy(UOptimusLoopTerminalDataProvider *this)

{
  uint uVar1;
  uint uVar2;
  FComputeDataProviderRenderProxy *pFVar3;
  
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FComputeDataProviderRenderProxy *)0x0) {
    uVar1 = this->Count;
    uVar2 = this->Index;
    *pFVar3 = (FComputeDataProviderRenderProxy)&___7FOptimusLoopTerminalDataProviderProxy__6B_;
    *(uint *)(pFVar3 + 1) = uVar2;
    *(uint *)&pFVar3[1].field_0x4 = uVar1;
    return pFVar3;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusLoopTerminalDataProvider @ 14e225ac0

void __cdecl
UOptimusLoopTerminalDataProvider::StaticRegisterNativesUOptimusLoopTerminalDataProvider(void)

{
  return;
}

