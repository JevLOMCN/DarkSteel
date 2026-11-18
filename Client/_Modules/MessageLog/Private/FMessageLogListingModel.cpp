// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 21

// FMessageLogListingModel @ 142bc8300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMessageLogListingModel * __thiscall
FMessageLogListingModel::FMessageLogListingModel(FMessageLogListingModel *this,FName *param_1)

{
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  TDoubleLinkedListNode *pTVar3;
  code *pcVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  bool bVar7;
  FMessageLogListingModel *pFVar8;
  FText *pFVar9;
  TDoubleLinkedListNode *pTVar10;
  undefined1 auStackY_108 [32];
  undefined1 local_c4 [4];
  FText local_c0;
  ITextData *local_a8;
  uint local_a0;
  TSharedRef<FTokenizedMessage,1> *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this->_padding_ = (longlong)&___7FMessageLogListingModel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FText::FText(&this->PendingPageName);
  (this->Pages).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->Pages)._padding_ = (longlong)&___7__TDoubleLinkedList_UFPage_FMessageLogListingModel____6B_
  ;
  (this->Pages).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->Pages).ListSize = 0;
  this->LogName = *param_1;
  *(undefined8 *)&this->ChangedEvent = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x18 = 2;
  this->bIsPrintingToOutputLog = false;
  if (this->LogName == (FName)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Public\\Model\\MessageLogListingModel.h"
                       ,0x93,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMessageLogListingModel *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar9 = FText::FromName(&local_c0,&this->LogName);
  local_a8 = (pFVar9->TextData).Reference;
  if (local_a8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8 + 8))(local_a8);
  }
  local_a0 = pFVar9->Flags;
  local_98 = (TSharedRef<FTokenizedMessage,1> *)0x0;
  local_90 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  pTVar10 = ::operator_new(0x80);
  if (pTVar10 != (TDoubleLinkedListNode *)0x0) {
    (pTVar10->Value).Title.TextData.Reference = local_a8;
    if (local_a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8 + 8))(local_a8,local_c4);
    }
    pTVar6 = local_98;
    pTVar1 = &(pTVar10->Value).Messages;
    (pTVar10->Value).Title.Flags = local_a0;
    piVar2 = &(pTVar10->Value).Messages.ArrayMax;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = (int)local_90;
    (pTVar10->Value).Messages.ArrayNum = (int)local_90;
    if ((int)local_90 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_90,0,&pTVar1->AllocatorInstance,(int)local_90,piVar2);
      ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
                ((pTVar1->AllocatorInstance).Data,pTVar6,iVar5);
    }
    this_00 = &(pTVar10->Value).MessagesHashes;
    *(undefined8 *)&this_00->Elements = 0;
    *(undefined8 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x8 = 0;
    *(undefined8 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x20 = 0;
    *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x28 = 0;
    *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x34 = 0;
    (pTVar10->Value).MessagesHashes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pTVar10->Value).MessagesHashes.HashSize = 0;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
              (this_00,(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       local_88);
    pTVar10->NextNode = (TDoubleLinkedListNode *)0x0;
    pTVar10->PrevNode = (TDoubleLinkedListNode *)0x0;
    pTVar3 = (this->Pages).TailNode;
    if (pTVar3 == (TDoubleLinkedListNode *)0x0) {
      (this->Pages).HeadNode = pTVar10;
    }
    else {
      pTVar3->NextNode = pTVar10;
      pTVar10->PrevNode = (this->Pages).TailNode;
    }
    (this->Pages).TailNode = pTVar10;
    pcVar4 = *(code **)((this->Pages)._padding_ + 8);
    if (pcVar4 == TDoubleLinkedList<FMessageLogListingModel::FPage>::SetListSize) {
      (this->Pages).ListSize = (this->Pages).ListSize + 1;
    }
    else {
      (*pcVar4)(&this->Pages);
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>(local_98,(int)local_90);
  if (local_98 != (TSharedRef<FTokenizedMessage,1> *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8 + 0x10))();
  }
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  this->CachedPage = &((this->Pages).TailNode)->Value;
  this->CachedPageIndex = 0;
  return this;
}

// ~FMessageLogListingModel @ 142bcc6a0

void __thiscall FMessageLogListingModel::~FMessageLogListingModel(FMessageLogListingModel *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FMessageLogListingModel__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  (this->Pages)._padding_ = (longlong)&___7__TDoubleLinkedList_UFPage_FMessageLogListingModel____6B_
  ;
  TDoubleLinkedList<FMessageLogListingModel::FPage>::Empty(&this->Pages);
  pIVar4 = (this->PendingPageName).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddMessage @ 142bd5380

void __thiscall
FMessageLogListingModel::AddMessage
          (FMessageLogListingModel *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2,
          bool param_3)

{
  CreateNewPageIfRequired(this);
  AddMessageInternal(this,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000142bd53d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// AddMessageInternal @ 142bd5480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageLogListingModel::AddMessageInternal
          (FMessageLogListingModel *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  TDoubleLinkedListNode *pTVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  Type TVar7;
  Type TVar8;
  FText *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  char local_res8;
  uint local_48;
  uint local_44;
  FText local_40;
  FText local_30;
  
  if (this->bIsPrintingToOutputLog == false) {
    if (param_3) {
      if (((this->Pages).ListSize < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pages.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                             ,0xa9,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = (this->Pages).HeadNode;
      pFVar9 = FTokenizedMessage::ToText(param_1->Object,&local_40);
      pFVar10 = FText::ToString(pFVar9);
      iVar12 = (pFVar10->Data).ArrayNum;
      if (iVar12 == 0) {
        pwVar11 = L"";
        iVar12 = 0;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        iVar12 = iVar12 + -1;
      }
      local_48 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar11);
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                (&(pTVar2->Value).MessagesHashes,&local_44,(bool *)&local_48);
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
      if (local_res8 != '\0') {
        return;
      }
    }
    if (((this->Pages).ListSize < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pages.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                           ,0xa9,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = (this->Pages).HeadNode;
    pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(pTVar2->Value).Messages.AllocatorInstance.Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (pTVar2->Value).Messages.ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (pTVar2->Value).Messages.ArrayNum;
    piVar1 = &(pTVar2->Value).Messages.ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pTVar2->Value).Messages.AllocatorInstance,piVar1);
    }
    (pTVar2->Value).Messages.ArrayNum = iVar12 + 1;
    pFVar13 = (pTVar2->Value).Messages.AllocatorInstance.Data + (longlong)iVar12 * 0x10;
    *(FTokenizedMessage **)pFVar13 = param_1->Object;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar13 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_2) {
      bVar6 = this->bIsPrintingToOutputLog;
      this->bIsPrintingToOutputLog = true;
      TVar8 = FTokenizedMessage::GetSeverity(param_1->Object);
      pwVar11 = FMessageLog::GetLogColor(TVar8);
      if (pwVar11 != (wchar_t *)0x0) {
        UE::Logging::Private::BasicLog<64>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
      pFVar9 = FTokenizedMessage::ToText(param_1->Object,&local_30);
      FText::ToString(pFVar9);
      TVar8 = FTokenizedMessage::GetSeverity(param_1->Object);
      TVar7 = FMessageLog::GetLogVerbosity(TVar8);
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                     ,0x44,&this->LogName,TVar7,L"%s");
      if (local_30.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
      }
      UE::Logging::Private::BasicLog<64>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      this->bIsPrintingToOutputLog = bVar6;
    }
  }
  return;
}

// AddMessages @ 142bd5720

void __thiscall
FMessageLogListingModel::AddMessages
          (FMessageLogListingModel *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  CreateNewPageIfRequired(this);
  iVar5 = param_1->ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      AddMessageInternal(this,(TSharedRef<FTokenizedMessage,1> *)
                              ((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10),
                         param_2,param_3);
      iVar5 = param_1->ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000142bd57ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// AreMessagesEqual @ 142bd5980

bool __cdecl
FMessageLogListingModel::AreMessagesEqual
          (TSharedRef<FTokenizedMessage,1> *param_1,TSharedRef<FTokenizedMessage,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FText *this;
  FText *pFVar14;
  longlong lVar15;
  uint uVar16;
  
  pTVar12 = FTokenizedMessage::GetMessageTokens(param_1->Object);
  iVar10 = pTVar12->ArrayNum;
  pTVar12 = FTokenizedMessage::GetMessageTokens(param_2->Object);
  if (iVar10 != pTVar12->ArrayNum) {
    return false;
  }
  pTVar12 = FTokenizedMessage::GetMessageTokens(param_1->Object);
  pTVar13 = FTokenizedMessage::GetMessageTokens(param_2->Object);
  uVar16 = 0;
  while( true ) {
    if ((((int)uVar16 < 0) || (pTVar12->ArrayNum <= (int)uVar16)) ||
       (pTVar13->ArrayNum <= (int)uVar16)) {
      return true;
    }
    if (((int)uVar16 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar1 = (pTVar12->AllocatorInstance).Data;
    lVar15 = (longlong)(int)uVar16;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar15 * 0x10 + 8);
    plVar3 = *(longlong **)(pFVar1 + lVar15 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = 0;
    if ((int)uVar16 < pTVar13->ArrayNum) {
      uVar9 = ~uVar16 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar1 = (pTVar13->AllocatorInstance).Data;
    plVar4 = *(longlong **)(pFVar1 + lVar15 * 0x10);
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar15 * 0x10 + 8);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pcVar6 = *(code **)(*plVar4 + 8);
    iVar10 = (**(code **)(*plVar3 + 8))(plVar3);
    iVar11 = (*pcVar6)(plVar4);
    if (iVar10 != iVar11) break;
    this = (FText *)(**(code **)(*plVar3 + 0x10))(plVar3);
    pFVar14 = (FText *)(**(code **)(*plVar4 + 0x10))(plVar4);
    bVar7 = FText::EqualTo(this,pFVar14,Default);
    if (!bVar7) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar16 = uVar16 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return false;
}

// ClearMessages @ 142bd6e70

void __thiscall FMessageLogListingModel::ClearMessages(FMessageLogListingModel *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  TDoubleLinkedListNode *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  
  if (((this->Pages).ListSize < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pages.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xa9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar4 = (this->Pages).HeadNode;
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(pTVar4->Value).Messages.AllocatorInstance.Data,
             (pTVar4->Value).Messages.ArrayNum);
  piVar1 = &(pTVar4->Value).Messages.ArrayMax;
  (pTVar4->Value).Messages.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(pTVar4->Value).Messages.AllocatorInstance,0,piVar1);
  }
  if (((this->Pages).ListSize < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pages.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xa9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar4 = (this->Pages).HeadNode;
  this_00 = &(pTVar4->Value).MessagesHashes;
  bVar6 = 1 < (pTVar4->Value).MessagesHashes.HashSize;
  if (!bVar6) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar2 = &(pTVar4->Value).MessagesHashes.Elements.field_0xc;
  *(undefined4 *)&(pTVar4->Value).MessagesHashes.Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(pTVar4->Value).MessagesHashes.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pTVar4->Value).MessagesHashes.Elements.field_0x34 = 0;
  iVar3 = *(int *)&(pTVar4->Value).MessagesHashes.Elements.field_0x2c;
  *(undefined4 *)&(pTVar4->Value).MessagesHashes.Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(pTVar4->Value).MessagesHashes.Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pTVar4->Value).MessagesHashes.Elements.field_0x10,0);
  }
  if (bVar6) {
    (pTVar4->Value).MessagesHashes.HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000142bd6fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// CreateNewPageIfRequired @ 142bed280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMessageLogListingModel::CreateNewPageIfRequired(FMessageLogListingModel *this)

{
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  TDoubleLinkedListNode *pTVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  code *pcVar7;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  bool bVar9;
  TDoubleLinkedListNode *pTVar10;
  FText *pFVar11;
  undefined1 auStackY_f8 [32];
  undefined1 local_b4 [4];
  undefined1 local_b0 [8];
  ITextData *local_a8;
  uint local_a0;
  TSharedRef<FTokenizedMessage,1> *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar9 = FText::IsEmpty(&this->PendingPageName);
  if (!bVar9) {
    if ((this->Pages).ListSize < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pages.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xa9,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar3 = (this->Pages).ListSize;
    if ((((this->Pages).HeadNode)->Value).Messages.ArrayNum == 0) {
      if (iVar3 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pages.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                           ,0xa9,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FText::operator=((FText *)(this->Pages).HeadNode,&this->PendingPageName);
    }
    else {
      if ((int)this->MaxPages <= iVar3) {
        do {
          pTVar10 = (this->Pages).TailNode;
          if (pTVar10 != (TDoubleLinkedListNode *)0x0) {
            if ((this->Pages).ListSize == 1) {
              TDoubleLinkedList<FMessageLogListingModel::FPage>::Empty(&this->Pages);
            }
            else {
              pTVar4 = (this->Pages).HeadNode;
              if (pTVar10 == pTVar4) {
                pTVar4 = pTVar4->NextNode;
                (this->Pages).HeadNode = pTVar4;
                pTVar4->PrevNode = (TDoubleLinkedListNode *)0x0;
              }
              else {
                pTVar4 = pTVar10->PrevNode;
                (this->Pages).TailNode = pTVar4;
                pTVar4->NextNode = (TDoubleLinkedListNode *)0x0;
              }
              TDoubleLinkedList<FMessageLogListingModel::FPage>::TDoubleLinkedListNode::
              _scalar_deleting_destructor_(pTVar10,1);
              (**(code **)((this->Pages)._padding_ + 8))(&this->Pages);
            }
          }
        } while ((int)this->MaxPages <= (this->Pages).ListSize);
      }
      local_a8 = (this->PendingPageName).TextData.Reference;
      if (local_a8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8 + 8))();
      }
      local_a0 = (this->PendingPageName).Flags;
      local_98 = (TSharedRef<FTokenizedMessage,1> *)0x0;
      local_90 = 0;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      pTVar10 = ::operator_new(0x80);
      if (pTVar10 != (TDoubleLinkedListNode *)0x0) {
        (pTVar10->Value).Title.TextData.Reference = local_a8;
        if (local_a8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8 + 8))(local_a8,local_b4);
        }
        pTVar8 = local_98;
        pTVar1 = &(pTVar10->Value).Messages;
        (pTVar10->Value).Title.Flags = local_a0;
        piVar2 = &(pTVar10->Value).Messages.ArrayMax;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar3 = (int)local_90;
        (pTVar10->Value).Messages.ArrayNum = (int)local_90;
        if ((int)local_90 == 0) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_90,0,&pTVar1->AllocatorInstance,(int)local_90,piVar2);
          ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
                    ((pTVar1->AllocatorInstance).Data,pTVar8,iVar3);
        }
        this_00 = &(pTVar10->Value).MessagesHashes;
        *(undefined8 *)&this_00->Elements = 0;
        *(undefined8 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x8 = 0;
        *(undefined8 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x20 = 0;
        *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x28 = 0;
        *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x2c = 0x80;
        *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar10->Value).MessagesHashes.Elements.field_0x34 = 0;
        (pTVar10->Value).MessagesHashes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        (pTVar10->Value).MessagesHashes.HashSize = 0;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                  (this_00,(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                            *)local_88);
        pTVar10->NextNode = (TDoubleLinkedListNode *)0x0;
        pTVar10->PrevNode = (TDoubleLinkedListNode *)0x0;
        pTVar4 = (this->Pages).HeadNode;
        if (pTVar4 == (TDoubleLinkedListNode *)0x0) {
          (this->Pages).TailNode = pTVar10;
        }
        else {
          pTVar10->NextNode = pTVar4;
          ((this->Pages).HeadNode)->PrevNode = pTVar10;
        }
        (this->Pages).HeadNode = pTVar10;
        (**(code **)((this->Pages)._padding_ + 8))(&this->Pages);
      }
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      iVar3 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      DestructItems<TSharedRef<FTokenizedMessage,1>,int>(local_98,(int)local_90);
      if (local_98 != (TSharedRef<FTokenizedMessage,1> *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_a8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8 + 0x10))();
      }
      this->CachedPage = (FPage *)0x0;
    }
    pFVar11 = FText::GetEmpty();
    pIVar5 = (this->PendingPageName).TextData.Reference;
    pIVar6 = (pFVar11->TextData).Reference;
    if (pIVar5 != pIVar6) {
      (this->PendingPageName).TextData.Reference = pIVar6;
      if (pIVar6 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_b0);
      }
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      }
    }
    (this->PendingPageName).Flags = pFVar11->Flags;
  }
  return;
}

// CurrentPage @ 142bed640

FPage * __thiscall FMessageLogListingModel::CurrentPage(FMessageLogListingModel *this)

{
  code *pcVar1;
  bool bVar2;
  FPage *pFVar3;
  
  if (0 < (this->Pages).ListSize) {
    return &((this->Pages).HeadNode)->Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pages.Num() > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                     ,0xa9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPage *)(*pcVar1)();
    return pFVar3;
  }
  return &((this->Pages).HeadNode)->Value;
}

