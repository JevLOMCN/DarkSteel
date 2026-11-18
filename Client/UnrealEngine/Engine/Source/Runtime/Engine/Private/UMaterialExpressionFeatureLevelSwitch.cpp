// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472a5b90

UClass * __cdecl UMaterialExpressionFeatureLevelSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFeatureLevelSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFeatureLevelSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionFeatureLevelSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch,0x1a0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFeatureLevelSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFeatureLevelSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFeatureLevelSwitch.InnerSingleton;
}

// UMaterialExpressionFeatureLevelSwitch @ 1472acf10

UMaterialExpressionFeatureLevelSwitch * __thiscall
UMaterialExpressionFeatureLevelSwitch::UMaterialExpressionFeatureLevelSwitch
          (UMaterialExpressionFeatureLevelSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFeatureLevelSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  this->Inputs[0].OutputIndex = 0;
  this->Inputs[0].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[0].InputName.Number = 0;
  this->Inputs[0].MaskR = 0;
  this->Inputs[0].MaskG = 0;
  this->Inputs[0].MaskB = 0;
  this->Inputs[0].MaskA = 0;
  this->Inputs[0].Expression = (UMaterialExpression *)0x0;
  this->Inputs[1].OutputIndex = 0;
  this->Inputs[1].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[1].InputName.Number = 0;
  this->Inputs[1].MaskR = 0;
  this->Inputs[1].MaskG = 0;
  this->Inputs[1].MaskB = 0;
  this->Inputs[1].MaskA = 0;
  this->Inputs[1].Expression = (UMaterialExpression *)0x0;
  this->Inputs[2].OutputIndex = 0;
  this->Inputs[2].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[2].InputName.Number = 0;
  this->Inputs[2].MaskR = 0;
  this->Inputs[2].MaskG = 0;
  this->Inputs[2].MaskB = 0;
  this->Inputs[2].MaskA = 0;
  this->Inputs[2].Expression = (UMaterialExpression *)0x0;
  this->Inputs[3].OutputIndex = 0;
  this->Inputs[3].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[3].InputName.Number = 0;
  this->Inputs[3].MaskR = 0;
  this->Inputs[3].MaskG = 0;
  this->Inputs[3].MaskB = 0;
  this->Inputs[3].MaskA = 0;
  this->Inputs[3].Expression = (UMaterialExpression *)0x0;
  this->Inputs[4].OutputIndex = 0;
  this->Inputs[4].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[4].InputName.Number = 0;
  this->Inputs[4].MaskR = 0;
  this->Inputs[4].MaskG = 0;
  this->Inputs[4].MaskB = 0;
  this->Inputs[4].MaskA = 0;
  this->Inputs[4].Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionFeatureLevelSwitch @ 1472ad010

UMaterialExpressionFeatureLevelSwitch * __thiscall
UMaterialExpressionFeatureLevelSwitch::UMaterialExpressionFeatureLevelSwitch
          (UMaterialExpressionFeatureLevelSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFeatureLevelSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  this->Inputs[0].OutputIndex = 0;
  this->Inputs[0].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[0].InputName.Number = 0;
  this->Inputs[0].MaskR = 0;
  this->Inputs[0].MaskG = 0;
  this->Inputs[0].MaskB = 0;
  this->Inputs[0].MaskA = 0;
  this->Inputs[0].Expression = (UMaterialExpression *)0x0;
  this->Inputs[1].OutputIndex = 0;
  this->Inputs[1].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[1].InputName.Number = 0;
  this->Inputs[1].MaskR = 0;
  this->Inputs[1].MaskG = 0;
  this->Inputs[1].MaskB = 0;
  this->Inputs[1].MaskA = 0;
  this->Inputs[1].Expression = (UMaterialExpression *)0x0;
  this->Inputs[2].OutputIndex = 0;
  this->Inputs[2].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[2].InputName.Number = 0;
  this->Inputs[2].MaskR = 0;
  this->Inputs[2].MaskG = 0;
  this->Inputs[2].MaskB = 0;
  this->Inputs[2].MaskA = 0;
  this->Inputs[2].Expression = (UMaterialExpression *)0x0;
  this->Inputs[3].OutputIndex = 0;
  this->Inputs[3].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[3].InputName.Number = 0;
  this->Inputs[3].MaskR = 0;
  this->Inputs[3].MaskG = 0;
  this->Inputs[3].MaskB = 0;
  this->Inputs[3].MaskA = 0;
  this->Inputs[3].Expression = (UMaterialExpression *)0x0;
  this->Inputs[4].OutputIndex = 0;
  this->Inputs[4].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[4].InputName.Number = 0;
  this->Inputs[4].MaskR = 0;
  this->Inputs[4].MaskG = 0;
  this->Inputs[4].MaskB = 0;
  this->Inputs[4].MaskA = 0;
  this->Inputs[4].Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionFeatureLevelSwitch @ 1472af730

void __thiscall
UMaterialExpressionFeatureLevelSwitch::~UMaterialExpressionFeatureLevelSwitch
          (UMaterialExpressionFeatureLevelSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFeatureLevelSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2360

UClass * __cdecl UMaterialExpressionFeatureLevelSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFeatureLevelSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFeatureLevelSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionFeatureLevelSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch,0x1a0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFeatureLevelSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFeatureLevelSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFeatureLevelSwitch.InnerSingleton;
}

// Serialize @ 1472b4380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionFeatureLevelSwitch::Serialize
          (UMaterialExpressionFeatureLevelSwitch *this,FArchive *param_1)

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

// StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch @ 1472b4530

void __cdecl
UMaterialExpressionFeatureLevelSwitch::StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch
          (void)

{
  return;
}

// Serialize @ 148b04500

void __thiscall
UMaterialExpressionFeatureLevelSwitch::Serialize
          (UMaterialExpressionFeatureLevelSwitch *this,FStructuredArchiveRecord param_1)

{
  undefined8 uVar1;
  FNameEntryId FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FRenderingObjectVersion::GUID);
  if ((this_00->ArIsLoading != 0) && ((this_00->ArUEVer).FileVersionUE4 < 0x18c)) {
    iVar6 = this->Inputs[0].OutputIndex;
    FVar2.Value = this->Inputs[0].InputName.ComparisonIndex.Value;
    uVar1 = *(undefined8 *)&this->Inputs[0].InputName.Number;
    iVar3 = this->Inputs[0].MaskR;
    iVar4 = this->Inputs[0].MaskG;
    this->Inputs[1].Expression = this->Inputs[0].Expression;
    this->Inputs[1].OutputIndex = iVar6;
    this->Inputs[1].InputName.ComparisonIndex = (FNameEntryId)FVar2.Value;
    iVar6 = this->Inputs[0].MaskB;
    iVar5 = this->Inputs[0].MaskA;
    *(undefined8 *)&this->Inputs[1].InputName.Number = uVar1;
    this->Inputs[1].MaskR = iVar3;
    this->Inputs[1].MaskG = iVar4;
    this->Inputs[1].MaskB = iVar6;
    this->Inputs[1].MaskA = iVar5;
  }
  iVar6 = FArchiveState::CustomVer(this_00,&FRenderingObjectVersion::GUID);
  if (iVar6 < 0x23) {
    iVar6 = (this->Default).OutputIndex;
    FVar2.Value = (this->Default).InputName.ComparisonIndex.Value;
    uVar1 = *(undefined8 *)&(this->Default).InputName.Number;
    iVar3 = (this->Default).MaskR;
    iVar4 = (this->Default).MaskG;
    this->Inputs[2].Expression = (this->Default).Expression;
    this->Inputs[2].OutputIndex = iVar6;
    this->Inputs[2].InputName.ComparisonIndex = (FNameEntryId)FVar2.Value;
    iVar6 = (this->Default).MaskB;
    iVar5 = (this->Default).MaskA;
    *(undefined8 *)&this->Inputs[2].InputName.Number = uVar1;
    this->Inputs[2].MaskR = iVar3;
    this->Inputs[2].MaskG = iVar4;
    this->Inputs[2].MaskB = iVar6;
    this->Inputs[2].MaskA = iVar5;
  }
  return;
}

