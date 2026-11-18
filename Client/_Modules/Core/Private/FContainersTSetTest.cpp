// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1414cfb30

EAutomationTestFlags __thiscall FContainersTSetTest::GetTestFlags(FContainersTSetTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414cfb40

bool __thiscall FContainersTSetTest::IsStressTest(FContainersTSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414cfb50

uint __thiscall FContainersTSetTest::GetRequiredDeviceNum(FContainersTSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414cfb60

FString * __thiscall
FContainersTSetTest::GetTestSourceFileName
          (FContainersTSetTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x5b,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x5b,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x5b,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
             ,0x5b);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414cfc00

int __thiscall FContainersTSetTest::GetTestSourceFileLine(FContainersTSetTest *this)

{
  return 0x4d2;
}

// GetTests @ 1414cfc50

/* WARNING: Removing unreachable block (ram,0x0001414cfd99) */
/* WARNING: Removing unreachable block (ram,0x0001414cfe64) */

void __thiscall
FContainersTSetTest::GetTests
          (FContainersTSetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x1c,"System.Core.Containers.TSet",0x1c);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414cfe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FContainersTSetTest::RunTest(FContainersTSetTest *this,FString *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  ulonglong uVar11;
  FRecorder *pFVar12;
  int *piVar13;
  byte bVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  ForElementType<unsigned_int> FVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  TSparseSetElement<_anonymous_namespace_::FRecorder> *pTVar24;
  int *piVar25;
  uint uVar26;
  ulonglong uVar27;
  wchar_t *pwVar28;
  FRecorder *pFVar29;
  uint uVar30;
  bool bVar31;
  undefined1 auStackY_428 [32];
  bool local_3f8;
  bool local_3f7 [7];
  ForAnyElementType local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [16];
  int local_3d0;
  int local_3cc;
  ForAnyElementType *local_3c8;
  int local_3c0 [2];
  int local_3b8 [2];
  int local_3b0 [2];
  FString local_3a8;
  uint local_398 [6];
  int local_380;
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_378;
  undefined4 local_370;
  undefined8 uStack_36c;
  undefined4 uStack_364;
  uint local_360 [6];
  FRecorder local_348;
  FRecorder local_330;
  FString local_318;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_300;
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [4];
  undefined1 local_2d4 [4];
  FRecorder local_2d0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  FString local_2a8;
  FSparseArrayAllocationInfo local_298;
  FSparseArrayAllocationInfo local_288;
  FSparseArrayAllocationInfo local_278;
  FSparseArrayAllocationInfo local_268;
  FSparseArrayAllocationInfo local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  undefined1 local_178 [32];
  ForElementType<unsigned_int> local_158;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined1 local_140 [8];
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  int local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  undefined1 local_d8 [32];
  int *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3b0[1] = 1;
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3b0;
  local_3b0[0] = 0;
  do {
    iVar3 = *(int *)local_3a8.Data.AllocatorInstance.Data;
    piVar25 = local_3b8;
    local_3b8[0] = 0;
    local_3b8[1] = 1;
    do {
      pFVar16 = (FScriptContainerElement *)0x0;
      iVar9 = *piVar25;
      local_3c8 = &local_3f0;
      local_3f0.Data = (FScriptContainerElement *)0x0;
      uVar30 = 0;
      local_3e8 = 0;
      local_3e0._8_8_ = piVar25;
      local_3d0 = iVar3;
      local_3cc = iVar9;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,4,&local_3f0,0,(int *)((longlong)&local_3e8 + 4));
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,4,&local_3f0,(int *)&local_3e8,(int *)((longlong)&local_3e8 + 4));
      local_128._0_8_ = (FScriptContainerElement *)0x0;
      local_128._8_8_ = 0;
      *(wchar_t (*) [4])local_3f0.Data = u_Add;
      uVar22 = FRecorder::NextId;
      local_398[0] = FRecorder::NextId;
      FRecorder::NextId = FRecorder::NextId + 1;
      local_108 = (ForElementType<unsigned_int>)0x0;
      local_100 = 0;
      local_fc = 0x80;
      local_f8 = -1;
      local_f4 = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      local_398[1] = 0x25;
      local_398[2] = 0x2b;
      local_398[3] = 0;
      local_398[4] = 0;
      local_3f7[0] = true;
      if (iVar3 == 0) {
        if (iVar9 == 0) {
          TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
          ::Emplace<_anonymous_namespace_::FRecorder_const_&>
                    ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                      *)local_128,(FRecorder *)local_2e0,(bool *)local_398);
        }
        else {
          TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
          ::Emplace<_anonymous_namespace_::FRecorder>
                    ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                      *)local_128,(FRecorder *)(local_2e0 + 4),(bool *)local_398);
        }
      }
      else if (iVar9 == 0) {
        TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
        ::EmplaceByHash<_anonymous_namespace_::FRecorder_const_&>
                  ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                    *)local_128,(uint)local_2d8,(FRecorder *)0x2b,(bool *)local_398);
      }
      else {
        TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
        ::EmplaceByHash<_anonymous_namespace_::FRecorder>
                  ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                    *)local_128,(uint)local_2d4,(FRecorder *)0x2b,(bool *)local_398);
      }
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_208,L"returns bAlreadyInSet==false for first add");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar28,local_3f7[0]);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_128._8_4_ != local_f4) {
        FVar17.Data = (FScriptContainerElement *)local_f0;
        if ((ForElementType<FSetElementId>)local_e8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar17.Data = local_e8.Data;
        }
        for (iVar8 = *(int *)((longlong)FVar17.Data + (ulonglong)(local_e0 - 1 & 0x2b) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_128._0_8_ + (longlong)iVar8 * 0x1c + 0x14)) {
          if (*(int *)(local_128._0_8_ + (longlong)iVar8 * 0x1c + 4) == 0x25) {
            if (iVar8 != -1) {
              pFVar16 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)iVar8 * 0x1c);
            }
            break;
          }
        }
      }
      if (iVar9 == 0) {
        if (((pFVar16 == (FScriptContainerElement *)0x0) || (*(uint *)pFVar16 <= uVar22)) ||
           ((*(uint *)(pFVar16 + 0xc) == 0 || (*(uint *)(pFVar16 + 8) != 0x2b)))) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
        pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                            (&local_3d0,&local_1d8,L"constructs a copy");
        if ((pFVar10->Data).ArrayNum == 0) {
          FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"",bVar31);
          FVar17.Data = local_1d8.Data.AllocatorInstance.Data;
        }
        else {
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                     bVar31);
          FVar17.Data = local_1d8.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((((pFVar16 == (FScriptContainerElement *)0x0) || (*(uint *)pFVar16 <= uVar22)) ||
            (*(uint *)(pFVar16 + 0xc) != 0)) ||
           ((*(uint *)(pFVar16 + 0x10) == 0 || (*(uint *)(pFVar16 + 8) != 0x2b)))) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
        pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                            (&local_3d0,&local_1c8,L"constructs a move");
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,bVar31);
        FVar17.Data = local_1c8.Data.AllocatorInstance.Data;
      }
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        uVar30 = *(uint *)pFVar16;
      }
      if (local_128._8_4_ != local_f4) {
        FVar17.Data = (FScriptContainerElement *)local_f0;
        if ((ForElementType<FSetElementId>)local_e8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar17.Data = local_e8.Data;
        }
        for (iVar8 = *(int *)((longlong)FVar17.Data + (ulonglong)(local_e0 - 1 & 0x2b) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_128._0_8_ + (longlong)iVar8 * 0x1c + 0x14)) {
          if (*(int *)(local_128._0_8_ + (longlong)iVar8 * 0x1c + 4) == 0x25) {
            if (((iVar8 != -1) &&
                ((FScriptContainerElement *)(local_128._0_8_ + (longlong)iVar8 * 0x1c) !=
                 (FScriptContainerElement *)0x0)) &&
               (*(uint *)(local_128._0_8_ + (longlong)iVar8 * 0x1c) == uVar30)) {
              bVar31 = true;
              goto LAB_1414d026c;
            }
            break;
          }
        }
      }
      bVar31 = false;
