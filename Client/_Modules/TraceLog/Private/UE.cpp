// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 125

// <lambda_invoker_cdecl> @ 14145c970

bool __cdecl
`UE::Trace::EnumerateChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FChannelInfo *param_1,void *param_2)

{
  (**(code **)param_2)(param_1->Name,param_1->bIsEnabled,*(undefined8 *)((longlong)param_2 + 8));
  return true;
}

// <lambda_invoker_cdecl> @ 14145c9a0

ulong __cdecl
`UE::Trace::Private::ThreadCreate'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void *param_1)

{
  (*param_1)();
  return 0;
}

// <lambda_invoker_cdecl> @ 14145c9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
`UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (void *param_1,uint param_2,char **param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_148 [31];
  char acStack_129 [257];
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
    pcVar3 = *param_3;
    uVar1 = 0;
    memset(acStack_129 + 1,0,0x100);
    pcVar2 = strchr(pcVar3,0x3a);
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2 + (1 - (longlong)pcVar3);
      if ((char *)0x100 < pcVar3) {
        pcVar3 = (char *)0x100;
      }
      strncpy(acStack_129 + 1,*param_3,(size_t)pcVar3);
      acStack_129[(longlong)pcVar3] = '\0';
      pcVar3 = acStack_129 + 1;
      uVar1 = atoi(pcVar2 + 1);
    }
    UE::Trace::Private::Writer_SendTo(pcVar3,0,uVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 14145cab0

void __cdecl
`UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (void *param_1,uint param_2,char **param_3)

{
  if ((UE::Trace::Private::GPendingDataHandle == 0) && (UE::Trace::Private::GDataHandle != 0)) {
    UE::Trace::Private::GPendingDataHandle = 0xffffffffffffffff;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14145cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
`UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (void *param_1,uint param_2,char **param_3)

{
  char cVar1;
  char *pcVar2;
  FChannel *this;
  undefined1 auStack_248 [32];
  char *local_228 [2];
  char local_218 [511];
  undefined1 local_19;
  ulonglong local_18;
  
  if (1 < param_2) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
    memset(local_218,0,0x200);
    cVar1 = *param_3[1];
    strncpy(local_218,*param_3,0x200);
    local_19 = 0;
    pcVar2 = strtok_s(local_218,",",local_228);
    while (pcVar2 != (char *)0x0) {
      this = UE::Trace::FChannel::FindChannel(pcVar2);
      if (this != (FChannel *)0x0) {
        UE::Trace::FChannel::ToggleInternal(this,cVar1 != '0',true,(wchar_t **)0x0);
      }
      pcVar2 = strtok_s((char *)0x0,",",local_228);
    }
  }
  return;
}

// Decode @ 14145d980

int __cdecl UE::Trace::Private::Decode(void *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = ::Trace::LZ4_decompress_safe(param_1,param_3,param_2,param_4);
  return iVar1;
}

// Encode @ 14145dc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

int __cdecl UE::Trace::Private::Encode(void *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined1 auStackY_288 [32];
  FMessageEvent local_258;
  char local_238 [512];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Encode");
  }
  iVar1 = ::Trace::LZ4_compress_fast(param_1,param_3,param_2,param_4,1);
  if (iVar1 == 0) {
    snprintf(local_238,0x200,"LZ4 failed to compress %d bytes (dest %d bytes).");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_258.Type = CompressionError;
      local_258.TypeStr = "CompressionError";
      local_258.Description = local_238;
      (*GMessageFunc)(&local_258);
    }
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return iVar1;
}

// EncodeNoInstr @ 14145dd60

int __cdecl UE::Trace::Private::EncodeNoInstr(void *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = ::Trace::LZ4_compress_fast(param_1,param_3,param_2,param_4,1);
  return iVar1;
}

// EnumerateChannels @ 14145e160

void __cdecl
UE::Trace::EnumerateChannels(_func___cdecl_void_char_ptr_bool_void_ptr *param_1,void *param_2)

{
  FChannel *pFVar1;
  FChannel **ppFVar2;
  FChannel *local_48;
  FChannel *local_40;
  FChannel *local_38 [6];
  
  ppFVar2 = &local_48;
  local_48 = GNewChannelList;
  local_40 = GHeadChannel;
  do {
    for (pFVar1 = *ppFVar2; pFVar1 != (FChannel *)0x0; pFVar1 = pFVar1->Next) {
      (*param_1)((pFVar1->Name).Ptr,(bool)((byte)((uint)pFVar1->Enabled >> 0x1f) ^ 1),param_2);
    }
    ppFVar2 = ppFVar2 + 1;
  } while (ppFVar2 != local_38);
  return;
}

// EnumerateChannels @ 14145e200

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Trace::EnumerateChannels(_func___cdecl_bool_FChannelInfo_ptr_void_ptr *param_1,void *param_2)

{
  FChannel *pFVar1;
  bool bVar2;
  FChannel **ppFVar3;
  FChannel *pFStack_38;
  FChannel *pFStack_30;
  FChannelInfo FStack_28;
  
  ppFVar3 = &pFStack_38;
  pFStack_38 = GNewChannelList;
  pFStack_30 = GHeadChannel;
  do {
    for (pFVar1 = *ppFVar3; pFVar1 != (FChannel *)0x0; pFVar1 = pFVar1->Next) {
      FStack_28.Name = (pFVar1->Name).Ptr;
      FStack_28.Desc = (pFVar1->Args).Desc;
      FStack_28.bIsEnabled = (bool)((byte)((uint)pFVar1->Enabled >> 0x1f) ^ 1);
      FStack_28.bIsReadOnly = (pFVar1->Args).bReadOnly;
      FStack_28.Id = (pFVar1->Name).Hash;
      bVar2 = (*param_1)(&FStack_28,param_2);
      if (!bVar2) {
        return;
      }
    }
    ppFVar3 = ppFVar3 + 1;
  } while ((FChannelInfo *)ppFVar3 != &FStack_28);
  return;
}

// Exit @ 14145e210

void __cdecl UE::Trace::Exit(void)

{
  Private::GPoolMaxSize = 0xffffffff;
  return;
}

// Field_WriteAuxData @ 14145e230

void __cdecl UE::Trace::Private::Field_WriteAuxData(uint param_1,uchar *param_2,int param_3)

{
  FWriteBuffer *local_res10 [2];
  FWriteBuffer **local_res20;
  
  local_res20 = local_res10;
  local_res10[0] = (FWriteBuffer *)param_2;
  Field_WriteAuxData<_UE::Trace::Private::Field_WriteAuxData_::__l2::<lambda_1>_&>
            (param_1,param_3,(<lambda_1> *)&local_res20);
  return;
}

// Field_WriteStringAnsi @ 14145e260

void __cdecl UE::Trace::Private::Field_WriteStringAnsi(uint param_1,char *param_2,int param_3)

{
  FWriteBuffer *local_res10 [2];
  FWriteBuffer **local_res20;
  
  local_res20 = local_res10;
  local_res10[0] = (FWriteBuffer *)param_2;
  Field_WriteAuxData<_UE::Trace::Private::Field_WriteAuxData_::__l2::<lambda_1>_&>
            (param_1,param_3 & 0x7ffff,(<lambda_1> *)&local_res20);
  return;
}

// Field_WriteStringAnsi @ 14145e2a0

void __cdecl UE::Trace::Private::Field_WriteStringAnsi(uint param_1,wchar_t *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  wchar_t wVar3;
  int iVar4;
  FWriteBuffer *pFVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uchar *puVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  
  uVar9 = param_3 & 0x7ffff;
  if (uVar9 != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar10 = (longlong *)(lVar1 + 0x20);
    pFVar5 = (FWriteBuffer *)*plVar10;
    puVar8 = pFVar5->Cursor;
    bVar11 = puVar8 == pFVar5->Committed;
    iVar4 = (int)pFVar5 - (int)puVar8;
    if (iVar4 < 1) {
      if (puVar8 == pFVar5->Committed) {
        pFVar5->Committed = puVar8;
      }
      bVar11 = true;
      pFVar5 = Writer_NextBufferInternal((FWriteBuffer *)*plVar10);
      iVar4 = (int)pFVar5 - *(int *)&pFVar5->Cursor;
    }
    while( true ) {
      uVar2 = uVar9;
      if ((int)(iVar4 + 3U) < (int)uVar9) {
        uVar2 = iVar4 + 3U;
      }
      uVar7 = (ulonglong)uVar2;
      *(uint *)pFVar5->Cursor = uVar2 << 0xd | param_1 << 8;
      *pFVar5->Cursor = '\x02';
      pFVar5->Cursor = pFVar5->Cursor + 4;
      pbVar6 = pFVar5->Cursor;
      if (0 < (int)uVar2) {
        do {
          wVar3 = *param_2;
          param_2 = param_2 + 1;
          *pbVar6 = (byte)wVar3 & 0x7f;
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
      }
      uVar9 = uVar9 - uVar2;
      puVar8 = pFVar5->Cursor + (int)uVar2;
      pFVar5->Cursor = puVar8;
      if ((int)uVar9 < 1) break;
      if (bVar11) {
        pFVar5->Committed = puVar8;
      }
      bVar11 = true;
      pFVar5 = Writer_NextBufferInternal((FWriteBuffer *)*plVar10);
      iVar4 = (int)pFVar5 - *(int *)&pFVar5->Cursor;
    }
    if (bVar11) {
      pFVar5->Committed = puVar8;
    }
  }
  return;
}

// Field_WriteStringWide @ 14145e3f0

void __cdecl UE::Trace::Private::Field_WriteStringWide(uint param_1,wchar_t *param_2,int param_3)

{
  FWriteBuffer *local_res10 [2];
  FWriteBuffer **local_res20;
  
  local_res20 = local_res10;
  local_res10[0] = (FWriteBuffer *)param_2;
  Field_WriteAuxData<_UE::Trace::Private::Field_WriteAuxData_::__l2::<lambda_1>_&>
            (param_1,param_3 * 2 & 0x7ffff,(<lambda_1> *)&local_res20);
  return;
}

// FileOpen @ 14145e430

ulong64 __cdecl UE::Trace::Private::FileOpen(char *param_1)

{
  HANDLE pvVar1;
  ulong64 uVar2;
  
  pvVar1 = CreateFileA(param_1,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  uVar2 = (longlong)pvVar1 + 1;
  if (pvVar1 == (HANDLE)0xffffffffffffffff) {
    uVar2 = 0;
  }
  return uVar2;
}

// FindChannel @ 14145e5c0

FChannel * __cdecl UE::Trace::FindChannel(uint param_1)

{
  FChannel *pFVar1;
  longlong *plVar2;
  longlong local_18;
  FChannel *local_10;
  longlong local_8;
  
  plVar2 = &local_18;
  local_10 = GHeadChannel;
  pFVar1 = GNewChannelList;
  while( true ) {
    for (; pFVar1 != (FChannel *)0x0; pFVar1 = pFVar1->Next) {
      if ((pFVar1->Name).Hash == param_1) {
        return pFVar1;
      }
    }
    plVar2 = plVar2 + 1;
    if (plVar2 == &local_8) break;
    pFVar1 = (FChannel *)*plVar2;
  }
  return (FChannel *)0x0;
}

// FindChannel @ 14145e620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChannel * __cdecl UE::Trace::FindChannel(wchar_t *param_1)

{
  wchar_t wVar1;
  FChannel *pFVar2;
  ulonglong uVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58 [7];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar7 = local_58;
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    *(byte *)puVar7 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
  } while (puVar7 != local_18);
  local_19 = 0;
  sVar5 = strlen((char *)local_58);
  uVar9 = sVar5 & 0xffffffff;
  if ((7 < uVar9) &&
     (iVar4 = strcmp((char *)((longlong)local_58 + (uVar9 - 7)),"Channel"), iVar4 == 0)) {
    uVar9 = uVar9 - 7;
  }
  puVar7 = local_58;
  iVar4 = (int)uVar9;
  if (0 < iVar4) {
    uVar9 = uVar9 & 0xffffffff;
    if ((*(byte *)((longlong)local_58 + (longlong)iVar4 + -1) | 0x20) == 0x73) {
      uVar9 = (ulonglong)(iVar4 - 1);
    }
  }
  uVar6 = 0x811c9dc5;
  uVar8 = (uint)uVar9;
  while (uVar8 != 0) {
    uVar3 = *puVar7;
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
    uVar6 = (((int)(char)uVar3 | 0x20U) ^ uVar6) * 0x1000193;
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
  }
  local_60 = GHeadChannel;
  puVar7 = &local_68;
  pFVar2 = GNewChannelList;
  while( true ) {
    for (; pFVar2 != (FChannel *)0x0; pFVar2 = pFVar2->Next) {
      if ((pFVar2->Name).Hash == uVar6) {
        return pFVar2;
      }
    }
    puVar7 = puVar7 + 1;
    if (puVar7 == local_58) break;
    pFVar2 = (FChannel *)*puVar7;
  }
  return (FChannel *)0x0;
}

// GetEncodeMaxSize @ 14145e750

uint __cdecl UE::Trace::Private::GetEncodeMaxSize(uint param_1)

{
  if (0x7e000000 < param_1) {
    return 0;
  }
  return param_1 + 0x10 + param_1 / 0xff;
}

// GetErrorMessage @ 14145e780

bool __cdecl UE::Trace::Private::GetErrorMessage(char *param_1,uint param_2,int param_3)

{
  DWORD DVar1;
  
  DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,param_3,0,param_1,param_2,(va_list *)0x0);
  return DVar1 != 0;
}

// GetLastErrorCode @ 14145e7e0

DWORD __stdcall UE::Trace::Private::GetLastErrorCode(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014145e7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

// GetStatistics @ 14145e850

void __cdecl UE::Trace::GetStatistics(FStatistics *param_1)

{
  param_1->BytesSent = Private::GTraceStatistics.BytesSent;
  param_1->BytesTraced = Private::GTraceStatistics.BytesTraced;
  param_1->BytesEmitted = Private::GTraceStatistics.BytesEmitted;
  param_1->MemoryUsed = Private::GTraceStatistics.MemoryUsed;
  param_1->BlockPoolAllocated = Private::GTraceStatistics.BlockPoolAllocated;
  param_1->BlockPoolFreeBlocks = Private::GTraceStatistics.BlockPoolFreeBlocks;
  param_1->BlockPoolAllocatedBlocks = Private::GTraceStatistics.BlockPoolAllocatedBlocks;
  param_1->SharedBufferAllocated = Private::GTraceStatistics.SharedBufferAllocated;
  param_1->FixedBufferAllocated = Private::GTraceStatistics.FixedBufferAllocated;
  param_1->CacheAllocated = Private::GTraceStatistics.CacheAllocated;
  param_1->CacheUsed = Private::GTraceStatistics.CacheUsed;
  param_1->CacheWaste = Private::GTraceStatistics.CacheWaste;
  return;
}

// Initialize @ 14145f7a0

void __cdecl UE::Trace::Initialize(FInitializeDesc *param_1)

{
  uint uVar1;
  
  Private::FProfilerScope::OnScopeBegin = param_1->OnScopeBeginFunc;
  Private::FProfilerScope::OnScopeEnd = param_1->OnScopeEndFunc;
  if (Private::FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*Private::FProfilerScope::OnScopeBegin)("Writer_Initialize");
  }
  Private::GBlockPoolMaxSize = param_1->BlockPoolMaxSize;
  if (0 < (int)param_1->TailSizeBytes) {
    uVar1 = param_1->TailSizeBytes + 0x3ff & 0xfffffc00;
    if ((int)uVar1 < 0x20000) {
      uVar1 = 0x20000;
    }
    Private::GPacketRing.Data = Private::Writer_MemoryAllocate((ulonglong)uVar1,0x10);
    LOCK();
    Private::GTraceStatistics.FixedBufferAllocated =
         Private::GTraceStatistics.FixedBufferAllocated + uVar1;
    UNLOCK();
    Private::GPacketRing.Cursor = 0;
    Private::GPacketRing.Size = uVar1;
    Private::GPacketRing.Left = uVar1;
    Private::GPacketRing.Right = uVar1;
  }
  if (param_1->bUseImportantCache != false) {
    Private::GCacheCollector = Private::Writer_MemoryAllocate(0x420,0x10);
    LOCK();
    Private::GTraceStatistics.CacheAllocated = Private::GTraceStatistics.CacheAllocated + 0x420;
    UNLOCK();
    Private::GCacheCollector->Size = 0x400;
    Private::GCacheCollector->Remaining = 0x400;
    (Private::GCacheCollector->field0_0x0).Next = (FCacheBuffer *)0x0;
    Private::GCacheActiveBuffer = Private::Writer_MemoryAllocate(0x10020,0x10);
    LOCK();
    Private::GTraceStatistics.CacheAllocated = Private::GTraceStatistics.CacheAllocated + 0x10020;
    UNLOCK();
    Private::GCacheActiveBuffer->Size = 0x10000;
    (Private::GCacheActiveBuffer->field0_0x0).TailNext = &Private::GCacheHeadBuffer;
    Private::GCacheActiveBuffer->Remaining = 0x10000;
  }
  if (param_1->ThreadSleepTimeInMS != 0) {
    Private::GSleepTimeInMS = param_1->ThreadSleepTimeInMS;
  }
  if ((param_1->bUseWorkerThread != false) && (Private::GWorkerThread == 0)) {
    Private::GWorkerThread =
         (ulong64)CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                               `UE::Trace::Private::ThreadCreate'::__l2::<lambda_1>::
                               <lambda_invoker_cdecl>,Private::Writer_WorkerThread,0,(LPDWORD)0x0);
  }
  if (param_1->SessionGuid[0] == 0 &&
      (param_1->SessionGuid[1] == 0 &&
      (param_1->SessionGuid[3] == 0 && param_1->SessionGuid[2] == 0))) {
    Private::Writer_CreateGuid(&Private::GSessionGuid);
  }
  else {
    Private::GSessionGuid.Bits = *&param_1->SessionGuid;
  }
  Private::GOnConnection = param_1->OnConnectionFunc;
  Private::GOnUpdate = param_1->OnUpdateFunc;
  Private::GUpdateInProgress = 0;
  if (Private::FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*Private::FProfilerScope::OnScopeEnd)();
  }
  FChannel::ToggleAllInternal(false,false);
  GChannelsInitialized = true;
  return;
}

// IoClose @ 14145f980

void __cdecl UE::Trace::Private::IoClose(ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014145f983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle((HANDLE)(param_1 - 1));
  return;
}

// IoRead @ 14145f990

int __cdecl UE::Trace::Private::IoRead(ulong64 param_1,void *param_2,uint param_3)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = ReadFile((HANDLE)(param_1 - 1),param_2,param_3,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_res8[0] = 0xffffffff;
  }
  return local_res8[0];
}

// IoWrite @ 14145f9d0

bool __cdecl UE::Trace::Private::IoWrite(ulong64 param_1,void *param_2,uint param_3)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = WriteFile((HANDLE)(param_1 - 1),param_2,param_3,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return false;
  }
  return local_res8[0] == param_3;
}

// IsChannel @ 14145fa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::Trace::IsChannel(wchar_t *param_1)

