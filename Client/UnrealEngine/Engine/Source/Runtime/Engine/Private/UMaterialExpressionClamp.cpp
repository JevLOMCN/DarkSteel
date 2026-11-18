// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472961e0

UClass * __cdecl UMaterialExpressionClamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionClamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionClamp",
               &Z_Registration_Info_UClass_UMaterialExpressionClamp.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionClamp,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionClamp>,
               InternalVTableHelperCtorCaller<UMaterialExpressionClamp>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionClamp.InnerSingleton;
}

// UMaterialExpressionClamp @ 14729c360

UMaterialExpressionClamp * __thiscall
UMaterialExpressionClamp::UMaterialExpressionClamp
          (UMaterialExpressionClamp *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->MaxDefault = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionClamp__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Min).OutputIndex = 0;
  (this->Min).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Min).InputName.Number = 0;
  (this->Min).MaskR = 0;
  (this->Min).MaskG = 0;
  (this->Min).MaskB = 0;
  (this->Min).MaskA = 0;
  (this->Min).Expression = (UMaterialExpression *)0x0;
  (this->Max).OutputIndex = 0;
  (this->Max).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Max).InputName.Number = 0;
  (this->Max).MaskR = 0;
  (this->Max).MaskG = 0;
  (this->Max).MaskB = 0;
  (this->Max).MaskA = 0;
  (this->Max).Expression = (UMaterialExpression *)0x0;
  (this->ClampMode).Value = '\0';
  this->MinDefault = 0.0;
  return this;
}

// UMaterialExpressionClamp @ 14729c410

UMaterialExpressionClamp * __thiscall
UMaterialExpressionClamp::UMaterialExpressionClamp
          (UMaterialExpressionClamp *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->MaxDefault = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionClamp__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Min).OutputIndex = 0;
  (this->Min).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Min).InputName.Number = 0;
  (this->Min).MaskR = 0;
  (this->Min).MaskG = 0;
  (this->Min).MaskB = 0;
  (this->Min).MaskA = 0;
  (this->Min).Expression = (UMaterialExpression *)0x0;
  (this->Max).OutputIndex = 0;
  (this->Max).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Max).InputName.Number = 0;
  (this->Max).MaskR = 0;
  (this->Max).MaskG = 0;
  (this->Max).MaskB = 0;
  (this->Max).MaskA = 0;
  (this->Max).Expression = (UMaterialExpression *)0x0;
  (this->ClampMode).Value = '\0';
  this->MinDefault = 0.0;
  return this;
}

// ~UMaterialExpressionClamp @ 14729d7b0

void __thiscall UMaterialExpressionClamp::~UMaterialExpressionClamp(UMaterialExpressionClamp *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionClamp__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729fd50

UClass * __cdecl UMaterialExpressionClamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionClamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionClamp",
               &Z_Registration_Info_UClass_UMaterialExpressionClamp.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionClamp,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionClamp>,
               InternalVTableHelperCtorCaller<UMaterialExpressionClamp>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionClamp.InnerSingleton;
}

// Serialize @ 1472a1aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionClamp::Serialize(UMaterialExpressionClamp *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUMaterialExpressionClamp @ 1472a1c80

void __cdecl UMaterialExpressionClamp::StaticRegisterNativesUMaterialExpressionClamp(void)

{
  return;
}

// Serialize @ 148b03a30

void __thiscall
UMaterialExpressionClamp::Serialize(UMaterialExpressionClamp *this,FStructuredArchiveRecord param_1)

{
  uchar uVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if (((pFVar2->field_0x28 & 1) != 0) && (*(int *)&pFVar2->field_0x40 < 0x109)) {
    uVar1 = (this->ClampMode).Value;
    if (uVar1 == '\x01') {
      (this->ClampMode).Value = '\x02';
      return;
    }
    if (uVar1 == '\x02') {
      (this->ClampMode).Value = '\x01';
    }
  }
  return;
}