LAB_1414d026c:
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"Finding an element returns a reference, no copies",
                 bVar31);
      uVar30 = FRecorder::NextId;
      pTVar24 = (TSparseSetElement<_anonymous_namespace_::FRecorder> *)0x0;
      local_360[0] = FRecorder::NextId;
      FRecorder::NextId = FRecorder::NextId + 1;
      local_360[1] = 0x25;
      local_360[2] = 0x38;
      local_360[3] = 0;
      local_360[4] = 0;
      if (iVar3 == 0) {
        if (iVar9 == 0) {
          TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
          ::Emplace<_anonymous_namespace_::FRecorder_const_&>
                    ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                      *)local_128,&local_2d0,(bool *)local_360);
        }
        else {
          if (local_f4 == 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1c,4,1,(ForAnyElementType *)local_128,(int *)(local_128 + 8),
                               (int *)(local_128 + 0xc));
            iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),1);
            FVar20 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
            if (local_108 != (ForElementType<unsigned_int>)0x0) {
              FVar20 = local_108;
            }
            bVar14 = (byte)iVar7 & 0x1f;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x1f;
              bVar14 = bVar14 - 0x20;
            }
            puVar1 = (uint *)((longlong)FVar20 + (longlong)(iVar7 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar14 & 0x1f));
            iVar7 = local_f8;
          }
          else {
            local_f4 = local_f4 + -1;
            iVar7 = *(int *)(local_128._0_8_ + (longlong)local_f8 * 0x1c + 4);
            iVar8 = local_f8;
            if (local_f4 != 0) {
              *(undefined4 *)(local_128._0_8_ + (longlong)iVar7 * 0x1c) = 0xffffffff;
            }
          }
          local_f8 = iVar7;
          TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_128,&local_298,iVar8);
          if (local_298.Pointer != (TSparseSetElement<_anonymous_namespace_::FRecorder> *)0x0) {
            *(uint *)local_298.Pointer = FRecorder::NextId;
            *(undefined4 *)((longlong)local_298.Pointer + 4) = 0x25;
            *(undefined8 *)((longlong)local_298.Pointer + 8) = 0x38;
            FRecorder::NextId = FRecorder::NextId + 1;
            *(undefined4 *)((longlong)local_298.Pointer + 0x10) = 1;
            *(undefined4 *)((longlong)local_298.Pointer + 0x14) = 0xffffffff;
            pTVar24 = local_298.Pointer;
          }
          uVar22 = *(uint *)&pTVar24->field_0x8;
          local_3c0[0] = local_298.Index;
          bVar31 = TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
                   ::TryReplaceExisting
                             ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                               *)local_128,uVar22,pTVar24,local_3c0,local_3f7);
          piVar25 = (int *)local_3e0._8_8_;
          if (!bVar31) {
            uVar26 = 1;
            uVar23 = local_128._8_4_ - local_f4;
            if (3 < uVar23) {
              uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_2d0.Key = (uint)lVar21;
              uVar26 = 1 << ((byte)lVar21 & 0x1f);
            }
            if (((int)uVar23 < 1) || ((int)uVar26 <= (int)local_e0)) {
              uVar22 = local_e0 - 1 & uVar22;
              *(uint *)&pTVar24->field_0x18 = uVar22;
              FVar17.Data = (FScriptContainerElement *)local_f0;
              if ((ForElementType<FSetElementId>)local_e8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar17.Data = local_e8.Data;
              }
              lVar21 = (longlong)(int)(local_e0 - 1 & uVar22);
              *(undefined4 *)&pTVar24->field_0x14 =
                   *(undefined4 *)((longlong)FVar17.Data + lVar21 * 4);
              *(int *)((longlong)FVar17.Data + lVar21 * 4) = local_3c0[0];
            }
            else {
              local_e0 = uVar26;
              if ((ForElementType<FSetElementId>)local_e8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_e8,0,0,4);
              }
              if (uVar26 != 0) {
                uVar22 = uVar26;
                if (uVar26 < 2) {
                  if ((ForElementType<FSetElementId>)local_e8.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    uVar22 = 0;
                    goto LAB_1414d04c3;
                  }
                }
                else {
LAB_1414d04c3:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_e8,0,uVar22,4);
                }
                if (0 < (int)uVar26) {
                  uVar18 = 0;
                  uVar27 = (ulonglong)uVar26;
                  do {
                    FVar17.Data = (FScriptContainerElement *)local_f0;
                    if ((ForElementType<FSetElementId>)local_e8.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar17.Data = local_e8.Data;
                    }
                    uVar11 = (longlong)(int)uVar26 - 1U & uVar18;
                    uVar18 = uVar18 + 1;
                    *(undefined4 *)((longlong)FVar17.Data + uVar11 * 4) = 0xffffffff;
                    uVar27 = uVar27 - 1;
                  } while (uVar27 != 0);
                }
              }
              piVar25 = (int *)local_3e0._8_8_;
              if (local_e0 != 0) {
                uStack_37c = 1;
                uVar22 = 0;
                local_380 = 0;
                pTStack_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
                local_370 = 0xffffffff;
                uStack_36c = 0;
                if (local_100 != 0) {
                  FVar20 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
                  if (local_108 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = local_108;
                  }
                  uVar23 = *(uint *)FVar20;
                  local_380 = 0;
                  while (uVar23 == 0) {
                    uVar22 = uVar22 + 0x20;
                    lVar21 = (longlong)local_380;
                    local_380 = local_380 + 1;
                    uStack_36c = (ulonglong)uVar22 << 0x20;
                    if ((int)(local_100 + -1 + (local_100 + -1 >> 0x1f & 0x1fU)) >> 5 < local_380) {
                      uStack_36c = CONCAT44(uVar22,local_100);
                      goto LAB_1414d05e1;
                    }
                    uVar23 = ((uint *)((longlong)FVar20 + 4))[lVar21];
                    local_370 = 0xffffffff;
                  }
                  uStack_37c = ~(uVar23 - 1) & uVar23;
                  uVar18 = (ulonglong)uStack_37c * 2 + 1;
                  lVar21 = 0x3f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                    }
                  }
                  local_2d0.Payload = (uint)lVar21;
                  iVar8 = ((uint)lVar21 - 1) + uVar22;
                  if (local_100 < iVar8) {
                    iVar8 = local_100;
                  }
                  uStack_36c._4_4_ = (int)((ulonglong)uStack_36c >> 0x20);
                  uStack_36c = CONCAT44(uStack_36c._4_4_,iVar8);
                }
