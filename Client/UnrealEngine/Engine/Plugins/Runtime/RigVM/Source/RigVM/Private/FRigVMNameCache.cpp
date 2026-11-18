// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 13

// Concat @ 14a0d0560

FName __thiscall FRigVMNameCache::Concat(FRigVMNameCache *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FName FVar2;
  uint *puVar3;
  FString *pFVar4;
  FString *pFVar5;
  uint uVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  FName *in_R9;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FName local_68;
  FRigVMNameOp local_60;
  undefined1 local_50 [16];
  FString local_40;
  FString local_30;
  
  FVar1 = *param_2;
  FVar2 = *in_R9;
  if (FVar1 == (FName)0x0) {
    *param_1 = FVar2;
  }
  else if (FVar2 == (FName)0x0) {
    *param_1 = FVar1;
  }
  else {
    uVar10 = FVar1.Number;
    local_60.C = 0xffffffff;
    uVar9 = FVar2.Number;
    local_60.Type = Concat;
    uVar12 = FVar1.ComparisonIndex.Value.Value - uVar10 ^ uVar10 >> 0xd;
    uVar6 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
    uVar10 = (uVar10 - uVar6) - uVar12 ^ uVar6 >> 0xd;
    uVar13 = (uVar12 - uVar10) - uVar6 ^ uVar10 >> 0xc;
    uVar6 = (uVar6 - uVar13) - uVar10 ^ uVar13 << 0x10;
    uVar12 = (uVar10 - uVar6) - uVar13 ^ uVar6 >> 5;
    uVar14 = (uVar13 - uVar12) - uVar6 ^ uVar12 >> 3;
    uVar6 = (uVar6 - uVar14) - uVar12 ^ uVar14 << 10;
    uVar13 = FVar2.ComparisonIndex.Value.Value - uVar9 ^ uVar9 >> 0xd;
    uVar10 = (-0x61c88647 - uVar13) - uVar9 ^ uVar13 << 8;
    uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar10 >> 0xd;
    uVar12 = (uVar12 - uVar6) - uVar14 ^ uVar6 >> 0xf;
    uVar13 = (uVar13 - uVar9) - uVar10 ^ uVar9 >> 0xc;
    uVar6 = (uVar10 - uVar13) - uVar9 ^ uVar13 << 0x10;
    uVar10 = (uVar9 - uVar6) - uVar13 ^ uVar6 >> 5;
    uVar9 = (uVar13 - uVar10) - uVar6 ^ uVar10 >> 3;
    uVar6 = (uVar6 - uVar9) - uVar10 ^ uVar9 << 10;
    uVar10 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 0xf;
    local_60.A = uVar12;
    local_60.B = uVar10;
    uVar6 = ::GetTypeHash(&local_60);
    if (*(int *)&(this->NameCache).field_0x8 != *(int *)&(this->NameCache).field_0x34) {
      puVar11 = *(undefined1 **)&(this->NameCache).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->NameCache).field_0x38;
      }
      uVar6 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->NameCache).field_0x48 - 1U & uVar6) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar3 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)&this->NameCache);
          if (((((char)puVar3[3] == '\x01') && (*puVar3 == uVar12)) && (puVar3[1] == uVar10)) &&
             (puVar3[2] == 0xffffffff)) {
            if (uVar6 != 0xffffffff) {
              pFVar7 = (FName *)(puVar3 + 4);
              if (puVar3 == (uint *)0x0) {
                pFVar7 = (FName *)0x0;
              }
              if (pFVar7 != (FName *)0x0) {
                local_68 = *pFVar7;
                goto LAB_14a0d07c2;
              }
            }
            break;
          }
          uVar6 = puVar3[6];
        } while (uVar6 != 0xffffffff);
      }
    }
    pFVar4 = ::FName::ToString(in_R9,&local_30);
    pFVar5 = ::FName::ToString(param_2,&local_40);
    ::FString::ConcatFF((FString *)local_50,pFVar5,pFVar4);
    pFVar8 = (FScriptContainerElement *)L"";
    if (local_50._8_4_ != 0) {
      pFVar8 = (FScriptContainerElement *)local_50._0_8_;
    }
    ::FName::FName(&local_68,(wchar_t *)pFVar8);
    if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50._0_8_);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    local_50._0_8_ = &local_60;
    local_50._8_8_ = &local_68;
    TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMNameOp_const_&,FName_const_&>_>
              ((TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FRigVMNameOp_const_&,FName_const_&> *)&stack0x00000018,
               (bool *)local_50);
