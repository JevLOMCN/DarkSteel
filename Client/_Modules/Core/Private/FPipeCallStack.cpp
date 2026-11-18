// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Pop @ 141a8dc40

void __cdecl UE::Tasks::FPipeCallStack::Pop(FPipe *param_1)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(int *)(lVar2 + 0xbe0) - 1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar2 + 0xbe0)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(FPipe **)(*(longlong *)(lVar2 + 0xbd8) + -8 + (longlong)*(int *)(lVar2 + 0xbe0) * 8) !=
      param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CallStack.Last() == &Pipe",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\Pipe.cpp"
                       ,0x6b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(int *)(lVar2 + 0xbe0) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(int *)(lVar2 + 0xbe0) - 1;
  _Dst = (void *)(*(longlong *)(lVar2 + 0xbd8) + (longlong)(int)uVar5 * 8);
  iVar1 = ~uVar5 + *(int *)(lVar2 + 0xbe0);
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar1 << 3);
  }
  *(int *)(lVar2 + 0xbe0) = *(int *)(lVar2 + 0xbe0) + -1;
  return;
}

