// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// TestEqualRange<1> @ 149f93a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<1>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  undefined1 uVar26;
  uint uVar27;
  UEnum *this_00;
  longlong lVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  undefined1 auStackY_308 [32];
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  TTransform<double> local_288;
  TTransform<double> local_228;
  longlong local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_1c8);
  (**(code **)(param_2->_padding_ + 0x500))(param_2,&local_148);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_2d8,1);
  iVar24 = local_138;
  iVar23 = local_1b8;
  ::FString::PrintfImpl(&local_2c8,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_2c8.Data.ArrayNum != 0) {
    FVar29.Data = local_2c8.Data.AllocatorInstance.Data;
  }
  bVar25 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,iVar23,iVar24);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar25) {
    uVar30 = 0;
    if (0 < local_1b8) {
      do {
        uVar27 = 0;
        if ((int)uVar30 < local_138) {
          uVar27 = ~uVar30 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar2 = (code *)swi(3);
          uVar26 = (*pcVar2)();
          return (bool)uVar26;
        }
        lVar28 = (longlong)((int)uVar30 % local_13c) * (longlong)local_140;
        pdVar1 = (double *)(lVar28 + 0x40 + local_148);
        local_2a8 = *pdVar1;
        dStack_2a0 = pdVar1[1];
        dVar3 = *(double *)(lVar28 + local_148);
        dVar4 = ((double *)(lVar28 + local_148))[1];
        pdVar1 = (double *)(lVar28 + 0x10 + local_148);
        dVar5 = *pdVar1;
        dVar6 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x20 + local_148);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x30 + local_148);
        dVar9 = *pdVar1;
        dVar10 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x50 + local_148);
        local_298 = *pdVar1;
        dStack_290 = pdVar1[1];
        uVar27 = 0;
        if ((int)uVar30 < local_1b8) {
          uVar27 = ~uVar30 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar2 = (code *)swi(3);
          uVar26 = (*pcVar2)();
          return (bool)uVar26;
        }
        lVar28 = (longlong)((int)uVar30 % local_1bc) * (longlong)local_1c0;
        dVar11 = *(double *)(lVar28 + local_1c8);
        dVar12 = ((double *)(lVar28 + local_1c8))[1];
        pdVar1 = (double *)(lVar28 + 0x10 + local_1c8);
        dVar13 = *pdVar1;
        dVar14 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x20 + local_1c8);
        dVar15 = *pdVar1;
        dVar16 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x30 + local_1c8);
        dVar17 = *pdVar1;
        dVar18 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x40 + local_1c8);
        dVar19 = *pdVar1;
        dVar20 = pdVar1[1];
        pdVar1 = (double *)(lVar28 + 0x50 + local_1c8);
        dVar21 = *pdVar1;
        dVar22 = pdVar1[1];
        ::FString::PrintfImpl(&local_2b8,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_2b8.Data.ArrayNum != 0) {
          FVar29.Data = local_2b8.Data.AllocatorInstance.Data;
        }
        local_288.Scale3D.XY.m128d_f64[0] = local_2a8;
        local_288.Scale3D.XY.m128d_f64[1] = dStack_2a0;
        local_288.Scale3D.ZW.m128d_f64[0] = local_298;
        local_288.Scale3D.ZW.m128d_f64[1] = dStack_290;
        local_288.Rotation.XY.m128d_f64[0] = dVar3;
        local_288.Rotation.XY.m128d_f64[1] = dVar4;
        local_288.Rotation.ZW.m128d_f64[0] = dVar5;
        local_288.Rotation.ZW.m128d_f64[1] = dVar6;
        local_288.Translation.XY.m128d_f64[0] = dVar7;
        local_288.Translation.XY.m128d_f64[1] = dVar8;
        local_288.Translation.ZW.m128d_f64[0] = dVar9;
        local_288.Translation.ZW.m128d_f64[1] = dVar10;
        local_228.Rotation.XY.m128d_f64[0] = dVar11;
        local_228.Rotation.XY.m128d_f64[1] = dVar12;
        local_228.Rotation.ZW.m128d_f64[0] = dVar13;
        local_228.Rotation.ZW.m128d_f64[1] = dVar14;
        local_228.Translation.XY.m128d_f64[0] = dVar15;
        local_228.Translation.XY.m128d_f64[1] = dVar16;
        local_228.Translation.ZW.m128d_f64[0] = dVar17;
        local_228.Translation.ZW.m128d_f64[1] = dVar18;
        local_228.Scale3D.XY.m128d_f64[0] = dVar19;
        local_228.Scale3D.XY.m128d_f64[1] = dVar20;
        local_228.Scale3D.ZW.m128d_f64[0] = dVar21;
        local_228.Scale3D.ZW.m128d_f64[1] = dVar22;
        bVar25 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,&local_228,&local_288
                            ,__real_38d1b717);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (!bVar25) goto LAB_149f93d4a;
        uVar30 = uVar30 + 1;
      } while ((int)uVar30 < local_1b8);
    }
    bVar25 = true;
  }
  else {
LAB_149f93d4a:
    bVar25 = false;
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  return bVar25;
}

