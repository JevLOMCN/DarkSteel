// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// FPCGConverterBase @ 149d33970

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGConverterBase * __thiscall
FPCGConverterBase::FPCGConverterBase(FPCGConverterBase *this,UPCGGraph *param_1)

{
  this->SourceGraph = param_1;
  this->_padding_ = (longlong)&___7FPCGConverterBase__6B_;
  this->bGraphIsDirty = false;
  this->CurrentStatus = Uninitialized;
  if (param_1 != (UPCGGraph *)0x0) {
    this->CurrentStatus = InitializedGraph;
  }
  return this;
}

// ~FPCGConverterBase @ 149d34d50

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall FPCGConverterBase::~FPCGConverterBase(FPCGConverterBase *this)

{
  this->_padding_ = (longlong)&___7FPCGConverterBase__6B_;
  return;
}

// ApplyStructural @ 149d3df60

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall FPCGConverterBase::ApplyStructural(FPCGConverterBase *this)

{
  char cVar1;
  byte local_res8 [32];
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x18))(this,local_res8);
  if (cVar1 != '\0') {
    this->bGraphIsDirty = (bool)(this->bGraphIsDirty | local_res8[0]);
    this->CurrentStatus = this->CurrentStatus | StructuralChangesApplied;
  }
  return;
}

// ExecuteApplyStructural @ 149d48780

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall FPCGConverterBase::ExecuteApplyStructural(FPCGConverterBase *this,bool *param_1)

{
  return true;
}

// ExecutePrepareData @ 149d493f0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall FPCGConverterBase::ExecutePrepareData(FPCGConverterBase *this,bool *param_1)

{
  return true;
}

// PrepareData @ 149d5f840

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall FPCGConverterBase::PrepareData(FPCGConverterBase *this)

{
  char cVar1;
  byte local_res8 [32];
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x10))(this,local_res8);
  if (cVar1 != '\0') {
    this->bGraphIsDirty = (bool)(this->bGraphIsDirty | local_res8[0]);
    this->CurrentStatus = this->CurrentStatus | DataPrepared;
  }
  return;
}