LAB_1414d05e1:
                local_370 = 0xffffffff;
                local_308 = (longlong *)local_128;
                local_300._padding_ = CONCAT44(uStack_37c,local_380);
                local_300.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
                local_300.UnvisitedBitMask = 0xffffffff;
                local_300.CurrentBitIndex = (int)uStack_36c;
                local_300.BaseBitIndex = uStack_36c._4_4_;
                local_300._28_4_ = uStack_364;
                if ((int)uStack_36c < local_100) {
                  do {
                    lVar21 = (longlong)local_300.CurrentBitIndex * 0x1c + *local_308;
                    uVar22 = local_e0 - 1 & *(uint *)(lVar21 + 8);
                    *(uint *)(lVar21 + 0x18) = uVar22;
                    FVar17.Data = (FScriptContainerElement *)local_f0;
                    if ((ForElementType<FSetElementId>)local_e8.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar17.Data = local_e8.Data;
                    }
                    lVar15 = (longlong)(int)(local_e0 - 1 & uVar22);
                    *(undefined4 *)(lVar21 + 0x14) =
                         *(undefined4 *)((longlong)FVar17.Data + lVar15 * 4);
                    *(int *)((longlong)FVar17.Data + lVar15 * 4) = local_300.CurrentBitIndex;
                    local_300.UnvisitedBitMask =
                         local_300.UnvisitedBitMask & ~local_300._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_300);
                    piVar25 = (int *)local_3e0._8_8_;
                  } while (local_300.CurrentBitIndex < (local_300.Array)->NumBits);
                }
              }
            }
          }
        }
      }
      else if (iVar9 == 0) {
        TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
        ::EmplaceByHash<_anonymous_namespace_::FRecorder_const_&>
                  ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                    *)local_128,(int)&local_2d0 + 0xc,(FRecorder *)&DAT_00000038,(bool *)local_360);
      }
      else {
        TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
        ::EmplaceByHash<_anonymous_namespace_::FRecorder>
                  ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                    *)local_128,(int)&local_2d0 + 0x10,(FRecorder *)&DAT_00000038,(bool *)local_360)
        ;
      }
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_1b8,L"returns bAlreadyInSet==true for second add");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,local_3f7[0]);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_128._8_4_ != local_f4) {
        FVar17.Data = (FScriptContainerElement *)local_f0;
        if ((ForElementType<FSetElementId>)local_e8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar17.Data = local_e8.Data;
        }
        for (iVar8 = *(int *)((longlong)FVar17.Data + (ulonglong)(local_e0 - 1 & 0x2b) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_128._0_8_ + (longlong)iVar8 * 0x1c + 0x14)) {
          if (*(int *)(local_128._0_8_ + (longlong)iVar8 * 0x1c + 4) == 0x25) {
            if (((iVar8 != -1) &&
                (pFVar16 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)iVar8 * 0x1c),
                pFVar16 != (FScriptContainerElement *)0x0)) &&
               ((uVar30 < *(uint *)pFVar16 && (*(uint *)(pFVar16 + 8) == 0x38)))) {
              bVar31 = true;
              goto LAB_1414d07ab;
            }
            break;
          }
        }
      }
      bVar31 = false;
