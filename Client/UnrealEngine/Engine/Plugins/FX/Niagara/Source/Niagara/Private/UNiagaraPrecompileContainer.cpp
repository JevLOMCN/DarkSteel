// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 149314090

UClass * __cdecl UNiagaraPrecompileContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPrecompileContainer",
               &Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton,
               StaticRegisterNativesUNiagaraPrecompileContainer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPrecompileContainer>,
               InternalVTableHelperCtorCaller<UNiagaraPrecompileContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton;
}

// UNiagaraPrecompileContainer @ 149335460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraPrecompileContainer * __thiscall
UNiagaraPrecompileContainer::UNiagaraPrecompileContainer
          (UNiagaraPrecompileContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraPrecompileContainer__6B_;
  (this->Scripts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scripts).ArrayNum = 0;
  (this->Scripts).ArrayMax = 0;
  (this->System).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  return this;
}

// UNiagaraPrecompileContainer @ 1493354a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraPrecompileContainer * __thiscall
UNiagaraPrecompileContainer::UNiagaraPrecompileContainer
          (UNiagaraPrecompileContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraPrecompileContainer__6B_;
  (this->Scripts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scripts).ArrayNum = 0;
  (this->Scripts).ArrayMax = 0;
  (this->System).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  return this;
}

// ~UNiagaraPrecompileContainer @ 149336ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraPrecompileContainer::~UNiagaraPrecompileContainer(UNiagaraPrecompileContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraPrecompileContainer__6B_;
  pFVar1 = (this->Scripts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149355d80

UClass * __cdecl UNiagaraPrecompileContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPrecompileContainer",
               &Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton,
               StaticRegisterNativesUNiagaraPrecompileContainer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPrecompileContainer>,
               InternalVTableHelperCtorCaller<UNiagaraPrecompileContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPrecompileContainer @ 149370350

void __cdecl UNiagaraPrecompileContainer::StaticRegisterNativesUNiagaraPrecompileContainer(void)

{
  return;
}

