// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AddCell @ 148abf510

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeHash::FStreamingSourceCells::AddCell
          (FStreamingSourceCells *this,UWorldPartitionRuntimeCell *param_1,
          FWorldPartitionStreamingSource *param_2,FSphericalSector *param_3,
          FWorldPartitionStreamingContext *param_4)

{
  UWorldPartitionRuntimeCellData *pUVar1;
  UWorldPartitionRuntimeCell *local_res8;
  UWorldPartitionRuntimeCell *local_res10;
  
  pUVar1 = (param_1->RuntimeCellData).field0_0x0.DebugPtr;
  local_res10 = param_1;
  (**(code **)(pUVar1->_padding_ + 0x2c8))
            (pUVar1,param_2,param_3,param_4,param_1->bBlockOnSlowLoading);
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
            (&this->Cells,&local_res8,(bool *)&local_res10);
  return;
}