LAB_1414d07ab:
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_198,
                           L"with a duplicate key constructs a copy of the new key");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,bVar31);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      uVar30 = 0;
      pFVar29 = (FRecorder *)0x0;
      local_e0 = 0;
      if ((ForElementType<FSetElementId>)local_e8.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_e8.Data);
      }
      iVar8 = SUB84(local_128._8_8_,4);
      local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
      if (iVar8 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
      }
      local_f8 = -1;
      local_f4 = 0;
      local_100 = 0;
      if (0x80 < local_fc) {
        local_fc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
      }
      if (local_108 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108);
      }
      if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._0_8_);
      }
      if (local_3f0.Data != (FScriptContainerElement *)L"FindOrAdd") {
        bVar31 = local_3e8._4_4_ != 10;
        local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
        if (bVar31) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,10,&local_3f0,0,(int *)((longlong)&local_3e8 + 4));
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,10,&local_3f0,(int *)&local_3e8,(int *)((longlong)&local_3e8 + 4));
        uVar5 = u_FindOrAdd._8_8_;
        *(undefined8 *)local_3f0.Data = u_FindOrAdd._0_8_;
        *(undefined8 *)(local_3f0.Data + 8) = uVar5;
        *(undefined4 *)(local_3f0.Data + 0x10) = u_FindOrAdd._16_4_;
      }
      uVar22 = FRecorder::NextId;
      local_330.Id = FRecorder::NextId;
      FRecorder::NextId = FRecorder::NextId + 1;
      local_178._0_8_ = (FScriptContainerElement *)0x0;
      local_178._8_8_ = 0;
      local_158 = (ForElementType<unsigned_int>)0x0;
      local_150 = 0;
      local_14c = 0x80;
      local_148 = -1;
      local_144 = 0;
      local_138 = (ForElementType<FSetElementId>)0x0;
      local_130 = 0;
      local_330.Key = 0x25;
      local_330.Payload = 0x2b;
      local_330.NumCopies = 0;
      local_330.NumMoves = 0;
      local_3f8 = true;
      if (iVar3 == 0) {
        if (iVar9 == 0) {
          pFVar12 = TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
                    ::FindOrAddByHash<_anonymous_namespace_::FRecorder_const_&>
                              ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                                *)local_178,0x2b,&local_330,&local_3f8);
        }
        else {
          pFVar12 = TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
                    ::FindOrAddByHash<_anonymous_namespace_::FRecorder>
                              ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                                *)local_178,0x2b,&local_330,&local_3f8);
        }
      }
      else {
        local_3f8 = false;
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1c,4,1,(ForAnyElementType *)local_178,(int *)(local_178 + 8),
                           (int *)(local_178 + 0xc));
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),false);
        pFVar12 = pFVar29;
        if (iVar9 == 0) {
          TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_178,&local_288,iVar8);
          if (local_288.Pointer != (FRecorder *)0x0) {
            *(uint *)local_288.Pointer = FRecorder::NextId;
            *(uint *)((longlong)local_288.Pointer + 4) = 0x25;
            *(uint *)((longlong)local_288.Pointer + 8) = 0x2b;
            FRecorder::NextId = FRecorder::NextId + 1;
            *(undefined8 *)((longlong)local_288.Pointer + 0xc) = 1;
            ((FRecorder *)((longlong)local_288.Pointer + 0x14))->Id = 0xffffffff;
            pFVar12 = local_288.Pointer;
          }
          uVar23 = local_178._8_4_ - local_144;
          if (uVar23 < 4) {
            iVar8 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_2bc = (int)lVar21;
            iVar8 = 1 << ((byte)lVar21 & 0x1f);
          }
          if (((int)uVar23 < 1) || (iVar8 <= local_130)) {
            uVar23 = local_130 - 1U & 0x2b;
            pFVar12[1].Key = uVar23;
            FVar19 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138;
            }
            uVar18 = (longlong)(local_130 + -1) & (ulonglong)uVar23;
            pFVar12[1].Id = *(uint *)((longlong)FVar19 + uVar18 * 4);
            iVar8 = local_288.Index;
