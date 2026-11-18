// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 6

// BuildScrollBar @ 14a77b520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCarouselNavigationBar::BuildScrollBar(SCarouselNavigationBar *this)

{
  byte *pbVar1;
  FWidgetCarouselNavigationBarStyle *pFVar2;
  SHorizontalBox *pSVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  SButton *this_00;
  FSharedReferencer<1> FVar6;
  undefined8 *puVar7;
  TPanelChildren<SBoxPanel::FSlot> *pTVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FSlot *this_01;
  FSlot *pFVar15;
  FAuto *pFVar16;
  FArguments *pFVar17;
  FButtonStyle *pFVar18;
  int iVar19;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  int local_res18 [2];
  FSlot *local_res20;
  undefined8 *local_7c8;
  undefined4 local_7c0;
  undefined1 local_7bc;
  undefined1 local_7b8;
  undefined1 local_7b0 [8];
  ForAnyElementType FStack_7a8;
  ulonglong local_7a0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_798;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined1 local_770;
  undefined1 local_768 [8];
  ForAnyElementType FStack_760;
  ulonglong local_758;
  undefined8 local_750;
  FSharedReferencer<1> local_748;
  FName local_740;
  FMemScope local_738 [2];
  code *local_728;
  undefined4 uStack_720;
  uint uStack_71c;
  FDestructionSentinel local_718;
  FDestructionSentinel local_700;
  undefined **local_6e8;
  undefined8 *local_6e0;
  SButton *local_6d8;
  FSharedReferencer<1> local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined1 local_6b8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_6b0;
  undefined4 local_690;
  undefined1 local_68c;
  undefined1 local_688 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_658;
  char local_640;
  TDelegateBase<FNotThreadSafeDelegateMode> local_630;
  TDelegateBase<FNotThreadSafeDelegateMode> local_610;
  TPanelChildren<SBoxPanel::FSlot> *local_5f8;
  int local_5f0;
  code *local_5e8;
  longlong lStack_5e0;
  undefined1 local_5d8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5a8;
  FArguments local_590;
  
  if (((this->WidgetScrollBox).Object == (SHorizontalBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SBoxPanel::ClearChildren((SBoxPanel *)(this->WidgetScrollBox).Object);
  iVar12 = this->ItemCount;
  if (1 < iVar12) {
    pFVar15 = (FSlot *)0x0;
    do {
      pFVar2 = this->Style;
      iVar19 = (int)pFVar15;
      if (iVar19 == 0) {
        pFVar18 = &pFVar2->LeftButtonStyle;
      }
      else {
        pFVar18 = &pFVar2->RightButtonStyle;
        if (iVar19 != iVar12 + -1) {
          pFVar18 = &pFVar2->CenterButtonStyle;
        }
      }
      if (((this->WidgetScrollBox).Object == (SHorizontalBox *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pSVar3 = (this->WidgetScrollBox).Object;
      this_01 = ::operator_new(0x58);
      pFVar15 = (FSlot *)0x0;
      if (this_01 != (FSlot *)0x0) {
        *(undefined8 *)this_01 = 0;
        *(undefined8 *)&this_01->field_0x8 = 0;
        *(undefined8 *)&this_01->field_0x10 = 0;
        *(undefined8 *)&this_01->field_0x18 = 0;
        *(undefined8 *)&this_01->field_0x20 = 0;
        *(undefined8 *)&this_01->field_0x28 = 0;
        *(undefined8 *)&this_01->field_0x30 = 0;
        *(undefined8 *)&this_01->field_0x38 = 0;
        *(undefined8 *)&this_01->field_0x40 = 0;
        *(undefined8 *)&this_01->field_0x48 = 0;
        *(undefined8 *)&this_01->field_0x50 = 0;
        pFVar15 = SHorizontalBox::FSlot::FSlot(this_01);
      }
      local_res20 = pFVar15;
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)&local_6e0,(FSlot *)&local_res20);
      local_6e8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      local_5f8 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar3->field_0x218;
      local_5f0 = -1;
      local_770 = 1;
      local_758 = 0;
      local_780 = 0;
      uStack_778 = 0;
      local_6b8 = 1;
      local_768 = (undefined1  [8])0x0;
      FStack_760.Data = (FScriptContainerElement *)0x0;
      local_6c8 = 0;
      uStack_6c0 = 0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                (&local_6b0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_768);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
                 (FWriteAccessScope *)&local_718);
      if (((int)local_758 != 0) && (FStack_760.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_760.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_760,0,0,0x10);
        local_758 = local_758 & 0xffffffff00000000;
      }
      if (local_718.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
      }
      if (FStack_760.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_760.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_768);
      pFVar16 = FAuto::FAuto((FAuto *)local_5d8);
      if (pFVar16 != (FAuto *)local_688) {
        if (local_640 != '\0') {
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    (&local_658);
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_688 + 0x10));
        }
        local_688._0_4_ = *(undefined4 *)pFVar16;
        local_688._8_4_ = *(undefined4 *)&pFVar16->field_0x8;
        local_688[0xc] = pFVar16->field_0xc;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_688 + 0x10),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->field_0x10);
        local_688._40_4_ = *(undefined4 *)&pFVar16->field_0x28;
        local_688[0x2c] = pFVar16->field_0x2c;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  (&local_658,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->field_0x30);
        local_640 = '\x01';
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_5a8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5d8 + 0x10));
      local_690 = 2;
      local_68c = 1;
      pFVar17 = SButton::FArguments::FArguments(&local_590);
      uStack_720 = 0;
      pFVar17->_ButtonStyle = pFVar18;
      local_728 = HandleItemButtonClicked;
      lStack_5e0 = (ulonglong)uStack_71c << 0x20;
      local_5e8 = HandleItemButtonClicked;
      local_res18[0] = iVar19;
      TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
      BindSP<SCarouselNavigationBar,int_&>
                ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar17->_OnClicked,this,(pmf_6cadb94a *)&local_5e8,local_res18);
      local_7c0 = 9;
      local_7a0 = 0;
      local_7bc = 1;
      local_7b8 = 1;
      local_7b0 = (undefined1  [8])0x0;
      FStack_7a8.Data = (FScriptContainerElement *)0x0;
      if ((longlong *)&local_7c0 != &pFVar17->_padding_) {
        *(undefined4 *)&pFVar17->_padding_ = 9;
        *(undefined1 *)((longlong)&pFVar17->_padding_ + 4) = 1;
      }
      *(undefined1 *)&pFVar17->_padding_ = 1;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b0,
                 (FWriteAccessScope *)&local_700);
      if (((int)local_7a0 != 0) && (FStack_7a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_7a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7a8,0,0,0x10);
        local_7a0 = local_7a0 & 0xffffffff00000000;
      }
      if (local_700.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
      }
      if (FStack_7a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_7a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_7b0);
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_740 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(local_738,&local_740,true);
      TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
                (&local_798,"SButton",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\SCarouselNavigationBar.cpp"
                 ,0x59,local_res8);
      FMemScope::~FMemScope(local_738);
      FLLMScope::~FLLMScope(local_res10);
      this_00 = local_798._Widget.Object;
      if ((local_798._Widget.Object == (SButton *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar17);
      SButton::Construct(this_00,pFVar17);
      if ((this_00 == (SButton *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((this_00->_padding_ & 0x10) == 0) {
        cVar10 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
        bVar11 = 0;
        if (cVar10 != '\0') goto LAB_14a77ba0c;
      }
      else {
LAB_14a77ba0c:
        bVar11 = 0x20;
      }
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar11;
      if ((this_00 == (SButton *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((this_00 == (SButton *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.ReferenceController = local_798._Widget.SharedReferenceCount.ReferenceController;
      local_798._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_798._Widget.Object = (SButton *)0x0;
      if ((this_00 == (SButton *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_748.ReferenceController = FVar6.ReferenceController;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_6d8 = this_00;
      local_750 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_6d0,&local_748);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_748.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._ForegroundColor.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &local_590._ButtonColorAndOpacity.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._ContentScale.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._DesiredSizeScale.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnSlateButtonDrop);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnSlateButtonDragOver);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnSlateButtonDragLeave);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnSlateButtonDragEnter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnSlateButtonDragDetected)
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnLostFocus);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnReceivedFocus);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnUnhovered);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnHovered);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnReleased);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnPressed);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._OnClicked);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._Text.Getter);
      if (local_590._Text.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_590._Text.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &local_590._PressedPaddingOverride.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &local_590._NormalPaddingOverride.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_590._ContentPadding.Getter);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_590._Content.Widget.SharedReferenceCount.ReferenceController);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_590);
      pTVar8 = local_5f8;
      puVar7 = local_6e0;
      local_6e8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      if (local_6e0 != (undefined8 *)0x0) {
        if (local_5f0 == -1) {
          local_7c8 = local_6e0;
          local_6e0 = (undefined8 *)0x0;
          if ((puVar7 == (undefined8 *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewSlot.Get()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                                 ,0x1fd,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar8->Children).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_7c8) &&
              ((FScriptContainerElement *)&local_7c8 <
               pFVar4 + (longlong)(pTVar8->Children).ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = (pTVar8->Children).ArrayNum;
          if (uVar13 == (pTVar8->Children).ArrayMax) {
            uVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(pTVar8->Children).AllocatorInstance,
                                &(pTVar8->Children).ArrayMax);
          }
          pFVar4 = (pTVar8->Children).AllocatorInstance.Data;
          (pTVar8->Children).ArrayNum = uVar13 + 1;
          *(undefined8 **)(pFVar4 + (longlong)(int)uVar13 * 8) = local_7c8;
          local_7c8 = (undefined8 *)0x0;
          uVar14 = 0;
          if ((int)uVar13 < (pTVar8->Children).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          SBoxPanel::TSlot<SBoxPanel::FSlot>::Construct
                    (*(TSlot<SBoxPanel::FSlot> **)
                      ((pTVar8->Children).AllocatorInstance.Data + (longlong)(int)uVar13 * 8),
                     (FChildren *)pTVar8,(FSlotArguments *)&local_6e0);
          if (local_7c8 != (undefined8 *)0x0) {
            (**(code **)*local_7c8)(local_7c8,1);
          }
        }
        else {
          TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                    (local_5f8,(FSlotArguments *)&local_6e0,local_5f0);
        }
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_610);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_630);
      if (local_640 != '\0') {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (&local_658);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_688 + 0x10));
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_6b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6d0.ReferenceController);
      if (local_6e0 != (undefined8 *)0x0) {
        (**(code **)*local_6e0)(local_6e0,1);
      }
      iVar12 = this->ItemCount;
      pFVar15 = (FSlot *)(ulonglong)(iVar19 + 1U);
    } while ((int)(iVar19 + 1U) < iVar12);
  }
  return;
}