LAB_14a0d07c2:
    *param_1 = local_68;
  }
  return (FName)param_1;
}

// Contains @ 14a0d0d90

bool __thiscall
FRigVMNameCache::Contains(FRigVMNameCache *this,FName *param_1,FName *param_2,Type param_3)

{
  FName FVar1;
  FName FVar2;
  int iVar3;
  uint *puVar4;
  FString *this_00;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  wchar_t *_Str;
  char cVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  FRigVMNameOp local_60;
  undefined1 local_50 [16];
  FString local_40;
  
  FVar1 = *param_1;
  if ((FVar1 == (FName)0x0) || (FVar2 = *param_2, FVar2 == (FName)0x0)) {
    return false;
  }
  local_60.C = 0xffffffff;
  uVar11 = FVar1.Number;
  uVar9 = FVar2.Number;
  cVar10 = (param_3 != CaseSensitive) + '\f';
  uVar13 = FVar1.ComparisonIndex.Value.Value - uVar11 ^ uVar11 >> 0xd;
  uVar7 = (-0x61c88647 - uVar13) - uVar11 ^ uVar13 << 8;
  uVar11 = (uVar11 - uVar7) - uVar13 ^ uVar7 >> 0xd;
  uVar14 = (uVar13 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar7 = (uVar7 - uVar14) - uVar11 ^ uVar14 << 0x10;
  uVar13 = (uVar11 - uVar7) - uVar14 ^ uVar7 >> 5;
  uVar15 = (uVar14 - uVar13) - uVar7 ^ uVar13 >> 3;
  uVar7 = (uVar7 - uVar15) - uVar13 ^ uVar15 << 10;
  uVar14 = FVar2.ComparisonIndex.Value.Value - uVar9 ^ uVar9 >> 0xd;
  uVar11 = (-0x61c88647 - uVar14) - uVar9 ^ uVar14 << 8;
  uVar9 = (uVar9 - uVar11) - uVar14 ^ uVar11 >> 0xd;
  uVar13 = (uVar13 - uVar7) - uVar15 ^ uVar7 >> 0xf;
  uVar14 = (uVar14 - uVar9) - uVar11 ^ uVar9 >> 0xc;
  uVar7 = (uVar11 - uVar14) - uVar9 ^ uVar14 << 0x10;
  uVar11 = (uVar9 - uVar7) - uVar14 ^ uVar7 >> 5;
  uVar9 = (uVar14 - uVar11) - uVar7 ^ uVar11 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar11 ^ uVar9 << 10;
  uVar11 = (uVar11 - uVar7) - uVar9 ^ uVar7 >> 0xf;
  local_60.A = uVar13;
  local_60.B = uVar11;
  local_60.Type = cVar10;
  uVar7 = ::GetTypeHash((FRigVMNameOp *)(local_68 + 8));
  if (*(int *)&(this->BoolCache).field_0x8 != *(int *)&(this->BoolCache).field_0x34) {
    puVar12 = *(undefined1 **)&(this->BoolCache).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->BoolCache).field_0x38;
    }
    uVar7 = *(uint *)(puVar12 + (ulonglong)(*(int *)&(this->BoolCache).field_0x48 - 1U & uVar7) * 4)
    ;
    if (uVar7 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar7 * 0x1c + *(longlong *)&this->BoolCache);
        if (((((char)puVar4[3] == cVar10) && (*puVar4 == uVar13)) && (puVar4[1] == uVar11)) &&
           (puVar4[2] == 0xffffffff)) {
          if (uVar7 != 0xffffffff) {
            puVar8 = puVar4 + 4;
            if (puVar4 == (uint *)0x0) {
              puVar8 = (uint *)0x0;
            }
            if (puVar8 != (uint *)0x0) {
              return (bool)(char)*puVar8;
            }
          }
          break;
        }
        uVar7 = puVar4[5];
      } while (uVar7 != 0xffffffff);
    }
  }
  this_00 = ::FName::ToString(param_1,&local_40);
  pFVar5 = ::FName::ToString(param_2,(FString *)local_50);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      iVar3 = -1;
      goto LAB_14a0d0ff8;
    }
  }
  sVar6 = wcslen(_Str);
  iVar3 = ::FString::Find(this_00,_Str,(int)sVar6,param_3,FromStart,-1);
