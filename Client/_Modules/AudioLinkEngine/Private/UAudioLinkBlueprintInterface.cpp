// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 6

// StaticClass @ 1464cb6f0

UClass * __cdecl UAudioLinkBlueprintInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioLinkEngine",L"AudioLinkBlueprintInterface",
               &Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton,
               StaticRegisterNativesUAudioLinkBlueprintInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioLinkBlueprintInterface>,
               InternalVTableHelperCtorCaller<UAudioLinkBlueprintInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton;
}

// UAudioLinkBlueprintInterface @ 1464cbe20

UAudioLinkBlueprintInterface * __thiscall
UAudioLinkBlueprintInterface::UAudioLinkBlueprintInterface
          (UAudioLinkBlueprintInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioLinkBlueprintInterface__6B_;
  return this;
}

// UAudioLinkBlueprintInterface @ 1464cbe50

UAudioLinkBlueprintInterface * __thiscall
UAudioLinkBlueprintInterface::UAudioLinkBlueprintInterface
          (UAudioLinkBlueprintInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioLinkBlueprintInterface__6B_;
  return this;
}

// ~UAudioLinkBlueprintInterface @ 1464cc150

void __thiscall
UAudioLinkBlueprintInterface::~UAudioLinkBlueprintInterface(UAudioLinkBlueprintInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1464cd240

UClass * __cdecl UAudioLinkBlueprintInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioLinkEngine",L"AudioLinkBlueprintInterface",
               &Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton,
               StaticRegisterNativesUAudioLinkBlueprintInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioLinkBlueprintInterface>,
               InternalVTableHelperCtorCaller<UAudioLinkBlueprintInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioLinkBlueprintInterface.InnerSingleton;
}

// StaticRegisterNativesUAudioLinkBlueprintInterface @ 1464ce4e0

void __cdecl UAudioLinkBlueprintInterface::StaticRegisterNativesUAudioLinkBlueprintInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

