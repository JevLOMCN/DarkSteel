// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// TWrapAroundGridIndexer3<double> @ 14c9a0e00

TWrapAroundGridIndexer3<double> * __thiscall
UE::Geometry::TWrapAroundGridIndexer3<double>::TWrapAroundGridIndexer3<double>
          (TWrapAroundGridIndexer3<double> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  TWrapAroundGridIndexer3<double> *pTVar3;
  
  bVar2 = param_1 < __real_3e45798ee2308c3a;
  this->CellSize = param_1;
  if (bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2954325157570674611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                       ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TWrapAroundGridIndexer3<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

