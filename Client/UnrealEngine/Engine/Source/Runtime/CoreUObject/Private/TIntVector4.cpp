// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// SerializeFromMismatchedTag @ 14214d110

bool __thiscall
UE::Math::TIntVector4<int>::SerializeFromMismatchedTag
          (TIntVector4<int> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  undefined1 uVar8;
  FNameEntryId FVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_50 [8];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  TIntVector4<__int64>_u_0 local_28;
  
  FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar9.Value);
  FVar9 = FNameEntryId::FromValidEName((EName)local_res20);
  uVar2 = *(uint *)CONCAT44(extraout_var_00,FVar9.Value);
  FVar9 = FNameEntryId::FromValidEName((EName)local_50);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = uVar2;
  if ((param_1 == FVar4) ||
     (FVar5.Number = 0, FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar9.Value)
     , param_1 == FVar5)) {
    Math::operator<<(param_2,this);
  }
  else {
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = uVar1;
    if (param_1 != FVar6) {
      return false;
    }
    Math::operator<<(param_2,(TIntVector4<__int64> *)&local_28._s_0);
    local_38 = local_28._s_0.X;
    lStack_30 = local_28._s_0.Y;
    local_48 = local_28._s_0.Z;
    lStack_40 = local_28._s_0.W;
    if ((local_28._s_0.X != (int)local_28._s_0.X) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    iVar10 = (int)lStack_30;
    if ((lStack_30 != iVar10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    iVar11 = (int)local_48;
    if ((local_48 != iVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    iVar12 = (int)lStack_40;
    if ((lStack_40 != iVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    *(ulonglong *)&this->field0_0x0 = CONCAT44(iVar10,(int)local_28._s_0.X);
    *(ulonglong *)((longlong)&this->field0_0x0 + 8) = CONCAT44(iVar12,iVar11);
  }
  return true;
}

// SerializeFromMismatchedTag @ 14214d320

bool __thiscall
UE::Math::TIntVector4<unsigned_int>::SerializeFromMismatchedTag
          (TIntVector4<unsigned_int> *this,FName param_1,FArchive *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  FNameEntryId FVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  TIntVector4<unsigned___int64>_u_0 local_28;
  
  FVar10 = FNameEntryId::FromValidEName((EName)local_res10);
  uVar1 = *(uint *)CONCAT44(extraout_var,FVar10.Value);
  FVar10 = FNameEntryId::FromValidEName((EName)local_res20);
  uVar2 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
  FVar10 = FNameEntryId::FromValidEName((EName)local_50);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = uVar2;
  if ((param_1 == FVar5) ||
     (FVar6.Number = 0,
     FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar10.Value), param_1 == FVar6
     )) {
    Math::operator<<(param_2,this);
  }
  else {
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = uVar1;
    if (param_1 != FVar7) {
      return false;
    }
    Math::operator<<(param_2,(TIntVector4<unsigned___int64> *)&local_28._s_0);
    local_38 = local_28._s_0.X;
    uStack_30 = local_28._s_0.Y;
    local_48 = local_28._s_0.Z;
    uStack_40 = local_28._s_0.W;
    if ((local_28._s_0.X != (local_28._s_0.X & 0xffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar8))
    {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    uVar11 = (undefined4)uStack_30;
    if ((uStack_30 != (uStack_30 & 0xffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar8))
    {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    uVar4 = (undefined4)local_48;
    if ((local_48 != (local_48 & 0xffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar8))
    {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    uVar12 = (undefined4)uStack_40;
    if ((uStack_40 != (uStack_40 & 0xffffffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar8))
    {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    *(ulonglong *)&this->field0_0x0 = CONCAT44(uVar11,(int)local_28._s_0.X);
    *(ulonglong *)((longlong)&this->field0_0x0 + 8) = CONCAT44(uVar12,uVar4);
  }
  return true;
}