// TestEqualRange<2> @ 149f93df0

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<2>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UEnum *this_00;
  ForAnyElementType FVar10;
  uint uVar11;
  FString local_98;
  FString local_88;
  FString local_78;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  
  (**(code **)(param_1->_padding_ + 0x508))(param_1,&local_68);
  (**(code **)(param_2->_padding_ + 0x508))(param_2,&local_50);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_98,2);
  iVar6 = local_40;
  iVar5 = local_58;
  ::FString::PrintfImpl(&local_88,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar10.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar5,iVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  fVar4 = __real_38d1b717;
  if (bVar7) {
    uVar11 = 0;
    if (0 < local_58) {
      do {
        uVar9 = 0;
        if ((int)uVar11 < local_40) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        fVar1 = *(float *)((longlong)((int)uVar11 % local_44) * (longlong)local_48 + local_50);
        uVar9 = 0;
        if ((int)uVar11 < local_58) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        fVar2 = *(float *)((longlong)((int)uVar11 % local_5c) * (longlong)local_60 + local_68);
        ::FString::PrintfImpl(&local_78,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar10.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,fVar2,fVar1,fVar4);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (!bVar7) goto LAB_149f9401b;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < local_58);
    }
    bVar7 = true;
  }
  else {
LAB_149f9401b:
    bVar7 = false;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// TestEqualRange<4> @ 149f94070

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<4>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  UEnum *this_00;
  longlong lVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  FString local_128;
  FString local_118;
  FString local_108;
  longlong local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  
  (**(code **)(param_1->_padding_ + 0x510))(param_1,&local_f8);
  (**(code **)(param_2->_padding_ + 0x510))(param_2,&local_88);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_128,4);
  iVar11 = local_78;
  iVar10 = local_e8;
  ::FString::PrintfImpl(&local_118,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar16.Data = local_118.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar10,iVar11);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  fVar9 = __real_38d1b717;
  if (bVar12) {
    uVar17 = 0;
    if (0 < local_e8) {
      do {
        uVar14 = 0;
        if ((int)uVar17 < local_78) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        lVar15 = (longlong)((int)uVar17 % local_7c) * (longlong)local_80;
        pdVar1 = (double *)(lVar15 + local_88);
        dVar5 = *pdVar1;
        dVar6 = pdVar1[1];
        dVar2 = *(double *)(lVar15 + 0x10 + local_88);
        uVar14 = 0;
        if ((int)uVar17 < local_e8) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        lVar15 = (longlong)((int)uVar17 % local_ec) * (longlong)local_f0;
        pdVar1 = (double *)(lVar15 + local_f8);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        dVar3 = *(double *)(lVar15 + 0x10 + local_f8);
        ::FString::PrintfImpl(&local_108,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar16.Data = local_108.Data.AllocatorInstance.Data;
        }
        local_c8._s_0.X = dVar5;
        local_c8._s_0.Y = dVar6;
        local_c8._s_0.Z = dVar2;
        local_a8._s_0.X = dVar7;
        local_a8._s_0.Y = dVar8;
        local_a8._s_0.Z = dVar3;
        bVar12 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                            (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0,
                            fVar9);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_149f942e8;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < local_e8);
    }
    bVar12 = true;
  }
  else {
LAB_149f942e8:
    bVar12 = false;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// TestEqualRange<8> @ 149f94350

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<8>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  UEnum *this_00;
  longlong lVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  FString local_128;
  FString local_118;
  FString local_108;
  longlong local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  
  (**(code **)(param_1->_padding_ + 0x518))(param_1,&local_f8);
  (**(code **)(param_2->_padding_ + 0x518))(param_2,&local_88);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_128,8);
  iVar11 = local_78;
  iVar10 = local_e8;
  ::FString::PrintfImpl(&local_118,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar16.Data = local_118.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar10,iVar11);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  fVar9 = __real_38d1b717;
  if (bVar12) {
    uVar17 = 0;
    if (0 < local_e8) {
      do {
        uVar14 = 0;
        if ((int)uVar17 < local_78) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        lVar15 = (longlong)((int)uVar17 % local_7c) * (longlong)local_80;
        pdVar1 = (double *)(lVar15 + local_88);
        dVar5 = *pdVar1;
        dVar6 = pdVar1[1];
        dVar2 = *(double *)(lVar15 + 0x10 + local_88);
        uVar14 = 0;
        if ((int)uVar17 < local_e8) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        lVar15 = (longlong)((int)uVar17 % local_ec) * (longlong)local_f0;
        pdVar1 = (double *)(lVar15 + local_f8);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        dVar3 = *(double *)(lVar15 + 0x10 + local_f8);
        ::FString::PrintfImpl(&local_108,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar16.Data = local_108.Data.AllocatorInstance.Data;
        }
        local_c8._s_0.X = dVar5;
        local_c8._s_0.Y = dVar6;
        local_c8._s_0.Z = dVar2;
        local_a8._s_0.X = dVar7;
        local_a8._s_0.Y = dVar8;
        local_a8._s_0.Z = dVar3;
        bVar12 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                            (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0,
                            fVar9);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_149f945c8;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < local_e8);
    }
    bVar12 = true;
  }
  else {
LAB_149f945c8:
    bVar12 = false;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// TestEqualRange<16> @ 149f94630

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<16>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UEnum *this_00;
  ForAnyElementType FVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  (**(code **)(param_1->_padding_ + 0x520))(param_1,&local_88);
  (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_48);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_c8,0x10);
  iVar3 = local_38;
  iVar2 = local_78;
  ::FString::PrintfImpl(&local_b8,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar7.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar2,iVar3);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    uVar10 = 0;
    if (0 < local_78) {
      do {
        uVar6 = 0;
        if ((int)uVar10 < local_38) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        pdVar8 = (double *)((longlong)((int)uVar10 % local_3c) * (longlong)local_40 + local_48);
        uVar6 = 0;
        if ((int)uVar10 < local_78) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        pdVar9 = (double *)((longlong)((int)uVar10 % local_7c) * (longlong)local_80 + local_88);
        ::FString::PrintfImpl(&local_a8,L"Property % s : RangeA[%d] == RangeB[%d]");
        if ((((*pdVar8 == *pdVar9) && (pdVar8[1] == pdVar9[1])) && (pdVar8[2] == pdVar9[2])) &&
           (pdVar8[3] == pdVar9[3])) {
          bVar4 = false;
        }
        else {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_98,L"%s: The two values are not equal.");
          (*pcVar1)(this,&local_98,0);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar4) goto LAB_149f9487e;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < local_78);
    }
    bVar4 = true;
  }
  else {
LAB_149f9487e:
    bVar4 = false;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// TestEqualRange<32> @ 149f948c0

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<32>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UEnum *this_00;
  ForAnyElementType FVar10;
  uint uVar11;
  FString local_98;
  FString local_88;
  FString local_78;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  
  (**(code **)(param_1->_padding_ + 0x528))(param_1,&local_68);
  (**(code **)(param_2->_padding_ + 0x528))(param_2,&local_50);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_98,0x20);
  iVar6 = local_40;
  iVar5 = local_58;
  ::FString::PrintfImpl(&local_88,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar10.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar5,iVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  fVar4 = __real_38d1b717;
  if (bVar7) {
    uVar11 = 0;
    if (0 < local_58) {
      do {
        uVar9 = 0;
        if ((int)uVar11 < local_40) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        fVar1 = *(float *)((longlong)((int)uVar11 % local_44) * (longlong)local_48 + local_50);
        uVar9 = 0;
        if ((int)uVar11 < local_58) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        fVar2 = *(float *)((longlong)((int)uVar11 % local_5c) * (longlong)local_60 + local_68);
        ::FString::PrintfImpl(&local_78,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar10.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,fVar2,fVar1,fVar4);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (!bVar7) goto LAB_149f94aeb;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < local_58);
    }
    bVar7 = true;
  }
  else {
LAB_149f94aeb:
    bVar7 = false;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// TestEqualRange<64> @ 149f94b40

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<64>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UEnum *this_00;
  ForAnyElementType FVar7;
  uint uVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  longlong local_20;
  int local_18;
  int local_14;
  int local_10;
  
  (**(code **)(param_1->_padding_ + 0x530))(param_1,&local_38);
  (**(code **)(param_2->_padding_ + 0x530))(param_2,&local_20);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_68,0x40);
  iVar2 = local_10;
  iVar1 = local_28;
  ::FString::PrintfImpl(&local_58,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar1,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    uVar8 = 0;
    if (0 < local_28) {
      do {
        uVar6 = 0;
        if ((int)uVar8 < local_10) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar1 = *(int *)((longlong)((int)uVar8 % local_14) * (longlong)local_18 + local_20);
        uVar6 = 0;
        if ((int)uVar8 < local_28) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar2 = *(int *)((longlong)((int)uVar8 % local_2c) * (longlong)local_30 + local_38);
        ::FString::PrintfImpl(&local_48,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar7.Data = local_48.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar2,iVar1);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar4) goto LAB_149f94d40;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < local_28);
    }
    bVar4 = true;
  }
  else {
LAB_149f94d40:
    bVar4 = false;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// TestEqualRange<128> @ 149f94d90

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualRange<128>
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UEnum *this_00;
  ForAnyElementType FVar7;
  uint uVar8;
  long64 *plVar9;
  long64 *plVar10;
  FString local_78;
  FString local_68;
  FString local_58;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  longlong local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  (**(code **)(param_1->_padding_ + 0x538))(param_1,&local_48);
  (**(code **)(param_2->_padding_ + 0x538))(param_2,&local_28);
  this_00 = StaticEnum<enum_EPCGPointNativeProperties>();
  UEnum::GetNameStringByValue(this_00,&local_78,0x80);
  iVar3 = local_18;
  iVar2 = local_38;
  ::FString::PrintfImpl(&local_68,L"Property %s : RangeA.Num() == RangeB.Num()");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,iVar2,iVar3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    uVar8 = 0;
    if (0 < local_38) {
      do {
        uVar6 = 0;
        if ((int)uVar8 < local_18) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        plVar9 = (long64 *)((longlong)((int)uVar8 % local_1c) * (longlong)local_20 + local_28);
        uVar6 = 0;
        if ((int)uVar8 < local_38) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        plVar10 = (long64 *)((longlong)((int)uVar8 % local_3c) * (longlong)local_40 + local_48);
        ::FString::PrintfImpl(&local_58,L"Property % s : RangeA[%d] == RangeB[%d]");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar7.Data = local_58.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,*plVar10,*plVar9);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (!bVar4) goto LAB_149f94f88;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < local_38);
    }
    bVar4 = true;
  }
  else {
LAB_149f94f88:
    bVar4 = false;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// TestEqualData @ 149fa1500

bool __thiscall
FPCGPointArrayDataTestBaseClass::TestEqualData
          (FPCGPointArrayDataTestBaseClass *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  bool bVar1;
  
  bVar1 = TestEqualRange<1>(this,param_1,param_2);
  if (bVar1) {
    bVar1 = TestEqualRange<2>(this,param_1,param_2);
    if (bVar1) {
      bVar1 = TestEqualRange<4>(this,param_1,param_2);
      if (bVar1) {
        bVar1 = TestEqualRange<8>(this,param_1,param_2);
        if (bVar1) {
          bVar1 = TestEqualRange<16>(this,param_1,param_2);
          if (bVar1) {
            bVar1 = TestEqualRange<32>(this,param_1,param_2);
            if (bVar1) {
              bVar1 = TestEqualRange<64>(this,param_1,param_2);
              if (bVar1) {
                bVar1 = TestEqualRange<128>(this,param_1,param_2);
                return bVar1;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

