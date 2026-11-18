// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147297010

UClass * __cdecl UMaterialExpressionColorRamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionColorRamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionColorRamp",
               &Z_Registration_Info_UClass_UMaterialExpressionColorRamp.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionColorRamp,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionColorRamp>,
               InternalVTableHelperCtorCaller<UMaterialExpressionColorRamp>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionColorRamp.InnerSingleton;
}

// UMaterialExpressionColorRamp @ 14729c620

UMaterialExpressionColorRamp * __thiscall
UMaterialExpressionColorRamp::UMaterialExpressionColorRamp
          (UMaterialExpressionColorRamp *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstInput = 0.5;
  this->_padding_ = (longlong)&___7UMaterialExpressionColorRamp__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->ColorCurve).field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  return this;
}

// ~UMaterialExpressionColorRamp @ 14729d850

void __thiscall
UMaterialExpressionColorRamp::~UMaterialExpressionColorRamp(UMaterialExpressionColorRamp *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionColorRamp__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0110

UClass * __cdecl UMaterialExpressionColorRamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionColorRamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionColorRamp",
               &Z_Registration_Info_UClass_UMaterialExpressionColorRamp.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionColorRamp,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionColorRamp>,
               InternalVTableHelperCtorCaller<UMaterialExpressionColorRamp>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionColorRamp.InnerSingleton;
}

// Serialize @ 1472a1b10

void __thiscall
UMaterialExpressionColorRamp::Serialize
          (UMaterialExpressionColorRamp *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUMaterialExpressionColorRamp @ 1472a1cd0

void __cdecl UMaterialExpressionColorRamp::StaticRegisterNativesUMaterialExpressionColorRamp(void)

{
  return;
}

// UMaterialExpressionColorRamp @ 148afaf10

UMaterialExpressionColorRamp * __thiscall
UMaterialExpressionColorRamp::UMaterialExpressionColorRamp
          (UMaterialExpressionColorRamp *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ConstInput = 0.5;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionColorRamp__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->ColorCurve).field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  return this;
}

// Serialize @ 148b03a90

void __thiscall
UMaterialExpressionColorRamp::Serialize(UMaterialExpressionColorRamp *this,FArchive *param_1)

{
  UCurveLinearColor *pUVar1;
  
  if ((((param_1->field_0x28 & 4) != 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    pUVar1 = (this->ColorCurve).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UCurveLinearColor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ColorCurve).field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
    UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveLinearColor *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ColorCurve).field0_0x0.DebugPtr = pUVar1;
    return;
  }
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  return;
}

