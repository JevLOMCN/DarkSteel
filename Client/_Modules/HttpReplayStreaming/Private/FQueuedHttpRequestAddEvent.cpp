// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 3

// FQueuedHttpRequestAddEvent @ 146cb62e0

FQueuedHttpRequestAddEvent * __thiscall
FQueuedHttpRequestAddEvent::FQueuedHttpRequestAddEvent
          (FQueuedHttpRequestAddEvent *this,FString *param_1,uint param_2,FString *param_3,
          FString *param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5,
          TSharedRef<IHttpRequest,1> *param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  IHttpRequest *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FQueuedHttpRequestAddEvent *pFVar6;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pTVar1 = (param_6->SharedReferenceCount).ReferenceController;
  pIVar2 = param_6->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
    this->_padding_ = (longlong)pIVar2;
    *(undefined4 *)&this->_padding_ = 0xd;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
    this->_padding_ = (longlong)pIVar2;
    *(undefined4 *)&this->_padding_ = 0xd;
    this->_padding_ = (longlong)pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7FQueuedHttpRequestAddEvent__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Group).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Group).Data.ArrayNum = 0;
  (this->Group).Data.ArrayMax = 0;
  (this->Meta).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).Data.ArrayNum = 0;
  (this->Meta).Data.ArrayMax = 0;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FQueuedHttpRequestAddEvent *)(*pcVar4)();
      return pFVar6;
    }
  }
  plVar3 = (longlong *)this->_padding_;
  pcVar4 = *(code **)(*plVar3 + 0x60);
  ::FString::FString(&local_68,L"POST");
  (*pcVar4)(plVar3,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FQueuedHttpRequestAddEvent *)(*pcVar4)();
      return pFVar6;
    }
  }
  plVar3 = (longlong *)this->_padding_;
  pcVar4 = *(code **)(*plVar3 + 0xb0);
  ::FString::FString(&local_48,L"application/octet-stream");
  ::FString::FString(&local_58,L"Content-Type");
  (*pcVar4)(plVar3,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FQueuedHttpRequestAddEvent *)(*pcVar4)();
      return pFVar6;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x88))((longlong *)this->_padding_,param_5);
  ::FString::operator=(&this->Name,param_1);
  this->TimeInMS = param_2;
  ::FString::operator=(&this->Group,param_3);
  ::FString::operator=(&this->Meta,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FQueuedHttpRequestAddEvent @ 146cb6c80

void __thiscall
FQueuedHttpRequestAddEvent::~FQueuedHttpRequestAddEvent(FQueuedHttpRequestAddEvent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FQueuedHttpRequestAddEvent__6B_;
  pFVar1 = (this->Meta).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Group).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// PreProcess @ 146cc5390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueuedHttpRequestAddEvent::PreProcess
          (FQueuedHttpRequestAddEvent *this,FHttpNetworkReplayStreamer *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_b8;
  FString local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  if ((param_3->Data).ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    return false;
  }
  if ((this->Name).Data.ArrayNum < 2) {
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    plVar2 = (longlong *)this->_padding_;
    pcVar3 = *(code **)(*plVar2 + 0x68);
    local_78 = (this->Meta).Data.AllocatorInstance.Data;
    iVar1 = (this->Meta).Data.ArrayNum;
    iStack_70 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_70 = 0;
    }
    local_38._12_4_ = uStack_6c;
    local_38.Size = iStack_70;
    local_38.DataPtr = (wchar_t *)local_78;
    FGenericPlatformHttp::UrlEncode(&local_28,&local_38);
    ::FString::PrintfImpl
              (&local_68,L"%sreplay/%s/event?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false"
              );
    (*pcVar3)(plVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::ConcatFC(&local_a8,param_3,L"_");
    ::FString::ConcatFF(&local_b8,&local_a8,&this->Name);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    plVar2 = (longlong *)this->_padding_;
    pcVar3 = *(code **)(*plVar2 + 0x68);
    local_98 = (this->Meta).Data.AllocatorInstance.Data;
    iVar1 = (this->Meta).Data.ArrayNum;
    iStack_90 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_90 = 0;
    }
    local_58._12_4_ = uStack_8c;
    local_58.Size = iStack_90;
    local_58.DataPtr = (wchar_t *)local_98;
    FGenericPlatformHttp::UrlEncode(&local_48,&local_58);
    ::FString::PrintfImpl
              (&local_88,
               L"%sreplay/%s/event/%s?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false");
    (*pcVar3)(plVar2,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