// Construct @ 14a77be50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SCarouselNavigationBar::Construct(SCarouselNavigationBar *this,FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  int *piVar3;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  SHorizontalBox *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  SOverlay *pSVar9;
  FSharedReferencer<1> FVar10;
  SFxWidget *pSVar11;
  FSharedReferencer<1> FVar12;
  SImage *pSVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  int iVar18;
  FArguments *pFVar19;
  FArguments *pFVar20;
  FSlot *this_02;
  FSlotArguments *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SHorizontalBox,1> *pTVar23;
  FArguments *pFVar24;
  FSlotArguments *pFVar25;
  FSlotArguments *pFVar26;
  FSlotArguments *pFVar27;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1068 [4];
  FLLMScope local_1064;
  FLLMScope local_1060;
  FLLMScope local_105c;
  FLLMScope local_1058;
  FLLMScope local_1054;
  undefined1 local_1050 [8];
  ForAnyElementType local_1048;
  int local_1040;
  undefined1 local_1038 [8];
  ForAnyElementType local_1030;
  int local_1028;
  SWidget *local_1018;
  undefined8 uStack_1010;
  undefined2 local_1008;
  undefined1 local_1000 [8];
  ForAnyElementType FStack_ff8;
  ulonglong local_ff0;
  SHorizontalBox *local_fe8;
  FSharedReferencer<1> local_fe0;
  SImage *local_fd8;
  FSharedReferencer<1> local_fd0;
  SFxWidget *local_fc8;
  FSharedReferencer<1> local_fc0;
  FSlateBrush *local_fb8;
  undefined1 local_fb0;
  undefined1 local_fa8 [8];
  ForAnyElementType FStack_fa0;
  ulonglong local_f98;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_f90;
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> local_f78;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_f60;
  FName local_f48;
  FMemScope local_f40;
  FName local_f38;
  FMemScope local_f30;
  FSlotArguments *local_f28;
  FArguments *local_f20;
  FName local_f18;
  FMemScope local_f10;
  FName local_f08;
  FMemScope local_f00;
  TReferenceControllerBase<1> *local_ef8;
  undefined4 local_ef0 [2];
  undefined4 local_ee8 [2];
  FSlotArguments *local_ee0;
  FName local_ed8;
  FMemScope local_ed0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_ec8;
  FDestructionSentinel local_eb0;
  FDestructionSentinel local_e98;
  FDestructionSentinel local_e80;
  FDestructionSentinel local_e68;
  SHorizontalBox *local_e50;
  TReferenceControllerBase<1> *pTStack_e48;
  TSharedRef<SHorizontalBox,1> local_e40;
  TSharedRef<SHorizontalBox,1> local_e30;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_e20;
  code *local_e08;
  longlong lStack_e00;
  longlong local_df8;
  TReferenceControllerBase<1> *pTStack_df0;
  FReadAccessScope local_de8;
  FReadAccessScope local_dd0;
  undefined1 local_db8 [96];
  undefined1 local_d58 [96];
  FSlotArguments local_cf8;
  FArguments local_c10;
  FArguments local_910;
  FArguments local_708;
  FArguments local_500;
  FArguments local_2f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14a77be6f;
  this->Style = param_1->_Style;
  pFVar27 = (FSlotArguments *)0x0;
  if (&param_1->_OnSelectedIndexChanged != &this->OnSelectedIndexChanged) {
    local_1050 = (undefined1  [8])0x0;
    local_1048.Data = (FScriptContainerElement *)0x0;
    local_1040 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSelectedIndexChanged,&local_de8);
    if ((*(int *)&(param_1->_OnSelectedIndexChanged).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_OnSelectedIndexChanged).field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_1050);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_de8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectedIndexChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1050);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1050,
               (FWriteAccessScope *)&local_eb0);
    if ((local_1040 != 0) && (local_1048.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1048.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1048,0,0,0x10);
      local_1040 = 0;
    }
    if (local_eb0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_eb0.Accessor,&local_eb0);
    }
    if (local_1048.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1050);
  }
  this_00 = &(param_1->_CurrentItemIndex).Getter;
  this->ItemCount = param_1->_ItemCount;
  this_01 = &(this->CurrentItemIndex).Getter;
  (this->CurrentItemIndex).Value = (param_1->_CurrentItemIndex).Value;
  (this->CurrentItemIndex).bIsSet = (param_1->_CurrentItemIndex).bIsSet;
  if (this_00 != this_01) {
    local_1038 = (undefined1  [8])0x0;
    local_1030.Data = (FScriptContainerElement *)0x0;
    local_1028 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_dd0);
    if ((*(int *)&(param_1->_CurrentItemIndex).Getter.field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_CurrentItemIndex).Getter.field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_1038);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_dd0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1038);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1038,
               (FWriteAccessScope *)&local_e98);
    if ((local_1028 != 0) && (local_1030.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1030.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1030,0,0,0x10);
      local_1028 = 0;
    }
    if (local_e98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e98.Accessor,&local_e98);
    }
    if (local_1030.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1030.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1038);
  }
  (this->CurrentSlideAmount).Value = (param_1->_CurrentSlideAmount).Value;
  (this->CurrentSlideAmount).bIsSet = (param_1->_CurrentSlideAmount).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CurrentSlideAmount).Getter,&(param_1->_CurrentSlideAmount).Getter);
  local_f20 = SOverlay::FArguments::FArguments(&local_500);
  local_f28 = SOverlay::Slot((FSlotArguments *)local_d58,0);
  pFVar19 = SFxWidget::FArguments::FArguments(&local_c10);
  local_1008 = 0x100;
  local_ff0 = 0;
  local_1000 = (undefined1  [8])0x0;
  FStack_ff8.Data = (FScriptContainerElement *)0x0;
  (pFVar19->_IgnoreClipping).Value = false;
  (pFVar19->_IgnoreClipping).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_IgnoreClipping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1000,
             (FWriteAccessScope *)&local_e80);
  if (((int)local_ff0 != 0) && (FStack_ff8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ff8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ff8,0,0,0x10);
    local_ff0 = local_ff0 & 0xffffffff00000000;
  }
  if (local_e80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e80.Accessor,&local_e80);
  }
  if (FStack_ff8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ff8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1000);
  uStack_1010 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1010._4_4_ << 0x20);
  local_1018 = (SWidget *)GetPlaceHolderPosition;
  local_e08 = GetPlaceHolderPosition;
  lStack_e00 = (longlong)uStack_1010;
  (pFVar19->_VisualOffset).bIsSet = true;
  TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SCarouselNavigationBar>
            ((TDelegateRegistration<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
              *)&(pFVar19->_VisualOffset).Getter,this,(pmf_51f1a24a *)&local_e08);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_708);
  this_02 = ::operator_new(0x58);
  local_ee0 = pFVar27;
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    local_ee0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(this_02);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_cf8,(FSlot *)&local_ee0);
  pFVar21 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_cf8);
  if (local_ef0 != (undefined4 *)&pFVar21->field_0x50) {
    *(undefined4 *)&pFVar21->field_0x50 = 2;
    pFVar21->field_0x54 = 1;
  }
  pFVar26 = pFVar27;
  if (pFVar21 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar26 = pFVar21;
  }
  puVar1 = &pFVar26->field_0x48;
  if (local_ee8 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar26->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar27 = pFVar26;
  }
  pFVar22 = SImage::FArguments::FArguments(&local_2f8);
  local_fb0 = 1;
  local_fb8 = &this->Style->HighlightBrush;
  local_f98 = 0;
  local_fa8 = (undefined1  [8])0x0;
  FStack_fa0.Data = (FScriptContainerElement *)0x0;
  (pFVar22->_Image).Value = local_fb8;
  (pFVar22->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fa8,
             (FWriteAccessScope *)&local_e68);
  if (((int)local_f98 != 0) && (FStack_fa0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_fa0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fa0,0,0,0x10);
    local_f98 = local_f98 & 0xffffffff00000000;
  }
  if (local_e68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e68.Accessor,&local_e68);
  }
  if (FStack_fa0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_fa0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fa8);
  FLLMScope::FLLMScope(&local_1064,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ed8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ed0,&local_ed8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_f60,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\SCarouselNavigationBar.cpp"
             ,0x2f,local_res8);
  FMemScope::~FMemScope(&local_ed0);
  FLLMScope::~FLLMScope(&local_1064);
  pSVar13 = local_f60._Widget.Object;
  if ((local_f60._Widget.Object == (SImage *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_f60._Widget.Object,(FSlateBaseNamedArgs *)pFVar22);
  SImage::Construct(local_f60._Widget.Object,pFVar22);
  if ((local_f60._Widget.Object == (SImage *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_f60._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_f60._Widget.Object)->_padding_ + 0x228))(local_f60._Widget.Object);
    bVar17 = 0;
    if (cVar16 != '\0') goto LAB_14a77c44b;
  }
  else {
LAB_14a77c44b:
    bVar17 = 0x20;
  }
  *(byte *)&(local_f60._Widget.Object)->_padding_ =
       (byte)(local_f60._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_f60._Widget.Object)->_padding_ =
       (byte)(local_f60._Widget.Object)->_padding_ | bVar17;
  if ((local_f60._Widget.Object == (SImage *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_f60._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_f60._Widget.Object == (SImage *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar14.ReferenceController = local_f60._Widget.SharedReferenceCount.ReferenceController;
  local_f60._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f60._Widget.Object = (SImage *)0x0;
  if ((pSVar13 == (SImage *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_fd8 = pSVar13;
  local_fd0.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SImage **)&pFVar27->field_0x8 != &local_fd8) {
    *(SImage **)&pFVar27->field_0x8 = pSVar13;
    local_fd8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->field_0x10,&local_fd0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd0.ReferenceController);
  pTVar4 = &pFVar20->_Slots;
  pFVar21 = (FSlotArguments *)(pTVar4->AllocatorInstance).Data;
  if (((pFVar21 <= pFVar27) && (pFVar27 < pFVar21 + (pFVar20->_Slots).ArrayMax)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar18 = (pFVar20->_Slots).ArrayNum;
  piVar3 = &(pFVar20->_Slots).ArrayMax;
  if (iVar18 == *piVar3) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar4->AllocatorInstance,piVar3);
  }
  (pFVar20->_Slots).ArrayNum = iVar18 + 1;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 0xe8),pFVar27)
  ;
  FLLMScope::FLLMScope(&local_1060,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_f48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_f40,&local_f48,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_e20,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\SCarouselNavigationBar.cpp"
             ,0x29,local_res10);
  FMemScope::~FMemScope(&local_f40);
  FLLMScope::~FLLMScope(&local_1060);
  pTVar23 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_e20,&local_e30,pFVar20);
  pSVar6 = pTVar23->Object;
  local_ef8 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_ef8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_ef8->SharedReferenceCount = (atomic<int>)((int)local_ef8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_ef8->SharedReferenceCount = (atomic<int>)((int)local_ef8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1018 = (pFVar19->_Content).Widget.Object;
  uStack_1010 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar19->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = local_ef8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1010);
  FLLMScope::FLLMScope(&local_105c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_f38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_f30,&local_f38,true);
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
            (&local_f78,"SFxWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\SCarouselNavigationBar.cpp"
             ,0x25,local_res18);
  FMemScope::~FMemScope(&local_f30);
  FLLMScope::~FLLMScope(&local_105c);
  pSVar11 = local_f78._Widget.Object;
  if ((local_f78._Widget.Object == (SFxWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_f78._Widget.Object,(FSlateBaseNamedArgs *)pFVar19);
  SFxWidget::Construct(local_f78._Widget.Object,pFVar19);
  if ((local_f78._Widget.Object == (SFxWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_f78._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_f78._Widget.Object)->_padding_ + 0x228))(local_f78._Widget.Object);
    bVar17 = 0;
    if (cVar16 != '\0') goto LAB_14a77c7bd;
  }
  else {
LAB_14a77c7bd:
    bVar17 = 0x20;
  }
  *(byte *)&(local_f78._Widget.Object)->_padding_ =
       (byte)(local_f78._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_f78._Widget.Object)->_padding_ =
       (byte)(local_f78._Widget.Object)->_padding_ | bVar17;
  if ((local_f78._Widget.Object == (SFxWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_f78._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_f78._Widget.Object == (SFxWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar12.ReferenceController = local_f78._Widget.SharedReferenceCount.ReferenceController;
  local_f78._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f78._Widget.Object = (SFxWidget *)0x0;
  if ((pSVar11 == (SFxWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar25 = local_f28;
  local_fc8 = pSVar11;
  local_fc0.ReferenceController = FVar12.ReferenceController;
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
  if ((SFxWidget **)&local_f28->_padding_ != &local_fc8) {
    local_f28->_padding_ = (longlong)pSVar11;
    local_fc8 = (SFxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_f28->_padding_,&local_fc0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0.ReferenceController);
  pFVar24 = SOverlay::FArguments::operator+(local_f20,pFVar25);
  pFVar25 = SOverlay::Slot((FSlotArguments *)local_db8,0);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_910);
  FLLMScope::FLLMScope(&local_1058,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_f18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_f10,&local_f18,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_ec8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\SCarouselNavigationBar.cpp"
             ,0x36,local_res20);
  FMemScope::~FMemScope(&local_f10);
  FLLMScope::~FLLMScope(&local_1058);
  if (local_ec8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ec8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_ec8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_e50 = (this->WidgetScrollBox).Object;
  pTStack_e48 = (this->WidgetScrollBox).SharedReferenceCount.ReferenceController;
  (this->WidgetScrollBox).Object = local_ec8._Widget.Object;
  (this->WidgetScrollBox).SharedReferenceCount.ReferenceController =
       local_ec8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e48);
  pTVar23 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ec8,&local_e40,pFVar20);
  pTVar7 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_fe8 = pTVar23->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_fe0.ReferenceController = pTVar7;
  if ((SHorizontalBox **)&pFVar25->_padding_ != &local_fe8) {
    pFVar25->_padding_ = (longlong)local_fe8;
    local_fe8 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->_padding_,&local_fe0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fe0.ReferenceController);
  pFVar24 = SOverlay::FArguments::operator+(pFVar24,pFVar25);
  FLLMScope::FLLMScope(&local_1054,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_f08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_f00,&local_f08,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_f90,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\SCarouselNavigationBar.cpp"
             ,0x22,local_1068);
  FMemScope::~FMemScope(&local_f00);
  FLLMScope::~FLLMScope(&local_1054);
  pSVar9 = local_f90._Widget.Object;
  if ((local_f90._Widget.Object == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_f90._Widget.Object,(FSlateBaseNamedArgs *)pFVar24);
  SOverlay::Construct(local_f90._Widget.Object,pFVar24);
  if ((local_f90._Widget.Object == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_f90._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_f90._Widget.Object)->_padding_ + 0x228))(local_f90._Widget.Object);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_14a77cb2d;
  }
  bVar17 = 0x20;
LAB_14a77cb2d:
  *(byte *)&(local_f90._Widget.Object)->_padding_ =
       (byte)(local_f90._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_f90._Widget.Object)->_padding_ =
       (byte)(local_f90._Widget.Object)->_padding_ | bVar17;
  if ((local_f90._Widget.Object == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_f90._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_f90._Widget.Object == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar10.ReferenceController = local_f90._Widget.SharedReferenceCount.ReferenceController;
  local_f90._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f90._Widget.Object = (SOverlay *)0x0;
  if ((pSVar9 == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar5 = &this->_padding_;
  if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar5);
  }
  else {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar5);
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_df8 = this->_padding_;
  pTStack_df0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar9;
  this->_padding_ = (longlong)FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_df0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f90._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ec8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_910._Slots.AllocatorInstance.Data,local_910._Slots.ArrayNum);
  if ((FSlotArguments *)local_910._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_910._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_910);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_db8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_db8._16_8_);
  if ((undefined8 *)local_db8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_db8._0_8_)(local_db8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f78._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ef8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f60._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2f8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_cf8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_708._Slots.AllocatorInstance.Data,local_708._Slots.ArrayNum);
  if ((FSlotArguments *)local_708._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_708._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_708);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c10._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10._IgnoreClipping.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10._VisualOffset.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10._LayoutScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10._RenderScaleOrigin.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10._RenderScale.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_c10);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_d58 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_d58._16_8_);
  if ((undefined8 *)local_d58._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_d58._0_8_)(local_d58._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_500._Slots.AllocatorInstance.Data,local_500._Slots.ArrayNum);
  if ((FSlotArguments *)local_500._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_500._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_500);
  BuildScrollBar(this);
  return;
}

// GetItemCount @ 14a77e3e0

int __thiscall SCarouselNavigationBar::GetItemCount(SCarouselNavigationBar *this)

{
  return this->ItemCount;
}

// GetPlaceHolderPosition @ 14a77e4b0

TVector2<double> * __thiscall
SCarouselNavigationBar::GetPlaceHolderPosition
          (SCarouselNavigationBar *this,TVector2<double> *__return_storage_ptr__)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  longlong *plVar5;
  FReadAccessScope local_48 [2];
  
  this_00 = &(this->CurrentItemIndex).Getter;
  iVar1 = this->ItemCount;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,local_48);
  if ((*(int *)&(this->CurrentItemIndex).Getter.field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->CurrentItemIndex).Getter.field_0x8, plVar5 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar5 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,local_48);
      if (*(int *)&(this->CurrentItemIndex).Getter.field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->CurrentItemIndex).Getter.field_0x8;
      }
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
      (this->CurrentItemIndex).Value = iVar3;
      goto LAB_14a77e550;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
LAB_14a77e550:
  iVar3 = (this->CurrentItemIndex).Value;
  pfVar4 = TAttribute<float>::Get(&this->CurrentSlideAmount);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(((float)iVar3 - *pfVar4) / (float)iVar1);
  return __return_storage_ptr__;
}

// HandleItemButtonClicked @ 14a77e910

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCarouselNavigationBar::HandleItemButtonClicked
          (SCarouselNavigationBar *this,FReply *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSelectedIndexChanged
             ,&local_28);
  if ((*(int *)&(this->OnSelectedIndexChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnSelectedIndexChanged).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  BuildScrollBar(this);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// SetItemCount @ 14a77ec80

void __thiscall SCarouselNavigationBar::SetItemCount(SCarouselNavigationBar *this,int param_1)

{
  this->ItemCount = param_1;
  BuildScrollBar(this);
  return;
}

