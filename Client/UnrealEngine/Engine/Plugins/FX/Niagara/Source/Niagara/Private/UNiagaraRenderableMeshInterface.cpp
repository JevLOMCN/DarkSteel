// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e42b50

UClass * __cdecl UNiagaraRenderableMeshInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRenderableMeshInterface",
               &Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraRenderableMeshInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRenderableMeshInterface>,
               InternalVTableHelperCtorCaller<UNiagaraRenderableMeshInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton;
}

// UNiagaraRenderableMeshInterface @ 148e555e0

UNiagaraRenderableMeshInterface * __thiscall
UNiagaraRenderableMeshInterface::UNiagaraRenderableMeshInterface
          (UNiagaraRenderableMeshInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraRenderableMeshInterface__6B_;
  return this;
}

// UNiagaraRenderableMeshInterface @ 148e55610

UNiagaraRenderableMeshInterface * __thiscall
UNiagaraRenderableMeshInterface::UNiagaraRenderableMeshInterface
          (UNiagaraRenderableMeshInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraRenderableMeshInterface__6B_;
  return this;
}

// ~UNiagaraRenderableMeshInterface @ 148e56a60

void __thiscall
UNiagaraRenderableMeshInterface::~UNiagaraRenderableMeshInterface
          (UNiagaraRenderableMeshInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148e6e7c0

UClass * __cdecl UNiagaraRenderableMeshInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRenderableMeshInterface",
               &Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraRenderableMeshInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRenderableMeshInterface>,
               InternalVTableHelperCtorCaller<UNiagaraRenderableMeshInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.InnerSingleton;
}

// StaticRegisterNativesUNiagaraRenderableMeshInterface @ 148e816a0

void __cdecl
UNiagaraRenderableMeshInterface::StaticRegisterNativesUNiagaraRenderableMeshInterface(void)

{
  return;
}

