// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// operator_delete @ 14d3d15a0

void __cdecl TraceServices::IAllocationsProvider::FAllocations::operator_delete(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 8));
    }
    ::operator_delete(param_1,0x18);
  }
  return;
}

// Get @ 14d3dfd80

FAllocation * __thiscall
TraceServices::IAllocationsProvider::FAllocations::Get(FAllocations *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAllocation *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < *(int *)(this + 0x10)) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAllocation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FAllocation **)(*(longlong *)(this + 8) + (longlong)(int)param_1 * 8);
}

// Num @ 14d3e7dc0

uint __thiscall TraceServices::IAllocationsProvider::FAllocations::Num(FAllocations *this)

{
  return *(uint *)(this + 0x10);
}

