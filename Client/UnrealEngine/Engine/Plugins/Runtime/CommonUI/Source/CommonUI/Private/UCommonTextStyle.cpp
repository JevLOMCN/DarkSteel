// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 24

// StaticClass @ 14a780550

UClass * __cdecl UCommonTextStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTextStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTextStyle",
               &Z_Registration_Info_UClass_UCommonTextStyle.InnerSingleton,
               StaticRegisterNativesUCommonTextStyle,400,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonTextStyle>,
               InternalVTableHelperCtorCaller<UCommonTextStyle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTextStyle.InnerSingleton;
}

// UCommonTextStyle @ 14a7aed70

UCommonTextStyle * __thiscall
UCommonTextStyle::UCommonTextStyle(UCommonTextStyle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCommonTextStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  FSlateBrush::FSlateBrush(&this->StrikeBrush);
  return this;
}

// UCommonTextStyle @ 14a7aedc0

UCommonTextStyle * __thiscall UCommonTextStyle::UCommonTextStyle(UCommonTextStyle *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UCommonTextStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  FSlateBrush::FSlateBrush(&this->StrikeBrush);
  this->LineHeightPercentage = 1.0;
  this->ApplyLineHeightToBottomLine = true;
  return this;
}

// ~UCommonTextStyle @ 14a7b34f0

void __thiscall UCommonTextStyle::~UCommonTextStyle(UCommonTextStyle *this)

{
  *(undefined ***)this = &___7UCommonTextStyle__6B_;
  (this->StrikeBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StrikeBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToTextBlock @ 14a7bf480

void __thiscall
UCommonTextStyle::ApplyToTextBlock(UCommonTextStyle *this,TSharedRef<STextBlock,1> *param_1)

{
  STextBlock *this_00;
  undefined3 uVar1;
  undefined1 local_b8 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  TAttribute<FSlateFontInfo> local_88;
  
  this_00 = param_1->Object;
  FSlateFontInfo::FSlateFontInfo(&local_88.Value,&this->Font);
  local_88.bIsSet = true;
  local_88.Getter._16_8_ = 0;
  local_88.Getter._0_8_ = 0;
  local_88.Getter._8_8_ = 0;
  STextBlock::SetFont(this_00,&local_88);
  fStack_b0._0_1_ = true;
  _local_b8 = &this->StrikeBrush;
  local_98 = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  STextBlock::SetStrikeBrush(param_1->Object,(TAttribute<FSlateBrush_const_*> *)local_b8);
  _local_b8 = *(TVector2<double>_u_0 *)&this->Margin;
  local_a8[0] = 1;
  local_90 = 0;
  local_a8._8_8_ = 0;
  local_98 = 0;
  STextBlock::SetMargin(param_1->Object,(TAttribute<FMargin> *)local_b8);
  local_a8._0_8_ = 0;
  fStack_b4._0_1_ = true;
  local_b8 = (undefined1  [4])this->LineHeightPercentage;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  local_a8._8_8_ = 0;
  STextBlock::SetLineHeightPercentage(param_1->Object,(TAttribute<float> *)local_b8);
  local_a8._8_8_ = 0;
  local_b8[1] = true;
  local_b8[0] = this->ApplyLineHeightToBottomLine;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  local_a8._0_8_ = 0;
  STextBlock::SetApplyLineHeightToBottomLine(param_1->Object,(TAttribute<bool> *)local_b8);
  _local_b8 = *(undefined8 *)&(this->Color).field0_0x0;
  _fStack_b0 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  uVar1 = SUB83(local_a8._0_8_,5);
  local_a8._0_4_ = (uint)local_a8._0_8_ & 0xffffff00;
  local_a8[4] = 1;
  local_a8._5_3_ = uVar1;
  local_a8._8_8_ = 0;
  local_98 = 0;
  local_90 = 0;
  STextBlock::SetColorAndOpacity(param_1->Object,(TAttribute<FSlateColor> *)local_b8);
  local_a8[0] = 1;
  local_90 = 0;
  if (this->bUsesDropShadow == false) {
    _local_b8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_a8._8_8_ = 0;
    local_98 = 0;
    STextBlock::SetShadowOffset(param_1->Object,(TAttribute<UE::Math::TVector2<double>_> *)local_b8)
    ;
    local_b8 = FLinearColor::Transparent.field0_0x0._0_4_;
    fStack_b4 = FLinearColor::Transparent.field0_0x0._4_4_;
    fStack_b0 = FLinearColor::Transparent.field0_0x0._8_4_;
    fStack_ac = FLinearColor::Transparent.field0_0x0._12_4_;
  }
  else {
    _local_b8 = (this->ShadowOffset).field0_0x0;
    local_a8._8_8_ = 0;
    local_98 = 0;
    STextBlock::SetShadowOffset(param_1->Object,(TAttribute<UE::Math::TVector2<double>_> *)local_b8)
    ;
    local_b8 = (undefined1  [4])(this->ShadowColor).field0_0x0._s_0.R;
    fStack_b4 = (this->ShadowColor).field0_0x0._s_0.G;
    fStack_b0 = (this->ShadowColor).field0_0x0._s_0.B;
    fStack_ac = (this->ShadowColor).field0_0x0._s_0.A;
  }
  local_a8[0] = 1;
  local_a8._8_8_ = 0;
  local_98 = 0;
  local_90 = 0;
  STextBlock::SetShadowColorAndOpacity(param_1->Object,(TAttribute<FLinearColor> *)local_b8);
  return;
}

// GetApplyLineHeightToBottomLine @ 14a7e0660

bool __thiscall UCommonTextStyle::GetApplyLineHeightToBottomLine(UCommonTextStyle *this)

{
  return this->ApplyLineHeightToBottomLine;
}

// GetColor @ 14a7e1530

void __thiscall UCommonTextStyle::GetColor(UCommonTextStyle *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&param_1->field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = uVar1;
  return;
}

// GetFont @ 14a7e2610

void __thiscall UCommonTextStyle::GetFont(UCommonTextStyle *this,FSlateFontInfo *param_1)

{
  FSlateFontInfo::operator=(param_1,&this->Font);
  return;
}

// GetLineHeightPercentage @ 14a7e3330

float __thiscall UCommonTextStyle::GetLineHeightPercentage(UCommonTextStyle *this)

{
  return this->LineHeightPercentage;
}

// GetMargin @ 14a7e3400

void __thiscall UCommonTextStyle::GetMargin(UCommonTextStyle *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Margin).Top;
  fVar2 = (this->Margin).Right;
  fVar3 = (this->Margin).Bottom;
  param_1->Left = (this->Margin).Left;
  param_1->Top = fVar1;
  param_1->Right = fVar2;
  param_1->Bottom = fVar3;
  return;
}

// GetPrivateStaticClass @ 14a7e6330

UClass * __cdecl UCommonTextStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTextStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTextStyle",
               &Z_Registration_Info_UClass_UCommonTextStyle.InnerSingleton,
               StaticRegisterNativesUCommonTextStyle,400,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonTextStyle>,
               InternalVTableHelperCtorCaller<UCommonTextStyle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTextStyle.InnerSingleton;
}

