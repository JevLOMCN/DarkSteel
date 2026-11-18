// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472b9310

UClass * __cdecl UMaterialExpressionReroute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionReroute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionReroute",
               &Z_Registration_Info_UClass_UMaterialExpressionReroute.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionReroute,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionReroute>,
               InternalVTableHelperCtorCaller<UMaterialExpressionReroute>,local_res8,
               UMaterialExpressionRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionReroute.InnerSingleton;
}

// UMaterialExpressionReroute @ 1472c1b60

UMaterialExpressionReroute * __thiscall
UMaterialExpressionReroute::UMaterialExpressionReroute
          (UMaterialExpressionReroute *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionReroute__6B_;
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

// UMaterialExpressionReroute @ 1472c1bb0

UMaterialExpressionReroute * __thiscall
UMaterialExpressionReroute::UMaterialExpressionReroute
          (UMaterialExpressionReroute *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionReroute__6B_;
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

// ~UMaterialExpressionReroute @ 1472c2730

void __thiscall
UMaterialExpressionReroute::~UMaterialExpressionReroute(UMaterialExpressionReroute *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRerouteBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6f70

UClass * __cdecl UMaterialExpressionReroute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionReroute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionReroute",
               &Z_Registration_Info_UClass_UMaterialExpressionReroute.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionReroute,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionReroute>,
               InternalVTableHelperCtorCaller<UMaterialExpressionReroute>,local_res8,
               UMaterialExpressionRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionReroute.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionReroute @ 1472c77c0

void __cdecl UMaterialExpressionReroute::StaticRegisterNativesUMaterialExpressionReroute(void)

{
  return;
}

// GetRerouteInput @ 148b02490

bool __thiscall
UMaterialExpressionReroute::GetRerouteInput
          (UMaterialExpressionReroute *this,FExpressionInput *param_1)

{
  int iVar1;
  FNameEntryId FVar2;
  int iVar3;
  
  iVar1 = (this->Input).OutputIndex;
  FVar2.Value = (this->Input).InputName.ComparisonIndex.Value;
  param_1->Expression = (this->Input).Expression;
  param_1->OutputIndex = iVar1;
  (param_1->InputName).ComparisonIndex = (FNameEntryId)FVar2.Value;
  iVar1 = (this->Input).MaskR;
  iVar3 = (this->Input).MaskG;
  *(undefined8 *)&(param_1->InputName).Number = *(undefined8 *)&(this->Input).InputName.Number;
  param_1->MaskR = iVar1;
  param_1->MaskG = iVar3;
  iVar1 = (this->Input).MaskA;
  param_1->MaskB = (this->Input).MaskB;
  param_1->MaskA = iVar1;
  return true;
}

