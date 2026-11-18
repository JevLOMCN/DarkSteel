// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145ef0870

UClass * __cdecl ULandscapeSplineInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplineInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineInterface",
               &Z_Registration_Info_UClass_ULandscapeSplineInterface.InnerSingleton,
               StaticRegisterNativesULandscapeSplineInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSplineInterface>,
               InternalVTableHelperCtorCaller<ULandscapeSplineInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplineInterface.InnerSingleton;
}

// ULandscapeSplineInterface @ 145ef3e20

ULandscapeSplineInterface * __thiscall
ULandscapeSplineInterface::ULandscapeSplineInterface
          (ULandscapeSplineInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULandscapeSplineInterface__6B_;
  return this;
}

// ~ULandscapeSplineInterface @ 145ef44e0

void __thiscall
ULandscapeSplineInterface::~ULandscapeSplineInterface(ULandscapeSplineInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5c50

UClass * __cdecl ULandscapeSplineInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSplineInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineInterface",
               &Z_Registration_Info_UClass_ULandscapeSplineInterface.InnerSingleton,
               StaticRegisterNativesULandscapeSplineInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSplineInterface>,
               InternalVTableHelperCtorCaller<ULandscapeSplineInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSplineInterface.InnerSingleton;
}

// StaticRegisterNativesULandscapeSplineInterface @ 145ef60c0

void __cdecl ULandscapeSplineInterface::StaticRegisterNativesULandscapeSplineInterface(void)

{
  return;
}

// ULandscapeSplineInterface @ 145fb5510

ULandscapeSplineInterface * __thiscall
ULandscapeSplineInterface::ULandscapeSplineInterface
          (ULandscapeSplineInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULandscapeSplineInterface__6B_;
  return this;
}

