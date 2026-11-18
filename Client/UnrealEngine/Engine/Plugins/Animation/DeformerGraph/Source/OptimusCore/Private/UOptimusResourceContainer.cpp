// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e116480

UClass * __cdecl UOptimusResourceContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusResourceContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusResourceContainer",
               &Z_Registration_Info_UClass_UOptimusResourceContainer.InnerSingleton,
               StaticRegisterNativesUOptimusResourceContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusResourceContainer>,
               InternalVTableHelperCtorCaller<UOptimusResourceContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusResourceContainer.InnerSingleton;
}

// UOptimusResourceContainer @ 14e15c950

UOptimusResourceContainer * __thiscall
UOptimusResourceContainer::UOptimusResourceContainer
          (UOptimusResourceContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusResourceContainer__6B_;
  (this->Descriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptions).ArrayNum = 0;
  (this->Descriptions).ArrayMax = 0;
  return this;
}

// UOptimusResourceContainer @ 14e15c990

UOptimusResourceContainer * __thiscall
UOptimusResourceContainer::UOptimusResourceContainer
          (UOptimusResourceContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusResourceContainer__6B_;
  (this->Descriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptions).ArrayNum = 0;
  (this->Descriptions).ArrayMax = 0;
  return this;
}

// ~UOptimusResourceContainer @ 14e163dc0

void __thiscall
UOptimusResourceContainer::~UOptimusResourceContainer(UOptimusResourceContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusResourceContainer__6B_;
  pFVar1 = (this->Descriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8960

UClass * __cdecl UOptimusResourceContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusResourceContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusResourceContainer",
               &Z_Registration_Info_UClass_UOptimusResourceContainer.InnerSingleton,
               StaticRegisterNativesUOptimusResourceContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusResourceContainer>,
               InternalVTableHelperCtorCaller<UOptimusResourceContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusResourceContainer.InnerSingleton;
}

// StaticRegisterNativesUOptimusResourceContainer @ 14e225e10

void __cdecl UOptimusResourceContainer::StaticRegisterNativesUOptimusResourceContainer(void)

{
  return;
}