LAB_1414d0c0f:
            *(int *)((longlong)FVar19 + uVar18 * 4) = iVar8;
          }
          else {
            local_130 = iVar8;
            TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
            ::Rehash((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                      *)local_178);
          }
        }
        else {
          TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_178,&local_278,iVar8);
          if (local_278.Pointer != (FRecorder *)0x0) {
            *(uint *)local_278.Pointer = FRecorder::NextId;
            *(uint *)((longlong)local_278.Pointer + 4) = 0x25;
            *(undefined8 *)((longlong)local_278.Pointer + 8) = 0x2b;
            FRecorder::NextId = FRecorder::NextId + 1;
            *(uint *)((longlong)local_278.Pointer + 0x10) = 1;
            ((FRecorder *)((longlong)local_278.Pointer + 0x14))->Id = 0xffffffff;
            pFVar12 = local_278.Pointer;
          }
          uVar23 = local_178._8_4_ - local_144;
          if (uVar23 < 4) {
            iVar8 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_2b8 = (int)lVar21;
            iVar8 = 1 << ((byte)lVar21 & 0x1f);
          }
          if (((int)uVar23 < 1) || (iVar8 <= local_130)) {
            uVar23 = local_130 - 1U & 0x2b;
            pFVar12[1].Key = uVar23;
            FVar19 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138;
            }
            uVar18 = (longlong)(local_130 + -1) & (ulonglong)uVar23;
            pFVar12[1].Id = *(uint *)((longlong)FVar19 + uVar18 * 4);
            iVar8 = local_278.Index;
            goto LAB_1414d0c0f;
          }
          local_130 = iVar8;
          TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
          ::Rehash((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                    *)local_178);
        }
      }
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_188,L"returns bAlreadyInSet==false for first add");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar28,local_3f8);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (iVar9 == 0) {
        if (((uVar22 < pFVar12->Id) && (pFVar12->NumCopies != 0)) && (pFVar12->Payload == 0x2b)) {
          bVar31 = true;
        }
        else {
          bVar31 = false;
        }
        pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                            (&local_3d0,&local_238,L"on the first constructs a copy");
        if ((pFVar10->Data).ArrayNum == 0) {
          FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"",bVar31);
          FVar17.Data = local_238.Data.AllocatorInstance.Data;
        }
        else {
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                     bVar31);
          FVar17.Data = local_238.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((((uVar22 < pFVar12->Id) && (pFVar12->NumCopies == 0)) && (pFVar12->NumMoves != 0)) &&
           (pFVar12->Payload == 0x2b)) {
          bVar31 = true;
        }
        else {
          bVar31 = false;
        }
        pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                            (&local_3d0,&local_228,L"on the first constructs a move");
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,bVar31);
        FVar17.Data = local_228.Data.AllocatorInstance.Data;
      }
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      uVar22 = pFVar12->Id;
      if (local_178._8_4_ != local_144) {
        FVar19 = (ForElementType<FSetElementId>)local_140;
        if (local_138 != (ForElementType<FSetElementId>)0x0) {
          FVar19 = local_138;
        }
        for (iVar8 = *(int *)((longlong)FVar19 + (ulonglong)(local_130 - 1U & 0x2b) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_178._0_8_ + (longlong)iVar8 * 0x1c + 0x14)) {
          if (*(int *)(local_178._0_8_ + (longlong)iVar8 * 0x1c + 4) == 0x25) {
            if (((iVar8 != -1) &&
                ((FScriptContainerElement *)(local_178._0_8_ + (longlong)iVar8 * 0x1c) !=
                 (FScriptContainerElement *)0x0)) &&
               (*(uint *)(local_178._0_8_ + (longlong)iVar8 * 0x1c) == uVar22)) {
              bVar31 = true;
              goto LAB_1414d0d8b;
            }
            break;
          }
        }
      }
      bVar31 = false;
