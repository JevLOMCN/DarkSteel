// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// operator() @ 14c9adb70

void __thiscall
`UE::Geometry::FUVPacker::StandardPack'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 * 0x10 + *plVar1)
            );
  return;
}