LAB_14a0d0ff8:
  local_res10[0] = iVar3 != -1;
  if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_50._0_8_);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  local_50._0_8_ = local_68 + 8;
  local_50._8_8_ = local_res10;
  TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRigVMNameOp_const_&,bool_const_&>_>
            ((TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
              *)&this->BoolCache,(TPairInitializer<FRigVMNameOp_const_&,bool_const_&> *)local_68,
             (bool *)local_50);
  return (bool)local_res10[0];
}

// EndsWith @ 14a0d6a70

bool __thiscall
FRigVMNameCache::EndsWith(FRigVMNameCache *this,FName *param_1,FName *param_2,Type param_3)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint *puVar4;
  FString *this_00;
  FString *pFVar5;
  uint uVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  FRigVMNameOp local_60;
  undefined1 local_50 [16];
  FString local_40;
  
  FVar2 = *param_1;
  if ((FVar2 == (FName)0x0) || (FVar3 = *param_2, FVar3 == (FName)0x0)) {
    local_res10[0] = 0;
  }
  else {
    local_60.C = 0xffffffff;
    uVar11 = FVar2.Number;
    uVar9 = FVar3.Number;
    cVar10 = (param_3 != CaseSensitive) + '\b';
    uVar14 = FVar2.ComparisonIndex.Value.Value - uVar11 ^ uVar11 >> 0xd;
    uVar6 = (-0x61c88647 - uVar14) - uVar11 ^ uVar14 << 8;
    uVar11 = (uVar11 - uVar6) - uVar14 ^ uVar6 >> 0xd;
    uVar15 = (uVar14 - uVar11) - uVar6 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar11 ^ uVar15 << 0x10;
    uVar14 = (uVar11 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar16 = (uVar15 - uVar14) - uVar6 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar16) - uVar14 ^ uVar16 << 10;
    uVar15 = FVar3.ComparisonIndex.Value.Value - uVar9 ^ uVar9 >> 0xd;
    uVar11 = (-0x61c88647 - uVar15) - uVar9 ^ uVar15 << 8;
    uVar9 = (uVar9 - uVar11) - uVar15 ^ uVar11 >> 0xd;
    uVar14 = (uVar14 - uVar6) - uVar16 ^ uVar6 >> 0xf;
    uVar15 = (uVar15 - uVar9) - uVar11 ^ uVar9 >> 0xc;
    uVar6 = (uVar11 - uVar15) - uVar9 ^ uVar15 << 0x10;
    uVar11 = (uVar9 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar9 = (uVar15 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar9) - uVar11 ^ uVar9 << 10;
    uVar11 = (uVar11 - uVar6) - uVar9 ^ uVar6 >> 0xf;
    local_60.A = uVar14;
    local_60.B = uVar11;
    local_60.Type = cVar10;
    uVar6 = ::GetTypeHash((FRigVMNameOp *)(local_68 + 8));
    if (*(int *)&(this->BoolCache).field_0x8 != *(int *)&(this->BoolCache).field_0x34) {
      puVar13 = *(undefined1 **)&(this->BoolCache).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->BoolCache).field_0x38;
      }
      uVar6 = *(uint *)(puVar13 +
                       (ulonglong)(*(int *)&(this->BoolCache).field_0x48 - 1U & uVar6) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar4 = (uint *)((longlong)(int)uVar6 * 0x1c + *(longlong *)&this->BoolCache);
          if (((((char)puVar4[3] == cVar10) && (*puVar4 == uVar14)) && (puVar4[1] == uVar11)) &&
             (puVar4[2] == 0xffffffff)) {
            if (uVar6 != 0xffffffff) {
              puVar7 = puVar4 + 4;
              if (puVar4 == (uint *)0x0) {
                puVar7 = (uint *)0x0;
              }
              if (puVar7 != (uint *)0x0) {
                return (bool)(char)*puVar7;
              }
            }
            break;
          }
          uVar6 = puVar4[5];
        } while (uVar6 != 0xffffffff);
      }
    }
    this_00 = ::FName::ToString(param_1,&local_40);
    pFVar5 = ::FName::ToString(param_2,(FString *)local_50);
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar12 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar12 = 0;
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    local_res10[0] = ::FString::EndsWith(this_00,pwVar8,iVar12,param_3);
    if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50._0_8_);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_50._0_8_ = local_68 + 8;
    local_50._8_8_ = local_res10;
    TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMNameOp_const_&,bool_const_&>_>
              ((TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
                *)&this->BoolCache,(TPairInitializer<FRigVMNameOp_const_&,bool_const_&> *)local_68,
               (bool *)local_50);
  }
  return (bool)local_res10[0];
}

// GetBoolOps @ 14a0e1f30