{
  wchar_t wVar1;
  ulonglong uVar2;
  int iVar3;
  size_t sVar4;
  FChannel *pFVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58 [7];
  undefined1 local_19;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar7 = local_58;
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    *(byte *)puVar7 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
  } while (puVar7 != local_18);
  local_19 = 0;
  sVar4 = strlen((char *)local_58);
  uVar9 = sVar4 & 0xffffffff;
  if ((7 < uVar9) &&
     (iVar3 = strcmp((char *)((longlong)local_58 + (uVar9 - 7)),"Channel"), iVar3 == 0)) {
    uVar9 = uVar9 - 7;
  }
  puVar7 = local_58;
  iVar3 = (int)uVar9;
  if (0 < iVar3) {
    uVar9 = uVar9 & 0xffffffff;
    if ((*(byte *)((longlong)local_58 + (longlong)iVar3 + -1) | 0x20) == 0x73) {
      uVar9 = (ulonglong)(iVar3 - 1);
    }
  }
  uVar6 = 0x811c9dc5;
  uVar8 = (uint)uVar9;
  while (uVar8 != 0) {
    uVar2 = *puVar7;
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
    uVar6 = (((int)(char)uVar2 | 0x20U) ^ uVar6) * 0x1000193;
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
  }
  local_60 = GHeadChannel;
  puVar7 = &local_68;
  pFVar5 = GNewChannelList;
  while( true ) {
    for (; pFVar5 != (FChannel *)0x0; pFVar5 = pFVar5->Next) {
      if ((pFVar5->Name).Hash == uVar6) goto LAB_14145fb13;
    }
    puVar7 = puVar7 + 1;
    if (puVar7 == local_58) break;
    pFVar5 = (FChannel *)*puVar7;
  }
  pFVar5 = (FChannel *)0x0;
LAB_14145fb13:
  return pFVar5 != (FChannel *)0x0;
}

// IsTracing @ 14145fb40

bool __cdecl UE::Trace::IsTracing(void)

{
  if ((Private::GDataHandle == 0) && (Private::GPendingDataHandle == 0)) {
    return false;
  }
  return true;
}

// IsTracingTo @ 14145fb70

bool __cdecl UE::Trace::IsTracingTo(uint (*param_1) [4],uint (*param_2) [4])

{
  if ((Private::GDataHandle == 0) && (Private::GPendingDataHandle == 0)) {
    return false;
  }
  *param_1 = Private::GSessionGuid.Bits;
  *param_2 = Private::GTraceGuid.Bits;
  return true;
}

// LogStall @ 14146a0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::Private::LogStall(ulong64 param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  FLogScope::Enter<UE::Trace::Private::F_TraceTraceStallFields>((TLogScope<0> *)&local_28);
  *local_28 = param_1;
  local_28[1] = param_2;
  *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  return;
}

// Message_Send @ 14146a130

/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::Private::Message_Send(EMessageType param_1,char *param_2,char *param_3)

{
  FMessageEvent local_28;
  
  if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
    local_28.Type = param_1;
    local_28.TypeStr = param_2;
    local_28.Description = param_3;
    (*GMessageFunc)(&local_28);
  }
  return;
}

// Message_SetCallback @ 14146a160

/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::Private::Message_SetCallback(_func___cdecl_void_FMessageEvent_ptr *param_1)

{
  GMessageFunc = param_1;
  return;
}

// Panic @ 14146a1b0

void __cdecl UE::Trace::Panic(void)

{
  longlong lVar1;
  FChannel **ppFVar2;
  FChannel *local_18;
  FChannel *local_10;
  longlong local_8;
  
  ppFVar2 = &local_18;
  local_18 = GNewChannelList;
  local_10 = GHeadChannel;
  do {
    for (lVar1 = (longlong)*ppFVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
    }
    ppFVar2 = ppFVar2 + 1;
  } while (ppFVar2 != (FChannel **)&local_8);
  return;
}

// RelayTo @ 14146a330

bool __cdecl
UE::Trace::RelayTo(ulong64 param_1,_func___cdecl_bool_ulong64_void_ptr_uint *param_2,
                  _func___cdecl_void_ulong64 *param_3,ushort param_4)

{
  ulonglong uVar1;
  
  if (Private::GPendingDataHandle == 0) {
    Private::Writer_InternalInitialize();
    if ((param_1 & 0xffff000000000000) != 0) {
      (*Private::GWriterState.Close)(param_1);
      return false;
    }
    uVar1 = (ulonglong)param_4 << 0x30 | param_1;
    if (uVar1 != 0) {
      Private::GPendingDataHandle = uVar1;
      Private::GPendingWriterState.Write = param_2;
      Private::GPendingWriterState.Close = param_3;
      return true;
    }
  }
  return false;
}

// SendSnapshotTo @ 14146a3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::Trace::SendSnapshotTo(wchar_t *param_1,uint param_2)

{
  wchar_t wVar1;
  bool bVar2;
  ulonglong *puVar3;
  undefined1 auStack_258 [32];
  FSnapshotTarget local_238;
  ulonglong local_218 [63];
  undefined1 local_19;
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  puVar3 = local_218;
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    *(byte *)puVar3 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar3 = (ulonglong *)((longlong)puVar3 + 1);
  } while (puVar3 != local_18);
  local_238.field1_0x8.Host.Host = (char *)local_218;
  local_19 = 0;
  local_238.Type = HostTarget;
  local_238.field1_0x8.Host.Port = param_2;
  bVar2 = Private::Writer_WriteSnapshot(&local_238);
  return bVar2;
}

// SendTo @ 14146a480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::Trace::SendTo(wchar_t *param_1,uint param_2,ushort param_3)

{
  wchar_t wVar1;
  bool bVar2;
  ulonglong *puVar3;
  undefined1 auStack_138 [32];
  ulonglong local_118 [31];
  undefined1 local_19;
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_138;
  puVar3 = local_118;
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    *(byte *)puVar3 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar3 = (ulonglong *)((longlong)puVar3 + 1);
  } while (puVar3 != local_18);
  local_19 = 0;
  bVar2 = Private::Writer_SendTo((char *)local_118,(uint)param_3,param_2);
  return bVar2;
}

// SetMemoryHooks @ 14146a500

void __cdecl
UE::Trace::SetMemoryHooks
          (_func___cdecl_void_ptr_ulong64_uint *param_1,_func___cdecl_void_void_ptr_ulong64 *param_2
          )

{
  Private::AllocHook = param_1;
  Private::FreeHook = param_2;
  return;
}

// SetMessageCallback @ 14146a520

/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::SetMessageCallback(_func___cdecl_void_FMessageEvent_ptr *param_1)

{
  Private::GMessageFunc = param_1;
  return;
}

// SetUpdateCallback @ 14146a530

void __cdecl UE::Trace::SetUpdateCallback(_func___cdecl_void *param_1)

{
  Private::GOnUpdate = param_1;
  return;
}

// Shutdown @ 14146a680

void __cdecl UE::Trace::Shutdown(void)

{
  FPoolPage *pFVar1;
  FCacheBuffer *pFVar2;
  FPoolPage *_Memory;
  FCacheBuffer *_Memory_00;
  ulong64 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  if (Private::GInitialized) {
    Private::Writer_WorkerJoin();
    if (Private::GDataHandle != 0) {
      (*Private::GWriterState.Close)(Private::GDataHandle);
      Private::GDataHandle = 0;
    }
    _Memory = Private::GPoolPageList;
    uVar3 = 0;
    if (Private::GControlListen != 0) {
      CloseHandle((HANDLE)(Private::GControlListen - 1));
      Private::GControlListen = 0;
      _Memory = Private::GPoolPageList;
      uVar3 = Private::GControlListen;
    }
    while (Private::GControlListen = uVar3, _Memory != (FPoolPage *)0x0) {
      pFVar1 = _Memory->NextPage;
      LOCK();
      Private::GTraceStatistics.BlockPoolAllocated =
           Private::GTraceStatistics.BlockPoolAllocated - _Memory->AllocSize;
      UNLOCK();
      LOCK();
      Private::GPoolTotalAllocated = Private::GPoolTotalAllocated - _Memory->AllocSize;
      UNLOCK();
      uVar5 = _Memory->AllocSize;
      if (Private::FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
        _aligned_free(_Memory);
      }
      else {
        (*Private::FreeHook)(_Memory,(ulonglong)uVar5);
      }
      LOCK();
      Private::GTraceStatistics.MemoryUsed = Private::GTraceStatistics.MemoryUsed - uVar5;
      UNLOCK();
      _Memory = pFVar1;
      uVar3 = Private::GControlListen;
    }
    iVar6 = 0;
    _Memory_00 = Private::GCacheHeadBuffer;
    while (_Memory_00 != (FCacheBuffer *)0x0) {
      uVar5 = _Memory_00->Size + 0x20;
      pFVar2 = (_Memory_00->field0_0x0).Next;
      if (Private::FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
        _aligned_free(_Memory_00);
      }
      else {
        (*Private::FreeHook)(_Memory_00,(ulonglong)uVar5);
      }
      LOCK();
      Private::GTraceStatistics.MemoryUsed = Private::GTraceStatistics.MemoryUsed - uVar5;
      UNLOCK();
      iVar6 = iVar6 + uVar5;
      _Memory_00 = pFVar2;
    }
    if (Private::FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(Private::GCacheActiveBuffer);
    }
    else {
      (*Private::FreeHook)(Private::GCacheActiveBuffer,0x10000);
    }
    LOCK();
    Private::GTraceStatistics.MemoryUsed = Private::GTraceStatistics.MemoryUsed - 0x10000;
    UNLOCK();
    if (Private::FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(Private::GCacheCollector);
    }
    else {
      (*Private::FreeHook)(Private::GCacheCollector,0x400);
    }
    LOCK();
    Private::GTraceStatistics.MemoryUsed = Private::GTraceStatistics.MemoryUsed - 0x400;
    UNLOCK();
    LOCK();
    Private::GTraceStatistics.CacheAllocated =
         Private::GTraceStatistics.CacheAllocated + (-0x10400 - iVar6);
    UNLOCK();
    uVar4 = (ulonglong)Private::GPacketRing.Size;
    if (Private::FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(Private::GPacketRing.Data);
    }
    else {
      (*Private::FreeHook)(Private::GPacketRing.Data,uVar4);
    }
    LOCK();
    Private::GTraceStatistics.MemoryUsed = Private::GTraceStatistics.MemoryUsed - uVar4;
    UNLOCK();
    LOCK();
    Private::GTraceStatistics.FixedBufferAllocated =
         Private::GTraceStatistics.FixedBufferAllocated - Private::GPacketRing.Size;
    UNLOCK();
    Private::GPacketRing.Data = (uchar *)0x0;
    Private::GInitialized = false;
  }
  return;
}

// StartWorkerThread @ 14146a690

void __cdecl UE::Trace::StartWorkerThread(void)

{
  if (Private::GWorkerThread == 0) {
    Private::GWorkerThread =
         (ulong64)CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                               `UE::Trace::Private::ThreadCreate'::__l2::<lambda_1>::
                               <lambda_invoker_cdecl>,Private::Writer_WorkerThread,0,(LPDWORD)0x0);
  }
  return;
}

// Stop @ 14146a6e0

bool __cdecl UE::Trace::Stop(void)

{
  if ((Private::GPendingDataHandle == 0) && (Private::GDataHandle != 0)) {
    Private::GPendingDataHandle = 0xffffffffffffffff;
    return true;
  }
  return false;
}

// TcpSocketAccept @ 14146a710

int __cdecl UE::Trace::Private::TcpSocketAccept(ulong64 param_1,ulong64 *param_2)

{
  int iVar1;
  DWORD dwErrCode;
  SOCKET s;
  u_long local_res8 [2];
  
  s = accept(param_1 - 1,(sockaddr *)0x0,(int *)0x0);
  if (s == 0xffffffffffffffff) {
    iVar1 = WSAGetLastError();
    return -(uint)(iVar1 != 0x2733);
  }
  local_res8[0] = 0;
  iVar1 = ioctlsocket(s,-0x7ffb9982,local_res8);
  if (iVar1 == -1) {
    dwErrCode = GetLastError();
    closesocket(s);
    SetLastError(dwErrCode);
    return 0;
  }
  *param_2 = s + 1;
  return 1;
}

// TcpSocketConnect @ 14146a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl UE::Trace::Private::TcpSocketConnect(char *param_1,ushort param_2)

{
  longlong lVar1;
  u_short uVar2;
  int iVar3;
  DWORD dwErrCode;
  SOCKET s;
  ulong64 uVar4;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  u_long local_1f8 [2];
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  WSADATA local_1b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_228;
  WSAStartup(0x202,&local_1b8);
  local_1e4 = 2;
  local_1e0 = 1;
  uVar4 = 0;
  local_1dc = 6;
  local_1e8 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  iVar3 = getaddrinfo(param_1,0,&local_1e8,&local_1f0);
  if (iVar3 == 0) {
    lVar1 = *(longlong *)(local_1f0 + 0x20);
    uVar2 = htons(param_2);
    local_200 = 0x80;
    *(u_short *)(lVar1 + 2) = uVar2;
    local_208 = 0;
    s = WSASocketW(2,1,6,0);
    if (s != 0xffffffffffffffff) {
      iVar3 = connect(s,*(sockaddr **)(local_1f0 + 0x20),*(int *)(local_1f0 + 0x10));
      if (iVar3 != -1) {
        local_1f8[0] = 0;
        iVar3 = ioctlsocket(s,-0x7ffb9982,local_1f8);
        if (iVar3 != -1) {
          uVar4 = s + 1;
          goto LAB_14146a8e1;
        }
      }
      dwErrCode = GetLastError();
      closesocket(s);
      SetLastError(dwErrCode);
    }
  }
LAB_14146a8e1:
  freeaddrinfo(local_1f0);
  return uVar4;
}

// TcpSocketHasData @ 14146a920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::Trace::Private::TcpSocketHasData(ulong64 param_1)

{
  int iVar1;
  undefined1 auStackY_268 [32];
  timeval local_238 [2];
  fd_set local_228;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_228.fd_array[0] = param_1 - 1;
  local_228.fd_count = 1;
  memset(local_228.fd_array + 1,0,0x1f8);
  local_238[0].tv_sec = 0;
  local_238[0].tv_usec = 0;
  iVar1 = select(0,&local_228,(fd_set *)0x0,(fd_set *)0x0,local_238);
  return iVar1 != 0;
}

// TcpSocketListen @ 14146a9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl UE::Trace::Private::TcpSocketListen(ushort param_1)

{
  int iVar1;
  DWORD dwErrCode;
  SOCKET s;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  u_long local_1d8 [2];
  sockaddr local_1d0;
  WSADATA local_1b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  WSAStartup(0x202,&local_1b8);
  local_1e0 = 0x80;
  local_1e8 = 0;
  s = WSASocketW(2,1,6,0);
  if (s != 0xffffffffffffffff) {
    local_1d0.sa_family = 2;
    local_1d0.sa_data[2] = '\0';
    local_1d0.sa_data[3] = '\0';
    local_1d0.sa_data[4] = '\0';
    local_1d0.sa_data[5] = '\0';
    local_1d0.sa_data._0_2_ = htons(param_1);
    iVar1 = bind(s,&local_1d0,0x10);
    if ((iVar1 != -1) && (iVar1 = listen(s,1), iVar1 != -1)) {
      local_1d8[0] = 1;
      iVar1 = ioctlsocket(s,-0x7ffb9982,local_1d8);
      if (iVar1 != -1) {
        return s + 1;
      }
    }
    dwErrCode = GetLastError();
    closesocket(s);
    SetLastError(dwErrCode);
  }
  return 0;
}

// ThreadCreate @ 14146aad0

ulong64 __cdecl UE::Trace::Private::ThreadCreate(char *param_1,_func___cdecl_void *param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                        `UE::Trace::Private::ThreadCreate'::__l2::<lambda_1>::<lambda_invoker_cdecl>
                        ,param_2,0,(LPDWORD)0x0);
  return (ulong64)pvVar1;
}

// ThreadDestroy @ 14146ab00

BOOL __stdcall UE::Trace::Private::ThreadDestroy(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014146ab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}

// ThreadGroupBegin @ 14146ab10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::ThreadGroupBegin(wchar_t *param_1)

