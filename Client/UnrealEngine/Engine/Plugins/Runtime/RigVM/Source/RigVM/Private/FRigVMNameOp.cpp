// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// Concat @ 14a0d0810

FRigVMNameOp * __cdecl
FRigVMNameOp::Concat(FRigVMNameOp *__return_storage_ptr__,FName *param_1,FName *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->Number;
  uVar3 = (param_1->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  __return_storage_ptr__->C = 0xffffffff;
  __return_storage_ptr__->Type = Concat;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = param_2->Number;
  __return_storage_ptr__->A = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  uVar1 = (param_2->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar1) - uVar2 ^ uVar1 << 8;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 0xd;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  __return_storage_ptr__->B = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  return __return_storage_ptr__;
}

// Contains @ 14a0d1070

FRigVMNameOp * __cdecl
FRigVMNameOp::Contains
          (FRigVMNameOp *__return_storage_ptr__,FName *param_1,FName *param_2,Type param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1->Number;
  __return_storage_ptr__->C = 0xffffffff;
  uVar1 = (param_1->ComparisonIndex).Value;
  uVar5 = param_2->Number;
  __return_storage_ptr__->Type = (param_3 != CaseSensitive) + ContainsCase;
  uVar3 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (param_2->ComparisonIndex).Value;
  __return_storage_ptr__->A = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  uVar2 = uVar2 - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
  uVar1 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar5 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar1 ^ uVar2 << 10;
  __return_storage_ptr__->B = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 0xf;
  return __return_storage_ptr__;
}

// EndsWith @ 14a0d6d30

FRigVMNameOp * __cdecl
FRigVMNameOp::EndsWith
          (FRigVMNameOp *__return_storage_ptr__,FName *param_1,FName *param_2,Type param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1->Number;
  __return_storage_ptr__->C = 0xffffffff;
  uVar1 = (param_1->ComparisonIndex).Value;
  uVar5 = param_2->Number;
  __return_storage_ptr__->Type = (param_3 != CaseSensitive) + EndsWithCase;
  uVar3 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (param_2->ComparisonIndex).Value;
  __return_storage_ptr__->A = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  uVar2 = uVar2 - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
  uVar1 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar5 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar1 ^ uVar2 << 10;
  __return_storage_ptr__->B = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 0xf;
  return __return_storage_ptr__;
}

// Left @ 14a0fa680

FRigVMNameOp * __cdecl
FRigVMNameOp::Left(FRigVMNameOp *__return_storage_ptr__,FName *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->Number;
  uVar3 = (param_1->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  __return_storage_ptr__->C = 0xffffffff;
  __return_storage_ptr__->Type = Left;
  __return_storage_ptr__->B = param_2;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  __return_storage_ptr__->A = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  return __return_storage_ptr__;
}

// LeftChop @ 14a0fa960

FRigVMNameOp * __cdecl
FRigVMNameOp::LeftChop(FRigVMNameOp *__return_storage_ptr__,FName *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->Number;
  uVar3 = (param_1->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  __return_storage_ptr__->C = 0xffffffff;
  __return_storage_ptr__->Type = LeftChop;
  __return_storage_ptr__->B = param_2;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  __return_storage_ptr__->A = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  return __return_storage_ptr__;
}

// Replace @ 14a10a280

FRigVMNameOp * __cdecl
FRigVMNameOp::Replace
          (FRigVMNameOp *__return_storage_ptr__,FName *param_1,FName *param_2,FName *param_3,
          Type param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_1->Number;
  uVar1 = (param_1->ComparisonIndex).Value;
  uVar4 = param_2->Number;
  uVar3 = (param_2->ComparisonIndex).Value;
  __return_storage_ptr__->Type = (param_4 != CaseSensitive) + ReplaceCase;
  uVar5 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar6 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar1 ^ uVar6 >> 0xc;
  uVar2 = (uVar1 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar1 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  __return_storage_ptr__->A = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 0xf;
  uVar2 = (-0x61c88647 - uVar1) - uVar4 ^ uVar1 << 8;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 0x10;
  uVar5 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 5;
  uVar3 = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar1 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar2 = param_3->Number;
  uVar4 = (param_3->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  __return_storage_ptr__->B = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar2 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  __return_storage_ptr__->C = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
  return __return_storage_ptr__;
}

// Right @ 14a10d4b0

FRigVMNameOp * __cdecl
FRigVMNameOp::Right(FRigVMNameOp *__return_storage_ptr__,FName *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->Number;
  uVar3 = (param_1->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  __return_storage_ptr__->C = 0xffffffff;
  __return_storage_ptr__->Type = Right;
  __return_storage_ptr__->B = param_2;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  __return_storage_ptr__->A = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  return __return_storage_ptr__;
}

// RightChop @ 14a10d770

FRigVMNameOp * __cdecl
FRigVMNameOp::RightChop(FRigVMNameOp *__return_storage_ptr__,FName *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1->Number;
  uVar3 = (param_1->ComparisonIndex).Value - uVar2 ^ uVar2 >> 0xd;
  __return_storage_ptr__->C = 0xffffffff;
  __return_storage_ptr__->Type = RightChop;
  __return_storage_ptr__->B = param_2;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  __return_storage_ptr__->A = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  return __return_storage_ptr__;
}

// StartsWith @ 14a111850

FRigVMNameOp * __cdecl
FRigVMNameOp::StartsWith
          (FRigVMNameOp *__return_storage_ptr__,FName *param_1,FName *param_2,Type param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1->Number;
  __return_storage_ptr__->C = 0xffffffff;
  uVar1 = (param_1->ComparisonIndex).Value;
  uVar5 = param_2->Number;
  __return_storage_ptr__->Type = (param_3 != CaseSensitive) + StartsWithCase;
  uVar3 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (param_2->ComparisonIndex).Value;
  __return_storage_ptr__->A = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  uVar2 = uVar2 - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
  uVar1 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar5 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar1 ^ uVar2 << 10;
  __return_storage_ptr__->B = (uVar1 - uVar5) - uVar2 ^ uVar5 >> 0xf;
  return __return_storage_ptr__;
}

