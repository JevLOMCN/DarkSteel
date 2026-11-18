// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14166cea0

EAutomationTestFlags __thiscall FLLMMiscTest::GetTestFlags(FLLMMiscTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14166ceb0

bool __thiscall FLLMMiscTest::IsStressTest(FLLMMiscTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14166cec0

uint __thiscall FLLMMiscTest::GetRequiredDeviceNum(FLLMMiscTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14166ced0

FString * __thiscall
FLLMMiscTest::GetTestSourceFileName(FLLMMiscTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTrackerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14166cf00

int __thiscall FLLMMiscTest::GetTestSourceFileLine(FLLMMiscTest *this)

{
  return 0x48;
}

// GetTests @ 14166cf10

/* WARNING: Removing unreachable block (ram,0x00014166cffd) */
/* WARNING: Removing unreachable block (ram,0x00014166d0c8) */

void __thiscall
FLLMMiscTest::GetTests
          (FLLMMiscTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.LLM.Misc");
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

// RunTest @ 14166d0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FLLMMiscTest::RunTest(FLLMMiscTest *this,FString *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  ForAnyElementType FVar9;
  TSparseSetElement<FName> *pTVar10;
  uint uVar11;
  wchar_t *pwVar12;
  ForElementType<unsigned_int> FVar13;
  undefined8 *puVar14;
  uint uVar15;
  TSparseSetElement<FName> *pTVar16;
  ulonglong uVar17;
  TSparseSetElement<FName> *pTVar18;
  uint uVar19;
  bool bVar21;
  undefined1 auStackY_128 [32];
  bool local_f8 [4];
  int local_f4;
  uint local_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  TSparseSetElement<FName> *pTVar20;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar18 = (TSparseSetElement<FName> *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_5c = 0x80;
  local_58 = -1;
  pTVar20 = pTVar18;
  do {
    LLMGetTagUniqueName((ELLMTag)&local_d0);
    if ((int)pTVar20 - 0x6dU < 2) {
      bVar21 = local_d0 == 0;
      pwVar12 = L"LLMGetTagUniqueName returns None for invalid tags";
    }
    else {
      if (local_54 == 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                           (int *)(local_88 + 0xc));
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
        FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_68;
        }
        bVar8 = (byte)iVar6 & 0x1f;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x1f;
          bVar8 = bVar8 - 0x20;
        }
        puVar1 = (uint *)((longlong)FVar13 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (bVar8 & 0x1f));
        iVar6 = local_58;
      }
      else {
        local_54 = local_54 + -1;
        iVar6 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
        iVar5 = local_58;
        if (local_54 != 0) {
          *(undefined4 *)(local_88._0_8_ + (longlong)iVar6 * 0x10) = 0xffffffff;
        }
      }
      local_58 = iVar6;
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,&local_a0,iVar5);
      lVar4 = local_d0;
      pTVar10 = pTVar18;
      if (local_a0.Pointer != (TSparseSetElement<FName> *)0x0) {
        *(longlong *)local_a0.Pointer = local_d0;
        *(undefined4 *)((longlong)local_a0.Pointer + 8) = 0xffffffff;
        pTVar10 = local_a0.Pointer;
      }
      uVar2 = *(undefined8 *)pTVar10;
      local_f4 = local_a0.Index;
      uVar19 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      uVar19 = uVar19 + (int)((ulonglong)uVar2 >> 0x20);
      bVar21 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                         ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,
                          uVar19,pTVar10,&local_f4,local_f8);
      if (!bVar21) {
        uVar15 = 1;
        uVar11 = local_88._8_4_ - local_54;
        if (3 < uVar11) {
          uVar17 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uVar15 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((int)uVar11 < 1) || ((int)uVar15 <= (int)local_40)) {
          uVar19 = local_40 - 1 & uVar19;
          *(uint *)&pTVar10->field_0xc = uVar19;
          FVar9.Data = (FScriptContainerElement *)local_50;
          if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
            FVar9.Data = local_48.Data;
          }
          uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar19;
          *(undefined4 *)&pTVar10->field_0x8 = *(undefined4 *)((longlong)FVar9.Data + uVar17 * 4);
          *(int *)((longlong)FVar9.Data + uVar17 * 4) = local_f4;
        }
        else {
          local_40 = uVar15;
          if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar15 != 0) {
            uVar19 = uVar15;
            if (uVar15 < 2) {
              if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar19 = 0;
                goto LAB_14166d30e;
              }
            }
            else {
LAB_14166d30e:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar19,4);
            }
            if (0 < (int)uVar15) {
              uVar17 = (ulonglong)uVar15;
              pTVar10 = pTVar18;
              do {
                FVar9.Data = (FScriptContainerElement *)local_50;
                if ((ForElementType<FSetElementId>)local_48.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar9.Data = local_48.Data;
                }
                uVar7 = (ulonglong)pTVar10 & (longlong)(int)uVar15 - 1U;
                pTVar10 = (TSparseSetElement<FName> *)&pTVar10->field_0x1;
                *(undefined4 *)((longlong)FVar9.Data + uVar7 * 4) = 0xffffffff;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
            local_f0 = 0;
            uStack_ec = 1;
            uStack_dc = 0;
            uStack_d8 = 0;
            pTVar10 = pTVar18;
            if (local_60 != 0) {
              FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar13 = local_68;
              }
              uVar19 = *(uint *)FVar13;
              pTVar16 = pTVar18;
              while (uVar19 == 0) {
                uStack_d8 = (int)pTVar16 + 0x20;
                pTVar16 = (TSparseSetElement<FName> *)(ulonglong)uStack_d8;
                iVar5 = (int)pTVar10;
                local_f0 = iVar5 + 1;
                pTVar10 = (TSparseSetElement<FName> *)(ulonglong)local_f0;
                if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_f0) goto LAB_14166d41e;
                uVar19 = ((uint *)((longlong)FVar13 + 4))[iVar5];
              }
              uStack_ec = -uVar19 & uVar19;
              uVar17 = (ulonglong)uStack_ec * 2 + 1;
              lVar3 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              uStack_dc = (int)lVar3 + -1 + (int)pTVar16;
              pTVar10 = (TSparseSetElement<FName> *)(ulonglong)uStack_dc;
              if ((int)local_60 < (int)uStack_dc) {
LAB_14166d41e:
                pTVar10 = (TSparseSetElement<FName> *)(ulonglong)local_60;
                uStack_dc = local_60;
              }
            }
            local_e0 = 0xffffffff;
            local_c8 = (longlong *)local_88;
            local_c0._padding_ = CONCAT44(uStack_ec,local_f0);
            local_c0.CurrentBitIndex = uStack_dc;
            local_c0.UnvisitedBitMask = 0xffffffff;
            local_c0._28_4_ = uStack_d4;
            local_c0.BaseBitIndex = uStack_d8;
            local_c0.Array = pTStack_e8;
            if ((int)pTVar10 < (int)local_60) {
              do {
                puVar14 = (undefined8 *)((longlong)(int)pTVar10 * 0x10 + *local_c8);
                uVar2 = *puVar14;
                uVar19 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
                uVar19 = local_40 - 1 & uVar19 + (int)((ulonglong)uVar2 >> 0x20);
                *(uint *)((longlong)puVar14 + 0xc) = uVar19;
                FVar9.Data = (FScriptContainerElement *)local_50;
                if ((ForElementType<FSetElementId>)local_48.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar9.Data = local_48.Data;
                }
                uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar19;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((longlong)FVar9.Data + uVar17 * 4);
                *(int *)((longlong)FVar9.Data + uVar17 * 4) = (int)pTVar10;
                local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
                pTVar10 = (TSparseSetElement<FName> *)(ulonglong)(uint)local_c0.CurrentBitIndex;
              } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
            }
          }
        }
      }
      if ((lVar4 == 0) || (local_f8[0] != false)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      pwVar12 = L"LLMGetTagUniqueNames are unique";
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar12,bVar21);
    uVar19 = (int)pTVar20 + 1;
    pTVar20 = (TSparseSetElement<FName> *)(ulonglong)uVar19;
    if (0xff < (int)uVar19) {
      local_40 = 0;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_48.Data);
      }
      iVar5 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_54 = 0;
      local_60 = 0;
      local_58 = -1;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 14166d610

FString * __thiscall
FLLMMiscTest::GetBeautifiedTestName(FLLMMiscTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.LLM.Misc");
  return __return_storage_ptr__;
}

