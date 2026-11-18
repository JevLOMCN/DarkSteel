// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145fad330

UClass * __cdecl UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapePhysicalMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapePhysicalMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapePhysicalMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
         InnerSingleton;
}

// UMaterialExpressionLandscapePhysicalMaterialOutput @ 145fb6000

UMaterialExpressionLandscapePhysicalMaterialOutput * __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::
UMaterialExpressionLandscapePhysicalMaterialOutput
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapePhysicalMaterialOutput__6B_;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  return this;
}

// UMaterialExpressionLandscapePhysicalMaterialOutput @ 145fb6040

UMaterialExpressionLandscapePhysicalMaterialOutput * __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::
UMaterialExpressionLandscapePhysicalMaterialOutput
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapePhysicalMaterialOutput__6B_;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
      atexit(`UMaterialExpressionLandscapePhysicalMaterialOutput::
             UMaterialExpressionLandscapePhysicalMaterialOutput'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionLandscapePhysicalMaterialOutput @ 145fb6bd0

void __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::
~UMaterialExpressionLandscapePhysicalMaterialOutput
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapePhysicalMaterialOutput__6B_;
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetFunctionName @ 145fc17c0

FString * __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::GetFunctionName
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetPhysicalMaterial");
  return __return_storage_ptr__;
}

// GetMaxOutputs @ 145fc2930

int __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::GetMaxOutputs
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this)

{
  return 0x10;
}

// GetNumOutputs @ 145fc31a0

int __thiscall
UMaterialExpressionLandscapePhysicalMaterialOutput::GetNumOutputs
          (UMaterialExpressionLandscapePhysicalMaterialOutput *this)

{
  return (this->Inputs).ArrayNum;
}

// GetPrivateStaticClass @ 145fc3b10

UClass * __cdecl UMaterialExpressionLandscapePhysicalMaterialOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapePhysicalMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapePhysicalMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapePhysicalMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput @ 145fc87e0

void __cdecl
UMaterialExpressionLandscapePhysicalMaterialOutput::
StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput(void)

{
  return;
}

