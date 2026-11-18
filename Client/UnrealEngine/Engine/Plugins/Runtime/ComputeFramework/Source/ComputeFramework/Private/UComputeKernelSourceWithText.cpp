// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 7

// StaticClass @ 1494bd5b0

UClass * __cdecl UComputeKernelSourceWithText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernelSourceWithText",
               &Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton,
               StaticRegisterNativesUComputeKernelSourceWithText,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeKernelSourceWithText>,
               InternalVTableHelperCtorCaller<UComputeKernelSourceWithText>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton;
}

// UComputeKernelSourceWithText @ 1494c4f40

UComputeKernelSourceWithText * __thiscall
UComputeKernelSourceWithText::UComputeKernelSourceWithText
          (UComputeKernelSourceWithText *this,FVTableHelper *param_1)

{
  UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeKernelSourceWithText__6B_;
  (this->SourceText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceText).Data.ArrayNum = 0;
  (this->SourceText).Data.ArrayMax = 0;
  return this;
}

// UComputeKernelSourceWithText @ 1494c4f80

UComputeKernelSourceWithText * __thiscall
UComputeKernelSourceWithText::UComputeKernelSourceWithText
          (UComputeKernelSourceWithText *this,FObjectInitializer *param_1)

{
  UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeKernelSourceWithText__6B_;
  (this->SourceText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceText).Data.ArrayNum = 0;
  (this->SourceText).Data.ArrayMax = 0;
  return this;
}

// ~UComputeKernelSourceWithText @ 1494c5f70

void __thiscall
UComputeKernelSourceWithText::~UComputeKernelSourceWithText(UComputeKernelSourceWithText *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UComputeKernelSourceWithText__6B_;
  pFVar1 = (this->SourceText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeKernelSource::~UComputeKernelSource((UComputeKernelSource *)this);
  return;
}

// GetPrivateStaticClass @ 1494d0a00

UClass * __cdecl UComputeKernelSourceWithText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernelSourceWithText",
               &Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton,
               StaticRegisterNativesUComputeKernelSourceWithText,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeKernelSourceWithText>,
               InternalVTableHelperCtorCaller<UComputeKernelSourceWithText>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernelSourceWithText.InnerSingleton;
}

// GetSource @ 1494d1800

FString * __thiscall
UComputeKernelSourceWithText::GetSource
          (UComputeKernelSourceWithText *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SourceText);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUComputeKernelSourceWithText @ 1494d7ee0

void __cdecl UComputeKernelSourceWithText::StaticRegisterNativesUComputeKernelSourceWithText(void)

{
  return;
}

