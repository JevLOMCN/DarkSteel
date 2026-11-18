// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FPropertyTypeName @ 142162110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPropertyTypeName * __thiscall
UE::FPropertyTypeName::FPropertyTypeName(FPropertyTypeName *this,FProperty *param_1)

{
  int iVar1;
  FPropertyTypeNameNode *pFVar2;
  undefined1 auStack_108 [32];
  FPropertyTypeNameNode local_e8 [10];
  FPropertyTypeNameNode *local_70;
  int local_68;
  undefined4 local_64;
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_70 = (FPropertyTypeNameNode *)0x0;
  local_68 = 0;
  local_64 = 10;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_2c = 10;
  local_28 = 0xffffffff;
  (**(code **)(param_1->_padding_ + 400))(param_1,local_e8);
  this->Index = 0;
  if (local_68 != 0) {
    pFVar2 = local_e8;
    if (local_70 != (FPropertyTypeNameNode *)0x0) {
      pFVar2 = local_70;
    }
    iVar1 = FPropertyTypeNameTable::FindOrAddByName(&GPropertyTypeNameTable,pFVar2);
    this->Index = iVar1;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_70 != (FPropertyTypeNameNode *)0x0) {
    FMemory::Free(local_70);
  }
  return this;
}

// GetName @ 14217c750

FName __thiscall UE::FPropertyTypeName::GetName(FPropertyTypeName *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX =
       *(undefined8 *)
        ((longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] +
        (ulonglong)(this->Index & 0x1fff) * 0xc);
  return in_RDX;
}

// GetParameter @ 14217d2e0

FPropertyTypeName __thiscall
UE::FPropertyTypeName::GetParameter(FPropertyTypeName *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 in_register_00000014;
  int in_R8D;
  
  lVar1 = (longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] +
          (ulonglong)(this->Index & 0x1fff) * 0xc;
  if ((-1 < in_R8D) && (lVar2 = lVar1, in_R8D < *(int *)(lVar1 + 8))) {
    while (0 < in_R8D) {
      in_R8D = in_R8D + -1 + *(int *)(lVar2 + 0x14);
      lVar2 = lVar2 + 0xc;
    }
    *(int *)CONCAT44(in_register_00000014,param_1) =
         (int)(((lVar2 + 0xc) - lVar1) / 0xc) + this->Index;
    return (FPropertyTypeName)param_1;
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = 0;
  return (FPropertyTypeName)param_1;
}

// GetParameterCount @ 14217d390

int __thiscall UE::FPropertyTypeName::GetParameterCount(FPropertyTypeName *this)

{
  return *(int *)((longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] + 8 +
                 (ulonglong)(this->Index & 0x1fff) * 0xc);
}

// IsEnum @ 142183ea0

bool __thiscall UE::FPropertyTypeName::IsEnum(FPropertyTypeName *this,FName param_1)

{
  ulonglong *puVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  uVar3 = (ulonglong)(this->Index & 0x1fff);
  puVar1 = (ulonglong *)
           ((longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] + uVar3 * 0xc);
  if (0 < *(int *)((longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] + 8 +
                  uVar3 * 0xc)) {
    uVar3 = *puVar1;
    FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
    if ((uVar3 != *(uint *)CONCAT44(extraout_var,FVar2.Value)) &&
       (uVar3 = *puVar1, FVar2 = FNameEntryId::FromValidEName((EName)local_res8),
       uVar3 != *(uint *)CONCAT44(extraout_var_00,FVar2.Value))) {
      return false;
    }
    if (*(FName *)((longlong)puVar1 + 0xc) == param_1) {
      return true;
    }
  }
  return false;
}

// IsStruct @ 142184b80

bool __thiscall UE::FPropertyTypeName::IsStruct(FPropertyTypeName *this,FName param_1)

{
  ulonglong *puVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  uVar3 = (ulonglong)(this->Index & 0x1fff);
  puVar1 = (ulonglong *)
           ((longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] + uVar3 * 0xc);
  if (0 < *(int *)((longlong)GPropertyTypeNameTable.Blocks[(longlong)this->Index >> 0xd] + 8 +
                  uVar3 * 0xc)) {
    uVar3 = *puVar1;
    FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
    if ((uVar3 == *(uint *)CONCAT44(extraout_var,FVar2.Value)) &&
       (*(FName *)((longlong)puVar1 + 0xc) == param_1)) {
      return true;
    }
  }
  return false;
}

