// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 38

// `dynamic_initializer_for_'LogNullReplay'' @ 1410ad040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNullReplay__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNullReplay,L"LogNullReplay",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNullReplay__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNullNetworkReplayStreaming'' @ 1410ad080

void __cdecl _dynamic_initializer_for__ModuleRegistrantNullNetworkReplayStreaming__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NullNetworkReplayStreaming";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NullNetworkReplayStreaming",0x1a);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FNullNetworkReplayStreamingFactory>::InitializeModule
            );
  return;
}

// `scalar_deleting_destructor' @ 146c85b50

void * __thiscall
INetworkReplayStreamingFactory::_scalar_deleting_destructor_
          (INetworkReplayStreamingFactory *this,uint param_1)

{
  *this = (INetworkReplayStreamingFactory)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c85c90

void * __thiscall
FNullNetworkReplayStreamingFactory::_scalar_deleting_destructor_
          (FNullNetworkReplayStreamingFactory *this,uint param_1)

{
  *this = (FNullNetworkReplayStreamingFactory)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DefaultConstructItems<FReplayEventListItem,int> @ 146c85cd0

void __cdecl DefaultConstructItems<FReplayEventListItem,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FReplayEventListItem__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetworkReplayStreamInfo,int> @ 146c85d10

void __cdecl
DestructItems<FNetworkReplayStreamInfo,int>(FNetworkReplayStreamInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->FriendlyName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRequestEventDataResult,int> @ 146c85d60

void __cdecl
DestructItems<FRequestEventDataResult,int>(FRequestEventDataResult *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ReplayEventListItem).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNullCheckpointListItem,int> @ 146c85db0

void __cdecl
DestructItems<FNullCheckpointListItem,int>(FNullCheckpointListItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Group;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FJsonSerializable::~FJsonSerializable((FJsonSerializable *)((longlong)(pFVar2 + -1) + 8));
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FReplayEventListItem,int> @ 146c85e10

void __cdecl DestructItems<FReplayEventListItem,int>(FReplayEventListItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Group;
    do {
      *(undefined ***)((longlong)(pFVar2 + -2) + 8) = &___7FReplayEventListItem__6B_;
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FJsonSerializable::~FJsonSerializable((FJsonSerializable *)((longlong)(pFVar2 + -2) + 8));
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 146c85f44

/* [thunk]:public: virtual void * __ptr64 __cdecl FNullNetworkReplayStreamer::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FNullNetworkReplayStreamer::_vector_deleting_destructor__adjustor_16__
          (FNullNetworkReplayStreamer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FNullNetworkReplayStreamer *)&this[-1].ReplayInfo.DemoFileLastOffset,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c85f60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullNetworkReplayStreamer,SharedPointerInternals::DefaultDeleter<FNullNetworkReplayStreamer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNullNetworkReplayStreamer,SharedPointerInternals::DefaultDeleter<FNullNetworkReplayStreamer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c85fa0

void * __thiscall
FDeleteFinishedStreamResult::_scalar_deleting_destructor_
          (FDeleteFinishedStreamResult *this,uint param_1)

{
  *(undefined ***)this = &___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c85fe0

void * __thiscall
FDownloadHeaderResult::_scalar_deleting_destructor_(FDownloadHeaderResult *this,uint param_1)

{
  *(undefined ***)this = &___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86020

void * __thiscall
FEnumerateEventsResult::_scalar_deleting_destructor_(FEnumerateEventsResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->ReplayEventList)._padding_ = (longlong)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)(this->ReplayEventList).ReplayEvents.AllocatorInstance.Data,
             (this->ReplayEventList).ReplayEvents.ArrayNum);
  pFVar1 = (this->ReplayEventList).ReplayEvents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&this->ReplayEventList);
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c860a0

void * __thiscall
FEnumerateStreamsResult::_scalar_deleting_destructor_(FEnumerateStreamsResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->CorruptedStreams).AllocatorInstance.Data,
             (this->CorruptedStreams).ArrayNum);
  pFVar1 = (this->CorruptedStreams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNetworkReplayStreamInfo,int>
            ((FNetworkReplayStreamInfo *)(this->FoundStreams).AllocatorInstance.Data,
             (this->FoundStreams).ArrayNum);
  pFVar1 = (this->FoundStreams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86120

void * __thiscall FGotoResult::_scalar_deleting_destructor_(FGotoResult *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86160

void * __thiscall
FKeepReplayResult::_scalar_deleting_destructor_(FKeepReplayResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewReplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c861b0

void * __thiscall
FNullCheckpointListItem::_scalar_deleting_destructor_(FNullCheckpointListItem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Metadata).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Group).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86210

void * __thiscall
FNullNetworkReplayStreamer::_scalar_deleting_destructor_
          (FNullNetworkReplayStreamer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FArchive *pFVar2;
  
  pFVar1 = (this->ReplayInfo).FriendlyName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&this->ReplayInfo);
  pFVar1 = (this->CurrentStreamName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->CheckpointAr).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  pFVar2 = (this->FileAr).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  pFVar2 = (this->HeaderAr).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  INetworkReplayStreamer::~INetworkReplayStreamer((INetworkReplayStreamer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c862c0

void * __thiscall FNullReplayInfo::_scalar_deleting_destructor_(FNullReplayInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86310

void * __thiscall
FRenameReplayResult::_scalar_deleting_destructor_(FRenameReplayResult *this,uint param_1)

{
  *(undefined ***)this = &___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86350

void * __thiscall
FReplayEventList::_scalar_deleting_destructor_(FReplayEventList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)(this->ReplayEvents).AllocatorInstance.Data,
             (this->ReplayEvents).ArrayNum);
  pFVar1 = (this->ReplayEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c863c0

void * __thiscall
FReplayEventListItem::_scalar_deleting_destructor_(FReplayEventListItem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FReplayEventListItem__6B_;
  pFVar1 = (this->Metadata).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Group).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86440

void * __thiscall
FRequestEventDataResult::_scalar_deleting_destructor_(FRequestEventDataResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ReplayEventListItem).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86490

void * __thiscall
FRequestEventGroupDataResult::_scalar_deleting_destructor_
          (FRequestEventGroupDataResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRequestEventDataResult,int>
            ((FRequestEventDataResult *)(this->ReplayEventListResults).AllocatorInstance.Data,
             (this->ReplayEventListResults).ArrayNum);
  pFVar1 = (this->ReplayEventListResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)(this->ReplayEventListItems).AllocatorInstance.Data,
             (this->ReplayEventListItems).ArrayNum);
  pFVar1 = (this->ReplayEventListItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86510

void * __thiscall
FSearchEventsResult::_scalar_deleting_destructor_(FSearchEventsResult *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->CorruptedStreams).AllocatorInstance.Data,
             (this->CorruptedStreams).ArrayNum);
  pFVar1 = (this->CorruptedStreams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNetworkReplayStreamInfo,int>
            ((FNetworkReplayStreamInfo *)(this->FoundStreams).AllocatorInstance.Data,
             (this->FoundStreams).ArrayNum);
  pFVar1 = (this->FoundStreams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c86590

void * __thiscall
FStartStreamingResult::_scalar_deleting_destructor_(FStartStreamingResult *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c865d0

void * __thiscall
FStreamingResultBase::_scalar_deleting_destructor_(FStreamingResultBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FStreamingResultBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// GetAutomaticDemoName @ 146c87210

FString * __cdecl GetAutomaticDemoName(FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FString *pFVar5;
  size_t sVar6;
  IFileManager *pIVar7;
  longlong lVar8;
  wchar_t *_Str;
  ForAnyElementType FVar9;
  int iVar10;
  longlong local_res8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FScriptContainerElement *local_98;
  undefined4 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar2 = FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays();
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar8 = 0x2bca2875f4373fff;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  iVar10 = 1;
  while( true ) {
    if ((iVar2 != 0) && (iVar2 < iVar10)) {
      return __return_storage_ptr__;
    }
    FString::PrintfImpl(&local_b8,L"demo%i");
    pFVar5 = GetStreamBaseFilename(&local_38,&local_b8);
    if ((pFVar5->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    GetStreamBaseFilename(&local_68,&local_b8);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar9.Data = local_68.Data.AllocatorInstance.Data;
    }
    pFVar5 = FPaths::ProjectSavedDir();
    if ((pFVar5->Data).ArrayNum == 0) {
      local_a8.DataPtr = L"";
    }
    else {
      local_a8.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar3 = 0;
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_a8.DataPtr);
      iVar3 = (int)sVar6;
    }
    local_90 = 6;
    local_98 = (FScriptContainerElement *)0x151448280;
    local_a8.Size = iVar3;
    FPaths::CombineInternal(&local_78,&local_a8,2);
    local_a8.DataPtr = L"";
    if (local_78.Data.ArrayNum != 0) {
      local_a8.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    }
    iVar3 = 0;
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_a8.DataPtr);
      iVar3 = (int)sVar6;
    }
    uVar4 = 0;
    local_a8.Size = iVar3;
    local_98 = FVar9.Data;
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen((wchar_t *)FVar9.Data);
      uVar4 = (undefined4)sVar6;
    }
    local_90 = uVar4;
    FPaths::CombineInternal(&local_58,&local_a8,2);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_a8.DataPtr = L"";
    if (local_58.Data.ArrayNum != 0) {
      local_a8.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    }
    iVar3 = 0;
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_a8.DataPtr);
      iVar3 = (int)sVar6;
    }
    uVar4 = 0;
    local_a8.Size = iVar3;
    local_98 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(_Str);
      uVar4 = (undefined4)sVar6;
    }
    local_90 = uVar4;
    FPaths::CombineInternal(&local_48,&local_a8,2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FString::ConcatFC(&local_88,&local_48,L".demo");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pIVar7 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar7 + 0xd8))(pIVar7,&local_res8,FVar9.Data);
    FVar9.Data = local_b8.Data.AllocatorInstance.Data;
    iVar3 = local_b8.Data.ArrayNum;
    if (local_res8 == 0) break;
    if (((iVar2 != 0) && (local_res8 < lVar8)) &&
       (lVar8 = local_res8, __return_storage_ptr__ != &local_b8)) {
      (__return_storage_ptr__->Data).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
        lVar8 = local_res8;
        if (iVar3 != 0) {
          memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar9.Data,
                 (longlong)iVar3 * 2);
          lVar8 = local_res8;
        }
      }
    }
    iVar10 = iVar10 + 1;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (__return_storage_ptr__ != &local_b8) {
    (__return_storage_ptr__->Data).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar9.Data,(longlong)iVar3 * 2)
        ;
      }
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCheckpointFilename @ 146c876a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
GetCheckpointFilename(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  FString *pFVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType _Str;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  FScriptContainerElement *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  FString::PrintfImpl(&local_78,L"checkpoint%d");
  local_58.DataPtr = L"";
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    _Str.Data = local_78.Data.AllocatorInstance.Data;
  }
  pFVar1 = GetStreamDirectory(&local_68,param_1);
  if ((pFVar1->Data).ArrayNum != 0) {
    local_58.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  iVar3 = 0;
  local_58.Size = iVar3;
  if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar2;
  }
  local_48 = L"checkpoints";
  local_40 = 0xb;
  local_38 = _Str.Data;
  if (_Str.Data != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen((wchar_t *)_Str.Data);
    iVar3 = (int)sVar2;
  }
  local_30 = iVar3;
  FPaths::CombineInternal(__return_storage_ptr__,&local_58,3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEventFilename @ 146c87880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetEventFilename(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  FString *pFVar1;
  size_t sVar2;
  int iVar3;
  ForAnyElementType _Str;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  FScriptContainerElement *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  FString::PrintfImpl(&local_78,L"event%d");
  local_58.DataPtr = L"";
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    _Str.Data = local_78.Data.AllocatorInstance.Data;
  }
  pFVar1 = GetStreamDirectory(&local_68,param_1);
  if ((pFVar1->Data).ArrayNum != 0) {
    local_58.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  iVar3 = 0;
  local_58.Size = iVar3;
  if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar2;
  }
  local_48 = L"events";
  local_40 = 6;
  local_38 = _Str.Data;
  if (_Str.Data != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen((wchar_t *)_Str.Data);
    iVar3 = (int)sVar2;
  }
  local_30 = iVar3;
  FPaths::CombineInternal(__return_storage_ptr__,&local_58,3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStreamBaseFilename @ 146c87b50

FString * __cdecl GetStreamBaseFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FDateTime this;
  FString *pFVar1;
  FEngineVersion *this_00;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  int local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [2];
  FString local_40;
  FString local_30;
  
  FWindowsPlatformTime::SystemTime
            (local_res8,local_res20,local_48,local_res18,&local_58,&local_54,&local_50,&local_4c);
  FString::FString(__return_storage_ptr__,param_1);
  this = FDateTime::Now();
  pFVar1 = FDateTime::ToString((FDateTime *)this.Ticks,&local_30);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FString::ReplaceInline(__return_storage_ptr__,L"%td",pwVar3,IgnoreCase);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  FString::PrintfImpl(&local_40,L"%i-%i-%i");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar2.Data = local_40.Data.AllocatorInstance.Data;
  }
  FString::ReplaceInline(__return_storage_ptr__,L"%d",(wchar_t *)FVar2.Data,IgnoreCase);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FString::PrintfImpl(&local_40,L"%i");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar2.Data = local_40.Data.AllocatorInstance.Data;
  }
  FString::ReplaceInline(__return_storage_ptr__,L"%t",(wchar_t *)FVar2.Data,IgnoreCase);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  this_00 = FEngineVersion::Current();
  FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_00);
  FString::PrintfImpl(&local_40,L"%i");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar2.Data = local_40.Data.AllocatorInstance.Data;
  }
  FString::ReplaceInline(__return_storage_ptr__,L"%v",(wchar_t *)FVar2.Data,IgnoreCase);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FString::ReplaceInline(__return_storage_ptr__,L"\\",L"_",IgnoreCase);
  FString::ReplaceInline(__return_storage_ptr__,L"/",L"_",IgnoreCase);
  FString::ReplaceInline(__return_storage_ptr__,L".",L"_",IgnoreCase);
  FString::ReplaceInline(__return_storage_ptr__,L" ",L"_",IgnoreCase);
  FString::ReplaceInline(__return_storage_ptr__,L"%",L"_",IgnoreCase);
  return __return_storage_ptr__;
}

// GetStreamDirectory @ 146c87d90

FString * __cdecl GetStreamDirectory(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  int iVar4;
  ForAnyElementType _Str;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  GetStreamBaseFilename(&local_38,param_1);
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    _Str.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar2 = FPaths::ProjectSavedDir();
  if ((pFVar2->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar4 = 0;
  local_28.Size = iVar4;
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar3;
  }
  local_10 = 6;
  local_18 = (FScriptContainerElement *)0x151448280;
  FPaths::CombineInternal(&local_48,&local_28,2);
  iVar1 = 0;
  local_28.DataPtr = L"";
  if (local_48.Data.ArrayNum != 0) {
    local_28.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_28.DataPtr);
    iVar1 = (int)sVar3;
  }
  local_28.Size = iVar1;
  local_18 = _Str.Data;
  if (_Str.Data != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen((wchar_t *)_Str.Data);
    iVar4 = (int)sVar3;
  }
  local_10 = iVar4;
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStreamFullBaseFilename @ 146c87eb0

FString * __cdecl GetStreamFullBaseFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  int iVar3;
  wchar_t *_Str;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  pFVar1 = GetStreamBaseFilename(&local_38,param_1);
  local_28.DataPtr = L"";
  if ((pFVar1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pFVar1 = GetStreamDirectory(&local_48,param_1);
  if ((pFVar1->Data).ArrayNum != 0) {
    local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  iVar3 = 0;
  local_28.Size = iVar3;
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar2;
  }
  local_18 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(_Str);
    iVar3 = (int)sVar2;
  }
  local_10 = iVar3;
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReadReplayInfo @ 146c88b20

FNullReplayInfo * __cdecl ReadReplayInfo(FNullReplayInfo *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->FriendlyName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FriendlyName).Data.ArrayNum = 0;
  (__return_storage_ptr__->FriendlyName).Data.ArrayMax = 0;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->_padding_ = (longlong)&___7FNullReplayInfo__6B_;
  __return_storage_ptr__->LengthInMS = 0;
  __return_storage_ptr__->NetworkVersion = 0;
  __return_storage_ptr__->Changelist = 0;
  __return_storage_ptr__->DemoFileLastOffset = 0;
  pFVar1 = GetStreamFullBaseFilename(&local_28,param_1);
  FString::ConcatFC(&local_18,pFVar1,L".replayinfo");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pIVar2 = IFileManager::Get();
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,FVar5.Data,0);
  if (pFVar3 != (FArchive *)0x0) {
    lVar4 = (**(code **)(*(longlong *)pFVar3 + 0x30))(pFVar3);
    if (lVar4 != 0) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      operator<<(pFVar3,&local_28);
      FJsonSerializable::FromJson((FJsonSerializable *)__return_storage_ptr__,&local_28);
      __return_storage_ptr__->bIsValid = true;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// WriteReplayInfo @ 146c8a3c0

void __cdecl WriteReplayInfo(FString *param_1,FNullReplayInfo *param_2)

{
  code *pcVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  FArchive *pFVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  pIVar2 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x20);
  pFVar3 = GetStreamFullBaseFilename(&local_18,param_1);
  FString::ConcatFC(&local_28,pFVar3,L".replayinfo");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar4 = (FArchive *)(*pcVar1)(pIVar2,FVar5.Data,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar4 != (FArchive *)0x0) {
    FJsonSerializable::ToJson((FJsonSerializable *)param_2,&local_28,true);
    operator<<(pFVar4,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  return;
}

// IMPLEMENT_MODULE_NullNetworkReplayStreaming @ 146c8a4a0

void __cdecl IMPLEMENT_MODULE_NullNetworkReplayStreaming(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogNullReplay'' @ 1503dfe80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNullReplay__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNullReplay);
  return;
}

