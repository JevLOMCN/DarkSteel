// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// TickPoolElements @ 145d5fa90

void __cdecl ICustomResourcePool::TickPoolElements(FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\CustomResourcePool.cpp"
                       ,10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GCustomResourcePool != (ICustomResourcePool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d5fadf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GCustomResourcePool + 8))(GCustomResourcePool,param_1);
    return;
  }
  return;
}

