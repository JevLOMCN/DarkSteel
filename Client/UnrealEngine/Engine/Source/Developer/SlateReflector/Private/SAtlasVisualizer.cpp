// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 29

// OnMouseMove`adjustor{8}' @ 142ddf18c

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual class FReply __cdecl SAtlasVisualizer::OnMouseMove`adjustor{8}' (struct
   FGeometry const & __ptr64,struct FPointerEvent const & __ptr64) __ptr64 */

FReply * __thiscall
SAtlasVisualizer::OnMouseMove_adjustor_8__
          (SAtlasVisualizer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  
  pFVar1 = OnMouseMove((SAtlasVisualizer *)&this[-1].CurrentHoveredSlotInfo.TextureName,
                       __return_storage_ptr__,param_1,param_2);
  return pFVar1;
}

// OnMouseEnter`adjustor{8}' @ 142ddf19c

/* [thunk]:public: virtual void __cdecl SAtlasVisualizer::OnMouseEnter`adjustor{8}' (struct
   FGeometry const & __ptr64,struct FPointerEvent const & __ptr64) __ptr64 */

void __thiscall
SAtlasVisualizer::OnMouseEnter_adjustor_8__
          (SAtlasVisualizer *this,FGeometry *param_1,FPointerEvent *param_2)

{
  OnMouseEnter((SAtlasVisualizer *)&this[-1].CurrentHoveredSlotInfo.TextureName,param_1,param_2);
  return;
}

// OnMouseLeave`adjustor{8}' @ 142ddf1ac

/* [thunk]:public: virtual void __cdecl SAtlasVisualizer::OnMouseLeave`adjustor{8}' (struct
   FPointerEvent const & __ptr64) __ptr64 */

void __thiscall
SAtlasVisualizer::OnMouseLeave_adjustor_8__(SAtlasVisualizer *this,FPointerEvent *param_1)

{
  OnMouseLeave((SAtlasVisualizer *)&this[-1].CurrentHoveredSlotInfo.TextureName,param_1);
  return;
}

// GetSize @ 142de06d0

TIntPoint<int> __thiscall SAtlasVisualizer::GetSize(SAtlasVisualizer *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x18))();
  if (plVar3 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    uVar2 = (**(code **)*plVar3)(plVar3);
    *(undefined4 *)in_RDX = uVar2;
    *(undefined4 *)((longlong)in_RDX + 4) = uVar1;
    return (TIntPoint<int>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TIntPoint<int>)in_RDX;
}

// RequiresVsync @ 142de0740

bool __thiscall SAtlasVisualizer::RequiresVsync(SAtlasVisualizer *this)

{
  return false;
}

// GetViewportRenderTargetTexture @ 142de0750

FSlateShaderResource * __thiscall
SAtlasVisualizer::GetViewportRenderTargetTexture(SAtlasVisualizer *this)

{
  int iVar1;
  int iVar2;
  FSlateShaderResource *pFVar3;
  
  iVar1 = this->SelectedAtlasPage;
  iVar2 = (**(code **)((longlong)*this->AtlasProvider + 8))();
  if (iVar1 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142de078a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FSlateShaderResource *)
             (**(code **)((longlong)*this->AtlasProvider + 0x10))(this->AtlasProvider,iVar1);
    return pFVar3;
  }
  return (FSlateShaderResource *)0x0;
}

// IsViewportTextureAlphaOnly @ 142de07b0

