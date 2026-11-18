// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FMallocArena @ 141815b40

FMallocArena * __thiscall FMallocArena::FMallocArena(FMallocArena *this)

{
  FMemoryArena::FMemoryArena((FMemoryArena *)this);
  *(undefined ***)this = &___7FMallocArena__6B_;
  return this;
}

// ~FMallocArena @ 141816ae0

void __thiscall FMallocArena::~FMallocArena(FMallocArena *this)

{
  *(undefined ***)this = &___7FMallocArena__6B_;
  FMemoryArena::~FMemoryArena((FMemoryArena *)this);
  return;
}

// InternalAlloc @ 1418291b0

void * __thiscall FMallocArena::InternalAlloc(FMallocArena *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,(uint)param_2);
  return pvVar1;
}

// InternalFree @ 1418291f0

void __thiscall FMallocArena::InternalFree(FMallocArena *this,void *param_1,ulong64 param_2)

{
  FMemory::Free(param_1);
  return;
}

// InternalGetBlockSize @ 141829240

ulong64 __thiscall FMallocArena::InternalGetBlockSize(FMallocArena *this,void *param_1)

{
  ulong64 uVar1;
  
  uVar1 = FMemory::GetAllocSize(param_1);
  return uVar1;
}

// InternalGetDebugName @ 141829260

wchar_t * __thiscall FMallocArena::InternalGetDebugName(FMallocArena *this)

{
  return L"MallocArena";
}

