// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// PreChildRemove @ 1425f4200

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l52::FChildOrderInvalidationCallback_Count::
PreChildRemove(void *this,FIndexRange *param_1)

{
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + 1;
  return;
}

// ProxiesBuilt @ 1425f5b30

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l52::FChildOrderInvalidationCallback_Count::
ProxiesBuilt(void *this,FIndexRange *param_1)

{
  *(int *)((longlong)this + 0x14) = *(int *)((longlong)this + 0x14) + 1;
  return;
}

// ProxiesPreResort @ 1425f5cd0

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l52::FChildOrderInvalidationCallback_Count::
ProxiesPreResort(void *this,FReSortOperation *param_1)

{
  *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
  return;
}

// ProxiesReIndexed @ 1425f5e80

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l52::FChildOrderInvalidationCallback_Count::
ProxiesReIndexed(void *this,FReIndexOperation *param_1)

{
  *(int *)((longlong)this + 0xc) = *(int *)((longlong)this + 0xc) + 1;
  return;
}

