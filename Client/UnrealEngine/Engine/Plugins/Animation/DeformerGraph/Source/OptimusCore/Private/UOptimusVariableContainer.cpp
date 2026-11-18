// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e113fe0

UClass * __cdecl UOptimusVariableContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusVariableContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusVariableContainer",
               &Z_Registration_Info_UClass_UOptimusVariableContainer.InnerSingleton,
               StaticRegisterNativesUOptimusVariableContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusVariableContainer>,
               InternalVTableHelperCtorCaller<UOptimusVariableContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusVariableContainer.InnerSingleton;
}

// UOptimusVariableContainer @ 14e15d9a0

UOptimusVariableContainer * __thiscall
UOptimusVariableContainer::UOptimusVariableContainer
          (UOptimusVariableContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusVariableContainer__6B_;
  (this->Descriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptions).ArrayNum = 0;
  (this->Descriptions).ArrayMax = 0;
  return this;
}

// UOptimusVariableContainer @ 14e15d9e0

UOptimusVariableContainer * __thiscall
UOptimusVariableContainer::UOptimusVariableContainer
          (UOptimusVariableContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusVariableContainer__6B_;
  (this->Descriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptions).ArrayNum = 0;
  (this->Descriptions).ArrayMax = 0;
  return this;
}

// ~UOptimusVariableContainer @ 14e164290

void __thiscall
UOptimusVariableContainer::~UOptimusVariableContainer(UOptimusVariableContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusVariableContainer__6B_;
  pFVar1 = (this->Descriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9d70

UClass * __cdecl UOptimusVariableContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusVariableContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusVariableContainer",
               &Z_Registration_Info_UClass_UOptimusVariableContainer.InnerSingleton,
               StaticRegisterNativesUOptimusVariableContainer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusVariableContainer>,
               InternalVTableHelperCtorCaller<UOptimusVariableContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusVariableContainer.InnerSingleton;
}

// StaticRegisterNativesUOptimusVariableContainer @ 14e225fc0

void __cdecl UOptimusVariableContainer::StaticRegisterNativesUOptimusVariableContainer(void)

{
  return;
}

