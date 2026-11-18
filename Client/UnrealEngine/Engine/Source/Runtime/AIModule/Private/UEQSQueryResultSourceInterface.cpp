// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146e78680

UClass * __cdecl UEQSQueryResultSourceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSQueryResultSourceInterface",
               &Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton,
               StaticRegisterNativesUEQSQueryResultSourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEQSQueryResultSourceInterface>,
               InternalVTableHelperCtorCaller<UEQSQueryResultSourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton;
}

// UEQSQueryResultSourceInterface @ 146e81650

UEQSQueryResultSourceInterface * __thiscall
UEQSQueryResultSourceInterface::UEQSQueryResultSourceInterface
          (UEQSQueryResultSourceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UEQSQueryResultSourceInterface__6B_;
  return this;
}

// ~UEQSQueryResultSourceInterface @ 146e820c0

void __thiscall
UEQSQueryResultSourceInterface::~UEQSQueryResultSourceInterface
          (UEQSQueryResultSourceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146e8f6b0

UClass * __cdecl UEQSQueryResultSourceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSQueryResultSourceInterface",
               &Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton,
               StaticRegisterNativesUEQSQueryResultSourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEQSQueryResultSourceInterface>,
               InternalVTableHelperCtorCaller<UEQSQueryResultSourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton;
}

// StaticRegisterNativesUEQSQueryResultSourceInterface @ 146ea0250

void __cdecl
UEQSQueryResultSourceInterface::StaticRegisterNativesUEQSQueryResultSourceInterface(void)

{
  return;
}

// UEQSQueryResultSourceInterface @ 146f2a130

UEQSQueryResultSourceInterface * __thiscall
UEQSQueryResultSourceInterface::UEQSQueryResultSourceInterface
          (UEQSQueryResultSourceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UEQSQueryResultSourceInterface__6B_;
  return this;
}

