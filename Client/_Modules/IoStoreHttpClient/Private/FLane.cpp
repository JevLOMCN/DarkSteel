// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 7

// FLane @ 14456b4b0

FLane * __thiscall LaneTraceDetail::FLane::FLane(FLane *this,FLaneTraceSpec *param_1)

{
  FChannel *pFVar1;
  char *_Str;
  uchar *puVar2;
  uint uVar3;
  longlong lVar5;
  uint uVar6;
  FImportantLogScope local_28;
  size_t sVar4;
  
  pFVar1 = param_1->Channel;
  (this->Buffer).LastTimestamp = 0;
  (this->Buffer).Cursor = (this->Buffer).Buffer;
  (this->Buffer).PrevTimestamp = 0;
  (this->Buffer).Channel = pFVar1;
  (this->Buffer).ThreadIdOverride = 0;
  (this->Buffer).Depth = 0;
  LOCK();
  UNLOCK();
  uVar3 = (param_1->Name).Size;
  uVar6 = NextId + 0x801;
  NextId = NextId + 1;
  UE::Trace::Private::FImportantLogScope::Enter<LaneTraceDetail::F_TraceThreadInfoFields>
            (&local_28,uVar3);
  puVar2 = local_28.Ptr;
  *(uint *)local_28.Ptr = uVar6;
  *(int *)((longlong)local_28.Ptr + 4) = param_1->Weight;
  _Str = (param_1->Name).DataPtr;
  if ((int)uVar3 < 0) {
    sVar4 = strlen(_Str);
    uVar3 = (uint)sVar4;
  }
  lVar5 = (longlong)local_28.AuxCursor;
  *(uint *)(lVar5 + (longlong)puVar2) = uVar3 << 0xd | 0x200;
  *(undefined1 *)(lVar5 + (longlong)puVar2) = 1;
  memcpy((void *)(lVar5 + 4 + (longlong)puVar2),_Str,(longlong)(int)uVar3);
  *(undefined1 *)((longlong)(int)(local_28.AuxCursor + uVar3) + 4 + (longlong)puVar2) = 3;
  LOCK();
  *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) =
       *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) + 1;
  UNLOCK();
  (this->Buffer).ThreadIdOverride = uVar6;
  return this;
}

// ~FLane @ 14456c050

void __thiscall LaneTraceDetail::FLane::~FLane(FLane *this)

{
  FScopeBuffer::Flush(&this->Buffer,true);
  return;
}

// Change @ 14456ff60

void __thiscall LaneTraceDetail::FLane::Change(FLane *this,uint param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  FScopeBuffer::Leave(&this->Buffer,local_res8.QuadPart);
  FScopeBuffer::Enter(&this->Buffer,local_res8.QuadPart,param_1);
  FScopeBuffer::Flush(&this->Buffer,false);
  return;
}

// Enter @ 144572850

void __thiscall LaneTraceDetail::FLane::Enter(FLane *this,uint param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  FScopeBuffer::Enter(&this->Buffer,local_res8.QuadPart,param_1);
  FScopeBuffer::Flush(&this->Buffer,false);
  return;
}

// Leave @ 1445793b0

void __thiscall LaneTraceDetail::FLane::Leave(FLane *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  FScopeBuffer::Leave(&this->Buffer,local_res8[0].QuadPart);
  FScopeBuffer::Flush(&this->Buffer,false);
  return;
}

// LeaveAll @ 1445794c0

void __thiscall LaneTraceDetail::FLane::LeaveAll(FLane *this)

{
  ushort *puVar1;
  uchar **ppuVar2;
  ushort uVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar3 = (this->Buffer).Depth;
  while (uVar3 != 0) {
    if (((ulonglong)local_res8 < (this->Buffer).LastTimestamp) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Timestamp >= LastTimestamp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                           ,0xcd,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->Buffer).LastTimestamp = (ulong64)local_res8;
    if ((this->Buffer).Depth == 0) break;
    uVar4 = (this->Buffer).PrevTimestamp;
    (this->Buffer).PrevTimestamp = (ulong64)local_res8;
    iVar7 = Encode64_7bit((local_res8.QuadPart - uVar4) * 2,(this->Buffer).Cursor);
    puVar1 = &(this->Buffer).Depth;
    *puVar1 = *puVar1 - 1;
    ppuVar2 = &(this->Buffer).Cursor;
    *ppuVar2 = *ppuVar2 + iVar7;
    uVar3 = (this->Buffer).Depth;
  }
  FScopeBuffer::Flush(&this->Buffer,true);
  return;
}

// NewScope @ 14457baf0

uint __cdecl LaneTraceDetail::FLane::NewScope(TStringView<char> *param_1)

{
  uint uVar1;
  
  uVar1 = FCpuProfilerTrace::OutputEventType(param_1->DataPtr,"",0);
  return uVar1;
}

