// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472853c0

UClass * __cdecl UInterface_AsyncCompilation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_AsyncCompilation.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_AsyncCompilation",
               &Z_Registration_Info_UClass_UInterface_AsyncCompilation.InnerSingleton,
               StaticRegisterNativesUInterface_AsyncCompilation,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_AsyncCompilation>,
               InternalVTableHelperCtorCaller<UInterface_AsyncCompilation>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_AsyncCompilation.InnerSingleton;
}

// UInterface_AsyncCompilation @ 14728b880

UInterface_AsyncCompilation * __thiscall
UInterface_AsyncCompilation::UInterface_AsyncCompilation
          (UInterface_AsyncCompilation *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_AsyncCompilation__6B_;
  return this;
}

// ~UInterface_AsyncCompilation @ 14728d240

void __thiscall
UInterface_AsyncCompilation::~UInterface_AsyncCompilation(UInterface_AsyncCompilation *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f440

UClass * __cdecl UInterface_AsyncCompilation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_AsyncCompilation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_AsyncCompilation",
               &Z_Registration_Info_UClass_UInterface_AsyncCompilation.InnerSingleton,
               StaticRegisterNativesUInterface_AsyncCompilation,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_AsyncCompilation>,
               InternalVTableHelperCtorCaller<UInterface_AsyncCompilation>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_AsyncCompilation.InnerSingleton;
}

// StaticRegisterNativesUInterface_AsyncCompilation @ 147291230

void __cdecl UInterface_AsyncCompilation::StaticRegisterNativesUInterface_AsyncCompilation(void)

{
  return;
}

// UInterface_AsyncCompilation @ 147d798f0

UInterface_AsyncCompilation * __thiscall
UInterface_AsyncCompilation::UInterface_AsyncCompilation
          (UInterface_AsyncCompilation *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_AsyncCompilation__6B_;
  return this;
}

