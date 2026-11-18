// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472b7fe0

UClass * __cdecl UMaterialExpressionNamedRerouteUsage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNamedRerouteUsage",
               &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNamedRerouteUsage,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNamedRerouteUsage>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNamedRerouteUsage>,local_res8,
               UMaterialExpressionNamedRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.InnerSingleton;
}

// UMaterialExpressionNamedRerouteUsage @ 1472c0240

UMaterialExpressionNamedRerouteUsage * __thiscall
UMaterialExpressionNamedRerouteUsage::UMaterialExpressionNamedRerouteUsage
          (UMaterialExpressionNamedRerouteUsage *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNamedRerouteUsage__6B_;
  (this->Declaration).field0_0x0.DebugPtr = (UMaterialExpressionNamedRerouteDeclaration *)0x0;
  (this->DeclarationGuid).A = 0;
  (this->DeclarationGuid).B = 0;
  (this->DeclarationGuid).C = 0;
  (this->DeclarationGuid).D = 0;
  return this;
}

// UMaterialExpressionNamedRerouteUsage @ 1472c0280

UMaterialExpressionNamedRerouteUsage * __thiscall
UMaterialExpressionNamedRerouteUsage::UMaterialExpressionNamedRerouteUsage
          (UMaterialExpressionNamedRerouteUsage *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNamedRerouteUsage__6B_;
  (this->Declaration).field0_0x0.DebugPtr = (UMaterialExpressionNamedRerouteDeclaration *)0x0;
  (this->DeclarationGuid).A = 0;
  (this->DeclarationGuid).B = 0;
  (this->DeclarationGuid).C = 0;
  (this->DeclarationGuid).D = 0;
  return this;
}

// ~UMaterialExpressionNamedRerouteUsage @ 1472c20b0

void __thiscall
UMaterialExpressionNamedRerouteUsage::~UMaterialExpressionNamedRerouteUsage
          (UMaterialExpressionNamedRerouteUsage *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRerouteBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c49f0

UClass * __cdecl UMaterialExpressionNamedRerouteUsage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNamedRerouteUsage",
               &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNamedRerouteUsage,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNamedRerouteUsage>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNamedRerouteUsage>,local_res8,
               UMaterialExpressionNamedRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNamedRerouteUsage @ 1472c74a0

void __cdecl
UMaterialExpressionNamedRerouteUsage::StaticRegisterNativesUMaterialExpressionNamedRerouteUsage
          (void)

{
  return;
}

// GetRerouteInput @ 148b02440

bool __thiscall
UMaterialExpressionNamedRerouteUsage::GetRerouteInput
          (UMaterialExpressionNamedRerouteUsage *this,FExpressionInput *param_1)

{
  UMaterialExpressionNamedRerouteDeclaration *pUVar1;
  int iVar2;
  FNameEntryId FVar3;
  int iVar4;
  
  pUVar1 = (this->Declaration).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMaterialExpressionNamedRerouteDeclaration *)0x0) &&
     (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->Declaration).field0_0x0.DebugPtr;
    iVar2 = (pUVar1->Input).OutputIndex;
    FVar3.Value = (pUVar1->Input).InputName.ComparisonIndex.Value;
    param_1->Expression = (pUVar1->Input).Expression;
    param_1->OutputIndex = iVar2;
    (param_1->InputName).ComparisonIndex = (FNameEntryId)FVar3.Value;
    iVar2 = (pUVar1->Input).MaskR;
    iVar4 = (pUVar1->Input).MaskG;
    *(undefined8 *)&(param_1->InputName).Number = *(undefined8 *)&(pUVar1->Input).InputName.Number;
    param_1->MaskR = iVar2;
    param_1->MaskG = iVar4;
    iVar2 = (pUVar1->Input).MaskA;
    param_1->MaskB = (pUVar1->Input).MaskB;
    param_1->MaskA = iVar2;
    return true;
  }
  return false;
}

// IsDeclarationValid @ 148b02870

bool __thiscall
UMaterialExpressionNamedRerouteUsage::IsDeclarationValid(UMaterialExpressionNamedRerouteUsage *this)

{
  UMaterialExpressionNamedRerouteDeclaration *pUVar1;
  
  pUVar1 = (this->Declaration).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMaterialExpressionNamedRerouteDeclaration *)0x0) &&
     (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    return true;
  }
  return false;
}

