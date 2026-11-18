// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472b7ad0

UClass * __cdecl UMaterialExpressionRerouteBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRerouteBase",
               &Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRerouteBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionRerouteBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRerouteBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.InnerSingleton;
}

// UMaterialExpressionRerouteBase @ 1472c1c00

UMaterialExpressionRerouteBase * __thiscall
UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
          (UMaterialExpressionRerouteBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionRerouteBase__6B_;
  return this;
}

// UMaterialExpressionRerouteBase @ 1472c1c30

UMaterialExpressionRerouteBase * __thiscall
UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
          (UMaterialExpressionRerouteBase *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionRerouteBase__6B_;
  return this;
}

// ~UMaterialExpressionRerouteBase @ 1472c2750

void __thiscall
UMaterialExpressionRerouteBase::~UMaterialExpressionRerouteBase
          (UMaterialExpressionRerouteBase *this)

{
  *(undefined ***)this = &___7UMaterialExpressionRerouteBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c7030

UClass * __cdecl UMaterialExpressionRerouteBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRerouteBase",
               &Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRerouteBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionRerouteBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRerouteBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.InnerSingleton;
}

// GetRerouteInput @ 1472c73f0

bool __thiscall
UMaterialExpressionRerouteBase::GetRerouteInput
          (UMaterialExpressionRerouteBase *this,FExpressionInput *param_1)

{
  return false;
}

// StaticRegisterNativesUMaterialExpressionRerouteBase @ 1472c77d0

void __cdecl
UMaterialExpressionRerouteBase::StaticRegisterNativesUMaterialExpressionRerouteBase(void)

{
  return;
}

// TraceInputsToRealExpression @ 148b04810

UMaterialExpression * __thiscall
UMaterialExpressionRerouteBase::TraceInputsToRealExpression
          (UMaterialExpressionRerouteBase *this,int *param_1)

{
  *param_1 = 0;
  return (UMaterialExpression *)0x0;
}

// TraceInputsToRealExpressionInternal @ 148b04820

FExpressionInput * __thiscall
UMaterialExpressionRerouteBase::TraceInputsToRealExpressionInternal
          (UMaterialExpressionRerouteBase *this,FExpressionInput *__return_storage_ptr__,
          TSet<FMaterialExpressionKey,DefaultKeyFuncs<FMaterialExpressionKey,0>,FDefaultSetAllocator>
          *param_1)

{
  __return_storage_ptr__->OutputIndex = 0;
  (__return_storage_ptr__->InputName).ComparisonIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputName).Number = 0;
  __return_storage_ptr__->MaskR = 0;
  __return_storage_ptr__->MaskG = 0;
  __return_storage_ptr__->MaskB = 0;
  __return_storage_ptr__->MaskA = 0;
  __return_storage_ptr__->Expression = (UMaterialExpression *)0x0;
  return __return_storage_ptr__;
}

// TraceInputsToRealInput @ 148b04840

FExpressionInput * __thiscall
UMaterialExpressionRerouteBase::TraceInputsToRealInput
          (UMaterialExpressionRerouteBase *this,FExpressionInput *__return_storage_ptr__)

{
  __return_storage_ptr__->OutputIndex = 0;
  (__return_storage_ptr__->InputName).ComparisonIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputName).Number = 0;
  __return_storage_ptr__->MaskR = 0;
  __return_storage_ptr__->MaskG = 0;
  __return_storage_ptr__->MaskB = 0;
  __return_storage_ptr__->MaskA = 0;
  __return_storage_ptr__->Expression = (UMaterialExpression *)0x0;
  return __return_storage_ptr__;
}