// GetShadowColor @ 14a7e7ce0

void __thiscall UCommonTextStyle::GetShadowColor(UCommonTextStyle *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->ShadowColor).field0_0x0 + 8);
  *(undefined8 *)&param_1->field0_0x0 = *(undefined8 *)&(this->ShadowColor).field0_0x0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = uVar1;
  return;
}

// GetShadowOffset @ 14a7e7d00

void __thiscall UCommonTextStyle::GetShadowOffset(UCommonTextStyle *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (this->ShadowOffset).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  return;
}

// GetStrikeBrush @ 14a7e8880

void __thiscall UCommonTextStyle::GetStrikeBrush(UCommonTextStyle *this,FSlateBrush *param_1)

{
  FSlateBrush::operator=(param_1,&this->StrikeBrush);
  return;
}

// StaticRegisterNativesUCommonTextStyle @ 14a81e890

void __cdecl UCommonTextStyle::StaticRegisterNativesUCommonTextStyle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UCommonTextStyle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToTextBlockStyle @ 14a823460

void __thiscall UCommonTextStyle::ToTextBlockStyle(UCommonTextStyle *this,FTextBlockStyle *param_1)

{
  double dVar1;
  undefined8 uVar2;
  uint local_18;
  
  FSlateFontInfo::operator=(&param_1->Font,&this->Font);
  uVar2 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  local_18 = local_18 & 0xffffff00;
  *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (param_1->ColorAndOpacity).ColorUseRule = (undefined1)local_18;
  (param_1->ColorAndOpacity).ColorTableId = local_18._1_1_;
  *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12 = local_18._2_2_;
  FSlateBrush::operator=(&param_1->StrikeBrush,&this->StrikeBrush);
  if (this->bUsesDropShadow != false) {
    dVar1 = (this->ShadowOffset).field0_0x0._s_0.Y;
    *(float *)&param_1->ShadowOffset = (float)(this->ShadowOffset).field0_0x0._s_0.X;
    *(float *)&(param_1->ShadowOffset).field_0x4 = (float)dVar1;
    uVar2 = *(undefined8 *)((longlong)&(this->ShadowColor).field0_0x0 + 8);
    *(undefined8 *)&(param_1->ShadowColorAndOpacity).field0_0x0 =
         *(undefined8 *)&(this->ShadowColor).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->ShadowColorAndOpacity).field0_0x0 + 8) = uVar2;
  }
  return;
}

