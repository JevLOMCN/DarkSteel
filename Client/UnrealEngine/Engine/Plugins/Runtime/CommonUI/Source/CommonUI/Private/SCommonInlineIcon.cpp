// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// AddReferencedObjects @ 14a7be720

void __thiscall
SCommonInlineIcon::AddReferencedObjects(SCommonInlineIcon *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a7be733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// Construct @ 14a7c5ce0

void __thiscall
SCommonInlineIcon::Construct
          (SCommonInlineIcon *this,FArguments *param_1,FInlineIconEntry *param_2,
          FTextBlockStyle *param_3)

{
  ERichTextInlineIconDisplayMode EVar1;
  code *pcVar2;
  SWidget *pSVar3;
  bool bVar4;
  FSlot *pFVar5;
  FSlotArguments *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FSlot *pFVar8;
  FArguments *pFVar9;
  TSharedRef<SHorizontalBox,1> *pTVar10;
  FSharedReferencer<1> FVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  T0RequiredArgs local_res8 [8];
  FArguments *local_res10;
  SHorizontalBox *local_508;
  FSharedReferencer<1> FStack_500;
  FSlot *local_4f8;
  FSlot *local_4f0;
  FName local_4e8;
  FMemScope local_4e0;
  undefined8 local_4d8;
  FSharedReferencer<1> local_4d0;
  undefined8 local_4c8;
  FSharedReferencer<1> local_4c0;
  undefined8 local_4b8;
  FSharedReferencer<1> local_4b0;
  SHorizontalBox *local_4a8;
  TReferenceControllerBase<1> *pTStack_4a0;
  TSharedRef<SHorizontalBox,1> local_498;
  TSharedRef<SWidget,1> local_488;
  TSharedRef<SWidget,1> local_478;
  TSharedRef<SWidget,1> local_468;
  TSharedRef<SWidget,1> local_458;
  longlong local_448;
  TReferenceControllerBase<1> *pTStack_440;
  TReferenceControllerBase<1> *local_430;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_428;
  undefined8 *local_410 [2];
  TReferenceControllerBase<1> *local_400;
  undefined1 local_3e0 [40];
  FSlotArgumentsMixin local_3b8;
  undefined8 *local_328 [2];
  TReferenceControllerBase<1> *local_318;
  undefined1 local_2f8 [40];
  FSlotArgumentsMixin local_2d0;
  FArguments local_240;
  
  EVar1 = param_1->_DisplayMode;
  pFVar8 = (FSlot *)0x0;
  iVar12 = 0;
  local_508 = (SHorizontalBox *)0x0;
  FStack_500.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar14 = 1;
  if (EVar1 == IconOnly) {
    pTVar7 = CreateIconWidget(this,&local_458,param_2,param_3,param_1->_IconScale,
                              param_1->_bTintIcon);
    local_4b0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_508 = (SHorizontalBox *)pTVar7->Object;
    if (local_4b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_4b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_500,&local_4b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.ReferenceController);
    local_468.SharedReferenceCount.ReferenceController =
         local_458.SharedReferenceCount.ReferenceController;
  }
  else {
    if (EVar1 != TextOnly) {
      if (EVar1 == IconAndText) {
        local_res10 = SHorizontalBox::FArguments::FArguments(&local_240);
        pFVar5 = ::operator_new(0x58);
        local_4f8 = pFVar8;
        if (pFVar5 != (FSlot *)0x0) {
          *(undefined8 *)pFVar5 = 0;
          *(undefined8 *)&pFVar5->field_0x8 = 0;
          *(undefined8 *)&pFVar5->field_0x10 = 0;
          *(undefined8 *)&pFVar5->field_0x18 = 0;
          *(undefined8 *)&pFVar5->field_0x20 = 0;
          *(undefined8 *)&pFVar5->field_0x28 = 0;
          *(undefined8 *)&pFVar5->field_0x30 = 0;
          *(undefined8 *)&pFVar5->field_0x38 = 0;
          *(undefined8 *)&pFVar5->field_0x40 = 0;
          *(undefined8 *)&pFVar5->field_0x48 = 0;
          *(undefined8 *)&pFVar5->field_0x50 = 0;
          local_4f8 = SHorizontalBox::FSlot::FSlot(pFVar5);
        }
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_328,(FSlot *)&local_4f8);
        pFVar6 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_328);
        pFVar6 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar6->field_0x18,0.0,0.0,__real_41000000,0.0);
        pTVar7 = CreateIconWidget(this,&local_478,param_2,param_3,param_1->_IconScale,
                                  param_1->_bTintIcon);
        pFVar6 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)pFVar6,pTVar7);
        local_res10 = SHorizontalBox::FArguments::operator+(local_res10,pFVar6);
        pFVar5 = ::operator_new(0x58);
        if (pFVar5 != (FSlot *)0x0) {
          *(undefined8 *)pFVar5 = 0;
          *(undefined8 *)&pFVar5->field_0x8 = 0;
          *(undefined8 *)&pFVar5->field_0x10 = 0;
          *(undefined8 *)&pFVar5->field_0x18 = 0;
          *(undefined8 *)&pFVar5->field_0x20 = 0;
          *(undefined8 *)&pFVar5->field_0x28 = 0;
          *(undefined8 *)&pFVar5->field_0x30 = 0;
          *(undefined8 *)&pFVar5->field_0x38 = 0;
          *(undefined8 *)&pFVar5->field_0x40 = 0;
          *(undefined8 *)&pFVar5->field_0x48 = 0;
          *(undefined8 *)&pFVar5->field_0x50 = 0;
          pFVar8 = SHorizontalBox::FSlot::FSlot(pFVar5);
        }
        local_4f0 = pFVar8;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_410,(FSlot *)&local_4f0);
        pFVar6 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_410);
        pTVar7 = CreateTextWidget(this,&local_488,param_2,param_3,param_1->_TransformPolicy);
        pFVar6 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)pFVar6,pTVar7);
        pFVar9 = SHorizontalBox::FArguments::operator+(local_res10,pFVar6);
        FLLMScope::FLLMScope
                  ((FLLMScope *)&local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,
                   Default,true);
        local_4e8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_4e0,&local_4e8,true);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                  (&local_428,"SHorizontalBox",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
                   ,0xdd,local_res8);
        FMemScope::~FMemScope(&local_4e0);
        FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
        pTVar10 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_428,&local_498,pFVar9);
        local_4d0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_508 = pTVar10->Object;
        if (local_4d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_4d0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_4d0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_4d8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_500,&local_4d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4d0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_498.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_428._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_488.SharedReferenceCount.ReferenceController);
        TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                  (&local_3b8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e0);
        if ((void *)local_3e0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_3e0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_3e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_400);
        if (local_410[0] != (undefined8 *)0x0) {
          (**(code **)*local_410[0])(local_410[0],1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_478.SharedReferenceCount.ReferenceController);
        TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                  (&local_2d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8);
        if ((void *)local_2f8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_2f8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_2f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318);
        if (local_328[0] != (undefined8 *)0x0) {
          (**(code **)*local_328[0])(local_328[0],1);
        }
        DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
                  ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data,
                   local_240._Slots.ArrayNum);
        if ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
          FMemory::Free(local_240._Slots.AllocatorInstance.Data);
        }
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
      }
      goto LAB_14a7c6116;
    }
    pTVar7 = CreateTextWidget(this,&local_468,param_2,param_3,param_1->_TransformPolicy);
    local_4c0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_508 = (SHorizontalBox *)pTVar7->Object;
    if (local_4c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_4c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_500,&local_4c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c0.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
LAB_14a7c6116:
  FVar11.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar3 = SNullWidget::NullWidget.Object;
  if (local_508 == (SHorizontalBox *)0x0) {
    local_430 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_508 = (SHorizontalBox *)pSVar3;
    iVar13 = 2;
    iVar14 = iVar12;
  }
  else {
    if ((local_508 == (SHorizontalBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_4a8 = local_508;
    pTStack_4a0 = FStack_500.ReferenceController;
    if (FStack_500.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_500.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_500.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar11.ReferenceController = FStack_500.ReferenceController;
    iVar13 = iVar12;
    if ((local_508 == (SHorizontalBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), FVar11.ReferenceController = pTStack_4a0,
       local_508 = local_4a8, bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_448 = this->_padding_;
  pTStack_440 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_508;
  this->_padding_ = (longlong)FVar11.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_440);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  if (iVar13 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_430);
  }
  if (iVar14 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4a0)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_500.ReferenceController);
  return;
}

// CreateIconWidget @ 14a7d15c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SCommonInlineIcon::CreateIconWidget
          (SCommonInlineIcon *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FInlineIconEntry *param_1,FTextBlockStyle *param_2,float param_3,bool param_4)

{
  atomic<int> *paVar1;
  FSlateBrush *this_00;
  atomic<int> aVar2;
  float fVar3;
  TReferenceControllerBase<1> *pTVar4;
  SCommonInlineIcon *pSVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  UObject *pUVar11;
  TSharedRef<SWidget,1> *pTVar12;
  UAssetManager *pUVar13;
  FSlateApplication *pFVar14;
  FArguments *pFVar15;
  FArguments *pFVar16;
  FLinearColor_u_0 *pFVar17;
  TSharedRef<SImage,1> *pTVar18;
  TSharedRef<SBox,1> *pTVar19;
  float fVar20;
  float fVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FTextBlockStyle *local_res20;
  undefined1 local_850 [8];
  void *pvStack_848;
  undefined8 local_840;
  float local_838;
  undefined1 local_834;
  undefined1 local_830 [8];
  void *pvStack_828;
  undefined8 local_820;
  SImage *local_818;
  TReferenceControllerBase<1> *pTStack_810;
  FSlateBrush *local_808;
  undefined1 local_800;
  undefined1 local_7f8 [8];
  void *pvStack_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  float local_7d0;
  undefined1 local_7cc;
  undefined1 local_7c8 [8];
  void *pvStack_7c0;
  undefined8 local_7b8;
  FName local_7b0;
  FMemScope local_7a8;
  FName local_7a0;
  FMemScope local_798;
  FString local_790;
  FSourceLocation local_778;
  TPersistentObjectPtr<FSoftObjectPath> local_758;
  TSharedRef<SWidget,1> local_730;
  TSharedRef<FSlateFontMeasure,1> local_720;
  FLinearColor_u_0 local_710;
  undefined1 local_700;
  FLinearColor_u_0 local_6fc;
  undefined4 local_6ec;
  TSharedPtr<FStreamableHandle,1> local_6e8;
  TSharedRef<SBox,1> local_6d8;
  TSharedRef<SImage,1> local_6c8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6b8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_6a0;
  undefined1 local_688 [32];
  FSoftObjectPath local_668;
  FArguments local_648;
  FArguments local_3a0;
  
  this_00 = &this->IconBrush;
  *(float *)&(this->IconBrush).ImageSize = (float)(param_1->ImageSize).field0_0x0._s_0.X;
  *(float *)&(this->IconBrush).ImageSize.field_0x4 = (float)(param_1->ImageSize).field0_0x0._s_0.Y;
  local_758.WeakPtr.ObjectIndex = *(int *)&(param_1->ResourceObject).SoftObjectPtr.field_0x0;
  local_758.WeakPtr.ObjectSerialNumber = *(int *)&(param_1->ResourceObject).SoftObjectPtr.field_0x4;
  local_res20 = param_2;
  FSoftObjectPath::FSoftObjectPath
            (&local_758.ObjectID,
             (FSoftObjectPath *)&(param_1->ResourceObject).SoftObjectPtr.field_0x8);
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_758);
  if (pUVar11 == (UObject *)0x0) {
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_730);
    pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar5 = (SCommonInlineIcon *)pTVar12->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_730.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_730.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pUVar13 = UAssetManager::Get();
    local_790.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_790.Data.ArrayNum = 0;
    local_790.Data.ArrayMax = 0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_688._24_4_ = local_758.WeakPtr.ObjectIndex;
    local_688._28_4_ = local_758.WeakPtr.ObjectSerialNumber;
    local_688._0_8_ = this;
    local_688._8_8_ = pSVar5;
    local_688._16_8_ = pTVar4;
    FSoftObjectPath::FSoftObjectPath(&local_668,&local_758.ObjectID);
    local_778.Impl._Line = 0x10a;
    local_778.Impl._Function =
         "class TSharedRef<class SWidget,1> __cdecl SCommonInlineIcon::CreateIconWidget(const struct FInlineIconEntry &,const struct FTextBlockStyle &,float,bool)"
    ;
    local_778.Impl._Column = 0x2a;
    local_778.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
    ;
    FStreamableManager::
    RequestAsyncLoad<FSoftObjectPath_const_&,_SCommonInlineIcon::CreateIconWidget_::__l5::<lambda_1>,void>
              (&pUVar13->StreamableManager,&local_6e8,&local_758.ObjectID,(<lambda_1> *)local_688,
               100,false,false,&local_790,&local_778);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e8.SharedReferenceCount.ReferenceController);
    if (local_668.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.SubPathString.Data.AllocatorInstance.Data);
    }
    if ((TReferenceControllerBase<1> *)local_688._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)(local_688._16_8_ + 0xc);
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_688._16_8_ + 8))(local_688._16_8_,1);
      }
    }
    param_2 = local_res20;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        param_2 = local_res20;
      }
    }
  }
  else {
    pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_758);
    FSlateBrush::SetResourceObject(this_00,pUVar11);
  }
  pFVar14 = FSlateApplication::Get();
  lVar6 = *(longlong *)&pFVar14->field_0x60;
  if ((*(longlong *)(lVar6 + 8) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar12;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar6 + 8),&local_720);
  uVar10 = FSlateFontMeasure::GetMaxCharacterHeight(local_720.Object,&param_2->Font,__real_3f800000)
  ;
  fVar21 = (float)uVar10;
  fVar3 = *(float *)&(this->IconBrush).ImageSize.field_0x4;
  fVar20 = fVar21 * param_3;
  if (fVar3 <= fVar21 * param_3) {
    fVar20 = fVar3;
  }
  *(float *)&(this->IconBrush).ImageSize = fVar20;
  *(float *)&(this->IconBrush).ImageSize.field_0x4 = fVar20;
  pFVar15 = SBox::FArguments::FArguments(&local_3a0);
  pFVar15->_HAlign = HAlign_Center;
  pFVar15->_VAlign = VAlign_Center;
  local_840 = 0;
  local_850 = (undefined1  [8])0x0;
  pvStack_848 = (void *)0x0;
  (pFVar15->_HeightOverride).Value.Size = fVar21;
  (pFVar15->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_850);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_850);
  if (pvStack_848 != (void *)0x0) {
    FMemory::Free(pvStack_848);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_850);
  local_834 = 1;
  local_820 = 0;
  local_830 = (undefined1  [8])0x0;
  pvStack_828 = (void *)0x0;
  (pFVar15->_WidthOverride).Value.Size = fVar21;
  (pFVar15->_WidthOverride).bIsSet = true;
  local_838 = fVar21;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_830);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_830);
  if (pvStack_828 != (void *)0x0) {
    FMemory::Free(pvStack_828);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_830);
  pFVar16 = SImage::FArguments::FArguments(&local_648);
  local_800 = 1;
  local_7e8 = 0;
  local_7f8 = (undefined1  [8])0x0;
  pvStack_7f0 = (void *)0x0;
  (pFVar16->_Image).Value = this_00;
  (pFVar16->_Image).bIsSet = true;
  local_808 = this_00;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f8);
  if (pvStack_7f0 != (void *)0x0) {
    FMemory::Free(pvStack_7f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7f8);
  if (param_4) {
    local_6ec._0_1_ = (param_2->ColorAndOpacity).ColorUseRule;
    local_6ec._1_1_ = (param_2->ColorAndOpacity).ColorTableId;
    local_6ec._2_2_ = *(undefined2 *)&(param_2->ColorAndOpacity).field_0x12;
    local_6fc._0_8_ = *(undefined8 *)&(param_2->ColorAndOpacity).SpecifiedColor.field0_0x0;
    local_6fc._8_8_ =
         *(undefined8 *)((longlong)&(param_2->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  }
  else {
    local_700 = 0;
    local_710 = FLinearColor::White.field0_0x0;
  }
  local_7cc = 1;
  pFVar17 = &local_710;
  if (param_4) {
    pFVar17 = &local_6fc;
  }
  local_7c8 = (undefined1  [8])0x0;
  pvStack_7c0 = (void *)0x0;
  local_7e0 = *(undefined8 *)pFVar17;
  uStack_7d8 = *(undefined8 *)((longlong)pFVar17 + 8);
  local_7d0 = pFVar17[1]._s_0.R;
  local_7b8 = 0;
  *(undefined8 *)&(pFVar16->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_7e0;
  *(undefined8 *)((longlong)&(pFVar16->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_7d8;
  *(float *)&(pFVar16->_ColorAndOpacity).Value.ColorUseRule = local_7d0;
  (pFVar16->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7c8);
  if (pvStack_7c0 != (void *)0x0) {
    FMemory::Free(pvStack_7c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7c8);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7a8,&local_7b0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_6a0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
             ,0x124,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_7a8);
  FLLMScope::~FLLMScope(local_res10);
  pTVar18 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6a0,&local_6c8,pFVar16);
  pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_818 = pTVar18->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = (SWidget *)local_818;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_810 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_798,&local_7a0,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_6b8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
             ,0x11e,local_res8);
  FMemScope::~FMemScope(&local_798);
  FLLMScope::~FLLMScope(local_res18);
  pTVar19 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6b8,&local_6d8,pFVar15);
  __return_storage_ptr__->Object = (SWidget *)pTVar19->Object;
  pTVar7 = (pTVar19->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_648);
  SBox::FArguments::~FArguments(&local_3a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_720.SharedReferenceCount.ReferenceController);
  if (local_758.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_758.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateTextWidget @ 14a7d1c60

TSharedRef<SWidget,1> * __thiscall
SCommonInlineIcon::CreateTextWidget
          (SCommonInlineIcon *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FInlineIconEntry *param_1,FTextBlockStyle *param_2,ETextTransformPolicy param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<STextBlock,1> *pTVar3;
  T0RequiredArgs local_res10 [8];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_5f0 [8];
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  FDestructionSentinel local_5d8;
  FText local_5c0;
  bool local_5b0;
  undefined1 local_5a8 [8];
  ForAnyElementType FStack_5a0;
  ulonglong local_598;
  TSharedRef<STextBlock,1> local_590;
  FArguments local_580;
  
  pFVar2 = STextBlock::FArguments::FArguments(&local_580);
  local_5c0.TextData.Reference = (param_1->Name).TextData.Reference;
  if (local_5c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5c0.TextData.Reference + 8))
              (local_5c0.TextData.Reference,&local_res18);
  }
  local_5c0.Flags = (param_1->Name).Flags;
  local_5b0 = true;
  local_598 = 0;
  local_5a8 = (undefined1  [8])0x0;
  FStack_5a0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar2->_Text).Value,&local_5c0);
  (pFVar2->_Text).bIsSet = local_5b0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a8,
             (FWriteAccessScope *)&local_5d8);
  if (((int)local_598 != 0) && (FStack_5a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5a0,0,0,0x10);
    local_598 = local_598 & 0xffffffff00000000;
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  if (FStack_5a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a8);
  if (local_5c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
  }
  local_5e0 = 0;
  local_5f0 = (undefined1  [8])0x0;
  FStack_5e8.Data = (FScriptContainerElement *)0x0;
  (pFVar2->_TransformPolicy).Value = param_3;
  (pFVar2->_TransformPolicy).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_TransformPolicy).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_5d8);
  if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e8,0,0,0x10);
    local_5e0 = local_5e0 & 0xffffffff00000000;
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  pFVar2->_TextStyle = param_2;
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_3,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_5d8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
             ,300,local_res10);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)&param_3);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_5d8,&local_590,
                      pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_590.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5d8.Accessor);
  STextBlock::FArguments::~FArguments(&local_580);
  return __return_storage_ptr__;
}

// GetReferencerName @ 14a7e7350

FString * __thiscall
SCommonInlineIcon::GetReferencerName(SCommonInlineIcon *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SCommonInlineIcon");
  return __return_storage_ptr__;
}

