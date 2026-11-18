// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// CubicBSplineKernel @ 14c729660

double __cdecl FFDLatticeHelpers::CubicBSplineKernel(double param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)param_1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) < __real_3ff0000000000000) {
    dVar1 = (double)CONCAT44(uVar3,uVar2) * (double)CONCAT44(uVar3,uVar2);
    return dVar1 * __real_3fe0000000000000 * (double)CONCAT44(uVar3,uVar2) +
           (__real_3fe5555555555555 - dVar1);
  }
  if ((double)CONCAT44(uVar3,uVar2) < __real_4000000000000000) {
    dVar1 = __real_4000000000000000 - (double)CONCAT44(uVar3,uVar2);
    return dVar1 * dVar1 * dVar1 * __real_3fc5555555555555;
  }
  return 0.0;
}

// CubicBSplineKernelDerivative @ 14c7296d0

double __cdecl FFDLatticeHelpers::CubicBSplineKernelDerivative(double param_1)

{
  double dVar1;
  
  dVar1 = (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar1 < __real_3ff0000000000000) {
    return (dVar1 * __real_4008000000000000 - __real_4010000000000000) *
           param_1 * __real_3fe0000000000000;
  }
  if (dVar1 < __real_4000000000000000) {
    return (__real_4000000000000000 - dVar1) * param_1 * (__real_4000000000000000 - dVar1) *
           (__real_bfe0000000000000 / dVar1);
  }
  return 0.0;
}