LAB_1414d0d8b:
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_218,L"returns same value as future find");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,bVar31);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_178._8_4_ != local_144) {
        FVar19 = (ForElementType<FSetElementId>)local_140;
        if (local_138 != (ForElementType<FSetElementId>)0x0) {
          FVar19 = local_138;
        }
        for (iVar8 = *(int *)((longlong)FVar19 + (ulonglong)(local_130 - 1U & 0x2b) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_178._0_8_ + (longlong)iVar8 * 0x1c + 0x14)) {
          if (*(int *)(local_178._0_8_ + (longlong)iVar8 * 0x1c + 4) == 0x25) {
            if (((iVar8 != -1) &&
                ((FScriptContainerElement *)(local_178._0_8_ + (longlong)iVar8 * 0x1c) !=
                 (FScriptContainerElement *)0x0)) &&
               (*(uint *)(local_178._0_8_ + (longlong)iVar8 * 0x1c) == uVar22)) {
              bVar31 = true;
              goto LAB_1414d0e4c;
            }
            break;
          }
        }
      }
      bVar31 = false;
LAB_1414d0e4c:
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"Finding an element returns a reference, no copies",
                 bVar31);
      local_348.Id = FRecorder::NextId;
      FRecorder::NextId = FRecorder::NextId + 1;
      local_348.Key = 0x25;
      local_348.Payload = 0x38;
      local_348.NumCopies = 0;
      local_348.NumMoves = 0;
      if (iVar3 == 0) {
        if (iVar9 == 0) {
          pFVar12 = TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
                    ::FindOrAddByHash<_anonymous_namespace_::FRecorder_const_&>
                              ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                                *)local_178,0x38,&local_348,&local_3f8);
        }
        else {
          pFVar12 = TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
                    ::FindOrAddByHash<_anonymous_namespace_::FRecorder>
                              ((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                                *)local_178,0x38,&local_348,&local_3f8);
        }
      }
      else {
        pFVar12 = pFVar29;
        if (iVar9 == 0) {
          if (local_178._8_4_ != local_144) {
            FVar19 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138;
            }
            for (iVar9 = *(int *)((longlong)FVar19 + (ulonglong)(local_130 - 1U & 0x38) * 4);
                iVar9 != -1; iVar9 = *(int *)(local_178._0_8_ + (longlong)iVar9 * 0x1c + 0x14)) {
              if (*(int *)(local_178._0_8_ + (longlong)iVar9 * 0x1c + 4) == 0x25) {
                local_3f8 = iVar9 != -1;
                if (iVar9 == -1) goto LAB_1414d0f3e;
                pFVar12 = (FRecorder *)(local_178._0_8_ + (longlong)iVar9 * 0x1c);
                goto LAB_1414d128c;
              }
            }
          }
          local_3f8 = false;
LAB_1414d0f3e:
          if (local_144 == 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1c,4,1,(ForAnyElementType *)local_178,(int *)(local_178 + 8),
                               (int *)(local_178 + 0xc));
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),false);
            iVar9 = local_148;
          }
          else {
            local_144 = local_144 + -1;
            iVar9 = *(int *)(local_178._0_8_ + (longlong)local_148 * 0x1c + 4);
            iVar8 = local_148;
            if (local_144 != 0) {
              *(undefined4 *)(local_178._0_8_ + (longlong)iVar9 * 0x1c) = 0xffffffff;
            }
          }
          local_148 = iVar9;
          TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_178,&local_268,iVar8);
          if (local_268.Pointer != (FRecorder *)0x0) {
            *(uint *)local_268.Pointer = FRecorder::NextId;
            *(uint *)((longlong)local_268.Pointer + 4) = 0x25;
            *(uint *)((longlong)local_268.Pointer + 8) = 0x38;
            FRecorder::NextId = FRecorder::NextId + 1;
            *(undefined8 *)((longlong)local_268.Pointer + 0xc) = 1;
            ((FRecorder *)((longlong)local_268.Pointer + 0x14))->Id = 0xffffffff;
            pFVar12 = local_268.Pointer;
          }
          uVar23 = local_178._8_4_ - local_144;
          if (uVar23 < 4) {
            iVar9 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_2b4 = (int)lVar21;
            iVar9 = 1 << ((byte)lVar21 & 0x1f);
          }
          if (((int)uVar23 < 1) || (iVar9 <= local_130)) {
            uVar23 = local_130 - 1U & 0x38;
            pFVar12[1].Key = uVar23;
            FVar19 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138;
            }
            uVar18 = (longlong)(local_130 + -1) & (ulonglong)uVar23;
            pFVar12[1].Id = *(uint *)((longlong)FVar19 + uVar18 * 4);
            iVar9 = local_268.Index;
LAB_1414d1289:
            *(int *)((longlong)FVar19 + uVar18 * 4) = iVar9;
          }
          else {
            local_130 = iVar9;
            TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
            ::Rehash((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                      *)local_178);
          }
        }
        else {
          if (local_178._8_4_ != local_144) {
            FVar19 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138;
            }
            for (iVar9 = *(int *)((longlong)FVar19 + (ulonglong)(local_130 - 1U & 0x38) * 4);
                iVar9 != -1; iVar9 = *(int *)(local_178._0_8_ + (longlong)iVar9 * 0x1c + 0x14)) {
              if (*(int *)(local_178._0_8_ + (longlong)iVar9 * 0x1c + 4) == 0x25) {
                local_3f8 = iVar9 != -1;
                if (iVar9 == -1) goto LAB_1414d110f;
                pFVar12 = (FRecorder *)(local_178._0_8_ + (longlong)iVar9 * 0x1c);
                goto LAB_1414d128c;
              }
            }
          }
          local_3f8 = false;