// GetAllMessagesAsString @ 142bfa9b0

FString * __thiscall
FMessageLogListingModel::GetAllMessagesAsString
          (FMessageLogListingModel *this,FString *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FPage *pFVar5;
  FString *pFVar6;
  FText *this_00;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  FText local_28;
  
  pFVar5 = PageAtIndex(this,param_1);
  uVar9 = 0;
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  uVar11 = uVar9;
  if (0 < (pFVar5->Messages).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar3 = 0;
      if ((int)uVar10 < (pFVar5->Messages).ArrayNum) {
        uVar3 = ~uVar10 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      this_00 = FTokenizedMessage::ToText
                          (*(FTokenizedMessage **)
                            ((pFVar5->Messages).AllocatorInstance.Data + uVar9),&local_28);
      pFVar7 = (FScriptContainerElement *)FText::ToString(this_00);
      if (((local_38.Data <= pFVar7) && (pFVar7 < local_38.Data + (longlong)local_30._4_4_ * 0x10))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      iVar4 = (int)local_30;
      if ((int)local_30 == local_30._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_38,(int *)((longlong)&local_30 + 4));
      }
      local_30 = CONCAT44(local_30._4_4_,iVar4 + 1);
      ::FString::FString((FString *)(local_38.Data + (longlong)iVar4 * 0x10),(FString *)pFVar7);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      uVar9 = uVar9 + 0x10;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < (pFVar5->Messages).ArrayNum);
  }
  iVar4 = (int)local_30;
  bVar2 = true;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7 = local_38.Data + (longlong)(int)local_30 * 0x10;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FVar8.Data = local_38.Data;
  while( true ) {
    if ((int)local_30 != iVar4) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar8.Data == pFVar7) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
    }
    iVar12 = *(int *)(FVar8.Data + 8) + -1;
    if (*(int *)(FVar8.Data + 8) == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar8.Data,iVar12);
    FVar8.Data = FVar8.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.Data,(int)local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// GetMessageAtIndex @ 142bfdad0