// execGetApplyLineHeightToBottomLine @ 14a82d470

void __cdecl
UCommonTextStyle::execGetApplyLineHeightToBottomLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[9].field_0x1c;
  return;
}

// execGetColor @ 14a82d760

void __cdecl UCommonTextStyle::execGetColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[3].field_0x11;
  uVar3 = param_1[3].field_0x12;
  uVar4 = param_1[3].field_0x13;
  uVar5 = param_1[3].field_0x14;
  uVar6 = param_1[3].field_0x15;
  uVar7 = param_1[3].field_0x16;
  uVar8 = param_1[3].field_0x17;
  uVar9 = param_1[3].field_0x18;
  uVar10 = param_1[3].field_0x19;
  uVar11 = param_1[3].field_0x1a;
  uVar12 = param_1[3].field_0x1b;
  uVar13 = param_1[3].field_0x1c;
  uVar14 = param_1[3].field_0x1d;
  uVar15 = param_1[3].field_0x1e;
  uVar16 = param_1[3].field_0x1f;
  puVar17[0] = param_1[3].field_0x10;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  return;
}

// execGetFont @ 14a82dfc0

void __cdecl UCommonTextStyle::execGetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateFontInfo *this;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FSlateFontInfo *)param_2->MostRecentPropertyAddress != (FSlateFontInfo *)0x0) {
    this = (FSlateFontInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateFontInfo::operator=(this,(FSlateFontInfo *)(param_1 + 1));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execGetLineHeightPercentage @ 14a82e670

void __cdecl
UCommonTextStyle::execGetLineHeightPercentage(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[9].field_0x18;
  return;
}

// execGetMargin @ 14a82e740

void __cdecl UCommonTextStyle::execGetMargin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[4].field_0x21;
  uVar3 = param_1[4].field_0x22;
  uVar4 = param_1[4].field_0x23;
  uVar5 = param_1[4].field_0x24;
  uVar6 = param_1[4].field_0x25;
  uVar7 = param_1[4].field_0x26;
  uVar8 = param_1[4].field_0x27;
  uVar9 = param_1[5].field_0x0;
  uVar10 = param_1[5].field_0x1;
  uVar11 = param_1[5].field_0x2;
  uVar12 = param_1[5].field_0x3;
  uVar13 = param_1[5].field_0x4;
  uVar14 = param_1[5].field_0x5;
  uVar15 = param_1[5].field_0x6;
  uVar16 = param_1[5].field_0x7;
  puVar17[0] = param_1[4].field_0x20;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  return;
}

// execGetShadowColor @ 14a82f210

void __cdecl UCommonTextStyle::execGetShadowColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[4].field_0x11;
  uVar3 = param_1[4].field_0x12;
  uVar4 = param_1[4].field_0x13;
  uVar5 = param_1[4].field_0x14;
  uVar6 = param_1[4].field_0x15;
  uVar7 = param_1[4].field_0x16;
  uVar8 = param_1[4].field_0x17;
  uVar9 = param_1[4].field_0x18;
  uVar10 = param_1[4].field_0x19;
  uVar11 = param_1[4].field_0x1a;
  uVar12 = param_1[4].field_0x1b;
  uVar13 = param_1[4].field_0x1c;
  uVar14 = param_1[4].field_0x1d;
  uVar15 = param_1[4].field_0x1e;
  uVar16 = param_1[4].field_0x1f;
  puVar17[0] = param_1[4].field_0x10;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  return;
}

// execGetShadowOffset @ 14a82f2b0

void __cdecl UCommonTextStyle::execGetShadowOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[4].field_0x1;
  uVar3 = param_1[4].field_0x2;
  uVar4 = param_1[4].field_0x3;
  uVar5 = param_1[4].field_0x4;
  uVar6 = param_1[4].field_0x5;
  uVar7 = param_1[4].field_0x6;
  uVar8 = param_1[4].field_0x7;
  uVar9 = param_1[4].field_0x8;
  uVar10 = param_1[4].field_0x9;
  uVar11 = param_1[4].field_0xa;
  uVar12 = param_1[4].field_0xb;
  uVar13 = param_1[4].field_0xc;
  uVar14 = param_1[4].field_0xd;
  uVar15 = param_1[4].field_0xe;
  uVar16 = param_1[4].field_0xf;
  puVar17[0] = param_1[4].field_0x0;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  return;
}

// execGetStrikeBrush @ 14a82f3b0

void __cdecl UCommonTextStyle::execGetStrikeBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=(this,(FSlateBrush *)&param_1[5].field_0x8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

