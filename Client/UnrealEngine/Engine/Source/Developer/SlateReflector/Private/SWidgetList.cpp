// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 10

// ~SWidgetList @ 142e151d0

void __thiscall SWidgetList::~SWidgetList(SWidgetList *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAccessSource);
  pvVar1 = *(void **)&(this->OnAccessSource).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAccessSource);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAccessAsset);
  pvVar1 = *(void **)&(this->OnAccessAsset).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAccessAsset);
  DestructItems<TSharedPtr<FWidgetListEntry,1>,int>
            ((TSharedPtr<FWidgetListEntry,1> *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142e1cd30

bool __thiscall
`SWidgetList::Sort'::__l8::<lambda_1>::operator()
          (void *this,TSharedPtr<FWidgetListEntry,1> *param_1,
          TSharedPtr<FWidgetListEntry,1> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (*(char *)(*(longlong *)this + 0x308) == '\0') {
    if (param_1->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar1 = param_1->Object->Count;
    if (param_2->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return param_2->Object->Count < uVar1;
  }
  if (param_1->Object == (FWidgetListEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = param_1->Object->Count;
  if (param_2->Object == (FWidgetListEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return uVar1 < param_2->Object->Count;
}

// operator() @ 142e1d4e0

bool __thiscall
`SWidgetList::Sort'::__l12::<lambda_2>::operator()
          (void *this,TSharedPtr<FWidgetListEntry,1> *param_1,
          TSharedPtr<FWidgetListEntry,1> *param_2)

{
  FWidgetListEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (*(char *)(*(longlong *)this + 0x308) == '\0') {
    if (param_2->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = param_2->Object;
    if (param_1->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = ::FName::Compare(&pFVar1->Type,&param_1->Object->Type);
    return SUB41((uint)iVar5 >> 0x1f,0);
  }
  if (param_1->Object == (FWidgetListEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = param_1->Object;
  if (param_2->Object == (FWidgetListEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = ::FName::Compare(&pFVar1->Type,&param_2->Object->Type);
  return SUB41((uint)iVar5 >> 0x1f,0);
}

// operator() @ 142e1d7a0

bool __thiscall
`SWidgetList::Sort'::__l16::<lambda_3>::operator()
          (void *this,TSharedPtr<FWidgetListEntry,1> *param_1,
          TSharedPtr<FWidgetListEntry,1> *param_2)

{
  FWidgetListEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FWidgetListEntry *pFVar6;
  
  if (*(char *)(*(longlong *)this + 0x308) == '\0') {
    if (param_2->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = param_2->Object;
    if (param_1->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar6 = param_1->Object;
  }
  else {
    if (param_1->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = param_1->Object;
    if (param_2->Object == (FWidgetListEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar6 = param_2->Object;
  }
  iVar5 = ::FName::Compare(&pFVar1->Location,&pFVar6->Location);
  return SUB41((uint)iVar5 >> 0x1f,0);
}

// Construct @ 142e48e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SWidgetList::Construct(SWidgetList *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  STextBlock *pSVar5;
  undefined4 uVar6;
  EStyleColor EVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  FArguments *pFVar10;
  FArguments *pFVar11;
  FText *pFVar12;
  TSharedRef<STextBlock,1> *pTVar13;
  TSharedRef<SBox,1> *pTVar14;
  longlong *this_00;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FDestructionSentinel local_9c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_9b0;
  undefined1 local_998 [8];
  ForAnyElementType FStack_990;
  ulonglong local_988;
  FText local_980;
  bool local_970;
  undefined1 local_968 [8];
  ForAnyElementType FStack_960;
  ulonglong local_958;
  FLinearColor_u_0 local_950;
  ESlateColorStylingMode local_940;
  EStyleColor EStack_93f;
  undefined2 uStack_93e;
  undefined1 local_93c;
  undefined1 local_938 [8];
  ForAnyElementType FStack_930;
  ulonglong local_928;
  TSharedRef<SBox,1> local_920;
  TSharedRef<STextBlock,1> local_910;
  FText local_900;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_8f0;
  FArguments local_8d8;
  FArguments local_598;
  
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnAccessAsset,&param_1->_OnAccessAsset);
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnAccessSource,&param_1->_OnAccessSource);
  pFVar10 = SBox::FArguments::FArguments(&local_8d8);
  pTVar1 = _UNK_15076c1d8;
  pSVar5 = ___xmm_41200000412000004120000041200000;
  local_9b0._RequiredArgs._0_1_ = 1;
  local_9b0._Widget.Object = ___xmm_41200000412000004120000041200000;
  local_9b0._Widget.SharedReferenceCount.ReferenceController = _UNK_15076c1d8;
  local_988 = 0;
  local_998 = (undefined1  [8])0x0;
  FStack_990.Data = (FScriptContainerElement *)0x0;
  (pFVar10->_Padding).bIsSet = true;
  *(STextBlock **)&(pFVar10->_Padding).Value = pSVar5;
  *(TReferenceControllerBase<1> **)&(pFVar10->_Padding).Value.Right = pTVar1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_998);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_998,
             (FWriteAccessScope *)&local_9c8);
  if (((int)local_988 != 0) && (FStack_990.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_990.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_990,0,0,0x10);
    local_988 = local_988 & 0xffffffff00000000;
  }
  if (local_9c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9c8.Accessor,&local_9c8);
  }
  if (FStack_990.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_990.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_998);
  pFVar10->_HAlign = HAlign_Center;
  pFVar10->_VAlign = VAlign_Center;
  pFVar11 = STextBlock::FArguments::FArguments(&local_598);
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_900,L"WidgetList",L"WidgetListNotDefined",
                       L"Widget list requires UE_WITH_SLATE_DEBUG_WIDGETLIST to be defined.");
  FText::FText(&local_980,pFVar12);
  local_970 = true;
  local_958 = 0;
  local_968 = (undefined1  [8])0x0;
  FStack_960.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar11->_Text).Value,&local_980);
  (pFVar11->_Text).bIsSet = local_970;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_968);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_968,
             (FWriteAccessScope *)&local_9c8);
  if (((int)local_958 != 0) && (FStack_960.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_960.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_960,0,0,0x10);
    local_958 = local_958 & 0xffffffff00000000;
  }
  if (local_9c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9c8.Accessor,&local_9c8);
  }
  if (FStack_960.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_960.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_968);
  if (local_980.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_980.TextData.Reference + 0x10))();
  }
  uVar6 = FStyleColors::Error._16_4_;
  local_940 = FStyleColors::Error.ColorUseRule;
  EStack_93f = FStyleColors::Error.ColorTableId;
  uStack_93e = FStyleColors::Error._18_2_;
  local_93c = 1;
  local_928 = 0;
  local_950 = FStyleColors::Error.SpecifiedColor.field0_0x0;
  local_938 = (undefined1  [8])0x0;
  FStack_930.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Error.SpecifiedColor.field0_0x0;
  uVar9 = FStyleColors::Error._16_4_;
  FStyleColors::Error.ColorUseRule = (ESlateColorStylingMode)uVar6;
  FStyleColors::Error.ColorTableId = SUB41(uVar6,1);
  EVar7 = FStyleColors::Error.ColorTableId;
  FStyleColors::Error._18_2_ = SUB42(uVar6,2);
  uVar8 = FStyleColors::Error._18_2_;
  (pFVar11->_ColorAndOpacity).Value.ColorUseRule = FStyleColors::Error.ColorUseRule;
  FStyleColors::Error._16_4_ = uVar9;
  (pFVar11->_ColorAndOpacity).Value.ColorTableId = EVar7;
  *(undefined2 *)&(pFVar11->_ColorAndOpacity).Value.field_0x12 = uVar8;
  (pFVar11->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_938);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_938,
             (FWriteAccessScope *)&local_9c8);
  if (((int)local_928 != 0) && (FStack_930.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_930.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_930,0,0,0x10);
    local_928 = local_928 & 0xffffffff00000000;
  }
  if (local_9c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9c8.Accessor,&local_9c8);
  }
  if (FStack_930.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_930.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_938);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_9c8,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_9b0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
             ,0xd0,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_9c8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar13 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9b0,&local_910,pFVar11);
  pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
  local_9c8._0_8_ = pTVar13->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_Content).Widget.Object = (SWidget *)local_9c8._0_8_;
  (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  local_9c8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_9c8,&local_res20,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_8f0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
             ,0xcb,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_9c8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar14 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8f0,&local_920,pFVar10);
  this_00 = &this->_padding_;
  pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar14->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar2;
  local_9c8._0_8_ = pSVar3;
  local_9c8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_920.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_910.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b0._Widget.SharedReferenceCount.ReferenceController);
  if (local_900.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_900.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  SBox::FArguments::~FArguments(&local_8d8);
  return;
}

// ExportToCSV @ 142e809b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SWidgetList::ExportToCSV(SWidgetList *this,FReply *__return_storage_ptr__)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  FSlateApplication *this_01;
  void *pvVar9;
  FString *pFVar10;
  FText *this_02;
  FString *pFVar11;
  FReply *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FName local_res18 [2];
  FString local_d8;
  FString *local_c8;
  undefined8 local_c0;
  FString local_b8;
  TSharedPtr<SWidget,1> local_a8;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  FText local_48;
  TStringView<wchar_t> local_38;
  
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  FModuleManager::Get();
  pFVar6 = ::FName::FName(local_res18,"DesktopPlatform");
  FVar2 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  if (plVar8 == (longlong *)0x0) {
    pFVar10 = FPaths::ProjectSavedDir();
    local_50 = 0xe;
    local_68.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    iVar1 = (pFVar10->Data).ArrayNum;
    local_68.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_68.Size = 0;
    }
    local_58 = L"WidgetList.csv";
    FPaths::CombineInternal(&local_b8,&local_68,2);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_d8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_d8.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_d8.Data.ArrayNum = local_b8.Data.ArrayNum;
LAB_142e80c20:
    local_78 = local_d8.Data.AllocatorInstance.Data;
    iStack_70 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iStack_70 = 0;
    }
    local_38._12_4_ = uStack_6c;
    local_38.Size = iStack_70;
    local_38.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
    FSlateDebugging::ExportWidgetList(&local_38);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar13.Data = local_d8.Data.AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::ExploreFolder((wchar_t *)FVar13.Data);
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    this_01 = FSlateApplication::Get();
    local_a8.Object = (SWidget *)0x0;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pvVar9 = FSlateApplication::FindBestParentWindowHandleForDialogs(this_01,&local_a8,ActiveWindow)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    local_c8 = (FString *)0x0;
    local_c0 = 0;
    pcVar3 = *(code **)(*plVar8 + 0x18);
    ::FString::FString(&local_88,L"CSV|*.csv");
    ::FString::FString(&local_98,L"WidgetList.csv");
    pFVar10 = FPaths::ProjectSavedDir();
    this_02 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"WidgetList",L"ExportToCSVTitle",L"Export...");
    pFVar11 = FText::ToString(this_02);
    cVar4 = (*pcVar3)(plVar8,pvVar9,pFVar11,pFVar10,&local_98,&local_88,0,&local_c8);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (cVar4 != '\0') {
      if ((int)local_c0 != 0) {
        if ((int)local_c0 < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar12 = (FReply *)(*pcVar3)();
            return pFVar12;
          }
        }
        iVar1 = (local_c8->Data).ArrayNum;
        iVar14 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange(&local_d8,(wchar_t *)(local_c8->Data).AllocatorInstance.Data,iVar14);
        DestructItems<FString,int>(local_c8,(int)local_c0);
        if (local_c8 != (FString *)0x0) {
          FMemory::Free(local_c8);
        }
        local_b8.Data.ArrayNum = local_d8.Data.ArrayNum;
        goto LAB_142e80c20;
      }
    }
    FReply::FReply(__return_storage_ptr__,true);
    DestructItems<FString,int>(local_c8,(int)local_c0);
    if (local_c8 != (FString *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnGenerateRow @ 142ecbdd0

TSharedRef<ITableRow,1> * __thiscall
SWidgetList::OnGenerateRow
          (SWidgetList *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FWidgetListEntry,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  TSharedRef<SWidgetListRow,1> *pTVar3;
  undefined1 local_2c8 [8];
  ForAnyElementType local_2c0;
  int local_2b8;
  undefined1 local_2b0 [8];
  ForAnyElementType local_2a8;
  int local_2a0;
  FDestructionSentinel local_298;
  T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&> local_280;
  TSharedRef<SWidgetListRow,1> local_270;
  TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
  local_260;
  undefined1 local_248 [504];
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  
  pFVar2 = SWidgetListRow::FArguments::FArguments((FArguments *)local_248);
  local_2c8 = (undefined1  [8])0x0;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = 0;
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy> *)
             local_2c8,&this->OnAccessSource);
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnAccessSource,
             (TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy> *)
             local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_298);
  if ((local_2b8 != 0) && (local_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c0,0,0,0x10);
    local_2b8 = 0;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (local_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  local_2b0 = (undefined1  [8])0x0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_2b0,
             &this->OnAccessAsset);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnAccessAsset,
             (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_2b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
             (FWriteAccessScope *)&local_298);
  if ((local_2a0 != 0) && (local_2a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_2a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2a8,0,0,0x10);
    local_2a0 = 0;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b0);
  local_280.Arg0 = param_1;
  local_280.Arg1 = param_2;
  this_00 = MakeTDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_260,"SWidgetListRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetList.cpp"
                       ,0x166,&local_280);
  pTVar3 = TSlateDecl<SWidgetListRow,RequiredArgs::T2RequiredArgs<TSharedPtr<FWidgetListEntry,1>_&,TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(this_00,&local_270,pFVar2);
  __return_storage_ptr__->Object = (ITableRow *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnSort @ 142edec00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetList::OnSort(SWidgetList *this,Type param_1,FName *param_2,Type param_3)

{
  if ((param_1 == None) && (param_3 != None)) {
    this->bSortAscending = param_3 == Ascending;
    this->SortColumn = *param_2;
    Sort(this);
    return;
  }
  return;
}

// Refresh @ 142ef54f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SWidgetList::Refresh(SWidgetList *this)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  SWidget *this_00;
  undefined8 uVar5;
  TSharedPtr<FWidgetListEntry,1> *pTVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FWidgetListEntry,1> *pTVar9;
  FReflectionMetaData *pFVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FName FVar16;
  FName FVar17;
  TReferenceControllerBase<1> *pTVar18;
  UObject *pUVar19;
  FAssetData *pFVar20;
  byte bVar21;
  ForElementType<FSetElementId> FVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  longlong lVar25;
  TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *pTVar26;
  TReferenceControllerBase<1> *pTVar27;
  int iVar28;
  uint *puVar29;
  TReferenceControllerBase<1> *pTVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  undefined1 auStackY_268 [32];
  undefined1 local_218;
  undefined1 local_217 [7];
  ForAnyElementType local_210;
  int local_208;
  int local_204;
  TPairInitializer<TTuple<FName,FName>_const_&,TSharedPtr<FWidgetListEntry,1>_&&> local_200;
  longlong local_1f0;
  longlong local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  TReferenceControllerBase<1> *pTStack_1d8;
  TSharedPtr<FReflectionMetaData,1> local_1d0;
  int local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  FScriptContainerElement *local_1b0;
  longlong *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  longlong *local_148;
  TReferenceControllerBase<1> **local_140;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  FAssetData local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_200.Value = (TSharedPtr<FWidgetListEntry,1> *)this;
  pTVar15 = FSlateDebugging::GetAllWidgets();
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208 = pTVar15->ArrayNum;
  lVar25 = (longlong)local_208;
  pFVar4 = (pTVar15->AllocatorInstance).Data;
  if (local_208 == 0) {
    local_204 = 0;
    iVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_208,0,&local_210,local_208,&local_204);
    memcpy(local_210.Data,pFVar4,lVar25 << 3);
    iVar28 = local_208;
  }
  pTVar8 = _UNK_150651568;
  pTVar30 = ___xmm_00000000000000000000000000000010;
  uVar14 = 1;
  this->PreviousCount = this->CurrentCount;
  this->CurrentCount = iVar28;
  local_f8._0_8_ = 0;
  local_1b0 = local_210.Data + (longlong)iVar28 * 8;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  FVar32.Data = local_210.Data;
  iVar24 = iVar28;
  while( true ) {
    pFVar4 = local_1b0;
    pTVar27 = (TReferenceControllerBase<1> *)0x0;
    if (iVar24 != iVar28) {
      local_218 = 0;
      `TCheckedPointerIterator<SWidget_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_218);
    }
    pTVar9 = local_200.Value;
    uVar12 = 0;
    if (FVar32.Data == pFVar4) break;
    this_00 = *(SWidget **)FVar32.Data;
    FVar16 = SWidget::GetType(this_00);
    FVar17 = SWidget::GetCreatedInLocation(this_00);
    local_1f0 = *(longlong *)FVar16;
    local_1e8 = *(longlong *)FVar17;
    local_1b8 = local_1f0;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)local_1f0);
    lVar25 = local_1e8;
    uVar12 = local_1b8._4_4_ + uVar12;
    uVar13 = ::GetTypeHash((FNameEntryId)(uint)local_1e8);
    if (local_f8._8_4_ != local_c4) {
      FVar22 = (ForElementType<FSetElementId>)local_c0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FVar22 = local_b8;
      }
      iVar24 = *(int *)((longlong)FVar22 +
                       (ulonglong)
                       (local_b0 - 1U &
                       (uVar12 * 0x40 + (int)((ulonglong)lVar25 >> 0x20) + (uVar12 >> 2) +
                        uVar13 + 0x9e3779b9 ^ uVar12)) * 4);
      while (iVar24 != -1) {
        lVar25 = local_f8._0_8_ + (longlong)iVar24 * 0x28;
        if ((*(longlong *)(local_f8._0_8_ + (longlong)iVar24 * 0x28) == local_1f0) &&
           (*(longlong *)(lVar25 + 8) == local_1e8)) {
          if (iVar24 != -1) {
            pTVar18 = (TReferenceControllerBase<1> *)(lVar25 + 0x10);
            if (lVar25 == 0) {
              pTVar18 = pTVar27;
            }
            if (pTVar18 != (TReferenceControllerBase<1> *)0x0) goto LAB_142ef59ed;
          }
          break;
        }
        iVar24 = *(int *)(lVar25 + 0x20);
      }
    }
    pTVar18 = ::operator_new(0x90);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      local_1e0 = pTVar30;
      pTStack_1d8 = pTVar8;
    }
    else {
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFWidgetListEntry___00_SharedPointerInternals__6B_;
      pTVar18[7]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar18[5]._padding_ + 4) = 0;
      pTVar18[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[6]._padding_ = 0;
      pTVar18[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[1]._padding_ = 0;
      pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[2]._padding_ = 0;
      pTVar18[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[3]._padding_ = 0;
      pTVar18[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[4]._padding_ = 0;
      pTVar18[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[4].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar18[5]._padding_ = 0xffffffff;
      *(undefined4 *)&pTVar18[8]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar18[8]._padding_ + 4) = 2;
      pTVar18[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[8].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar18 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      pTVar27 = pTVar18;
      local_1e0 = pTVar18 + 1;
      pTStack_1d8 = pTVar18;
    }
    local_148 = &local_1f0;
    local_140 = &local_1e0;
    TSet<TTuple<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TTuple<FName,FName>_const_&,TSharedPtr<FWidgetListEntry,1>_&&>_>
              ((TSet<TTuple<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>,0>,FDefaultSetAllocator>
                *)local_f8,&local_200,(bool *)&local_148);
    pTVar18 = (TReferenceControllerBase<1> *)
              (local_f8._0_8_ + ((longlong)(int)local_200.Key * 5 + 2) * 8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
    FVar16 = SWidget::GetType(this_00);
    uVar5 = *(undefined8 *)FVar16;
    if ((pTVar18->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined8 *)pTVar18->_padding_ = uVar5;
    FVar16 = SWidget::GetCreatedInLocation(this_00);
    uVar5 = *(undefined8 *)FVar16;
    if ((pTVar18->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined8 *)(pTVar18->_padding_ + 8) = uVar5;
    if ((pTVar18->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined8 *)(pTVar18->_padding_ + 0x78) = 0;
    SWidget::GetMetaData<FReflectionMetaData>(this_00,&local_1d0);
    pFVar10 = local_1d0.Object;
    if (local_1d0.Object != (FReflectionMetaData *)0x0) {
      if ((local_1d0.Object == (FReflectionMetaData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar19 = FWeakObjectPtr::Get(&(pFVar10->Asset).WeakPtr);
      if (pUVar19 != (UObject *)0x0) {
        if ((pFVar10 == (FReflectionMetaData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar19 = FWeakObjectPtr::Get(&(pFVar10->Asset).WeakPtr);
        pFVar20 = FAssetData::FAssetData(&local_a8,pUVar19,None);
        if ((pTVar18->_padding_ == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FAssetData::operator=((FAssetData *)(pTVar18->_padding_ + 0x10),pFVar20);
        if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d0.SharedReferenceCount.ReferenceController);
LAB_142ef59ed:
    if ((pTVar18->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar1 = (longlong *)(pTVar18->_padding_ + 0x78);
    *plVar1 = *plVar1 + 1;
    FVar32.Data = FVar32.Data + 8;
    iVar24 = local_208;
  }
  pTVar26 = (TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
            ((longlong)local_200.Value + 0x2b8);
  pTVar6 = (TSharedPtr<FWidgetListEntry,1> *)(pTVar26->AllocatorInstance).Data;
  piVar2 = &((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
            ((longlong)local_200.Value + 0x2b8))->ArrayMax;
  iVar28 = ((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
           ((longlong)local_200.Value + 0x2b8))->ArrayNum;
  if (((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
      ((longlong)local_200.Value + 0x2b8))->ArrayMax < 0) {
    DestructItems<TSharedPtr<FWidgetListEntry,1>,int>(pTVar6,iVar28);
    iVar28 = *piVar2;
    ((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
    ((longlong)pTVar9 + 0x2b8))->ArrayNum = 0;
    if (iVar28 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar26,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedPtr<FWidgetListEntry,1>,int>(pTVar6,iVar28);
    ((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
    ((longlong)pTVar9 + 0x2b8))->ArrayNum = 0;
  }
  uVar13 = local_d0;
  local_188 = 0;
  uStack_18c = local_188;
  if (local_d0 != 0) {
    puVar29 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar29 = local_d8;
    }
    uVar31 = *puVar29;
    pTVar30 = pTVar27;
    while( true ) {
      uVar12 = (uint)pTVar27;
      local_188 = (uint)pTVar30;
      if (uVar31 != 0) break;
      lVar25 = (longlong)(int)uVar12;
      local_188 = local_188 + 0x20;
      pTVar30 = (TReferenceControllerBase<1> *)(ulonglong)local_188;
      uVar12 = uVar12 + 1;
      pTVar27 = (TReferenceControllerBase<1> *)(ulonglong)uVar12;
      uStack_18c = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_142ef5b01;
      uVar31 = puVar29[lVar25 + 1];
    }
    uVar14 = -uVar31 & uVar31;
    uVar3 = (ulonglong)uVar14 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_1c0 = (int)lVar25;
    uStack_18c = (local_188 - 1) + local_1c0;
    if ((int)local_d0 < (int)uStack_18c) {
      uStack_18c = local_d0;
    }
  }
LAB_142ef5b01:
  local_1a8 = (longlong *)local_f8;
  uStack_184 = local_fc;
  local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  iStack_180 = local_f8._8_4_ - local_c4;
  uVar31 = local_d0 & 0xffffffe0;
  uStack_190 = 0xffffffff;
  TStack_170.CurrentBitIndex = uStack_18c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uVar14,uVar12);
  iVar28 = (int)local_d0 >> 5;
  TStack_170._28_4_ = local_fc;
  TStack_170.BaseBitIndex = local_188;
  uStack_150 = CONCAT44(uStack_17c,iStack_180);
  bVar21 = (byte)local_d0;
  uStack_1a0 = uVar12;
  uStack_19c = uVar14;
  local_178 = local_1a8;
  TStack_170.Array = local_198;
  if (((int)local_d0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar13 != local_d0) {
    puVar29 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar29 = local_d8;
    }
    uVar14 = -1 << (bVar21 & 0x1f) & puVar29[iVar28];
    while (uVar14 == 0) {
      lVar25 = (longlong)iVar28;
      uVar31 = uVar31 + 0x20;
      iVar28 = iVar28 + 1;
      uVar13 = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_142ef5c11;
      uVar14 = puVar29[lVar25 + 1];
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_1bc = (int)lVar25;
    uVar13 = (uVar31 - 1) + local_1bc;
    if ((int)local_d0 < (int)uVar13) {
      uVar13 = local_d0;
    }
  }
LAB_142ef5c11:
  while( true ) {
    plVar1 = local_178;
    if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
      local_217[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_217);
    }
    if (((TStack_170.CurrentBitIndex == uVar13) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
       (plVar1 == (longlong *)local_f8)) break;
    pFVar4 = (FScriptContainerElement *)
             (*plVar1 + ((longlong)TStack_170.CurrentBitIndex * 5 + 2) * 8);
    pFVar23 = (pTVar26->AllocatorInstance).Data;
    if (((pFVar23 <= pFVar4) && (pFVar4 < pFVar23 + (longlong)*piVar2 * 0x10)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar28 = ((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
             ((longlong)pTVar9 + 0x2b8))->ArrayNum;
    if (iVar28 == *piVar2) {
      iVar28 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pTVar26,piVar2);
    }
    ((TArray<TSharedPtr<FWidgetListEntry,1>,TSizedDefaultAllocator<32>_> *)
    ((longlong)pTVar9 + 0x2b8))->ArrayNum = iVar28 + 1;
    pFVar23 = (pTVar26->AllocatorInstance).Data + (longlong)iVar28 * 0x10;
    *(undefined8 *)pFVar23 = *(undefined8 *)pFVar4;
    lVar25 = *(longlong *)(pFVar4 + 8);
    *(longlong *)(pFVar23 + 8) = lVar25;
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  Sort((SWidgetList *)local_200.Value);
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedPtr<FWidgetListEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
  return;
}

// Sort @ 142f07b70

void __thiscall SWidgetList::Sort(SWidgetList *this)

{
  SListView<TSharedPtr<FWidgetListEntry,1>_> *pSVar1;
  FName FVar2;
  FIdentityFunctor FVar3;
  SWidgetList *pSVar4;
  uint uVar5;
  FName FVar6;
  SWidgetList *local_res8 [4];
  
  pSVar4 = local_res8[0];
  FVar6 = this->SortColumn;
  uVar5 = FVar6.Number;
  local_res8[0]._0_1_ = SUB81(this,0);
  local_res8[0] = this;
  if (FVar6 == (FName)0x0) {
    FVar2.Number = SWidgetListRow::NAME_Count.Number;
    FVar2.ComparisonIndex.Value = SWidgetListRow::NAME_Count.ComparisonIndex.Value;
    this->SortColumn = FVar2;
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = SWidgetListRow::NAME_Count.ComparisonIndex.Value;
    uVar5 = SWidgetListRow::NAME_Count.Number;
LAB_142f07bb1:
    if (uVar5 == SWidgetListRow::NAME_Count.Number) {
      FVar3 = local_res8[0]._0_1_;
      AlgoImpl::
      IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l8::<lambda_1>_>_>
                ((TSharedPtr<FWidgetListEntry,1> *)(this->Entries).AllocatorInstance.Data,
                 (this->Entries).ArrayNum,FVar3,(<lambda_1> *)local_res8);
      pSVar4 = local_res8[0];
      goto LAB_142f07c43;
    }
  }
  else if (FVar6.ComparisonIndex.Value.Value == SWidgetListRow::NAME_Count.ComparisonIndex.Value)
  goto LAB_142f07bb1;
  if ((FVar6.ComparisonIndex.Value.Value == SWidgetListRow::NAME_Type.ComparisonIndex.Value) &&
     (uVar5 == SWidgetListRow::NAME_Type.Number)) {
    FVar3 = local_res8[0]._0_1_;
    AlgoImpl::
    IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l12::<lambda_2>_>_>
              ((TSharedPtr<FWidgetListEntry,1> *)(this->Entries).AllocatorInstance.Data,
               (this->Entries).ArrayNum,FVar3,(<lambda_2> *)local_res8);
    pSVar4 = local_res8[0];
  }
  else if ((FVar6.ComparisonIndex.Value.Value == SWidgetListRow::NAME_Location.ComparisonIndex.Value
           ) && (uVar5 == SWidgetListRow::NAME_Location.Number)) {
    FVar3 = local_res8[0]._0_1_;
    AlgoImpl::
    IntroSortInternal<TSharedPtr<FWidgetListEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FWidgetListEntry,1>,_SWidgetList::Sort_::__l16::<lambda_3>_>_>
              ((TSharedPtr<FWidgetListEntry,1> *)(this->Entries).AllocatorInstance.Data,
               (this->Entries).ArrayNum,FVar3,(<lambda_3> *)local_res8);
    pSVar4 = local_res8[0];
  }
LAB_142f07c43:
  local_res8[0] = pSVar4;
  pSVar1 = (this->ListView).Object;
  if (pSVar1 != (SListView<TSharedPtr<FWidgetListEntry,1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142f07c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar1->_padding_ + 0x248))();
    return;
  }
  return;
}

