// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// Seek @ 1421e5e50

void __thiscall
``anonymous_namespace'::WriteCookedExports'::__l2::FExportProxyArchive::Seek
          (void *this,long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001421e5e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x90) + 0x1b8))
            (*(longlong **)((longlong)this + 0x90),param_1 + *(longlong *)((longlong)this + 0x98));
  return;
}

// Tell @ 1421e9590

long64 __thiscall
``anonymous_namespace'::WriteCookedExports'::__l2::FExportProxyArchive::Tell(void *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)((longlong)this + 0x90) + 0x28))();
  return lVar1 - *(longlong *)((longlong)this + 0x98);
}

// TotalSize @ 1421ea330

long64 __thiscall
``anonymous_namespace'::WriteCookedExports'::__l2::FExportProxyArchive::TotalSize(void *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)((longlong)this + 0x90) + 0x30))();
  return lVar1 - *(longlong *)((longlong)this + 0x98);
}

