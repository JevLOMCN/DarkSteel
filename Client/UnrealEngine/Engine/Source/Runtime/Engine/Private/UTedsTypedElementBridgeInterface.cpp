// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732f360

UClass * __cdecl UTedsTypedElementBridgeInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTedsTypedElementBridgeInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TedsTypedElementBridgeInterface",
               &Z_Registration_Info_UClass_UTedsTypedElementBridgeInterface.InnerSingleton,
               StaticRegisterNativesUTedsTypedElementBridgeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTedsTypedElementBridgeInterface>,
               InternalVTableHelperCtorCaller<UTedsTypedElementBridgeInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTedsTypedElementBridgeInterface.InnerSingleton;
}

// UTedsTypedElementBridgeInterface @ 147331210

UTedsTypedElementBridgeInterface * __thiscall
UTedsTypedElementBridgeInterface::UTedsTypedElementBridgeInterface
          (UTedsTypedElementBridgeInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTedsTypedElementBridgeInterface__6B_;
  return this;
}

// UTedsTypedElementBridgeInterface @ 147331240

UTedsTypedElementBridgeInterface * __thiscall
UTedsTypedElementBridgeInterface::UTedsTypedElementBridgeInterface
          (UTedsTypedElementBridgeInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTedsTypedElementBridgeInterface__6B_;
  return this;
}

// ~UTedsTypedElementBridgeInterface @ 147331550

void __thiscall
UTedsTypedElementBridgeInterface::~UTedsTypedElementBridgeInterface
          (UTedsTypedElementBridgeInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147332f00

UClass * __cdecl UTedsTypedElementBridgeInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTedsTypedElementBridgeInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TedsTypedElementBridgeInterface",
               &Z_Registration_Info_UClass_UTedsTypedElementBridgeInterface.InnerSingleton,
               StaticRegisterNativesUTedsTypedElementBridgeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTedsTypedElementBridgeInterface>,
               InternalVTableHelperCtorCaller<UTedsTypedElementBridgeInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTedsTypedElementBridgeInterface.InnerSingleton;
}

// StaticRegisterNativesUTedsTypedElementBridgeInterface @ 147333490

void __cdecl
UTedsTypedElementBridgeInterface::StaticRegisterNativesUTedsTypedElementBridgeInterface(void)

{
  return;
}