TArray<FRigVMNameOp,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMNameCache::GetBoolOps
          (FRigVMNameCache *this,
          TArray<FRigVMNameOp,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>
              *)&this->BoolCache,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBoolValues @ 14a0e1f60

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMNameCache::GetBoolValues
          (FRigVMNameCache *this,TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>
              *)&this->BoolCache,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNameOps @ 14a0e8430

TArray<FRigVMNameOp,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMNameCache::GetNameOps
          (FRigVMNameCache *this,
          TArray<FRigVMNameOp,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
              *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNameValues @ 14a0e8460

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMNameCache::GetNameValues
          (FRigVMNameCache *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
              *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Left @ 14a0fa440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __thiscall FRigVMNameCache::Left(FRigVMNameCache *this,FName *param_1,uint param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint *puVar4;
  FString *this_00;
  uint uVar5;
  FName *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined4 in_register_00000084;
  FName *this_01;
  undefined1 *puVar10;
  uint in_R9D;
  FName local_48;
  FRigVMNameOp local_40;
  undefined1 local_30 [24];
  
  this_01 = (FName *)CONCAT44(in_register_00000084,param_2);
  if ((in_R9D == 0) || (*this_01 == (FName)0x0)) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    uVar3 = ::FName::GetStringLength(this_01);
    if (in_R9D < uVar3) {
      uVar3 = this_01->Number;
      local_40.C = 0xffffffff;
      uVar7 = (this_01->ComparisonIndex).Value - uVar3 ^ uVar3 >> 0xd;
      local_40.Type = Left;
      uVar5 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
      uVar9 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 0xd;
      uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 0xc;
      uVar3 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
      uVar9 = (uVar9 - uVar3) - uVar7 ^ uVar3 >> 5;
      uVar5 = (uVar7 - uVar9) - uVar3 ^ uVar9 >> 3;
      uVar3 = (uVar3 - uVar5) - uVar9 ^ uVar5 << 10;
      uVar5 = (uVar9 - uVar3) - uVar5 ^ uVar3 >> 0xf;
      local_40.A = uVar5;
      uVar3 = ::GetTypeHash(&local_40);
      if (*(int *)&(this->NameCache).field_0x8 != *(int *)&(this->NameCache).field_0x34) {
        puVar10 = *(undefined1 **)&(this->NameCache).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->NameCache).field_0x38;
        }
        uVar3 = *(uint *)(puVar10 +
                         (ulonglong)(*(int *)&(this->NameCache).field_0x48 - 1U & uVar3) * 4);
        if (uVar3 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->NameCache);
            if (((((char)puVar4[3] == '\x02') && (*puVar4 == uVar5)) && (puVar4[1] == in_R9D)) &&
               (puVar4[2] == 0xffffffff)) {
              if (uVar3 != 0xffffffff) {
                pFVar6 = (FName *)(puVar4 + 4);
                if (puVar4 == (uint *)0x0) {
                  pFVar6 = (FName *)0x0;
                }
                if (pFVar6 != (FName *)0x0) {
                  local_48 = *pFVar6;
                  goto LAB_14a0fa62c;
                }
              }
              break;
            }
            uVar3 = puVar4[6];
          } while (uVar3 != 0xffffffff);
        }
      }
      this_00 = ::FName::ToString(this_01,(FString *)local_30);
      iVar1 = (this_00->Data).ArrayNum;
      uVar3 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      uVar5 = uVar3;
      if ((int)in_R9D < (int)uVar3) {
        uVar5 = in_R9D;
      }
      uVar7 = 0;
      if (0 < (int)uVar5) {
        uVar7 = uVar5;
      }
      ::FString::RemoveAt(this_00,uVar7,uVar3 - uVar7,No);
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (this_00->Data).ArrayNum;
      (this_00->Data).ArrayNum = 0;
      (this_00->Data).ArrayMax = 0;
      pFVar8 = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        pFVar8 = pFVar2;
      }
      ::FName::FName(&local_48,(wchar_t *)pFVar8);
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((FScriptContainerElement *)local_30._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_30._0_8_);
      }
      local_30._0_8_ = &local_40;
      local_30._8_8_ = &local_48;
      TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRigVMNameOp_const_&,FName_const_&>_>
                ((TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<FRigVMNameOp_const_&,FName_const_&> *)&stack0x00000020,
                 (bool *)local_30);
    }
    else {
      local_48 = *this_01;
    }
LAB_14a0fa62c:
    *param_1 = local_48;
  }
  return (FName)param_1;
}

