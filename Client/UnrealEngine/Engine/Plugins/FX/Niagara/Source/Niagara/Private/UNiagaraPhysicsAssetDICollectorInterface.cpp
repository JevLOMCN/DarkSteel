// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e8a770

UClass * __cdecl UNiagaraPhysicsAssetDICollectorInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPhysicsAssetDICollectorInterface",
               &Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPhysicsAssetDICollectorInterface>,
               InternalVTableHelperCtorCaller<UNiagaraPhysicsAssetDICollectorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.InnerSingleton;
}

// UNiagaraPhysicsAssetDICollectorInterface @ 148ea5850

UNiagaraPhysicsAssetDICollectorInterface * __thiscall
UNiagaraPhysicsAssetDICollectorInterface::UNiagaraPhysicsAssetDICollectorInterface
          (UNiagaraPhysicsAssetDICollectorInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraPhysicsAssetDICollectorInterface__6B_;
  return this;
}

// UNiagaraPhysicsAssetDICollectorInterface @ 148ea5880

UNiagaraPhysicsAssetDICollectorInterface * __thiscall
UNiagaraPhysicsAssetDICollectorInterface::UNiagaraPhysicsAssetDICollectorInterface
          (UNiagaraPhysicsAssetDICollectorInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraPhysicsAssetDICollectorInterface__6B_;
  return this;
}

// ~UNiagaraPhysicsAssetDICollectorInterface @ 148ea6e80

void __thiscall
UNiagaraPhysicsAssetDICollectorInterface::~UNiagaraPhysicsAssetDICollectorInterface
          (UNiagaraPhysicsAssetDICollectorInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148ebffe0

UClass * __cdecl UNiagaraPhysicsAssetDICollectorInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPhysicsAssetDICollectorInterface",
               &Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPhysicsAssetDICollectorInterface>,
               InternalVTableHelperCtorCaller<UNiagaraPhysicsAssetDICollectorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPhysicsAssetDICollectorInterface.InnerSingleton;
}

// StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface @ 148ed4cb0

void __cdecl
UNiagaraPhysicsAssetDICollectorInterface::
StaticRegisterNativesUNiagaraPhysicsAssetDICollectorInterface(void)

{
  return;
}

