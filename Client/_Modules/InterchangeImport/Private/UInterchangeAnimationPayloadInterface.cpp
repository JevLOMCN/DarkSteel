// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e673d20

UClass * __cdecl UInterchangeAnimationPayloadInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAnimationPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimationPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAnimationPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationPayloadInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton;
}

// UInterchangeAnimationPayloadInterface @ 14e6903e0

UInterchangeAnimationPayloadInterface * __thiscall
UInterchangeAnimationPayloadInterface::UInterchangeAnimationPayloadInterface
          (UInterchangeAnimationPayloadInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAnimationPayloadInterface__6B_;
  return this;
}

// UInterchangeAnimationPayloadInterface @ 14e690410

UInterchangeAnimationPayloadInterface * __thiscall
UInterchangeAnimationPayloadInterface::UInterchangeAnimationPayloadInterface
          (UInterchangeAnimationPayloadInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterchangeAnimationPayloadInterface__6B_;
  return this;
}

// ~UInterchangeAnimationPayloadInterface @ 14e691dc0

void __thiscall
UInterchangeAnimationPayloadInterface::~UInterchangeAnimationPayloadInterface
          (UInterchangeAnimationPayloadInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e69fc40

UClass * __cdecl UInterchangeAnimationPayloadInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAnimationPayloadInterface",
               &Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimationPayloadInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAnimationPayloadInterface>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationPayloadInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.InnerSingleton;
}

// StaticRegisterNativesUInterchangeAnimationPayloadInterface @ 14e6a8100

void __cdecl
UInterchangeAnimationPayloadInterface::StaticRegisterNativesUInterchangeAnimationPayloadInterface
          (void)

{
  return;
}

