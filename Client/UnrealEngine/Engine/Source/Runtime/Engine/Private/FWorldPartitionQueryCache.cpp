// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddCellInfo @ 148abf580

void __thiscall
FWorldPartitionQueryCache::AddCellInfo
          (FWorldPartitionQueryCache *this,UWorldPartitionRuntimeCell *param_1,
          FSphericalSector *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  TPairInitializer<UWorldPartitionRuntimeCell_const_*_const_&,double_const_&> local_res8;
  double local_res18;
  double **local_28;
  double *local_20;
  
  local_res8.Value = (double *)param_1;
  pdVar2 = (double *)(**(code **)(param_1->_padding_ + 0x50))(&param_1->_padding_);
  dVar3 = (pdVar2[3] + *pdVar2) * __real_3fe0000000000000 - (param_2->Center).field0_0x0._s_0.X;
  dVar1 = (pdVar2[4] + pdVar2[1]) * __real_3fe0000000000000 - (param_2->Center).field0_0x0._s_0.Y;
  dVar1 = dVar1 * dVar1 + dVar3 * dVar3;
  local_res18 = dVar1;
  pdVar2 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
           ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                   *)this,(UWorldPartitionRuntimeCell *)local_res8.Value);
  if (pdVar2 != (double *)0x0) {
    dVar3 = *pdVar2;
    if (dVar1 <= *pdVar2) {
      dVar3 = dVar1;
    }
    *pdVar2 = dVar3;
    return;
  }
  local_28 = &local_res8.Value;
  local_20 = &local_res18;
  TSet<TTuple<UWorldPartitionRuntimeCell_const_*,double>,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UWorldPartitionRuntimeCell_const_*_const_&,double_const_&>_>
            ((TSet<TTuple<UWorldPartitionRuntimeCell_const_*,double>,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_28);
  return;
}

// GetCellMinSquareDist @ 148acb460

double __thiscall
FWorldPartitionQueryCache::GetCellMinSquareDist
          (FWorldPartitionQueryCache *this,UWorldPartitionRuntimeCell *param_1)

{
  double *pdVar1;
  
  pdVar1 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
           ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                   *)this,param_1);
  if (pdVar1 != (double *)0x0) {
    return *pdVar1;
  }
  return __real_7fefffffffffffff;
}

