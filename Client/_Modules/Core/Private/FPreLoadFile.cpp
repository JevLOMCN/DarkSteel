// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FPreLoadFile @ 141917310

FPreLoadFile * __thiscall FPreLoadFile::FPreLoadFile(FPreLoadFile *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPreLoadFile *pFVar3;
  FPreloadFileRegistry *lpCriticalSection;
  FPreLoadFile *local_res18 [2];
  FString *local_58;
  FPreLoadFile **local_50;
  code *local_48 [2];
  undefined **local_38;
  FPreLoadFile *local_30;
  undefined8 local_20;
  
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPreLoadFile::FPreLoadFile'::`1'::<lambda_3_>,0,0>::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPreLoadFile::FPreLoadFile'::__l1::<lambda_3_>,void>::Call;
  local_20 = 0;
  local_30 = this;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            ((FDelayedAutoRegisterHelper *)this,StatSystemReady,
             (TFunction<void___cdecl(void)> *)local_48,false);
  this->bIsComplete = false;
  this->bFailedToOpenInKickOff = false;
  this->Data = (void *)0x0;
  this->FileSize = 0;
  ::FString::FString(&this->Path,param_1);
  this->CompletionEvent = (FEvent *)0x0;
  this->AsyncReadHandle = (IAsyncReadFileHandle *)0x0;
  this->SizeRequestHandle = (IAsyncReadRequest *)0x0;
  if (bSystemNoLongerTakingRequests != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSystemNoLongerTakingRequests == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreLoadFile.cpp"
                       ,0x2c,L"Created a PreLoadFile object after it is no longer valid");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPreLoadFile *)(*pcVar1)();
      return pFVar3;
    }
  }
  lpCriticalSection = FPreloadFileRegistry::Get();
  if (lpCriticalSection != (FPreloadFileRegistry *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_50 = local_res18;
    local_res18[0] = this;
    local_58 = &this->Path;
    TSet<TTuple<FString,FPreLoadFile_*>,TDefaultMapHashableKeyFuncs<FString,FPreLoadFile_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FPreLoadFile_*_&&>_>
              ((TSet<TTuple<FString,FPreLoadFile_*>,TDefaultMapHashableKeyFuncs<FString,FPreLoadFile_*,0>,FDefaultSetAllocator>
                *)&lpCriticalSection->Files,
               (TPairInitializer<FString_const_&,FPreLoadFile_*_&&> *)&stack0x00000008,
               (bool *)&local_58);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// KickOffRead @ 141953a30

void __thiscall FPreLoadFile::KickOffRead(FPreLoadFile *this)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FEvent *pFVar7;
  IFileManager *pIVar8;
  longlong *plVar9;
  ulong64 uVar10;
  void *pvVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  FString local_48;
  FString local_38;
  FScopedBootTiming local_28;
  
  if (CpuChannel->Enabled < 0) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if (__CpuProfilerEventSpecId52 == 0) {
      __CpuProfilerEventSpecId52 =
           FCpuProfilerTrace::OutputEventType
                     ("FPreLoadFile::KickOffRead",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreLoadFile.cpp"
                      ,0x34);
    }
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId52);
  }
  FScopedBootTiming::FScopedBootTiming(&local_28,"FPreLoadFile::KickOffRead");
  this_00 = &this->Path;
  bVar4 = ::FString::StartsWith(this_00,L"{PROJECT}",9,IgnoreCase);
  pwVar12 = L"";
  if (bVar4) {
    pwVar5 = FGenericPlatformMisc::ProjectDir();
    ::FString::FString(&local_48,pwVar5);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar13.Data = local_48.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(this_00,&local_38,L"{PROJECT}",(wchar_t *)FVar13.Data,IgnoreCase);
    if (this_00 != pFVar6) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Path).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->Path).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (this->CompletionEvent == (FEvent *)0x0) {
    pFVar7 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    this->CompletionEvent = pFVar7;
    if (pFVar7 == (FEvent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompletionEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreLoadFile.cpp"
                         ,0x3f,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pIVar8 = IFileManager::Get();
  if ((this->Path).Data.ArrayNum != 0) {
    pwVar12 = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
  }
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,pwVar12,0);
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(this->CompletionEvent->_padding_ + 0x10))();
    this->bFailedToOpenInKickOff = true;
  }
  else {
    uVar10 = (**(code **)(*plVar9 + 0x30))(plVar9);
    this->FileSize = uVar10;
    pvVar11 = FMemory::Malloc(uVar10,0);
    this->Data = pvVar11;
    (**(code **)(*plVar9 + 0x188))(plVar9,pvVar11,this->FileSize);
    (**(code **)*plVar9)(plVar9,1);
    (**(code **)(this->CompletionEvent->_padding_ + 0x10))();
  }
  FScopedBootTiming::~FScopedBootTiming(&local_28);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TakeOwnershipOfLoadedData @ 14196f250

