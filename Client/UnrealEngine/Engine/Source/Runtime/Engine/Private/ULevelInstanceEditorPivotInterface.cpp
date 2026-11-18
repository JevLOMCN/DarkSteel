// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147286940

UClass * __cdecl ULevelInstanceEditorPivotInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorPivotInterface",
               &Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.InnerSingleton,
               StaticRegisterNativesULevelInstanceEditorPivotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceEditorPivotInterface>,
               InternalVTableHelperCtorCaller<ULevelInstanceEditorPivotInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.InnerSingleton;
}

// ULevelInstanceEditorPivotInterface @ 14728b940

ULevelInstanceEditorPivotInterface * __thiscall
ULevelInstanceEditorPivotInterface::ULevelInstanceEditorPivotInterface
          (ULevelInstanceEditorPivotInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceEditorPivotInterface__6B_;
  return this;
}

// ~ULevelInstanceEditorPivotInterface @ 14728d280

void __thiscall
ULevelInstanceEditorPivotInterface::~ULevelInstanceEditorPivotInterface
          (ULevelInstanceEditorPivotInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f740

UClass * __cdecl ULevelInstanceEditorPivotInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorPivotInterface",
               &Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.InnerSingleton,
               StaticRegisterNativesULevelInstanceEditorPivotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceEditorPivotInterface>,
               InternalVTableHelperCtorCaller<ULevelInstanceEditorPivotInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.InnerSingleton;
}

// StaticRegisterNativesULevelInstanceEditorPivotInterface @ 147291270

void __cdecl
ULevelInstanceEditorPivotInterface::StaticRegisterNativesULevelInstanceEditorPivotInterface(void)

{
  return;
}

// ULevelInstanceEditorPivotInterface @ 147e55960

ULevelInstanceEditorPivotInterface * __thiscall
ULevelInstanceEditorPivotInterface::ULevelInstanceEditorPivotInterface
          (ULevelInstanceEditorPivotInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceEditorPivotInterface__6B_;
  return this;
}

