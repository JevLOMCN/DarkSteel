// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 1483e94f0

FLevelStats * __thiscall
ULevelStreamingProfilingSubsystem::FLevelStats::operator=(FLevelStats *this,FLevelStats *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  this->PackageNameOnDisk = param_1->PackageNameOnDisk;
  this->PackageNameInMemory = param_1->PackageNameInMemory;
  dVar1 = (param_1->CellBounds).Min.field0_0x0._s_0.Y;
  (this->CellBounds).Min.field0_0x0._s_0.X = (param_1->CellBounds).Min.field0_0x0._s_0.X;
  (this->CellBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->CellBounds).Max.field0_0x0._s_0.X;
  (this->CellBounds).Min.field0_0x0._s_0.Z = (param_1->CellBounds).Min.field0_0x0._s_0.Z;
  (this->CellBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->CellBounds).Max.field0_0x0._s_0.Z;
  (this->CellBounds).Max.field0_0x0._s_0.Y = (param_1->CellBounds).Max.field0_0x0._s_0.Y;
  (this->CellBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->CellBounds).Pad[0];
  uVar3 = (param_1->CellBounds).Pad[1];
  uVar4 = (param_1->CellBounds).Pad[2];
  uVar5 = (param_1->CellBounds).Pad[3];
  uVar6 = (param_1->CellBounds).Pad[4];
  uVar7 = (param_1->CellBounds).Pad[5];
  uVar8 = (param_1->CellBounds).Pad[6];
  (this->CellBounds).IsValid = (param_1->CellBounds).IsValid;
  (this->CellBounds).Pad[0] = uVar2;
  (this->CellBounds).Pad[1] = uVar3;
  (this->CellBounds).Pad[2] = uVar4;
  (this->CellBounds).Pad[3] = uVar5;
  (this->CellBounds).Pad[4] = uVar6;
  (this->CellBounds).Pad[5] = uVar7;
  (this->CellBounds).Pad[6] = uVar8;
  dVar1 = (param_1->ContentBounds).Min.field0_0x0._s_0.Y;
  (this->ContentBounds).Min.field0_0x0._s_0.X = (param_1->ContentBounds).Min.field0_0x0._s_0.X;
  (this->ContentBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ContentBounds).Max.field0_0x0._s_0.X;
  (this->ContentBounds).Min.field0_0x0._s_0.Z = (param_1->ContentBounds).Min.field0_0x0._s_0.Z;
  (this->ContentBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->ContentBounds).Max.field0_0x0._s_0.Z;
  (this->ContentBounds).Max.field0_0x0._s_0.Y = (param_1->ContentBounds).Max.field0_0x0._s_0.Y;
  (this->ContentBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->ContentBounds).Pad[0];
  uVar3 = (param_1->ContentBounds).Pad[1];
  uVar4 = (param_1->ContentBounds).Pad[2];
  uVar5 = (param_1->ContentBounds).Pad[3];
  uVar6 = (param_1->ContentBounds).Pad[4];
  uVar7 = (param_1->ContentBounds).Pad[5];
  uVar8 = (param_1->ContentBounds).Pad[6];
  (this->ContentBounds).IsValid = (param_1->ContentBounds).IsValid;
  (this->ContentBounds).Pad[0] = uVar2;
  (this->ContentBounds).Pad[1] = uVar3;
  (this->ContentBounds).Pad[2] = uVar4;
  (this->ContentBounds).Pad[3] = uVar5;
  (this->ContentBounds).Pad[4] = uVar6;
  (this->ContentBounds).Pad[5] = uVar7;
  (this->ContentBounds).Pad[6] = uVar8;
  if (&param_1->TimeQueuedForLoading != &this->TimeQueuedForLoading) {
    if ((param_1->TimeQueuedForLoading).bIsSet == false) {
      if ((this->TimeQueuedForLoading).bIsSet != false) {
        (this->TimeQueuedForLoading).bIsSet = false;
      }
    }
    else {
      (this->TimeQueuedForLoading).TypedValue = (param_1->TimeQueuedForLoading).TypedValue;
      (this->TimeQueuedForLoading).bIsSet = true;
    }
  }
  if (&param_1->TimeLoading != &this->TimeLoading) {
    if ((param_1->TimeLoading).bIsSet == false) {
      if ((this->TimeLoading).bIsSet != false) {
        (this->TimeLoading).bIsSet = false;
      }
    }
    else {
      (this->TimeLoading).TypedValue = (param_1->TimeLoading).TypedValue;
      (this->TimeLoading).bIsSet = true;
    }
  }
  if (&param_1->TimeQueueudForAddToWorld != &this->TimeQueueudForAddToWorld) {
    if ((param_1->TimeQueueudForAddToWorld).bIsSet == false) {
      if ((this->TimeQueueudForAddToWorld).bIsSet != false) {
        (this->TimeQueueudForAddToWorld).bIsSet = false;
      }
    }
    else {
      (this->TimeQueueudForAddToWorld).TypedValue = (param_1->TimeQueueudForAddToWorld).TypedValue;
      (this->TimeQueueudForAddToWorld).bIsSet = true;
    }
  }
  if (&param_1->TimeAddingToWorld != &this->TimeAddingToWorld) {
    if ((param_1->TimeAddingToWorld).bIsSet == false) {
      if ((this->TimeAddingToWorld).bIsSet != false) {
        (this->TimeAddingToWorld).bIsSet = false;
      }
    }
    else {
      (this->TimeAddingToWorld).TypedValue = (param_1->TimeAddingToWorld).TypedValue;
      (this->TimeAddingToWorld).bIsSet = true;
    }
  }
  if (&param_1->TimeInWorld != &this->TimeInWorld) {
    if ((param_1->TimeInWorld).bIsSet == false) {
      if ((this->TimeInWorld).bIsSet != false) {
        (this->TimeInWorld).bIsSet = false;
      }
    }
    else {
      (this->TimeInWorld).TypedValue = (param_1->TimeInWorld).TypedValue;
      (this->TimeInWorld).bIsSet = true;
    }
  }
  if (&param_1->TimeQueuedForRemoveFromWorld != &this->TimeQueuedForRemoveFromWorld) {
    if ((param_1->TimeQueuedForRemoveFromWorld).bIsSet == false) {
      if ((this->TimeQueuedForRemoveFromWorld).bIsSet != false) {
        (this->TimeQueuedForRemoveFromWorld).bIsSet = false;
      }
    }
    else {
      (this->TimeQueuedForRemoveFromWorld).TypedValue =
           (param_1->TimeQueuedForRemoveFromWorld).TypedValue;
      (this->TimeQueuedForRemoveFromWorld).bIsSet = true;
    }
  }
  if (&param_1->TimeRemovingFromWorld != &this->TimeRemovingFromWorld) {
    if ((param_1->TimeRemovingFromWorld).bIsSet == false) {
      if ((this->TimeRemovingFromWorld).bIsSet != false) {
        (this->TimeRemovingFromWorld).bIsSet = false;
      }
    }
    else {
      (this->TimeRemovingFromWorld).TypedValue = (param_1->TimeRemovingFromWorld).TypedValue;
      (this->TimeRemovingFromWorld).bIsSet = true;
    }
  }
  if (&param_1->FinalStreamInDistance_Cell != &this->FinalStreamInDistance_Cell) {
    if ((param_1->FinalStreamInDistance_Cell).bIsSet == false) {
      if ((this->FinalStreamInDistance_Cell).bIsSet != false) {
        (this->FinalStreamInDistance_Cell).bIsSet = false;
      }
    }
    else {
      (this->FinalStreamInDistance_Cell).TypedValue =
           (param_1->FinalStreamInDistance_Cell).TypedValue;
      (this->FinalStreamInDistance_Cell).bIsSet = true;
    }
  }
  if (&param_1->FinalStreamInDistance_Content != &this->FinalStreamInDistance_Content) {
    if ((param_1->FinalStreamInDistance_Content).bIsSet == false) {
      if ((this->FinalStreamInDistance_Content).bIsSet != false) {
        (this->FinalStreamInDistance_Content).bIsSet = false;
      }
    }
    else {
      (this->FinalStreamInDistance_Content).TypedValue =
           (param_1->FinalStreamInDistance_Content).TypedValue;
      (this->FinalStreamInDistance_Content).bIsSet = true;
    }
  }
  if (&param_1->FinalStreamInLocation != &this->FinalStreamInLocation) {
    if ((param_1->FinalStreamInLocation).bIsSet == false) {
      if ((this->FinalStreamInLocation).bIsSet != false) {
        (this->FinalStreamInLocation).bIsSet = false;
      }
    }
    else {
      dVar1 = (param_1->FinalStreamInLocation).TypedValue.field0_0x0._s_0.Y;
      (this->FinalStreamInLocation).TypedValue.field0_0x0._s_0.X =
           (param_1->FinalStreamInLocation).TypedValue.field0_0x0._s_0.X;
      (this->FinalStreamInLocation).TypedValue.field0_0x0._s_0.Y = dVar1;
      (this->FinalStreamInLocation).TypedValue.field0_0x0._s_0.Z =
           (param_1->FinalStreamInLocation).TypedValue.field0_0x0._s_0.Z;
      (this->FinalStreamInLocation).bIsSet = true;
    }
  }
  this->bIsHLOD = param_1->bIsHLOD;
  this->bValid = param_1->bValid;
  return this;
}

