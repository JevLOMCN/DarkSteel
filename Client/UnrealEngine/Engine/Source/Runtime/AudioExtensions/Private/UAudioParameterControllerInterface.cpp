// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452a210

UClass * __cdecl UAudioParameterControllerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioParameterControllerInterface",
               &Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton,
               StaticRegisterNativesUAudioParameterControllerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioParameterControllerInterface>,
               InternalVTableHelperCtorCaller<UAudioParameterControllerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton;
}

// UAudioParameterControllerInterface @ 14452ff10

UAudioParameterControllerInterface * __thiscall
UAudioParameterControllerInterface::UAudioParameterControllerInterface
          (UAudioParameterControllerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioParameterControllerInterface__6B_;
  return this;
}

// UAudioParameterControllerInterface @ 14452ff40

UAudioParameterControllerInterface * __thiscall
UAudioParameterControllerInterface::UAudioParameterControllerInterface
          (UAudioParameterControllerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioParameterControllerInterface__6B_;
  return this;
}

// ~UAudioParameterControllerInterface @ 144530b70

void __thiscall
UAudioParameterControllerInterface::~UAudioParameterControllerInterface
          (UAudioParameterControllerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144534c30

UClass * __cdecl UAudioParameterControllerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioParameterControllerInterface",
               &Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton,
               StaticRegisterNativesUAudioParameterControllerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioParameterControllerInterface>,
               InternalVTableHelperCtorCaller<UAudioParameterControllerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton;
}

// StaticRegisterNativesUAudioParameterControllerInterface @ 144537a60

void __cdecl
UAudioParameterControllerInterface::StaticRegisterNativesUAudioParameterControllerInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UAudioParameterControllerInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

