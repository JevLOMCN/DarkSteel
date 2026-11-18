// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d537e80

UClass * __cdecl UObjectTreeGraphObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphObject",
               &Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton,
               StaticRegisterNativesUObjectTreeGraphObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTreeGraphObject>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphObject>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton;
}

// UObjectTreeGraphObject @ 14d543cc0

UObjectTreeGraphObject * __thiscall
UObjectTreeGraphObject::UObjectTreeGraphObject(UObjectTreeGraphObject *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UObjectTreeGraphObject__6B_;
  return this;
}

// UObjectTreeGraphObject @ 14d543cf0

UObjectTreeGraphObject * __thiscall
UObjectTreeGraphObject::UObjectTreeGraphObject
          (UObjectTreeGraphObject *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UObjectTreeGraphObject__6B_;
  return this;
}

// ~UObjectTreeGraphObject @ 14d544c60

void __thiscall UObjectTreeGraphObject::~UObjectTreeGraphObject(UObjectTreeGraphObject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d5588d0

UClass * __cdecl UObjectTreeGraphObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphObject",
               &Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton,
               StaticRegisterNativesUObjectTreeGraphObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTreeGraphObject>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton;
}

// StaticRegisterNativesUObjectTreeGraphObject @ 14d568610

void __cdecl UObjectTreeGraphObject::StaticRegisterNativesUObjectTreeGraphObject(void)

{
  return;
}

