// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e418b0

UClass * __cdecl ULevelInstanceEditorObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorObject",
               &Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton,
               StaticRegisterNativesULevelInstanceEditorObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULevelInstanceEditorObject>,
               InternalVTableHelperCtorCaller<ULevelInstanceEditorObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton;
}

// ULevelInstanceEditorObject @ 147e55900

ULevelInstanceEditorObject * __thiscall
ULevelInstanceEditorObject::ULevelInstanceEditorObject
          (ULevelInstanceEditorObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceEditorObject__6B_;
  return this;
}

// ULevelInstanceEditorObject @ 147e55930

ULevelInstanceEditorObject * __thiscall
ULevelInstanceEditorObject::ULevelInstanceEditorObject
          (ULevelInstanceEditorObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceEditorObject__6B_;
  return this;
}

// ~ULevelInstanceEditorObject @ 147e57ab0

void __thiscall
ULevelInstanceEditorObject::~ULevelInstanceEditorObject(ULevelInstanceEditorObject *this)

{
  *(undefined ***)this = &___7ULevelInstanceEditorObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e69c90

UClass * __cdecl ULevelInstanceEditorObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorObject",
               &Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton,
               StaticRegisterNativesULevelInstanceEditorObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULevelInstanceEditorObject>,
               InternalVTableHelperCtorCaller<ULevelInstanceEditorObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceEditorObject.InnerSingleton;
}

// StaticRegisterNativesULevelInstanceEditorObject @ 147e822c0

void __cdecl ULevelInstanceEditorObject::StaticRegisterNativesULevelInstanceEditorObject(void)

{
  return;
}

