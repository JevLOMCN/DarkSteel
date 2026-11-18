// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// SerializeEarlyEnd @ 14218b360

void __thiscall FDeltaIndexHelper::SerializeEarlyEnd(FDeltaIndexHelper *this,FArchive *param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
  return;
}

// SerializeNext @ 142190d80

void __thiscall
FDeltaIndexHelper::SerializeNext
          (FDeltaIndexHelper *this,FArchive *param_1,FArchive *param_2,int param_3)

{
  int local_res8 [2];
  int local_res20 [2];
  
  local_res20[0] = param_3 - this->LastIndexFull;
  (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,local_res20);
  this->LastIndexFull = param_3;
  local_res8[0] = param_3 - this->LastIndex;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res8);
  return;
}

// SerializeNext @ 142190df0

bool __thiscall
FDeltaIndexHelper::SerializeNext(FDeltaIndexHelper *this,FArchive *param_1,int *param_2)

{
  int local_res10 [2];
  
  if ((param_1->field_0x28 & 4) == 0) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
    if (local_res10[0] == 0) {
      local_res10[0] = -1;
    }
    else {
      local_res10[0] = this->LastIndex + local_res10[0];
    }
    *param_2 = local_res10[0];
  }
  else {
    local_res10[0] = *param_2 - this->LastIndex;
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
    local_res10[0] = *param_2;
  }
  this->LastIndex = local_res10[0];
  this->LastIndexFull = *param_2;
  if ((*param_2 != -1) && ((param_1->field_0x29 & 2) == 0)) {
    return true;
  }
  return false;
}

