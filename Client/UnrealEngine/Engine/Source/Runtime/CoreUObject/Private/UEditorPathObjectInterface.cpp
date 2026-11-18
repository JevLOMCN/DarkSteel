// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e6af00

UClass * __cdecl UEditorPathObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditorPathObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"EditorPathObjectInterface",
               &Z_Registration_Info_UClass_UEditorPathObjectInterface.InnerSingleton,
               StaticRegisterNativesUEditorPathObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditorPathObjectInterface>,
               InternalVTableHelperCtorCaller<UEditorPathObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditorPathObjectInterface.InnerSingleton;
}

// UEditorPathObjectInterface @ 141e869f0

UEditorPathObjectInterface * __thiscall
UEditorPathObjectInterface::UEditorPathObjectInterface
          (UEditorPathObjectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UEditorPathObjectInterface__6B_;
  return this;
}

// UEditorPathObjectInterface @ 141e86a20

UEditorPathObjectInterface * __thiscall
UEditorPathObjectInterface::UEditorPathObjectInterface
          (UEditorPathObjectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UEditorPathObjectInterface__6B_;
  return this;
}

// ~UEditorPathObjectInterface @ 141e88480

void __thiscall
UEditorPathObjectInterface::~UEditorPathObjectInterface(UEditorPathObjectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141ea1ef0

UClass * __cdecl UEditorPathObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditorPathObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"EditorPathObjectInterface",
               &Z_Registration_Info_UClass_UEditorPathObjectInterface.InnerSingleton,
               StaticRegisterNativesUEditorPathObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditorPathObjectInterface>,
               InternalVTableHelperCtorCaller<UEditorPathObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditorPathObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUEditorPathObjectInterface @ 141ebe410

void __cdecl UEditorPathObjectInterface::StaticRegisterNativesUEditorPathObjectInterface(void)

{
  return;
}

