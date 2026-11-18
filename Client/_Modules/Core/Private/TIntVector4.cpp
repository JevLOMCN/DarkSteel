// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// InitFromString @ 141c02900

bool __thiscall UE::Math::TIntVector4<int>::InitFromString(TIntVector4<int> *this,FString *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  piVar1 = &(this->field0_0x0)._s_0.W;
  piVar2 = &(this->field0_0x0)._s_0.Z;
  *piVar1 = 0;
  piVar3 = &(this->field0_0x0)._s_0.Y;
  *piVar2 = 0;
  *piVar3 = 0;
  pwVar6 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar5,L"X=",(int *)this);
  if (bVar4) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar4 = FParse::Value(pwVar5,L"Y=",piVar3);
    if (bVar4) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FParse::Value(pwVar5,L"Z=",piVar2);
      if (bVar4) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar4 = FParse::Value(pwVar6,L"W=",piVar1);
        if (bVar4) {
          return true;
        }
      }
    }
  }
  return false;
}

// InitFromString @ 141c029f0

bool __thiscall
UE::Math::TIntVector4<unsigned_int>::InitFromString
          (TIntVector4<unsigned_int> *this,FString *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  puVar1 = &(this->field0_0x0)._s_0.W;
  puVar2 = &(this->field0_0x0)._s_0.Z;
  *puVar1 = 0;
  puVar3 = &(this->field0_0x0)._s_0.Y;
  *puVar2 = 0;
  *puVar3 = 0;
  pwVar6 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar5,L"X=",(uint *)this);
  if (bVar4) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar4 = FParse::Value(pwVar5,L"Y=",puVar3);
    if (bVar4) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FParse::Value(pwVar5,L"Z=",puVar2);
      if (bVar4) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar4 = FParse::Value(pwVar6,L"W=",puVar1);
        if (bVar4) {
          return true;
        }
      }
    }
  }
  return false;
}

// InitFromString @ 141c02ae0

bool __thiscall
UE::Math::TIntVector4<__int64>::InitFromString(TIntVector4<__int64> *this,FString *param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  long64 *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  plVar1 = &(this->field0_0x0)._s_0.W;
  plVar2 = &(this->field0_0x0)._s_0.Z;
  *plVar1 = 0;
  plVar3 = &(this->field0_0x0)._s_0.Y;
  *plVar2 = 0;
  *plVar3 = 0;
  pwVar6 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar5,L"X=",(long64 *)this);
  if (bVar4) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar4 = FParse::Value(pwVar5,L"Y=",plVar3);
    if (bVar4) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FParse::Value(pwVar5,L"Z=",plVar2);
      if (bVar4) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar4 = FParse::Value(pwVar6,L"W=",plVar1);
        if (bVar4) {
          return true;
        }
      }
    }
  }
  return false;
}

// InitFromString @ 141c02bd0

bool __thiscall
UE::Math::TIntVector4<unsigned___int64>::InitFromString
          (TIntVector4<unsigned___int64> *this,FString *param_1)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  puVar1 = &(this->field0_0x0)._s_0.W;
  puVar2 = &(this->field0_0x0)._s_0.Z;
  *puVar1 = 0;
  puVar3 = &(this->field0_0x0)._s_0.Y;
  *puVar2 = 0;
  *puVar3 = 0;
  pwVar6 = L"";
  (this->field0_0x0)._s_0.X = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar5,L"X=",(ulong64 *)this);
  if (bVar4) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar4 = FParse::Value(pwVar5,L"Y=",puVar3);
    if (bVar4) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FParse::Value(pwVar5,L"Z=",puVar2);
      if (bVar4) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar4 = FParse::Value(pwVar6,L"W=",puVar1);
        if (bVar4) {
          return true;
        }
      }
    }
  }
  return false;
}

