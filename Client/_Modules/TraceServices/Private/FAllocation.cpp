// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 16

// GetAddress @ 14d3dff00

ulong64 __thiscall TraceServices::IAllocationsProvider::FAllocation::GetAddress(FAllocation *this)

{
  return *(ulong64 *)this;
}

// GetAlignment @ 14d3dff10

uint __thiscall TraceServices::IAllocationsProvider::FAllocation::GetAlignment(FAllocation *this)

{
  return (uint)(byte)this[0xf];
}

// GetAllocCallstackId @ 14d3dff20

uint __thiscall
TraceServices::IAllocationsProvider::FAllocation::GetAllocCallstackId(FAllocation *this)

{
  return *(uint *)(this + 0x2c);
}

// GetAllocThreadId @ 14d3dff30

uint __thiscall
TraceServices::IAllocationsProvider::FAllocation::GetAllocThreadId(FAllocation *this)

{
  return (uint)*(ushort *)(this + 0x28);
}

// GetEndEventIndex @ 14d3e07e0

uint __thiscall
TraceServices::IAllocationsProvider::FAllocation::GetEndEventIndex(FAllocation *this)

{
  return *(uint *)(this + 0x14);
}

// GetEndTime @ 14d3e07f0

double __thiscall TraceServices::IAllocationsProvider::FAllocation::GetEndTime(FAllocation *this)

{
  return *(double *)(this + 0x20);
}

// GetFreeCallstackId @ 14d3e0ab0

uint __thiscall
TraceServices::IAllocationsProvider::FAllocation::GetFreeCallstackId(FAllocation *this)

{
  return *(uint *)(this + 0x30);
}

// GetFreeThreadId @ 14d3e0ac0

uint __thiscall TraceServices::IAllocationsProvider::FAllocation::GetFreeThreadId(FAllocation *this)

{
  return (uint)*(ushort *)(this + 0x2a);
}

// GetMetadataId @ 14d3e0e50

uint __thiscall TraceServices::IAllocationsProvider::FAllocation::GetMetadataId(FAllocation *this)

{
  return *(uint *)(this + 0x34);
}

// GetRootHeap @ 14d3e2510

uint __thiscall TraceServices::IAllocationsProvider::FAllocation::GetRootHeap(FAllocation *this)

{
  return (uint)(byte)this[0x3c];
}

// GetSize @ 14d3e2520

ulong64 __thiscall TraceServices::IAllocationsProvider::FAllocation::GetSize(FAllocation *this)

{
  return *(ulonglong *)(this + 8) & 0xffffffffffffff;
}

// GetStartEventIndex @ 14d3e2540

uint __thiscall
TraceServices::IAllocationsProvider::FAllocation::GetStartEventIndex(FAllocation *this)

{
  return *(uint *)(this + 0x10);
}

// GetStartTime @ 14d3e2550

double __thiscall TraceServices::IAllocationsProvider::FAllocation::GetStartTime(FAllocation *this)

{
  return *(double *)(this + 0x18);
}

// GetTag @ 14d3e2c50

uint __thiscall TraceServices::IAllocationsProvider::FAllocation::GetTag(FAllocation *this)

{
  return *(uint *)(this + 0x38);
}

// IsHeap @ 14d3e6b20

bool __thiscall TraceServices::IAllocationsProvider::FAllocation::IsHeap(FAllocation *this)

{
  return (bool)((byte)this[0x3d] & 1);
}

// IsSwap @ 14d3e6b60

bool __thiscall TraceServices::IAllocationsProvider::FAllocation::IsSwap(FAllocation *this)

{
  return (bool)((byte)this[0x3d] >> 1 & 1);
}

