// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 7

// StaticStruct @ 148dca3b0

UScriptStruct * __cdecl FNiagaraCompileHash::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraCore();
    Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHash,(UObject *)pUVar1,
                         L"NiagaraCompileHash");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.OuterSingleton;
}

// operator== @ 148dcae80

bool __thiscall FNiagaraCompileHash::operator==(FNiagaraCompileHash *this,FSHAHash *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  
  if ((this->DataHash).ArrayNum != 0x14) {
    return false;
  }
  pFVar1 = (this->DataHash).AllocatorInstance.Data;
  lVar2 = *(longlong *)pFVar1 - *(longlong *)param_1->Hash;
  if ((lVar2 == 0) &&
     (lVar2 = *(longlong *)(pFVar1 + 8) - *(longlong *)(param_1->Hash + 8), lVar2 == 0)) {
    lVar2 = (ulonglong)*(uint *)(pFVar1 + 0x10) - (ulonglong)*(uint *)(param_1->Hash + 0x10);
  }
  return lVar2 == 0;
}

// AppendString @ 148dcafe0

void __thiscall FNiagaraCompileHash::AppendString(FNiagaraCompileHash *this,FString *param_1)

{
  if ((this->DataHash).ArrayNum == 0x14) {
    BytesToHexLower((uchar *)(this->DataHash).AllocatorInstance.Data,0x14,param_1);
    return;
  }
  ::FString::AppendChars(param_1,L"Invalid",7);
  return;
}

// GetData @ 148dcb3e0

uchar * __thiscall FNiagaraCompileHash::GetData(FNiagaraCompileHash *this)

{
  return (uchar *)(this->DataHash).AllocatorInstance.Data;
}

// GetTypeHash @ 148dcb670

uint __thiscall FNiagaraCompileHash::GetTypeHash(FNiagaraCompileHash *this)

{
  if ((this->DataHash).ArrayNum == 0x14) {
    return *(uint *)(this->DataHash).AllocatorInstance.Data;
  }
  return 0;
}

// IsValid @ 148dcb6f0

bool __thiscall FNiagaraCompileHash::IsValid(FNiagaraCompileHash *this)

{
  return (this->DataHash).ArrayNum == 0x14;
}

// ToSHAHash @ 148dcb860

bool __thiscall FNiagaraCompileHash::ToSHAHash(FNiagaraCompileHash *this,FSHAHash *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  
  if ((this->DataHash).ArrayNum == 0x14) {
    pFVar1 = (this->DataHash).AllocatorInstance.Data;
    uVar2 = *(undefined8 *)(pFVar1 + 8);
    *(undefined8 *)param_1->Hash = *(undefined8 *)pFVar1;
    *(undefined8 *)(param_1->Hash + 8) = uVar2;
    *(undefined4 *)(param_1->Hash + 0x10) = *(undefined4 *)(pFVar1 + 0x10);
    return true;
  }
  return false;
}

