// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// FreeBuffer @ 14d3df6e0

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::CreateBlocks'::__l2::<lambda_1>_>::
FreeBuffer(void *this)

{
  ulong64 uVar1;
  
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  uVar1 = *(ulong64 *)((longlong)this + 0x10);
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  TraceServices::FAnalysisCache::ReleaseBlocks
            (*(FAnalysisCache **)((longlong)this + 0x20),*(uchar **)((longlong)this + 8),
             *(uint *)((longlong)this + 0x28),*(uint *)((longlong)this + 0x2c),uVar1);
  return;
}

// FreeBuffer @ 14d3df750

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::GetBlocks'::__l2::<lambda_1>_>::
FreeBuffer(void *this)

{
  ulong64 uVar1;
  
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  uVar1 = *(ulong64 *)((longlong)this + 0x10);
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  TraceServices::FAnalysisCache::ReleaseBlocks
            (*(FAnalysisCache **)((longlong)this + 0x20),*(uchar **)((longlong)this + 8),
             *(uint *)((longlong)this + 0x28),*(uint *)((longlong)this + 0x2c),uVar1);
  return;
}