// LeftChop @ 14a0fa730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __thiscall FRigVMNameCache::LeftChop(FRigVMNameCache *this,FName *param_1,uint param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  FString *this_00;
  uint uVar4;
  FName *pFVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_register_00000084;
  FName *this_01;
  undefined1 *puVar11;
  uint in_R9D;
  FName local_48;
  FRigVMNameOp local_40;
  undefined1 local_30 [24];
  
  this_01 = (FName *)CONCAT44(in_register_00000084,param_2);
  if ((in_R9D == 0) || (FVar1 = *this_01, FVar1 == (FName)0x0)) {
    local_48 = *this_01;
  }
  else {
    uVar9 = FVar1.Number;
    local_40.C = 0xffffffff;
    uVar6 = FVar1.ComparisonIndex.Value.Value - uVar9 ^ uVar9 >> 0xd;
    local_40.Type = LeftChop;
    uVar4 = (-0x61c88647 - uVar6) - uVar9 ^ uVar6 << 8;
    uVar9 = (uVar9 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar9) - uVar4 ^ uVar9 >> 0xc;
    uVar4 = (uVar4 - uVar6) - uVar9 ^ uVar6 << 0x10;
    uVar9 = (uVar9 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar9) - uVar4 ^ uVar9 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar9 ^ uVar6 << 10;
    uVar6 = (uVar9 - uVar4) - uVar6 ^ uVar4 >> 0xf;
    local_40.A = uVar6;
    uVar4 = ::GetTypeHash(&local_40);
    if (*(int *)&(this->NameCache).field_0x8 != *(int *)&(this->NameCache).field_0x34) {
      puVar11 = *(undefined1 **)&(this->NameCache).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->NameCache).field_0x38;
      }
      uVar4 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->NameCache).field_0x48 - 1U & uVar4) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar3 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->NameCache);
          if (((((char)puVar3[3] == '\x04') && (*puVar3 == uVar6)) && (puVar3[1] == in_R9D)) &&
             (puVar3[2] == 0xffffffff)) {
            if (uVar4 != 0xffffffff) {
              pFVar5 = (FName *)(puVar3 + 4);
              if (puVar3 == (uint *)0x0) {
                pFVar5 = (FName *)0x0;
              }
              if (pFVar5 != (FName *)0x0) {
                local_48 = *pFVar5;
                goto LAB_14a0fa911;
              }
            }
            break;
          }
          uVar4 = puVar3[6];
        } while (uVar4 != 0xffffffff);
      }
    }
    this_00 = ::FName::ToString(this_01,(FString *)local_30);
    iVar7 = (this_00->Data).ArrayNum;
    iVar10 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar10 = 0;
    }
    if ((int)(iVar10 - in_R9D) < iVar10) {
      iVar10 = iVar10 - in_R9D;
    }
    iVar7 = 0;
    if (0 < iVar10) {
      iVar7 = iVar10;
    }
    ::FString::RemoveAt(this_00,iVar7,in_R9D,No);
    pFVar2 = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = (this_00->Data).ArrayNum;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    pFVar8 = (FScriptContainerElement *)L"";
    if (iVar7 != 0) {
      pFVar8 = pFVar2;
    }
    ::FName::FName(&local_48,(wchar_t *)pFVar8);
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((FScriptContainerElement *)local_30._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_30._0_8_);
    }
    local_30._0_8_ = &local_40;
    local_30._8_8_ = &local_48;
    TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMNameOp_const_&,FName_const_&>_>
              ((TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FRigVMNameOp_const_&,FName_const_&> *)&stack0x00000020,
               (bool *)local_30);
  }
LAB_14a0fa911:
  *param_1 = local_48;
  return (FName)param_1;
}

// Replace @ 14a10a030

FName __thiscall
FRigVMNameCache::Replace
          (FRigVMNameCache *this,FName *param_1,FName *param_2,FName *param_3,Type param_4)

