// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator() @ 14e0d2c00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDIVelocityGridData> local_40;
  
  VectorVM::FUserPtrHandler<FNDIVelocityGridData>::FUserPtrHandler<FNDIVelocityGridData>
            (&local_40,param_1);
  iVar9 = 0;
  local_48[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar13 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar5 = pfVar5 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar11 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar6 = pfVar6 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar12 = (longlong)local_48[0];
  local_50[0] = 0;
  pfVar7 = pfVar7 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  puVar10 = (undefined1 *)
            ((longlong)(local_50[0] * param_1->PerInstanceFnInstanceIdx) + (longlong)pfVar8);
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar5;
      iVar9 = iVar9 + 1;
      pfVar5 = pfVar5 + lVar13;
      fVar2 = *pfVar6;
      pfVar6 = pfVar6 + lVar11;
      fVar3 = *pfVar7;
      ((local_40.Ptr)->GridSize).field0_0x0._s_0.X = (int)fVar1;
      pfVar7 = pfVar7 + lVar12;
      ((local_40.Ptr)->GridSize).field0_0x0._s_0.Y = (int)fVar2;
      ((local_40.Ptr)->GridSize).field0_0x0._s_0.Z = (int)fVar3;
      (local_40.Ptr)->NeedResize = true;
      *puVar10 = 1;
      puVar10 = puVar10 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

