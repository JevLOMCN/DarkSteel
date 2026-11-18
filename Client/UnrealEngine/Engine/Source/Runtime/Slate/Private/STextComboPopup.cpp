// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// Construct @ 142909690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextComboPopup::Construct(STextComboPopup *this,FArguments *param_1)

{
  TSharedPtr<FString,1> *pTVar1;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  FSlotArguments *pFVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FString *pFVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FArguments *pFVar20;
  FSlot *pFVar21;
  FSizeParam *pFVar22;
  FArguments *pFVar23;
  TSharedRef<STextBlock,1> *pTVar24;
  FSlot *pFVar25;
  FArguments *pFVar26;
  undefined8 *puVar27;
  TSharedRef<SWidget,1> *pTVar28;
  ulong64 uVar29;
  TSharedRef<SWidget_const_,1> *pTVar30;
  TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> *pTVar31;
  FArguments *pFVar32;
  FText *pFVar33;
  TSharedRef<SButton,1> *pTVar34;
  TSharedRef<SVerticalBox,1> *pTVar35;
  TSharedRef<SBorder,1> *pTVar36;
  TSharedPtr<FString,1> *pTVar37;
  SComboBox<TSharedPtr<FString,1>_> *pSVar38;
  FString *pFVar39;
  STextComboPopup *pSVar40;
  uint uVar41;
  ulonglong uVar42;
  int *piVar43;
  longlong lVar44;
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *this_00;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FSharedReferencer<1> FStack_2170;
  T0RequiredArgs local_2168;
  T0RequiredArgs local_2167;
  T0RequiredArgs local_2166;
  T0RequiredArgs local_2165 [5];
  FArguments *local_2160;
  FLLMScope local_2158;
  FLLMScope local_2154;
  FLLMScope local_2150;
  FLLMScope local_214c;
  FLLMScope local_2148;
  FLLMScope local_2144;
  undefined1 local_2140 [8];
  ForAnyElementType local_2138;
  int local_2130;
  code *local_2128;
  FSharedReferencer<1> FStack_2120;
  SVerticalBox *local_2118;
  TReferenceControllerBase<1> *pTStack_2110;
  TSharedPtr<FString,1> local_2108;
  SButton *local_20f8;
  FSharedReferencer<1> local_20f0;
  TSharedRef<FActiveTimerHandle,1> local_20e8;
  STextBlock *local_20d8;
  TReferenceControllerBase<1> *pTStack_20d0;
  undefined1 local_20c8 [8];
  FDelegateAllocation local_20c0;
  FSlateBrush *local_20b0;
  undefined1 local_20a8;
  undefined1 local_20a0 [8];
  void *pvStack_2098;
  undefined8 local_2090;
  FSlot *local_2088;
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *local_2080;
  FName local_2078;
  FMemScope local_2070;
  FSlotArguments *local_2068;
  FArguments *local_2060;
  FName local_2058;
  FMemScope local_2050;
  FArguments *local_2048;
  FName local_2040;
  FMemScope local_2038;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_2030;
  TReferenceControllerBase<1> *local_2028;
  TRawPtrProxy<FString> local_2020;
  undefined1 local_2018 [8];
  TRawPtrProxy<FString> local_2010;
  FSlot *local_2008;
  FName local_2000;
  FMemScope local_1ff8;
  FSlot *local_1ff0;
  FName local_1fe8;
  undefined8 local_1fe0;
  FSharedReferencer<1> FStack_1fd8;
  TSharedPtr<FString,1> local_1fd0;
  FMemScope local_1fc0;
  FName local_1fb8;
  FMemScope local_1fb0;
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_1fa8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1f90;
  TAttribute<FText> local_1f78;
  TSharedRef<SWidget,1> local_1f48;
  TSharedPtr<FString,1> local_1f38;
  FDestructionSentinel local_1f28;
  TAttribute<FText> local_1f10;
  FDestructionSentinel local_1ee0;
  undefined1 *local_1ec8;
  FDestructionSentinel local_1ec0;
  undefined1 *local_1ea8;
  FDestructionSentinel local_1ea0;
  undefined1 *local_1e88;
  FDestructionSentinel local_1e80;
  undefined1 *local_1e68;
  FDestructionSentinel local_1e60;
  FDelegateAllocation *local_1e48;
  TSharedRef<SBorder,1> local_1e40;
  TSharedRef<SVerticalBox,1> local_1e30;
  TSharedRef<SButton,1> local_1e20;
  FText local_1e10;
  TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> local_1e00;
  TSharedRef<STextBlock,1> local_1df0;
  TSharedRef<STextBlock,1> local_1de0;
  TSharedPtr<FString,1> local_1dd0;
  TSharedRef<SWidget,1> local_1dc0;
  FName local_1db0;
  TSharedRef<SWidget,1> local_1da8;
  TSharedRef<SWidget,1> local_1d98;
  TSharedRef<SWidget_const_,1> local_1d88;
  SComboBox<TSharedPtr<FString,1>_> *local_1d78;
  TReferenceControllerBase<1> *pTStack_1d70;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1d68;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1d50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1d38;
  TSharedRef<SWidget,1> local_1d20;
  SButton *local_1d10;
  TReferenceControllerBase<1> *pTStack_1d08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1d00;
  undefined1 local_1ce8 [16];
  undefined1 local_1cd8 [32];
  undefined1 local_1cb8 [24];
  undefined1 local_1ca0 [16];
  undefined1 local_1c90 [32];
  undefined1 local_1c70 [24];
  FReadAccessScope local_1c58;
  undefined1 local_1c40 [16];
  FSharedReferencer<1> local_1c30 [9];
  TOptional<FSizeParam> local_1be8;
  undefined1 local_1b58 [16];
  FSharedReferencer<1> local_1b48 [9];
  TOptional<FSizeParam> local_1b00;
  FSlotArguments local_1a70;
  FArguments local_1988;
  FArguments local_1780;
  FArguments local_1420;
  FArguments local_1040;
  FArguments local_b00;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1429096b8;
  uVar42 = 0;
  local_2160 = (FArguments *)((ulonglong)local_2160 & 0xffffffff00000000);
  if (&param_1->_OnTextChosen != &this->OnTextChosen) {
    local_2140 = (undefined1  [8])0x0;
    local_2138.Data = (FScriptContainerElement *)0x0;
    local_2130 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnTextChosen,
               &local_1c58);
    if ((*(int *)&(param_1->_OnTextChosen).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnTextChosen).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_2140);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c58);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChosen,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2140,
               (FWriteAccessScope *)&local_1f28);
    if ((local_2130 != 0) && (local_2138.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2138.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2138,0,0,0x10);
      local_2130 = 0;
    }
    if (local_1f28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f28.Accessor,&local_1f28);
    }
    if (local_2138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2138.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2140);
  }
  if (0 < (param_1->_TextOptions).ArrayNum) {
    pTVar2 = &this->Strings;
    lVar44 = 0;
    do {
      pFVar39 = (FString *)0x0;
      pFVar16 = ::operator_new(0x10);
      uVar41 = (uint)uVar42;
      if (pFVar16 != (FString *)0x0) {
        uVar14 = 0;
        if ((int)uVar41 < (param_1->_TextOptions).ArrayNum) {
          uVar14 = ~uVar41 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar4 = (param_1->_TextOptions).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar15 = *(int *)(pFVar4 + lVar44 + 8);
        _Src = *(void **)(pFVar4 + lVar44);
        piVar43 = &(pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = iVar15;
        pFVar39 = pFVar16;
        if (iVar15 == 0) {
          *piVar43 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,0,(ForAnyElementType *)pFVar16,iVar15,piVar43);
          memcpy((pFVar16->Data).AllocatorInstance.Data,_Src,(longlong)iVar15 * 2);
        }
      }
      piVar43 = &(this->Strings).ArrayMax;
      local_2010.Object = pFVar39;
      TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_2108,&local_2010);
      pTVar37 = (TSharedPtr<FString,1> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar37 <= &local_2108) && (&local_2108 < pTVar37 + *piVar43)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->Strings).ArrayNum;
      if (iVar15 == *piVar43) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar43);
      }
      (this->Strings).ArrayNum = iVar15 + 1;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(FString **)(pFVar4 + (longlong)iVar15 * 0x10) = local_2108.Object;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar15 * 0x10 + 8) =
           local_2108.SharedReferenceCount.ReferenceController;
      local_2108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_2108.Object = (FString *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar42 = (ulonglong)(uVar41 + 1);
      lVar44 = lVar44 + 0x10;
    } while ((int)(uVar41 + 1) < (param_1->_TextOptions).ArrayNum);
    uVar42 = (ulonglong)local_2160 & 0xffffffff;
  }
  local_2030 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  pFVar17 = SBorder::FArguments::FArguments(&local_1420);
  pIVar18 = FAppStyle::Get();
  pcVar11 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1db0,"PopupText.Background");
  local_20b0 = (FSlateBrush *)(*pcVar11)(pIVar18,*pFVar19);
  local_2090 = 0;
  local_20a8 = 1;
  local_20a0 = (undefined1  [8])0x0;
  pvStack_2098 = (void *)0x0;
  (pFVar17->_BorderImage).Value = local_20b0;
  (pFVar17->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20a0);
  if (pvStack_2098 != (void *)0x0) {
    FMemory::Free(pvStack_2098);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20a0);
  local_2048 = SBorder::FArguments::Padding(pFVar17,__real_41200000);
  pFVar20 = SVerticalBox::FArguments::FArguments(&local_1988);
  pFVar21 = ::operator_new(0x58);
  if (pFVar21 == (FSlot *)0x0) {
    local_2008 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    local_2008 = SVerticalBox::FSlot::FSlot(pFVar21);
  }
  pFVar21 = (FSlot *)0x0;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1b58,(FSlot *)&local_2008);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1ce8);
  TOptional<FSizeParam>::operator=(&local_1b00,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cb8);
  if ((void *)local_1cb8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1cb8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cb8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cd8);
  if ((void *)local_1cd8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1cd8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cd8);
  pFVar23 = STextBlock::FArguments::FArguments(&local_5a8);
  local_1f10.Value.TextData.Reference = (param_1->_Label).TextData.Reference;
  if (local_1f10.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f10.Value.TextData.Reference + 8))
              (local_1f10.Value.TextData.Reference,local_2018);
  }
  local_1f10.Value.Flags = (param_1->_Label).Flags;
  local_1f10.bIsSet = true;
  local_1f10.Getter._16_8_ = 0;
  local_1f10.Getter._0_8_ = 0;
  local_1f10.Getter._8_8_ = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_1f10);
  FLLMScope::FLLMScope(&local_2158,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2000 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1ff8,&local_2000,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1d38,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x1c,local_res18);
  FMemScope::~FMemScope(&local_1ff8);
  FLLMScope::~FLLMScope(&local_2158);
  pTVar24 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d38,&local_1de0,pFVar23);
  local_1b58._8_8_ = pTVar24->Object;
  FStack_2170.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
  if (FStack_2170.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_2170.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_2170.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FStack_2170.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_2170.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2028 = FStack_2170.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1b58 + 0x10),&FStack_2170);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2170.ReferenceController);
  local_2160 = (FArguments *)
               SVerticalBox::FArguments::operator+(pFVar20,(FSlotArguments *)local_1b58);
  pFVar25 = ::operator_new(0x58);
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
    pFVar21 = SVerticalBox::FSlot::FSlot(pFVar25);
  }
  local_1ff0 = pFVar21;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1c40,(FSlot *)&local_1ff0);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1ca0);
  TOptional<FSizeParam>::operator=(&local_1be8,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c70);
  if ((void *)local_1c70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c90);
  if ((void *)local_1c90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c90);
  pFVar26 = SComboBox<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_1780);
  local_1fe0 = 0;
  FStack_1fd8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar26->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar26->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  if (&pFVar26->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)&local_1fe0)
  {
    (pFVar26->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar26->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_1fd8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fd8.ReferenceController);
  pFVar26->_OptionsSource_ArrayPointer = &this->Strings;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar26->_OnGenerateWidget,
             (FWriteAccessScope *)&local_1ee0);
  local_1ec8 = &(pFVar26->_OnGenerateWidget).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1ec8);
  pSVar40 = this;
  if (puVar27 != (undefined8 *)0x0) {
    FStack_2170.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_20e8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1da8);
    pSVar40 = (STextComboPopup *)(pTVar28->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar28->Object;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
    }
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTextComboPopup___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = pSVar5;
    puVar27[4] = pSVar40;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar40->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
      UNLOCK();
    }
    uVar42 = 0x1c;
    puVar27[5] = MakeItemWidget;
    puVar27[6] = FStack_2170.ReferenceController;
  }
  if ((uVar42 & 0x10) != 0) {
    uVar42 = (ulonglong)((uint)uVar42 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar42 & 8) != 0) {
    uVar42 = (ulonglong)((uint)uVar42 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar42 & 4) != 0) {
    uVar42 = (ulonglong)((uint)uVar42 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1da8.SharedReferenceCount.ReferenceController);
  }
  if (local_1ee0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ee0.Accessor,&local_1ee0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar26->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_1ec0);
  local_1ea8 = &(pFVar26->_OnSelectionChanged).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1ea8);
  pSVar40 = this;
  if (puVar27 != (undefined8 *)0x0) {
    FStack_2170.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_20e8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d98);
    pSVar40 = (STextComboPopup *)(pTVar28->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar28->Object;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
    }
    uVar42 = (ulonglong)((uint)uVar42 | 0xe0);
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTextComboPopup___00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = pSVar5;
    puVar27[4] = pSVar40;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar40->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar27[5] = OnSelectionChanged;
    puVar27[6] = FStack_2170.ReferenceController;
  }
  if ((char)uVar42 < '\0') {
    uVar42 = (ulonglong)((uint)uVar42 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar42 & 0x40) != 0) {
    uVar42 = (ulonglong)((uint)uVar42 & 0xffffffbf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  uVar41 = (uint)uVar42;
  if ((uVar42 & 0x20) != 0) {
    uVar41 = uVar41 & 0xffffffdf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d98.SharedReferenceCount.ReferenceController);
  }
  if (local_1ec0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ec0.Accessor,&local_1ec0);
  }
  pFVar23 = STextBlock::FArguments::FArguments(&local_b00);
  (pFVar23->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Text).Getter,
             (FWriteAccessScope *)&local_1ea0);
  local_1e88 = &(pFVar23->_Text).Getter.field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1e88);
  pSVar40 = this;
  if (puVar27 != (undefined8 *)0x0) {
    FStack_2170.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_20e8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d88);
    pSVar40 = (STextComboPopup *)(pTVar30->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar30->Object;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
    }
    uVar41 = uVar41 | 0x700;
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTextComboPopup___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = pSVar5;
    puVar27[4] = pSVar40;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar40->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar27[5] = GetSelectedItem;
    puVar27[6] = FStack_2170.ReferenceController;
  }
  if ((uVar41 >> 10 & 1) != 0) {
    uVar41 = uVar41 & 0xfffffbff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar41 >> 9 & 1) != 0) {
    uVar41 = uVar41 & 0xfffffdff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar41 >> 8 & 1) != 0) {
    uVar41 = uVar41 & 0xfffffeff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d88.SharedReferenceCount.ReferenceController);
  }
  if (local_1ea0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ea0.Accessor,&local_1ea0);
  }
  FLLMScope::FLLMScope(&local_2154,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1fe8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1fc0,&local_1fe8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1d50,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x27,local_res20);
  FMemScope::~FMemScope(&local_1fc0);
  FLLMScope::~FLLMScope(&local_2154);
  pTVar24 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d50,&local_1df0,pFVar23);
  pTVar6 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_20d8 = pTVar24->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar26->_Content).Widget.Object = (SWidget *)local_20d8;
  (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_20d0 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(&local_2150,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1fb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1fb0,&local_1fb8,true);
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_1fa8,"SComboBox< TSharedPtr<FString> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x22,&local_2168);
  FMemScope::~FMemScope(&local_1fb0);
  FLLMScope::~FLLMScope(&local_2150);
  this_00 = &this->StringCombo;
  if (local_1fa8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1fa8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1fa8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1d78 = this_00->Object;
  pTStack_1d70 = (this->StringCombo).SharedReferenceCount.ReferenceController;
  this_00->Object = local_1fa8._Widget.Object;
  (this->StringCombo).SharedReferenceCount.ReferenceController =
       local_1fa8._Widget.SharedReferenceCount.ReferenceController;
  local_2080 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d70);
  pTVar31 = TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1fa8,&local_1e00,pFVar26);
  pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1c40._8_8_ = pTVar31->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = (FSlot *)0x0;
  local_2128 = (code *)0x0;
  FStack_2120.ReferenceController = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1c40 + 0x10),&FStack_2120);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2120.ReferenceController);
  local_2060 = SVerticalBox::FArguments::operator+
                         ((FArguments *)local_2160,(FSlotArguments *)local_1c40);
  pFVar21 = ::operator_new(0x58);
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    pFVar25 = SVerticalBox::FSlot::FSlot(pFVar21);
  }
  local_2088 = pFVar25;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_1a70,(FSlot *)&local_2088);
  local_2068 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(&local_1a70);
  pFVar32 = SButton::FArguments::FArguments(&local_1040);
  local_2160 = pFVar32;
  pFVar33 = FText::AsLocalizable_Advanced_LocText(&local_1e10,L"UnrealEd",L"OK",L"OK");
  FText::FText(&local_1f78.Value,pFVar33);
  local_1f78.bIsSet = true;
  local_1f78.Getter._16_8_ = 0;
  local_1f78.Getter._0_8_ = 0;
  local_1f78.Getter._8_8_ = 0;
  FText::operator=(&(pFVar32->_Text).Value,&local_1f78.Value);
  (pFVar32->_Text).bIsSet = local_1f78.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1f78.Getter);
  TAttribute<FText>::~TAttribute<FText>(&local_1f78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar32->_OnClicked,
             (FWriteAccessScope *)&local_1e80);
  local_1e68 = &(pFVar32->_OnClicked).field_0x8;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1e68);
  pSVar40 = this;
  if (puVar27 != (undefined8 *)0x0) {
    local_2128 = OnOK;
    FStack_2120.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_20e8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d20);
    pSVar40 = (STextComboPopup *)(pTVar28->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar28->Object;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
    }
    uVar41 = uVar41 | 0x3800;
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTextComboPopup___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = pSVar5;
    puVar27[4] = pSVar40;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar40->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar27[5] = local_2128;
    puVar27[6] = FStack_2120.ReferenceController;
    this_00 = local_2080;
  }
  if ((uVar41 >> 0xd & 1) != 0) {
    uVar41 = uVar41 & 0xffffdfff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar41 >> 0xc & 1) != 0) {
    uVar41 = uVar41 & 0xffffefff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar41 >> 0xb & 1) != 0) {
    uVar41 = uVar41 & 0xfffff7ff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d20.SharedReferenceCount.ReferenceController);
  }
  if (local_1e80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e80.Accessor,&local_1e80);
  }
  FLLMScope::FLLMScope(&local_214c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2078 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2070,&local_2078,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1f90,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x2e,&local_2167);
  FMemScope::~FMemScope(&local_2070);
  FLLMScope::~FLLMScope(&local_214c);
  if (local_1f90._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f90._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f90._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1d10 = (this->OkButton).Object;
  pTStack_1d08 = (this->OkButton).SharedReferenceCount.ReferenceController;
  (this->OkButton).Object = local_1f90._Widget.Object;
  (this->OkButton).SharedReferenceCount.ReferenceController =
       local_1f90._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d08);
  pTVar34 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1f90,&local_1e20,local_2160);
  pFVar12 = local_2068;
  pTVar8 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_20f8 = pTVar34->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20f0.ReferenceController = pTVar8;
  if ((SButton **)&local_2068->field_0x8 != &local_20f8) {
    *(SButton **)&local_2068->field_0x8 = local_20f8;
    local_20f8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2068->field_0x10,&local_20f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f0.ReferenceController);
  pFVar20 = SVerticalBox::FArguments::operator+(local_2060,pFVar12);
  FLLMScope::FLLMScope(&local_2148,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2058 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2050,&local_2058,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1d00,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x18,&local_2166);
  FMemScope::~FMemScope(&local_2050);
  FLLMScope::~FLLMScope(&local_2148);
  pTVar35 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d00,&local_1e30,pFVar20);
  pFVar17 = local_2048;
  pTVar9 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_2118 = pTVar35->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (local_2048->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2048->_Content).Widget.Object = (SWidget *)local_2118;
  (local_2048->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_2110 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FLLMScope::FLLMScope(&local_2144,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2040 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2038,&local_2040,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1d68,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x14,local_2165);
  FMemScope::~FMemScope(&local_2038);
  FLLMScope::~FLLMScope(&local_2144);
  pTVar36 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d68,&local_1e40,pFVar17);
  pTVar10 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_1f48.Object = (SWidget *)pTVar36->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f48.SharedReferenceCount.ReferenceController = pTVar10;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_2030,&local_1f48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d68._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d00._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f90._Widget.SharedReferenceCount.ReferenceController);
  if (local_1e10.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e10.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1040);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1a70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fa8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1df0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d50._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b00);
  SComboBox<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_1780);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1c40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2028);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1de0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d38._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1b58);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1988._Slots.AllocatorInstance.Data,local_1988._Slots.ArrayNum);
  if ((FSlotArguments *)local_1988._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1988._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1988);
  SBorder::FArguments::~FArguments(&local_1420);
  if ((this->Strings).ArrayNum < 1) {
    local_2020.Object = ::operator_new(0x10);
    if (local_2020.Object != (FString *)0x0) {
      ((local_2020.Object)->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((local_2020.Object)->Data).ArrayNum = 0;
      ((local_2020.Object)->Data).ArrayMax = 0;
    }
    uVar41 = uVar41 | 2;
    pTVar37 = TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_1dd0,&local_2020);
  }
  else {
    pFVar4 = (this->Strings).AllocatorInstance.Data;
    uVar41 = uVar41 | 1;
    local_1fd0.Object = *(FString **)pFVar4;
    local_1fd0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    if (local_1fd0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1fd0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1fd0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar37 = &local_1fd0;
  }
  pTVar1 = &this->SelectedItem;
  if (pTVar1 != pTVar37) {
    pTVar1->Object = pTVar37->Object;
    pTVar37->Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SelectedItem).SharedReferenceCount,&pTVar37->SharedReferenceCount);
  }
  if ((uVar41 & 2) != 0) {
    uVar41 = uVar41 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1dd0.SharedReferenceCount.ReferenceController);
  }
  if ((uVar41 & 1) != 0) {
    uVar41 = uVar41 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fd0.SharedReferenceCount.ReferenceController);
  }
  pSVar38 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(this_00);
  SComboBox<TSharedPtr<FString,1>_>::RefreshOptions(pSVar38);
  pSVar38 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(this_00);
  local_1f38.Object = pTVar1->Object;
  local_1f38.SharedReferenceCount.ReferenceController =
       (this->SelectedItem).SharedReferenceCount.ReferenceController;
  if (local_1f38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(pSVar38,&local_1f38);
  if (param_1->_AutoFocus == false) {
    return;
  }
  local_20c8 = (undefined1  [8])0x0;
  local_20c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_20c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20c8,
             (FWriteAccessScope *)&local_1e60);
  local_1e48 = &local_20c0;
  puVar27 = UE::Core::Private::DelegateAllocate(0x38,&local_20c0);
  if (puVar27 == (undefined8 *)0x0) {
    pSVar40 = this;
    if ((uVar41 >> 0x10 & 1) == 0) goto LAB_14290ab73;
  }
  else {
    local_2118 = (SVerticalBox *)TickAutoFocus;
    pTStack_2110 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_20e8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1dc0);
    pSVar40 = (STextComboPopup *)(pTVar28->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar28->Object;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
    }
    *puVar27 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar27[2] = uVar29;
    *puVar27 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTextComboPopup___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar27[3] = pSVar5;
    puVar27[4] = pSVar40;
    if (pSVar40 != (STextComboPopup *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar40->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
      UNLOCK();
    }
    uVar41 = 0x1c000;
    puVar27[5] = local_2118;
    puVar27[6] = pTStack_2110;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar40);
