// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147b29560

UClass * __cdecl USMInstanceElementIdMapTransactor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementIdMapTransactor",
               &Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementIdMapTransactor,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceElementIdMapTransactor>,
               InternalVTableHelperCtorCaller<USMInstanceElementIdMapTransactor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.InnerSingleton;
}

// USMInstanceElementIdMapTransactor @ 147b3b800

USMInstanceElementIdMapTransactor * __thiscall
USMInstanceElementIdMapTransactor::USMInstanceElementIdMapTransactor
          (USMInstanceElementIdMapTransactor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USMInstanceElementIdMapTransactor__6B_;
  return this;
}

// USMInstanceElementIdMapTransactor @ 147b3b830

USMInstanceElementIdMapTransactor * __thiscall
USMInstanceElementIdMapTransactor::USMInstanceElementIdMapTransactor
          (USMInstanceElementIdMapTransactor *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7USMInstanceElementIdMapTransactor__6B_;
  return this;
}

// ~USMInstanceElementIdMapTransactor @ 147b3da30

void __thiscall
USMInstanceElementIdMapTransactor::~USMInstanceElementIdMapTransactor
          (USMInstanceElementIdMapTransactor *this)

{
  *(undefined ***)this = &___7USMInstanceElementIdMapTransactor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6c6b0

UClass * __cdecl USMInstanceElementIdMapTransactor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementIdMapTransactor",
               &Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementIdMapTransactor,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceElementIdMapTransactor>,
               InternalVTableHelperCtorCaller<USMInstanceElementIdMapTransactor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.InnerSingleton;
}

// StaticRegisterNativesUSMInstanceElementIdMapTransactor @ 147b8ecf0

void __cdecl
USMInstanceElementIdMapTransactor::StaticRegisterNativesUSMInstanceElementIdMapTransactor(void)

{
  return;
}

