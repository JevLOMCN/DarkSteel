// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FControlRigChannelMetaData @ 14a3b5930

FControlRigChannelMetaData * __thiscall
UE::MovieScene::FControlRigChannelMetaData::FControlRigChannelMetaData
          (FControlRigChannelMetaData *this,EControlRigControlType param_1,FName param_2,int param_3
          ,uint param_4)

{
  this->EntitySystemID = param_4;
  this->Type = param_1;
  this->ControlName = param_2;
  this->IndexWithinControl = param_3;
  return this;
}

// FControlRigChannelMetaData @ 14a3b5950

FControlRigChannelMetaData * __thiscall
UE::MovieScene::FControlRigChannelMetaData::FControlRigChannelMetaData
          (FControlRigChannelMetaData *this)

{
  this->Type = Num;
  (this->ControlName).ComparisonIndex = 0;
  (this->ControlName).Number = 0;
  this->IndexWithinControl = -1;
  this->EntitySystemID = 0xffffffff;
  return this;
}

// operator_bool @ 14a3bf3b0

bool __thiscall
UE::MovieScene::FControlRigChannelMetaData::operator_bool(FControlRigChannelMetaData *this)

{
  if ((this->Type != Num) && (this->IndexWithinControl != -1)) {
    return true;
  }
  return false;
}

