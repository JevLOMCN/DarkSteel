// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1476728e0

UClass * __cdecl USoundParameterControllerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundParameterControllerInterface",
               &Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton,
               StaticRegisterNativesUSoundParameterControllerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundParameterControllerInterface>,
               InternalVTableHelperCtorCaller<USoundParameterControllerInterface>,aFStackX_8,
               UAudioParameterControllerInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton;
}

// USoundParameterControllerInterface @ 1476890b0

USoundParameterControllerInterface * __thiscall
USoundParameterControllerInterface::USoundParameterControllerInterface
          (USoundParameterControllerInterface *this,FVTableHelper *param_1)

{
  UAudioParameterControllerInterface::UAudioParameterControllerInterface
            ((UAudioParameterControllerInterface *)this,param_1);
  *(undefined ***)this = &___7USoundParameterControllerInterface__6B_;
  return this;
}

// USoundParameterControllerInterface @ 1476890e0

USoundParameterControllerInterface * __thiscall
USoundParameterControllerInterface::USoundParameterControllerInterface
          (USoundParameterControllerInterface *this,FObjectInitializer *param_1)

{
  UAudioParameterControllerInterface::UAudioParameterControllerInterface
            ((UAudioParameterControllerInterface *)this,param_1);
  *(undefined ***)this = &___7USoundParameterControllerInterface__6B_;
  return this;
}

// ~USoundParameterControllerInterface @ 14768ac00

void __thiscall
USoundParameterControllerInterface::~USoundParameterControllerInterface
          (USoundParameterControllerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1476b48d0

UClass * __cdecl USoundParameterControllerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundParameterControllerInterface",
               &Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton,
               StaticRegisterNativesUSoundParameterControllerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundParameterControllerInterface>,
               InternalVTableHelperCtorCaller<USoundParameterControllerInterface>,local_res8,
               UAudioParameterControllerInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundParameterControllerInterface.InnerSingleton;
}

// StaticRegisterNativesUSoundParameterControllerInterface @ 1476ca470

void __cdecl
USoundParameterControllerInterface::StaticRegisterNativesUSoundParameterControllerInterface(void)

{
  return;
}

