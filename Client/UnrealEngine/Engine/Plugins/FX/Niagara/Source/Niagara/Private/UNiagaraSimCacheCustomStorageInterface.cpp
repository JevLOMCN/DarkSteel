// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e413e0

UClass * __cdecl UNiagaraSimCacheCustomStorageInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheCustomStorageInterface",
               &Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimCacheCustomStorageInterface>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheCustomStorageInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton;
}

// UNiagaraSimCacheCustomStorageInterface @ 148e55680

UNiagaraSimCacheCustomStorageInterface * __thiscall
UNiagaraSimCacheCustomStorageInterface::UNiagaraSimCacheCustomStorageInterface
          (UNiagaraSimCacheCustomStorageInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSimCacheCustomStorageInterface__6B_;
  return this;
}

// UNiagaraSimCacheCustomStorageInterface @ 148e556b0

UNiagaraSimCacheCustomStorageInterface * __thiscall
UNiagaraSimCacheCustomStorageInterface::UNiagaraSimCacheCustomStorageInterface
          (UNiagaraSimCacheCustomStorageInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSimCacheCustomStorageInterface__6B_;
  return this;
}

// ~UNiagaraSimCacheCustomStorageInterface @ 148e56ad0

void __thiscall
UNiagaraSimCacheCustomStorageInterface::~UNiagaraSimCacheCustomStorageInterface
          (UNiagaraSimCacheCustomStorageInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148e6e930

UClass * __cdecl UNiagaraSimCacheCustomStorageInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheCustomStorageInterface",
               &Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimCacheCustomStorageInterface>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheCustomStorageInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface @ 148e816c0

void __cdecl
UNiagaraSimCacheCustomStorageInterface::StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface
          (void)

{
  return;
}

