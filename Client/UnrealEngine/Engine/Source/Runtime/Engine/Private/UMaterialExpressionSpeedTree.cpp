// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472cbd20

UClass * __cdecl UMaterialExpressionSpeedTree::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSpeedTree",
               &Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSpeedTree,0x160,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSpeedTree>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSpeedTree>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.InnerSingleton;
}

// UMaterialExpressionSpeedTree @ 1472d3880

UMaterialExpressionSpeedTree * __thiscall
UMaterialExpressionSpeedTree::UMaterialExpressionSpeedTree
          (UMaterialExpressionSpeedTree *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->BillboardThreshold = 0.9;
  this->_padding_ = (longlong)&___7UMaterialExpressionSpeedTree__6B_;
  (this->GeometryInput).OutputIndex = 0;
  (this->GeometryInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GeometryInput).InputName.Number = 0;
  (this->GeometryInput).MaskR = 0;
  (this->GeometryInput).MaskG = 0;
  (this->GeometryInput).MaskB = 0;
  (this->GeometryInput).MaskA = 0;
  (this->GeometryInput).Expression = (UMaterialExpression *)0x0;
  (this->WindInput).OutputIndex = 0;
  (this->WindInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WindInput).InputName.Number = 0;
  (this->WindInput).MaskR = 0;
  (this->WindInput).MaskG = 0;
  (this->WindInput).MaskB = 0;
  (this->WindInput).MaskA = 0;
  (this->WindInput).Expression = (UMaterialExpression *)0x0;
  (this->LODInput).OutputIndex = 0;
  (this->LODInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LODInput).InputName.Number = 0;
  (this->LODInput).MaskR = 0;
  (this->LODInput).MaskG = 0;
  (this->LODInput).MaskB = 0;
  (this->LODInput).MaskA = 0;
  (this->LODInput).Expression = (UMaterialExpression *)0x0;
  (this->ExtraBendWS).OutputIndex = 0;
  (this->ExtraBendWS).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ExtraBendWS).InputName.Number = 0;
  (this->ExtraBendWS).MaskR = 0;
  (this->ExtraBendWS).MaskG = 0;
  (this->ExtraBendWS).MaskB = 0;
  (this->ExtraBendWS).MaskA = 0;
  (this->ExtraBendWS).Expression = (UMaterialExpression *)0x0;
  this->GeometryType = '\0';
  this->WindType = '\0';
  (this->LODType).Value = '\0';
  this->bAccurateWindVelocities = false;
  return this;
}

// UMaterialExpressionSpeedTree @ 1472d3960

UMaterialExpressionSpeedTree * __thiscall
UMaterialExpressionSpeedTree::UMaterialExpressionSpeedTree
          (UMaterialExpressionSpeedTree *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->BillboardThreshold = 0.9;
  this->_padding_ = (longlong)&___7UMaterialExpressionSpeedTree__6B_;
  (this->GeometryInput).OutputIndex = 0;
  (this->GeometryInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GeometryInput).InputName.Number = 0;
  (this->GeometryInput).MaskR = 0;
  (this->GeometryInput).MaskG = 0;
  (this->GeometryInput).MaskB = 0;
  (this->GeometryInput).MaskA = 0;
  (this->GeometryInput).Expression = (UMaterialExpression *)0x0;
  (this->WindInput).OutputIndex = 0;
  (this->WindInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WindInput).InputName.Number = 0;
  (this->WindInput).MaskR = 0;
  (this->WindInput).MaskG = 0;
  (this->WindInput).MaskB = 0;
  (this->WindInput).MaskA = 0;
  (this->WindInput).Expression = (UMaterialExpression *)0x0;
  (this->LODInput).OutputIndex = 0;
  (this->LODInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LODInput).InputName.Number = 0;
  (this->LODInput).MaskR = 0;
  (this->LODInput).MaskG = 0;
  (this->LODInput).MaskB = 0;
  (this->LODInput).MaskA = 0;
  (this->LODInput).Expression = (UMaterialExpression *)0x0;
  (this->ExtraBendWS).OutputIndex = 0;
  (this->ExtraBendWS).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ExtraBendWS).InputName.Number = 0;
  (this->ExtraBendWS).MaskR = 0;
  (this->ExtraBendWS).MaskG = 0;
  (this->ExtraBendWS).MaskB = 0;
  (this->ExtraBendWS).MaskA = 0;
  (this->ExtraBendWS).Expression = (UMaterialExpression *)0x0;
  this->GeometryType = '\0';
  this->WindType = '\0';
  (this->LODType).Value = '\0';
  this->bAccurateWindVelocities = false;
  return this;
}

// ~UMaterialExpressionSpeedTree @ 1472d47e0

void __thiscall
UMaterialExpressionSpeedTree::~UMaterialExpressionSpeedTree(UMaterialExpressionSpeedTree *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSpeedTree__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7e30

UClass * __cdecl UMaterialExpressionSpeedTree::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSpeedTree",
               &Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSpeedTree,0x160,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSpeedTree>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSpeedTree>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.InnerSingleton;
}

// Serialize @ 1472d8740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionSpeedTree::Serialize(UMaterialExpressionSpeedTree *this,FArchive *param_1)

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

// StaticRegisterNativesUMaterialExpressionSpeedTree @ 1472d8a30

void __cdecl UMaterialExpressionSpeedTree::StaticRegisterNativesUMaterialExpressionSpeedTree(void)

{
  return;
}

// Serialize @ 148b045e0

void __thiscall
UMaterialExpressionSpeedTree::Serialize
          (UMaterialExpressionSpeedTree *this,FStructuredArchiveRecord param_1)

{
  uchar uVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if (*(int *)&pFVar2->field_0x40 < 0x16c) {
    uVar1 = (this->WindType).Value;
    if (uVar1 == '\x01') {
      (this->WindType).Value = '\x03';
    }
    else {
      if (uVar1 == '\x02') {
        (this->WindType).Value = '\x05';
        return;
      }
      if (uVar1 == '\x03') {
        (this->WindType).Value = '\x04';
        return;
      }
    }
  }
  return;
}

