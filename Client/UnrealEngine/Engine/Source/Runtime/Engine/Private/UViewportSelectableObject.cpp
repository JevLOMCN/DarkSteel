// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147285cd0

UClass * __cdecl UViewportSelectableObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewportSelectableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewportSelectableObject",
               &Z_Registration_Info_UClass_UViewportSelectableObject.InnerSingleton,
               StaticRegisterNativesUViewportSelectableObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewportSelectableObject>,
               InternalVTableHelperCtorCaller<UViewportSelectableObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewportSelectableObject.InnerSingleton;
}

// UViewportSelectableObject @ 14728ccb0

UViewportSelectableObject * __thiscall
UViewportSelectableObject::UViewportSelectableObject
          (UViewportSelectableObject *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UViewportSelectableObject__6B_;
  return this;
}

// UViewportSelectableObject @ 14728cce0

UViewportSelectableObject * __thiscall
UViewportSelectableObject::UViewportSelectableObject
          (UViewportSelectableObject *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UViewportSelectableObject__6B_;
  return this;
}

// ~UViewportSelectableObject @ 14728d840

void __thiscall
UViewportSelectableObject::~UViewportSelectableObject(UViewportSelectableObject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147290d90

UClass * __cdecl UViewportSelectableObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewportSelectableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewportSelectableObject",
               &Z_Registration_Info_UClass_UViewportSelectableObject.InnerSingleton,
               StaticRegisterNativesUViewportSelectableObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewportSelectableObject>,
               InternalVTableHelperCtorCaller<UViewportSelectableObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewportSelectableObject.InnerSingleton;
}

// StaticRegisterNativesUViewportSelectableObject @ 1472914e0

void __cdecl UViewportSelectableObject::StaticRegisterNativesUViewportSelectableObject(void)

{
  return;
}