void * __thiscall FPreLoadFile::TakeOwnershipOfLoadedData(FPreLoadFile *this,long64 *param_1)

{
  int iVar1;
  FEvent *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  FPreloadFileRegistry *lpCriticalSection;
  int iVar8;
  wchar_t *pwVar9;
  
  pFVar2 = this->CompletionEvent;
  if ((pFVar2 != (FEvent *)0x0) &&
     (cVar4 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0,0), cVar4 == '\0')) {
    (**(code **)(this->CompletionEvent->_padding_ + 0x20))(this->CompletionEvent,0xffffffff,0);
  }
  pwVar9 = L"";
  if (this->CompletionEvent != (FEvent *)0x0) {
    if (this->bFailedToOpenInKickOff == false) goto LAB_14196f32f;
    cVar4 = (**(code **)(this->CompletionEvent->_padding_ + 8))();
    if ((cVar4 != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompletionEvent == nullptr || !CompletionEvent->IsManualReset()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreLoadFile.cpp"
                           ,0x84,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar3)();
      return pvVar7;
    }
  }
  KickOffRead(this);
  if ((this->CompletionEvent == (FEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompletionEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreLoadFile.cpp"
                         ,0x88,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  cVar4 = (**(code **)(this->CompletionEvent->_padding_ + 0x20))(this->CompletionEvent,0,0);
  if (cVar4 == '\0') {
    (**(code **)(this->CompletionEvent->_padding_ + 0x20))(this->CompletionEvent,0xffffffff,0);
  }
LAB_14196f32f:
  FGenericPlatformProcess::ReturnSynchEventToPool(this->CompletionEvent);
  this->CompletionEvent = (FEvent *)0x0;
  if (param_1 != (long64 *)0x0) {
    *param_1 = this->FileSize;
  }
  pvVar7 = this->Data;
  this->Data = (void *)0x0;
  lpCriticalSection = FPreloadFileRegistry::Get();
  if (lpCriticalSection == (FPreloadFileRegistry *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(lpCriticalSection->Files).field_0x8 !=
      *(int *)&(lpCriticalSection->Files).field_0x34) {
    iVar1 = (this->Path).Data.ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      pwVar9 = (wchar_t *)(this->Path).Data.AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
    TSet<TTuple<FString,FPreLoadFile_*>,TDefaultMapHashableKeyFuncs<FString,FPreLoadFile_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FPreLoadFile_*>,TDefaultMapHashableKeyFuncs<FString,FPreLoadFile_*,0>,FDefaultSetAllocator>
                *)&lpCriticalSection->Files,uVar6,&this->Path);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pvVar7;
}

// TakeOwnershipOfLoadedDataByPath @ 14196f3e0

void * __cdecl FPreLoadFile::TakeOwnershipOfLoadedDataByPath(wchar_t *param_1,long64 *param_2)

{
  uint uVar1;
  FPreloadFileRegistry *lpCriticalSection;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FPreLoadFile *this;
  FString local_18;
  
  lpCriticalSection = FPreloadFileRegistry::Get();
  if (lpCriticalSection == (FPreloadFileRegistry *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_18,param_1);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  this = (FPreLoadFile *)0x0;
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
  iVar4 = TSet<TTuple<FString,FPreLoadFile_*>,TDefaultMapHashableKeyFuncs<FString,FPreLoadFile_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FPreLoadFile_*>,TDefaultMapHashableKeyFuncs<FString,FPreLoadFile_*,0>,FDefaultSetAllocator>
                      *)&lpCriticalSection->Files,uVar1,&local_18);
  if ((iVar4 != -1) &&
     (lVar2 = (longlong)iVar4 * 0x20 + *(longlong *)&lpCriticalSection->Files, lVar2 != 0)) {
    this = *(FPreLoadFile **)(lVar2 + 0x10);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this == (FPreLoadFile *)0x0) {
    *param_2 = 0;
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = TakeOwnershipOfLoadedData(this,param_2);
  }
  return pvVar3;
}