{
  FName *this_00;
  uint uVar1;
  FString *pFVar2;
  FName *pFVar3;
  FString *pFVar4;
  uint *puVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  undefined4 in_stack_0000002c;
  Type in_stack_00000030;
  FName local_88;
  FRigVMNameOp local_80;
  FString local_70;
  undefined1 local_60 [16];
  FString local_50;
  FString local_40;
  
  if ((*param_2 == (FName)0x0) || (*param_3 == (FName)0x0)) {
    *param_1 = *param_2;
  }
  else {
    this_00 = (FName *)CONCAT44(in_stack_0000002c,param_4);
    FRigVMNameOp::Replace(&local_80,param_2,param_3,this_00,in_stack_00000030);
    uVar1 = ::GetTypeHash(&local_80);
    if (*(int *)&(this->NameCache).field_0x8 != *(int *)&(this->NameCache).field_0x34) {
      puVar8 = *(undefined1 **)&(this->NameCache).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->NameCache).field_0x38;
      }
      uVar1 = *(uint *)(puVar8 + (ulonglong)(*(int *)&(this->NameCache).field_0x48 - 1U & uVar1) * 4
                       );
      if (uVar1 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->NameCache);
          if ((((*(ERigVMNameOp *)(puVar5 + 3) == local_80.Type) && (*puVar5 == local_80.A)) &&
              (puVar5[1] == local_80.B)) && (puVar5[2] == local_80.C)) {
            if (uVar1 != 0xffffffff) {
              pFVar3 = (FName *)(puVar5 + 4);
              if (puVar5 == (uint *)0x0) {
                pFVar3 = (FName *)0x0;
              }
              if (pFVar3 != (FName *)0x0) {
                *param_1 = *pFVar3;
                return (FName)param_1;
              }
            }
            break;
          }
          uVar1 = puVar5[6];
        } while (uVar1 != 0xffffffff);
      }
    }
    pwVar6 = L"";
    ::FString::FString(&local_70,L"");
    if (*this_00 != (FName)0x0) {
      pFVar2 = ::FName::ToString(this_00,(FString *)local_60);
      if ((pFVar2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      ::FString::operator=(&local_70,pwVar9);
      if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_60._0_8_);
      }
    }
    pFVar2 = ::FName::ToString(param_2,&local_40);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar7.Data = local_70.Data.AllocatorInstance.Data;
    }
    pFVar4 = ::FName::ToString(param_3,&local_50);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar2 = ::FString::Replace(pFVar2,(FString *)local_60,pwVar9,(wchar_t *)FVar7.Data,
                                in_stack_00000030);
    if ((pFVar2->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_88,pwVar6);
    if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_60._0_8_);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_60._0_8_ = &local_80;
    local_60._8_8_ = &local_88;
    TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMNameOp_const_&,FName_const_&>_>
              ((TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FRigVMNameOp_const_&,FName_const_&> *)&stack0x00000018,
               (bool *)local_60);
    *param_1 = local_88;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  return (FName)param_1;
}

// Right @ 14a10d270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __thiscall FRigVMNameCache::Right(FRigVMNameCache *this,FName *param_1,uint param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint *puVar4;
  FString *this_00;
  uint uVar5;
  FName *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined4 in_register_00000084;
  FName *this_01;
  undefined1 *puVar10;
  uint in_R9D;
  FName local_48;
  FRigVMNameOp local_40;
  undefined1 local_30 [24];
  
  this_01 = (FName *)CONCAT44(in_register_00000084,param_2);
  if ((in_R9D == 0) || (*this_01 == (FName)0x0)) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    uVar3 = ::FName::GetStringLength(this_01);
    if (in_R9D < uVar3) {
      uVar3 = this_01->Number;
      local_40.C = 0xffffffff;
      uVar7 = (this_01->ComparisonIndex).Value - uVar3 ^ uVar3 >> 0xd;
      local_40.Type = Right;
      uVar5 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
      uVar9 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 0xd;
      uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 0xc;
      uVar3 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
      uVar9 = (uVar9 - uVar3) - uVar7 ^ uVar3 >> 5;
      uVar5 = (uVar7 - uVar9) - uVar3 ^ uVar9 >> 3;
      uVar3 = (uVar3 - uVar5) - uVar9 ^ uVar5 << 10;
      uVar5 = (uVar9 - uVar3) - uVar5 ^ uVar3 >> 0xf;
      local_40.A = uVar5;
      uVar3 = ::GetTypeHash(&local_40);
      if (*(int *)&(this->NameCache).field_0x8 != *(int *)&(this->NameCache).field_0x34) {
        puVar10 = *(undefined1 **)&(this->NameCache).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->NameCache).field_0x38;
        }
        uVar3 = *(uint *)(puVar10 +
                         (ulonglong)(*(int *)&(this->NameCache).field_0x48 - 1U & uVar3) * 4);
        if (uVar3 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->NameCache);
            if (((((char)puVar4[3] == '\x03') && (*puVar4 == uVar5)) && (puVar4[1] == in_R9D)) &&
               (puVar4[2] == 0xffffffff)) {
              if (uVar3 != 0xffffffff) {
                pFVar6 = (FName *)(puVar4 + 4);
                if (puVar4 == (uint *)0x0) {
                  pFVar6 = (FName *)0x0;
                }
                if (pFVar6 != (FName *)0x0) {
                  local_48 = *pFVar6;
                  goto LAB_14a10d45e;
                }
              }
              break;
            }
            uVar3 = puVar4[6];
          } while (uVar3 != 0xffffffff);
        }
      }
      this_00 = ::FName::ToString(this_01,(FString *)local_30);
      iVar1 = (this_00->Data).ArrayNum;
      uVar3 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      uVar5 = uVar3;
      if ((int)in_R9D < (int)uVar3) {
        uVar5 = in_R9D;
      }
      uVar7 = 0;
      if (0 < (int)uVar5) {
        uVar7 = uVar5;
      }
      ::FString::RemoveAt(this_00,0,uVar3 - uVar7,No);
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (this_00->Data).ArrayNum;
      (this_00->Data).ArrayNum = 0;
      (this_00->Data).ArrayMax = 0;
      pFVar8 = (FScriptContainerElement *)L"";
      if (iVar1 != 0) {
        pFVar8 = pFVar2;
      }
      ::FName::FName(&local_48,(wchar_t *)pFVar8);
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((FScriptContainerElement *)local_30._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_30._0_8_);
      }
      local_30._0_8_ = &local_40;
      local_30._8_8_ = &local_48;
      TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRigVMNameOp_const_&,FName_const_&>_>
                ((TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<FRigVMNameOp_const_&,FName_const_&> *)&stack0x00000020,
                 (bool *)local_30);
    }
    else {
      local_48 = *this_01;
    }
