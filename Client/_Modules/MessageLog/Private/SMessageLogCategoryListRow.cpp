// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 3

// GenerateWidgetForColumn @ 142bf92a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SMessageLogCategoryListRow::GenerateWidgetForColumn
          (SMessageLogCategoryListRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FName *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  FName FVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget_const_,1> *pTVar12;
  ulong64 uVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  TSharedRef<SBox,1> *pTVar15;
  TStatId *pTVar16;
  TStatId *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined4 local_res20;
  undefined4 uStackX_24;
  FLLMScope local_988 [2];
  FName local_980;
  TReferenceControllerBase<1> *pTStack_978;
  T0RequiredArgs local_970 [8];
  FName local_968;
  FDestructionSentinel local_960;
  FDestructionSentinel local_948;
  undefined1 *local_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined1 local_918;
  undefined1 local_910 [8];
  ForAnyElementType FStack_908;
  ulonglong local_900;
  TSharedRef<STextBlock,1> local_8f8;
  TSharedRef<SBox,1> local_8e8;
  FArguments local_8d8;
  FArguments local_598;
  
  pTVar17 = (TStatId *)0x0;
  local_res20 = 0;
  bVar8 = ::FName::Equals(*param_1,L"Name");
  if (bVar8) {
    FVar9 = (FName)SBox::FArguments::FArguments(&local_8d8);
    uVar6 = _UNK_1509253f8;
    local_918 = 1;
    local_900 = 0;
    local_928 = ___xmm_40800000408000004080000040800000;
    uStack_920 = _UNK_1509253f8;
    local_910 = (undefined1  [8])0x0;
    FStack_908.Data = (FScriptContainerElement *)0x0;
    uVar5 = _UNK_1509253f4;
    (((TAttribute<FMargin> *)((longlong)FVar9 + 0x200))->Value).Left =
         (float)___xmm_40800000408000004080000040800000;
    (((TAttribute<FMargin> *)((longlong)FVar9 + 0x200))->Value).Top = (float)uVar5;
    *(undefined8 *)((longlong)FVar9 + 0x208) = uVar6;
    *(bool *)((longlong)FVar9 + 0x210) = true;
    local_968 = FVar9;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar9 + 0x218),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_910);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_910,
               (FWriteAccessScope *)&local_960);
    if (((int)local_900 != 0) && (FStack_908.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_908.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_908,0,0,0x10);
      local_900 = local_900 & 0xffffffff00000000;
    }
    if (local_960.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_960.Accessor,&local_960);
    }
    if (FStack_908.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_908.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_910);
    *(EVerticalAlignment *)((longlong)FVar9 + 0x1fc) = VAlign_Center;
    pFVar10 = STextBlock::FArguments::FArguments(&local_598);
    (pFVar10->_ColorAndOpacity).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar10->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_948);
    local_930 = &(pFVar10->_ColorAndOpacity).Getter.field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_930);
    if (puVar11 == (undefined8 *)0x0) {
      pTVar18 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_24,local_res20);
    }
    else {
      local_980 = (FName)HandleTextColorAndOpacity;
      pTStack_978 = (TReferenceControllerBase<1> *)
                    ((ulonglong)local_8f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget_const_,1> *)&local_960);
      pTVar16 = &pTVar12->Object[-1].StatID;
      if (pTVar12->Object == (SWidget *)0x0) {
        pTVar16 = pTVar17;
      }
      pTVar18 = (pTVar12->SharedReferenceCount).ReferenceController;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar13;
      *puVar11 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = pTVar16;
      puVar11[4] = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar17 = (TStatId *)0x7;
      *(FName *)(puVar11 + 5) = local_980;
      puVar11[6] = pTStack_978;
    }
    if (((ulonglong)pTVar17 & 4) != 0) {
      pTVar17 = (TStatId *)(ulonglong)((uint)pTVar17 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (((ulonglong)pTVar17 & 2) != 0) {
      pTVar17 = (TStatId *)(ulonglong)((uint)pTVar17 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (((ulonglong)pTVar17 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_960.Accessor);
    }
    bVar4 = false;
    bVar3 = false;
    bVar8 = false;
    if (local_948.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_948.Accessor,&local_948);
    }
    (pFVar10->_Text).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Text).Getter,
               (FWriteAccessScope *)&local_948);
    local_930 = &(pFVar10->_Text).Getter.field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_930);
    if (puVar11 == (undefined8 *)0x0) {
      pTVar18 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_24,local_res20);
    }
    else {
      local_980 = (FName)HandleNameColumnText;
      pTStack_978 = (TReferenceControllerBase<1> *)
                    ((ulonglong)local_8f8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget_const_,1> *)&local_960);
      pTVar17 = &pTVar12->Object[-1].StatID;
      if (pTVar12->Object == (SWidget *)0x0) {
        pTVar17 = (TStatId *)0x0;
      }
      pTVar18 = (pTVar12->SharedReferenceCount).ReferenceController;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = true;
      bVar8 = true;
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar13;
      *puVar11 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogCategoryListRow___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = pTVar17;
      puVar11[4] = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(FName *)(puVar11 + 5) = local_980;
      puVar11[6] = pTStack_978;
      FVar9 = local_968;
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_960.Accessor);
    }
    if (local_948.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_948.Accessor,&local_948);
    }
    FLLMScope::FLLMScope(local_988,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_968 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_980,&local_968,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_948,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogCategoryListRow.h"
               ,0x3f,(T0RequiredArgs *)&local_res20);
    FMemScope::~FMemScope((FMemScope *)&local_980);
    FLLMScope::~FLLMScope(local_988);
    pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_948,
                         &local_8f8,pFVar10);
    pTVar18 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_980 = (FName)pTVar14->Object;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = ((FSharedReferencer<1> *)((longlong)FVar9 + 0x238))->ReferenceController;
    *(FName *)((longlong)FVar9 + 0x230) = local_980;
    ((FSharedReferencer<1> *)((longlong)FVar9 + 0x238))->ReferenceController = pTVar18;
    pTStack_978 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FLLMScope::FLLMScope(local_988,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_980 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_968,&local_980,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_960,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogCategoryListRow.h"
               ,0x3b,local_970);
    FMemScope::~FMemScope((FMemScope *)&local_968);
    FLLMScope::~FLLMScope(local_988);
    pTVar15 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_960,&local_8e8,
                         (FArguments *)FVar9);
    __return_storage_ptr__->Object = (SWidget *)pTVar15->Object;
    pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_960.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_8f8.SharedReferenceCount.ReferenceController._4_4_,
                        local_8f8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_948.Accessor);
    STextBlock::FArguments::~FArguments(&local_598);
    SBox::FArguments::~FArguments(&local_8d8);
  }
  else {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar7 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// HandleNameColumnText @ 142c02b00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SMessageLogCategoryListRow::HandleNameColumnText
          (SMessageLogCategoryListRow *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FText local_b8;
  FTextFormat local_a8;
  TSharedPtr<FCulture,1> local_98;
  FFormatArgumentValue local_88;
  undefined4 local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  if ((this->LogListing).Object == (IMessageLogListing *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar5 = (**(code **)((longlong)*(this->LogListing).Object + 0x60))();
  if (*(int *)(lVar5 + 8) == 0) {
    if ((this->LogListing).Object == (IMessageLogListing *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar2)();
        return pFVar4;
      }
    }
    plVar6 = (longlong *)(**(code **)((longlong)*(this->LogListing).Object + 0xa8))();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (ITextData *)*plVar6;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = *(uint *)(plVar6 + 1);
    return __return_storage_ptr__;
  }
  local_98.Object = (FCulture *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_38,*(int *)(lVar5 + 8),(FNumberFormattingOptions *)0x0,&local_98);
  if ((this->LogListing).Object == (IMessageLogListing *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar6 = (longlong *)(**(code **)((longlong)*(this->LogListing).Object + 0xa8))();
  local_b8.TextData.Reference = (ITextData *)*plVar6;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res18);
  }
  local_b8.Flags = *(uint *)(plVar6 + 1);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"SMessageLogCategoryListRow",L"ColumnNameCountFormat",L"{0} ({1})")
  ;
  pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,&local_b8);
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_68 = 4;
  FText::FText(&local_58,pFVar4);
  if (local_58.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_c8.AllocatorInstance.Data,&local_88,2);
  local_a8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
  local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_a8,&local_c8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  pIVar1 = (pFVar4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HandleTextColorAndOpacity @ 142c02fb0

FSlateColor * __thiscall
SMessageLogCategoryListRow::HandleTextColorAndOpacity
          (SMessageLogCategoryListRow *this,FSlateColor *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

