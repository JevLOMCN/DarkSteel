// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 3

// ~SWidgetListRow @ 142e15280

void __thiscall SWidgetListRow::~SWidgetListRow(SWidgetListRow *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAccessAsset);
  pvVar1 = *(void **)&(this->OnAccessAsset).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAccessAsset);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAccessSource);
  pvVar1 = *(void **)&(this->OnAccessSource).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAccessSource);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Entry).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<FWidgetListEntry,1>_>::~STableRow<TSharedPtr<FWidgetListEntry,1>_>
            ((STableRow<TSharedPtr<FWidgetListEntry,1>_> *)this);
  return;
}

// GenerateWidgetForColumn @ 142e94dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWidgetListRow::GenerateWidgetForColumn
          (SWidgetListRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  FSharedReferencer<1> FVar8;
  undefined8 uVar9;
  bool bVar10;
  FArguments *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  FText *pFVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  FString *pFVar15;
  FArguments *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  TSharedRef<SHyperlink,1> *pTVar20;
  TSharedRef<SBox,1> *pTVar21;
  FWidgetListEntry *pFVar22;
  TStatId *pTVar23;
  TStatId *pTVar24;
  FArguments *local_res18;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1408;
  T0RequiredArgs local_1407 [3];
  FLLMScope local_1404;
  FLLMScope local_1400;
  FLLMScope local_13fc;
  FLLMScope local_13f8 [2];
  FText local_13f0;
  bool local_13e0;
  undefined1 local_13d8 [8];
  ForAnyElementType FStack_13d0;
  ulonglong local_13c8;
  FText local_13c0;
  bool local_13b0;
  undefined1 local_13a8 [8];
  ForAnyElementType FStack_13a0;
  ulonglong local_1398;
  FMemScope local_1390;
  undefined4 uStack_1388;
  undefined4 uStack_1384;
  undefined8 local_1380;
  undefined8 uStack_1378;
  undefined1 local_1370;
  undefined1 local_1368 [8];
  ForAnyElementType FStack_1360;
  ulonglong local_1358;
  SHyperlink *local_1350;
  TReferenceControllerBase<1> *pTStack_1348;
  FName local_1340;
  FMemScope local_1338;
  FName local_1330;
  FMemScope local_1328;
  FName local_1320;
  FMemScope local_1318;
  FName local_1310;
  FString local_1308;
  TSharedPtr<FCulture,1> local_12f8;
  FText local_12e8;
  FDestructionSentinel local_12d8;
  FDestructionSentinel local_12c0;
  FDestructionSentinel local_12a8;
  FDestructionSentinel local_1290;
  undefined1 *local_1278;
  TAttribute<FText> local_1270;
  TSharedRef<STextBlock,1> local_1240;
  TSharedRef<SBox,1> local_1230;
  TSharedRef<SHyperlink,1> local_1220;
  FText local_1210;
  TSharedRef<STextBlock,1> local_1200;
  TSharedRef<SWidget,1> local_11f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_11e0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_11c8;
  FString local_11b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_11a0;
  FString local_1188;
  FText local_1178;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_1168;
  FArguments local_1150;
  FArguments local_e30;
  FArguments local_af0;
  FArguments local_598;
  
  pTVar23 = (TStatId *)0x0;
  local_res18 = (FArguments *)((ulonglong)local_res18 & 0xffffffff00000000);
  FVar3 = *param_1;
  if (FVar3 == NAME_Type) {
    pFVar11 = STextBlock::FArguments::FArguments(&local_af0);
    if (((this->Entry).Object == (FWidgetListEntry *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar12;
    }
    pFVar13 = FText::FromName(&local_1178,&((this->Entry).Object)->Type);
    FText::FText(&local_13c0,pFVar13);
    local_13b0 = true;
    local_1398 = 0;
    local_13a8 = (undefined1  [8])0x0;
    FStack_13a0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar11->_Text).Value,&local_13c0);
    (pFVar11->_Text).bIsSet = local_13b0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13a8,
               (FWriteAccessScope *)&local_12d8);
    if (((int)local_1398 != 0) && (FStack_13a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_13a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13a0,0,0,0x10);
      local_1398 = local_1398 & 0xffffffff00000000;
    }
    if (local_12d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d8.Accessor,&local_12d8);
    }
    if (FStack_13a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_13a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_13a8);
    if (local_13c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_13c0.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(&local_1404,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1340 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1338,&local_1340,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_11e0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
               ,0x36,(T0RequiredArgs *)&local_res18);
    FMemScope::~FMemScope(&local_1338);
    FLLMScope::~FLLMScope(&local_1404);
    pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_11e0,&local_1240,pFVar11);
    __return_storage_ptr__->Object = (SWidget *)pTVar14->Object;
    pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11e0._Widget.SharedReferenceCount.ReferenceController);
    if (local_1178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1178.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_af0);
  }
  else if (FVar3 == NAME_Location) {
    if (((this->Entry).Object == (FWidgetListEntry *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar12;
    }
    if (((this->Entry).Object == (FWidgetListEntry *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar12;
    }
    pFVar15 = ::FName::GetPlainNameString(&((this->Entry).Object)->Location,&local_11b0);
    FPaths::GetCleanFilename(&local_1188,pFVar15);
    ::FString::PrintfImpl(&local_1308,L"%s(%d)");
    if (local_1188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.Data.AllocatorInstance.Data);
    }
    if (local_11b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11b0.Data.AllocatorInstance.Data);
    }
    pFVar16 = SBox::FArguments::FArguments(&local_e30);
    uStack_1378 = _UNK_150925078;
    local_1380 = ___xmm_00000000400000000000000040000000;
    pFVar16->_HAlign = HAlign_Left;
    pFVar16->_VAlign = VAlign_Center;
    uVar9 = ___xmm_00000000400000000000000040000000;
    local_1370 = 1;
    local_1358 = 0;
    local_1368 = (undefined1  [8])0x0;
    FStack_1360.Data = (FScriptContainerElement *)0x0;
    ___xmm_00000000400000000000000040000000 = (undefined4)local_1380;
    _UNK_150925074 = SUB84(local_1380,4);
    uVar7 = _UNK_150925074;
    (pFVar16->_Padding).Value.Left = (float)___xmm_00000000400000000000000040000000;
    ___xmm_00000000400000000000000040000000 = uVar9;
    uVar9 = _UNK_150925078;
    (pFVar16->_Padding).Value.Top = (float)uVar7;
    _UNK_150925078 = (undefined4)uStack_1378;
    _UNK_15092507c = SUB84(uStack_1378,4);
    uVar7 = _UNK_15092507c;
    (pFVar16->_Padding).Value.Right = (float)_UNK_150925078;
    _UNK_150925078 = uVar9;
    (pFVar16->_Padding).Value.Bottom = (float)uVar7;
    (pFVar16->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1368);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1368,
               (FWriteAccessScope *)&local_12c0);
    if (((int)local_1358 != 0) && (FStack_1360.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1360.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1360,0,0,0x10);
      local_1358 = local_1358 & 0xffffffff00000000;
    }
    if (local_12c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12c0.Accessor,&local_12c0);
    }
    if (FStack_1360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1360.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1368);
    pFVar17 = SHyperlink::FArguments::FArguments(&local_1150);
    local_res18 = pFVar17;
    pFVar13 = FText::FromString(&local_1210,&local_1308);
    FText::FText(&local_13f0,pFVar13);
    local_13e0 = true;
    local_13c8 = 0;
    local_13d8 = (undefined1  [8])0x0;
    FStack_13d0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar17->_Text).Value,&local_13f0);
    (pFVar17->_Text).bIsSet = local_13e0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13d8,
               (FWriteAccessScope *)&local_12a8);
    if (((int)local_13c8 != 0) && (FStack_13d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_13d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13d0,0,0,0x10);
      local_13c8 = local_13c8 & 0xffffffff00000000;
    }
    if (local_12a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12a8.Accessor,&local_12a8);
    }
    if (FStack_13d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_13d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_13d8);
    if (local_13f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_13f0.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnNavigate,
               (FWriteAccessScope *)&local_1290);
    local_1278 = &(pFVar17->_OnNavigate).field_0x8;
    puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1278);
    pFVar17 = local_res18;
    if (puVar18 != (undefined8 *)0x0) {
      uStack_1384 = local_12e8._12_4_;
      local_1390 = (FMemScope)OnNavigateToSource;
      uStack_1388 = 0;
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11f0);
      pFVar17 = (FArguments *)(pTVar12->SharedReferenceCount).ReferenceController;
      pTVar24 = &pTVar12->Object[-1].StatID;
      if (pTVar12->Object == (SWidget *)0x0) {
        pTVar24 = pTVar23;
      }
      if (pFVar17 != (FArguments *)0x0) {
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
      }
      *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar19 = FDelegateHandle::GenerateNewID();
      puVar18[2] = uVar19;
      *puVar18 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetListRow___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar18[3] = pTVar24;
      puVar18[4] = pFVar17;
      if (pFVar17 != (FArguments *)0x0) {
        LOCK();
        puVar1 = (undefined1 *)((longlong)&pFVar17->_padding_ + 4);
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      pTVar23 = (TStatId *)0x7;
      *(FMemScope *)(puVar18 + 5) = local_1390;
      puVar18[6] = CONCAT44(uStack_1384,uStack_1388);
    }
    if (((ulonglong)pTVar23 & 4) != 0) {
      pTVar23 = (TStatId *)(ulonglong)((uint)pTVar23 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar17);
    }
    if (((ulonglong)pTVar23 & 2) != 0) {
      pTVar23 = (TStatId *)(ulonglong)((uint)pTVar23 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar17);
    }
    if (((ulonglong)pTVar23 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_11f0.SharedReferenceCount.ReferenceController);
    }
    if (local_1290.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1290.Accessor,&local_1290);
    }
    FLLMScope::FLLMScope(&local_1400,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1330 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1328,&local_1330,true);
    TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
              (&local_1168,"SHyperlink",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
               ,0x41,local_res20);
    FMemScope::~FMemScope(&local_1328);
    FLLMScope::~FLLMScope(&local_1400);
    pTVar20 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1168,&local_1220,local_res18);
    pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
    local_1350 = pTVar20->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar16->_Content).Widget.Object = (SWidget *)local_1350;
    (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
    pTStack_1348 = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    FLLMScope::FLLMScope(&local_13fc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1320 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1318,&local_1320,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_11c8,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
               ,0x3c,&local_1408);
    FMemScope::~FMemScope(&local_1318);
    FLLMScope::~FLLMScope(&local_13fc);
    pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_11c8,&local_1230,pFVar16);
    __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
    pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1230.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1220.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1168._Widget.SharedReferenceCount.ReferenceController);
    if (local_1210.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1210.TextData.Reference + 0x10))();
    }
    SHyperlink::FArguments::~FArguments(&local_1150);
    SBox::FArguments::~FArguments(&local_e30);
    if (local_1308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1308.Data.AllocatorInstance.Data);
    }
  }
  else if (FVar3 == NAME_Count) {
    pFVar11 = STextBlock::FArguments::FArguments(&local_598);
    local_12f8.Object = (FCulture *)0x0;
    local_12f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar22 = TSharedPtr<FWidgetListEntry,1>::operator->(&this->Entry);
    pFVar13 = FText::AsNumber(&local_12e8,pFVar22->Count,(FNumberFormattingOptions *)0x0,&local_12f8
                             );
    FText::FText(&local_1270.Value,pFVar13);
    local_1270.bIsSet = true;
    local_1270.Getter._16_8_ = 0;
    local_1270.Getter._0_8_ = 0;
    local_1270.Getter._8_8_ = 0;
    pFVar11 = STextBlock::FArguments::Text(pFVar11,&local_1270);
    FLLMScope::FLLMScope(local_13f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1310 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1390,&local_1310,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_11a0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
               ,0x48,local_1407);
    FMemScope::~FMemScope(&local_1390);
    FLLMScope::~FLLMScope(local_13f8);
    pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_11a0,&local_1200,pFVar11);
    __return_storage_ptr__->Object = (SWidget *)pTVar14->Object;
    pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1200.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11a0._Widget.SharedReferenceCount.ReferenceController);
    if (local_12e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_12e8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12f8.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_598);
  }
  else {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar8 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(FVar8.ReferenceController)->SharedReferenceCount;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// OnNavigateToSource @ 142ed9cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SWidgetListRow::OnNavigateToSource(SWidgetListRow *this)

{
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_00;
  uint uVar1;
  longlong *plVar2;
  FWidgetListEntry *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  UObject *pUVar7;
  FString *pFVar8;
  FReadAccessScope *this_01;
  longlong *plVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_c8;
  FString local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this_00 = &this->OnAccessAsset;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
  plVar9 = (longlong *)0x0;
  if (((*(int *)&(this->OnAccessAsset).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnAccessAsset).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar2 + 0x38))(), cVar5 == '\0')) {
    this_01 = &local_68;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (((this->Entry).Object == (FWidgetListEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Entry).Object;
    if (((pFVar3->AssetData).PackageName == (FName)0x0) ||
       ((pFVar3->AssetData).AssetName == (FName)0x0)) goto LAB_142ed9e70;
    if ((pFVar3 == (FWidgetListEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FAssetData::GetPackage(&((this->Entry).Object)->AssetData);
    if (((this->Entry).Object == (FWidgetListEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_c8.Hash.InlineData[0] = '\0';
    local_c8.Hash.InlineData[1] = '\0';
    local_c8.Hash.InlineData[2] = '\0';
    local_c8.Hash.InlineData[3] = '\0';
    local_c8.Hash._padding_ = 0;
    local_c8.Elements._16_8_ = 0;
    local_c8.Elements._24_8_ = 0;
    local_c8.HashSize = 0;
    local_c8._76_4_ = 0;
    local_c8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_c8.Elements._48_8_ = _UNK_150631d98;
    local_c8.Elements._0_8_ = 0;
    local_c8.Elements._8_8_ = 0;
    local_c8.Elements._32_8_ = 0;
    local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pUVar7 = FAssetData::GetAsset(&((this->Entry).Object)->AssetData,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
    if (*(int *)&(this->OnAccessAsset).field_0x10 == 0) {
      (**(code **)(_DAT_00000000 + 0x60))(0,pUVar7);
      this_01 = &local_38;
    }
    else {
      plVar2 = *(longlong **)&(this->OnAccessAsset).field_0x8;
      (**(code **)(*plVar2 + 0x60))(plVar2,pUVar7);
      this_01 = &local_38;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_01);
LAB_142ed9e70:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
  if (((*(int *)&(this->OnAccessAsset).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnAccessAsset).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar2 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  if (((this->Entry).Object == (FWidgetListEntry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Entry).Object;
  uVar1 = (pFVar3->Location).Number;
  if ((pFVar3 == (FWidgetListEntry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = ::FName::GetPlainNameString(&((this->Entry).Object)->Location,&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAccessSource,
             &local_20);
  if (*(int *)&(this->OnAccessSource).field_0x10 != 0) {
    plVar9 = *(longlong **)&(this->OnAccessSource).field_0x8;
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,pFVar8,uVar1,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_78.Data.AllocatorInstance.Data);
  return;
}