LAB_14a10d45e:
    *param_1 = local_48;
  }
  return (FName)param_1;
}

// RightChop @ 14a10d560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __thiscall FRigVMNameCache::RightChop(FRigVMNameCache *this,FName *param_1,uint param_2)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  FString *this_00;
  uint uVar5;
  FName *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined4 in_register_00000084;
  FName *this_01;
  undefined1 *puVar10;
  uint in_R9D;
  FName local_48;
  FRigVMNameOp local_40;
  undefined1 local_30 [24];
  
  this_01 = (FName *)CONCAT44(in_register_00000084,param_2);
  if ((in_R9D == 0) || (FVar2 = *this_01, FVar2 == (FName)0x0)) {
    local_48 = *this_01;
  }
  else {
    uVar9 = FVar2.Number;
    local_40.C = 0xffffffff;
    uVar7 = FVar2.ComparisonIndex.Value.Value - uVar9 ^ uVar9 >> 0xd;
    local_40.Type = RightChop;
    uVar5 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
    uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 10;
    uVar7 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 0xf;
    local_40.A = uVar7;
    uVar5 = ::GetTypeHash(&local_40);
    if (*(int *)&(this->NameCache).field_0x8 != *(int *)&(this->NameCache).field_0x34) {
      puVar10 = *(undefined1 **)&(this->NameCache).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->NameCache).field_0x38;
      }
      uVar5 = *(uint *)(puVar10 +
                       (ulonglong)(*(int *)&(this->NameCache).field_0x48 - 1U & uVar5) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar4 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&this->NameCache);
          if (((((char)puVar4[3] == '\x05') && (*puVar4 == uVar7)) && (puVar4[1] == in_R9D)) &&
             (puVar4[2] == 0xffffffff)) {
            if (uVar5 != 0xffffffff) {
              pFVar6 = (FName *)(puVar4 + 4);
              if (puVar4 == (uint *)0x0) {
                pFVar6 = (FName *)0x0;
              }
              if (pFVar6 != (FName *)0x0) {
                local_48 = *pFVar6;
                goto LAB_14a10d723;
              }
            }
            break;
          }
          uVar5 = puVar4[6];
        } while (uVar5 != 0xffffffff);
      }
    }
    this_00 = ::FName::ToString(this_01,(FString *)local_30);
    ::FString::RemoveAt(this_00,0,in_R9D,No);
    pFVar3 = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (this_00->Data).ArrayNum;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    pFVar8 = (FScriptContainerElement *)L"";
    if (iVar1 != 0) {
      pFVar8 = pFVar3;
    }
    ::FName::FName(&local_48,(wchar_t *)pFVar8);
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if ((FScriptContainerElement *)local_30._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_30._0_8_);
    }
    local_30._0_8_ = &local_40;
    local_30._8_8_ = &local_48;
    TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMNameOp_const_&,FName_const_&>_>
              ((TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FRigVMNameOp_const_&,FName_const_&> *)&stack0x00000020,
               (bool *)local_30);
  }
