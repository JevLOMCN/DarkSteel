// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FAnsiArena @ 141814c10

FAnsiArena * __thiscall FAnsiArena::FAnsiArena(FAnsiArena *this)

{
  FMemoryArena::FMemoryArena((FMemoryArena *)this);
  *(undefined ***)this = &___7FAnsiArena__6B_;
  return this;
}

// ~FAnsiArena @ 141816360

void __thiscall FAnsiArena::~FAnsiArena(FAnsiArena *this)

{
  *(undefined ***)this = &___7FAnsiArena__6B_;
  FMemoryArena::~FMemoryArena((FMemoryArena *)this);
  return;
}

// InternalAlloc @ 141829190

void * __thiscall FAnsiArena::InternalAlloc(FAnsiArena *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = FMallocAnsi::Malloc(&GAnsiMalloc,param_1,(uint)param_2);
  return pvVar1;
}

// InternalFree @ 1418291d0

void __thiscall FAnsiArena::InternalFree(FAnsiArena *this,void *param_1,ulong64 param_2)

{
  FMallocAnsi::Free(&GAnsiMalloc,param_1);
  return;
}

// InternalGetBlockSize @ 141829210

ulong64 __thiscall FAnsiArena::InternalGetBlockSize(FAnsiArena *this,void *param_1)

{
  ulong64 local_res18 [2];
  
  local_res18[0] = 0;
  FMallocAnsi::GetAllocationSize(&GAnsiMalloc,param_1,local_res18);
  return local_res18[0];
}

// InternalGetDebugName @ 141829250

wchar_t * __thiscall FAnsiArena::InternalGetDebugName(FAnsiArena *this)

{
  return L"AnsiArena";
}