TSharedPtr<FTokenizedMessage,1> * __thiscall
FMessageLogListingModel::GetMessageAtIndex
          (FMessageLogListingModel *this,TSharedPtr<FTokenizedMessage,1> *__return_storage_ptr__,
          uint param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPage *pFVar5;
  TSharedPtr<FTokenizedMessage,1> *pTVar6;
  TSharedPtr<FTokenizedMessage,1> local_18;
  
  __return_storage_ptr__->Object = (FTokenizedMessage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar5 = PageAtIndex(this,param_1);
  if ((-1 < param_2) && (param_2 < (pFVar5->Messages).ArrayNum)) {
    uVar4 = 0;
    if (param_2 < (pFVar5->Messages).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar2)();
        return pTVar6;
      }
    }
    pFVar1 = (pFVar5->Messages).AllocatorInstance.Data;
    local_18.Object = *(FTokenizedMessage **)(pFVar1 + (longlong)param_2 * 0x10);
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_2 * 0x10 + 8);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_18) {
      __return_storage_ptr__->Object = local_18.Object;
      local_18.Object = (FTokenizedMessage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetMessageIterator @ 142bfdce0

TIndexedContainerIterator<TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_const_,TSharedRef<FTokenizedMessage,1>_const_,int>
* __thiscall
FMessageLogListingModel::GetMessageIterator
          (FMessageLogListingModel *this,
          TIndexedContainerIterator<TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_const_,TSharedRef<FTokenizedMessage,1>_const_,int>
          *__return_storage_ptr__,uint param_1)

{
  FPage *pFVar1;
  
  pFVar1 = PageAtIndex(this,param_1);
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &pFVar1->Messages;
  return __return_storage_ptr__;
}

// GetPageTitle @ 142bff720

FText * __thiscall FMessageLogListingModel::GetPageTitle(FMessageLogListingModel *this,uint param_1)

{
  TDoubleLinkedListNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FPage *pFVar5;
  uint uVar6;
  
  if (((uint)(this->Pages).ListSize <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PageIndex < (uint32)Pages.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xaf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar2)();
    return pFVar4;
  }
  pFVar5 = this->CachedPage;
  if ((pFVar5 == (FPage *)0x0) || (this->CachedPageIndex != param_1)) {
    uVar6 = 0;
    for (pTVar1 = (this->Pages).HeadNode; pTVar1 != (TDoubleLinkedListNode *)0x0;
        pTVar1 = pTVar1->NextNode) {
      if (uVar6 == param_1) {
        this->CachedPage = &pTVar1->Value;
        this->CachedPageIndex = uVar6;
        return (FText *)pTVar1;
      }
      uVar6 = uVar6 + 1;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                       ,0xc3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    pFVar5 = (FPage *)0x0;
  }
  return &pFVar5->Title;
}

// NewPage @ 142c09f50

void __thiscall
FMessageLogListingModel::NewPage(FMessageLogListingModel *this,FText *param_1,uint param_2)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res18 [8];
  
  pIVar2 = (param_1->TextData).Reference;
  pIVar3 = (this->PendingPageName).TextData.Reference;
  if (pIVar3 != pIVar2) {
    (this->PendingPageName).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (this->PendingPageName).Flags = param_1->Flags;
  iVar1 = (this->Pages).ListSize;
  this->MaxPages = param_2;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pages.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                       ,0xa9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (0 < (((this->Pages).HeadNode)->Value).Messages.ArrayNum) {
    CreateNewPageIfRequired(this);
  }
  return;
}

// Notify @ 142c0a0e0

void __thiscall FMessageLogListingModel::Notify(FMessageLogListingModel *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->ChangedEvent);
  return;
}

// NumMessages @ 142c0bdf0

uint __thiscall FMessageLogListingModel::NumMessages(FMessageLogListingModel *this,uint param_1)

{
  FPage *pFVar1;
  
  pFVar1 = PageAtIndex(this,param_1);
  return (pFVar1->Messages).ArrayNum;
}

// NumPages @ 142c0bf90

uint __thiscall FMessageLogListingModel::NumPages(FMessageLogListingModel *this)

{
  return (this->Pages).ListSize;
}

// PageAtIndex @ 142c189f0

FPage * __thiscall FMessageLogListingModel::PageAtIndex(FMessageLogListingModel *this,uint param_1)

{
  TDoubleLinkedListNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  FPage *pFVar4;
  uint uVar5;
  
  if (((uint)(this->Pages).ListSize <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PageIndex < (uint32)Pages.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xaf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPage *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = this->CachedPage;
  if ((pFVar4 == (FPage *)0x0) || (this->CachedPageIndex != param_1)) {
    uVar5 = 0;
    for (pTVar1 = (this->Pages).HeadNode; pTVar1 != (TDoubleLinkedListNode *)0x0;
        pTVar1 = pTVar1->NextNode) {
      if (uVar5 == param_1) {
        this->CachedPage = &pTVar1->Value;
        this->CachedPageIndex = uVar5;
        return &pTVar1->Value;
      }
      uVar5 = uVar5 + 1;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                       ,0xc3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPage *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4 = (FPage *)0x0;
  }
  return pFVar4;
}

// RemoveDuplicates @ 142c22830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageLogListingModel::RemoveDuplicates(FMessageLogListingModel *this,uint param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTokenizedMessage *this_00;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FPage *pFVar8;
  ulonglong uVar9;
  FText *pFVar10;
  FString *pFVar11;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  uint local_108;
  undefined4 local_104;
  undefined1 local_100 [16];
  int local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FText local_c0;
  FText local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar8 = PageAtIndex(this,param_1);
  if (pFVar8 == (FPage *)0x0) {
    return;
  }
  uVar7 = (pFVar8->Messages).ArrayNum;
  if ((int)uVar7 < 1) {
    return;
  }
  pFVar16 = (pFVar8->Messages).AllocatorInstance.Data;
  uVar20 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar7);
  uVar17 = 1;
  if (3 < uVar7) {
    uVar21 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_104 = (undefined4)lVar3;
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar17 <= (int)local_50)) goto LAB_142c22a90;
  local_50 = uVar17;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar17 != 0) {
    uVar19 = uVar17;
    if (uVar17 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_142c22947;
      }
    }
    else {
LAB_142c22947:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar19,4);
    }
    if (0 < (int)uVar17) {
      uVar21 = (ulonglong)uVar17;
      do {
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar9 = uVar20 & (longlong)(int)uVar17 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar14.Data + uVar9 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if ((local_50 != 0) &&
     (TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_e8,
                 (TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98), local_e0.CurrentBitIndex < (local_e0.Array)->NumBits)) {
    do {
      iVar5 = local_e0.CurrentBitIndex;
      lVar3 = *local_e8 + (longlong)local_e0.CurrentBitIndex * 0x18;
      pFVar10 = FTokenizedMessage::ToText
                          (*(FTokenizedMessage **)
                            (*local_e8 + (longlong)local_e0.CurrentBitIndex * 0x18),&local_c0);
      pFVar11 = FText::ToString(pFVar10);
      iVar1 = (pFVar11->Data).ArrayNum;
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar15 = L"";
        iVar13 = 0;
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar15);
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      uVar17 = local_50 - 1 & uVar17;
      *(uint *)(lVar3 + 0x14) = uVar17;
      FVar14.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_58.Data;
      }
      uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(FVar14.Data + uVar20 * 4);
      *(int *)(FVar14.Data + uVar20 * 4) = iVar5;
      local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
    } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
  }
LAB_142c22a90:
  pTVar22 = &pFVar8->Messages;
  uVar20 = 0;
  pFVar18 = pFVar16 + (longlong)(int)uVar7 * 0x10;
  for (; pFVar16 != pFVar18; pFVar16 = pFVar16 + 0x10) {
    TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>::
    Emplace<TSharedRef<FTokenizedMessage,1>_const_&>
              ((TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>
                *)local_98,(TSharedRef<FTokenizedMessage,1> *)local_100,(bool *)pFVar16);
  }
  pTVar12 = TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>::
            Array((TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>
                   *)local_98,
                  (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)
                  (local_100 + 8));
  if (pTVar22 != pTVar12) {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>
              ((TSharedRef<FTokenizedMessage,1> *)(pTVar22->AllocatorInstance).Data,
               (pFVar8->Messages).ArrayNum);
    pFVar16 = (pTVar22->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar22->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar8->Messages).ArrayNum = pTVar12->ArrayNum;
    (pFVar8->Messages).ArrayMax = pTVar12->ArrayMax;
    pTVar12->ArrayNum = 0;
    pTVar12->ArrayMax = 0;
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)local_100._8_8_,local_f0);
  if ((TReferenceControllerBase<1> *)local_100._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free((void *)local_100._8_8_);
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Empty
            (&pFVar8->MessagesHashes,(pFVar8->Messages).ArrayNum);
  uVar21 = uVar20;
  if (0 < (pFVar8->Messages).ArrayNum) {
    do {
      iVar13 = (pFVar8->Messages).ArrayNum;
      uVar17 = (uint)uVar20;
      uVar7 = 0;
      if ((int)uVar17 < iVar13) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_118 = (longlong)(int)uVar17;
        local_110 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar16 = (pTVar22->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar16 + uVar21 + 8);
      this_00 = *(FTokenizedMessage **)(pFVar16 + uVar21);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FTokenizedMessage *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = FTokenizedMessage::ToText(this_00,&local_b0);
      pFVar11 = FText::ToString(pFVar10);
      iVar1 = (pFVar11->Data).ArrayNum;
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar15 = L"";
        iVar13 = 0;
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      local_108 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar15);
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                (&pFVar8->MessagesHashes,(uint *)(local_100 + 4),(bool *)&local_108);
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar20 = (ulonglong)(uVar17 + 1);
      uVar21 = uVar21 + 0x10;
    } while ((int)(uVar17 + 1) < (pFVar8->Messages).ArrayNum);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// SetCurrentPage @ 142c27280

bool __thiscall
FMessageLogListingModel::SetCurrentPage(FMessageLogListingModel *this,FText *param_1,uint param_2)

{
  TDoubleLinkedListNode *this_00;
  TDoubleLinkedListNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (((this->Pages).ListSize < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pages.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xa9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = FText::CompareTo((FText *)(this->Pages).HeadNode,param_1,Default);
  if (iVar5 == 0) {
    return false;
  }
  this_00 = (this->Pages).HeadNode;
  while( true ) {
    if (this_00 == (TDoubleLinkedListNode *)0x0) {
      NewPage(this,param_1,param_2);
      return true;
    }
    iVar5 = FText::CompareTo((FText *)this_00,param_1,Default);
    if (iVar5 == 0) break;
    this_00 = this_00->NextNode;
  }
  if (this_00 != (TDoubleLinkedListNode *)0x0) {
    if ((this->Pages).ListSize == 1) {
      this_00->PrevNode = (TDoubleLinkedListNode *)0x0;
      iVar5 = 0;
      this_00->NextNode = (TDoubleLinkedListNode *)0x0;
      (this->Pages).TailNode = (TDoubleLinkedListNode *)0x0;
      (this->Pages).HeadNode = (TDoubleLinkedListNode *)0x0;
    }
    else {
      pTVar1 = (this->Pages).HeadNode;
      if (this_00 == pTVar1) {
        pTVar1 = pTVar1->NextNode;
        (this->Pages).HeadNode = pTVar1;
        pTVar1->PrevNode = (TDoubleLinkedListNode *)0x0;
      }
      else {
        pTVar1 = (this->Pages).TailNode;
        if (this_00 == pTVar1) {
          pTVar1 = pTVar1->PrevNode;
          (this->Pages).TailNode = pTVar1;
          pTVar1->NextNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          this_00->NextNode->PrevNode = this_00->PrevNode;
          this_00->PrevNode->NextNode = this_00->NextNode;
        }
      }
      this_00->PrevNode = (TDoubleLinkedListNode *)0x0;
      this_00->NextNode = (TDoubleLinkedListNode *)0x0;
      iVar5 = (this->Pages).ListSize + -1;
    }
    (**(code **)((this->Pages)._padding_ + 8))(&this->Pages,iVar5);
    pTVar1 = (this->Pages).HeadNode;
    if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
      (this->Pages).TailNode = this_00;
    }
    else {
      this_00->NextNode = pTVar1;
      ((this->Pages).HeadNode)->PrevNode = this_00;
    }
    (this->Pages).HeadNode = this_00;
    (**(code **)((this->Pages)._padding_ + 8))(&this->Pages,(this->Pages).ListSize + 1);
  }
  this->CachedPage = (FPage *)0x0;
  return true;
}

// SetCurrentPage @ 142c27410

bool __thiscall FMessageLogListingModel::SetCurrentPage(FMessageLogListingModel *this,uint param_1)

{
  bool bVar1;
  FPage *pFVar2;
  
  if ((param_1 != 0) && (param_1 < (uint)(this->Pages).ListSize)) {
    pFVar2 = PageAtIndex(this,param_1);
    bVar1 = SetCurrentPage(this,&pFVar2->Title,this->MaxPages);
    return bVar1;
  }
  return false;
}

