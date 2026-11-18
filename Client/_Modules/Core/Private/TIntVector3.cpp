// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// InitFromString @ 141c02600

bool __thiscall UE::Math::TIntVector3<int>::InitFromString(TIntVector3<int> *this,FString *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  piVar1 = &(this->field0_0x0)._s_0.Z;
  piVar2 = &(this->field0_0x0)._s_0.Y;
  *piVar1 = 0;
  *piVar2 = 0;
  pwVar5 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(int *)this);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",piVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",piVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// InitFromString @ 141c026c0

bool __thiscall
UE::Math::TIntVector3<unsigned_int>::InitFromString
          (TIntVector3<unsigned_int> *this,FString *param_1)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  puVar1 = &(this->field0_0x0)._s_0.Z;
  puVar2 = &(this->field0_0x0)._s_0.Y;
  *puVar1 = 0;
  *puVar2 = 0;
  pwVar5 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(uint *)this);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",puVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",puVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// InitFromString @ 141c02780

bool __thiscall
UE::Math::TIntVector3<__int64>::InitFromString(TIntVector3<__int64> *this,FString *param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  plVar1 = &(this->field0_0x0)._s_0.Z;
  plVar2 = &(this->field0_0x0)._s_0.Y;
  *plVar1 = 0;
  *plVar2 = 0;
  pwVar5 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(long64 *)this);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",plVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",plVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// InitFromString @ 141c02840

bool __thiscall
UE::Math::TIntVector3<unsigned___int64>::InitFromString
          (TIntVector3<unsigned___int64> *this,FString *param_1)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  puVar1 = &(this->field0_0x0)._s_0.Z;
  puVar2 = &(this->field0_0x0)._s_0.Y;
  *puVar1 = 0;
  *puVar2 = 0;
  pwVar5 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(ulong64 *)this);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",puVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",puVar1);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

