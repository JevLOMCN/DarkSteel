// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FFlushScope @ 145ded280

FFlushScope * __thiscall FRenderCommandList::FFlushScope::FFlushScope(FFlushScope *this)

{
  longlong lVar1;
  FRenderCommandList *this_00;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this_00 = *(FRenderCommandList **)(lVar1 + 0xed0);
  *(undefined8 *)(lVar1 + 0xed0) = 0;
  this->CommandList = this_00;
  if (this_00 != (FRenderCommandList *)0x0) {
    FRenderCommandList::Flush(this_00);
  }
  return this;
}

// ~FFlushScope @ 145df0a50

void __thiscall FRenderCommandList::FFlushScope::~FFlushScope(FFlushScope *this)

{
  if (this->CommandList != (FRenderCommandList *)0x0) {
    *(FRenderCommandList **)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0) =
         this->CommandList;
  }
  return;
}

