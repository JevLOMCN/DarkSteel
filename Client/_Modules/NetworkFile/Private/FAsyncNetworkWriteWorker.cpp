// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// DoWork @ 148be1690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncNetworkWriteWorker::DoWork(FAsyncNetworkWriteWorker *this)

{
  undefined1 *puVar1;
  FArrayReader *pFVar2;
  ulong64 *puVar3;
  IPlatformFile *pIVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  FString *pFVar8;
  longlong *plVar9;
  ulong64 uVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  bool bVar13;
  FDateTime local_res8;
  ulong64 local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = 0;
  pFVar2 = this->FileArchive;
  puVar3 = (ulong64 *)**(longlong **)&pFVar2->field_0x8;
  if ((ulong64 *)(*(longlong **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)pFVar2,&local_res10);
    }
  }
  else {
    local_res10 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 8;
  }
  bVar13 = local_res10 != 0xffffffffffffffff;
  if (bVar13) {
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    cVar7 = (**(code **)((longlong)*this->InnerPlatformFile + 0x78))
                      (this->InnerPlatformFile,pwVar12);
    if (cVar7 != '\0') {
      if ((this->Filename).Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*this->InnerPlatformFile + 0xa8))(this->InnerPlatformFile,pwVar12,0);
      if ((this->Filename).Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*this->InnerPlatformFile + 0x88))(this->InnerPlatformFile,pwVar12);
    }
  }
  if (((this->ServerTimeStamp).Ticks != 0) && (bVar13)) {
    ::FString::ConcatFC(&local_58,&this->Filename,L".tmp");
    pIVar4 = this->InnerPlatformFile;
    pcVar5 = *(code **)((longlong)*pIVar4 + 0x200);
    pFVar8 = FPaths::GetPath(&local_48,&this->Filename);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    (*pcVar5)(pIVar4,pwVar12);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    plVar9 = (longlong *)
             (**(code **)((longlong)*this->InnerPlatformFile + 0x110))
                       (this->InnerPlatformFile,FVar11.Data,0,0);
    if (plVar9 == (longlong *)0x0) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FAsyncNetworkWriteWorker::DoWork(void)___ptr64'::__l16::
                  LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
      plVar9 = (longlong *)0x0;
    }
    cVar7 = (**(code **)(*plVar9 + 0x30))
                      (plVar9,*(longlong *)&this->FileArchive->field_0x98 +
                              *(longlong *)&this->FileArchive->field_0x90,local_res10);
    if (cVar7 == '\0') {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FAsyncNetworkWriteWorker::DoWork(void)___ptr64'::__l37::
                  LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    }
    puVar1 = &this->FileArchive->field_0x90;
    *(ulong64 *)puVar1 = *(longlong *)puVar1 + local_res10;
    if (this->Event != (FScopedEvent *)0x0) {
      this->FileArchive = (FArrayReader *)0x0;
      pFVar2 = (this->FileArchiveOwner).Ptr;
      if (pFVar2 != (FArrayReader *)0x0) {
        (this->FileArchiveOwner).Ptr = (FArrayReader *)0x0;
        if (*(void **)&pFVar2->field_0x98 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar2->field_0x98);
        }
        FArchive::~FArchive((FArchive *)pFVar2);
        ::operator_delete(pFVar2,0xa8);
      }
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    uVar10 = (**(code **)((longlong)*this->InnerPlatformFile + 0x80))
                       (this->InnerPlatformFile,FVar11.Data);
    if (uVar10 != local_res10) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FAsyncNetworkWriteWorker::DoWork(void)___ptr64'::__l61::
                  LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
    }
    (**(code **)*plVar9)(plVar9,1);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->InnerPlatformFile + 0xa0))
              (this->InnerPlatformFile,pwVar12,FVar11.Data);
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->InnerPlatformFile + 0xb8))
              (this->InnerPlatformFile,pwVar12,(this->ServerTimeStamp).Ticks);
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*this->InnerPlatformFile + 0xb0))
              (this->InnerPlatformFile,&local_res8,pwVar12);
    if (local_res8.Ticks < (this->ServerTimeStamp).Ticks) {
      FDateTime::ToString(&this->ServerTimeStamp,&local_38);
      FDateTime::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FAsyncNetworkWriteWorker::DoWork(void)___ptr64'::__l82::
                  LOG_Static,(FLogCategoryBase *)&LogNetworkPlatformFile);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (this->Event != (FScopedEvent *)0x0) {
    LOCK();
    iVar6 = OutstandingAsyncWrites.Counter + -1;
    UNLOCK();
    bVar13 = OutstandingAsyncWrites.Counter == 1;
    OutstandingAsyncWrites.Counter = iVar6;
    if (bVar13) {
      (**(code **)(this->Event->Event->_padding_ + 0x10))();
    }
  }
  return;
}

