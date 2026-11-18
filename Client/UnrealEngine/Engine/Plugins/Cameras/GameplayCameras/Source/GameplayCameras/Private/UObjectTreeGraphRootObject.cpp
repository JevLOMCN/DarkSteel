// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d538780

UClass * __cdecl UObjectTreeGraphRootObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphRootObject",
               &Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton,
               StaticRegisterNativesUObjectTreeGraphRootObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTreeGraphRootObject>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphRootObject>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton;
}

// UObjectTreeGraphRootObject @ 14d543d20

UObjectTreeGraphRootObject * __thiscall
UObjectTreeGraphRootObject::UObjectTreeGraphRootObject
          (UObjectTreeGraphRootObject *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UObjectTreeGraphRootObject__6B_;
  return this;
}

// UObjectTreeGraphRootObject @ 14d543d50

UObjectTreeGraphRootObject * __thiscall
UObjectTreeGraphRootObject::UObjectTreeGraphRootObject
          (UObjectTreeGraphRootObject *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UObjectTreeGraphRootObject__6B_;
  return this;
}

// ~UObjectTreeGraphRootObject @ 14d544c70

void __thiscall
UObjectTreeGraphRootObject::~UObjectTreeGraphRootObject(UObjectTreeGraphRootObject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d558990

UClass * __cdecl UObjectTreeGraphRootObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphRootObject",
               &Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton,
               StaticRegisterNativesUObjectTreeGraphRootObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTreeGraphRootObject>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphRootObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton;
}

// StaticRegisterNativesUObjectTreeGraphRootObject @ 14d568620

void __cdecl UObjectTreeGraphRootObject::StaticRegisterNativesUObjectTreeGraphRootObject(void)

{
  return;
}

