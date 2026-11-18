// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 148718540

bool __thiscall
`FMeshCardsBuildData::ContainsNaN'::__l2::<lambda_1>::operator()
          (void *this,FLumenCardBuildData *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _finite((double)(param_1->OBB).Origin.field0_0x0._s_0.X);
  if (iVar2 != 0) {
    iVar2 = _finite((double)(param_1->OBB).Origin.field0_0x0._s_0.Y);
    if (iVar2 != 0) {
      iVar2 = _finite((double)(param_1->OBB).Origin.field0_0x0._s_0.Z);
      if (iVar2 != 0) {
        iVar2 = _finite((double)(param_1->OBB).AxisX.field0_0x0._s_0.X);
        if (iVar2 != 0) {
          iVar2 = _finite((double)(param_1->OBB).AxisX.field0_0x0._s_0.Y);
          if (iVar2 != 0) {
            iVar2 = _finite((double)(param_1->OBB).AxisX.field0_0x0._s_0.Z);
            if (iVar2 != 0) {
              bVar1 = UE::Math::TVector<float>::ContainsNaN(&(param_1->OBB).AxisY);
              if (!bVar1) {
                bVar1 = UE::Math::TVector<float>::ContainsNaN(&(param_1->OBB).AxisZ);
                if (!bVar1) {
                  bVar1 = UE::Math::TVector<float>::ContainsNaN(&(param_1->OBB).Extent);
                  if (!bVar1) {
                    return false;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

