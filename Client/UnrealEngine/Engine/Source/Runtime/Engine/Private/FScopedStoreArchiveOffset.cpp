// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedStoreArchiveOffset @ 148442650

FScopedStoreArchiveOffset * __thiscall
FScopedStoreArchiveOffset::FScopedStoreArchiveOffset
          (FScopedStoreArchiveOffset *this,FArchive *param_1)

{
  FArchive *this_00;
  long64 lVar1;
  ulong64 local_res8 [4];
  
  this->Ar = param_1;
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  this_00 = this->Ar;
  this->StartPosition = lVar1;
  local_res8[0] = 0;
  if (**(longlong **)&this_00->field_0x8 + 8U <= (ulonglong)(*(longlong **)&this_00->field_0x8)[1])
  {
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return this;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,8);
    return this;
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return this;
}

// ~FScopedStoreArchiveOffset @ 148446120

void __thiscall
FScopedStoreArchiveOffset::~FScopedStoreArchiveOffset(FScopedStoreArchiveOffset *this)

{
  FArchive *this_00;
  ulong64 *puVar1;
  longlong lVar2;
  ulong64 local_res8;
  
  lVar2 = (**(code **)(*(longlong *)this->Ar + 0x28))();
  local_res8 = (lVar2 - this->StartPosition) - 8;
  (**(code **)(*(longlong *)this->Ar + 0x1b8))();
  this_00 = this->Ar;
  puVar1 = (ulong64 *)**(longlong **)&this_00->field_0x8;
  if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
    }
  }
  else {
    local_res8 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
  }
  (**(code **)(*(longlong *)this->Ar + 0x1b8))(this->Ar,lVar2);
  return;
}

