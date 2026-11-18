// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FSimpleWaveWriter @ 14147e980

FSimpleWaveWriter * __thiscall
Audio::FSimpleWaveWriter::FSimpleWaveWriter
          (FSimpleWaveWriter *this,TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *param_1,
          int param_2,int param_3,bool param_4)

{
  (this->OutputStream).Ptr = param_1->Ptr;
  param_1->Ptr = (FArchive *)0x0;
  this->RiffSizePos = 0;
  this->DataSizePos = 0;
  this->bUpdateHeaderAfterEveryWrite = param_4;
  WriteHeader(this,param_2,param_3);
  return this;
}

// ~FSimpleWaveWriter @ 141481730

void __thiscall Audio::FSimpleWaveWriter::~FSimpleWaveWriter(FSimpleWaveWriter *this)

{
  FArchive *pFVar1;
  
  UpdateHeader(this);
  pFVar1 = (this->OutputStream).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141481753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// UpdateHeader @ 1414b88c0

void __thiscall Audio::FSimpleWaveWriter::UpdateHeader(FSimpleWaveWriter *this)

{
  FArchive *pFVar1;
  uint *puVar2;
  int iVar3;
  uint local_res8 [2];
  uint local_res10 [2];
  
  iVar3 = (**(code **)(*(longlong *)(this->OutputStream).Ptr + 0x28))();
  pFVar1 = (this->OutputStream).Ptr;
  (**(code **)(*(longlong *)pFVar1 + 0x1b8))(pFVar1,(longlong)this->DataSizePos);
  pFVar1 = (this->OutputStream).Ptr;
  local_res8[0] = (iVar3 - this->DataSizePos) - 4;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pFVar1 = (this->OutputStream).Ptr;
  (**(code **)(*(longlong *)pFVar1 + 0x1b8))(pFVar1,(longlong)this->RiffSizePos);
  pFVar1 = (this->OutputStream).Ptr;
  local_res10[0] = local_res8[0] + 0x24;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pFVar1 = (this->OutputStream).Ptr;
  (**(code **)(*(longlong *)pFVar1 + 0x1b8))(pFVar1,(longlong)iVar3);
  return;
}

// Write @ 1414ba690

void __thiscall
Audio::FSimpleWaveWriter::Write(FSimpleWaveWriter *this,TArrayView<float_const_,int> *param_1)

{
  FArchive *pFVar1;
  
  pFVar1 = (this->OutputStream).Ptr;
  (**(code **)(*(longlong *)pFVar1 + 0x188))
            (pFVar1,param_1->DataPtr,(longlong)param_1->ArrayNum << 2);
  if (this->bUpdateHeaderAfterEveryWrite != false) {
    UpdateHeader(this);
    return;
  }
  return;
}

// WriteHeader @ 1414ba6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FSimpleWaveWriter::WriteHeader(FSimpleWaveWriter *this,int param_1,int param_2)

{
  FArchive *pFVar1;
  uint *puVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  uint local_30 [2];
  undefined2 local_28;
  short local_26;
  int local_24;
  int local_20;
  ushort local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = (this->OutputStream).Ptr;
  local_1a = 0x20;
  local_26 = (short)param_2;
  local_18 = 0;
  local_38 = 0x46464952;
  local_1c = local_26 << 2;
  local_20 = (uint)local_1c * param_1;
  local_28 = 3;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  local_24 = param_1;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_38);
    }
  }
  else {
    local_38 = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  iVar3 = (**(code **)(*(longlong *)(this->OutputStream).Ptr + 0x28))();
  pFVar1 = (this->OutputStream).Ptr;
  this->RiffSizePos = iVar3;
  local_30[0] = 0;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_30,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,local_30);
    }
  }
  else {
    local_30[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pFVar1 = (this->OutputStream).Ptr;
  local_38 = 0x45564157;
  if ((ulonglong)(*(longlong **)&pFVar1->field_0x8)[1] < **(longlong **)&pFVar1->field_0x8 + 4U) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_38);
    }
  }
  else {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pFVar1 = (this->OutputStream).Ptr;
  local_38 = 0x20746d66;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_38);
    }
  }
  else {
    local_38 = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pFVar1 = (this->OutputStream).Ptr;
  local_34 = 0x14;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_34,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_34);
    }
  }
  else {
    local_34 = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pFVar1 = (this->OutputStream).Ptr;
  (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_28,(longlong)(int)local_34);
  pFVar1 = (this->OutputStream).Ptr;
  local_38 = 0x61746164;
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_38);
    }
  }
  else {
    local_38 = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  iVar3 = (**(code **)(*(longlong *)(this->OutputStream).Ptr + 0x28))();
  pFVar1 = (this->OutputStream).Ptr;
  this->DataSizePos = iVar3;
  local_30[1] = 0;
  if ((ulonglong)(*(longlong **)&pFVar1->field_0x8)[1] < **(longlong **)&pFVar1->field_0x8 + 4U) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_30 + 1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,local_30 + 1);
    }
  }
  else {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  return;
}

