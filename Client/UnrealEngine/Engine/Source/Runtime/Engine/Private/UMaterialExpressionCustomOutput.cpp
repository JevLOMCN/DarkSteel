// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetMaxOutputs @ 14728f050

int __thiscall UMaterialExpressionCustomOutput::GetMaxOutputs(UMaterialExpressionCustomOutput *this)

{
  return -1;
}

// UMaterialExpressionCustomOutput @ 14729ccb0

UMaterialExpressionCustomOutput * __thiscall
UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
          (UMaterialExpressionCustomOutput *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCustomOutput__6B_;
  return this;
}

// UMaterialExpressionCustomOutput @ 14729cce0

UMaterialExpressionCustomOutput * __thiscall
UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
          (UMaterialExpressionCustomOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCustomOutput__6B_;
  return this;
}

// ~UMaterialExpressionCustomOutput @ 14729db30

void __thiscall
UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
          (UMaterialExpressionCustomOutput *this)

{
  *(undefined ***)this = &___7UMaterialExpressionCustomOutput__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetFunctionName @ 14729f4a0

FString * __thiscall
UMaterialExpressionCustomOutput::GetFunctionName
          (UMaterialExpressionCustomOutput *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialExpressionCustomOutput.h"
             ,0x18,L"Pure virtual not implemented (%s)");
  ::FString::FString(__return_storage_ptr__,L"GetCustomOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 14729f4f0

int __thiscall UMaterialExpressionCustomOutput::GetNumOutputs(UMaterialExpressionCustomOutput *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1472a0b90

UClass * __cdecl UMaterialExpressionCustomOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCustomOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCustomOutput,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionCustomOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCustomOutput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCustomOutput @ 1472a1db0

void __cdecl
UMaterialExpressionCustomOutput::StaticRegisterNativesUMaterialExpressionCustomOutput(void)

{
  return;
}

