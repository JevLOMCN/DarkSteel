// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472cbde0

UClass * __cdecl UMaterialExpressionSceneColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneColor",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneColor,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneColor>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneColor.InnerSingleton;
}

// UMaterialExpressionSceneColor @ 1472d2690

UMaterialExpressionSceneColor * __thiscall
UMaterialExpressionSceneColor::UMaterialExpressionSceneColor
          (UMaterialExpressionSceneColor *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneColor__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->OffsetFraction_DEPRECATED).OutputIndex = 0;
  (this->OffsetFraction_DEPRECATED).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OffsetFraction_DEPRECATED).InputName.Number = 0;
  (this->OffsetFraction_DEPRECATED).MaskR = 0;
  (this->OffsetFraction_DEPRECATED).MaskG = 0;
  (this->OffsetFraction_DEPRECATED).MaskB = 0;
  (this->OffsetFraction_DEPRECATED).MaskA = 0;
  (this->OffsetFraction_DEPRECATED).Expression = (UMaterialExpression *)0x0;
  (this->ConstInput).field0_0x0._s_0.X = 0.0;
  (this->ConstInput).field0_0x0._s_0.Y = 0.0;
  return this;
}

// ~UMaterialExpressionSceneColor @ 1472d4410

void __thiscall
UMaterialExpressionSceneColor::~UMaterialExpressionSceneColor(UMaterialExpressionSceneColor *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneColor__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6870

UClass * __cdecl UMaterialExpressionSceneColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneColor",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneColor,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneColor>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSceneColor @ 1472d8860

void __cdecl UMaterialExpressionSceneColor::StaticRegisterNativesUMaterialExpressionSceneColor(void)

{
  return;
}

// UMaterialExpressionSceneColor @ 148afe2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UMaterialExpressionSceneColor * __thiscall
UMaterialExpressionSceneColor::UMaterialExpressionSceneColor
          (UMaterialExpressionSceneColor *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  UMaterialExpressionSceneColor *pUVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res18 [2];
  FName local_58;
  FName FStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  FName local_3c;
  FName FStack_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  
  UObject::UObject((UObject *)this,param_1);
  plVar1 = &this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneColor__6B_;
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
  *plVar1 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->OffsetFraction_DEPRECATED).OutputIndex = 0;
  (this->OffsetFraction_DEPRECATED).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OffsetFraction_DEPRECATED).InputName.Number = 0;
  (this->OffsetFraction_DEPRECATED).MaskR = 0;
  (this->OffsetFraction_DEPRECATED).MaskG = 0;
  (this->OffsetFraction_DEPRECATED).MaskB = 0;
  (this->OffsetFraction_DEPRECATED).MaskA = 0;
  (this->OffsetFraction_DEPRECATED).Expression = (UMaterialExpression *)0x0;
  (this->ConstInput).field0_0x0._s_0.X = 0.0;
  (this->ConstInput).field0_0x0._s_0.Y = 0.0;
  *(undefined4 *)&this->_padding_ = 0;
  pFVar6 = ::FName::FName(&local_res8,L"RGB");
  local_58 = *pFVar6;
  local_40 = 0;
  FStack_50 = ___xmm_00000001000000010000000100000001;
  uStack_48 = _UNK_150631da8;
  if (((FName *)*plVar1 <= &local_58) &&
     (&local_58 < (FName *)(*plVar1 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x1c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMaterialExpressionSceneColor *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4));
  }
  lVar8 = (longlong)iVar5 * 0x1c;
  *(int *)&this->_padding_ = iVar5 + 1;
  lVar2 = *plVar1;
  *(FName *)(lVar2 + lVar8) = local_58;
  ((FName *)(lVar2 + lVar8))[1] = FStack_50;
  *(undefined8 *)(lVar2 + lVar8 + 0x10) = uStack_48;
  *(undefined4 *)(lVar2 + lVar8 + 0x18) = local_40;
  pFVar6 = ::FName::FName(local_res18,L"A");
  local_3c = *pFVar6;
  local_24 = 1;
  FStack_34 = ___xmm_00000000000000000000000000000001;
  uStack_2c = _UNK_150ebf528;
  if (((FName *)*plVar1 <= &local_3c) &&
     (&local_3c < (FName *)(*plVar1 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x1c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMaterialExpressionSceneColor *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4));
  }
  lVar8 = (longlong)iVar5 * 0x1c;
  *(int *)&this->_padding_ = iVar5 + 1;
  lVar2 = *plVar1;
  *(FName *)(lVar2 + lVar8) = local_3c;
  ((FName *)(lVar2 + lVar8))[1] = FStack_34;
  *(undefined8 *)(lVar2 + lVar8 + 0x10) = uStack_2c;
  *(undefined4 *)(lVar2 + lVar8 + 0x18) = local_24;
  return this;
}

// PostLoad @ 148b03120

void __thiscall UMaterialExpressionSceneColor::PostLoad(UMaterialExpressionSceneColor *this)

{
  undefined8 uVar1;
  int iVar2;
  FNameEntryId FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FPackageFileVersion FVar7;
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  FVar7 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar7 < 0xe7) {
    iVar2 = (this->OffsetFraction_DEPRECATED).OutputIndex;
    FVar3.Value = (this->OffsetFraction_DEPRECATED).InputName.ComparisonIndex.Value;
    (this->InputMode).Value = '\x01';
    uVar1 = *(undefined8 *)&(this->OffsetFraction_DEPRECATED).InputName.Number;
    iVar4 = (this->OffsetFraction_DEPRECATED).MaskR;
    iVar5 = (this->OffsetFraction_DEPRECATED).MaskG;
    (this->Input).Expression = (this->OffsetFraction_DEPRECATED).Expression;
    (this->Input).OutputIndex = iVar2;
    (this->Input).InputName.ComparisonIndex = (FNameEntryId)FVar3.Value;
    iVar2 = (this->OffsetFraction_DEPRECATED).MaskB;
    iVar6 = (this->OffsetFraction_DEPRECATED).MaskA;
    *(undefined8 *)&(this->Input).InputName.Number = uVar1;
    (this->Input).MaskR = iVar4;
    (this->Input).MaskG = iVar5;
    (this->Input).MaskB = iVar2;
    (this->Input).MaskA = iVar6;
  }
  return;
}