bool __thiscall SAtlasVisualizer::IsViewportTextureAlphaOnly(SAtlasVisualizer *this)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = this->SelectedAtlasPage;
  iVar3 = (**(code **)((longlong)*this->AtlasProvider + 8))();
  if (iVar1 < iVar3) {
                    /* WARNING: Could not recover jumptable at 0x000142de07ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*this->AtlasProvider + 0x18))(this->AtlasProvider,iVar1);
    return (bool)uVar2;
  }
  return false;
}

// OnMouseEnter @ 142de0810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SAtlasVisualizer::OnMouseEnter(SAtlasVisualizer *this,FGeometry *param_1,FPointerEvent *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _UNK_15076c668;
  uVar1 = _UNK_15076c664;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Left = (float)___xmm_bf800000bf800000bf800000bf800000
  ;
  uVar3 = _UNK_15076c668;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Top = (float)uVar1;
  _UNK_15076c668 = (undefined4)uVar2;
  _UNK_15076c66c = SUB84(uVar2,4);
  uVar1 = _UNK_15076c66c;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Right = (float)_UNK_15076c668;
  _UNK_15076c668 = uVar3;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Bottom = (float)uVar1;
  (this->CurrentHoveredSlotInfo).TextureName.ComparisonIndex = 0;
  (this->CurrentHoveredSlotInfo).TextureName.Number = 0;
  return;
}

// OnMouseLeave @ 142de0850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SAtlasVisualizer::OnMouseLeave(SAtlasVisualizer *this,FPointerEvent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _UNK_15076c668;
  uVar1 = _UNK_15076c664;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Left = (float)___xmm_bf800000bf800000bf800000bf800000
  ;
  uVar3 = _UNK_15076c668;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Top = (float)uVar1;
  _UNK_15076c668 = (undefined4)uVar2;
  _UNK_15076c66c = SUB84(uVar2,4);
  uVar1 = _UNK_15076c66c;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Right = (float)_UNK_15076c668;
  _UNK_15076c668 = uVar3;
  (this->CurrentHoveredSlotInfo).AtlasSlotRect.Bottom = (float)uVar1;
  (this->CurrentHoveredSlotInfo).TextureName.ComparisonIndex = 0;
  (this->CurrentHoveredSlotInfo).TextureName.Number = 0;
  return;
}

// OnMouseMove @ 142de0890

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAtlasVisualizer::OnMouseMove
          (SAtlasVisualizer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDrawViewport @ 142de08c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAtlasVisualizer::OnDrawViewport
          (SAtlasVisualizer *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4,FWidgetStyle *param_5,bool param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  FSlateBrush *pFVar6;
  SAtlasVisualizerPanel *pSVar7;
  TVector2<float>_u_0_s_0 TVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStackY_138 [32];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d4;
  float fStack_d0;
  TTransform2<float> local_c8;
  TTransform2<float> local_b0;
  TVector2<float>_u_0 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  float local_7c [2];
  float afStack_74 [2];
  TVector2<float>_u_0 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_138;
  fVar2 = (this->CurrentHoveredSlotInfo).AtlasSlotRect.Left;
  if (((((fVar2 != __real_bf800000) ||
        (__real_bf800000 != (this->CurrentHoveredSlotInfo).AtlasSlotRect.Right)) ||
       (__real_bf800000 != (this->CurrentHoveredSlotInfo).AtlasSlotRect.Bottom)) ||
      (__real_bf800000 != (this->CurrentHoveredSlotInfo).AtlasSlotRect.Top)) &&
     ((pfVar1 = &(this->CurrentHoveredSlotInfo).AtlasSlotRect.Right,
      fVar2 < *pfVar1 || fVar2 == *pfVar1 &&
      (fVar2 = (this->CurrentHoveredSlotInfo).AtlasSlotRect.Top,
      pfVar1 = &(this->CurrentHoveredSlotInfo).AtlasSlotRect.Bottom,
      fVar2 < *pfVar1 || fVar2 == *pfVar1)))) {
    pFVar6 = this->HoveredSlotBorderBrush;
    fVar2 = (this->CurrentHoveredSlotInfo).AtlasSlotRect.Left;
    fVar10 = (this->CurrentHoveredSlotInfo).AtlasSlotRect.Top;
    fVar11 = (this->CurrentHoveredSlotInfo).AtlasSlotRect.Right;
    fVar12 = (this->CurrentHoveredSlotInfo).AtlasSlotRect.Bottom;
    if ((this->ScrollPanel).Object == (SAtlasVisualizerPanel *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar13 = __real_3f800000;
    pSVar7 = (this->ScrollPanel).Object;
    fVar3 = pSVar7->ZoomLevel;
    uVar15 = (undefined8)(fVar3 * fVar2 - __real_3f800000);
    uVar16 = (undefined8)(fVar3 * fVar10 - __real_3f800000);
    if ((double)uVar15 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    if ((double)uVar16 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar16 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    local_e0._4_4_ = (float)(double)uVar16;
    local_e0._0_4_ = (float)(double)uVar15;
    if (pSVar7 == (SAtlasVisualizerPanel *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar3 = ((this->ScrollPanel).Object)->ZoomLevel;
    fVar4 = param_1->Scale;
    TVar8 = (param_1->AbsolutePosition).field0_0x0._s_0;
    local_c8.Trans.field0_0x0 = local_e0;
    local_f0 = CONCAT44(fVar3 * (fVar12 - fVar10) + fVar13,fVar3 * (fVar11 - fVar2) + fVar13);
    local_d4 = TVar8.X;
    fStack_d0 = TVar8.Y;
    local_c8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_c8.M.M[0][1] = _UNK_15076b184;
    local_c8.M.M[1][0] = _UNK_15076b188;
    local_c8.M.M[1][1] = _UNK_15076b18c;
    local_e8._4_4_ = fVar4 * (float)(double)uVar16 + fStack_d0;
    local_e8._0_4_ = fVar4 * (float)(double)uVar15 + local_d4;
    Concatenate<TTransform2<float>_>(&local_b0,&local_c8,&param_1->AccumulatedRenderTransform);
    local_98 = local_e8;
    local_84 = local_f0;
    local_64 = param_1->bHasRenderTransform * '\x02' | local_64 & 0xfc;
    local_8c = 0;
    local_6c = local_b0.Trans.field0_0x0;
    local_7c[0] = local_b0.M.M[0][0];
    local_7c[1] = local_b0.M.M[0][1];
    afStack_74[0] = local_b0.M.M[1][0];
    afStack_74[1] = local_b0.M.M[1][1];
    local_90 = fVar4;
    FSlateDrawElement::MakeBox
              (param_3,param_4 + 1,(FPaintGeometry *)&local_98._s_0,pFVar6,None,
               &FLinearColor::Yellow);
  }
  return;
}

// GetToolTipText @ 142de0c20

FText * __thiscall
SAtlasVisualizer::GetToolTipText(SAtlasVisualizer *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->HoveredAtlasSlotToolTip).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->HoveredAtlasSlotToolTip).Flags;
  return __return_storage_ptr__;
}

// ~SAtlasVisualizer @ 142e14af0

void __thiscall SAtlasVisualizer::~SAtlasVisualizer(SAtlasVisualizer *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollPanel).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->AtlasPages).AllocatorInstance.Data,
             (this->AtlasPages).ArrayNum);
  pFVar1 = (this->AtlasPages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AtlasPageCombo).SharedReferenceCount.ReferenceController);
  pIVar2 = (this->HoveredAtlasSlotToolTip).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISlateViewport__6B_;
  return;
}

// Construct @ 142e3c330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAtlasVisualizer::Construct(SAtlasVisualizer *this,FArguments *param_1)

{
  byte *pbVar1;
  ISlateAtlasProvider *pIVar2;
  STextBlock *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  FSharedReferencer<1> FVar12;
  uint uVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  bool bVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  FSlateBrush *pFVar21;
  FArguments *pFVar22;
  FSlotArguments *pFVar23;
  FArguments *pFVar24;
  FSlot *pFVar25;
  FSlotArguments *pFVar26;
  FArguments *pFVar27;
  FText *pFVar28;
  TSharedRef<STextBlock,1> *pTVar29;
  FSizeParam *pFVar30;
  FArguments *pFVar31;
  undefined8 *puVar32;
  TSharedRef<SWidget,1> *pTVar33;
  ulong64 uVar34;
  SComboBox<TSharedPtr<int,1>_> *pSVar35;
  SComboBox<TSharedPtr<int,1>_> *pSVar36;
  FArguments *pFVar37;
  TSharedRef<SCheckBox,1> *pTVar38;
  FSlotArguments *pFVar39;
  undefined1 *puVar40;
  FMemScope FVar41;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_00;
  FArguments *this_01;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SButton,1> *pTVar42;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar43;
  FArguments *pFVar44;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SImage,1> *pTVar45;
  FSlotArguments *pFVar46;
  FArguments *pFVar47;
  TSharedRef<SWidget_const_,1> *pTVar48;
  TSharedRef<SViewport,1> *pTVar49;
  FArguments *pFVar50;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SOverlay,1> *pTVar51;
  FArguments *pFVar52;
  TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> *pTVar53;
  TSharedRef<SAtlasVisualizerPanel,1> *pTVar54;
  FArguments *pFVar55;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SVerticalBox,1> *pTVar56;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_07;
  TSharedRef<SBorder,1> *pTVar57;
  SViewport *this_08;
  TSharedRef<ISlateViewport,1> *pTVar58;
  FName FVar59;
  TStatId *pTVar60;
  TReferenceControllerBase<1> *pTVar61;
  FNameEntryId local_res8;
  uint uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  longlong lStack_53c0;
  uint uStack_53ac;
  T0RequiredArgs local_53a8;
  T0RequiredArgs local_53a7;
  T0RequiredArgs local_53a6;
  T0RequiredArgs local_53a5;
  T0RequiredArgs local_53a4;
  T0RequiredArgs local_53a3;
  T0RequiredArgs local_53a2;
  T0RequiredArgs local_53a1;
  T0RequiredArgs local_53a0;
  T0RequiredArgs local_539f;
  T0RequiredArgs local_539e;
  T0RequiredArgs local_539d;
  T0RequiredArgs local_539c [4];
  FSlotArguments *local_5398 [2];
  STextBlock *local_5388;
  TReferenceControllerBase<1> *pTStack_5380;
  STextBlock *local_5378;
  TReferenceControllerBase<1> *pTStack_5370;
  FName local_5368;
  FMemScope local_5360;
  FName local_5358;
  FMemScope local_5350;
  FArguments *local_5348;
  FArguments *local_5340;
  FLLMScope local_5338;
  FLLMScope local_5334;
  FLLMScope local_5330;
  FLLMScope local_532c;
  FLLMScope local_5328;
  FLLMScope local_5324;
  FLLMScope local_5320;
  FLLMScope local_531c;
  FLLMScope local_5318 [2];
  FName local_5310;
  FMemScope local_5308;
  FName local_5300;
  FSlotArguments *local_52f8;
  FMemScope local_52f0;
  STextBlock *local_52e8;
  FSharedReferencer<1> local_52e0;
  FMemScope local_52d8;
  SCheckBox *local_52d0;
  FName local_52c8;
  STextBlock *local_52c0;
  FSharedReferencer<1> local_52b8;
  FSlotArguments *local_52b0;
  FName local_52a8;
  STextBlock *local_52a0;
  FMemScope local_5298;
  TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> local_5290;
  TSharedRef<SWidget,1> local_5278;
  FSlateBrush *local_5268;
  undefined1 local_5260;
  undefined1 local_5258 [8];
  ForAnyElementType FStack_5250;
  ulonglong local_5248;
  FText local_5240;
  bool local_5230;
  undefined1 local_5228 [8];
  ForAnyElementType FStack_5220;
  ulonglong local_5218;
  undefined8 local_5210;
  FSharedReferencer<1> local_5208 [2];
  TSharedRef<SWidget,1> local_51f8;
  TSharedPtr<SViewport,1> local_51e8;
  undefined4 local_51d8 [2];
  FName local_51d0;
  FMemScope local_51c8;
  FArguments *local_51c0;
  TReferenceControllerBase<1> *local_51b8;
  FMemScope local_51b0;
  TReferenceControllerBase<1> *local_51a8;
  FSlotArguments *local_51a0;
  FName local_5198;
  FMemScope local_5190;
  FName local_5188;
  FMemScope local_5180;
  FArguments *local_5178;
  FSlotArguments *local_5170;
  FName local_5168;
  undefined4 local_5160 [2];
  undefined8 local_5158;
  FSharedReferencer<1> FStack_5150;
  FSlotArguments *local_5148;
  undefined4 local_5140 [2];
  undefined4 local_5138 [2];
  undefined4 local_5130 [2];
  undefined4 local_5128 [2];
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> local_5120;
  TSharedRef<SWidget,1> local_5108;
  TSharedRef<SWidget,1> local_50f8;
  TSharedRef<SWidget,1> local_50e8;
  TSharedRef<SWidget,1> local_50d8;
  TSharedRef<SWidget,1> local_50c8;
  TSharedRef<SAtlasVisualizer,1> local_50b8;
  TSharedRef<SWidget,1> local_50a8;
  TSharedRef<SWidget,1> local_5098;
  TSharedRef<SWidget,1> local_5088;
  TAttribute<FSlateBrush_const_*> local_5078;
  FDestructionSentinel local_5050;
  FDestructionSentinel local_5038;
  FDestructionSentinel local_5020;
  undefined1 *local_5008;
  FDestructionSentinel local_5000;
  undefined1 *local_4fe8;
  FDestructionSentinel local_4fe0;
  undefined1 *local_4fc8;
  FDestructionSentinel local_4fc0;
  FDelegateAllocation *local_4fa8;
  FDestructionSentinel local_4fa0;
  undefined1 *local_4f88;
  TAttribute<FText> local_4f80;
  TAttribute<FText> local_4f50;
  TAttribute<FText> local_4f20;
  code *local_4ee8;
  TReferenceControllerBase<1> *pTStack_4ee0;
  TSharedRef<SWidget_const_,1> local_4ed8;
  TSharedRef<SBorder,1> local_4ec8;
  TSharedRef<SVerticalBox,1> local_4eb8;
  TSharedRef<SAtlasVisualizerPanel,1> local_4ea8;
  TSharedRef<SOverlay,1> local_4e98;
  TSharedRef<SViewport,1> local_4e88;
  TSharedRef<SImage,1> local_4e78;
  TSharedRef<SHorizontalBox,1> local_4e68;
  TSharedRef<SButton,1> local_4e58;
  FText local_4e48;
  TSharedRef<SCheckBox,1> local_4e38;
  TSharedRef<STextBlock,1> local_4e28;
  FText local_4e18;
  TSharedRef<STextBlock,1> local_4e08;
  TSharedRef<SCheckBox,1> local_4df8;
  TSharedRef<STextBlock,1> local_4de8;
  FText local_4dd8;
  TSharedRef<STextBlock,1> local_4dc8;
  TSharedRef<STextBlock,1> local_4db8;
  TSharedRef<STextBlock,1> local_4da8;
  FText local_4d98;
  FName local_4d88;
  FName local_4d80;
  FName local_4d78;
  TSharedRef<SWidget,1> local_4d70;
  TSharedRef<SWidget,1> local_4d60;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4d50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4d38;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_4d20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4d08;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4cf0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4cd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4cc0;
  TSharedRef<SWidget,1> local_4ca8;
  code *local_4c98;
  longlong lStack_4c90;
  SComboBox<TSharedPtr<int,1>_> *local_4c88;
  TReferenceControllerBase<1> *pTStack_4c80;
  code *local_4c78;
  longlong lStack_4c70;
  code *local_4c68;
  longlong lStack_4c60;
  code *local_4c58;
  longlong lStack_4c50;
  code *local_4c48;
  longlong lStack_4c40;
  code *local_4c38;
  ulonglong uStack_4c30;
  code *local_4c28;
  ulonglong uStack_4c20;
  code *local_4c18;
  ulonglong uStack_4c10;
  TSharedRef<SWidget,1> local_4c08;
  undefined1 local_4bf8 [16];
  undefined1 local_4be8 [32];
  undefined1 local_4bc8 [24];
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4bb0;
  TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs> local_4b98;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_4b80;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4b68;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4b50;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4b38;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_4b20;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4b08;
  TSharedRef<ISlateViewport,1> local_4af0;
  FSlotArguments local_4ae0;
  FSlotArguments local_49f8;
  FSlotArguments local_4910;
  FSlotArguments local_48b0;
  undefined1 local_4850 [88];
  TOptional<FSizeParam> local_47f8;
  undefined1 local_4768 [232];
  undefined1 local_4680 [232];
  FSlotArguments local_4598;
  FSlotArguments local_44b0;
  FSlotArguments local_43c8;
  FSlotArguments local_42e0;
  FArguments local_41f8;
  FArguments local_3ff0;
  FArguments local_3de8;
  FArguments local_3be0;
  FArguments local_39d8;
  FArguments local_3768;
  FArguments local_34c0;
  FArguments local_3160;
  FArguments local_2d80;
  FArguments local_29a0;
  FArguments local_25c0;
  FArguments local_2080;
  FArguments local_1b28;
  FArguments local_15d0;
  FArguments local_1078;
  FArguments local_b20;
  FArguments local_5c8;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e3c34f;
  pFVar39 = (FSlotArguments *)0x0;
  local_res8.Value = 0;
  pIVar2 = param_1->_AtlasProvider;
  this->AtlasProvider = pIVar2;
  if ((pIVar2 == (ISlateAtlasProvider *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AtlasProvider",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                          ,0xed,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->SelectedAtlasPage = 0;
  this->bDisplayCheckerboard = false;
  pIVar19 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar19 + 0x50);
  pFVar20 = ::FName::FName(&local_4d88,"Debug.Border");
  pFVar21 = (FSlateBrush *)(*pcVar6)(pIVar19,*pFVar20,0,0);
  this->HoveredSlotBorderBrush = pFVar21;
  local_51e8.Object = (SViewport *)0x0;
  local_51e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar22 = SBorder::FArguments::FArguments(&local_29a0);
  local_51c0 = pFVar22;
  pIVar19 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar19 + 0x50);
  pFVar20 = ::FName::FName(&local_4d80,"ToolPanel.GroupBorder");
  local_5268 = (FSlateBrush *)(*pcVar6)(pIVar19,*pFVar20,0,0);
  local_5260 = 1;
  local_5248 = 0;
  local_5258 = (undefined1  [8])0x0;
  FStack_5250.Data = (FScriptContainerElement *)0x0;
  (pFVar22->_BorderImage).Value = local_5268;
  (pFVar22->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5258);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5258,
             (FWriteAccessScope *)&local_5050);
  if (((int)local_5248 != 0) && (FStack_5250.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5250.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5250,0,0,0x10);
    local_5248 = local_5248 & 0xffffffff00000000;
  }
  if (local_5050.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5050.Accessor,&local_5050);
  }
  if (FStack_5250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5250.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5258);
  local_5340 = (FArguments *)SVerticalBox::FArguments::FArguments(&local_3be0);
  pFVar23 = SVerticalBox::Slot(&local_42e0);
  pFVar23 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar23->field_0x18,__real_40800000);
  local_5348 = (FArguments *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar23);
  pFVar24 = SHorizontalBox::FArguments::FArguments(&local_3de8);
  pFVar25 = ::operator_new(0x58);
  local_5398[0] = pFVar39;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_5398[0] = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_49f8,(FSlot *)local_5398);
  local_49f8._80_4_ = 2;
  local_49f8._84_1_ = 1;
  pFVar26 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_49f8);
  fVar11 = __real_40000000;
  pFVar26 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar26->field_0x18,0.0,__real_40000000,
                       __real_40000000,__real_40000000);
  pFVar27 = STextBlock::FArguments::FArguments(&local_5c8);
  pFVar28 = FText::AsLocalizable_Advanced_LocText
                      (&local_4d98,L"AtlasVisualizer",L"SelectAPage",L"Select a page");
  FText::FText(&local_5240,pFVar28);
  local_5230 = true;
  local_5218 = 0;
  local_5228 = (undefined1  [8])0x0;
  FStack_5220.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar27->_Text).Value,&local_5240);
  (pFVar27->_Text).bIsSet = local_5230;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5228);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5228,
             (FWriteAccessScope *)&local_5038);
  if (((int)local_5218 != 0) && (FStack_5220.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5220.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5220,0,0,0x10);
    local_5218 = local_5218 & 0xffffffff00000000;
  }
  if (local_5038.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5038.Accessor,&local_5038);
  }
  if (FStack_5220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5220.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5228);
  if (local_5240.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5240.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_532c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5310 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_51b0,&local_5310,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4cc0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x105,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_51b0);
  FLLMScope::~FLLMScope(&local_532c);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4cc0,&local_4da8,pFVar27);
  local_52e8 = pTVar29->Object;
  local_52e0.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_52e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_52e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_52e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_52e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_52e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_51a8 = local_52e0.ReferenceController;
  if ((STextBlock **)&pFVar26->field_0x8 != &local_52e8) {
    *(STextBlock **)&pFVar26->field_0x8 = local_52e8;
    local_52e8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,&local_52e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_52e0.ReferenceController);
  local_5178 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar26);
  pFVar25 = ::operator_new(0x58);
  local_51a0 = pFVar39;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_51a0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4850,(FSlot *)&local_51a0);
  pFVar30 = (FSizeParam *)FAuto::FAuto((FAuto *)local_4bf8);
  TOptional<FSizeParam>::operator=(&local_47f8,pFVar30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4bc8);
  if ((void *)local_4bc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4bc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4bc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4be8);
  if ((void *)local_4be8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4be8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4be8);
  pFVar26 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_4850 + 0x18),fVar11);
  if (local_5160 != (undefined4 *)&pFVar26->field_0x50) {
    *(undefined4 *)&pFVar26->field_0x50 = 2;
    pFVar26->field_0x54 = 1;
  }
  local_5148 = pFVar39;
  if (pFVar26 != (FSlotArguments *)0xffffffffffffffb8) {
    local_5148 = pFVar26;
  }
  pFVar31 = SComboBox<TSharedPtr<int,1>_>::FArguments::FArguments(&local_34c0);
  local_5158 = 0;
  FStack_5150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar31->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar31->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  if (&pFVar31->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)&local_5158) {
    (pFVar31->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar31->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_5150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_5150.ReferenceController);
  pFVar31->_OptionsSource_ArrayPointer = &this->AtlasPages;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnComboBoxOpening,
             (FWriteAccessScope *)&local_5020);
  local_5008 = &(pFVar31->_OnComboBoxOpening).field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5008);
  uVar13 = local_5278.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar32 == (undefined8 *)0x0) {
    pTVar61 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8.Value);
  }
  else {
    uStack_53ac = local_5278.SharedReferenceCount.ReferenceController._4_4_;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4d70);
    pTVar61 = (pTVar33->SharedReferenceCount).ReferenceController;
    pFVar26 = (FSlotArguments *)&pTVar33->Object[-1].StatID;
    if (pTVar33->Object == (SWidget *)0x0) {
      pFVar26 = pFVar39;
    }
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar32 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSAtlasVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pFVar26;
    puVar32[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar39 = (FSlotArguments *)&DAT_00000003;
    puVar32[5] = OnComboOpening;
    puVar32[6] = (ulonglong)uVar13 << 0x20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pFVar39 & 2) != 0) {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pFVar39 & 1) != 0) {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d70.SharedReferenceCount.ReferenceController);
  }
  if (local_5020.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5020.Accessor,&local_5020);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnGenerateWidget,
             (FWriteAccessScope *)&local_5000);
  local_4fe8 = &(pFVar31->_OnGenerateWidget).field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4fe8);
  uVar13 = local_5278.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar32 == (undefined8 *)0x0) {
    pTVar61 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8.Value);
  }
  else {
    uStack_53ac = local_5278.SharedReferenceCount.ReferenceController._4_4_;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4d60);
    pTVar60 = &pTVar33->Object[-1].StatID;
    if (pTVar33->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    pTVar61 = (pTVar33->SharedReferenceCount).ReferenceController;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 | 0x38);
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSAtlasVisualizer___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pTVar60;
    puVar32[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar32[5] = OnGenerateWidgetForCombo;
    puVar32[6] = (ulonglong)uVar13 << 0x20;
  }
  if (((ulonglong)pFVar39 & 0x20) != 0) {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pFVar39 & 0x10) != 0) {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pFVar39 & 8) != 0) {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d60.SharedReferenceCount.ReferenceController);
  }
  if (local_5000.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5000.Accessor,&local_5000);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_4fe0);
  local_4fc8 = &(pFVar31->_OnSelectionChanged).field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4fc8);
  uVar13 = local_5278.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar32 == (undefined8 *)0x0) {
    pTVar61 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8.Value);
  }
  else {
    uStack_53ac = local_5278.SharedReferenceCount.ReferenceController._4_4_;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4ca8);
    pTVar60 = &pTVar33->Object[-1].StatID;
    if (pTVar33->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    pTVar61 = (pTVar33->SharedReferenceCount).ReferenceController;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 | 0x1c0);
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_H_00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSAtlasVisualizer___00__A6AXV__TSharedPtr_H_00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pTVar60;
    puVar32[4] = pTVar61;
    if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar61->WeakReferenceCount = (atomic<int>)((int)pTVar61->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar32[5] = OnAtlasPageChanged;
    puVar32[6] = (ulonglong)uVar13 << 0x20;
  }
  if ((uint)pFVar39 >> 8 != 0) {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if ((char)pFVar39 < '\0') {
    pFVar39 = (FSlotArguments *)(ulonglong)((uint)pFVar39 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  }
  if (((ulonglong)pFVar39 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4ca8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar15 = false;
  if (local_4fe0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4fe0.Accessor,&local_4fe0);
  }
  pFVar27 = STextBlock::FArguments::FArguments(&local_b20);
  pFVar39 = (FSlotArguments *)0x0;
  lStack_4c90 = (ulonglong)uStack_53ac << 0x20;
  local_4c98 = OnGetSelectedItemText;
  pFVar27 = STextBlock::FArguments::Text<SAtlasVisualizer>(pFVar27,this,(pmf_7fad3a10 *)&local_4c98)
  ;
  FLLMScope::FLLMScope(&local_5328,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5198 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5190,&local_5198,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4cd8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x114,local_res10);
  FMemScope::~FMemScope(&local_5190);
  FLLMScope::~FLLMScope(&local_5328);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4cd8,&local_4db8,pFVar27);
  pSVar3 = pTVar29->Object;
  pTVar61 = (pTVar29->SharedReferenceCount).ReferenceController;
  if (pTVar61 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar61->SharedReferenceCount = (atomic<int>)((int)pTVar61->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar31->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar61;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(&local_5324,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5188 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5180,&local_5188,true);
  TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_5290,"SComboBox< TSharedPtr<int32> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x10d,local_res18);
  FMemScope::~FMemScope(&local_5180);
  FLLMScope::~FLLMScope(&local_5324);
  if (local_5290._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5290._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5290._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_4c88 = (this->AtlasPageCombo).Object;
  pTStack_4c80 = (this->AtlasPageCombo).SharedReferenceCount.ReferenceController;
  (this->AtlasPageCombo).Object = local_5290._Widget.Object;
  (this->AtlasPageCombo).SharedReferenceCount.ReferenceController =
       local_5290._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4c80);
  pSVar35 = TSharedPtr<SComboBox<TSharedPtr<int,1>_>,1>::operator->(&local_5290._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar35,(FSlateBaseNamedArgs *)pFVar31);
  pSVar35 = local_5290._Widget.Object;
  SComboBox<TSharedPtr<int,1>_>::Construct(local_5290._Widget.Object,pFVar31);
  pSVar36 = TSharedPtr<SComboBox<TSharedPtr<int,1>_>,1>::operator->(&local_5290._Widget);
  if ((pSVar36->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar36->_padding_ + 0x228))(pSVar36);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_142e3cf16;
  }
  bVar17 = 0x20;
LAB_142e3cf16:
  *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ & 0xdf;
  *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ | bVar17;
  pSVar36 = TSharedPtr<SComboBox<TSharedPtr<int,1>_>,1>::operator->(&local_5290._Widget);
  pbVar1 = (byte *)((longlong)&pSVar36->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_5290._Widget.Object == (SComboBox<TSharedPtr<int,1>_> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar12.ReferenceController = local_5290._Widget.SharedReferenceCount.ReferenceController;
  local_51b8 = local_5290._Widget.SharedReferenceCount.ReferenceController;
  local_5290._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_5290._Widget.Object = (SComboBox<TSharedPtr<int,1>_> *)0x0;
  if ((pSVar35 == (SComboBox<TSharedPtr<int,1>_> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar26 = local_5148;
  local_5208[0].ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&local_5148->field_0x8 != &local_5210) {
    *(SComboBox<TSharedPtr<int,1>_> **)&local_5148->field_0x8 = pSVar35;
    local_5210 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_5148->field_0x10,local_5208);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5208[0].ReferenceController);
  pFVar24 = SHorizontalBox::FArguments::operator+(local_5178,pFVar26);
  pFVar25 = ::operator_new(0x58);
  local_5170 = pFVar39;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_5170 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_4ae0,(FSlot *)&local_5170);
  local_4ae0._80_4_ = 2;
  local_4ae0._84_1_ = 1;
  pFVar26 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_4ae0);
  pFVar26 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar26->field_0x18,0.0,fVar11,fVar11,fVar11);
  pFVar27 = STextBlock::FArguments::FArguments(&local_1078);
  uVar8 = (ulonglong)pTVar4 >> 0x20;
  lStack_53c0 = uVar8 << 0x20;
  local_4c78 = GetViewportSizeText;
  lStack_4c70 = lStack_53c0;
  pFVar27 = STextBlock::FArguments::Text<SAtlasVisualizer>(pFVar27,this,(pmf_7fad3a10 *)&local_4c78)
  ;
  FLLMScope::FLLMScope(&local_5320,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5168 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_52f0,&local_5168,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4cf0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x11d,local_res20);
  FMemScope::~FMemScope(&local_52f0);
  FLLMScope::~FLLMScope(&local_5320);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4cf0,&local_4dc8,pFVar27);
  local_52a0 = pTVar29->Object;
  local_52f0 = (FMemScope)(pTVar29->SharedReferenceCount).ReferenceController;
  if (local_52f0 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_52f0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_52f0 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_52f0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_52f0 + 8) + 1);
    UNLOCK();
  }
  local_5298 = local_52f0;
  if ((STextBlock **)&pFVar26->field_0x8 != &local_52a0) {
    *(STextBlock **)&pFVar26->field_0x8 = local_52a0;
    local_52a0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,(FSharedReferencer<1> *)&local_5298);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5298);
  pFVar24 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar26);
  pFVar25 = ::operator_new(0x58);
  local_52f8 = pFVar39;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_52f8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4680,(FSlot *)&local_52f8);
  pFVar26 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_4680 + 0x18),__real_41a00000,fVar11);
  pFVar26 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar26);
  if (local_5140 != (undefined4 *)&pFVar26->field_0x50) {
    *(undefined4 *)&pFVar26->field_0x50 = 2;
    pFVar26->field_0x54 = 1;
  }
  if (pFVar26 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar26 = pFVar39;
  }
  pFVar37 = SCheckBox::FArguments::FArguments(&local_2d80);
  lStack_53c0 = uVar8 << 0x20;
  local_4c68 = OnGetDisplayCheckerboardVisibility;
  lStack_4c60 = lStack_53c0;
  TAttribute<EVisibility>::Bind<SAtlasVisualizer>
            ((TAttribute<EVisibility> *)&pFVar37->_padding_,this,(pmf_e0f6b251 *)&local_4c68);
  lStack_53c0 = uVar8 << 0x20;
  local_4c58 = OnDisplayCheckerboardStateChanged;
  lStack_4c50 = lStack_53c0;
  pFVar37 = SCheckBox::FArguments::OnCheckStateChanged<SAtlasVisualizer>
                      (pFVar37,this,(pmf_869b8521 *)&local_4c58);
  lStack_53c0 = uVar8 << 0x20;
  local_4c48 = OnGetCheckerboardState;
  lStack_4c40 = lStack_53c0;
  pFVar37 = SCheckBox::FArguments::IsChecked<SAtlasVisualizer>
                      (pFVar37,this,(pmf_4418959f *)&local_4c48);
  pFVar27 = STextBlock::FArguments::FArguments(&local_15d0);
  pFVar28 = FText::AsLocalizable_Advanced_LocText
                      (&local_4dd8,L"AtlasVisualizer",L"DisplayCheckerboardCheckboxLabel",
                       L"Display Checkerboard");
  FText::FText(&local_4f80.Value,pFVar28);
  local_4f80.bIsSet = true;
  local_4f80.Getter._16_8_ = 0;
  local_4f80.Getter._0_8_ = 0;
  local_4f80.Getter._8_8_ = 0;
  pFVar27 = STextBlock::FArguments::Text(pFVar27,&local_4f80);
  FLLMScope::FLLMScope(&local_531c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_52a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_52d8,&local_52a8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4d08,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,299,&local_53a8);
  FMemScope::~FMemScope(&local_52d8);
  FLLMScope::~FLLMScope(&local_531c);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4d08,&local_4de8,pFVar27);
  local_5388 = pTVar29->Object;
  pTStack_5380 = (pTVar29->SharedReferenceCount).ReferenceController;
  if (pTStack_5380 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_5380->SharedReferenceCount = (atomic<int>)((int)pTStack_5380->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_5380->SharedReferenceCount = (atomic<int>)((int)pTStack_5380->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar37->_Content).Widget.Object = (SWidget *)local_5388;
  (pFVar37->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_5380;
  local_52f8 = (FSlotArguments *)pTStack_5380;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_5318,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5300 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5308,&local_5300,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_4d20,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x125,&local_53a7);
  FMemScope::~FMemScope(&local_5308);
  FLLMScope::~FLLMScope(local_5318);
  pTVar38 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4d20,&local_4df8,pFVar37);
  local_52d0 = pTVar38->Object;
  local_52c8 = (FName)(pTVar38->SharedReferenceCount).ReferenceController;
  if (local_52c8 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_52c8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_52c8 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_52c8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_52c8 + 8) + 1);
    UNLOCK();
  }
  local_52a8 = local_52c8;
  if ((SCheckBox **)&pFVar26->field_0x8 != &local_52d0) {
    *(SCheckBox **)&pFVar26->field_0x8 = local_52d0;
    local_52d0 = (SCheckBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,(FSharedReferencer<1> *)&local_52c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_52c8);
  pFVar24 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar26);
  pFVar25 = ::operator_new(0x58);
  local_52b0 = (FSlotArguments *)0x0;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_52b0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4768,(FSlot *)&local_52b0);
  pFVar39 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_4768 + 0x18),fVar11);
  puVar40 = &pFVar39->field_0x48;
  if (local_5138 != (undefined4 *)puVar40) {
    *(undefined4 *)puVar40 = 3;
    pFVar39->field_0x4c = 1;
  }
  if (puVar40 == (undefined1 *)0x0) {
    pFVar39 = (FSlotArguments *)0x0;
  }
  if (local_5130 != (undefined4 *)&pFVar39->field_0x50) {
    *(undefined4 *)&pFVar39->field_0x50 = 2;
    pFVar39->field_0x54 = 1;
  }
  pFVar26 = (FSlotArguments *)0x0;
  if (pFVar39 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar26 = pFVar39;
  }
  pFVar27 = STextBlock::FArguments::FArguments(&local_1b28);
  pTStack_5380 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_5380 & 0xffffffff00000000);
  local_5388 = (STextBlock *)GetZoomLevelPercentText;
  local_4c38 = GetZoomLevelPercentText;
  uStack_4c30 = (ulonglong)pTStack_5380;
  pFVar27 = STextBlock::FArguments::Text<SAtlasVisualizer>(pFVar27,this,(pmf_7fad3a10 *)&local_4c38)
  ;
  FLLMScope::FLLMScope(&local_5338,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5358 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5360,&local_5358,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4d38,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x134,&local_53a6);
  FMemScope::~FMemScope(&local_5360);
  FLLMScope::~FLLMScope(&local_5338);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4d38,&local_4e08,pFVar27);
  pTVar4 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_52c0 = pTVar29->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_52b8.ReferenceController = pTVar4;
  if ((STextBlock **)&pFVar26->field_0x8 != &local_52c0) {
    *(STextBlock **)&pFVar26->field_0x8 = local_52c0;
    local_52c0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,&local_52b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_52b8.ReferenceController);
  local_5358 = (FName)SHorizontalBox::FArguments::operator+(pFVar24,pFVar26);
  pFVar39 = SHorizontalBox::Slot(&local_43c8);
  pFVar39 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar39->field_0x18,fVar11);
  pFVar39 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar39);
  if (local_5128 != (undefined4 *)&pFVar39->field_0x50) {
    *(undefined4 *)&pFVar39->field_0x50 = 2;
    pFVar39->field_0x54 = 1;
  }
  if (pFVar39 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar39 = (FSlotArguments *)0x0;
  }
  pFVar37 = SCheckBox::FArguments::FArguments(&local_3160);
  pTStack_5380 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_5380 & 0xffffffff00000000);
  local_5388 = (STextBlock *)OnFitToWindowStateChanged;
  local_4c28 = OnFitToWindowStateChanged;
  uStack_4c20 = (ulonglong)pTStack_5380;
  pFVar37 = SCheckBox::FArguments::OnCheckStateChanged<SAtlasVisualizer>
                      (pFVar37,this,(pmf_869b8521 *)&local_4c28);
  pTStack_5380 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_5380 & 0xffffffff00000000);
  local_5388 = (STextBlock *)OnGetFitToWindowState;
  local_4c18 = OnGetFitToWindowState;
  uStack_4c10 = (ulonglong)pTStack_5380;
  FVar41 = (FMemScope)
           SCheckBox::FArguments::IsChecked<SAtlasVisualizer>
                     (pFVar37,this,(pmf_4418959f *)&local_4c18);
  local_5360 = FVar41;
  pFVar27 = STextBlock::FArguments::FArguments(&local_2080);
  pFVar28 = FText::AsLocalizable_Advanced_LocText
                      (&local_4e18,L"AtlasVisualizer",L"FitToWindow",L"Fit to Window");
  FText::FText(&local_4f50.Value,pFVar28);
  local_4f50.bIsSet = true;
  local_4f50.Getter._16_8_ = 0;
  local_4f50.Getter._0_8_ = 0;
  local_4f50.Getter._8_8_ = 0;
  pFVar27 = STextBlock::FArguments::Text(pFVar27,&local_4f50);
  FLLMScope::FLLMScope(&local_5330,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5368 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5350,&local_5368,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4d50,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x142,&local_53a5);
  FMemScope::~FMemScope(&local_5350);
  FLLMScope::~FLLMScope(&local_5330);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4d50,&local_4e28,pFVar27);
  pTVar5 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_5378 = pTVar29->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = ((FSharedReferencer<1> *)((longlong)FVar41 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)FVar41 + 0x1f8))->Widget).Object = (SWidget *)local_5378;
  ((FSharedReferencer<1> *)((longlong)FVar41 + 0x200))->ReferenceController = pTVar5;
  pTStack_5370 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this_00 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_4b20,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0x13d,&local_53a4);
  pTVar38 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_4e38,(FArguments *)local_5360);
  local_5098.Object = (SWidget *)pTVar38->Object;
  local_52d8 = (FMemScope)(pTVar38->SharedReferenceCount).ReferenceController;
  if (local_52d8 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_52d8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_52d8 + 8) + 1);
    UNLOCK();
  }
  local_5098.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_52d8;
  pFVar39 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar39,&local_5098);
  local_5368 = (FName)SHorizontalBox::FArguments::operator+((FArguments *)local_5358,pFVar39);
  pFVar39 = SHorizontalBox::Slot(&local_44b0);
  pFVar39 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar39->field_0x18,fVar11);
  local_5398[0] = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar39);
  if (local_51d8 != (undefined4 *)&local_5398[0]->field_0x50) {
    *(undefined4 *)&local_5398[0]->field_0x50 = 2;
    local_5398[0]->field_0x54 = 1;
  }
  if (local_5398[0] == (FSlotArguments *)0xffffffffffffffb8) {
    local_5398[0] = (FSlotArguments *)0x0;
  }
  this_01 = SButton::FArguments::FArguments(&local_25c0);
  pFVar28 = FText::AsLocalizable_Advanced_LocText
                      (&local_4e48,L"AtlasVisualizer",L"ActualSize",L"Actual Size");
  FText::FText(&local_4f20.Value,pFVar28);
  local_4f20.bIsSet = true;
  local_4f20.Getter._16_8_ = 0;
  local_4f20.Getter._0_8_ = 0;
  local_4f20.Getter._8_8_ = 0;
  FVar41 = (FMemScope)SButton::FArguments::Text(this_01,&local_4f20);
  local_5350 = FVar41;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar41 + 0x2e0),
             (FWriteAccessScope *)&local_4fc0);
  local_4fa8 = (FDelegateAllocation *)((longlong)FVar41 + 0x2e8);
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,local_4fa8);
  if (puVar32 == (undefined8 *)0x0) {
    FVar59.Number = uStackX_c;
    FVar59.ComparisonIndex.Value = local_res8.Value;
  }
  else {
    local_5378 = (STextBlock *)OnActualSizeClicked;
    pTStack_5370 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_5278.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4c08);
    pTVar60 = &pTVar33->Object[-1].StatID;
    if (pTVar33->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    FVar59 = (FName)(pTVar33->SharedReferenceCount).ReferenceController;
    if (FVar59 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FVar59 + 8) = *(int *)((longlong)FVar59 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)FVar59 + 8) = *(int *)((longlong)FVar59 + 8) + 1;
      UNLOCK();
    }
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    bVar10 = true;
    bVar9 = true;
    bVar15 = true;
    local_5310 = FVar59;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSAtlasVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pTVar60;
    *(FName *)(puVar32 + 4) = FVar59;
    if (FVar59 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FVar59 + 0xc) = *(int *)((longlong)FVar59 + 0xc) + 1;
      UNLOCK();
    }
    puVar32[5] = local_5378;
    puVar32[6] = pTStack_5370;
    FVar59 = local_5310;
    FVar41 = local_5350;
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar59);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar59);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c08.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar15 = false;
  if (local_4fc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4fc0.Accessor,&local_4fc0);
  }
  this_02 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_4b38,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0x14c,&local_53a3);
  pTVar42 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_4e58,(FArguments *)FVar41);
  local_5088.Object = (SWidget *)pTVar42->Object;
  local_5300 = (FName)(pTVar42->SharedReferenceCount).ReferenceController;
  if (local_5300 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_5300 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_5300 + 8) + 1);
    UNLOCK();
  }
  local_5088.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_5300;
  pFVar39 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5398[0],&local_5088);
  pFVar24 = SHorizontalBox::FArguments::operator+((FArguments *)local_5368,pFVar39);
  this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4b50,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0xff,&local_53a2);
  pTVar43 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_4e68,pFVar24);
  local_51f8.Object = (SWidget *)pTVar43->Object;
  local_5308 = (FMemScope)(pTVar43->SharedReferenceCount).ReferenceController;
  if (local_5308 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_5308 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_5308 + 8) + 1);
    UNLOCK();
  }
  local_51f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_5308;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5348,&local_51f8);
  local_5358 = (FName)SVerticalBox::FArguments::operator+((FArguments *)local_5340,pFVar23);
  pFVar23 = SVerticalBox::Slot(&local_4598);
  local_5360 = (FMemScope)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar23->field_0x18,fVar11);
  local_5368 = (FName)SAtlasVisualizerPanel::FArguments::FArguments(&local_41f8);
  local_5348 = SOverlay::FArguments::FArguments(&local_3ff0);
  local_5340 = (FArguments *)SOverlay::Slot(&local_48b0,0);
  pFVar44 = SImage::FArguments::FArguments(&local_3768);
  local_51f8.Object = (SWidget *)OnGetCheckerboardVisibility;
  local_51f8.SharedReferenceCount.ReferenceController =
       local_51f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_4ee8 = OnGetCheckerboardVisibility;
  pTStack_4ee0 = local_51f8.SharedReferenceCount.ReferenceController;
  TAttribute<EVisibility>::Bind<SAtlasVisualizer>
            ((TAttribute<EVisibility> *)&pFVar44->_padding_,this,(pmf_e0f6b251 *)&local_4ee8);
  pIVar19 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar19 + 0x50);
  pFVar20 = ::FName::FName(&local_4d78,"Checkerboard");
  local_5078.Value = (FSlateBrush *)(*pcVar6)(pIVar19,*pFVar20,0,0);
  local_5078.bIsSet = true;
  local_5078.Getter._16_8_ = 0;
  local_5078.Getter._0_8_ = 0;
  local_5078.Getter._8_8_ = 0;
  pFVar44 = SImage::FArguments::Image(pFVar44,&local_5078);
  this_04 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_4b68,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0x159,&local_53a1);
  pTVar45 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_4e78,pFVar44);
  local_50f8.Object = (SWidget *)pTVar45->Object;
  local_52b0 = (FSlotArguments *)(pTVar45->SharedReferenceCount).ReferenceController;
  if (local_52b0 != (FSlotArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_52b0)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_52b0)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_52b0;
  pFVar46 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5340,&local_50f8);
  local_5350 = (FMemScope)SOverlay::FArguments::operator+(local_5348,pFVar46);
  local_5348 = (FArguments *)SOverlay::Slot(&local_4910,0);
  pFVar47 = SViewport::FArguments::FArguments(&local_39d8);
  (pFVar47->_ViewportSize).bIsSet = true;
  local_5340 = pFVar47;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar47->_ViewportSize).Getter,(FWriteAccessScope *)&local_4fa0);
  local_4f88 = &(pFVar47->_ViewportSize).Getter.field_0x8;
  puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4f88);
  if (puVar32 == (undefined8 *)0x0) {
    pFVar39 = (FSlotArguments *)CONCAT44(uStackX_c,local_res8.Value);
  }
  else {
    local_5378 = (STextBlock *)GetViewportWidgetSize;
    pTStack_5370 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_5278.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar48 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4ed8);
    pTVar60 = &pTVar48->Object[-1].StatID;
    if (pTVar48->Object == (SWidget *)0x0) {
      pTVar60 = (TStatId *)0x0;
    }
    pFVar39 = (FSlotArguments *)(pTVar48->SharedReferenceCount).ReferenceController;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(int *)&pFVar39->field_0x8 = *(int *)&pFVar39->field_0x8 + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar39->field_0x8 = *(int *)&pFVar39->field_0x8 + 1;
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar15 = true;
    *puVar32 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_5398[0] = pFVar39;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar32[2] = uVar34;
    *puVar32 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSAtlasVisualizer___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar32[3] = pTVar60;
    puVar32[4] = pFVar39;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(int *)&pFVar39->field_0xc = *(int *)&pFVar39->field_0xc + 1;
      UNLOCK();
    }
    puVar32[5] = local_5378;
    puVar32[6] = pTStack_5370;
    pFVar39 = local_5398[0];
    pFVar47 = local_5340;
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4ed8.SharedReferenceCount.ReferenceController);
  }
  if (local_4fa0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4fa0.Accessor,&local_4fa0);
  }
  pFVar47->_PreMultipliedAlpha = false;
  pFVar47->_IgnoreTextureAlpha = false;
  pFVar47->_EnableBlending = true;
  FLLMScope::FLLMScope(&local_5334,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_51d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_51c8,&local_51d0,true);
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>
            (&local_5120,"SViewport",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x15f,&local_53a0);
  FMemScope::~FMemScope(&local_51c8);
  FLLMScope::~FLLMScope(&local_5334);
  FVar14.ReferenceController = local_5120._Widget.SharedReferenceCount.ReferenceController;
  FVar12.ReferenceController = local_51e8.SharedReferenceCount.ReferenceController;
  if (local_5120._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5120._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5120._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_51e8.Object = local_5120._Widget.Object;
  local_51e8.SharedReferenceCount.ReferenceController =
       local_5120._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  pTVar49 = TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5120,&local_4e88,pFVar47);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SViewport>(&local_5108,pTVar49);
  pFVar46 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5348,&local_5108);
  pFVar50 = SOverlay::FArguments::operator+((FArguments *)local_5350,pFVar46);
  this_05 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_4b80,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0x156,&local_539f);
  pTVar51 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_4e98,pFVar50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_50a8,pTVar51);
  pFVar52 = SAtlasVisualizerPanel::FArguments::operator[]((FArguments *)local_5368,&local_50a8);
  pTVar53 = MakeTDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>
                      (&local_4b98,"SAtlasVisualizerPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0x154,&local_539e);
  pTVar53 = TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>::
            Expose<SAtlasVisualizerPanel>(pTVar53,&this->ScrollPanel);
  pTVar54 = TSlateDecl<SAtlasVisualizerPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar53,&local_4ea8,pFVar52);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAtlasVisualizerPanel>(&local_50c8,pTVar54);
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5360,&local_50c8);
  pFVar55 = SVerticalBox::FArguments::operator+((FArguments *)local_5358,pFVar23);
  this_06 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4bb0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0xfa,&local_539d);
  pTVar56 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_4eb8,pFVar55);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_50d8,pTVar56);
  pFVar22 = SBorder::FArguments::operator[](local_51c0,&local_50d8);
  this_07 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_4b08,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
                       ,0xf7,local_539c);
  pTVar57 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_07,&local_4ec8,pFVar22);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_50e8,pTVar57);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_50e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4ec8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4eb8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4bb0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4ea8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b98._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b80._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5120._Widget.SharedReferenceCount.ReferenceController);
  SViewport::FArguments::~FArguments(&local_39d8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_4910);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_52b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b68._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_3768);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_48b0);
  SOverlay::FArguments::~FArguments(&local_3ff0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41f8._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_41f8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4598);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5308);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b50._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5300);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b38._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_4e48);
  SButton::FArguments::~FArguments(&local_25c0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_44b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_52d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d50._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_4e18);
  STextBlock::FArguments::~FArguments(&local_2080);
  SCheckBox::FArguments::~FArguments(&local_3160);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_43c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d38._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1b28);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_4768);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_52a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4df8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_52f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4de8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d08._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_4dd8);
  STextBlock::FArguments::~FArguments(&local_15d0);
  SCheckBox::FArguments::~FArguments(&local_2d80);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_4680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_52f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4dc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4cf0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1078);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4ae0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_51b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_51b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5290._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar61);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4db8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4cd8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b20);
  SComboBox<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_34c0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_4850);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_51a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4da8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4cc0._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_4d98);
  STextBlock::FArguments::~FArguments(&local_5c8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_49f8);
  SHorizontalBox::FArguments::~FArguments(&local_3de8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_42e0);
  SVerticalBox::FArguments::~FArguments(&local_3be0);
  SBorder::FArguments::~FArguments(&local_29a0);
  this_08 = TSharedPtr<SViewport,1>::operator->(&local_51e8);
  pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5278);
  TSharedRef<SAtlasVisualizer,1>::TSharedRef<SAtlasVisualizer,1><SWidget>
            (&local_50b8,pTVar33,local_res8.Value._0_1_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_5278.SharedReferenceCount.ReferenceController._4_4_,
                      local_5278.SharedReferenceCount.ReferenceController._0_4_));
  pTVar58 = TSharedRef<ISlateViewport,1>::TSharedRef<ISlateViewport,1><SAtlasVisualizer>
                      (&local_4af0,&local_50b8);
  SViewport::SetViewportInterface(this_08,pTVar58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  return;
}

// GetViewportSizeText @ 142ea9bd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SAtlasVisualizer::GetViewportSizeText(SAtlasVisualizer *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  int local_res8;
  int local_resc;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FFormatArgumentValue local_58;
  undefined4 local_38;
  longlong local_30;
  longlong *local_28;
  undefined4 local_20;
  
  (**(code **)(this->_padding_ + 0x10))(this,&local_res8);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"AtlasVisualizer",L"PageSizeXY",L"({0} x {1})");
  pFVar2 = FTextFormat::FTextFormat(&local_68,pFVar1,Default);
  local_58.Type = Int;
  local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_38 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  local_58.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)local_res8;
  local_30 = (longlong)local_resc;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_98.AllocatorInstance.Data,&local_58,2);
  local_88.TextFormatData.Object = (pFVar2->TextFormatData).Object;
  local_88.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar2->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_88,&local_98);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FFormatArgumentValue *)local_98.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if (local_58.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetViewportWidgetSize @ 142ea9d40

TVector2<double> * __thiscall
SAtlasVisualizer::GetViewportWidgetSize
          (SAtlasVisualizer *this,TVector2<double> *__return_storage_ptr__)

{
  int local_res8;
  int local_resc;
  
  (**(code **)(this->_padding_ + 0x10))(this,&local_res8);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_resc;
  return __return_storage_ptr__;
}

// GetZoomLevelPercentText @ 142ead280

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SAtlasVisualizer::GetZoomLevelPercentText(SAtlasVisualizer *this,FText *__return_storage_ptr__)

{
  SAtlasVisualizerPanel *pSVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined1 local_res8 [8];
  TSharedPtr<FCulture,1> local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pSVar1 = (this->ScrollPanel).Object;
  if (pSVar1 != (SAtlasVisualizerPanel *)0x0) {
    local_48.Object = (FCulture *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3 = FText::AsPercent(&local_28,pSVar1->ZoomLevel,(FNumberFormattingOptions *)0x0,&local_48)
    ;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"AtlasVisualizer",L"ZoomLevelPercent",L"Zoom Level: {0}");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    FText::Format<FText>(__return_storage_ptr__,pFVar5,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// OnActualSizeClicked @ 142ec5a70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAtlasVisualizer::OnActualSizeClicked(SAtlasVisualizer *this,FReply *__return_storage_ptr__)

{
  SAtlasVisualizerPanel *pSVar1;
  
  pSVar1 = (this->ScrollPanel).Object;
  if (pSVar1 != (SAtlasVisualizerPanel *)0x0) {
    pSVar1->bFitToWindow = false;
    pSVar1->ZoomLevel = 1.0;
    (pSVar1->PhysicalOffset).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnAtlasPageChanged @ 142ec5d20

void __thiscall
SAtlasVisualizer::OnAtlasPageChanged(SAtlasVisualizer *this,TSharedPtr<int,1> *param_1,Type param_2)

{
  if (param_1->Object != (int *)0x0) {
    this->SelectedAtlasPage = *param_1->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnComboOpening @ 142ec6370

void __thiscall SAtlasVisualizer::OnComboOpening(SAtlasVisualizer *this)

{
  int *piVar1;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<int,1> *pTVar3;
  SComboBox<TSharedPtr<int,1>_> *pSVar4;
  SListView<TSharedPtr<int,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  Type *pTVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  TRawPtrProxy<int> local_res8;
  TSharedPtr<int,1> local_38;
  TSharedPtr<int,1> local_28;
  TReferenceControllerBase<1> *pTVar14;
  
  iVar8 = (**(code **)((longlong)*this->AtlasProvider + 8))();
  pTVar2 = &this->AtlasPages;
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(pTVar2->AllocatorInstance).Data,(this->AtlasPages).ArrayNum);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  piVar1 = &(this->AtlasPages).ArrayMax;
  (this->AtlasPages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pTVar14 = pTVar16;
  if (0 < iVar8) {
    do {
      pTVar10 = ::operator_new(4);
      local_res8.Object = (int *)pTVar16;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        *(int *)&pTVar10->_padding_ = (int)pTVar14;
        local_res8.Object = (int *)pTVar10;
      }
      TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_38,&local_res8);
      pTVar3 = (TSharedPtr<int,1> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar3 <= &local_38) && (&local_38 < pTVar3 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->AtlasPages).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->AtlasPages).ArrayNum = iVar9 + 1;
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(int **)pFVar12 = local_38.Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) =
           local_38.SharedReferenceCount.ReferenceController;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_38.Object = (int *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar13 = (int)pTVar14 + 1;
      pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)uVar13;
    } while ((int)uVar13 < iVar8);
  }
  uVar13 = this->SelectedAtlasPage;
  iVar9 = (this->AtlasPages).ArrayNum;
  if ((int)uVar13 < iVar8) {
    uVar15 = 0;
    if ((int)uVar13 < iVar9) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    pTVar16 = *(TReferenceControllerBase<1> **)(pFVar12 + (longlong)(int)uVar13 * 0x10);
    pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + (longlong)(int)uVar13 * 0x10 + 8);
  }
  else {
    pTVar14 = pTVar16;
    if (iVar9 < 1) goto LAB_142ec6563;
    this->SelectedAtlasPage = 0;
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    pTVar16 = *(TReferenceControllerBase<1> **)pFVar12;
    pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
  }
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_142ec6563:
  if (((this->AtlasPageCombo).Object == (SComboBox<TSharedPtr<int,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->AtlasPageCombo).Object;
  if (((pSVar4->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar5 = (pSVar4->ComboListView).Object;
  pTVar11 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar5->_padding_);
  if ((*pTVar11 != None) &&
     (*(int *)&(pSVar5->SelectedItems).Elements.field_0x8 !=
      *(int *)&(pSVar5->SelectedItems).Elements.field_0x34)) {
    (**(code **)(pSVar5->_padding_ + 0x30))(&pSVar5->_padding_);
    (**(code **)(pSVar5->_padding_ + 0x40))(&pSVar5->_padding_,3);
  }
  if (((this->AtlasPageCombo).Object == (SComboBox<TSharedPtr<int,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->AtlasPageCombo).Object;
  if (((pSVar4->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(((pSVar4->ComboListView).Object)->_padding_ + 0x248))();
  if (((this->AtlasPageCombo).Object == (SComboBox<TSharedPtr<int,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->AtlasPageCombo).Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
    if (((pSVar4->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SListView<TSharedPtr<int,1>_>::ClearSelection((pSVar4->ComboListView).Object);
  }
  else {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((pSVar4->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar5 = (pSVar4->ComboListView).Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (int *)pTVar16;
    local_28.SharedReferenceCount.ReferenceController = pTVar14;
    SListView<TSharedPtr<int,1>_>::SetSelection(pSVar5,&local_28,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// OnDisplayCheckerboardStateChanged @ 142ec6ae0

void __thiscall
SAtlasVisualizer::OnDisplayCheckerboardStateChanged(SAtlasVisualizer *this,ECheckBoxState param_1)

{
  this->bDisplayCheckerboard = param_1 == Checked;
  return;
}

// OnFitToWindowStateChanged @ 142ec9b30

void __thiscall
SAtlasVisualizer::OnFitToWindowStateChanged(SAtlasVisualizer *this,ECheckBoxState param_1)

{
  SAtlasVisualizerPanel *pSVar1;
  
  pSVar1 = (this->ScrollPanel).Object;
  if (pSVar1 != (SAtlasVisualizerPanel *)0x0) {
    if (param_1 == Checked) {
      pSVar1->bFitToWindow = true;
      (pSVar1->PhysicalOffset).field0_0x0._s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      return;
    }
    pSVar1->bFitToWindow = false;
    pSVar1->ZoomLevel = 1.0;
    (pSVar1->PhysicalOffset).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  }
  return;
}

// OnGenerateWidgetForCombo @ 142ecc060

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SAtlasVisualizer::OnGenerateWidgetForCombo
          (SAtlasVisualizer *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FText local_648;
  bool local_638;
  undefined1 local_630 [8];
  ForAnyElementType FStack_628;
  ulonglong local_620;
  FMemScope local_618;
  TSharedPtr<FCulture,1> local_610;
  FDestructionSentinel local_600;
  TSharedRef<STextBlock,1> local_5e8;
  FText local_5d8;
  FText local_5c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b8;
  FText local_5a0;
  FTextFormat local_590;
  FArguments local_580;
  
  pFVar4 = STextBlock::FArguments::FArguments(&local_580);
  local_610.Object = (FCulture *)0x0;
  local_610.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object == (int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = FText::AsNumber(&local_5a0,*param_1->Object,(FNumberFormattingOptions *)0x0,&local_610);
  pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_5c8,L"AtlasVisualizer",L"PageX",L"Page {0}")
  ;
  pFVar8 = FTextFormat::FTextFormat(&local_590,pFVar7,Default);
  pFVar6 = FText::Format<FText>(&local_5d8,pFVar8,pFVar6);
  FText::FText(&local_648,pFVar6);
  local_638 = true;
  local_620 = 0;
  local_630 = (undefined1  [8])0x0;
  FStack_628.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Text).Value,&local_648);
  (pFVar4->_Text).bIsSet = local_638;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_630);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_630,
             (FWriteAccessScope *)&local_600);
  if (((int)local_620 != 0) && (FStack_628.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_628.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_628,0,0,0x10);
    local_620 = local_620 & 0xffffffff00000000;
  }
  if (local_600.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
  }
  if (FStack_628.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_628.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_630);
  if (local_648.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_648.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_618,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5b8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SAtlasVisualizer.cpp"
             ,0x25d,local_res10);
  FMemScope::~FMemScope(&local_618);
  FLLMScope::~FLLMScope(local_res18);
  pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_5b8,&local_5e8,pFVar4);
  __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b8._Widget.SharedReferenceCount.ReferenceController);
  if (local_5d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
  }
  if (local_5c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5c8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_610.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_580);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGetCheckerboardState @ 142ecc300

ECheckBoxState __thiscall SAtlasVisualizer::OnGetCheckerboardState(SAtlasVisualizer *this)

{
  return this->bDisplayCheckerboard != false;
}

// OnGetCheckerboardVisibility @ 142ecc320

EVisibility __thiscall SAtlasVisualizer::OnGetCheckerboardVisibility(SAtlasVisualizer *this)

{
  char cVar1;
  EVisibility EVar2;
  uchar *in_RDX;
  
  if (this->bDisplayCheckerboard != false) {
    cVar1 = (**(code **)(this->_padding_ + 0x28))();
    EVar2 = EVisibility::Visible;
    if (cVar1 == '\0') goto LAB_142ecc34a;
  }
  EVar2.Value.Value = EVisibility::Collapsed.Value.Value;
LAB_142ecc34a:
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnGetDisplayCheckerboardVisibility @ 142ecc360

EVisibility __thiscall SAtlasVisualizer::OnGetDisplayCheckerboardVisibility(SAtlasVisualizer *this)

{
  char cVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x28))();
  EVar2 = EVisibility::Visible;
  if (cVar1 != '\0') {
    EVar2 = EVisibility::Collapsed;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnGetFitToWindowState @ 142ecc3a0

ECheckBoxState __thiscall SAtlasVisualizer::OnGetFitToWindowState(SAtlasVisualizer *this)

{
  SAtlasVisualizerPanel *pSVar1;
  
  pSVar1 = (this->ScrollPanel).Object;
  if (pSVar1 != (SAtlasVisualizerPanel *)0x0) {
    return pSVar1->bFitToWindow != false;
  }
  return Undetermined;
}

// OnGetSelectedItemText @ 142ecc3c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SAtlasVisualizer::OnGetSelectedItemText(SAtlasVisualizer *this,FText *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  TSharedPtr<FCulture,1> local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  iVar1 = this->SelectedAtlasPage;
  iVar2 = (**(code **)((longlong)*this->AtlasProvider + 8))(this->AtlasProvider);
  if (iVar1 < iVar2) {
    local_48.Object = (FCulture *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar3 = FText::AsNumber(&local_28,iVar1,(FNumberFormattingOptions *)0x0,&local_48);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"AtlasVisualizer",L"PageX",L"Page {0}");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    FText::Format<FText>(__return_storage_ptr__,pFVar5,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"AtlasVisualizer",L"SelectAPage",L"Select a page");
  return __return_storage_ptr__;
}

// RebuildToolTip @ 142ef50a0

void __thiscall SAtlasVisualizer::RebuildToolTip(SAtlasVisualizer *this,FAtlasSlotInfo *param_1)

{
  FName *pFVar1;
  int iVar2;
  FText *pFVar3;
  ForAnyElementType FVar4;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  FTextBuilder local_38;
  
  if (param_1->TextureName == (FName)0x0) {
    pFVar3 = FText::GetEmpty();
    SWidget::SetToolTipText((SWidget *)&this->_padding_,pFVar3);
  }
  else {
    local_38.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Lines.ArrayNum = 0;
    local_38.Lines.ArrayMax = 0;
    local_38.IndentCount = 0;
    pFVar3 = FText::FromName(&local_48,&param_1->TextureName);
    FTextBuilder::AppendLine(&local_38,pFVar3);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FSlateStyleRegistry::GetSylesUsingBrush(&local_58,param_1->TextureName);
    if (local_58.ArrayNum != 0) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"AtlasVisualizer",L"AtlasDebuggingToolTipTitle",L"\nUsed by:");
      FTextBuilder::AppendLine(&local_38,pFVar3);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      iVar2 = local_58.ArrayNum;
      pFVar1 = (FName *)(local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8);
      FVar4.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != iVar2) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if ((FName *)FVar4.Data == pFVar1) break;
        local_res10 = *(FName *)FVar4.Data;
        FTextBuilder::AppendLine(&local_38,&local_res10);
        FVar4.Data = FVar4.Data + 8;
      }
    }
    pFVar3 = FTextBuilder::ToText(&local_38,&local_48);
    SWidget::SetToolTipText((SWidget *)&this->_padding_,pFVar3);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    DestructItems<FText,int>((FText *)local_38.Lines.AllocatorInstance.Data,local_38.Lines.ArrayNum)
    ;
    if ((FText *)local_38.Lines.AllocatorInstance.Data != (FText *)0x0) {
      FMemory::Free(local_38.Lines.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