LAB_14a10d723:
  *param_1 = local_48;
  return (FName)param_1;
}

// StartsWith @ 14a111590

bool __thiscall
FRigVMNameCache::StartsWith(FRigVMNameCache *this,FName *param_1,FName *param_2,Type param_3)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint *puVar4;
  FString *this_00;
  FString *pFVar5;
  uint uVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  FRigVMNameOp local_60;
  undefined1 local_50 [16];
  FString local_40;
  
  FVar2 = *param_1;
  if ((FVar2 == (FName)0x0) || (FVar3 = *param_2, FVar3 == (FName)0x0)) {
    local_res10[0] = 0;
  }
  else {
    local_60.C = 0xffffffff;
    uVar11 = FVar2.Number;
    uVar9 = FVar3.Number;
    cVar10 = (param_3 != CaseSensitive) + '\n';
    uVar14 = FVar2.ComparisonIndex.Value.Value - uVar11 ^ uVar11 >> 0xd;
    uVar6 = (-0x61c88647 - uVar14) - uVar11 ^ uVar14 << 8;
    uVar11 = (uVar11 - uVar6) - uVar14 ^ uVar6 >> 0xd;
    uVar15 = (uVar14 - uVar11) - uVar6 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar11 ^ uVar15 << 0x10;
    uVar14 = (uVar11 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar16 = (uVar15 - uVar14) - uVar6 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar16) - uVar14 ^ uVar16 << 10;
    uVar15 = FVar3.ComparisonIndex.Value.Value - uVar9 ^ uVar9 >> 0xd;
    uVar11 = (-0x61c88647 - uVar15) - uVar9 ^ uVar15 << 8;
    uVar9 = (uVar9 - uVar11) - uVar15 ^ uVar11 >> 0xd;
    uVar14 = (uVar14 - uVar6) - uVar16 ^ uVar6 >> 0xf;
    uVar15 = (uVar15 - uVar9) - uVar11 ^ uVar9 >> 0xc;
    uVar6 = (uVar11 - uVar15) - uVar9 ^ uVar15 << 0x10;
    uVar11 = (uVar9 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar9 = (uVar15 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar9) - uVar11 ^ uVar9 << 10;
    uVar11 = (uVar11 - uVar6) - uVar9 ^ uVar6 >> 0xf;
    local_60.A = uVar14;
    local_60.B = uVar11;
    local_60.Type = cVar10;
    uVar6 = ::GetTypeHash((FRigVMNameOp *)(local_68 + 8));
    if (*(int *)&(this->BoolCache).field_0x8 != *(int *)&(this->BoolCache).field_0x34) {
      puVar13 = *(undefined1 **)&(this->BoolCache).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->BoolCache).field_0x38;
      }
      uVar6 = *(uint *)(puVar13 +
                       (ulonglong)(*(int *)&(this->BoolCache).field_0x48 - 1U & uVar6) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar4 = (uint *)((longlong)(int)uVar6 * 0x1c + *(longlong *)&this->BoolCache);
          if (((((char)puVar4[3] == cVar10) && (*puVar4 == uVar14)) && (puVar4[1] == uVar11)) &&
             (puVar4[2] == 0xffffffff)) {
            if (uVar6 != 0xffffffff) {
              puVar7 = puVar4 + 4;
              if (puVar4 == (uint *)0x0) {
                puVar7 = (uint *)0x0;
              }
              if (puVar7 != (uint *)0x0) {
                return (bool)(char)*puVar7;
              }
            }
            break;
          }
          uVar6 = puVar4[5];
        } while (uVar6 != 0xffffffff);
      }
    }
    this_00 = ::FName::ToString(param_1,&local_40);
    pFVar5 = ::FName::ToString(param_2,(FString *)local_50);
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar12 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar12 = 0;
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    local_res10[0] = ::FString::StartsWith(this_00,pwVar8,iVar12,param_3);
    if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50._0_8_);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_50._0_8_ = local_68 + 8;
    local_50._8_8_ = local_res10;
    TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMNameOp_const_&,bool_const_&>_>
              ((TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
                *)&this->BoolCache,(TPairInitializer<FRigVMNameOp_const_&,bool_const_&> *)local_68,
               (bool *)local_50);
  }
  return (bool)local_res10[0];
}