LAB_1414d110f:
          if (local_144 == 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1c,4,1,(ForAnyElementType *)local_178,(int *)(local_178 + 8),
                               (int *)(local_178 + 0xc));
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),false);
            iVar9 = local_148;
          }
          else {
            local_144 = local_144 + -1;
            iVar9 = *(int *)(local_178._0_8_ + (longlong)local_148 * 0x1c + 4);
            iVar8 = local_148;
            if (local_144 != 0) {
              *(undefined4 *)(local_178._0_8_ + (longlong)iVar9 * 0x1c) = 0xffffffff;
            }
          }
          local_148 = iVar9;
          TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_178,&local_258,iVar8);
          if (local_258.Pointer != (FRecorder *)0x0) {
            *(uint *)local_258.Pointer = FRecorder::NextId;
            *(uint *)((longlong)local_258.Pointer + 4) = 0x25;
            *(undefined8 *)((longlong)local_258.Pointer + 8) = 0x38;
            FRecorder::NextId = FRecorder::NextId + 1;
            *(uint *)((longlong)local_258.Pointer + 0x10) = 1;
            ((FRecorder *)((longlong)local_258.Pointer + 0x14))->Id = 0xffffffff;
            pFVar12 = local_258.Pointer;
          }
          uVar23 = local_178._8_4_ - local_144;
          if (uVar23 < 4) {
            iVar9 = 1;
          }
          else {
            uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_2b0 = (int)lVar21;
            iVar9 = 1 << ((byte)lVar21 & 0x1f);
          }
          if (((int)uVar23 < 1) || (iVar9 <= local_130)) {
            uVar23 = local_130 - 1U & 0x38;
            pFVar12[1].Key = uVar23;
            FVar19 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138;
            }
            uVar18 = (longlong)(local_130 + -1) & (ulonglong)uVar23;
            pFVar12[1].Id = *(uint *)((longlong)FVar19 + uVar18 * 4);
            iVar9 = local_258.Index;
            goto LAB_1414d1289;
          }
          local_130 = iVar9;
          TSet<`anonymous_namespace'::FRecorder,DefaultKeyFuncs<`anonymous_namespace'::FRecorder,0>,FDefaultSetAllocator>
          ::Rehash((TSet<_anonymous_namespace_::FRecorder,DefaultKeyFuncs<_anonymous_namespace_::FRecorder,0>,FDefaultSetAllocator>
                    *)local_178);
        }
      }
