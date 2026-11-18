// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 8

// GetTestFlags @ 1441c5e70

EAutomationTestFlags __thiscall FBinnedMovingValueTest::GetTestFlags(FBinnedMovingValueTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1441c5e80

bool __thiscall FBinnedMovingValueTest::IsStressTest(FBinnedMovingValueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1441c5e90

uint __thiscall FBinnedMovingValueTest::GetRequiredDeviceNum(FBinnedMovingValueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1441c5ea0

FString * __thiscall
FBinnedMovingValueTest::GetTestSourceFileName
          (FBinnedMovingValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Analytics\\NetStatsUtils.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1441c5ed0

int __thiscall FBinnedMovingValueTest::GetTestSourceFileLine(FBinnedMovingValueTest *this)

{
  return 0x8c;
}

// GetTests @ 1441c5ee0

/* WARNING: Removing unreachable block (ram,0x0001441c5fcd) */
/* WARNING: Removing unreachable block (ram,0x0001441c6098) */

void __thiscall
FBinnedMovingValueTest::GetTests
          (FBinnedMovingValueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Networking.BinnedMovingValue");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1441c60c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FBinnedMovingValueTest::RunTest(FBinnedMovingValueTest *this,FString *param_1)

{
  code *pcVar1;
  FBin *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  bool bVar16;
  undefined1 uVar17;
  FBin *pFVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  FBin FVar24;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  FBin local_1b8;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double dStack_180;
  int local_178;
  TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int> local_168;
  double local_158;
  double dStack_150;
  char local_148;
  undefined8 local_144;
  FBin *local_138;
  int local_130;
  double *local_128;
  FBin local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  ulonglong local_b8;
  undefined8 uVar26;
  
  dVar13 = __real_4029000000000000;
  dVar12 = __real_0010000000000000;
  dVar11 = __real_4076800000000000;
  dVar10 = __real_4008000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar2 = &local_120;
  dVar3 = 0.0;
  pFVar18 = (FBin *)0x0;
  uVar19 = 0xffffffff;
  local_198 = ___xmm_00100000000000007fefffffffffffff;
  uStack_190 = _UNK_150b6c608;
  local_128 = &local_198;
  local_188 = 0;
  dStack_180 = 0.0;
  local_1b8.Count = 6;
  local_1b8.Sum = (double)pFVar2;
  FVar24 = local_1b8;
  local_178 = 0;
  local_168.ArrayNum = local_1b8.Count;
  local_168._12_4_ = local_1b8._12_4_;
  uVar26 = local_168._8_8_;
  local_168.ArrayNum = 6;
  local_148 = '\x01';
  local_144 = 0xffffffffffffffff;
  local_130 = 0;
  local_120.Count = 0;
  local_120._12_4_ = 0;
  uStack_108 = 0;
  local_138 = (FBin *)0x0;
  local_120.Sum = 0.0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_158 = ___xmm_404e0000000000004024000000000000;
  dStack_150 = _UNK_150b6c618;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uVar20 = local_168.ArrayNum;
  dVar4 = __real_404e000000000000;
  dVar5 = 0.0;
  local_c0 = __real_0010000000000000;
  local_1b8 = FVar24;
  local_168.DataPtr = pFVar2;
  local_168._8_8_ = uVar26;
  do {
    dVar7 = dVar5;
    if (local_c0 != dVar12) {
      auVar27._0_8_ = dVar4 / dStack_150;
      auVar27._8_8_ = 0;
      bVar9 = false;
      dVar5 = dVar7 - local_c0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar27._0_8_;
      auVar28 = roundpd(auVar27,auVar28,1);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = (dVar4 - auVar28._0_8_ * dStack_150) / local_158;
      FVar24 = (FBin)roundpd(auVar23,auVar23,1);
      uVar22 = uVar20 - 1;
      if ((int)FVar24.Sum < (int)(uVar20 - 1)) {
        uVar22 = (int)FVar24.Sum;
      }
      if ((-1 < (int)uVar22) && ((int)uVar22 < (int)uVar20)) {
        if (uVar22 != uVar19) {
          if (uVar19 == 0xffffffff) {
            local_144 = CONCAT44(local_144._4_4_,uVar22);
          }
          else {
            uVar21 = uVar22;
            if (uVar22 == 0) {
              uVar21 = uVar20;
            }
            uVar21 = uVar21 - 1;
            if (uVar21 != uVar19) {
              do {
                uVar26 = FVar24._8_8_;
                if (uVar21 == (uint)local_144) {
                  pFVar2 = pFVar18;
                  if (local_148 != '\x01') {
                    uVar26 = 0;
                    pFVar2 = (FBin *)((double)pFVar18 / (double)local_130);
                  }
                  bVar9 = true;
                }
                uVar19 = 0;
                if ((int)uVar21 < (int)uVar20) {
                  uVar19 = ~uVar21 >> 0x1f;
                }
                if (uVar19 == 0) {
                  local_1c0 = (longlong)(int)uVar20;
                  local_1c8 = (longlong)(int)uVar21;
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  uVar26 = extraout_XMM0._8_8_;
                  pFVar18 = local_138;
                  if (bVar16) {
                    pcVar1 = (code *)swi(3);
                    uVar17 = (*pcVar1)();
                    return (bool)uVar17;
                  }
                }
                auVar6._4_8_ = uVar26;
                auVar6._0_4_ = local_1b8.Sum._4_4_;
                auVar25._0_8_ = auVar6._0_8_ << 0x20;
                auVar25._8_4_ = 0;
                auVar25._12_4_ = local_1b8._12_4_;
                pFVar18 = (FBin *)((double)pFVar18 - local_168.DataPtr[(int)uVar21].Sum);
                auVar8._8_8_ = 0;
                auVar8._0_8_ = auVar25._8_8_;
                FVar24 = (FBin)(auVar8 << 0x40);
                local_130 = local_130 - local_168.DataPtr[(int)uVar21].Count;
                local_168.DataPtr[(int)uVar21] = FVar24;
                if (uVar21 == 0) {
                  uVar21 = local_168.ArrayNum;
                }
                uVar21 = uVar21 - 1;
                uVar20 = local_168.ArrayNum;
                local_1b8 = FVar24;
                local_138 = pFVar18;
              } while (uVar21 != local_144._4_4_);
            }
            if (uVar22 == (uint)local_144) {
              pFVar2 = pFVar18;
              if (local_148 != '\x01') {
                pFVar2 = (FBin *)((double)pFVar18 / (double)local_130);
              }
              bVar9 = true;
            }
          }
          pFVar18 = TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int>::operator[]
                              (&local_168,uVar22);
          uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
          local_138 = (FBin *)((double)local_138 - pFVar18->Sum);
          local_130 = local_130 - pFVar18->Count;
          pFVar18->Sum = 0.0;
          *(ulonglong *)&pFVar18->Count = uStack_1a0;
          local_144 = CONCAT44(uVar22,(uint)local_144);
          local_1a8 = 0;
        }
        pFVar18 = TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int>::operator[]
                            (&local_168,uVar22);
        pdVar15 = local_128;
        pFVar18->Count = pFVar18->Count + 1;
        pFVar18->Sum = dVar5 + pFVar18->Sum;
        local_130 = local_130 + 1;
        local_138 = (FBin *)((double)local_138 + dVar5);
        if ((bVar9) && (local_128 != (double *)0x0)) {
          if ((double)pFVar2 < *local_128) {
            *local_128 = (double)pFVar2;
          }
          if (pdVar15[1] <= (double)pFVar2 && (double)pFVar2 != pdVar15[1]) {
            pdVar15[1] = (double)pFVar2;
          }
          *(int *)(pdVar15 + 4) = *(int *)(pdVar15 + 4) + 1;
          pdVar15[2] = (double)pFVar2;
          pdVar15[3] = (double)pFVar2 + pdVar15[3];
        }
        pFVar18 = local_138;
        uVar20 = local_168.ArrayNum;
        uVar19 = local_144._4_4_;
      }
    }
    dVar14 = __real_406a0aaaaaaaaaab;
    dVar4 = dVar4 + dVar10;
    dVar5 = dVar7 + dVar13;
    local_c0 = dVar7;
  } while (dVar4 <= dVar11);
  if (local_148 != '\x01') {
    pFVar18 = (FBin *)((double)pFVar18 / (double)local_130);
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Moving sum test of 250 delta per minute failed",
             __real_406a0aaaaaaaaaab < (double)pFVar18);
  if (local_178 != 0) {
    dVar3 = dStack_180 / (double)local_178;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"DeltaStats output from moving sum test of 250 delta per minute failed",dVar14 < dVar3
            );
  return true;
}

// GetBeautifiedTestName @ 1441c6550

FString * __thiscall
FBinnedMovingValueTest::GetBeautifiedTestName
          (FBinnedMovingValueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Networking.BinnedMovingValue");
  return __return_storage_ptr__;
}