{
  wchar_t wVar1;
  int *piVar2;
  ulonglong *puVar3;
  int iVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  FImportantLogScope local_88;
  ulonglong local_78 [12];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar3 = local_78;
  pwVar5 = param_1;
  do {
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar3 = (ulonglong *)((longlong)puVar3 + 1);
  } while (puVar3 != local_18);
  uVar6 = (longlong)pwVar5 - (longlong)param_1 >> 1;
  if (-1 < TraceLogChannel->Enabled) {
    Private::FImportantLogScope::Enter<UE::Trace::F_TraceThreadGroupBeginFields>
              (&local_88,(uint)uVar6);
    if ((int)(uint)uVar6 < 0) {
      uVar6 = 0;
      wVar1 = *param_1;
      pwVar5 = param_1;
      while (wVar1 != L'\0') {
        pwVar5 = pwVar5 + 1;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        wVar1 = *pwVar5;
      }
    }
    iVar4 = (int)uVar6;
    piVar2 = (int *)(local_88.Ptr + local_88.AuxCursor);
    *piVar2 = iVar4 << 0xd;
    *(undefined1 *)piVar2 = 1;
    piVar2 = piVar2 + 1;
    if (0 < iVar4) {
      uVar6 = uVar6 & 0xffffffff;
      do {
        wVar1 = *param_1;
        param_1 = param_1 + 1;
        *(char *)piVar2 = (char)wVar1;
        piVar2 = (int *)((longlong)piVar2 + 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    local_88.Ptr[(longlong)(local_88.AuxCursor + iVar4) + 4] = '\x03';
    LOCK();
    *(int *)(local_88.Ptr + local_88.BufferOffset) =
         *(int *)(local_88.Ptr + local_88.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// ThreadGroupEnd @ 14146ac30

void __cdecl UE::Trace::ThreadGroupEnd(void)

{
  FImportantLogScope local_18;
  
  if (-1 < TraceLogChannel->Enabled) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'::
        __l2::Uid = F$TraceThreadGroupEndFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    Private::FImportantLogScope::EnterImpl
              (&local_18,
               `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
               ::__l2::Uid >> 1,0);
    LOCK();
    *(int *)(local_18.Ptr + local_18.BufferOffset) =
         *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// ThreadJoin @ 14146acd0

void __cdecl UE::Trace::Private::ThreadJoin(ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014146acd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject((HANDLE)param_1,0xffffffff);
  return;
}

// ThreadRegister @ 14146acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::ThreadRegister(wchar_t *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  wchar_t wVar2;
  longlong lVar3;
  uchar *puVar4;
  size_t sVar5;
  ulonglong *puVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  FImportantLogScope local_98;
  ulonglong local_88 [11];
  undefined1 local_29;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar3 + 0x28);
  if (iVar9 == 0) {
    LOCK();
    UNLOCK();
    iVar9 = ::Counter + 2;
    ::Counter = ::Counter + 1;
    *(int *)(lVar3 + 0x28) = iVar9;
  }
  puVar6 = local_88;
  pwVar8 = param_1;
  do {
    wVar2 = *pwVar8;
    pwVar8 = pwVar8 + 1;
    *(byte *)puVar6 = (byte)wVar2 & 0x7f;
    if ((wVar2 & 0x7fU) == 0) break;
    puVar6 = (ulonglong *)((longlong)puVar6 + 1);
  } while (puVar6 != local_28);
  uVar7 = (uint)((longlong)pwVar8 - (longlong)param_1 >> 1);
  local_29 = 0;
  if (-1 < TraceLogChannel->Enabled) {
    Private::FImportantLogScope::Enter<UE::Trace::F_TraceThreadInfoFields>(&local_98,uVar7);
    puVar4 = local_98.Ptr;
    *(int *)local_98.Ptr = iVar9;
    *(uint *)((longlong)local_98.Ptr + 4) = param_2;
    *(int *)((longlong)local_98.Ptr + 8) = param_3;
    if ((int)uVar7 < 0) {
      sVar5 = strlen((char *)local_88);
      uVar7 = (uint)sVar5;
    }
    puVar1 = (uint *)((longlong)puVar4 + (longlong)local_98.AuxCursor);
    *puVar1 = uVar7 << 0xd | 0x300;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,local_88,(longlong)(int)uVar7);
    *(undefined1 *)((longlong)(int)(local_98.AuxCursor + uVar7) + 4 + (longlong)puVar4) = 3;
    LOCK();
    *(int *)((longlong)local_98.BufferOffset + (longlong)local_98.Ptr) =
         *(int *)((longlong)local_98.BufferOffset + (longlong)local_98.Ptr) + 1;
    UNLOCK();
  }
  return;
}

// ThreadSleep @ 14146ae60

void __stdcall UE::Trace::Private::ThreadSleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00014146ae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}

// TimeGetFrequency @ 14146ae70

ulong64 __cdecl UE::Trace::Private::TimeGetFrequency(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceFrequency(local_res8);
  return local_res8[0].QuadPart;
}

// TimeGetRelativeTimestamp @ 14146ae90

ulong64 __cdecl UE::Trace::Private::TimeGetRelativeTimestamp(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (GStartCycle != 0) {
    QueryPerformanceCounter(local_res8);
    return local_res8[0].QuadPart - GStartCycle;
  }
  return 0;
}

// TimeGetTimestamp @ 14146aed0

ulong64 __cdecl UE::Trace::Private::TimeGetTimestamp(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return local_res8[0].QuadPart;
}

// ToggleChannel @ 14146b210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::Trace::ToggleChannel(wchar_t *param_1,bool param_2)

{
  char cVar1;
  wchar_t wVar2;
  FChannel *this;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  FChannel **ppFVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  FChannel *local_68;
  undefined8 local_60;
  FChannel *local_58 [7];
  undefined1 local_19;
  FChannel *local_18 [2];
  
  local_18[0] = (FChannel *)(__security_cookie.value ^ (ulonglong)auStack_88);
  ppFVar7 = local_58;
  do {
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    *(byte *)ppFVar7 = (byte)wVar2 & 0x7f;
    if ((wVar2 & 0x7fU) == 0) break;
    ppFVar7 = (FChannel **)((longlong)ppFVar7 + 1);
  } while (ppFVar7 != local_18);
  local_19 = 0;
  sVar5 = strlen((char *)local_58);
  uVar9 = sVar5 & 0xffffffff;
  if ((7 < uVar9) &&
     (iVar4 = strcmp((char *)((longlong)local_58 + (uVar9 - 7)),"Channel"), iVar4 == 0)) {
    uVar9 = uVar9 - 7;
  }
  ppFVar7 = local_58;
  iVar4 = (int)uVar9;
  if (0 < iVar4) {
    uVar9 = uVar9 & 0xffffffff;
    if ((*(byte *)((longlong)local_58 + (longlong)iVar4 + -1) | 0x20) == 0x73) {
      uVar9 = (ulonglong)(iVar4 - 1);
    }
  }
  uVar6 = 0x811c9dc5;
  uVar8 = (uint)uVar9;
  while (uVar8 != 0) {
    cVar1 = *(char *)ppFVar7;
    ppFVar7 = (FChannel **)((longlong)ppFVar7 + 1);
    uVar6 = (((int)cVar1 | 0x20U) ^ uVar6) * 0x1000193;
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
  }
  local_60 = GHeadChannel;
  ppFVar7 = &local_68;
  local_68 = GNewChannelList;
  this = GNewChannelList;
  while( true ) {
    for (; this != (FChannel *)0x0; this = this->Next) {
      if ((this->Name).Hash == uVar6) {
        bVar3 = FChannel::ToggleInternal(this,param_2,true,(wchar_t **)0x0);
        return bVar3;
      }
    }
    ppFVar7 = ppFVar7 + 1;
    if (ppFVar7 == local_58) break;
    this = *ppFVar7;
  }
  return false;
}

// Update @ 14146b5d0

void __cdecl UE::Trace::Update(void)

{
  bool bVar1;
  
  if (Private::GWorkerThread == 0) {
    LOCK();
    bVar1 = Private::GUpdateInProgress == 0;
    if (bVar1) {
      Private::GUpdateInProgress = 1;
    }
    UNLOCK();
    if (bVar1) {
      Private::Writer_WorkerUpdateInternal();
      LOCK();
      Private::GUpdateInProgress = 0;
      UNLOCK();
    }
  }
  return;
}

// WriteSnapshotTo @ 14146b610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UE::Trace::WriteSnapshotTo(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  ulonglong *puVar3;
  undefined1 auStack_258 [32];
  FSnapshotTarget local_238;
  ulonglong local_218 [63];
  undefined1 local_19;
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  puVar3 = local_218;
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    *(byte *)puVar3 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar3 = (ulonglong *)((longlong)puVar3 + 1);
  } while (puVar3 != local_18);
  local_238.field1_0x8.Host.Host = (char *)local_218;
  local_19 = 0;
  local_238.Type = FileTarget;
  bVar2 = Private::Writer_WriteSnapshot(&local_238);
  return bVar2;
}

// WriteTo @ 14146b690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

bool __cdecl UE::Trace::WriteTo(wchar_t *param_1,ushort param_2)

{
  wchar_t wVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined1 auStackY_578 [32];
  FMessageEvent local_538;
  byte local_518 [768];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_578;
  pbVar5 = local_518;
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    *pbVar5 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 != local_518 + 0x200);
  local_518[0x1ff] = 0;
  if (Private::GPendingDataHandle == 0) {
    Private::Writer_InternalInitialize();
    pvVar3 = CreateFileA((LPCSTR)local_518,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                         (HANDLE)0x0);
    uVar4 = 0;
    if (pvVar3 != (HANDLE)0xffffffffffffffff) {
      uVar4 = (longlong)pvVar3 + 1;
    }
    if (uVar4 != 0) {
      if ((uVar4 & 0xffff000000000000) != 0) {
        (*Private::GWriterState.Close)(uVar4);
        return false;
      }
      Private::GPendingDataHandle = (ulonglong)param_2 << 0x30 | uVar4;
      Private::GPendingWriterState.Write = Private::IoWrite;
      Private::GPendingWriterState.Close = Private::IoClose;
      return true;
    }
    DVar2 = GetLastError();
    DVar2 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar2,0,(LPSTR)(local_518 + 0x200),0x100,
                           (va_list *)0x0);
    if (DVar2 == 0) {
      GetLastError();
      snprintf(local_218,0x200,"(error code %d)");
    }
    else {
      snprintf(local_218,0x200,"Opening file (%s): \'%s\'");
    }
    if (Private::GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_538.Type = FileOpenError;
      local_538.TypeStr = "FileOpenError";
      local_538.Description = local_218;
      (*Private::GMessageFunc)(&local_538);
    }
  }
  return false;
}

// Writer_AllocateBlockFromPool @ 14146b870

/* WARNING: Removing unreachable block (ram,0x00014146b8a3) */
/* WARNING: Removing unreachable block (ram,0x00014146b8dc) */
/* WARNING: Removing unreachable block (ram,0x00014146b8b0) */

FWriteBuffer * __cdecl UE::Trace::Private::Writer_AllocateBlockFromPool(void)

{
  FWriteBuffer *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FPoolPage *pFVar4;
  FWriteBuffer *pFVar5;
  FWriteBuffer *pFVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar2 = 0;
LAB_14146b890:
  do {
    if (GPoolFreeList != (FWriteBuffer *)0x0) {
      LOCK();
      UNLOCK();
      LOCK();
      GTraceStatistics.BlockPoolFreeBlocks = GTraceStatistics.BlockPoolFreeBlocks - 1;
      UNLOCK();
      pFVar6 = GPoolFreeList;
      GPoolFreeList = GPoolFreeList->NextBuffer;
LAB_14146b8f8:
      if (uVar2 != 0) {
        uVar3 = TimeGetRelativeTimestamp();
        LogStall(uVar2,uVar3);
      }
      return pFVar6;
    }
    if (GPoolMaxSize <= GPoolTotalAllocated) {
      if (uVar2 == 0) {
        uVar2 = TimeGetRelativeTimestamp();
      }
      goto LAB_14146b890;
    }
    if (GPoolFutex == 0) {
      LOCK();
      GPoolFutex = 1;
      UNLOCK();
      pFVar4 = Writer_MemoryAllocate(0x10000,0x40);
      LOCK();
      GTraceStatistics.BlockPoolAllocated = GTraceStatistics.BlockPoolAllocated + 0x10000;
      UNLOCK();
      LOCK();
      GPoolTotalAllocated = GPoolTotalAllocated + 0x10000;
      UNLOCK();
      pFVar6 = (FWriteBuffer *)(pFVar4 + 0xfc);
      lVar7 = 0xf;
      *(undefined2 *)&pFVar4[0xff].field_0xc = 0xfbc;
      pFVar1 = pFVar6;
      do {
        pFVar5 = pFVar1;
        pFVar5->NextBuffer = pFVar5 + 0x40;
        pFVar5[0x40].Size = 0xfbc;
        lVar7 = lVar7 + -1;
        pFVar1 = pFVar5 + 0x40;
      } while (lVar7 != 0);
      LOCK();
      GTraceStatistics.BlockPoolAllocatedBlocks = GTraceStatistics.BlockPoolAllocatedBlocks + 0x10;
      UNLOCK();
      *(short *)&pFVar4[0xff].field_0xc = *(short *)&pFVar4[0xff].field_0xc + -0x10;
      pFVar4->NextPage = GPoolPageList;
      pFVar4->AllocSize = 0x10000;
      GPoolPageList = pFVar4;
      do {
        pFVar1 = GPoolFreeList;
        pFVar5[0x40].NextBuffer = GPoolFreeList;
        LOCK();
        bVar8 = pFVar1 != GPoolFreeList;
        pFVar1 = *(FWriteBuffer **)&pFVar4[0xfd].AllocSize;
        if (bVar8) {
          pFVar1 = GPoolFreeList;
        }
        GPoolFreeList = pFVar1;
        UNLOCK();
      } while (bVar8);
      LOCK();
      GTraceStatistics.BlockPoolFreeBlocks = GTraceStatistics.BlockPoolFreeBlocks + 0xf;
      UNLOCK();
      do {
        LOCK();
        bVar8 = GPoolFutex == 1;
        if (bVar8) {
          GPoolFutex = 0;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_14146b8f8;
    }
    Sleep(0);
  } while( true );
}

// Writer_AnnounceChannels @ 14146ba10

/* WARNING: Removing unreachable block (ram,0x00014146ba53) */
/* WARNING: Removing unreachable block (ram,0x00014146ba60) */

void __cdecl UE::Trace::Private::Writer_AnnounceChannels(void)

{
  FChannel *pFVar1;
  char *_Str;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  FChannel *pFVar6;
  FChannel *pFVar7;
  FChannel *pFVar8;
  longlong lVar9;
  bool bVar10;
  FImportantLogScope local_38;
  size_t sVar5;
  
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_AnnounceChannels");
  }
  pFVar8 = GNewChannelList;
  pFVar6 = (FChannel *)0x0;
  pFVar1 = pFVar6;
  pFVar7 = pFVar6;
  if (GNewChannelList != (FChannel *)0x0) {
    LOCK();
    GNewChannelList = (FChannel *)0x0;
    UNLOCK();
    pFVar6 = pFVar8;
    pFVar1 = pFVar8;
    pFVar7 = pFVar8;
  }
  while (pFVar8 = pFVar1, pFVar8 != (FChannel *)0x0) {
    pFVar1 = pFVar8->Next;
    if (pFVar1 != (FChannel *)0x0) {
      pFVar6 = pFVar1;
    }
    if (-1 < TraceLogChannel->Enabled) {
      FImportantLogScope::Enter<UE::Trace::FTraceChannelAnnounceFields>
                (&local_38,(pFVar8->Name).Len);
      puVar2 = local_38.Ptr;
      *(uint *)local_38.Ptr = (pFVar8->Name).Hash;
      *(byte *)((longlong)local_38.Ptr + 4) = (byte)((uint)pFVar8->Enabled >> 0x1f) ^ 1;
      *(bool *)((longlong)local_38.Ptr + 5) = (pFVar8->Args).bReadOnly;
      uVar4 = (pFVar8->Name).Len;
      _Str = (pFVar8->Name).Ptr;
      if ((int)uVar4 < 0) {
        sVar5 = strlen(_Str);
        uVar4 = (uint)sVar5;
      }
      iVar3 = local_38.AuxCursor;
      lVar9 = (longlong)local_38.AuxCursor;
      *(uint *)(lVar9 + (longlong)puVar2) = uVar4 << 0xd | 0x300;
      *(undefined1 *)(lVar9 + (longlong)puVar2) = 1;
      memcpy((void *)(lVar9 + 4 + (longlong)puVar2),_Str,(longlong)(int)uVar4);
      local_38.AuxCursor = iVar3 + uVar4 + 4;
      *(undefined1 *)((longlong)(int)(iVar3 + uVar4) + 4 + (longlong)puVar2) = 3;
      LOCK();
      *(int *)((longlong)local_38.BufferOffset + (longlong)local_38.Ptr) =
           *(int *)((longlong)local_38.BufferOffset + (longlong)local_38.Ptr) + 1;
      UNLOCK();
    }
  }
  if (pFVar6 != (FChannel *)0x0) {
    do {
      pFVar1 = GHeadChannel;
      pFVar6->Next = GHeadChannel;
      LOCK();
      bVar10 = pFVar1 != GHeadChannel;
      pFVar1 = pFVar7;
      if (bVar10) {
        pFVar1 = GHeadChannel;
      }
      GHeadChannel = pFVar1;
      UNLOCK();
    } while (bVar10);
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014146bba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*FProfilerScope::OnScopeEnd)();
    return;
  }
  return;
}

// Writer_CacheData @ 14146bbc0

void __cdecl UE::Trace::Private::Writer_CacheData(uchar *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  FCacheBuffer *pFVar3;
  int iVar4;
  FCacheBuffer *pFVar5;
  uint uVar6;
  FCacheBuffer *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_CacheData");
  }
  Writer_SendData(1,param_1,param_2);
  pFVar7 = GCacheCollector;
  if (GCacheCollector != (FCacheBuffer *)0x0) {
    while( true ) {
      uVar9 = pFVar7->Remaining;
      uVar2 = param_2;
      if (uVar9 <= param_2) {
        uVar2 = uVar9;
      }
      memcpy((void *)((longlong)pFVar7[1]._Unused + ((ulonglong)(pFVar7->Size - uVar9) - 0x10)),
             param_1,(ulonglong)uVar2);
      puVar1 = &pFVar7->Remaining;
      *puVar1 = *puVar1 - uVar2;
      if (*puVar1 == 0) {
        if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
          (*FProfilerScope::OnScopeBegin)("Writer_CacheCommit");
        }
        uVar9 = pFVar7->Size - pFVar7->Remaining;
        if (uVar9 < 0x7e000001) {
          uVar8 = (ulonglong)(uVar9 / 0xff + 0x10 + uVar9);
        }
        else {
          uVar8 = 0;
        }
        if ((ulonglong)GCacheActiveBuffer->Remaining < uVar8 + 6) {
          LOCK();
          GTraceStatistics.CacheWaste = GTraceStatistics.CacheWaste + GCacheActiveBuffer->Remaining;
          UNLOCK();
          *(GCacheActiveBuffer->field0_0x0).TailNext = GCacheActiveBuffer;
          (GCacheActiveBuffer->field0_0x0).Next = (FCacheBuffer *)0x0;
          pFVar5 = Writer_MemoryAllocate(0x10020,0x10);
          LOCK();
          GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + 0x10020;
          UNLOCK();
          (pFVar5->field0_0x0).Next = GCacheActiveBuffer;
          pFVar5->Size = 0x10000;
          pFVar5->Remaining = 0x10000;
          GCacheActiveBuffer = pFVar5;
        }
        pFVar5 = GCacheActiveBuffer;
        uVar6 = GCacheActiveBuffer->Size - GCacheActiveBuffer->Remaining;
        uVar10 = (ulonglong)uVar6;
        iVar4 = Encode(pFVar7 + 1,uVar9,
                       (void *)((longlong)GCacheActiveBuffer[1]._Unused + ((ulonglong)uVar6 - 10)),
                       (int)uVar8);
        pFVar3 = GCacheActiveBuffer;
        if (iVar4 < 1) {
          pFVar5 = GCacheActiveBuffer + 1;
          *(undefined2 *)((longlong)GCacheActiveBuffer[1]._Unused + (uVar10 - 0xe)) = 1;
          *(short *)((longlong)pFVar3[1]._Unused + (uVar10 - 0x10)) = (short)uVar9 + 4;
          memcpy((void *)((longlong)pFVar5->_Unused + (uVar10 - 0xc)),pFVar7 + 1,(ulonglong)uVar9);
          iVar4 = uVar9 + 4;
        }
        else {
          *(short *)((longlong)pFVar5[1]._Unused + ((ulonglong)uVar6 - 0xc)) = (short)uVar9;
          *(short *)((longlong)pFVar5[1]._Unused + ((ulonglong)uVar6 - 0x10)) = (short)iVar4 + 6;
          iVar4 = iVar4 + 6;
          *(undefined2 *)((longlong)pFVar5[1]._Unused + ((ulonglong)uVar6 - 0xe)) = 0x8001;
        }
        puVar1 = &pFVar3->Remaining;
        *puVar1 = *puVar1 - iVar4;
        LOCK();
        GTraceStatistics.CacheUsed = GTraceStatistics.CacheUsed + iVar4;
        UNLOCK();
        if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
          (*FProfilerScope::OnScopeEnd)();
        }
        pFVar7 = GCacheCollector;
        GCacheCollector->Remaining = GCacheCollector->Size;
      }
      param_2 = param_2 - uVar2;
      if (param_2 == 0) break;
      param_1 = param_1 + uVar2;
    }
  }
  if (FProfilerScope::OnScopeEnd == (_func___cdecl_void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146bde3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*FProfilerScope::OnScopeEnd)();
  return;
}

// Writer_CacheOnConnect @ 14146be00

void __cdecl UE::Trace::Private::Writer_CacheOnConnect(void)

{
  FCacheBuffer *pFVar1;
  uint uVar2;
  _func___cdecl_void_char_ptr *p_Var3;
  uint uVar4;
  
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_CacheOnConnect");
  }
  p_Var3 = FProfilerScope::OnScopeBegin;
  pFVar1 = GCacheHeadBuffer;
  if (GCacheCollector != (FCacheBuffer *)0x0) {
    for (; pFVar1 != (FCacheBuffer *)0x0; pFVar1 = (pFVar1->field0_0x0).Next) {
      uVar4 = pFVar1->Size;
      uVar2 = pFVar1->Remaining;
      if (GDataHandle != 0) {
        if (p_Var3 != (_func___cdecl_void_char_ptr *)0x0) {
          (*p_Var3)("Writer_SendDataRaw");
        }
        Writer_SendDataImplNoInstr(pFVar1 + 1,uVar4 - uVar2);
        p_Var3 = FProfilerScope::OnScopeBegin;
        if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
          (*FProfilerScope::OnScopeEnd)();
          p_Var3 = FProfilerScope::OnScopeBegin;
        }
      }
    }
    uVar4 = GCacheActiveBuffer->Size - GCacheActiveBuffer->Remaining;
    if ((uVar4 != 0) && (pFVar1 = GCacheActiveBuffer + 1, GDataHandle != 0)) {
      if (p_Var3 != (_func___cdecl_void_char_ptr *)0x0) {
        (*p_Var3)("Writer_SendDataRaw");
      }
      Writer_SendDataImplNoInstr(pFVar1,uVar4);
      if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
        (*FProfilerScope::OnScopeEnd)();
      }
    }
    uVar4 = GCacheCollector->Size - GCacheCollector->Remaining;
    if (uVar4 != 0) {
      Writer_SendData(1,(uchar *)(GCacheCollector + 1),uVar4);
    }
  }
  if (FProfilerScope::OnScopeEnd == (_func___cdecl_void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146bf1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*FProfilerScope::OnScopeEnd)();
  return;
}

// Writer_CallbackOnConnect @ 14146bf30

void __cdecl UE::Trace::Private::Writer_CallbackOnConnect(void)

{
  ushort uVar1;
  ushort uVar2;
  FWriteBuffer *pFVar3;
  uchar *puVar4;
  FWriteBuffer *pFVar5;
  ulong64 uVar6;
  FWriteBuffer *pFVar7;
  FWriteBuffer *pFVar8;
  FWriteBuffer *pFVar9;
  FWriteBuffer *pFVar10;
  uint uVar11;
  FWriteBuffer *pFVar12;
  bool bVar13;
  
  uVar6 = GDataHandle;
  pFVar8 = GActiveThreadList;
  if (GOnConnection != (_func___cdecl_void *)0x0) {
    pFVar9 = (FWriteBuffer *)0x0;
    GDataHandle = 0;
    pFVar10 = *(FWriteBuffer **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x20);
    if (pFVar10 != &GNullWriteBuffer) {
      uVar1 = pFVar10->ThreadId;
      GActiveThreadList = (FWriteBuffer *)0x0;
      pFVar10 = pFVar9;
      pFVar12 = pFVar9;
      if (pFVar8 != (FWriteBuffer *)0x0) {
        do {
          uVar2 = pFVar8->ThreadId;
          pFVar3 = pFVar8->NextThread;
          pFVar5 = pFVar8;
          pFVar7 = pFVar10;
          if ((uint)uVar2 == (uint)uVar1) {
            do {
              pFVar8 = pFVar5;
              puVar4 = pFVar8->Committed;
              uVar11 = (int)puVar4 - *(int *)&pFVar8->Reaped;
              if (uVar11 != 0) {
                GTraceStatistics.BytesTraced = uVar11 + GTraceStatistics.BytesTraced;
                Writer_TailAppend((uint)uVar2,pFVar8->Reaped,uVar11);
                pFVar8->Reaped = puVar4;
              }
              pFVar7 = pFVar10;
              if (puVar4 < (uchar *)((longlong)pFVar8 - (longlong)pFVar8->EtxOffset))
              goto LAB_14146c045;
              pFVar5 = pFVar8->NextBuffer;
              pFVar8->NextBuffer = pFVar9;
              pFVar7 = pFVar8;
              if (pFVar10 != (FWriteBuffer *)0x0) {
                pFVar7 = pFVar10;
              }
              pFVar12 = (FWriteBuffer *)(ulonglong)((int)pFVar12 + 1);
              pFVar9 = pFVar8;
              pFVar10 = pFVar7;
            } while (pFVar5 != (FWriteBuffer *)0x0);
          }
          else {
LAB_14146c045:
            pFVar8->NextThread = GActiveThreadList;
            GActiveThreadList = pFVar8;
          }
          pFVar8 = pFVar3;
          pFVar10 = pFVar7;
        } while (pFVar3 != (FWriteBuffer *)0x0);
        if (pFVar9 != (FWriteBuffer *)0x0) {
          do {
            pFVar8 = GPoolFreeList;
            pFVar7->NextBuffer = GPoolFreeList;
            LOCK();
            bVar13 = pFVar8 != GPoolFreeList;
            pFVar8 = pFVar9;
            if (bVar13) {
              pFVar8 = GPoolFreeList;
            }
            GPoolFreeList = pFVar8;
            UNLOCK();
          } while (bVar13);
          LOCK();
          GTraceStatistics.BlockPoolFreeBlocks = GTraceStatistics.BlockPoolFreeBlocks + (int)pFVar12
          ;
          UNLOCK();
        }
      }
    }
    GDataHandle = uVar6;
    (*GOnConnection)();
  }
  return;
}

// Writer_ControlRecv @ 14146c0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::Private::Writer_ControlRecv(void)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *lpBuffer;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStackY_4e8 [32];
  timeval local_4b8 [2];
  fd_set local_4a8;
  char *local_298;
  undefined1 local_290 [120];
  char local_218 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_4a8.fd_array[0] = GControlSocket - 1;
  local_4a8.fd_count = 1;
  lpBuffer = local_218;
  memset(local_4a8.fd_array + 1,0,0x1f8);
  uVar9 = 0;
  local_4b8[0].tv_sec = 0;
  local_4b8[0].tv_usec = 0;
  iVar2 = select(0,&local_4a8,(fd_set *)0x0,(fd_set *)0x0,local_4b8);
  while( true ) {
    if (iVar2 == 0) {
      return;
    }
    local_4b8[0] = (timeval)((ulonglong)local_4b8[0] & 0xffffffff00000000);
    BVar3 = ReadFile((HANDLE)(GControlSocket - 1),lpBuffer,(int)local_18 - (int)lpBuffer,
                     (LPDWORD)local_4b8,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) break;
    lVar4 = (longlong)local_4b8[0].tv_sec;
    if (local_4b8[0].tv_sec < 1) break;
    pcVar11 = local_218;
    uVar5 = uVar9;
    uVar10 = uVar9;
    for (pcVar8 = local_218; pcVar8 < lpBuffer + lVar4; pcVar8 = pcVar8 + 1) {
      iVar2 = (int)uVar5;
      if (iVar2 == 0) {
        if ((*pcVar8 != '\n') && (*pcVar8 != '\r')) {
          uVar5 = 1;
          goto LAB_14146c213;
        }
      }
      else {
        if (iVar2 == 1) {
LAB_14146c213:
          if ((*pcVar8 == ' ') || (*pcVar8 == '\0')) goto LAB_14146c2f6;
          uVar6 = uVar10;
          if ((uint)uVar10 < 0x10) {
            uVar6 = (ulonglong)((uint)uVar10 + 1);
            *(char **)(local_290 + uVar10 * 8 + -8) = pcVar8;
          }
          uVar5 = 2;
          uVar10 = uVar6;
        }
        else if (iVar2 != 2) goto LAB_14146c2f6;
        cVar1 = *pcVar8;
        if ((cVar1 == ' ') || (cVar1 == '\0')) {
          *pcVar8 = '\0';
          uVar5 = 1;
        }
        else if ((cVar1 == '\r') || (cVar1 == '\n')) {
          *pcVar8 = '\0';
          if ((int)uVar10 != 0) {
            uVar7 = 0x1505;
            cVar1 = *local_298;
            pcVar11 = local_298;
            while (cVar1 != '\0') {
              pcVar11 = pcVar11 + 1;
              uVar7 = uVar7 * 0x21 ^ (int)cVar1;
              cVar1 = *pcVar11;
            }
            uVar5 = uVar9;
            uVar6 = uVar9;
            if ((ulonglong)GControlCommands.Count != 0) {
              do {
                if (*(uint *)((longlong)&GControlCommands.Commands[0].Hash + uVar6) == uVar7) {
                  (**(code **)((longlong)&GControlCommands.Commands[0].Thunk + uVar6))
                            (*(undefined8 *)((longlong)&GControlCommands.Commands[0].Param + uVar6),
                             (int)uVar10 + -1,local_290);
                  goto LAB_14146c2e3;
                }
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 + 0x18;
              } while ((longlong)uVar5 < (longlong)(ulonglong)GControlCommands.Count);
              pcVar11 = pcVar8 + 1;
              uVar5 = uVar9;
              uVar10 = uVar9;
              goto LAB_14146c2f6;
            }
          }
LAB_14146c2e3:
          uVar10 = 0;
          pcVar11 = pcVar8 + 1;
          uVar5 = 0;
        }
      }
LAB_14146c2f6:
    }
    iVar2 = (int)(lpBuffer + lVar4) - (int)pcVar11;
    if (iVar2 != 0) {
      memmove(local_218,pcVar11,(longlong)iVar2);
    }
    lpBuffer = local_218 + iVar2;
    local_4a8.fd_count = 1;
    local_4a8.fd_array[0] = GControlSocket - 1;
    memset(local_4a8.fd_array + 1,0,0x1f8);
    local_4b8[0].tv_sec = 0;
    local_4b8[0].tv_usec = 0;
    iVar2 = select(0,&local_4a8,(fd_set *)0x0,(fd_set *)0x0,local_4b8);
  }
  CloseHandle((HANDLE)(GControlSocket - 1));
  GControlState = Listening;
  GControlSocket = 0;
  return;
}

// Writer_CreateGuid @ 14146c3e0

void __cdecl UE::Trace::Private::Writer_CreateGuid(FTraceGuid *param_1)

{
  byte bVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      QueryPerformanceCounter(local_res8);
      State = local_res8[0].QuadPart;
      _Init_thread_footer(&::_TSS0);
    }
  }
  lVar2 = State * 0x369dea0f31a53f85 + 1;
  *(longlong *)param_1->Bits = lVar2;
  State = lVar2 * 0x369dea0f31a53f85 + 1;
  *(ulong64 *)(param_1->Bits + 2) = State;
  bVar1 = (byte)State;
  *(byte *)((longlong)param_1->Bits + 6) = (byte)((ulonglong)lVar2 >> 0x30) & 0xf | 0x40;
  *(byte *)(param_1->Bits + 2) = bVar1 & 0x3f | 0x80;
  return;
}

// Writer_CreateSharedBuffer @ 14146c4a0

FSharedBuffer * __cdecl UE::Trace::Private::Writer_CreateSharedBuffer(uint param_1)

{
  longlong lVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = 0x400;
  if (0x400 < param_1 + 0x1c) {
    uVar5 = param_1 + 0x41b & 0xfffffc00;
  }
  uVar4 = (ulonglong)uVar5;
  pvVar2 = Writer_MemoryAllocate((ulonglong)uVar5,8);
  lVar1 = uVar4 + (longlong)pvVar2;
  LOCK();
  GTraceStatistics.SharedBufferAllocated = GTraceStatistics.SharedBufferAllocated + uVar5;
  UNLOCK();
  iVar3 = ((int)lVar1 - (int)pvVar2) + -0x1c;
  *(int *)(lVar1 + -0x14) = iVar3;
  *(uint *)(lVar1 + -0x18) = iVar3 * 0x400 | 0x3ff;
  *(undefined8 *)((uVar4 - 8) + (longlong)pvVar2) = 0;
  *(undefined4 *)((uVar4 - 0x10) + (longlong)pvVar2) = 0;
  return (FSharedBuffer *)(lVar1 + -0x18);
}

// Writer_DescribeEvents @ 14146c520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::Private::Writer_DescribeEvents(FIter param_1)

{
  FEventNode *pFVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auStack_10b8 [32];
  FMessageEvent local_1098;
  longlong local_1078;
  uchar local_106c [4092];
  undefined1 local_70 [32];
  uchar *local_50;
  uchar *local_48;
  uchar *local_40;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10b8;
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_DescribeEvents");
  }
  local_50 = local_106c;
  local_48 = local_106c;
  local_40 = local_106c;
  local_34 = 0xffff1000;
  plVar2 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20);
  local_1078 = *plVar2;
  *plVar2 = (longlong)local_70;
  while (param_1.Inner != (FEventNode *)0x0) {
    pFVar1 = ((FEventNode *)param_1.Inner)->Next;
    if (pFVar1 == (FEventNode *)0x0) {
      GEventListTail = param_1.Inner;
    }
    FEventNode::Describe(param_1.Inner);
    uVar3 = (int)local_48 - (int)local_40;
    param_1.Inner = pFVar1;
    if (0xdff < uVar3) {
      Writer_SendDataNoInstr(0,local_40,uVar3);
      if (((int)local_48 - (int)local_40 != uVar3) &&
         (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0)) {
        local_1098.Type = WriterError;
        local_1098.TypeStr = "WriterError";
        local_1098.Description = "Events emitted while describing events; trace will be corrupt!";
        (*GMessageFunc)(&local_1098);
      }
      local_50 = local_106c;
      local_48 = local_106c;
      local_40 = local_106c;
    }
  }
  uVar3 = (int)local_48 - (int)local_40;
  if (uVar3 != 0) {
    Writer_SendDataNoInstr(0,local_40,uVar3);
    if (((int)local_48 - (int)local_40 != uVar3) &&
       (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0)) {
      local_1098.Type = WriterError;
      local_1098.TypeStr = "WriterError";
      local_1098.Description = "Events emitted while describing events; trace will be corrupt!";
      (*GMessageFunc)(&local_1098);
    }
  }
  if (local_1078 != 0) {
    *plVar2 = local_1078;
    local_1078 = 0;
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_DrainBuffers @ 14146c750

void __cdecl UE::Trace::Private::Writer_DrainBuffers(void)

{
  ushort uVar1;
  uchar *puVar2;
  uint uVar3;
  FThreadBuffer *pFVar4;
  FWriteBuffer **ppFVar5;
  FThreadBuffer *_Dst;
  FWriteBuffer *pFVar6;
  uint uVar7;
  uint uVar8;
  FWriteBuffer *pFVar9;
  FWriteBuffer *pFVar10;
  FWriteBuffer *pFVar11;
  int iVar12;
  uint uVar13;
  FWriteBuffer *pFVar14;
  FWriteBuffer *pFVar15;
  FWriteBuffer *pFVar16;
  bool bVar17;
  int local_res8;
  FWriteBuffer *local_res18;
  FWriteBuffer *local_48;
  FWriteBuffer *local_40;
  
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_DrainBuffers");
  }
  pFVar16 = GNewThreadList;
  pFVar11 = (FWriteBuffer *)0x0;
  local_res18 = (FWriteBuffer *)0x0;
  LOCK();
  GNewThreadList = (FWriteBuffer *)0x0;
  UNLOCK();
  local_40 = pFVar11;
  while (pFVar16 != (FWriteBuffer *)0x0) {
    pFVar9 = pFVar16->NextThread;
    pFVar16->NextThread = local_40;
    local_40 = pFVar16;
    pFVar16 = pFVar9;
  }
  local_48 = GActiveThreadList;
  ppFVar5 = &local_48;
  local_res8 = 0;
  GActiveThreadList = (FWriteBuffer *)0x0;
  pFVar16 = pFVar11;
  do {
    pFVar9 = *ppFVar5;
    while (uVar13 = (uint)pFVar16, pFVar9 != (FWriteBuffer *)0x0) {
      pFVar15 = pFVar9->NextThread;
      if (GThreadBufferArrayCapacity <= uVar13) {
        uVar8 = 0x100;
        if (GThreadBufferArrayCapacity != 0) {
          uVar8 = GThreadBufferArrayCapacity * 2;
        }
        if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
          (*FProfilerScope::OnScopeBegin)("Writer_ReallocateThreadBufferArray");
        }
        _Dst = Writer_MemoryAllocate((ulonglong)(uVar8 * 0x10),0x10);
        pFVar4 = GThreadBufferArray;
        uVar3 = GThreadBufferArrayCapacity;
        LOCK();
        GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated + uVar8 * 0x10
        ;
        UNLOCK();
        if (GThreadBufferArrayCapacity != 0) {
          uVar7 = GThreadBufferArrayCapacity * 0x10;
          memcpy(_Dst,GThreadBufferArray,(ulonglong)uVar7);
          if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
            _aligned_free(pFVar4);
          }
          else {
            (*FreeHook)(pFVar4,(ulonglong)uVar7);
          }
          LOCK();
          GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar7;
          UNLOCK();
          LOCK();
          GTraceStatistics.FixedBufferAllocated =
               GTraceStatistics.FixedBufferAllocated + uVar3 * -0x10;
          UNLOCK();
        }
        GThreadBufferArrayCapacity = uVar8;
        GThreadBufferArray = _Dst;
        if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
          (*FProfilerScope::OnScopeEnd)();
        }
      }
      pFVar4 = GThreadBufferArray;
      uVar8 = 1;
      pFVar6 = pFVar9;
      do {
        pFVar6 = pFVar6->NextBuffer;
        uVar8 = uVar8 + 1;
      } while (pFVar6 != (FWriteBuffer *)0x0);
      GThreadBufferArray[(longlong)pFVar16].FirstBuffer = pFVar9;
      pFVar4[(longlong)pFVar16].DrainBufferLimit = uVar8;
      pFVar9 = pFVar15;
      pFVar16 = (FWriteBuffer *)(ulonglong)(uVar13 + 1);
    }
    ppFVar5 = ppFVar5 + 1;
  } while (ppFVar5 != (FWriteBuffer **)&stack0xffffffffffffffc8);
  if (uVar13 != 0) {
    pFVar9 = (FWriteBuffer *)0x0;
    pFVar15 = pFVar9;
    do {
      pFVar6 = *(FWriteBuffer **)
                ((longlong)&GThreadBufferArray->FirstBuffer + (longlong)pFVar15->Overflow);
      iVar12 = *(int *)((longlong)&pFVar15->PrevTimestamp + (longlong)GThreadBufferArray);
      uVar1 = pFVar6->ThreadId;
      pFVar14 = pFVar11;
      do {
        pFVar10 = pFVar6;
        iVar12 = iVar12 + -1;
        pFVar11 = pFVar14;
        if (iVar12 == 0) {
LAB_14146c9b4:
          if (pFVar10 != (FWriteBuffer *)0x0) {
            pFVar10->NextThread = GActiveThreadList;
            GActiveThreadList = pFVar10;
          }
          break;
        }
        puVar2 = pFVar10->Committed;
        uVar13 = (int)puVar2 - *(int *)&pFVar10->Reaped;
        if (uVar13 != 0) {
          GTraceStatistics.BytesTraced = uVar13 + GTraceStatistics.BytesTraced;
          Writer_TailAppend((uint)uVar1,pFVar10->Reaped,uVar13);
          pFVar10->Reaped = puVar2;
          pFVar9 = local_res18;
        }
        if (puVar2 < (uchar *)((longlong)pFVar10 - (longlong)pFVar10->EtxOffset))
        goto LAB_14146c9b4;
        pFVar6 = pFVar10->NextBuffer;
        pFVar10->NextBuffer = pFVar9;
        pFVar11 = pFVar10;
        if (pFVar14 != (FWriteBuffer *)0x0) {
          pFVar11 = pFVar14;
        }
        local_res8 = local_res8 + 1;
        pFVar9 = pFVar10;
        pFVar14 = pFVar11;
        local_res18 = pFVar10;
      } while (pFVar6 != (FWriteBuffer *)0x0);
      pFVar15 = (FWriteBuffer *)&pFVar15->NextThread;
      pFVar16 = (FWriteBuffer *)((longlong)&pFVar16[-1].ThreadId + 1);
    } while (pFVar16 != (FWriteBuffer *)0x0);
    if (pFVar9 != (FWriteBuffer *)0x0) {
      do {
        pFVar16 = GPoolFreeList;
        pFVar11->NextBuffer = GPoolFreeList;
        LOCK();
        bVar17 = pFVar16 != GPoolFreeList;
        pFVar16 = pFVar9;
        if (bVar17) {
          pFVar16 = GPoolFreeList;
        }
        GPoolFreeList = pFVar16;
        UNLOCK();
      } while (bVar17);
      LOCK();
      GTraceStatistics.BlockPoolFreeBlocks = GTraceStatistics.BlockPoolFreeBlocks + local_res8;
      UNLOCK();
    }
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_DrainLocalBuffers @ 14146ca30

void __cdecl UE::Trace::Private::Writer_DrainLocalBuffers(void)

{
  ushort uVar1;
  ushort uVar2;
  FWriteBuffer *pFVar3;
  uchar *puVar4;
  FWriteBuffer *pFVar5;
  FWriteBuffer *pFVar6;
  FWriteBuffer *pFVar7;
  FWriteBuffer *pFVar8;
  FWriteBuffer *pFVar9;
  uint uVar10;
  FWriteBuffer *pFVar11;
  bool bVar12;
  
  pFVar7 = GActiveThreadList;
  pFVar9 = *(FWriteBuffer **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20);
  if (pFVar9 != &GNullWriteBuffer) {
    pFVar8 = (FWriteBuffer *)0x0;
    uVar1 = pFVar9->ThreadId;
    GActiveThreadList = (FWriteBuffer *)0x0;
    pFVar9 = pFVar8;
    pFVar11 = pFVar8;
    if (pFVar7 != (FWriteBuffer *)0x0) {
      do {
        uVar2 = pFVar7->ThreadId;
        pFVar3 = pFVar7->NextThread;
        pFVar5 = pFVar7;
        pFVar6 = pFVar9;
        if ((uint)uVar2 == (uint)uVar1) {
          do {
            pFVar7 = pFVar5;
            puVar4 = pFVar7->Committed;
            uVar10 = (int)puVar4 - *(int *)&pFVar7->Reaped;
            if (uVar10 != 0) {
              GTraceStatistics.BytesTraced = uVar10 + GTraceStatistics.BytesTraced;
              Writer_TailAppend((uint)uVar2,pFVar7->Reaped,uVar10);
              pFVar7->Reaped = puVar4;
            }
            pFVar6 = pFVar9;
            if (puVar4 < (uchar *)((longlong)pFVar7 - (longlong)pFVar7->EtxOffset))
            goto LAB_14146cb25;
            pFVar5 = pFVar7->NextBuffer;
            pFVar7->NextBuffer = pFVar8;
            pFVar6 = pFVar7;
            if (pFVar9 != (FWriteBuffer *)0x0) {
              pFVar6 = pFVar9;
            }
            pFVar11 = (FWriteBuffer *)(ulonglong)((int)pFVar11 + 1);
            pFVar8 = pFVar7;
            pFVar9 = pFVar6;
          } while (pFVar5 != (FWriteBuffer *)0x0);
        }
        else {
LAB_14146cb25:
          pFVar7->NextThread = GActiveThreadList;
          GActiveThreadList = pFVar7;
        }
        pFVar7 = pFVar3;
        pFVar9 = pFVar6;
      } while (pFVar3 != (FWriteBuffer *)0x0);
      if (pFVar8 != (FWriteBuffer *)0x0) {
        do {
          pFVar9 = GPoolFreeList;
          pFVar6->NextBuffer = GPoolFreeList;
          LOCK();
          bVar12 = pFVar9 != GPoolFreeList;
          pFVar9 = pFVar8;
          if (bVar12) {
            pFVar9 = GPoolFreeList;
          }
          GPoolFreeList = pFVar9;
          UNLOCK();
        } while (bVar12);
        LOCK();
        GTraceStatistics.BlockPoolFreeBlocks = GTraceStatistics.BlockPoolFreeBlocks + (int)pFVar11;
        UNLOCK();
      }
    }
  }
  return;
}

// Writer_EndThreadBuffer @ 14146cbb0

void __cdecl UE::Trace::Private::Writer_EndThreadBuffer(void)

{
  FWriteBuffer *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20);
  pFVar1 = (FWriteBuffer *)*plVar3;
  if (pFVar1 != &GNullWriteBuffer) {
    lVar2 = *plVar3;
    *(uint *)(lVar2 + 0x38) = (int)lVar2 - (uint)*pFVar1->Cursor;
  }
  return;
}

// Writer_FreeBlockListToPool @ 14146cbf0

void __cdecl
UE::Trace::Private::Writer_FreeBlockListToPool(FWriteBuffer *param_1,FWriteBuffer *param_2)

{
  FWriteBuffer *pFVar1;
  bool bVar2;
  
  do {
    pFVar1 = GPoolFreeList;
    param_2->NextBuffer = GPoolFreeList;
    LOCK();
    bVar2 = pFVar1 != GPoolFreeList;
    pFVar1 = param_1;
    if (bVar2) {
      pFVar1 = GPoolFreeList;
    }
    GPoolFreeList = pFVar1;
    UNLOCK();
  } while (bVar2);
  return;
}

// Writer_GetControlPort @ 14146cc20

uint __cdecl UE::Trace::Private::Writer_GetControlPort(void)

{
  return (uint)GControlPort;
}

// Writer_GetThreadId @ 14146cc30

uint __cdecl UE::Trace::Private::Writer_GetThreadId(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar2 = *(uint *)(lVar1 + 0x28);
  if (uVar2 == 0) {
    LOCK();
    UNLOCK();
    uVar2 = ::Counter + 2;
    ::Counter = ::Counter + 1;
    *(uint *)(lVar1 + 0x28) = uVar2;
  }
  return uVar2;
}

// Writer_Initialize @ 14146cc70

void __cdecl UE::Trace::Private::Writer_Initialize(FInitializeDesc *param_1)

{
  uint uVar1;
  
  FProfilerScope::OnScopeBegin = param_1->OnScopeBeginFunc;
  FProfilerScope::OnScopeEnd = param_1->OnScopeEndFunc;
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_Initialize");
  }
  GBlockPoolMaxSize = param_1->BlockPoolMaxSize;
  if (0 < (int)param_1->TailSizeBytes) {
    uVar1 = param_1->TailSizeBytes + 0x3ff & 0xfffffc00;
    if ((int)uVar1 < 0x20000) {
      uVar1 = 0x20000;
    }
    GPacketRing.Data = Writer_MemoryAllocate((ulonglong)uVar1,0x10);
    LOCK();
    GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated + uVar1;
    UNLOCK();
    GPacketRing.Cursor = 0;
    GPacketRing.Size = uVar1;
    GPacketRing.Left = uVar1;
    GPacketRing.Right = uVar1;
  }
  if (param_1->bUseImportantCache != false) {
    GCacheCollector = Writer_MemoryAllocate(0x420,0x10);
    LOCK();
    GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + 0x420;
    UNLOCK();
    GCacheCollector->Size = 0x400;
    GCacheCollector->Remaining = 0x400;
    (GCacheCollector->field0_0x0).Next = (FCacheBuffer *)0x0;
    GCacheActiveBuffer = Writer_MemoryAllocate(0x10020,0x10);
    LOCK();
    GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + 0x10020;
    UNLOCK();
    GCacheActiveBuffer->Size = 0x10000;
    (GCacheActiveBuffer->field0_0x0).TailNext = &GCacheHeadBuffer;
    GCacheActiveBuffer->Remaining = 0x10000;
  }
  if (param_1->ThreadSleepTimeInMS != 0) {
    GSleepTimeInMS = param_1->ThreadSleepTimeInMS;
  }
  if ((param_1->bUseWorkerThread != false) && (GWorkerThread == 0)) {
    GWorkerThread =
         (ulong64)CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                               `UE::Trace::Private::ThreadCreate'::__l2::<lambda_1>::
                               <lambda_invoker_cdecl>,Writer_WorkerThread,0,(LPDWORD)0x0);
  }
  if (param_1->SessionGuid[0] == 0 &&
      (param_1->SessionGuid[1] == 0 &&
      (param_1->SessionGuid[3] == 0 && param_1->SessionGuid[2] == 0))) {
    Writer_CreateGuid(&GSessionGuid);
  }
  else {
    GSessionGuid.Bits = *&param_1->SessionGuid;
  }
  GOnConnection = param_1->OnConnectionFunc;
  GOnUpdate = param_1->OnUpdateFunc;
  GUpdateInProgress = 0;
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_InitializeCache @ 14146ce40

void __cdecl UE::Trace::Private::Writer_InitializeCache(void)

{
  GCacheCollector = Writer_MemoryAllocate(0x420,0x10);
  LOCK();
  GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + 0x420;
  UNLOCK();
  GCacheCollector->Size = 0x400;
  GCacheCollector->Remaining = 0x400;
  (GCacheCollector->field0_0x0).Next = (FCacheBuffer *)0x0;
  GCacheActiveBuffer = Writer_MemoryAllocate(0x10020,0x10);
  LOCK();
  GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + 0x10020;
  UNLOCK();
  (GCacheActiveBuffer->field0_0x0).Next = (FCacheBuffer *)0x0;
  (GCacheActiveBuffer->field0_0x0).TailNext = &GCacheHeadBuffer;
  GCacheActiveBuffer->Size = 0x10000;
  GCacheActiveBuffer->Remaining = 0x10000;
  return;
}

// Writer_InitializeControl @ 14146ced0

void __cdecl UE::Trace::Private::Writer_InitializeControl(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uStack_24;
  
  if (GControlCommands.Count < 8) {
    uVar6 = (ulonglong)GControlCommands.Count;
    pcVar5 = "SendTo";
    GControlCommands.Count = GControlCommands.Count + '\x01';
    uVar4 = 0x1505;
    uVar3 = 0x1505;
    uVar2 = 0x1505;
    cVar1 = 'S';
    do {
      pcVar5 = pcVar5 + 1;
      uVar2 = uVar2 * 0x21 ^ (int)cVar1;
      cVar1 = *pcVar5;
    } while (cVar1 != '\0');
    *(ulonglong *)(GControlCommands.Commands + uVar6) = CONCAT44(uStack_24,uVar2);
    GControlCommands.Commands[uVar6].Param = (void *)0x0;
    GControlCommands.Commands[uVar6].Thunk =
         `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    if (GControlCommands.Count < 8) {
      uVar6 = (ulonglong)GControlCommands.Count;
      pcVar5 = "Stop";
      GControlCommands.Count = GControlCommands.Count + '\x01';
      cVar1 = 'S';
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = uVar3 * 0x21 ^ (int)cVar1;
        cVar1 = *pcVar5;
      } while (cVar1 != '\0');
      *(ulonglong *)(GControlCommands.Commands + uVar6) = CONCAT44(uStack_24,uVar3);
      GControlCommands.Commands[uVar6].Param = (void *)0x0;
      GControlCommands.Commands[uVar6].Thunk =
           `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
      if (GControlCommands.Count < 8) {
        uVar6 = (ulonglong)GControlCommands.Count;
        pcVar5 = "ToggleChannels";
        GControlCommands.Count = GControlCommands.Count + '\x01';
        cVar1 = 'T';
        do {
          pcVar5 = pcVar5 + 1;
          uVar4 = uVar4 * 0x21 ^ (int)cVar1;
          cVar1 = *pcVar5;
        } while (cVar1 != '\0');
        *(ulonglong *)(GControlCommands.Commands + uVar6) = CONCAT44(uStack_24,uVar4);
        GControlCommands.Commands[uVar6].Param = (void *)0x0;
        GControlCommands.Commands[uVar6].Thunk =
             `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_3>::
             <lambda_invoker_cdecl>;
      }
    }
  }
  return;
}

// Writer_InitializePool @ 14146d030

void __cdecl UE::Trace::Private::Writer_InitializePool(void)

{
  return;
}

// Writer_InitializeSharedBuffers @ 14146d040

void __cdecl UE::Trace::Private::Writer_InitializeSharedBuffers(void)

{
  GTailBuffer = Writer_CreateSharedBuffer(0);
  GTailPreSent = 0;
  GSharedBuffer = GTailBuffer;
  return;
}

// Writer_InitializeTail @ 14146d070

void __cdecl UE::Trace::Private::Writer_InitializeTail(int param_1)

{
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = param_1 + 0x3ffU & 0xfffffc00;
    if ((int)uVar1 < 0x20000) {
      uVar1 = 0x20000;
    }
    GPacketRing.Data = Writer_MemoryAllocate((ulonglong)uVar1,0x10);
    LOCK();
    GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated + uVar1;
    UNLOCK();
    GPacketRing.Cursor = 0;
    GPacketRing.Size = uVar1;
    GPacketRing.Left = uVar1;
    GPacketRing.Right = uVar1;
  }
  return;
}

// Writer_InternalInitialize @ 14146d0e0

void __cdecl UE::Trace::Private::Writer_InternalInitialize(void)

{
  if ((!GInitialized) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Writer_InternalInitializeImpl();
      atexit(`UE::Trace::Private::Writer_InternalInitialize'::__l2::
             _dynamic_atexit_destructor_for__Initializer__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return;
}

// Writer_InternalInitializeImpl @ 14146d160

void __cdecl UE::Trace::Private::Writer_InternalInitializeImpl(void)

{
  double dVar1;
  ulong64 *puVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res8 [4];
  FImportantLogScope local_38;
  code *local_28;
  
  if (!GInitialized) {
    lVar4 = _Xtime_get_ticks();
    dVar1 = (double)lVar4 * __real_3e7ad7f29abcaf48;
    QueryPerformanceCounter(local_res8);
    GStartCycle = local_res8[0].QuadPart;
    GSharedBuffer = Writer_CreateSharedBuffer(0);
    GTailPreSent = 0;
    GTailBuffer = GSharedBuffer;
    if (GControlCommands.Count < 8) {
      uVar9 = (ulonglong)GControlCommands.Count;
      pcVar8 = "SendTo";
      GControlCommands.Count = GControlCommands.Count + '\x01';
      uVar7 = 0x1505;
      uVar6 = 0x1505;
      local_38.Ptr._0_4_ = 0x1505;
      cVar3 = 'S';
      do {
        pcVar8 = pcVar8 + 1;
        local_38.Ptr._0_4_ = (uint)local_38.Ptr * 0x21 ^ (int)cVar3;
        cVar3 = *pcVar8;
      } while (cVar3 != '\0');
      local_28 = `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>;
      local_38.BufferOffset = 0;
      local_38.AuxCursor = 0;
      *(ulonglong *)(GControlCommands.Commands + uVar9) =
           CONCAT44(local_38.Ptr._4_4_,(uint)local_38.Ptr);
      GControlCommands.Commands[uVar9].Param = (void *)0x0;
      GControlCommands.Commands[uVar9].Thunk =
           `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
      if (GControlCommands.Count < 8) {
        uVar9 = (ulonglong)GControlCommands.Count;
        pcVar8 = "Stop";
        GControlCommands.Count = GControlCommands.Count + '\x01';
        cVar3 = 'S';
        do {
          pcVar8 = pcVar8 + 1;
          uVar6 = uVar6 * 0x21 ^ (int)cVar3;
          cVar3 = *pcVar8;
        } while (cVar3 != '\0');
        local_28 = `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_2>::
                   <lambda_invoker_cdecl>;
        local_38.BufferOffset = 0;
        local_38.AuxCursor = 0;
        *(ulonglong *)(GControlCommands.Commands + uVar9) = CONCAT44(local_38.Ptr._4_4_,uVar6);
        GControlCommands.Commands[uVar9].Param = (void *)0x0;
        GControlCommands.Commands[uVar9].Thunk =
             `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
        local_38.Ptr._0_4_ = uVar6;
        if (GControlCommands.Count < 8) {
          uVar9 = (ulonglong)GControlCommands.Count;
          pcVar8 = "ToggleChannels";
          GControlCommands.Count = GControlCommands.Count + '\x01';
          cVar3 = 'T';
          do {
            pcVar8 = pcVar8 + 1;
            uVar7 = uVar7 * 0x21 ^ (int)cVar3;
            cVar3 = *pcVar8;
          } while (cVar3 != '\0');
          local_38.BufferOffset = 0;
          local_38.AuxCursor = 0;
          local_28 = `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_3>::
                     <lambda_invoker_cdecl>;
          *(ulonglong *)(GControlCommands.Commands + uVar9) = CONCAT44(local_38.Ptr._4_4_,uVar7);
          GControlCommands.Commands[uVar9].Param = (void *)0x0;
          GControlCommands.Commands[uVar9].Thunk =
               `UE::Trace::Private::Writer_InitializeControl'::__l2::<lambda_3>::
               <lambda_invoker_cdecl>;
          local_38.Ptr._0_4_ = uVar7;
        }
      }
    }
    GInitialized = true;
    if (-1 < TraceLogChannel->Enabled) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
        ::__l2::Uid = F$TraceNewTraceFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FImportantLogScope::EnterImpl
                (&local_38,
                 `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
                 ::__l2::Uid >> 1,0x1b);
      puVar2 = (ulong64 *)CONCAT44(local_38.Ptr._4_4_,(uint)local_38.Ptr);
      *puVar2 = GStartCycle;
      QueryPerformanceFrequency(local_res8);
      *(LARGE_INTEGER *)(puVar2 + 1) = local_res8[0];
      *(undefined2 *)(puVar2 + 2) = 0x524d;
      *(undefined1 *)((longlong)puVar2 + 0x12) = 8;
      *(double *)((longlong)puVar2 + 0x13) = dVar1;
      piVar5 = (int *)((longlong)local_38.BufferOffset +
                      CONCAT44(local_38.Ptr._4_4_,(uint)local_38.Ptr));
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
  }
  return;
}

// Writer_InternalShutdown @ 14146d410

void __cdecl UE::Trace::Private::Writer_InternalShutdown(void)

{
  FPoolPage *pFVar1;
  FCacheBuffer *pFVar2;
  FPoolPage *_Memory;
  FCacheBuffer *_Memory_00;
  ulong64 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  if (GInitialized) {
    Writer_WorkerJoin();
    if (GDataHandle != 0) {
      (*GWriterState.Close)(GDataHandle);
      GDataHandle = 0;
    }
    _Memory = GPoolPageList;
    uVar3 = 0;
    if (GControlListen != 0) {
      CloseHandle((HANDLE)(GControlListen - 1));
      GControlListen = 0;
      _Memory = GPoolPageList;
      uVar3 = GControlListen;
    }
    while (GControlListen = uVar3, _Memory != (FPoolPage *)0x0) {
      pFVar1 = _Memory->NextPage;
      LOCK();
      GTraceStatistics.BlockPoolAllocated = GTraceStatistics.BlockPoolAllocated - _Memory->AllocSize
      ;
      UNLOCK();
      LOCK();
      GPoolTotalAllocated = GPoolTotalAllocated - _Memory->AllocSize;
      UNLOCK();
      uVar5 = _Memory->AllocSize;
      if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
        _aligned_free(_Memory);
      }
      else {
        (*FreeHook)(_Memory,(ulonglong)uVar5);
      }
      LOCK();
      GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar5;
      UNLOCK();
      _Memory = pFVar1;
      uVar3 = GControlListen;
    }
    iVar6 = 0;
    _Memory_00 = GCacheHeadBuffer;
    while (_Memory_00 != (FCacheBuffer *)0x0) {
      uVar5 = _Memory_00->Size + 0x20;
      pFVar2 = (_Memory_00->field0_0x0).Next;
      if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
        _aligned_free(_Memory_00);
      }
      else {
        (*FreeHook)(_Memory_00,(ulonglong)uVar5);
      }
      LOCK();
      GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar5;
      UNLOCK();
      iVar6 = iVar6 + uVar5;
      _Memory_00 = pFVar2;
    }
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(GCacheActiveBuffer);
    }
    else {
      (*FreeHook)(GCacheActiveBuffer,0x10000);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - 0x10000;
    UNLOCK();
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(GCacheCollector);
    }
    else {
      (*FreeHook)(GCacheCollector,0x400);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - 0x400;
    UNLOCK();
    LOCK();
    GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + (-0x10400 - iVar6);
    UNLOCK();
    uVar4 = (ulonglong)GPacketRing.Size;
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(GPacketRing.Data);
    }
    else {
      (*FreeHook)(GPacketRing.Data,uVar4);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar4;
    UNLOCK();
    LOCK();
    GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated - GPacketRing.Size
    ;
    UNLOCK();
    GPacketRing.Data = (uchar *)0x0;
    GInitialized = false;
  }
  return;
}

// Writer_IsTailing @ 14146d600

bool __cdecl UE::Trace::Private::Writer_IsTailing(void)

{
  return GPacketRing.Data != (uchar *)0x0;
}

// Writer_IsTracing @ 14146d620

bool __cdecl UE::Trace::Private::Writer_IsTracing(void)

{
  if ((GDataHandle == 0) && (GPendingDataHandle == 0)) {
    return false;
  }
  return true;
}

// Writer_IsTracingTo @ 14146d650

bool __cdecl UE::Trace::Private::Writer_IsTracingTo(uint (*param_1) [4],uint (*param_2) [4])

{
  if ((GDataHandle == 0) && (GPendingDataHandle == 0)) {
    return false;
  }
  *param_1 = GSessionGuid.Bits;
  *param_2 = GTraceGuid.Bits;
  return true;
}

// Writer_MemoryAllocate @ 14146d690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

void * __cdecl UE::Trace::Private::Writer_MemoryAllocate(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  undefined1 auStack_258 [32];
  FMessageEvent local_238;
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (AllocHook == (_func___cdecl_void_ptr_ulong64_uint *)0x0) {
    pvVar1 = _aligned_malloc(param_1,(ulonglong)param_2);
  }
  else {
    pvVar1 = (*AllocHook)(param_1,param_2);
  }
  if (pvVar1 == (void *)0x0) {
    snprintf(local_218,0x200,"OOM allocating %llu bytes");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_238.Type = OOMFatal;
      local_238.TypeStr = "OOMFatal";
      local_238.Description = local_218;
      (*GMessageFunc)(&local_238);
    }
  }
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed + param_1;
  UNLOCK();
  return pvVar1;
}

// Writer_MemoryFree @ 14146d750

void __cdecl UE::Trace::Private::Writer_MemoryFree(void *param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (FreeHook != (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
    (*FreeHook)(param_1,uVar1);
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar1;
    UNLOCK();
    return;
  }
  _aligned_free(param_1);
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar1;
  UNLOCK();
  return;
}

// Writer_MemorySetHooks @ 14146d7a0

void __cdecl
UE::Trace::Private::Writer_MemorySetHooks
          (_func___cdecl_void_ptr_ulong64_uint *param_1,_func___cdecl_void_void_ptr_ulong64 *param_2
          )

{
  AllocHook = param_1;
  FreeHook = param_2;
  return;
}

// Writer_NextBuffer @ 14146d7c0

FWriteBuffer * __cdecl UE::Trace::Private::Writer_NextBuffer(void)

{
  FWriteBuffer *pFVar1;
  
  pFVar1 = Writer_NextBufferInternal
                     (*(FWriteBuffer **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20));
  return pFVar1;
}

// Writer_NextBufferInternal @ 14146d7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

FWriteBuffer * __cdecl UE::Trace::Private::Writer_NextBufferInternal(FWriteBuffer *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FWriteBuffer *pFVar3;
  uint uVar4;
  int iVar5;
  FWriteBuffer *pFVar6;
  uchar *puVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_8c8 [32];
  LARGE_INTEGER local_8a8;
  FMessageEvent local_8a0;
  longlong *local_888;
  longlong local_880;
  longlong local_878;
  undefined1 local_86c [2044];
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8c8;
  uVar8 = (ulonglong)_tls_index;
  local_50 = local_86c;
  local_48 = local_86c;
  local_40 = local_86c;
  local_34 = 0xffff0800;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
  local_878 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined1 **)(lVar1 + 0x20) = local_70;
  if (param_1->ThreadId != 0xffff) {
    pFVar6 = Writer_AllocateBlockFromPool();
    puVar7 = (uchar *)((longlong)pFVar6 - (ulonglong)pFVar6->Size);
    pFVar6->Cursor = puVar7;
    pFVar6->Reaped = puVar7;
    pFVar6->EtxOffset = -0x40;
    pFVar6->NextBuffer = (FWriteBuffer *)0x0;
    uVar4 = (int)local_48 - (int)local_40;
    if (uVar4 != 0) {
      memcpy(pFVar6->Cursor,local_40,(ulonglong)uVar4);
      pFVar6->Cursor = pFVar6->Cursor + uVar4;
    }
    local_878 = 0;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
    *(FWriteBuffer **)(lVar1 + 0x20) = pFVar6;
    pFVar6->Committed = pFVar6->Cursor;
    if (param_1 == &GNullWriteBuffer) {
      iVar5 = *(int *)(lVar1 + 0x28);
      if (iVar5 == 0) {
        LOCK();
        UNLOCK();
        iVar5 = ::Counter + 2;
        ::Counter = ::Counter + 1;
        *(int *)(lVar1 + 0x28) = iVar5;
      }
      pFVar6->ThreadId = (ushort)iVar5;
      QueryPerformanceCounter(&local_8a8);
      pFVar6->PrevTimestamp = (ulong64)local_8a8;
      if (-1 < TraceLogChannel->Enabled) {
        FLogScope::Enter<UE::Trace::Private::F_TraceThreadTimingFields>((TLogScope<0> *)&local_888);
        *local_888 = pFVar6->PrevTimestamp - GStartCycle;
        *(undefined8 *)(local_880 + 0x28) = *(undefined8 *)(local_880 + 0x20);
      }
      do {
        pFVar3 = GNewThreadList;
        pFVar6->NextThread = GNewThreadList;
        LOCK();
        bVar9 = pFVar3 != GNewThreadList;
        pFVar3 = pFVar6;
        if (bVar9) {
          pFVar3 = GNewThreadList;
        }
        GNewThreadList = pFVar3;
        UNLOCK();
      } while (bVar9);
    }
    else {
      LOCK();
      GTraceStatistics.BytesEmitted =
           (longlong)param_1->Cursor +
           GTraceStatistics.BytesEmitted + ((ulonglong)param_1->Size - (longlong)param_1);
      UNLOCK();
      pFVar6->ThreadId = param_1->ThreadId;
      pFVar6->PrevTimestamp = param_1->PrevTimestamp;
      param_1->NextBuffer = pFVar6;
      param_1->EtxOffset = (int)param_1 - *(int *)&param_1->Cursor;
    }
    if (local_878 != 0) {
      *(longlong *)(lVar1 + 0x20) = local_878;
    }
    return pFVar6;
  }
  if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
    local_8a0.Type = WriterError;
    local_8a0.TypeStr = "WriterError";
    local_8a0.Description = "Redirect buffer full, trace will be corrupt!";
    (*GMessageFunc)(&local_8a0);
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FWriteBuffer *)(*pcVar2)();
  return pFVar6;
}

// Writer_NextSharedBuffer @ 14146da60

FNextSharedBuffer * __cdecl
UE::Trace::Private::Writer_NextSharedBuffer
          (FNextSharedBuffer *__return_storage_ptr__,FSharedBuffer *param_1,int param_2,int param_3)

{
  FSharedBuffer *pFVar1;
  void *pvVar2;
  uint uVar3;
  
  do {
    if (param_2 < 0) {
      do {
      } while (GSharedBuffer == param_1);
    }
    else {
      uVar3 = 0x400;
      if (0x400 < (-param_3 >> 10) + 0x1cU) {
        uVar3 = (-param_3 >> 10) + 0x41bU & 0xfffffc00;
      }
      pvVar2 = Writer_MemoryAllocate((ulonglong)uVar3,8);
      LOCK();
      GTraceStatistics.SharedBufferAllocated = GTraceStatistics.SharedBufferAllocated + uVar3;
      UNLOCK();
      *(undefined8 *)((longlong)pvVar2 + ((ulonglong)uVar3 - 8)) = 0;
      *(uint *)((longlong)pvVar2 + ((ulonglong)uVar3 - 0x14)) = uVar3 - 0x1c;
      pFVar1 = (FSharedBuffer *)((longlong)pvVar2 + ((ulonglong)uVar3 - 0x18));
      *(undefined4 *)((longlong)pvVar2 + ((ulonglong)uVar3 - 0x10)) = 0;
      pFVar1->Cursor = (uVar3 - 0x1c) * 0x400 | 0x3ff;
      GSharedBuffer = (FSharedBuffer *)((longlong)pvVar2 + ((ulonglong)uVar3 - 0x18));
      param_1->Next = pFVar1;
      param_1->Final = param_2 >> 10;
    }
    pFVar1 = GSharedBuffer;
    LOCK();
    GTraceStatistics.BytesEmitted =
         GTraceStatistics.BytesEmitted + (longlong)(-param_1->Cursor >> 10);
    UNLOCK();
    LOCK();
    param_1->Cursor = param_1->Cursor + 1;
    UNLOCK();
    LOCK();
    param_2 = pFVar1->Cursor;
    pFVar1->Cursor = pFVar1->Cursor + param_3;
    UNLOCK();
    param_1 = pFVar1;
  } while (param_2 + param_3 < 0);
  __return_storage_ptr__->Buffer = pFVar1;
  __return_storage_ptr__->RegionStart = param_2;
  return __return_storage_ptr__;
}

// Writer_RelayTo @ 14146db80

bool __cdecl
UE::Trace::Private::Writer_RelayTo
          (ulong64 param_1,_func___cdecl_bool_ulong64_void_ptr_uint *param_2,
          _func___cdecl_void_ulong64 *param_3,ushort param_4)

{
  ulonglong uVar1;
  
  if (GPendingDataHandle == 0) {
    Writer_InternalInitialize();
    if ((param_1 & 0xffff000000000000) == 0) {
      uVar1 = (ulonglong)param_4 << 0x30 | param_1;
      if (uVar1 != 0) {
        GPendingDataHandle = uVar1;
        GPendingWriterState.Write = param_2;
        GPendingWriterState.Close = param_3;
        return true;
      }
    }
    else {
      (*GWriterState.Close)(param_1);
    }
  }
  return false;
}

// Writer_RetireSharedBufferImpl @ 14146dc10

void __cdecl UE::Trace::Private::Writer_RetireSharedBufferImpl(void)

{
  void *_Memory;
  FSharedBuffer *pFVar1;
  uchar *puVar2;
  longlong lVar3;
  uint uVar4;
  
  puVar2 = (uchar *)(((ulonglong)GTailPreSent - (ulonglong)GTailBuffer->Size) +
                    (longlong)GTailBuffer);
  lVar3 = (longlong)GTailBuffer + (-(longlong)puVar2 - (ulonglong)GTailBuffer->Final);
  if (lVar3 != 0) {
    LOCK();
    GTraceStatistics.BytesTraced = GTraceStatistics.BytesTraced + lVar3;
    UNLOCK();
    Writer_CacheData(puVar2,(uint)lVar3);
  }
  pFVar1 = GTailBuffer->Next;
  uVar4 = GTailBuffer->Size + 0x1c;
  _Memory = (void *)((longlong)GTailBuffer + (-4 - (ulonglong)GTailBuffer->Size));
  if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
    _aligned_free(_Memory);
  }
  else {
    (*FreeHook)(_Memory,(ulonglong)uVar4);
  }
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar4;
  UNLOCK();
  LOCK();
  GTraceStatistics.SharedBufferAllocated = GTraceStatistics.SharedBufferAllocated - uVar4;
  UNLOCK();
  GTailBuffer = pFVar1;
  GTailPreSent = 0;
  return;
}

// Writer_SendData @ 14146dcc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::Private::Writer_SendData(uint param_1,uchar *param_2,uint param_3)

{
  _func___cdecl_void_char_ptr *p_Var1;
  uint uVar2;
  ushort *puVar3;
  undefined1 auStack_1098 [32];
  ushort local_1078;
  ushort local_1076;
  ushort local_1074;
  undefined1 local_1072 [4170];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14146dcce;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1098;
  if (GDataHandle == 0) {
    return;
  }
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_SendData");
  }
  if ((0x180 < param_3) && (param_3 < 0x1001)) {
    local_1074 = (ushort)param_3;
    uVar2 = Encode(param_2,param_3 & 0xffff,local_1072,0x1040);
    if (((short)uVar2 != 0) && ((uVar2 & 0xffff) < local_1074 + 0x40)) {
      local_1078 = (short)uVar2 + 6;
      uVar2 = (uint)local_1078;
      local_1076 = (ushort)param_1 & 0x3fff | 0x8000;
      if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
        (*FProfilerScope::OnScopeBegin)("Writer_SendDataImpl");
      }
      puVar3 = &local_1078;
      goto LAB_14146ddba;
    }
  }
  p_Var1 = FProfilerScope::OnScopeBegin;
  uVar2 = param_3 + 4;
  *(short *)(param_2 + -4) = (short)uVar2;
  *(ushort *)(param_2 + -2) = (ushort)param_1 & 0x3fff;
  if (p_Var1 != (_func___cdecl_void_char_ptr *)0x0) {
    (*p_Var1)("Writer_SendDataImpl");
  }
  puVar3 = (ushort *)(param_2 + -4);
LAB_14146ddba:
  Writer_SendDataImplNoInstr(puVar3,uVar2);
  if ((FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) &&
     ((*FProfilerScope::OnScopeEnd)(), FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0)) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_SendDataImplNoInstr @ 14146de00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::Private::Writer_SendDataImplNoInstr(void *param_1,uint param_2)

{
  bool bVar1;
  DWORD dwMessageId;
  undefined1 auStackY_378 [32];
  FMessageEvent local_338;
  CHAR local_318 [256];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  GTraceStatistics.BytesSent = GTraceStatistics.BytesSent + param_2;
  bVar1 = (*GWriterState.Write)(GDataHandle,param_1,param_2);
  if (!bVar1) {
    memset(local_318,0,0x100);
    dwMessageId = GetLastError();
    FormatMessageA(0x1000,(LPCVOID)0x0,dwMessageId,0,local_318,0x100,(va_list *)0x0);
    GetLastError();
    snprintf(local_218,0x200,"(error code %d): \'%s\'");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_338.Type = WriteError;
      local_338.TypeStr = "WriteError";
      local_338.Description = local_218;
      (*GMessageFunc)(&local_338);
    }
    (*GWriterState.Close)(GDataHandle);
    GDataHandle = 0;
  }
  return;
}

// Writer_SendDataNoInstr @ 14146df30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::Private::Writer_SendDataNoInstr(uint param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  ushort *puVar2;
  undefined1 auStackY_10a8 [32];
  ushort local_1078;
  ushort local_1076;
  ushort local_1074;
  char local_1072 [4170];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14146df3e;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_10a8;
  if (GDataHandle == 0) {
    return;
  }
  if ((0x180 < param_3) && (param_3 < 0x1001)) {
    local_1074 = (ushort)param_3;
    uVar1 = ::Trace::LZ4_compress_fast((char *)param_2,local_1072,param_3 & 0xffff,0x1040,1);
    if (((short)uVar1 != 0) && ((uVar1 & 0xffff) < local_1074 + 0x40)) {
      puVar2 = &local_1078;
      local_1076 = (ushort)param_1 & 0x3fff | 0x8000;
      local_1078 = (short)uVar1 + 6;
      uVar1 = (uint)local_1078;
      goto LAB_14146dff1;
    }
  }
  puVar2 = (ushort *)(param_2 + -4);
  uVar1 = param_3 + 4;
  *(ushort *)(param_2 + -2) = (ushort)param_1 & 0x3fff;
  *puVar2 = (ushort)uVar1;
LAB_14146dff1:
  Writer_SendDataImplNoInstr(puVar2,uVar1);
  return;
}

// Writer_SendDataRaw @ 14146e020

void __cdecl UE::Trace::Private::Writer_SendDataRaw(void *param_1,uint param_2)

{
  if (GDataHandle != 0) {
    if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
      (*FProfilerScope::OnScopeBegin)("Writer_SendDataRaw");
    }
    Writer_SendDataImplNoInstr(param_1,param_2);
    if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
      (*FProfilerScope::OnScopeEnd)();
    }
  }
  return;
}

// Writer_SendSnapshotTo @ 14146e080

bool __cdecl UE::Trace::Private::Writer_SendSnapshotTo(char *param_1,uint param_2)

{
  bool bVar1;
  FSnapshotTarget local_28;
  
  local_28.Type = HostTarget;
  local_28.field1_0x8.Host.Host = param_1;
  local_28.field1_0x8.Host.Port = param_2;
  bVar1 = Writer_WriteSnapshot(&local_28);
  return bVar1;
}

// Writer_SendSync @ 14146e0b0

void __cdecl UE::Trace::Private::Writer_SendSync(void)

{
  undefined4 local_res8 [8];
  
  if (('\0' < GSyncPacketCountdown) && (GDataHandle != 0)) {
    local_res8[0] = 0x3fff0004;
    if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
      (*FProfilerScope::OnScopeBegin)("Writer_SendDataImpl");
    }
    Writer_SendDataImplNoInstr(local_res8,4);
    if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
      (*FProfilerScope::OnScopeEnd)();
    }
    GSyncPacketCountdown = GSyncPacketCountdown + -1;
  }
  return;
}

// Writer_SendTo @ 14146e120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

bool __cdecl UE::Trace::Private::Writer_SendTo(char *param_1,uint param_2,uint param_3)

{
  DWORD DVar1;
  ulong64 uVar2;
  uint uVar3;
  undefined1 auStackY_388 [32];
  FMessageEvent local_348;
  CHAR local_328 [256];
  char local_228 [512];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if (GPendingDataHandle == 0) {
    Writer_InternalInitialize();
    uVar3 = 0x7bd;
    if (param_3 != 0) {
      uVar3 = param_3;
    }
    uVar2 = TcpSocketConnect(param_1,(ushort)uVar3);
    if (uVar2 == 0) {
      DVar1 = GetLastError();
      DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0,local_328,0x100,(va_list *)0x0);
      if (DVar1 == 0) {
        GetLastError();
        snprintf(local_228,0x200,"(error code %d)");
      }
      else {
        snprintf(local_228,0x200,"Connecting to host (%s:%u): \'%s\'");
      }
      if (GMessageFunc == (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
        return false;
      }
      local_348.Description = local_228;
    }
    else {
      if ((uVar2 & 0xffff000000000000) == 0) {
        GPendingDataHandle = (ulonglong)param_2 << 0x30 | uVar2;
        GPendingWriterState.Write = IoWrite;
        GPendingWriterState.Close = IoClose;
        return true;
      }
      (*GWriterState.Close)(uVar2);
      if (GMessageFunc == (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
        return false;
      }
      local_348.Description = "Handle was unexpectedly using MSB flags.";
    }
    local_348.TypeStr = "ConnectError";
    local_348.Type = ConnectError;
    (*GMessageFunc)(&local_348);
  }
  return false;
}

// Writer_SessionPrologue @ 14146e2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

bool __cdecl UE::Trace::Private::Writer_SessionPrologue(void)

{
  bool bVar1;
  bool bVar2;
  DWORD dwMessageId;
  undefined1 auStackY_3a8 [32];
  undefined2 local_368 [4];
  FMessageEvent local_360;
  undefined4 local_348;
  undefined4 local_344;
  ushort local_340;
  undefined2 local_33e;
  uint local_33c [4];
  undefined2 local_32c;
  uint local_32a [4];
  CHAR local_318 [256];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if (GDataHandle == 0) {
    return false;
  }
  local_340 = GControlPort;
  local_33e = 0x110;
  local_32c = 0x210;
  local_348 = 0x54524332;
  local_344 = 0x20028;
  local_33c = GSessionGuid.Bits;
  local_32a = GTraceGuid.Bits;
  bVar1 = (*GWriterState.Write)(GDataHandle,&local_348,0x2e);
  local_368[0] = 0x704;
  bVar2 = (*GWriterState.Write)(GDataHandle,local_368,2);
  if (bVar1 && bVar2) {
    bVar1 = true;
  }
  else {
    memset(local_318,0,0x100);
    dwMessageId = GetLastError();
    FormatMessageA(0x1000,(LPCVOID)0x0,dwMessageId,0,local_318,0x100,(va_list *)0x0);
    GetLastError();
    snprintf(local_218,0x200,"(error code %d): \'%s\'");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_360.Type = WriteError;
      local_360.TypeStr = "WriteError";
      local_360.Description = local_218;
      (*GMessageFunc)(&local_360);
    }
    (*GWriterState.Close)(GDataHandle);
    bVar1 = false;
    GDataHandle = 0;
  }
  return bVar1;
}

// Writer_SetBlockPoolLimit @ 14146e4b0

void __cdecl UE::Trace::Private::Writer_SetBlockPoolLimit(uint param_1)

{
  GPoolMaxSize = param_1;
  return;
}

// Writer_SetUpdateCallback @ 14146e4c0

void __cdecl UE::Trace::Private::Writer_SetUpdateCallback(_func___cdecl_void *param_1)

{
  GOnUpdate = param_1;
  return;
}

// Writer_Shutdown @ 14146e4d0

void __cdecl UE::Trace::Private::Writer_Shutdown(void)

{
  FPoolPage *pFVar1;
  FCacheBuffer *pFVar2;
  FPoolPage *_Memory;
  FCacheBuffer *_Memory_00;
  ulong64 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  if (GInitialized) {
    Writer_WorkerJoin();
    if (GDataHandle != 0) {
      (*GWriterState.Close)(GDataHandle);
      GDataHandle = 0;
    }
    _Memory = GPoolPageList;
    uVar3 = 0;
    if (GControlListen != 0) {
      CloseHandle((HANDLE)(GControlListen - 1));
      GControlListen = 0;
      _Memory = GPoolPageList;
      uVar3 = GControlListen;
    }
    while (GControlListen = uVar3, _Memory != (FPoolPage *)0x0) {
      pFVar1 = _Memory->NextPage;
      LOCK();
      GTraceStatistics.BlockPoolAllocated = GTraceStatistics.BlockPoolAllocated - _Memory->AllocSize
      ;
      UNLOCK();
      LOCK();
      GPoolTotalAllocated = GPoolTotalAllocated - _Memory->AllocSize;
      UNLOCK();
      uVar5 = _Memory->AllocSize;
      if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
        _aligned_free(_Memory);
      }
      else {
        (*FreeHook)(_Memory,(ulonglong)uVar5);
      }
      LOCK();
      GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar5;
      UNLOCK();
      _Memory = pFVar1;
      uVar3 = GControlListen;
    }
    iVar6 = 0;
    _Memory_00 = GCacheHeadBuffer;
    while (_Memory_00 != (FCacheBuffer *)0x0) {
      uVar5 = _Memory_00->Size + 0x20;
      pFVar2 = (_Memory_00->field0_0x0).Next;
      if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
        _aligned_free(_Memory_00);
      }
      else {
        (*FreeHook)(_Memory_00,(ulonglong)uVar5);
      }
      LOCK();
      GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar5;
      UNLOCK();
      iVar6 = iVar6 + uVar5;
      _Memory_00 = pFVar2;
    }
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(GCacheActiveBuffer);
    }
    else {
      (*FreeHook)(GCacheActiveBuffer,0x10000);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - 0x10000;
    UNLOCK();
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(GCacheCollector);
    }
    else {
      (*FreeHook)(GCacheCollector,0x400);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - 0x400;
    UNLOCK();
    LOCK();
    GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + (-0x10400 - iVar6);
    UNLOCK();
    uVar4 = (ulonglong)GPacketRing.Size;
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(GPacketRing.Data);
    }
    else {
      (*FreeHook)(GPacketRing.Data,uVar4);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar4;
    UNLOCK();
    LOCK();
    GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated - GPacketRing.Size
    ;
    UNLOCK();
    GPacketRing.Data = (uchar *)0x0;
    GInitialized = false;
  }
  return;
}

// Writer_ShutdownCache @ 14146e4e0

void __cdecl UE::Trace::Private::Writer_ShutdownCache(void)

{
  FCacheBuffer *pFVar1;
  FCacheBuffer *_Memory;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  _Memory = GCacheHeadBuffer;
  while (_Memory != (FCacheBuffer *)0x0) {
    uVar2 = _Memory->Size + 0x20;
    pFVar1 = (_Memory->field0_0x0).Next;
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(_Memory);
    }
    else {
      (*FreeHook)(_Memory,(ulonglong)uVar2);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar2;
    UNLOCK();
    iVar3 = iVar3 + uVar2;
    _Memory = pFVar1;
  }
  if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
    _aligned_free(GCacheActiveBuffer);
  }
  else {
    (*FreeHook)(GCacheActiveBuffer,0x10000);
  }
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - 0x10000;
  UNLOCK();
  if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
    _aligned_free(GCacheCollector);
  }
  else {
    (*FreeHook)(GCacheCollector,0x400);
  }
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - 0x400;
  UNLOCK();
  LOCK();
  GTraceStatistics.CacheAllocated = GTraceStatistics.CacheAllocated + (-0x10400 - iVar3);
  UNLOCK();
  return;
}

// Writer_ShutdownControl @ 14146e5d0

void __cdecl UE::Trace::Private::Writer_ShutdownControl(void)

{
  if (GControlListen != 0) {
    CloseHandle((HANDLE)(GControlListen - 1));
    GControlListen = 0;
  }
  return;
}

// Writer_ShutdownPool @ 14146e600

void __cdecl UE::Trace::Private::Writer_ShutdownPool(void)

{
  uint uVar1;
  FPoolPage *pFVar2;
  FPoolPage *_Memory;
  
  _Memory = GPoolPageList;
  while (_Memory != (FPoolPage *)0x0) {
    pFVar2 = _Memory->NextPage;
    LOCK();
    GTraceStatistics.BlockPoolAllocated = GTraceStatistics.BlockPoolAllocated - _Memory->AllocSize;
    UNLOCK();
    LOCK();
    GPoolTotalAllocated = GPoolTotalAllocated - _Memory->AllocSize;
    UNLOCK();
    uVar1 = _Memory->AllocSize;
    if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
      _aligned_free(_Memory);
    }
    else {
      (*FreeHook)(_Memory,(ulonglong)uVar1);
    }
    LOCK();
    GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar1;
    UNLOCK();
    _Memory = pFVar2;
  }
  return;
}

// Writer_ShutdownSharedBuffers @ 14146e680

void __cdecl UE::Trace::Private::Writer_ShutdownSharedBuffers(void)

{
  return;
}

// Writer_ShutdownTail @ 14146e690

void __cdecl UE::Trace::Private::Writer_ShutdownTail(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)GPacketRing.Size;
  if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
    _aligned_free(GPacketRing.Data);
  }
  else {
    (*FreeHook)(GPacketRing.Data,uVar1);
  }
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar1;
  UNLOCK();
  LOCK();
  GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated - GPacketRing.Size;
  UNLOCK();
  GPacketRing.Data = (uchar *)0x0;
  return;
}

// Writer_Stop @ 14146e6f0

bool __cdecl UE::Trace::Private::Writer_Stop(void)

{
  if ((GPendingDataHandle == 0) && (GDataHandle != 0)) {
    GPendingDataHandle = 0xffffffffffffffff;
    return true;
  }
  return false;
}

// Writer_TailAppend @ 14146e720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::Trace::Private::Writer_TailAppend(uint param_1,uchar *param_2,uint param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_TailAppend");
  }
  if (GPacketRing.Data != (uchar *)0x0) {
    puVar8 = (ushort *)0x0;
    uVar7 = 0;
    if (param_3 + 6 <= GPacketRing.Size) {
      uVar2 = (ushort)param_1 & 0x3fff;
      uVar6 = GPacketRing.Cursor;
      if (0x180 < param_3) {
        uVar6 = uVar7;
        if (param_3 < 0x7e000001) {
          uVar6 = param_3 + 0x10 + param_3 / 0xff;
        }
        uVar11 = uVar6 + 6;
        if (GPacketRing.Size < uVar11) {
          GPacketRing.Right = GPacketRing.Size;
          GPacketRing.Cursor = 0;
          GPacketRing.Left = GPacketRing.Size;
          puVar4 = puVar8;
        }
        else {
          uVar9 = GPacketRing.Cursor + uVar11;
          if (GPacketRing.Size < uVar9) {
            GPacketRing.Right = GPacketRing.Cursor;
            GPacketRing.Cursor = 0;
            GPacketRing.Left = 0;
            puVar4 = puVar8;
            uVar10 = uVar7;
            uVar9 = uVar11;
          }
          else {
            puVar4 = (ushort *)((ulonglong)GPacketRing._12_8_ >> 0x20);
            uVar10 = GPacketRing.Cursor;
          }
          uVar5 = (uint)puVar4;
          uVar1 = GPacketRing._12_8_;
          while (uVar5 < uVar9) {
            GPacketRing.Left = SUB84(uVar1,4);
            if (GPacketRing.Right <= (uint)puVar4) break;
            uVar5 = (uint)puVar4 + (uint)*(ushort *)((longlong)puVar4 + (longlong)GPacketRing.Data);
            puVar4 = (ushort *)(ulonglong)uVar5;
            GPacketRing._12_8_ = (ulonglong)uVar5 << 0x20;
            uVar1 = GPacketRing._12_8_;
            GPacketRing.Left = uVar5;
          }
          puVar4 = (ushort *)(GPacketRing.Data + uVar10);
          *puVar4 = (ushort)uVar11;
          GPacketRing.Cursor = uVar9;
        }
        puVar4[2] = (ushort)param_3;
        puVar4[1] = uVar2 | 0x8000;
        iVar3 = Encode(param_2,param_3,puVar4 + 3,uVar6);
        if (0 < iVar3) {
          GPacketRing.Cursor = GPacketRing.Cursor - (uVar6 - iVar3);
          *puVar4 = *puVar4 - (short)(uVar6 - iVar3);
          Writer_SendDataRaw(puVar4,(uint)*puVar4);
          goto LAB_14146e792;
        }
        uVar6 = GPacketRing.Cursor + (-6 - uVar6);
        GPacketRing._12_8_ = (ulonglong)GPacketRing.Left << 0x20;
      }
      uVar11 = param_3 + 4;
      if (GPacketRing.Size < uVar11) {
        GPacketRing.Right = GPacketRing.Size;
        puVar4 = (ushort *)&DAT_00000004;
        GPacketRing._12_8_ = (ulonglong)GPacketRing.Size << 0x20;
        _DAT_00000002 = uVar2;
LAB_14146e97d:
        memcpy(puVar4,param_2,(ulonglong)param_3);
      }
      else {
        uVar9 = uVar6 + uVar11;
        if (GPacketRing.Size < uVar9) {
          GPacketRing.Cursor = 0;
          GPacketRing.Left = 0;
          uVar9 = uVar11;
          GPacketRing.Right = uVar6;
        }
        else {
          puVar8 = (ushort *)((ulonglong)GPacketRing._12_8_ >> 0x20);
          uVar7 = uVar6;
        }
        uVar6 = (uint)puVar8;
        uVar1 = GPacketRing._12_8_;
        while (uVar6 < uVar9) {
          GPacketRing.Left = SUB84(uVar1,4);
          if (GPacketRing.Right <= (uint)puVar8) break;
          uVar6 = (uint)puVar8 + (uint)*(ushort *)((longlong)puVar8 + (longlong)GPacketRing.Data);
          puVar8 = (ushort *)(ulonglong)uVar6;
          GPacketRing._12_8_ = (ulonglong)uVar6 << 0x20;
          uVar1 = GPacketRing._12_8_;
          GPacketRing.Left = uVar6;
        }
        puVar8 = (ushort *)(GPacketRing.Data + uVar7);
        *puVar8 = (ushort)uVar11;
        puVar4 = puVar8 + 2;
        GPacketRing.Cursor = uVar9;
        puVar8[1] = uVar2;
        if (puVar4 != (ushort *)0x0) goto LAB_14146e97d;
      }
      Writer_SendDataRaw(puVar8,(uint)*puVar8);
      goto LAB_14146e792;
    }
    GPacketRing.Right = GPacketRing.Size;
    GPacketRing._12_8_ = (ulonglong)GPacketRing.Size << 0x20;
  }
  Writer_SendData(param_1,param_2,param_3);
LAB_14146e792:
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_TailOnConnect @ 14146e9a0

void __cdecl UE::Trace::Private::Writer_TailOnConnect(void)

{
  uint uVar1;
  _func___cdecl_void *UNRECOVERED_JUMPTABLE;
  _func___cdecl_void_char_ptr *p_Var2;
  uchar **ppuVar3;
  uchar *local_28;
  int local_20;
  uchar *local_18;
  uint local_10;
  
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_TailOnConnect");
  }
  UNRECOVERED_JUMPTABLE = FProfilerScope::OnScopeEnd;
  if (GPacketRing.Data != (uchar *)0x0) {
    ppuVar3 = &local_28;
    local_18 = GPacketRing.Data;
    local_28 = GPacketRing.Data + GPacketRing.Left;
    local_20 = GPacketRing.Right - GPacketRing.Left;
    local_10 = GPacketRing.Cursor;
    p_Var2 = FProfilerScope::OnScopeBegin;
    do {
      uVar1 = *(uint *)(ppuVar3 + 1);
      if ((uVar1 != 0) && (GDataHandle != 0)) {
        if (p_Var2 != (_func___cdecl_void_char_ptr *)0x0) {
          (*p_Var2)("Writer_SendDataRaw");
        }
        Writer_SendDataImplNoInstr(*ppuVar3,uVar1);
        UNRECOVERED_JUMPTABLE = FProfilerScope::OnScopeEnd;
        p_Var2 = FProfilerScope::OnScopeBegin;
        if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
          (*FProfilerScope::OnScopeEnd)();
          UNRECOVERED_JUMPTABLE = FProfilerScope::OnScopeEnd;
          p_Var2 = FProfilerScope::OnScopeBegin;
        }
      }
      ppuVar3 = ppuVar3 + 2;
    } while (ppuVar3 != (uchar **)&stack0xfffffffffffffff8);
  }
  if (UNRECOVERED_JUMPTABLE == (_func___cdecl_void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146ea7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// Writer_UnsetBlockPoolLimit @ 14146ea90

void __cdecl UE::Trace::Private::Writer_UnsetBlockPoolLimit(void)

{
  GPoolMaxSize = 0xffffffff;
  return;
}

// Writer_Update @ 14146eab0

void __cdecl UE::Trace::Private::Writer_Update(void)

{
  bool bVar1;
  
  if (GWorkerThread == 0) {
    LOCK();
    bVar1 = GUpdateInProgress == 0;
    if (bVar1) {
      GUpdateInProgress = 1;
    }
    UNLOCK();
    if (bVar1) {
      Writer_WorkerUpdateInternal();
      LOCK();
      GUpdateInProgress = 0;
      UNLOCK();
    }
  }
  return;
}

// Writer_UpdateControl @ 14146eaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::Private::Writer_UpdateControl(void)

{
  int iVar1;
  DWORD dwErrCode;
  SOCKET s;
  uint uVar2;
  ushort uVar3;
  undefined1 auStack_258 [32];
  LARGE_INTEGER local_238;
  FMessageEvent local_230;
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (GControlState == Closed) {
    GControlListen = TcpSocketListen(GControlPort);
    uVar3 = GControlPort;
    if (GControlListen == 0) {
      QueryPerformanceCounter(&local_238);
      uVar2 = 0;
      while (uVar3 = GControlPort, GControlListen == 0) {
        uVar3 = ((ushort)local_238.s.LowPart & 0x1fff) + 0x8000;
        GControlListen = TcpSocketListen(uVar3);
        if (GControlListen != 0) break;
        local_238.s.LowPart = local_238.s.LowPart * 0xd;
        uVar2 = uVar2 + 1;
        if (9 < uVar2) {
          GControlState = Failed;
          return;
        }
      }
    }
    GControlPort = uVar3;
    snprintf(local_218,0x200,"Control listening on port %u");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_230.Type = Display;
      local_230.TypeStr = "Display";
      local_230.Description = local_218;
      (*GMessageFunc)(&local_230);
    }
    GControlState = Listening;
  }
  else if (GControlState != Listening) {
    if (GControlState != Accepted) {
      return;
    }
    goto LAB_14146ecb5;
  }
  s = accept(GControlListen - 1,(sockaddr *)0x0,(int *)0x0);
  if (s == 0xffffffffffffffff) {
    iVar1 = WSAGetLastError();
    if (iVar1 == 0x2733) {
      return;
    }
    CloseHandle((HANDLE)(GControlListen - 1));
    GControlState = Failed;
    GControlListen = 0;
    return;
  }
  local_238.s.LowPart = 0;
  iVar1 = ioctlsocket(s,-0x7ffb9982,(u_long *)&local_238.QuadPart);
  if (iVar1 == -1) {
    dwErrCode = GetLastError();
    closesocket(s);
    SetLastError(dwErrCode);
    return;
  }
  GControlSocket = s + 1;
  GControlState = Accepted;
LAB_14146ecb5:
  Writer_ControlRecv();
  return;
}

// Writer_UpdateSharedBuffers @ 14146ecf0

void __cdecl UE::Trace::Private::Writer_UpdateSharedBuffers(void)

{
  FSharedBuffer *pFVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  pFVar1 = GSharedBuffer;
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_UpdateSharedBuffers");
    pFVar1 = GSharedBuffer;
  }
  do {
    while (GTailBuffer != pFVar1) {
      iVar3 = GTailBuffer->Cursor;
      while ((iVar3 + 1U & 0x3ff) != 0) {
        iVar3 = GTailBuffer->Cursor;
      }
      Writer_RetireSharedBufferImpl();
    }
  } while ((pFVar1->Cursor + 1U & 0x3ff) != 0);
  iVar3 = pFVar1->Cursor >> 10;
  if (iVar3 < 0) {
    Writer_RetireSharedBufferImpl();
  }
  else {
    uVar2 = pFVar1->Size - GTailPreSent;
    uVar4 = uVar2 - iVar3;
    if (uVar4 != 0) {
      Writer_CacheData((uchar *)((longlong)pFVar1 - (ulonglong)uVar2),uVar4);
      GTailPreSent = GTailPreSent + uVar4;
    }
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_WorkerCreate @ 14146edd0

void __cdecl UE::Trace::Private::Writer_WorkerCreate(void)

{
  if (GWorkerThread == 0) {
    GWorkerThread =
         (ulong64)CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                               `UE::Trace::Private::ThreadCreate'::__l2::<lambda_1>::
                               <lambda_invoker_cdecl>,Writer_WorkerThread,0,(LPDWORD)0x0);
  }
  return;
}

// Writer_WorkerJoin @ 14146ee20

void __cdecl UE::Trace::Private::Writer_WorkerJoin(void)

{
  bool bVar1;
  
  if (GWorkerThread != 0) {
    GWorkerThreadQuit = true;
    WaitForSingleObject((HANDLE)GWorkerThread,0xffffffff);
    CloseHandle((HANDLE)GWorkerThread);
    LOCK();
    bVar1 = GUpdateInProgress == 0;
    if (bVar1) {
      GUpdateInProgress = 1;
    }
    UNLOCK();
    if (bVar1) {
      Writer_WorkerUpdateInternal();
      LOCK();
      GUpdateInProgress = 0;
      UNLOCK();
    }
    GWorkerThread = 0;
  }
  return;
}

// Writer_WorkerThread @ 14146ee90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Trace::Private::Writer_WorkerThread(void)

{
  wchar_t wVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  DWORD dwMilliseconds;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  int local_98;
  int local_94;
  LARGE_INTEGER local_90;
  ulonglong local_88 [11];
  undefined1 local_29;
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar8 + 0x28);
  if (iVar7 == 0) {
    LOCK();
    UNLOCK();
    iVar7 = ::Counter + 2;
    ::Counter = ::Counter + 1;
    *(int *)(lVar8 + 0x28) = iVar7;
  }
  puVar6 = local_88;
  pwVar4 = L"Trace";
  do {
    pwVar9 = pwVar4;
    wVar1 = *pwVar9;
    *(byte *)puVar6 = (byte)wVar1 & 0x7f;
    if ((wVar1 & 0x7fU) == 0) break;
    puVar6 = (ulonglong *)((longlong)puVar6 + 1);
    pwVar4 = pwVar9 + 1;
  } while (puVar6 != local_28);
  uVar10 = (uint)((longlong)(pwVar9 + -0xa8306ccf) >> 1);
  local_29 = 0;
  if (-1 < TraceLogChannel->Enabled) {
    FImportantLogScope::Enter<UE::Trace::F_TraceThreadInfoFields>
              ((FImportantLogScope *)&local_a0.s,uVar10);
    LVar3 = local_a0;
    *(int *)local_a0 = iVar7;
    *(int *)(local_a0.QuadPart + 4) = 0;
    *(int *)(local_a0.QuadPart + 8) = 0x7fffffff;
    if ((int)uVar10 < 0) {
      sVar5 = strlen((char *)local_88);
      uVar10 = (uint)sVar5;
    }
    lVar8 = (longlong)local_94;
    *(uint *)(lVar8 + LVar3.QuadPart) = uVar10 << 0xd | 0x300;
    *(undefined1 *)(lVar8 + LVar3.QuadPart) = 1;
    memcpy((void *)(lVar8 + 4 + LVar3.QuadPart),local_88,(longlong)(int)uVar10);
    iVar7 = local_94 + uVar10;
    local_94 = iVar7 + 4;
    *(undefined1 *)((longlong)iVar7 + 4 + LVar3.QuadPart) = 3;
    LOCK();
    *(int *)(local_98 + local_a0.QuadPart) = *(int *)(local_98 + local_a0.QuadPart) + 1;
    UNLOCK();
  }
  do {
    LOCK();
    bVar11 = GUpdateInProgress == 0;
    if (bVar11) {
      GUpdateInProgress = 1;
    }
    UNLOCK();
  } while (!bVar11);
  GPoolMaxSize = GBlockPoolMaxSize;
  LOCK();
  GUpdateInProgress = 0;
  UNLOCK();
  QueryPerformanceFrequency(&local_a8);
  dVar2 = __real_408f400000000000 / (double)(ulonglong)local_a8.QuadPart;
  while (GWorkerThreadQuit == false) {
    QueryPerformanceCounter(&local_a0);
    LOCK();
    bVar11 = GUpdateInProgress == 0;
    if (bVar11) {
      GUpdateInProgress = 1;
    }
    UNLOCK();
    if (bVar11) {
      Writer_WorkerUpdateInternal();
      LOCK();
      GUpdateInProgress = 0;
      UNLOCK();
    }
    QueryPerformanceCounter(&local_90);
    uVar10 = (uint)(longlong)((double)(ulonglong)(local_90.QuadPart - (longlong)local_a0) * dVar2);
    dwMilliseconds = 0;
    if (uVar10 < GSleepTimeInMS) {
      dwMilliseconds = GSleepTimeInMS - uVar10;
    }
    Sleep(dwMilliseconds);
  }
  GPoolMaxSize = 0xffffffff;
  return;
}

// Writer_WorkerUpdateInternal @ 14146f120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

void __cdecl UE::Trace::Private::Writer_WorkerUpdateInternal(void)

{
  FSharedBuffer *pFVar1;
  FEventNode *pFVar2;
  ulong64 uVar3;
  bool bVar4;
  DWORD dwErrCode;
  uint uVar5;
  SOCKET s;
  FIter FVar6;
  int iVar7;
  void *pvVar8;
  ushort uVar9;
  uint uVar10;
  undefined1 auStack_288 [32];
  u_long local_268 [2];
  LARGE_INTEGER local_260;
  FMessageEvent local_258;
  FWriterState local_240;
  char local_228 [512];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_WorkerUpdateInternal");
  }
  if (GControlState == Closed) {
    GControlListen = TcpSocketListen(GControlPort);
    uVar9 = GControlPort;
    if (GControlListen == 0) {
      QueryPerformanceCounter(&local_260);
      pvVar8 = (void *)0x0;
      do {
        uVar9 = GControlPort;
        if (GControlListen != 0) goto LAB_14146f22a;
        uVar9 = ((ushort)local_260.s.LowPart & 0x1fff) + 0x8000;
        GControlListen = TcpSocketListen(uVar9);
        if (GControlListen != 0) goto LAB_14146f22a;
        local_260.s.LowPart = local_260.s.LowPart * 0xd;
        uVar5 = (int)pvVar8 + 1;
        pvVar8 = (void *)(ulonglong)uVar5;
      } while (uVar5 < 10);
      GControlState = Failed;
      goto LAB_14146f312;
    }
LAB_14146f22a:
    GControlPort = uVar9;
    snprintf(local_228,0x200,"Control listening on port %u");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_258.Type = Display;
      local_258.TypeStr = "Display";
      local_258.Description = local_228;
      (*GMessageFunc)(&local_258);
    }
    GControlState = Listening;
LAB_14146f279:
    s = accept(GControlListen - 1,(sockaddr *)0x0,(int *)0x0);
    if (s == 0xffffffffffffffff) {
      iVar7 = WSAGetLastError();
      if (iVar7 != 0x2733) {
        CloseHandle((HANDLE)(GControlListen - 1));
        GControlListen = 0;
        GControlState = Failed;
      }
      goto LAB_14146f312;
    }
    local_268[0] = 0;
    iVar7 = ioctlsocket(s,-0x7ffb9982,local_268);
    if (iVar7 == -1) {
      dwErrCode = GetLastError();
      closesocket(s);
      SetLastError(dwErrCode);
      goto LAB_14146f312;
    }
    GControlSocket = s + 1;
    GControlState = Accepted;
  }
  else {
    if (GControlState == Listening) goto LAB_14146f279;
    if (GControlState != Accepted) goto LAB_14146f312;
  }
  Writer_ControlRecv();
LAB_14146f312:
  uVar3 = GPendingDataHandle;
  if (GPendingDataHandle != 0) {
    if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
      (*FProfilerScope::OnScopeBegin)("Writer_UpdateConnection");
    }
    if (uVar3 == 0xffffffffffffffff) {
      if (CloseInertia < 1) {
        CloseInertia = 2;
      }
      CloseInertia = CloseInertia + -1;
      if (CloseInertia < 1) {
        if (GDataHandle != 0) {
          (*GWriterState.Close)(GDataHandle);
        }
        GDataHandle = 0;
        GPendingDataHandle = 0;
      }
    }
    else {
      GPendingDataHandle = 0;
      local_240 = GPendingWriterState;
      if (GDataHandle == 0) {
        Writer_CreateGuid(&GTraceGuid);
        GWriterState = local_240;
        GDataHandle = uVar3 & 0xffffffffffff;
        bVar4 = Writer_SessionPrologue();
        pFVar2 = GNewEventList;
        if (bVar4) {
          GTraceStatistics.BytesSent = 0;
          if (GEventListHead != (FEventNode *)0x0) {
            LOCK();
            GNewEventList = GEventListHead;
            UNLOCK();
            GEventListTail->Next = pFVar2;
            GEventListTail = (FEventNode *)0x0;
            GEventListHead = (FEventNode *)0x0;
          }
          FVar6 = FEventNode::ReadNew();
          Writer_DescribeEvents(FVar6);
          Writer_CacheOnConnect();
          Writer_CallbackOnConnect();
          if ((uVar3 >> 0x30 & 1) == 0) {
            Writer_TailOnConnect();
          }
          GSyncPacketCountdown = '\x03';
        }
      }
      else {
        (*GWriterState.Close)(uVar3 & 0xffffffffffff);
      }
    }
    if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
      (*FProfilerScope::OnScopeEnd)();
    }
  }
  if (GDataHandle != 0) {
    Writer_AnnounceChannels();
    pFVar2 = GNewEventList;
    LOCK();
    GNewEventList = (FEventNode *)0x0;
    UNLOCK();
    FVar6.Inner = (void *)0x0;
    if (pFVar2 != (FEventNode *)0x0) {
      FVar6.Inner = pFVar2;
      if (GEventListHead == (FEventNode *)0x0) {
        GEventListHead = pFVar2;
      }
      else {
        GEventListTail->Next = pFVar2;
      }
    }
    Writer_DescribeEvents(FVar6);
  }
  pFVar1 = GSharedBuffer;
  if (FProfilerScope::OnScopeBegin != (_func___cdecl_void_char_ptr *)0x0) {
    (*FProfilerScope::OnScopeBegin)("Writer_UpdateSharedBuffers");
    pFVar1 = GSharedBuffer;
  }
  do {
    while (GTailBuffer != pFVar1) {
      iVar7 = GTailBuffer->Cursor;
      while ((iVar7 + 1U & 0x3ff) != 0) {
        iVar7 = GTailBuffer->Cursor;
      }
      Writer_RetireSharedBufferImpl();
    }
  } while ((pFVar1->Cursor + 1U & 0x3ff) != 0);
  iVar7 = pFVar1->Cursor >> 10;
  if (iVar7 < 0) {
    Writer_RetireSharedBufferImpl();
  }
  else {
    uVar5 = pFVar1->Size - GTailPreSent;
    uVar10 = uVar5 - iVar7;
    if (uVar10 != 0) {
      Writer_CacheData((uchar *)((longlong)pFVar1 - (ulonglong)uVar5),uVar10);
      GTailPreSent = GTailPreSent + uVar10;
    }
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  Writer_DrainBuffers();
  Writer_SendSync();
  if (GOnUpdate != (_func___cdecl_void *)0x0) {
    (*GOnUpdate)();
  }
  if (FProfilerScope::OnScopeEnd != (_func___cdecl_void *)0x0) {
    (*FProfilerScope::OnScopeEnd)();
  }
  return;
}

// Writer_WriteSnapshot @ 14146f5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

bool __cdecl UE::Trace::Private::Writer_WriteSnapshot(FSnapshotTarget *param_1)

{
  uint uVar1;
  char *pcVar2;
  double dVar3;
  unkuint9 Var4;
  double dVar5;
  schar sVar6;
  ulong64 uVar7;
  _func___cdecl_bool_ulong64_void_ptr_uint *p_Var8;
  _func___cdecl_void_ulong64 *p_Var9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  DWORD dwMessageId;
  FIter FVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStackY_458 [32];
  LARGE_INTEGER local_418;
  ulong64 local_410;
  LARGE_INTEGER local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  uint uStack_3bc;
  FMessageEvent local_3b8;
  FMessageEvent local_3a0;
  CHAR local_388 [256];
  char local_288 [512];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_458;
  if (GPacketRing.Data == (uchar *)0x0) {
    return false;
  }
  QueryPerformanceFrequency(&local_408);
  QueryPerformanceCounter(&local_418);
  dVar5 = __real_3ff0000000000000;
  dVar3 = (double)(ulonglong)local_408.QuadPart;
  Var4 = (unkuint9)(ulonglong)local_418.QuadPart;
  do {
    LOCK();
    bVar22 = GUpdateInProgress == 0;
    if (bVar22) {
      GUpdateInProgress = 1;
    }
    UNLOCK();
    if (bVar22) break;
    Sleep(0);
    QueryPerformanceCounter(&local_418);
  } while ((double)(ulonglong)local_418.QuadPart / dVar3 - (double)(unkint9)Var4 / dVar3 <= dVar5);
  QueryPerformanceCounter(&local_418);
  if (dVar5 < (double)(ulonglong)local_418.QuadPart / dVar3 - (double)(unkint9)Var4 / dVar3) {
    bVar22 = false;
    goto LAB_14146fadb;
  }
  Writer_WorkerUpdateInternal();
  uVar18 = GTraceStatistics._64_8_;
  uVar17 = GTraceStatistics._56_8_;
  uVar16 = GTraceStatistics._48_8_;
  uVar15 = GTraceStatistics._40_8_;
  uVar14 = GTraceStatistics.BlockPoolAllocated;
  uVar13 = GTraceStatistics.MemoryUsed;
  uVar12 = GTraceStatistics.BytesEmitted;
  uVar11 = GTraceStatistics.BytesTraced;
  uVar10 = GTraceStatistics.BytesSent;
  p_Var9 = GWriterState.Close;
  p_Var8 = GWriterState.Write;
  uVar7 = GDataHandle;
  sVar6 = GSyncPacketCountdown;
  bVar22 = GDataHandle != 0;
  GDataHandle = 0;
  local_410 = GPendingDataHandle;
  GWriterState.Write = IoWrite;
  GPendingDataHandle = 0;
  GSyncPacketCountdown = '\x03';
  GWriterState.Close = IoClose;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = 0;
  uStack_3e8 = 0;
  local_3e0 = 0;
  GTraceStatistics.BytesSent = 0;
  GTraceStatistics.BytesTraced = 0;
  GTraceStatistics.BytesEmitted = 0;
  GTraceStatistics.MemoryUsed = 0;
  uStack_3d8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3c0 = 0;
  GTraceStatistics.BlockPoolAllocated = 0;
  GTraceStatistics.BlockPoolFreeBlocks = 0;
  GTraceStatistics.BlockPoolAllocatedBlocks = 0;
  GTraceStatistics._64_8_ = (ulonglong)uStack_3bc << 0x20;
  GTraceStatistics.SharedBufferAllocated = 0;
  GTraceStatistics.FixedBufferAllocated = 0;
  GTraceStatistics.CacheAllocated = 0;
  GTraceStatistics.CacheUsed = 0;
  pcVar2 = (param_1->field1_0x8).Host.Host;
  if (param_1->Type == FileTarget) {
    GDataHandle = FileOpen(pcVar2);
LAB_14146f8c8:
    if (((void *)GDataHandle != (void *)0x0) && (bVar19 = Writer_SessionPrologue(), bVar19)) {
      FVar20.Inner = GEventListHead;
      if ((GEventListHead == (FEventNode *)0x0) &&
         (FVar20.Inner = GNewEventList, GNewEventList == (FEventNode *)0x0)) {
        FVar20.Inner = (void *)0x0;
      }
      Writer_DescribeEvents(FVar20);
      Writer_CacheOnConnect();
      Writer_CallbackOnConnect();
      Writer_TailOnConnect();
      GSyncPacketCountdown = '\x03';
      do {
        Writer_SendSync();
      } while ('\0' < GSyncPacketCountdown);
      if (GDataHandle != 0) {
        (*GWriterState.Close)(GDataHandle);
      }
      GPendingDataHandle = local_410;
      bVar22 = true;
      GSyncPacketCountdown = sVar6;
      GDataHandle = uVar7;
      GWriterState.Write = p_Var8;
      GWriterState.Close = p_Var9;
      GTraceStatistics.BytesSent = uVar10;
      GTraceStatistics.BytesTraced = uVar11;
      GTraceStatistics.BytesEmitted = uVar12;
      GTraceStatistics.MemoryUsed = uVar13;
      GTraceStatistics.BlockPoolAllocated = uVar14;
      GTraceStatistics._40_8_ = uVar15;
      GTraceStatistics._48_8_ = uVar16;
      GTraceStatistics._56_8_ = uVar17;
      GTraceStatistics._64_8_ = uVar18;
      goto LAB_14146fadb;
    }
    memset(local_388,0,0x100);
    dwMessageId = GetLastError();
    FormatMessageA(0x1000,(LPCVOID)0x0,dwMessageId,0,local_388,0x100,(va_list *)0x0);
    GetLastError();
    snprintf(local_288,0x200,"(error code %d): \'%s\'");
    if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
      local_3b8.Type = FileOpenError;
      local_3b8.TypeStr = "FileOpenError";
      local_3b8.Description = local_288;
      (*GMessageFunc)(&local_3b8);
    }
    if ((bVar22) && (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0)) {
      local_3a0.Type = Display;
      local_3a0.TypeStr = "Display";
      local_3a0.Description =
           "Creating a snapshot during ongoing trace is known to fail on some combinations of platforms and hardware."
      ;
      (*GMessageFunc)(&local_3a0);
    }
  }
  else {
    uVar1 = (param_1->field1_0x8).Host.Port;
    uVar21 = 0x7bd;
    if (uVar1 != 0) {
      uVar21 = uVar1;
    }
    GDataHandle = TcpSocketConnect(pcVar2,(ushort)uVar21);
    if ((void *)GDataHandle != (void *)0x0) {
      if ((GDataHandle & 0xffff000000000000) != 0) {
        (*GWriterState.Close)(GDataHandle);
        GDataHandle = (ulong64)(void *)0x0;
      }
      goto LAB_14146f8c8;
    }
  }
  GPendingDataHandle = local_410;
  bVar22 = false;
  GSyncPacketCountdown = sVar6;
  GDataHandle = uVar7;
  GWriterState.Write = p_Var8;
  GWriterState.Close = p_Var9;
  GTraceStatistics.BytesSent = uVar10;
  GTraceStatistics.BytesTraced = uVar11;
  GTraceStatistics.BytesEmitted = uVar12;
  GTraceStatistics.MemoryUsed = uVar13;
  GTraceStatistics.BlockPoolAllocated = uVar14;
  GTraceStatistics._40_8_ = uVar15;
  GTraceStatistics._48_8_ = uVar16;
  GTraceStatistics._56_8_ = uVar17;
  GTraceStatistics._64_8_ = uVar18;
LAB_14146fadb:
  LOCK();
  UNLOCK();
  GUpdateInProgress = 0;
  return bVar22;
}

// Writer_WriteSnapshotTo @ 14146fb30

bool __cdecl UE::Trace::Private::Writer_WriteSnapshotTo(char *param_1)

{
  bool bVar1;
  FSnapshotTarget local_28;
  
  local_28.Type = FileTarget;
  local_28.field1_0x8.Host.Host = param_1;
  bVar1 = Writer_WriteSnapshot(&local_28);
  return bVar1;
}

// Writer_WriteTo @ 14146fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMessageType": Some values do not have unique names */

bool __cdecl UE::Trace::Private::Writer_WriteTo(char *param_1,uint param_2)

{
  DWORD DVar1;
  HANDLE pvVar2;
  ulonglong uVar3;
  undefined1 auStackY_378 [32];
  FMessageEvent local_338;
  CHAR local_318 [256];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if (GPendingDataHandle == 0) {
    Writer_InternalInitialize();
    pvVar2 = CreateFileA(param_1,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    uVar3 = 0;
    if (pvVar2 != (HANDLE)0xffffffffffffffff) {
      uVar3 = (longlong)pvVar2 + 1;
    }
    if (uVar3 == 0) {
      DVar1 = GetLastError();
      DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0,local_318,0x100,(va_list *)0x0);
      if (DVar1 == 0) {
        GetLastError();
        snprintf(local_218,0x200,"(error code %d)");
      }
      else {
        snprintf(local_218,0x200,"Opening file (%s): \'%s\'");
      }
      if (GMessageFunc != (_func___cdecl_void_FMessageEvent_ptr *)0x0) {
        local_338.Type = FileOpenError;
        local_338.TypeStr = "FileOpenError";
        local_338.Description = local_218;
        (*GMessageFunc)(&local_338);
      }
    }
    else {
      if ((uVar3 & 0xffff000000000000) == 0) {
        GPendingDataHandle = (ulonglong)param_2 << 0x30 | uVar3;
        GPendingWriterState.Write = IoWrite;
        GPendingWriterState.Close = IoClose;
        return true;
      }
      (*GWriterState.Close)(uVar3);
    }
  }
  return false;
}

