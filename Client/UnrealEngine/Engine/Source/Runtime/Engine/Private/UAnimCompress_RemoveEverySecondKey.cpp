// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147424130

UClass * __cdecl UAnimCompress_RemoveEverySecondKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveEverySecondKey",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton,
               StaticRegisterNativesUAnimCompress_RemoveEverySecondKey,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveEverySecondKey>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveEverySecondKey>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton;
}

// UAnimCompress_RemoveEverySecondKey @ 147434c70

UAnimCompress_RemoveEverySecondKey * __thiscall
UAnimCompress_RemoveEverySecondKey::UAnimCompress_RemoveEverySecondKey
          (UAnimCompress_RemoveEverySecondKey *this,FVTableHelper *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveEverySecondKey__6B_;
  return this;
}

// UAnimCompress_RemoveEverySecondKey @ 147434ca0

UAnimCompress_RemoveEverySecondKey * __thiscall
UAnimCompress_RemoveEverySecondKey::UAnimCompress_RemoveEverySecondKey
          (UAnimCompress_RemoveEverySecondKey *this,FObjectInitializer *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveEverySecondKey__6B_;
  ::FString::operator=((FString *)&this->_padding_,L"Remove Every Second Key");
  this->MinKeys = 10;
  return this;
}

// ~UAnimCompress_RemoveEverySecondKey @ 147436a00

void __thiscall
UAnimCompress_RemoveEverySecondKey::~UAnimCompress_RemoveEverySecondKey
          (UAnimCompress_RemoveEverySecondKey *this)

{
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveEverySecondKey__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  return;
}

// GetPrivateStaticClass @ 147461ee0

UClass * __cdecl UAnimCompress_RemoveEverySecondKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveEverySecondKey",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton,
               StaticRegisterNativesUAnimCompress_RemoveEverySecondKey,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveEverySecondKey>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveEverySecondKey>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress_RemoveEverySecondKey @ 14747b280

void __cdecl
UAnimCompress_RemoveEverySecondKey::StaticRegisterNativesUAnimCompress_RemoveEverySecondKey(void)

{
  return;
}

