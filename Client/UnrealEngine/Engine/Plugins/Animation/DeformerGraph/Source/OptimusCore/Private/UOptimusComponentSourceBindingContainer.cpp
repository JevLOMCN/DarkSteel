// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e112880

UClass * __cdecl UOptimusComponentSourceBindingContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentSourceBindingContainer",
               &Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.InnerSingleton,
               StaticRegisterNativesUOptimusComponentSourceBindingContainer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSourceBindingContainer>
               ,InternalVTableHelperCtorCaller<UOptimusComponentSourceBindingContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.InnerSingleton;
}

// UOptimusComponentSourceBindingContainer @ 14e1587f0

UOptimusComponentSourceBindingContainer * __thiscall
UOptimusComponentSourceBindingContainer::UOptimusComponentSourceBindingContainer
          (UOptimusComponentSourceBindingContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusComponentSourceBindingContainer__6B_;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  return this;
}

// UOptimusComponentSourceBindingContainer @ 14e158830

UOptimusComponentSourceBindingContainer * __thiscall
UOptimusComponentSourceBindingContainer::UOptimusComponentSourceBindingContainer
          (UOptimusComponentSourceBindingContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusComponentSourceBindingContainer__6B_;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  return this;
}

// ~UOptimusComponentSourceBindingContainer @ 14e162380

void __thiscall
UOptimusComponentSourceBindingContainer::~UOptimusComponentSourceBindingContainer
          (UOptimusComponentSourceBindingContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusComponentSourceBindingContainer__6B_;
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d4c40

UClass * __cdecl UOptimusComponentSourceBindingContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentSourceBindingContainer",
               &Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.InnerSingleton,
               StaticRegisterNativesUOptimusComponentSourceBindingContainer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSourceBindingContainer>
               ,InternalVTableHelperCtorCaller<UOptimusComponentSourceBindingContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.InnerSingleton;
}

// StaticRegisterNativesUOptimusComponentSourceBindingContainer @ 14e225800

void __cdecl
UOptimusComponentSourceBindingContainer::
StaticRegisterNativesUOptimusComponentSourceBindingContainer(void)

{
  return;
}

