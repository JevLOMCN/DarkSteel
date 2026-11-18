// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472b75d0

UClass * __cdecl UMaterialExpressionMotionVectorWorldOffsetOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMotionVectorWorldOffsetOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionMotionVectorWorldOffsetOutput
               ,0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMotionVectorWorldOffsetOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMotionVectorWorldOffsetOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput.InnerSingleton;
}

// UMaterialExpressionMotionVectorWorldOffsetOutput @ 1472c0020

UMaterialExpressionMotionVectorWorldOffsetOutput * __thiscall
UMaterialExpressionMotionVectorWorldOffsetOutput::UMaterialExpressionMotionVectorWorldOffsetOutput
          (UMaterialExpressionMotionVectorWorldOffsetOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMotionVectorWorldOffsetOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionMotionVectorWorldOffsetOutput @ 1472c2030

void __thiscall
UMaterialExpressionMotionVectorWorldOffsetOutput::~UMaterialExpressionMotionVectorWorldOffsetOutput
          (UMaterialExpressionMotionVectorWorldOffsetOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMotionVectorWorldOffsetOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472c46f0

UClass * __cdecl UMaterialExpressionMotionVectorWorldOffsetOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMotionVectorWorldOffsetOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionMotionVectorWorldOffsetOutput
               ,0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMotionVectorWorldOffsetOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMotionVectorWorldOffsetOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMotionVectorWorldOffsetOutput @ 1472c7460

void __cdecl
UMaterialExpressionMotionVectorWorldOffsetOutput::
StaticRegisterNativesUMaterialExpressionMotionVectorWorldOffsetOutput(void)

{
  return;
}

// UMaterialExpressionMotionVectorWorldOffsetOutput @ 148afd370

UMaterialExpressionMotionVectorWorldOffsetOutput * __thiscall
UMaterialExpressionMotionVectorWorldOffsetOutput::UMaterialExpressionMotionVectorWorldOffsetOutput
          (UMaterialExpressionMotionVectorWorldOffsetOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMotionVectorWorldOffsetOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b007d0

FString * __thiscall
UMaterialExpressionMotionVectorWorldOffsetOutput::GetDisplayName
          (UMaterialExpressionMotionVectorWorldOffsetOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MotionVectorWorldOffset");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00b70

FString * __thiscall
UMaterialExpressionMotionVectorWorldOffsetOutput::GetFunctionName
          (UMaterialExpressionMotionVectorWorldOffsetOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetMotionVectorWorldOffsetOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b02170

int __thiscall
UMaterialExpressionMotionVectorWorldOffsetOutput::GetNumOutputs
          (UMaterialExpressionMotionVectorWorldOffsetOutput *this)

{
  return 1;
}

