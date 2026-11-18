// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147294fa0

UClass * __cdecl UMaterialExpressionBreakMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBreakMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBreakMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBreakMaterialAttributes>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.InnerSingleton;
}

// UMaterialExpressionBreakMaterialAttributes @ 14729c090

UMaterialExpressionBreakMaterialAttributes * __thiscall
UMaterialExpressionBreakMaterialAttributes::UMaterialExpressionBreakMaterialAttributes
          (UMaterialExpressionBreakMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBreakMaterialAttributes__6B_;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
  return this;
}

// ~UMaterialExpressionBreakMaterialAttributes @ 14729d6f0

void __thiscall
UMaterialExpressionBreakMaterialAttributes::~UMaterialExpressionBreakMaterialAttributes
          (UMaterialExpressionBreakMaterialAttributes *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBreakMaterialAttributes__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729f8d0

UClass * __cdecl UMaterialExpressionBreakMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBreakMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBreakMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBreakMaterialAttributes>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.InnerSingleton;
}

// Serialize @ 1472a1a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionBreakMaterialAttributes::Serialize
          (UMaterialExpressionBreakMaterialAttributes *this,FArchive *param_1)

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

// StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes @ 1472a1c20

void __cdecl
UMaterialExpressionBreakMaterialAttributes::
StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes(void)

{
  return;
}

// UMaterialExpressionBreakMaterialAttributes @ 148afaae0

UMaterialExpressionBreakMaterialAttributes * __thiscall
UMaterialExpressionBreakMaterialAttributes::UMaterialExpressionBreakMaterialAttributes
          (UMaterialExpressionBreakMaterialAttributes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBreakMaterialAttributes__6B_;
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
  this->_padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
  return this;
}

// Serialize @ 148b039f0

void __thiscall
UMaterialExpressionBreakMaterialAttributes::Serialize
          (UMaterialExpressionBreakMaterialAttributes *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FRenderingObjectVersion::GUID);
  return;
}

