// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// GenerateWidgetForColumn @ 142e90c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
WidgetHittestGridInternal::SIntermediateResultNode::GenerateWidgetForColumn
          (SIntermediateResultNode *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FName *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  atomic<int> aVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FArguments *pFVar12;
  FArguments *pFVar13;
  FText *pFVar14;
  TSharedRef<STextBlock,1> *pTVar15;
  TSharedRef<SBox,1> *pTVar16;
  FIntermediateResultNode *pFVar17;
  TAttribute<FText> *pTVar18;
  FString *pFVar19;
  FSharedReferencer<1> FVar20;
  SWidget *pSVar21;
  SWidget *pSVar22;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2298;
  T0RequiredArgs local_2297;
  T0RequiredArgs local_2296;
  T0RequiredArgs local_2295;
  T0RequiredArgs local_2294 [4];
  FLLMScope local_2290;
  FLLMScope local_228c;
  FLLMScope local_2288;
  FLLMScope local_2284;
  FLLMScope local_2280;
  FLLMScope local_227c;
  FLLMScope local_2278 [2];
  FText local_2270;
  bool local_2260;
  undefined1 local_2258 [8];
  ForAnyElementType FStack_2250;
  ulonglong local_2248;
  undefined8 local_2240;
  undefined8 uStack_2238;
  undefined1 local_2230;
  undefined1 local_2228 [8];
  ForAnyElementType FStack_2220;
  ulonglong local_2218;
  STextBlock *local_2210;
  TReferenceControllerBase<1> *pTStack_2208;
  STextBlock *local_2200;
  TReferenceControllerBase<1> *pTStack_21f8;
  STextBlock *local_21f0;
  TReferenceControllerBase<1> *pTStack_21e8;
  FMemScope local_21e0;
  FName local_21d8;
  FMemScope local_21d0;
  FName local_21c8;
  FMemScope local_21c0;
  FName local_21b8;
  FMemScope local_21b0;
  FName local_21a8;
  FMemScope local_21a0;
  FName local_2198;
  FMemScope local_2190;
  FName local_2188;
  FMemScope local_2180;
  FName local_2178;
  TSharedPtr<FCulture,1> local_2170;
  FText local_2160;
  FDestructionSentinel local_2150;
  FDestructionSentinel local_2138;
  TAttribute<FText> local_2120;
  TAttribute<FText> local_20f0;
  TSharedRef<STextBlock,1> local_20c0;
  FString local_20b0;
  TSharedRef<SBox,1> local_20a0;
  TSharedRef<STextBlock,1> local_2090;
  TSharedRef<SBox,1> local_2080;
  TSharedRef<STextBlock,1> local_2070;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2060;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2048;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2030;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2018;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2000;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1fe8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1fd0;
  FText local_1fb8;
  TSharedRef<STextBlock,1> local_1fa8;
  FText local_1f98;
  TSharedRef<SBox,1> local_1f88;
  TAttribute<FText> local_1f78;
  FArguments local_1f48;
  FArguments local_1c08;
  FArguments local_18c8;
  FArguments local_1588;
  FArguments local_1030;
  FArguments local_ad8;
  FArguments local_580;
  
  local_580._OnDoubleClicked._16_8_ = 0x142e90cae;
  FVar1 = *param_1;
  if (FVar1 == Header_Index) {
    if (((this->NodeToVisualize).Object == (FIntermediateResultNode *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
    if (-1 < ((this->NodeToVisualize).Object)->Index) {
      pFVar12 = SBox::FArguments::FArguments(&local_1f48);
      pFVar12->_HAlign = HAlign_Left;
      pFVar12->_VAlign = VAlign_Center;
      pFVar13 = STextBlock::FArguments::FArguments(&local_1588);
      local_2170.Object = (FCulture *)0x0;
      local_2170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (((this->NodeToVisualize).Object == (FIntermediateResultNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
      pFVar14 = FText::AsNumber(&local_1fb8,((this->NodeToVisualize).Object)->Index,
                                (FNumberFormattingOptions *)0x0,&local_2170);
      FText::FText(&local_2120.Value,pFVar14);
      local_2120.bIsSet = true;
      local_2120.Getter._16_8_ = 0;
      local_2120.Getter._0_8_ = 0;
      local_2120.Getter._8_8_ = 0;
      pFVar13 = STextBlock::FArguments::Text(pFVar13,&local_2120);
      FLLMScope::FLLMScope
                (&local_2290,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_2198 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_2190,&local_2198,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_2048,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x4b,local_res18);
      FMemScope::~FMemScope(&local_2190);
      FLLMScope::~FLLMScope(&local_2290);
      pTVar15 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_2048,&local_2070,pFVar13);
      pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
      local_2210 = pTVar15->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar12->_Content).Widget.Object = (SWidget *)local_2210;
      (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
      pTStack_2208 = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FLLMScope::FLLMScope
                (&local_228c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_2188 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_2180,&local_2188,true);
      TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                (&local_2060,"SBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x47,local_res20);
      FMemScope::~FMemScope(&local_2180);
      FLLMScope::~FLLMScope(&local_228c);
      pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_2060,&local_2080,pFVar12);
      __return_storage_ptr__->Object = (SWidget *)pTVar16->Object;
      pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2080.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2060._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2070.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2048._Widget.SharedReferenceCount.ReferenceController);
      if (local_1fb8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1fb8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2170.SharedReferenceCount.ReferenceController);
      STextBlock::FArguments::~FArguments(&local_1588);
      SBox::FArguments::~FArguments(&local_1f48);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar20 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  }
  else {
    if (FVar1 == Header_WidgetName) {
      pFVar13 = STextBlock::FArguments::FArguments(&local_1030);
      if (((this->NodeToVisualize).Object == (FIntermediateResultNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
      pFVar14 = FIntermediateResultNode::GetWidgetTypeAndShortName
                          ((this->NodeToVisualize).Object,&local_1f98);
      FText::FText(&local_2270,pFVar14);
      local_2260 = true;
      local_2248 = 0;
      local_2258 = (undefined1  [8])0x0;
      FStack_2250.Data = (FScriptContainerElement *)0x0;
      FText::operator=(&(pFVar13->_Text).Value,&local_2270);
      (pFVar13->_Text).bIsSet = local_2260;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_Text).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2258);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2258,
                 (FWriteAccessScope *)&local_2150);
      if (((int)local_2248 != 0) && (FStack_2250.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2250.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2250,0,0,0x10);
        local_2248 = local_2248 & 0xffffffff00000000;
      }
      if (local_2150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2150.Accessor,&local_2150);
      }
      if (FStack_2250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2250.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2258);
      if (local_2270.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2270.TextData.Reference + 0x10))();
      }
      FLLMScope::FLLMScope
                (&local_2288,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_2178 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_21e0,&local_2178,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_2030,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x53,&local_2298);
      FMemScope::~FMemScope(&local_21e0);
      FLLMScope::~FLLMScope(&local_2288);
      pTVar15 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_2030,&local_1fa8,pFVar13);
      __return_storage_ptr__->Object = (SWidget *)pTVar15->Object;
      pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1fa8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2030._Widget.SharedReferenceCount.ReferenceController);
      if (local_1f98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f98.TextData.Reference + 0x10))();
      }
      STextBlock::FArguments::~FArguments(&local_1030);
      return __return_storage_ptr__;
    }
    if (FVar1 == Header_Result) {
      pFVar12 = SBox::FArguments::FArguments(&local_1c08);
      pFVar12->_HAlign = HAlign_Left;
      pFVar12->_VAlign = VAlign_Center;
      pFVar13 = STextBlock::FArguments::FArguments(&local_ad8);
      pFVar17 = TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>::operator->
                          (&this->NodeToVisualize);
      pTVar18 = TAttribute<FText>::TAttribute<FText><FText>(&local_1f78,&pFVar17->Result);
      pFVar13 = STextBlock::FArguments::Text(pFVar13,pTVar18);
      FLLMScope::FLLMScope
                (&local_2284,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_21d8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_21d0,&local_21d8,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_2000,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x5c,&local_2297);
      FMemScope::~FMemScope(&local_21d0);
      FLLMScope::~FLLMScope(&local_2284);
      pTVar15 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_2000,&local_20c0,pFVar13);
      pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
      local_2200 = pTVar15->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar12->_Content).Widget.Object = (SWidget *)local_2200;
      (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
      pTStack_21f8 = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FLLMScope::FLLMScope
                (&local_2280,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_21c8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_21c0,&local_21c8,true);
      TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                (&local_2018,"SBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x58,&local_2296);
      FMemScope::~FMemScope(&local_21c0);
      FLLMScope::~FLLMScope(&local_2280);
      pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_2018,&local_1f88,pFVar12);
      __return_storage_ptr__->Object = (SWidget *)pTVar16->Object;
      pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f88.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2018._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20c0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2000._Widget.SharedReferenceCount.ReferenceController);
      STextBlock::FArguments::~FArguments(&local_ad8);
      SBox::FArguments::~FArguments(&local_1c08);
      return __return_storage_ptr__;
    }
    if (FVar1 == Header_WidgetInfo) {
      pFVar12 = SBox::FArguments::FArguments(&local_18c8);
      uStack_2238 = _UNK_150925078;
      local_2240 = ___xmm_00000000400000000000000040000000;
      pSVar21 = (SWidget *)0x0;
      pFVar12->_HAlign = HAlign_Left;
      pFVar12->_VAlign = VAlign_Center;
      uVar8 = ___xmm_00000000400000000000000040000000;
      local_2230 = 1;
      local_2218 = 0;
      local_2228 = (undefined1  [8])0x0;
      FStack_2220.Data = (FScriptContainerElement *)0x0;
      ___xmm_00000000400000000000000040000000 = (undefined4)local_2240;
      _UNK_150925074 = SUB84(local_2240,4);
      uVar7 = _UNK_150925074;
      (pFVar12->_Padding).Value.Left = (float)___xmm_00000000400000000000000040000000;
      ___xmm_00000000400000000000000040000000 = uVar8;
      uVar8 = _UNK_150925078;
      (pFVar12->_Padding).Value.Top = (float)uVar7;
      _UNK_150925078 = (undefined4)uStack_2238;
      _UNK_15092507c = SUB84(uStack_2238,4);
      uVar7 = _UNK_15092507c;
      (pFVar12->_Padding).Value.Right = (float)_UNK_150925078;
      _UNK_150925078 = uVar8;
      (pFVar12->_Padding).Value.Bottom = (float)uVar7;
      (pFVar12->_Padding).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Padding).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2228);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2228,
                 (FWriteAccessScope *)&local_2138);
      if (((int)local_2218 != 0) && (FStack_2220.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2220.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2220,0,0,0x10);
        local_2218 = local_2218 & 0xffffffff00000000;
      }
      if (local_2138.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2138.Accessor,&local_2138);
      }
      if (FStack_2220.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2220.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2228);
      pFVar13 = STextBlock::FArguments::FArguments(&local_580);
      pFVar17 = TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>::operator->
                          (&this->NodeToVisualize);
      pSVar4 = (SWidget *)(pFVar17->Widget).WeakReferenceCount.ReferenceController;
      pSVar22 = pSVar4;
      if (pSVar4 != (SWidget *)0x0) {
        aVar6 = *(atomic<int> *)&pSVar4->_padding_;
        do {
          pSVar22 = pSVar21;
          if (aVar6 == (atomic<int>)0x0) goto LAB_142e91565;
          LOCK();
          aVar10 = *(atomic<int> *)&pSVar4->_padding_;
          bVar9 = aVar6 == aVar10;
          if (bVar9) {
            *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
            aVar10 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar10;
        } while (!bVar9);
        pSVar21 = (pFVar17->Widget).Object;
        pSVar22 = pSVar4;
      }
LAB_142e91565:
      pFVar19 = FReflectionMetaData::GetWidgetDebugInfo(&local_20b0,pSVar21);
      FText::FromString(&local_2160,pFVar19);
      if (local_20b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20b0.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar22);
      FText::FText(&local_20f0.Value,&local_2160);
      local_20f0.bIsSet = true;
      local_20f0.Getter._16_8_ = 0;
      local_20f0.Getter._0_8_ = 0;
      local_20f0.Getter._8_8_ = 0;
      pFVar13 = STextBlock::FArguments::Text(pFVar13,&local_20f0);
      FLLMScope::FLLMScope
                (&local_227c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_21b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_21b0,&local_21b8,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_1fd0,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x67,&local_2295);
      FMemScope::~FMemScope(&local_21b0);
      FLLMScope::~FLLMScope(&local_227c);
      pTVar15 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_1fd0,&local_2090,pFVar13);
      pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
      local_21f0 = pTVar15->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar12->_Content).Widget.Object = (SWidget *)local_21f0;
      (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
      pTStack_21e8 = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FLLMScope::FLLMScope(local_2278,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_21a8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_21a0,&local_21a8,true);
      TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                (&local_1fe8,"SBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                 ,0x62,local_2294);
      FMemScope::~FMemScope(&local_21a0);
      FLLMScope::~FLLMScope(local_2278);
      pTVar16 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_1fe8,&local_20a0,pFVar12);
      __return_storage_ptr__->Object = (SWidget *)pTVar16->Object;
      pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1fe8._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2090.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1fd0._Widget.SharedReferenceCount.ReferenceController);
      if (local_2160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2160.TextData.Reference + 0x10))();
      }
      STextBlock::FArguments::~FArguments(&local_580);
      SBox::FArguments::~FArguments(&local_18c8);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar20 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  }
  if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

