// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad0540

EAutomationTestFlags __thiscall FCompactSetTest::GetTestFlags(FCompactSetTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad0550

bool __thiscall FCompactSetTest::IsStressTest(FCompactSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad0560

uint __thiscall FCompactSetTest::GetRequiredDeviceNum(FCompactSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad0570

FString * __thiscall
FCompactSetTest::GetTestSourceFileName(FCompactSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\SetTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad05a0

int __thiscall FCompactSetTest::GetTestSourceFileLine(FCompactSetTest *this)

{
  return 0x1d7;
}

// GetTests @ 141ad05b0

/* WARNING: Removing unreachable block (ram,0x000141ad072e) */

void __thiscall
FCompactSetTest::GetTests
          (FCompactSetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141ad0750

bool __thiscall FCompactSetTest::RunTest(FCompactSetTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad0780

FString * __thiscall
FCompactSetTest::GetBeautifiedTestName(FCompactSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCompactSetTest @ 141b1bac0

FCompactSetTest * __thiscall
FCompactSetTest::FCompactSetTest(FCompactSetTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FCompactSetTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][CompactSet]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::CompactSet");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[Core][Containers][CompactSet]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141b677c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall FCompactSetTest::TestBody(FCompactSetTest *this,FString *param_1)

{
  ulonglong *puVar1;
  FScriptContainerElement FVar2;
  ushort uVar3;
  int iVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  ForElementType<unsigned_char> FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FAutomationTestFramework *pFVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char cVar17;
  sbyte sVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  FString *pFVar26;
  wchar_t *pwVar27;
  ulonglong uVar28;
  ulong64 uVar29;
  void *_Dst;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  undefined1 local_138;
  undefined1 local_137 [7];
  TCompactSetBase<TSizedDefaultAllocator<32>_> local_130;
  TSetTestHelper<FCompactSetTestResolver> local_120 [8];
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> local_118;
  int local_108;
  FString local_100;
  FCompactSetLayout local_f0;
  ForElementType<unsigned_char> local_e8;
  FScriptContainerElement *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [16];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_188;
  TSetTestHelper<FCompactSetTestResolver>::TSetTestHelper<FCompactSetTestResolver>(local_120);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar5 = pFVar13->CurrentTest;
  pcVar6 = *(code **)(pFVar5->_padding_ + 0x50);
  ::FString::FString(&local_d8,L"Allocation Size");
  (*pcVar6)(pFVar5,&local_d8,0,0);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  uVar16 = 0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_4_ = 0;
  local_118._12_4_ = 0;
  uVar15 = uVar16;
  uVar20 = uVar16;
  uVar28 = uVar16;
LAB_141b67860:
  uVar9 = (uint)uVar20;
  if ((int)uVar15 != 0) {
    uVar11 = (uint)uVar28;
    iVar19 = *(int *)(local_118._0_8_ + (ulonglong)(uVar11 * 4));
    lVar24 = (ulonglong)(uVar11 * 4) + 4;
    cVar17 = '\0';
    if (0xffff < uVar11) {
      cVar17 = '\x02';
    }
    cVar17 = (0xff < uVar11) + '\x01' + cVar17;
    if (cVar17 == '\x01') {
      for (FVar2 = *(FScriptContainerElement *)
                    (local_118._0_8_ + (longlong)(int)uVar11 + (uVar20 & iVar19 - 1) + lVar24);
          FVar2 != (FScriptContainerElement)0xff;
          FVar2 = *(FScriptContainerElement *)(local_118._0_8_ + (ulonglong)(byte)FVar2 + lVar24)) {
        if (*(uint *)(local_118._0_8_ + (ulonglong)(byte)FVar2 * 4) == uVar9) {
          uVar11 = (uint)(byte)FVar2;
          goto LAB_141b679ab;
        }
      }
    }
    else if (cVar17 == '\x02') {
      for (uVar3 = *(ushort *)
                    (local_118._0_8_ + ((iVar19 - 1 & uVar20) + (longlong)(int)uVar11) * 2 + lVar24)
          ; uVar3 != 0xffff; uVar3 = *(ushort *)(local_118._0_8_ + (ulonglong)uVar3 * 2 + lVar24)) {
        if (*(uint *)(local_118._0_8_ + (ulonglong)uVar3 * 4) == uVar9) {
          uVar11 = (uint)uVar3;
          goto LAB_141b679ab;
        }
      }
    }
    else if (cVar17 == '\x04') {
      for (uVar11 = *(uint *)(local_118._0_8_ +
                             ((iVar19 - 1 & uVar20) + (longlong)(int)uVar11) * 4 + lVar24);
          uVar11 != 0xffffffff; uVar11 = *(uint *)(local_118._0_8_ + (ulonglong)uVar11 * 4 + lVar24)
          ) {
        if (*(uint *)(local_118._0_8_ + (ulonglong)uVar11 * 4) == uVar9) goto LAB_141b679ab;
      }
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  goto LAB_141b678cf;
LAB_141b679ab:
  if (uVar11 == 0xffffffff) {
LAB_141b678cf:
    puVar14 = (uint *)TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
                      AddUninitialized(&local_118,uVar9);
    *puVar14 = uVar9;
  }
  else {
    *(uint *)(local_118._0_8_ + (longlong)(int)uVar11 * 4) = uVar9;
  }
  uVar20 = (ulonglong)(uVar9 + 1);
  if (0x8a < (int)(uVar9 + 1)) goto LAB_141b679c0;
  uVar28 = (ulonglong)(uint)local_118._12_4_;
  uVar15 = (ulonglong)(uint)local_118._8_4_;
  goto LAB_141b67860;
LAB_141b679c0:
  uVar9 = FGenericPlatformMath::CountLeadingZeros(0x45);
  if (local_118._12_4_ != 0) {
    uVar16 = (ulonglong)(uint)(local_118._12_4_ * 4) + 4 +
             ((ulonglong)*(uint *)(local_118._0_8_ + (ulonglong)(uint)(local_118._12_4_ * 4)) +
              (ulonglong)(uint)local_118._12_4_ <<
             (0xff < (uint)local_118._12_4_) + (0xffff < (uint)local_118._12_4_));
  }
  if (uVar16 < (ulonglong)(uint)(1 << (0x20U - (char)uVar9 & 0x1f)) + 699) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Condition failed");
    (*pcVar6)(pFVar5);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  local_118._8_4_ = 0;
  lVar24 = 4;
  if (local_118._12_4_ != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,1,4);
    local_118._12_4_ = 0;
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  pFVar13 = FAutomationTestFramework::Get();
  pFVar5 = pFVar13->CurrentTest;
  pcVar6 = *(code **)(pFVar5->_padding_ + 0x50);
  ::FString::FString(&local_b8,L"Stability Support");
  (*pcVar6)(pFVar5,&local_b8,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"Zero");
  ::FString::FString(&local_68,L"One");
  ::FString::FString(&local_58,L"Two");
  ::FString::FString(&local_48,L"Three");
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_148,4,&local_13c);
  ConstructItems<FString,FString,int>(local_148.Data,&local_78,4);
  puVar21 = local_38;
  do {
    puVar1 = puVar21 + -2;
    puVar21 = puVar21 + -2;
    lVar24 = lVar24 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    iVar19 = local_140;
    FVar25.Data = local_148.Data;
  } while (lVar24 != 0);
  uVar29 = (ulong64)local_140;
  local_e0 = local_148.Data;
  local_108 = local_140;
  if ((local_140 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_130.Elements = (ForElementType<unsigned_char>)0x0;
  local_130.NumElements = 0;
  local_130.MaxElements = 0;
  if (iVar19 != 0) {
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar29);
    }
    local_f0 = (FCompactSetLayout)&DAT_800000010;
    bVar8 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      (&local_130,iVar19,&local_f0,true);
    if ((bVar8) && (iVar23 = local_130.MaxElements, 0 < local_130.MaxElements)) {
      local_e8 = local_130.Elements;
      puVar14 = (uint *)((longlong)local_130.Elements +
                        (ulonglong)(uint)(local_130.MaxElements << 4));
      uVar9 = *puVar14;
      sVar18 = (0xffU < (uint)local_130.MaxElements) + (0xffffU < (uint)local_130.MaxElements);
      _Dst = (void *)((longlong)puVar14 + ((ulonglong)(uint)local_130.MaxElements << sVar18) + 4);
      memset(_Dst,0xff,(ulonglong)uVar9 << sVar18);
      FVar7 = local_e8;
      uVar15 = 0;
      if (0 < local_130.NumElements) {
        iVar10 = 0;
        if (0xffff < (uint)iVar23) {
          iVar10 = 2;
        }
        iVar10 = (0xff < (uint)iVar23) + 1 + iVar10;
        do {
          iVar23 = (int)uVar15;
          iVar19 = ((int *)((longlong)FVar7 + 8))[(longlong)iVar23 * 4];
          if (iVar19 == 0) {
            pwVar27 = L"";
            iVar19 = 0;
          }
          else {
            pwVar27 = (wchar_t *)
                      (((FString *)((longlong)FVar7 + (longlong)iVar23 * 0x10))->Data).
                      AllocatorInstance.Data;
            iVar19 = iVar19 + -1;
          }
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar27);
          if (iVar10 == 1) {
            uVar20 = (ulonglong)(uVar11 & uVar9 - 1);
            *(undefined1 *)((longlong)puVar14 + uVar15 + 4) =
                 *(undefined1 *)((longlong)_Dst + uVar20);
            *(char *)((longlong)_Dst + uVar20) = (char)uVar15;
          }
          else if (iVar10 == 2) {
            uVar20 = (ulonglong)(uVar9 - 1 & uVar11);
            *(undefined2 *)((longlong)puVar14 + uVar15 * 2 + 4) =
                 *(undefined2 *)((longlong)_Dst + uVar20 * 2);
            *(short *)((longlong)_Dst + uVar20 * 2) = (short)uVar15;
          }
          else if (iVar10 == 4) {
            uVar20 = (ulonglong)(uVar9 - 1 & uVar11);
            puVar14[uVar15 + 1] = *(uint *)((longlong)_Dst + uVar20 * 4);
            *(int *)((longlong)_Dst + uVar20 * 4) = iVar23;
          }
          else {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          uVar15 = (ulonglong)(iVar23 + 1U);
          FVar25.Data = local_e0;
          iVar19 = local_108;
        } while ((int)(iVar23 + 1U) < local_130.NumElements);
      }
    }
  }
  iVar23 = 0;
  pFVar22 = FVar25.Data + (longlong)iVar19 * 0x10;
  for (; FVar25.Data != pFVar22; FVar25.Data = FVar25.Data + 0x10) {
    if (*(int *)(FVar25.Data + 8) == 0) {
      pwVar27 = L"";
      iVar19 = 0;
    }
    else {
      pwVar27 = *(wchar_t **)FVar25.Data;
      iVar19 = *(int *)(FVar25.Data + 8) + -1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar27);
    TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
    EmplaceByHash<FString_const_&>
              ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *)
               &local_130,(EInPlace)local_88,0,(FString *)(ulonglong)uVar9);
  }
  ::FString::FString(&local_100,L"One");
  if (local_130.NumElements != 0) {
    iVar19 = local_100.Data.ArrayNum + -1;
    FVar25.Data = local_100.Data.AllocatorInstance.Data;
    if (local_100.Data.ArrayNum == 0) {
      iVar19 = 0;
      FVar25.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,(wchar_t *)FVar25.Data);
    TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
    RemoveImpl<FString,1>
              ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *)
               &local_130,uVar9,&local_100);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if ((local_140 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar25.Data = local_148.Data;
  if (*(void **)(local_148.Data + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(local_148.Data + 0x10));
  }
  if (local_140 + -2 != 0) {
    memmove(FVar25.Data + 0x10,FVar25.Data + 0x20,(longlong)(local_140 + -2) << 4);
  }
  local_140 = local_140 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&local_148,local_140,&local_13c);
  iVar19 = local_130.NumElements;
  if ((local_130.NumElements < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= InitialNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x66,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = local_140;
  pFVar22 = local_148.Data + (longlong)local_140 * 0x10;
  FVar25.Data = local_148.Data;
  while( true ) {
    if (local_140 != iVar10) {
      local_138 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_138)
      ;
    }
    if (FVar25.Data == pFVar22) break;
    if (((iVar23 < 0) || (local_130.NumElements <= iVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidId(Id)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x265,L"Array index out of bounds: %d into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = *(int *)(FVar25.Data + 8);
    pFVar26 = (FString *)((longlong)local_130.Elements + (longlong)iVar23 * 0x10);
    iVar4 = (pFVar26->Data).ArrayNum;
    if (iVar12 == iVar4) {
      if (1 < iVar12) {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar25.Data,
                            (wchar_t *)(pFVar26->Data).AllocatorInstance.Data);
        bVar8 = iVar12 == 0;
        goto LAB_141b67f94;
      }
    }
    else {
      bVar8 = iVar4 + iVar12 == 1;
LAB_141b67f94:
      if (!bVar8) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar5 = pFVar13->CurrentTest;
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Condition failed");
        (*pcVar6)(pFVar5,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((local_130.NumElements < iVar19) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SetNum >= InitialNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x78,
                           L"Sets/Maps should never have elements removed during iteration outside of Iterator.RemoveCurrent(). InitialNum %d CurrentNum %d"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar23 = iVar23 + 1;
    FVar25.Data = FVar25.Data + 0x10;
  }
  if ((local_130.NumElements < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex >= 0 && ElementIndex < this->NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5d5,L"Invalid ElementIndex passed to UE_TCOMPACT_SET::RemoveByIndex"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = *(int *)((longlong)local_130.Elements + 8) + -1;
  if (*(int *)((longlong)local_130.Elements + 8) == 0) {
    pwVar27 = L"";
    iVar19 = 0;
  }
  else {
    pwVar27 = *(wchar_t **)local_130.Elements;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar27);
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
  RemoveByIndexAndHash<1>
            ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *)
             &local_130,0,uVar9);
  if ((local_140 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar25.Data = local_148.Data;
  if (*(void **)local_148.Data != (void *)0x0) {
    FMemory::Free(*(void **)local_148.Data);
  }
  if (local_140 + -1 != 0) {
    memmove(FVar25.Data,FVar25.Data + 0x10,(longlong)(local_140 + -1) << 4);
  }
  local_140 = local_140 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&local_148,local_140,&local_13c);
  iVar19 = local_130.NumElements;
  iVar23 = 0;
  if ((local_130.NumElements < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= InitialNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x66,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = local_140;
  pFVar22 = local_148.Data + (longlong)local_140 * 0x10;
  FVar25.Data = local_148.Data;
  do {
    if (local_140 != iVar10) {
      local_137[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_137);
    }
    if (FVar25.Data == pFVar22) {
      DestructItems<FString,int>((FString *)local_130.Elements,local_130.NumElements);
      iVar19 = local_130.MaxElements;
      local_130._8_8_ = (ulonglong)(uint)local_130.MaxElements << 0x20;
      if (iVar19 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_130,0,0,1,8);
        local_130._8_8_ = local_130._8_8_ & 0xffffffff;
      }
      if (local_130.Elements != (ForElementType<unsigned_char>)0x0) {
        FMemory::Free((void *)local_130.Elements);
      }
      DestructItems<FString,int>((FString *)local_148.Data,local_140);
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      return;
    }
    if (((iVar23 < 0) || (local_130.NumElements <= iVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidId(Id)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x265,L"Array index out of bounds: %d into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = *(int *)(FVar25.Data + 8);
    pFVar26 = (FString *)((longlong)local_130.Elements + (longlong)iVar23 * 0x10);
    iVar4 = (pFVar26->Data).ArrayNum;
    if (iVar12 == iVar4) {
      if (1 < iVar12) {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar25.Data,
                            (wchar_t *)(pFVar26->Data).AllocatorInstance.Data);
        bVar8 = iVar12 == 0;
        goto LAB_141b681f4;
      }
    }
    else {
      bVar8 = iVar4 + iVar12 == 1;
LAB_141b681f4:
      if (!bVar8) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar5 = pFVar13->CurrentTest;
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Condition failed");
        (*pcVar6)(pFVar5,&local_98);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((local_130.NumElements < iVar19) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SetNum >= InitialNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x78,
                           L"Sets/Maps should never have elements removed during iteration outside of Iterator.RemoveCurrent(). InitialNum %d CurrentNum %d"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar23 = iVar23 + 1;
    FVar25.Data = FVar25.Data + 0x10;
  } while( true );
}

