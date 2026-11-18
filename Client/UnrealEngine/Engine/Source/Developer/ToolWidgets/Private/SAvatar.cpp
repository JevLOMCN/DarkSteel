// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// ComputeBackgroundColor @ 142d763d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FColor __thiscall SAvatar::ComputeBackgroundColor(SAvatar *this)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FColor_u_0 FVar5;
  size_t sVar6;
  uchar *puVar7;
  FLinearColor *pFVar8;
  byte bVar9;
  undefined1 *in_RDX;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  wchar_t *_Str;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  FLinearColor local_d8;
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar11 = 0x1505;
  if ((this->Identifier).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Identifier).Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_40 = (FScriptContainerElement *)0x0;
      local_38 = 0;
      goto LAB_142d76505;
    }
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  sVar6 = wcslen(_Str);
  local_38 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar6);
  uVar1 = local_38 + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar12 = 0;
      goto LAB_142d76483;
    }
  }
  else {
LAB_142d76483:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar12,1);
  }
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  puVar7 = UE::Core::Private::Convert((uchar *)local_40,uVar1,_Str,(int)sVar6 + 1);
  if ((puVar7 == (uchar *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    FVar5.Bits = (*pcVar2)();
    return (FColor_u_0)(FColor_u_0)FVar5._s_0;
  }
LAB_142d76505:
  for (pFVar10 = local_40; pFVar10 != local_40 + local_38; pFVar10 = pFVar10 + 1) {
    uVar11 = uVar11 * 0x21 + (uint)(byte)*pFVar10;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  bVar9 = (byte)(uVar11 >> 8);
  pFVar8 = FLinearColor::MakeFromHSV8
                     (&local_d8,
                      (byte)(uVar11 >> 0x18) ^ (byte)(uVar11 >> 0x10) ^ bVar9 ^ (byte)uVar11,
                      (bVar9 & 0x7f) + 0x80,((byte)(uVar11 >> 0x11) & 0x3f) + 0x80);
  fVar3 = __real_3f000000;
  fVar14 = (pFVar8->field0_0x0)._s_0.G;
  fVar17 = (pFVar8->field0_0x0)._s_0.A;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar15 = (pFVar8->field0_0x0)._s_0.R;
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar13 = (pFVar8->field0_0x0)._s_0.B;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar15) {
    fVar15 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar13) {
    fVar13 = __real_3f800000;
  }
  fVar16 = fVar15 * __real_437f0000 + __real_3f000000;
  fVar17 = fVar17 * __real_437f0000;
  fVar15 = fVar13 * __real_437f0000 + __real_3f000000;
  in_RDX[1] = (char)(int)(fVar14 * __real_437f0000 + __real_3f000000);
  *in_RDX = (char)(int)fVar15;
  in_RDX[2] = (char)(int)fVar16;
  in_RDX[3] = (char)(int)(fVar17 + fVar3);
  return (FColor)SUB84(in_RDX,0);
}

// Construct @ 142d7a550

void __thiscall SAvatar::Construct(SAvatar *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FColor FVar4;
  undefined4 extraout_var;
  FArguments *pFVar5;
  TSharedRef<SBox,1> *pTVar6;
  longlong *this_00;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SBox *local_408;
  TReferenceControllerBase<1> *pTStack_400;
  bool local_3f8;
  float local_3f0;
  undefined1 local_3ec;
  undefined1 local_3e8 [8];
  ForAnyElementType FStack_3e0;
  ulonglong local_3d8;
  float local_3d0;
  undefined1 local_3cc;
  undefined1 local_3c8 [8];
  ForAnyElementType FStack_3c0;
  ulonglong local_3b8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3b0;
  undefined1 local_398 [8];
  ForAnyElementType FStack_390;
  ulonglong local_388;
  TSharedRef<SBox,1> local_380;
  FArguments local_370;
  
  ::FString::operator=(&this->Identifier,&param_1->_Identifier);
  ::FString::operator=(&this->Description,&param_1->_Description);
  this->bShowInitial = param_1->_ShowInitial;
  FVar4 = ComputeBackgroundColor(this);
  (this->BackgroundColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar4.field0_0x0);
  (this->ForegroundColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  pFVar5 = SBox::FArguments::FArguments(&local_370);
  local_3f0 = param_1->_WidthOverride;
  local_3ec = 1;
  local_3e8 = (undefined1  [8])0x0;
  FStack_3e0.Data = (FScriptContainerElement *)0x0;
  local_3d8 = 0;
  (pFVar5->_MinDesiredWidth).Value.Size = local_3f0;
  (pFVar5->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
             (FWriteAccessScope *)&local_408);
  if (((int)local_3d8 != 0) && (FStack_3e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e0,0,0,0x10);
    local_3d8 = local_3d8 & 0xffffffff00000000;
  }
  if (local_3f8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_400,(FDestructionSentinel *)&local_408);
  }
  if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e8);
  local_3d0 = param_1->_HeightOverride;
  local_3cc = 1;
  local_3b8 = 0;
  local_3c8 = (undefined1  [8])0x0;
  FStack_3c0.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_MinDesiredHeight).Value.Size = local_3d0;
  (pFVar5->_MinDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MinDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c8,
             (FWriteAccessScope *)&local_408);
  if (((int)local_3b8 != 0) && (FStack_3c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c0,0,0,0x10);
    local_3b8 = local_3b8 & 0xffffffff00000000;
  }
  if (local_3f8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_400,(FDestructionSentinel *)&local_408);
  }
  if (FStack_3c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c8);
  local_3b0._RequiredArgs._0_1_ = 1;
  (pFVar5->_Padding).bIsSet = true;
  local_388 = 0;
  local_3b0._Widget.Object = (SBox *)0x0;
  local_3b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_398 = (undefined1  [8])0x0;
  FStack_390.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_Padding).Value.Left = 0.0;
  (pFVar5->_Padding).Value.Top = 0.0;
  (pFVar5->_Padding).Value.Right = 0.0;
  (pFVar5->_Padding).Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_398);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_398,
             (FWriteAccessScope *)&local_408);
  if (((int)local_388 != 0) && (FStack_390.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_390.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_390,0,0,0x10);
    local_388 = local_388 & 0xffffffff00000000;
  }
  if (local_3f8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_400,(FDestructionSentinel *)&local_408);
  }
  if (FStack_390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_390.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_398);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3b0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SAvatar.cpp"
             ,0x17,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar6 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_3b0,&local_380,pFVar5);
  this_00 = &this->_padding_;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar6->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  local_408 = pSVar2;
  pTStack_400 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_380.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b0._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_370);
  return;
}

