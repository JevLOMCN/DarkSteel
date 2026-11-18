// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a78b6a0

UClass * __cdecl UCommonInputActionDataProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDataProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonInputActionDataProcessor",
               &Z_Registration_Info_UClass_UCommonInputActionDataProcessor.InnerSingleton,
               StaticRegisterNativesUCommonInputActionDataProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputActionDataProcessor>,
               InternalVTableHelperCtorCaller<UCommonInputActionDataProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDataProcessor.InnerSingleton;
}

// UCommonInputActionDataProcessor @ 14a7adb50

UCommonInputActionDataProcessor * __thiscall
UCommonInputActionDataProcessor::UCommonInputActionDataProcessor
          (UCommonInputActionDataProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCommonInputActionDataProcessor__6B_;
  return this;
}

// ~UCommonInputActionDataProcessor @ 14a7b2da0

void __thiscall
UCommonInputActionDataProcessor::~UCommonInputActionDataProcessor
          (UCommonInputActionDataProcessor *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e5820

UClass * __cdecl UCommonInputActionDataProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDataProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonInputActionDataProcessor",
               &Z_Registration_Info_UClass_UCommonInputActionDataProcessor.InnerSingleton,
               StaticRegisterNativesUCommonInputActionDataProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonInputActionDataProcessor>,
               InternalVTableHelperCtorCaller<UCommonInputActionDataProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDataProcessor.InnerSingleton;
}

// ProcessInputActions @ 14a803c00

void __thiscall
UCommonInputActionDataProcessor::ProcessInputActions
          (UCommonInputActionDataProcessor *this,UCommonGenericInputActionDataTable *param_1)

{
  return;
}

// StaticRegisterNativesUCommonInputActionDataProcessor @ 14a81e5c0

void __cdecl
UCommonInputActionDataProcessor::StaticRegisterNativesUCommonInputActionDataProcessor(void)

{
  return;
}

