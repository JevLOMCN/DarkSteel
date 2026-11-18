// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 2

// DeleterFunc<voro::voro_compute<voro::container>_> @ 1436a0100

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<voro::voro_compute<voro::container>_>(void *param_1)

{
  operator_delete__(*(void **)((longlong)param_1 + 0xa0));
  operator_delete__(*(void **)((longlong)param_1 + 0x98));
  ::operator_delete(param_1,0xb0);
  return;
}

// DeleterFunc<voro::container> @ 1436a0140

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<voro::container>(void *param_1)

{
  voro::container_base::~container_base((container_base *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0xe0);
  return;
}