// Hash @ 142db4da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall SAvatar::Hash(SAvatar *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  uchar *puVar5;
  uint uVar6;
  wchar_t *_Str;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_d8 [32];
  FScriptContainerElement local_b8 [128];
  ForAnyElementType local_38;
  FScriptContainerElement *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar6 = 0x1505;
  if ((this->Identifier).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->Identifier).Data.AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_30 = (FScriptContainerElement *)0x0;
      local_28 = 0;
      goto LAB_142db4ed0;
    }
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  sVar4 = wcslen(_Str);
  local_28 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar4);
  uVar1 = local_28 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_142db4e4e;
    }
  }
  else {
LAB_142db4e4e:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar7,1);
  }
  local_30 = local_b8;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    local_30 = local_38.Data;
  }
  puVar5 = UE::Core::Private::Convert((uchar *)local_30,uVar1,_Str,(int)sVar4 + 1);
  if ((puVar5 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
LAB_142db4ed0:
  for (pFVar8 = local_30; pFVar8 != local_30 + local_28; pFVar8 = pFVar8 + 1) {
    uVar6 = uVar6 * 0x21 + (uint)(byte)*pFVar8;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return uVar6;
}

// OnPaint @ 142dc5de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SAvatar::OnPaint(SAvatar *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  code *pcVar5;
  FScriptContainerElement *_Src;
  bool bVar6;
  ForAnyElementType _Src_00;
  bool bVar7;
  bool bVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  FSlateBrush *pFVar11;
  FString *pFVar12;
  FSlateApplication *pFVar13;
  FDeprecateSlateVector2D FVar14;
  int iVar15;
  int iVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  int iVar19;
  ESlateDrawEffect EVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  float in_XMM3_Da;
  float fVar24;
  undefined1 auStackY_2e8 [32];
  undefined8 local_2a8;
  undefined8 local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FLinearColor_u_0 local_268;
  FLinearColor_u_0 local_258;
  FSlateWindowElementList *local_248;
  FWidgetStyle *local_240;
  FSlateRect *local_238;
  FPaintArgs *local_230;
  TVector2<float>_u_0_s_0 local_224;
  FFontOutlineSettings local_218;
  FString local_1f8;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TSharedRef<FSlateFontMeasure,1> local_1d8;
  undefined1 local_1c8 [8];
  FString local_1c0;
  TObjectPtr<UObject_const_>_u_0 local_1a8;
  undefined8 uStack_1a0;
  TTransform2<float> local_198;
  TTransform2<float> local_180;
  FSlateFontInfo local_168;
  TVector2<float>_u_0 local_108;
  float local_100;
  undefined8 local_fc;
  FDeprecateSlateVector2D local_f4;
  float local_ec [2];
  float afStack_e4 [2];
  TVector2<float>_u_0 local_dc;
  byte local_d4;
  TVector2<float>_u_0 local_d0;
  float local_c8;
  undefined8 local_c4;
  FDeprecateSlateVector2D local_bc;
  float local_b4 [2];
  float afStack_ac [2];
  TVector2<float>_u_0 local_a4;
  byte local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_240 = param_6;
  local_2a8 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
  local_2a0._4_4_ = local_2a8._4_4_;
  if ((float)local_2a0._4_4_ <= (float)(undefined4)local_2a8) {
    local_2a0._4_4_ = (undefined4)local_2a8;
  }
  local_248 = param_4;
  fVar24 = (float)local_2a0._4_4_ * __real_3f000000;
  local_2a0 = local_2a8;
  local_238 = param_3;
  local_230 = param_1;
  pIVar9 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar9 + 0x50);
  pFVar10 = ::FName::FName((FName *)&local_2a0,"Icons.FilledCircle");
  pFVar11 = (FSlateBrush *)(*pcVar5)(pIVar9,*pFVar10,0,0);
  fVar3 = __real_3b808081;
  local_268._s_0.R = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.R];
  local_268._s_0.G = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.G];
  local_268._s_0.B = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.B];
  local_268._s_0.A = (float)(this->BackgroundColor).field0_0x0._s_0.A * __real_3b808081;
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    EVar20 = None;
  }
  else {
    EVar20 = DisabledEffect;
  }
  local_108 = (param_2->AbsolutePosition).field0_0x0;
  local_100 = param_2->Scale;
  local_dc = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  uVar21 = param_5 + 1;
  local_f4 = param_2->Size;
  local_ec = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_e4 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_d4 = param_2->bHasRenderTransform * '\x02' | local_d4 & 0xfc;
  local_fc = 0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_108._s_0,pFVar11,EVar20,
             (FLinearColor *)&local_268._s_0);
  iVar16 = (this->Description).Data.ArrayNum;
  iVar15 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar15 = 0;
  }
  uVar22 = uVar21;
  if ((0 < iVar15) && (this->bShowInitial != false)) {
    local_218.OutlineSize = 0;
    local_218.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_218.bMiteredCorners = false;
    local_218.bSeparateFillAlpha = false;
    local_218.bApplyOutlineToDropShadows = false;
    local_218.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    pFVar10 = ::FName::FName((FName *)&local_2a8,"Bold");
    FCoreStyle::GetDefaultFontStyle(&local_168,*pFVar10,fVar24,&local_218);
    iVar15 = (this->Description).Data.ArrayNum;
    bVar6 = true;
    bVar8 = false;
    iVar16 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar16 = 0;
    }
    if (1 < iVar16) {
      iVar16 = 1;
    }
    iVar19 = 0;
    if (0 < iVar16) {
      iVar19 = iVar16;
    }
    if (iVar15 == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(this->Description).Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_1f8,pwVar17,iVar19);
    ::FString::ToUpper(&local_1f8,&local_278);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    iVar16 = local_278.Data.ArrayNum + -1;
    if (local_278.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    if ((iVar16 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar16 = (*pcVar5)();
      return iVar16;
    }
    iVar16 = iswalnum(*(wint_t *)local_278.Data.AllocatorInstance.Data);
    _Src_00.Data = local_278.Data.AllocatorInstance.Data;
    if (iVar16 == 0) {
      pFVar12 = ::FString::FString(&local_1c0,L"?");
      bVar6 = false;
      bVar8 = true;
    }
    else {
      local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.Data.ArrayNum = local_278.Data.ArrayNum;
      if (local_278.Data.ArrayNum == 0) {
        pFVar12 = &local_288;
        local_288.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_278.Data.ArrayNum,0,(ForAnyElementType *)&local_288,
                   local_278.Data.ArrayNum,&local_288.Data.ArrayMax);
        memcpy(local_288.Data.AllocatorInstance.Data,_Src_00.Data,
               (longlong)local_278.Data.ArrayNum * 2);
        pFVar12 = &local_288;
      }
    }
    local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    lVar18 = (longlong)local_298.Data.ArrayNum;
    _Src = (pFVar12->Data).AllocatorInstance.Data;
    if (local_298.Data.ArrayNum == 0) {
      local_298.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_298.Data.ArrayNum,0,(ForAnyElementType *)&local_298,
                 local_298.Data.ArrayNum,&local_298.Data.ArrayMax);
      memcpy(local_298.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
    }
    if ((bVar8) && (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    pFVar13 = FSlateApplication::Get();
    lVar18 = *(longlong *)&pFVar13->field_0x60;
    if ((*(longlong *)(lVar18 + 8) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar16 = (*pcVar5)();
      return iVar16;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar18 + 8),&local_1d8);
    local_1e8 = local_298.Data.AllocatorInstance.Data;
    iStack_1e0 = local_298.Data.ArrayNum + -1;
    if (local_298.Data.ArrayNum == 0) {
      iStack_1e0 = 0;
    }
    uStack_1a0 = CONCAT44(uStack_1dc,iStack_1e0);
    local_1a8.DebugPtr = (UObject *)local_298.Data.AllocatorInstance.Data;
    FVar14 = FSlateFontMeasure::Measure
                       (local_1d8.Object,(TStringView<wchar_t> *)local_1c8,
                        (FSlateFontInfo *)&local_1a8.ObjectPtr,in_XMM3_Da);
    fVar1 = *(float *)FVar14;
    fVar2 = *(float *)((longlong)FVar14 + 4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
    local_258._s_0.R = FLinearColor::sRGBToLinearTable[(this->ForegroundColor).field0_0x0._s_0.R];
    local_258._s_0.G = FLinearColor::sRGBToLinearTable[(this->ForegroundColor).field0_0x0._s_0.G];
    dVar23 = (double)fVar24;
    local_258._s_0.B = FLinearColor::sRGBToLinearTable[(this->ForegroundColor).field0_0x0._s_0.B];
    local_258._s_0.A = (float)(this->ForegroundColor).field0_0x0._s_0.A * fVar3;
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      EVar20 = None;
    }
    else {
      EVar20 = DisabledEffect;
    }
    local_224 = (param_2->AbsolutePosition).field0_0x0._s_0;
    fVar3 = param_2->Scale;
    FVar14 = param_2->Size;
    uVar22 = param_5 + 2;
    local_2a8._0_4_ = (undefined4)(dVar23 - (double)fVar1 * __real_3fe0000000000000);
    local_2a8._4_4_ = (undefined4)(dVar23 - (double)fVar2 * __real_3fe0000000000000);
    local_198.Trans.field0_0x0 = local_2a8;
    local_198.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_198.M.M[0][1] = _UNK_15076b184;
    local_198.M.M[1][0] = _UNK_15076b188;
    local_198.M.M[1][1] = _UNK_15076b18c;
    local_2a0._4_4_ = (float)local_2a8._4_4_ * fVar3 + local_224.Y;
    local_2a0._0_4_ = (float)(undefined4)local_2a8 * fVar3 + local_224.X;
    Concatenate<TTransform2<float>_>(&local_180,&local_198,&param_2->AccumulatedRenderTransform);
    param_4 = local_248;
    local_d0 = local_2a0;
    local_9c = param_2->bHasRenderTransform * '\x02' | local_9c & 0xfc;
    local_c4 = 0;
    local_b4[0] = local_180.M.M[0][0];
    local_b4[1] = local_180.M.M[0][1];
    afStack_ac[0] = local_180.M.M[1][0];
    afStack_ac[1] = local_180.M.M[1][1];
    local_a4 = local_180.Trans.field0_0x0;
    local_c8 = fVar3;
    local_bc = FVar14;
    FSlateDrawElement::MakeText
              (local_248,uVar21,(FPaintGeometry *)&local_d0._s_0,&local_298,&local_168,EVar20,
               (FLinearColor *)&local_258._s_0);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  iVar16 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,local_230,param_2,local_238,param_4,uVar22,local_240,
                      bVar8);
  return iVar16;
}

