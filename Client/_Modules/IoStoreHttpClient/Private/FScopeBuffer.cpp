// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 7

// FScopeBuffer @ 14456b620

FScopeBuffer * __thiscall
LaneTraceDetail::FScopeBuffer::FScopeBuffer(FScopeBuffer *this,FChannel *param_1)

{
  this->Channel = param_1;
  this->LastTimestamp = 0;
  this->Cursor = this->Buffer;
  this->PrevTimestamp = 0;
  this->ThreadIdOverride = 0;
  this->Depth = 0;
  return this;
}

// Enter @ 1445728a0

void __thiscall
LaneTraceDetail::FScopeBuffer::Enter(FScopeBuffer *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_1 < this->LastTimestamp) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Timestamp >= LastTimestamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                       ,0xc0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->PrevTimestamp;
  this->LastTimestamp = param_1;
  this->PrevTimestamp = param_1;
  iVar4 = Encode64_7bit((param_1 - uVar1) * 2 | 1,this->Cursor);
  this->Cursor = this->Cursor + iVar4;
  uVar6 = (param_2 & 0xfffc000) << 2 | param_2 & 0x3fff;
  lVar5 = (ulonglong)(0x7f < (int)param_2) + (ulonglong)(0x3fff < (int)param_2) +
          (ulonglong)(0x1fffff < (int)param_2) + 1;
  *(uint *)this->Cursor =
       0x808080 >> ((4U - (char)lVar5 & 3) << 3) | (uVar6 & 0x3f803f80) * 2 | uVar6 & 0x7f007f;
  this->Cursor = this->Cursor + lVar5;
  this->Depth = this->Depth + 1;
  return;
}

// Flush @ 144573200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall LaneTraceDetail::FScopeBuffer::Flush(FScopeBuffer *this,bool param_1)

{
  uchar *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  puVar1 = this->Buffer;
  if ((this->Cursor != puVar1) &&
     (((this->Depth == 0 || (param_1)) || (this->Buffer + 0x68 < this->Cursor)))) {
    if (-1 < this->Channel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<LaneTraceDetail::FCpuProfilerEventBatchFields>
                ((TLogScope<1> *)&local_28);
      *local_28 = (short)this->ThreadIdOverride;
      UE::Trace::Private::Field_WriteAuxData
                (0,puVar1,(*(int *)&this->Cursor - (int)this) - 0x26U & 0x7ffff);
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar2 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0x20);
      **(undefined1 **)(lVar2 + 0x20) = 6;
      lVar3 = *(longlong *)(lVar2 + 0x20) + 1;
      *(longlong *)(lVar2 + 0x20) = lVar3;
      if (lVar2 != local_20) {
        *(longlong *)(lVar2 + 0x28) = lVar3;
      }
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
    this->Cursor = puVar1;
    this->LastTimestamp = 0;
    this->PrevTimestamp = 0;
  }
  return;
}

// GetDepth @ 144573eb0

uint __thiscall LaneTraceDetail::FScopeBuffer::GetDepth(FScopeBuffer *this)

{
  return (uint)this->Depth;
}

// IsInScope @ 144578aa0

bool __thiscall LaneTraceDetail::FScopeBuffer::IsInScope(FScopeBuffer *this)

{
  return this->Depth != 0;
}

// Leave @ 1445793f0

void __thiscall LaneTraceDetail::FScopeBuffer::Leave(FScopeBuffer *this,ulong64 param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 < this->LastTimestamp) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Timestamp >= LastTimestamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->LastTimestamp = param_1;
  if (this->Depth != 0) {
    uVar1 = this->PrevTimestamp;
    this->PrevTimestamp = param_1;
    iVar4 = Encode64_7bit((param_1 - uVar1) * 2,this->Cursor);
    this->Cursor = this->Cursor + iVar4;
    this->Depth = this->Depth - 1;
  }
  return;
}

// SetThreadId @ 144581c30

void __thiscall LaneTraceDetail::FScopeBuffer::SetThreadId(FScopeBuffer *this,uint param_1)

{
  this->ThreadIdOverride = param_1;
  return;
}

