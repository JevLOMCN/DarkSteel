// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// OnScopeEnter @ 145cb44a0

void __cdecl FScopedUniformBufferStaticBindings::OnScopeEnter(void)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)_tls_index;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0xec0) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bScopedUniformBufferStaticBindingsRecursionGuard",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x27,L"Uniform buffer global binding scope has been called recursively!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0xec0) = 1;
  return;
}

// OnScopeExit @ 145cb4520

void __cdecl FScopedUniformBufferStaticBindings::OnScopeExit(void)

{
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) = 0;
  return;
}

