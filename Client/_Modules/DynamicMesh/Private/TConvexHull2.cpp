// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator() @ 14c7c28a0

TVector2<float> __thiscall
`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<float> TVar5;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar6;
  uint in_R8D;
  
  TVar6._s_0.Y = (float)in_register_00000014;
  TVar6._s_0.X = (float)param_1;
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if ((int)in_R8D < (int)plVar1[1]) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  *(undefined8 *)TVar6 = *(undefined8 *)(*plVar1 + (longlong)(int)in_R8D * 8);
  return (TVector2<float>)TVar6;
}