LAB_1414d128c:
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_1a8,L"returns bAlreadyInSet==true for second add");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,local_3f8);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if ((pFVar12->Id == uVar22) && (pFVar12->Payload == 0x2b)) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_1f8,
                           L"with a duplicate key keeps the original key, returned from FindOrAdd");
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,bVar31);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      pFVar12 = pFVar29;
      if (local_178._8_4_ != local_144) {
        FVar19 = (ForElementType<FSetElementId>)local_140;
        if (local_138 != (ForElementType<FSetElementId>)0x0) {
          FVar19 = local_138;
        }
        for (iVar9 = *(int *)((longlong)FVar19 + (ulonglong)(local_130 - 1U & 0x2b) * 4);
            iVar9 != -1; iVar9 = *(int *)(local_178._0_8_ + (longlong)iVar9 * 0x1c + 0x14)) {
          if (*(int *)(local_178._0_8_ + (longlong)iVar9 * 0x1c + 4) == 0x25) {
            if (iVar9 != -1) {
              pFVar12 = (FRecorder *)(local_178._0_8_ + (longlong)iVar9 * 0x1c);
            }
            break;
          }
        }
      }
      if ((pFVar12->Id == uVar22) && (pFVar12->Payload == 0x2b)) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      pFVar10 = `FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
                          (&local_3d0,&local_1e8,
                           L"with a duplicate key keeps the original key, returned from future Finds"
                          );
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar28,bVar31);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      local_130 = 0;
      if (local_138 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138);
      }
      TSparseArray<TSparseSetElement<`anonymous_namespace'::FRecorder>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<_anonymous_namespace_::FRecorder>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<_anonymous_namespace_::FRecorder>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      if (local_3f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data);
      }
      piVar25 = piVar25 + 1;
    } while (piVar25 != local_3b0);
    local_3a8.Data.AllocatorInstance.Data = local_3a8.Data.AllocatorInstance.Data + 4;
  } while (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)&local_3a8);
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = 0;
  local_3e0._8_8_ = piVar25;
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"FindArbitraryElement returns null on an empty set",
             (void *)0x0);
  local_40 = 0;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (int *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  uVar22 = uVar30;
  do {
    ::FString::PrintfImpl(&local_248,L"%d");
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8,
               (FString *)local_3e0,(bool *)&local_248);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    uVar22 = uVar22 + 1;
    uVar23 = uVar30;
  } while (uVar22 != 100);
  do {
    if (uVar23 != 0x43) {
      ::FString::PrintfImpl(&local_3a8,L"%d");
      uVar22 = uVar30;
      if (local_d8._8_4_ != local_a4) {
        uVar22 = local_3a8.Data.ArrayNum - 1;
        FVar17.Data = local_3a8.Data.AllocatorInstance.Data;
        if (local_3a8.Data.ArrayNum == 0) {
          uVar22 = uVar30;
          FVar17.Data = (FScriptContainerElement *)L"";
        }
        uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar22,(wchar_t *)FVar17.Data);
        uVar22 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                           ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                            local_d8,uVar22,&local_3a8);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if ((uVar22 != 1) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Set.Remove(LexToString(I)) == 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                              ,0x55f,L""), bVar31)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar23 = uVar23 + 1;
  } while (uVar23 != 100);
  if (local_a4 == 0) {
    iVar9 = local_d8._8_4_ + -1;
  }
  else {
    piVar25 = (int *)(local_d8 + 0x10);
    if (local_b8 != (int *)0x0) {
      piVar25 = local_b8;
    }
    piVar13 = piVar25;
    uVar22 = uVar30;
    if (local_b0 + 0x1fU >> 5 != 0) {
LAB_1414d1640:
      if (*piVar13 == 0) goto code_r0x0001414d1645;
      iVar3 = 0;
      bVar31 = piVar25[uVar22] != 0;
      if (bVar31) {
        for (; ((uint)piVar25[uVar22] >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      local_3e0._8_4_ = iVar3;
      iVar9 = 0x20;
      if (bVar31) {
        iVar9 = iVar3;
      }
      iVar9 = iVar9 + uVar22 * 0x20;
      if (local_b0 <= iVar9) goto LAB_1414d166b;
      goto LAB_1414d1670;
    }
LAB_1414d166b:
    iVar9 = -1;
  }
LAB_1414d1670:
  if ((iVar9 != -1) &&
     (puVar2 = (undefined8 *)(local_d8._0_8_ + (longlong)iVar9 * 0x18), puVar2 != (undefined8 *)0x0)
     ) {
    ::FString::PrintfImpl(&local_2a8,L"%d");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar17.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar28 = L"";
    }
    else {
      pwVar28 = (wchar_t *)*puVar2;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"FindArbitraryElement finds the correct value on a highly sparse set",pwVar28,
               (wchar_t *)FVar17.Data);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_318,L"%d");
  uVar22 = uVar30;
  if (local_d8._8_4_ != local_a4) {
    uVar22 = local_318.Data.ArrayNum - 1;
    FVar17.Data = local_318.Data.AllocatorInstance.Data;
    if (local_318.Data.ArrayNum == 0) {
      uVar22 = uVar30;
      FVar17.Data = (FScriptContainerElement *)L"";
    }
    uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar22,(wchar_t *)FVar17.Data);
    uVar22 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                       ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8,
                        uVar22,&local_318);
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if ((uVar22 != 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Set.Remove(LexToString(IndexToKeep)) == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                          ,0x56b,L""), bVar31)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (local_a4 == 0) {
    iVar9 = local_d8._8_4_ + -1;
  }
  else {
    piVar25 = (int *)(local_d8 + 0x10);
    if (local_b8 != (int *)0x0) {
      piVar25 = local_b8;
    }
    piVar13 = piVar25;
    if (local_b0 + 0x1fU >> 5 != 0) {
LAB_1414d17c0:
      if (*piVar13 == 0) goto code_r0x0001414d17c5;
      iVar3 = 0;
      bVar31 = piVar25[uVar30] != 0;
      if (bVar31) {
        for (; ((uint)piVar25[uVar30] >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      iVar9 = 0x20;
      if (bVar31) {
        iVar9 = iVar3;
      }
      iVar9 = iVar9 + uVar30 * 0x20;
      if (iVar9 < local_b0) goto LAB_1414d17eb;
    }
LAB_1414d17e6:
    iVar9 = -1;
  }
LAB_1414d17eb:
  if (iVar9 != -1) {
    pFVar29 = (FRecorder *)(local_d8._0_8_ + (longlong)iVar9 * 0x18);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"FindArbitraryElement returns null on an emptied set",
             pFVar29);
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  bVar31 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar31;
code_r0x0001414d1645:
  uVar22 = uVar22 + 1;
  piVar13 = piVar13 + 1;
  if ((int)(local_b0 + 0x1fU >> 5) <= (int)uVar22) goto LAB_1414d166b;
  goto LAB_1414d1640;
code_r0x0001414d17c5:
  uVar30 = uVar30 + 1;
  piVar13 = piVar13 + 1;
  if ((int)(local_b0 + 0x1fU >> 5) <= (int)uVar30) goto LAB_1414d17e6;
  goto LAB_1414d17c0;
}

// GetBeautifiedTestName @ 1414d1880

FString * __thiscall
FContainersTSetTest::GetBeautifiedTestName
          (FContainersTSetTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x1c,
             "System.Core.Containers.TSet",0x1c);
  return __return_storage_ptr__;
}

// operator() @ 1415952b0

FString * __thiscall
`FContainersTSetTest::RunTest'::__l10::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"TSet::%s%s(%s) %s");
  return __return_storage_ptr__;
}

