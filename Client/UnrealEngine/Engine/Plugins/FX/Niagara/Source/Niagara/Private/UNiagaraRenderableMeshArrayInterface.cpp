// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e42b00

UClass * __cdecl UNiagaraRenderableMeshArrayInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRenderableMeshArrayInterface",
               &Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraRenderableMeshArrayInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRenderableMeshArrayInterface>,
               InternalVTableHelperCtorCaller<UNiagaraRenderableMeshArrayInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton;
}

// UNiagaraRenderableMeshArrayInterface @ 148e55580

UNiagaraRenderableMeshArrayInterface * __thiscall
UNiagaraRenderableMeshArrayInterface::UNiagaraRenderableMeshArrayInterface
          (UNiagaraRenderableMeshArrayInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraRenderableMeshArrayInterface__6B_;
  return this;
}

// UNiagaraRenderableMeshArrayInterface @ 148e555b0

UNiagaraRenderableMeshArrayInterface * __thiscall
UNiagaraRenderableMeshArrayInterface::UNiagaraRenderableMeshArrayInterface
          (UNiagaraRenderableMeshArrayInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraRenderableMeshArrayInterface__6B_;
  return this;
}

// ~UNiagaraRenderableMeshArrayInterface @ 148e56a50

void __thiscall
UNiagaraRenderableMeshArrayInterface::~UNiagaraRenderableMeshArrayInterface
          (UNiagaraRenderableMeshArrayInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148e6e700

UClass * __cdecl UNiagaraRenderableMeshArrayInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRenderableMeshArrayInterface",
               &Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraRenderableMeshArrayInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRenderableMeshArrayInterface>,
               InternalVTableHelperCtorCaller<UNiagaraRenderableMeshArrayInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRenderableMeshArrayInterface.InnerSingleton;
}

// StaticRegisterNativesUNiagaraRenderableMeshArrayInterface @ 148e81690

void __cdecl
UNiagaraRenderableMeshArrayInterface::StaticRegisterNativesUNiagaraRenderableMeshArrayInterface
          (void)

{
  return;
}