LAB_14290ab73:
  if ((uVar41 >> 0xf & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if ((uVar41 >> 0xe & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1dc0.SharedReferenceCount.ReferenceController);
  }
  if (local_1e60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e60.Accessor,&local_1e60);
  }
  SWidget::RegisterActiveTimer
            ((SWidget *)this,&local_20e8,__real_3c83126f,
             (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *)
             local_20c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_20e8.SharedReferenceCount.ReferenceController._4_4_,
                      local_20e8.SharedReferenceCount.ReferenceController._0_4_));
  return;
}

// FocusDefaultWidget @ 1429359f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STextComboPopup::FocusDefaultWidget(STextComboPopup *this)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  EVisibility EVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  ForElementType<FArrangedWidget> FVar7;
  undefined1 auStack_1a8 [32];
  TSharedRef<SWidget_const_,1> local_188;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FWidgetPath::FWidgetPath(&local_178);
  pFVar6 = FSlateApplication::Get();
  EVar4 = EVisibility::Visible;
  if ((this->StringCombo).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->StringCombo).Object;
  pTVar2 = (this->StringCombo).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188.Object = (SWidget *)pSVar1;
  local_188.SharedReferenceCount.ReferenceController = pTVar2;
  FSlateApplication::GeneratePathToWidgetChecked(pFVar6,&local_188,&local_178,EVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar6 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar6 + 0x148))(pFVar6,&local_178,2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar7 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar7,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetSelectedItem @ 142947e30

FText * __thiscall
STextComboPopup::GetSelectedItem(STextComboPopup *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->SelectedItem).Object == (FString *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  FText::FromString(__return_storage_ptr__,(this->SelectedItem).Object);
  return __return_storage_ptr__;
}

// MakeItemWidget @ 142958c40

TSharedRef<SWidget,1> * __thiscall
STextComboPopup::MakeItemWidget
          (STextComboPopup *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FText *pFVar6;
  TSharedRef<STextBlock,1> *pTVar7;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FText local_608;
  bool local_5f8;
  undefined1 local_5f0 [8];
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  FMemScope local_5d8;
  FDestructionSentinel local_5d0;
  TSharedRef<STextBlock,1> local_5b8;
  FText local_5a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_598;
  FArguments local_580;
  
  if (param_1->Object == (FString *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StringItem.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
                       ,0x58,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar5 = STextBlock::FArguments::FArguments(&local_580);
  if (param_1->Object == (FString *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar6 = FText::FromString(&local_5a8,param_1->Object);
  FText::FText(&local_608,pFVar6);
  local_5f8 = true;
  local_5e0 = 0;
  local_5f0 = (undefined1  [8])0x0;
  FStack_5e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar5->_Text).Value,&local_608);
  (pFVar5->_Text).bIsSet = local_5f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_5d0);
  if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e8,0,0,0x10);
    local_5e0 = local_5e0 & 0xffffffff00000000;
  }
  if (local_5d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d0.Accessor,&local_5d0);
  }
  if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5d8,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_598,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboPopup.cpp"
             ,0x59,local_res10);
  FMemScope::~FMemScope(&local_5d8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_598,&local_5b8,pFVar5);
  __return_storage_ptr__->Object = (SWidget *)pTVar7->Object;
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598._Widget.SharedReferenceCount.ReferenceController);
  if (local_5a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_580);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142969230

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STextComboPopup::OnKeyDown
          (STextComboPopup *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::Enter.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    OnOK(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnOK @ 142978e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall STextComboPopup::OnOK(STextComboPopup *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FString *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FReply *pFVar6;
  FReadAccessScope *this_00;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->SelectedItem).Object == (FString *)0x0) goto LAB_142978f21;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChosen,&local_38
            );
  if ((*(int *)&(this->OnTextChosen).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnTextChosen).field_0x8, plVar1 == (longlong *)0x0)) {
LAB_142978f12:
    this_00 = &local_38;
  }
  else {
    cVar4 = (**(code **)(*plVar1 + 0x38))();
    if (cVar4 == '\0') goto LAB_142978f12;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if ((this->SelectedItem).Object == (FString *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FReply *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar2 = (this->SelectedItem).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChosen,
               &local_20);
    if (*(int *)&(this->OnTextChosen).field_0x10 == 0) {
      (**(code **)(_DAT_00000000 + 0x60))(0,pFVar2);
      this_00 = &local_20;
    }
    else {
      plVar1 = *(longlong **)&(this->OnTextChosen).field_0x8;
      (**(code **)(*plVar1 + 0x60))(plVar1,pFVar2);
      this_00 = &local_20;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
LAB_142978f21:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnSelectionChanged @ 142982790

void __thiscall
STextComboPopup::OnSelectionChanged
          (STextComboPopup *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FString *)0x0) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    (this->SelectedItem).Object = pFVar1;
    (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// TickAutoFocus @ 1429ab6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
STextComboPopup::TickAutoFocus(STextComboPopup *this,double param_1,float param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SComboBox<TSharedPtr<FString,1>_> *pSVar3;
  EVisibility EVar4;
  bool bVar5;
  EActiveTimerReturnType EVar6;
  char cVar7;
  FSlateApplication *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  longlong local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  SWidget *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  TSharedRef<SWidget_const_,1> local_1a8;
  TSharedRef<SWidget,1> local_198;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar8 = FSlateApplication::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar8 + 0x28);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_198);
  local_1b8 = pTVar9->Object;
  local_1b0 = (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_1b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1b0->SharedReferenceCount = (atomic<int>)((int)local_1b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar8,&local_1d8,&local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  if (local_1d8 != 0) {
    pFVar8 = FSlateApplication::Get();
    pcVar1 = *(code **)(*(longlong *)pFVar8 + 0xf8);
    if (local_1d8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    pTVar2 = local_1d0;
    if (local_1d0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1d0->SharedReferenceCount = (atomic<int>)((int)local_1d0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_1d8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    local_1c8 = local_1d8;
    local_1c0 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar7 = (*pcVar1)(pFVar8,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (cVar7 == '\0') {
      EVar6 = Continue;
      goto LAB_1429ab948;
    }
    FWidgetPath::FWidgetPath(&local_188);
    pFVar8 = FSlateApplication::Get();
    EVar4 = EVisibility::Visible;
    if ((this->StringCombo).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    pTVar2 = (this->StringCombo).SharedReferenceCount.ReferenceController;
    pSVar3 = (this->StringCombo).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.Object = (SWidget *)pSVar3;
    local_1a8.SharedReferenceCount.ReferenceController = pTVar2;
    FSlateApplication::GeneratePathToWidgetChecked(pFVar8,&local_1a8,&local_188,EVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = FSlateApplication::Get();
    (**(code **)(*(longlong *)pFVar8 + 0x148))(pFVar8,&local_188,2);
    if (local_188.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_188.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_188.Widgets.Array;
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_188.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_188.Widgets.Array.ArrayNum);
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_188.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  EVar6 = Stop;
LAB_1429ab948:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0);
  return EVar6;
}

