// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// ArrayViewsEqual<unsigned_int,unsigned_int_const_> @ 141adfae0

bool __cdecl
FRingBufferTest::ArrayViewsEqual<unsigned_int,unsigned_int_const_>
          (TArrayView<unsigned_int,int> *param_1,TArrayView<unsigned_int_const_,int> *param_2)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_2->ArrayNum) {
    uVar7 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        puVar2 = param_1->DataPtr;
        uVar6 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (puVar2[lVar8] != param_2->DataPtr[lVar8]) goto LAB_141adfbcf;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar1);
    }
    bVar4 = true;
  }
  else {
LAB_141adfbcf:
    bVar4 = false;
  }
  return bVar4;
}

// TestShiftIndex<unsigned_int> @ 141b08aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRingBufferTest::TestShiftIndex<unsigned_int>(FRingBufferTest *this)

{
  ulonglong uVar1;
  undefined4 uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar8;
  FAutomationTestFramework *pFVar9;
  uint uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_678 [32];
  uint local_658;
  int local_650;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_648;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_630;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_618;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_600;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_5e8;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_5d0;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_5b8;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_5a0;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_4f8;
  initializer_list<unsigned_int> local_4d8;
  FString local_4c8;
  initializer_list<unsigned_int> local_4b8;
  FString local_4a8;
  initializer_list<unsigned_int> local_498;
  initializer_list<unsigned_int> local_488;
  FString local_478;
  initializer_list<unsigned_int> local_468;
  FString local_458;
  initializer_list<unsigned_int> local_448;
  FString local_438;
  initializer_list<unsigned_int> local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  initializer_list<unsigned_int> local_388;
  initializer_list<unsigned_int> local_378;
  initializer_list<unsigned_int> local_368;
  FString local_358;
  initializer_list<unsigned_int> local_348;
  FString local_338;
  initializer_list<unsigned_int> local_328;
  initializer_list<unsigned_int> local_318;
  FString local_308;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_2f8;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_2e0;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_2c8;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_2b0;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_298;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_280;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_268;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> local_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  uint local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  uint local_1fc;
  uint local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  uint local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  uint local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138 [26];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_678;
  local_388._First = &local_1f8;
  local_1f0 = 2;
  local_388._Last = (uint *)&local_1d8;
  local_1ec = 3;
  uVar18 = 0;
  local_1f8 = 0;
  local_1f4 = 1;
  local_1e8 = 4;
  local_1e4 = 5;
  local_1e0 = 6;
  local_1dc = 7;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_4f8,&local_388);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_4f8,5);
  local_368._First = (uint *)&local_1d8;
  local_1d8 = 5;
  local_368._Last = (uint *)&local_1b8;
  local_1d0 = 1;
  local_1cc = 2;
  local_1c8 = 3;
  local_1c4 = 4;
  local_1c0 = 6;
  local_1bc = 7;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2f8,&local_368);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_4f8);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2f8);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_358,L"ShiftIndexToFront");
    (*pcVar4)(pFVar3,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_4f8,3);
  local_348._First = (uint *)&local_1b8;
  local_1b8 = 5;
  local_348._Last = &local_198;
  local_1b0 = 1;
  local_1ac = 3;
  local_1a8 = 4;
  local_1a4 = 6;
  local_1a0 = 7;
  local_19c = 2;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2e0,&local_348);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_4f8);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2e0);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_338,L"ShiftIndexToBack");
    (*pcVar4)(pFVar3,&local_338,0);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_4f8);
  local_328._First = &local_198;
  local_198 = 0;
  local_328._Last = &local_178;
  local_194 = 1;
  local_190 = 2;
  local_18c = 3;
  local_188 = 4;
  local_184 = 5;
  local_180 = 6;
  local_17c = 7;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_5e8,&local_328);
  local_5e8.Front = local_5e8.Front + 4;
  local_5e8.AfterBack = local_5e8.AfterBack + 4;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_5e8,5);
  local_318._First = &local_178;
  local_178 = 1;
  local_318._Last = &local_158;
  local_174 = 4;
  local_170 = 5;
  local_16c = 6;
  local_168 = 7;
  local_160 = 2;
  local_15c = 3;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2c8,&local_318);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_5e8);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2c8);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_308,L"ShiftIndexToFront With Offset");
    (*pcVar4)(pFVar3,&local_308,0);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_5e8,3);
  local_4d8._First = &local_158;
  local_158 = 1;
  local_4d8._Last = local_138;
  local_154 = 4;
  local_150 = 5;
  local_14c = 7;
  local_144 = 2;
  local_140 = 3;
  local_13c = 6;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2b0,&local_4d8);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_5e8);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_2b0);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4c8,L"ShiftIndexToBack With Offset");
    (*pcVar4)(pFVar3,&local_4c8,0);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_5e8);
  local_4b8._First = local_138 + 0x10;
  local_138[0x10] = 0;
  local_4b8._Last = local_138 + 0x19;
  local_138[0x11] = 1;
  local_138[0x12] = 2;
  local_138[0x13] = 3;
  local_138[0x14] = 4;
  local_138[0x15] = 5;
  local_138[0x16] = 6;
  local_138[0x17] = 7;
  local_138[0x18] = 8;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_5a0,&local_4b8);
  if (local_5a0.IndexMask != 0xf) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_4a8,L"ShiftIndexToFront Cap - Capacity");
    (*pcVar4)(pFVar3,&local_4a8,0);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_5a0,5);
  local_498._First = (uint *)&local_d0;
  local_d0 = 5;
  local_498._Last = &local_ac;
  local_c8 = 1;
  local_c4 = 2;
  local_c0 = 3;
  local_bc = 4;
  local_b8 = 6;
  local_b4 = 7;
  local_b0 = 8;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_298,&local_498);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_5a0);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_298);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_408,L"ShiftIndexToFront Cap");
    (*pcVar4)(pFVar3,&local_408,0);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_5a0,3);
  local_488._First = (uint *)&local_a8;
  local_a8 = 5;
  local_488._Last = &local_84;
  local_a0 = 1;
  local_9c = 3;
  local_98 = 4;
  local_94 = 6;
  local_90 = 7;
  local_8c = 8;
  local_88 = 2;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_280,&local_488);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_5a0);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_280);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_478,L"ShiftIndexToBack Cap");
    (*pcVar4)(pFVar3,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_5a0);
  local_630.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_630.IndexMask = 0xffffffff;
  for (lVar5 = 0x3f; 0x1fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  local_630.Front = 0;
  local_630.AfterBack = 0;
  uVar13 = 1 << ((byte)lVar5 & 0x1f);
  local_588 = (undefined4)lVar5;
  if (((int)uVar13 < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - local_630.Front) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 7;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 6;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 5;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 4;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 3;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 2;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 1;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_630,(local_630.AfterBack - uVar13) + 1);
  if (local_630.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_630,uVar13);
  }
  uVar13 = local_630.Front - 1;
  local_630.Front = uVar13;
  *(undefined4 *)(local_630.AllocatorInstance.Data + (ulonglong)(local_630.IndexMask & uVar13) * 4)
       = 0;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Pop(&local_630,1);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_630,5);
  local_468._First = (uint *)&local_238;
  local_238 = 5;
  local_468._Last = &local_21c;
  local_230 = 1;
  local_22c = 2;
  local_228 = 3;
  local_224 = 4;
  local_220 = 6;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_268,&local_468);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_630);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_268);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_458,L"ShiftIndexToFront Cap With Offset");
    (*pcVar4)(pFVar3,&local_458,0);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_630,3);
  local_448._First = (uint *)&local_218;
  local_218 = 5;
  local_448._Last = &local_1fc;
  local_210 = 1;
  local_20c = 3;
  local_208 = 4;
  local_204 = 6;
  local_200 = 2;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_250,&local_448);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_630);
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_250);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_438,L"ShiftIndexToBack Cap With Offset");
    (*pcVar4)(pFVar3,&local_438,0);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_630);
  for (lVar5 = 0x3f; 0x1fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_584 = (undefined4)lVar5;
  uVar13 = 1 << ((byte)lVar5 & 0x1f);
  local_648.IndexMask = 0xffffffff;
  local_648.Front = 0;
  local_648.AfterBack = 0;
  if (((int)uVar13 < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - local_648.Front) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 7;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 6;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 5;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 4;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 3;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 2;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 1;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.Front - 1;
  local_648.Front = uVar13;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(local_648.IndexMask & uVar13) * 4)
       = 0;
  uVar13 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                     (&local_648,(local_648.AfterBack - uVar13) + 1);
  if (local_648.IndexMask + 1 < uVar13) {
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,uVar13);
  }
  uVar13 = local_648.AfterBack;
  local_648.AfterBack = local_648.AfterBack + 1;
  *(undefined4 *)(local_648.AllocatorInstance.Data + (ulonglong)(uVar13 & local_648.IndexMask) * 4)
       = 8;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_648,8);
  local_428._First = (uint *)&local_80;
  local_80 = 8;
  local_428._Last = &local_5c;
  local_78 = 1;
  local_74 = 2;
  local_70 = 3;
  local_6c = 4;
  local_68 = 5;
  local_64 = 6;
  local_60 = 7;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_5d0,&local_428);
  bVar6 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_648);
  if ((local_5d0.IndexMask + 1 < local_5d0.AfterBack - local_5d0.Front) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x37f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  for (lVar5 = 0x3f; 1UL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  local_5d0.Front = 0;
  local_5d0.AfterBack = 0;
  local_580 = (undefined4)lVar5;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_5d0,0);
  if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.AllocatorInstance.Data);
  }
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_418,L"ShiftIndexToFront Cap With Wrapped");
    (*pcVar4)(pFVar3,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_648,0);
  local_378._First = &local_58;
  local_58 = 0;
  local_378._Last = &local_34;
  local_54 = 1;
  local_50 = 2;
  local_4c = 3;
  local_48 = 4;
  local_44 = 5;
  local_40 = 6;
  local_3c = 7;
  local_38 = 8;
  pTVar8 = TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::
           TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(&local_5b8,&local_378);
  uVar13 = pTVar8->Front;
  iVar16 = pTVar8->AfterBack - uVar13;
  if (local_648.AfterBack - local_648.Front == iVar16) {
    if (0 < iVar16) {
      uVar14 = uVar13;
      do {
        if (*(int *)((pTVar8->AllocatorInstance).Data + (ulonglong)(uVar14 & pTVar8->IndexMask) * 4)
            != *(int *)(local_648.AllocatorInstance.Data +
                       (ulonglong)((local_648.Front - uVar13) + uVar14 & local_648.IndexMask) * 4))
        goto LAB_141b09bd9;
        uVar14 = uVar14 + 1;
      } while ((int)(uVar14 - uVar13) < iVar16);
    }
    bVar6 = false;
  }
  else {
LAB_141b09bd9:
    bVar6 = true;
  }
  if ((local_5b8.IndexMask + 1 < local_5b8.AfterBack - local_5b8.Front) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x37f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  for (lVar5 = 0x3f; 1UL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  local_5b8.Front = 0;
  local_5b8.AfterBack = 0;
  local_57c = (undefined4)lVar5;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_5b8,0);
  if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.AllocatorInstance.Data);
  }
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_3f8,L"ShiftIndexToBack Cap With Wrapped");
    (*pcVar4)(pFVar3,&local_3f8,0);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_648.IndexMask + 1 < local_648.AfterBack - local_648.Front) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x37f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  for (lVar5 = 0x3f; 1UL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  local_648.Front = 0;
  local_648.AfterBack = 0;
  local_578 = (undefined4)lVar5;
  TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_648,0);
  uVar13 = uVar18;
  if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.AllocatorInstance.Data);
  }
  while( true ) {
    for (lVar5 = 0x3f; 0xfUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
    local_138[0] = 0;
    local_574 = (undefined4)lVar5;
    uVar14 = 1 << ((byte)lVar5 & 0x1f);
    local_138[1] = 1;
    local_138[2] = 2;
    local_138[3] = 3;
    local_138[4] = 4;
    local_138[5] = 5;
    local_138[6] = 6;
    local_138[7] = 7;
    local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_618.IndexMask = 0xffffffff;
    local_618.Front = 0;
    local_618.AfterBack = 0;
    if (((int)uVar14 < 8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_618.IndexMask + 1 < uVar14) {
      TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_618,uVar14);
    }
    puVar15 = local_138;
    do {
      uVar10 = (local_618.AfterBack - local_618.Front) + 1;
      uVar14 = 1;
      if (uVar10 != 0) {
        uVar14 = uVar10;
      }
      uVar1 = (ulonglong)(uVar14 - 1) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_570 = (undefined4)lVar5;
      uVar14 = (uint)(uVar10 != 0) << ((byte)lVar5 & 0x1f);
      if ((0x7fffffff < uVar14 || uVar14 < uVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_618.IndexMask + 1 < uVar14) {
        TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_618,uVar14);
      }
      uVar14 = local_618.AfterBack + 1;
      uVar10 = *puVar15;
      puVar15 = puVar15 + 1;
      *(uint *)(local_618.AllocatorInstance.Data +
               (ulonglong)(local_618.AfterBack & local_618.IndexMask) * 4) = uVar10;
      local_618.AfterBack = uVar14;
    } while (puVar15 != local_138 + 8);
    iVar16 = uVar14 - local_618.Front;
    if ((iVar16 <= (int)uVar13) &&
       (local_658 = uVar13, local_650 = iVar16,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < Num())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
       , bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar13 != iVar16 - 1U) {
      uVar2 = *(undefined4 *)
               (local_618.AllocatorInstance.Data +
               (ulonglong)(local_618.IndexMask & local_618.Front + uVar13) * 4);
      uVar14 = local_618.Front + uVar13;
      while (uVar14 != local_618.AfterBack - 1) {
        *(undefined4 *)
         (local_618.AllocatorInstance.Data + (ulonglong)(uVar14 & local_618.IndexMask) * 4) =
             *(undefined4 *)
              (local_618.AllocatorInstance.Data + (ulonglong)(uVar14 + 1 & local_618.IndexMask) * 4)
        ;
        uVar14 = uVar14 + 1;
      }
      *(undefined4 *)
       (local_618.AllocatorInstance.Data +
       (ulonglong)(local_618.IndexMask & local_618.AfterBack - 1) * 4) = uVar2;
    }
    uVar10 = 0;
    uVar14 = uVar18;
    if (uVar13 == 0) goto LAB_141b0a060;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (int)(local_618.AfterBack - local_618.Front)) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_658 = uVar14, local_650 = local_618.AfterBack - local_618.Front,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar14 != *(uint *)(local_618.AllocatorInstance.Data +
                             (ulonglong)(local_618.Front + uVar14 & local_618.IndexMask) * 4)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar3 = pFVar9->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_558,L"ShiftIndexToBack Entire Array Values (%d,%d)");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_558.Data.ArrayNum != 0) {
          FVar12.Data = local_558.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_3e8,(wchar_t *)FVar12.Data);
        (*pcVar4)(pFVar3,&local_3e8,0);
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_558.Data.AllocatorInstance.Data);
        }
      }
      uVar14 = uVar14 + 1;
      iVar16 = local_650;
    } while ((int)uVar14 < (int)uVar13);
    while (local_650 = iVar16, (int)uVar14 < 7) {
LAB_141b0a060:
      uVar11 = uVar10;
      if ((int)uVar14 < (int)(local_618.AfterBack - local_618.Front)) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_658 = uVar14, local_650 = local_618.AfterBack - local_618.Front,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = uVar14 + 1;
      uVar11 = local_618.Front + uVar14;
      uVar14 = uVar17;
      iVar16 = local_650;
      if (uVar17 != *(uint *)(local_618.AllocatorInstance.Data +
                             (ulonglong)(uVar11 & local_618.IndexMask) * 4)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar3 = pFVar9->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_548,L"ShiftIndexToBack Entire Array Values (%d,%d)");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_548.Data.ArrayNum != 0) {
          FVar12.Data = local_548.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_3d8,(wchar_t *)FVar12.Data);
        (*pcVar4)(pFVar3,&local_3d8,0);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        iVar16 = local_650;
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
          iVar16 = local_650;
        }
      }
    }
    local_650 = local_618.AfterBack - local_618.Front;
    if (local_650 < 8) {
      local_658 = 7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
      iVar16 = local_650;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_650 = iVar16;
    if (uVar13 != *(uint *)(local_618.AllocatorInstance.Data +
                           (ulonglong)(local_618.Front + 7 & local_618.IndexMask) * 4)) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar3 = pFVar9->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_538,L"ShiftIndexToBack Entire Array Values (%d,%d)");
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_538.Data.ArrayNum != 0) {
        FVar12.Data = local_538.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_3c8,(wchar_t *)FVar12.Data);
      (*pcVar4)(pFVar3,&local_3c8,0);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.Data.AllocatorInstance.Data);
      }
    }
    if ((local_618.IndexMask + 1 < local_618.AfterBack - local_618.Front) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x37f,L""), bVar6)) break;
    for (lVar5 = 0x3f; 1UL >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
    local_618.Front = 0;
    local_618.AfterBack = 0;
    local_56c = (undefined4)lVar5;
    TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_618,0);
    if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.AllocatorInstance.Data);
    }
    uVar13 = uVar13 + 1;
    if (7 < (int)uVar13) {
      do {
        for (lVar5 = 0x3f; 0xfU >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
        local_138[8] = 0;
        local_568 = (undefined4)lVar5;
        uVar13 = 1 << ((byte)lVar5 & 0x1f);
        local_138[9] = 1;
        local_138[10] = 2;
        local_138[0xb] = 3;
        local_138[0xc] = 4;
        local_138[0xd] = 5;
        local_138[0xe] = 6;
        local_138[0xf] = 7;
        local_600.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_600.IndexMask = 0xffffffff;
        local_600.Front = 0;
        local_600.AfterBack = 0;
        if (((int)uVar13 < 8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                               ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_600.IndexMask + 1 < uVar13) {
          TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_600,uVar13);
        }
        puVar15 = local_138 + 8;
        do {
          uVar14 = (local_600.AfterBack - local_600.Front) + 1;
          uVar13 = 1;
          if (uVar14 != 0) {
            uVar13 = uVar14;
          }
          uVar1 = (ulonglong)(uVar13 - 1) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_564 = (undefined4)lVar5;
          uVar13 = (uint)(uVar14 != 0) << ((byte)lVar5 & 0x1f);
          if ((0x7fffffff < uVar13 || uVar13 < uVar14) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                 ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_600.IndexMask + 1 < uVar13) {
            TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_600,uVar13);
          }
          uVar13 = local_600.AfterBack + 1;
          uVar14 = *puVar15;
          puVar15 = puVar15 + 1;
          *(uint *)(local_600.AllocatorInstance.Data +
                   (ulonglong)(local_600.AfterBack & local_600.IndexMask) * 4) = uVar14;
          local_600.AfterBack = uVar13;
        } while (puVar15 != local_138 + 0x10);
        if (((int)(uVar13 - local_600.Front) <= (int)uVar18) &&
           (local_658 = uVar18, local_650 = uVar13 - local_600.Front,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < Num())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x3e3,
                              L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar18 != 0) {
          uVar2 = *(undefined4 *)
                   (local_600.AllocatorInstance.Data +
                   (ulonglong)(local_600.Front + uVar18 & local_600.IndexMask) * 4);
          uVar13 = local_600.Front + uVar18;
          while (uVar13 != local_600.Front) {
            *(undefined4 *)
             (local_600.AllocatorInstance.Data + (ulonglong)(uVar13 & local_600.IndexMask) * 4) =
                 *(undefined4 *)
                  (local_600.AllocatorInstance.Data +
                  (ulonglong)(uVar13 - 1 & local_600.IndexMask) * 4);
            uVar13 = uVar13 - 1;
          }
          *(undefined4 *)
           (local_600.AllocatorInstance.Data +
           (ulonglong)(local_600.Front & local_600.IndexMask) * 4) = uVar2;
        }
        if ((int)(local_600.AfterBack - local_600.Front) < 1) {
          local_658 = 0;
          local_650 = local_600.AfterBack - local_600.Front;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3e3,
                             L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar18 != *(uint *)(local_600.AllocatorInstance.Data +
                               (ulonglong)(local_600.Front & local_600.IndexMask) * 4)) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar3 = pFVar9->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_528,L"ShiftIndexToFront Entire Array Values (%d,%d)");
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_528.Data.ArrayNum != 0) {
            FVar12.Data = local_528.Data.AllocatorInstance.Data;
          }
          ::FString::FString(&local_3b8,(wchar_t *)FVar12.Data);
          (*pcVar4)(pFVar3,&local_3b8,0);
          if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
          }
          if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_528.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = 1;
        if (uVar18 == 0) goto LAB_141b0a650;
        do {
          uVar14 = uVar10;
          if ((int)uVar13 < (int)(local_600.AfterBack - local_600.Front)) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_658 = uVar13, local_650 = local_600.AfterBack - local_600.Front,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3e3,
                                L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar13 - 1 !=
              *(int *)(local_600.AllocatorInstance.Data +
                      (ulonglong)(local_600.Front + uVar13 & local_600.IndexMask) * 4)) {
            pFVar9 = FAutomationTestFramework::Get();
            pFVar3 = pFVar9->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_518,L"ShiftIndexToFront Entire Array Values (%d,%d)");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_518.Data.ArrayNum != 0) {
              FVar12.Data = local_518.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_3a8,(wchar_t *)FVar12.Data);
            (*pcVar4)(pFVar3,&local_3a8,0);
            if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
            }
            if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_518.Data.AllocatorInstance.Data);
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 <= (int)uVar18);
        for (; (int)uVar13 < 8; uVar13 = uVar13 + 1) {
LAB_141b0a650:
          uVar14 = uVar10;
          if ((int)uVar13 < (int)(local_600.AfterBack - local_600.Front)) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_658 = uVar13, local_650 = local_600.AfterBack - local_600.Front,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3e3,
                                L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar13 != *(uint *)(local_600.AllocatorInstance.Data +
                                 (ulonglong)(local_600.Front + uVar13 & local_600.IndexMask) * 4)) {
            pFVar9 = FAutomationTestFramework::Get();
            pFVar3 = pFVar9->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_508,L"ShiftIndexToFront Entire Array Values (%d,%d)");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_508.Data.ArrayNum != 0) {
              FVar12.Data = local_508.Data.AllocatorInstance.Data;
            }
            ::FString::FString(&local_398,(wchar_t *)FVar12.Data);
            (*pcVar4)(pFVar3,&local_398,0);
            if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.Data.AllocatorInstance.Data);
            }
            if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_508.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((local_600.IndexMask + 1 < local_600.AfterBack - local_600.Front) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                               ,0x37f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        for (lVar5 = 0x3f; 1UL >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
        local_600.Front = 0;
        local_600.AfterBack = 0;
        local_560 = (undefined4)lVar5;
        TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_>::Reallocate(&local_600,0);
        if (local_600.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_600.AllocatorInstance.Data);
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < 8);
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// TestShiftIndex<FRingBufferTest::Counter> @ 141b0a7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRingBufferTest::TestShiftIndex<FRingBufferTest::Counter>(FRingBufferTest *this)

{
  Counter CVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  longlong lVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *pTVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int iVar18;
  Counter *pCVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_6b8 [32];
  uint local_698;
  int local_690;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_688;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_670;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_658;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_640;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_628;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_610;
  Counter local_5f8;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_5f0;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_5d8;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_5c0;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_5a8;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_590;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_578;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_560;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_548;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_530;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_518;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> local_500;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  FString local_418;
  initializer_list<FRingBufferTest::Counter> local_408;
  FString local_3f8;
  initializer_list<FRingBufferTest::Counter> local_3e8;
  FString local_3d8;
  initializer_list<FRingBufferTest::Counter> local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  initializer_list<FRingBufferTest::Counter> local_348;
  initializer_list<FRingBufferTest::Counter> local_338;
  FString local_328;
  initializer_list<FRingBufferTest::Counter> local_318;
  FString local_308;
  initializer_list<FRingBufferTest::Counter> local_2f8;
  initializer_list<FRingBufferTest::Counter> local_2e8;
  FString local_2d8;
  initializer_list<FRingBufferTest::Counter> local_2c8;
  FString local_2b8;
  initializer_list<FRingBufferTest::Counter> local_2a8;
  FString local_298;
  initializer_list<FRingBufferTest::Counter> local_288;
  FString local_278;
  initializer_list<FRingBufferTest::Counter> local_268;
  FString local_258;
  initializer_list<FRingBufferTest::Counter> local_248;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  Counter local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  Counter local_1fc;
  Counter local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  Counter local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  Counter local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  Counter local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  Counter local_138 [26];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  Counter local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  Counter local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  Counter local_5c;
  Counter local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Counter local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  Counter::NumVoid = Counter::NumVoid + 8;
  local_348._First = &local_1f8;
  local_348._Last = (Counter *)&local_1d8;
  local_1f0 = 2;
  uVar20 = 0;
  local_1f8.Value = 0;
  local_1f4 = 1;
  local_1ec = 3;
  local_1e8 = 4;
  local_1e4 = 5;
  local_1e0 = 6;
  local_1dc = 7;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_5f0,&local_348);
  Counter::NumDestruct = Counter::NumDestruct + 8;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_5f0,5)
  ;
  Counter::NumVoid = Counter::NumVoid + 8;
  local_338._First = (Counter *)&local_1d8;
  local_338._Last = (Counter *)&local_1b8;
  local_1d8 = 5;
  local_1d0 = 1;
  local_1cc = 2;
  local_1c8 = 3;
  local_1c4 = 4;
  local_1c0 = 6;
  local_1bc = 7;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_5a8,&local_338);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_5f0);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_5a8,local_5a8.Front,local_5a8.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_5a8.Front = 0;
  local_5a8.AfterBack = 0;
  local_460 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_5a8,0);
  if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 8;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_328,L"ShiftIndexToFront");
    (*pcVar3)(pFVar2,&local_328,0);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_5f0,3);
  Counter::NumVoid = Counter::NumVoid + 8;
  local_318._First = (Counter *)&local_1b8;
  local_318._Last = &local_198;
  local_1b8 = 5;
  local_1b0 = 1;
  local_1ac = 3;
  local_1a8 = 4;
  local_1a4 = 6;
  local_1a0 = 7;
  local_19c = 2;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_590,&local_318);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_5f0);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_590,local_590.Front,local_590.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_590.Front = 0;
  local_590.AfterBack = 0;
  local_45c = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_590,0);
  if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 8;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_308,L"ShiftIndexToBack");
    (*pcVar3)(pFVar2,&local_308,0);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_5f0,local_5f0.Front,local_5f0.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_5f0.Front = 0;
  local_5f0.AfterBack = 0;
  local_458 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_5f0,0);
  if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.AllocatorInstance.Data);
  }
  Counter::NumVoid = Counter::NumVoid + 8;
  local_2f8._First = &local_198;
  local_2f8._Last = &local_178;
  local_198.Value = 0;
  local_194 = 1;
  local_190 = 2;
  local_18c = 3;
  local_188 = 4;
  local_184 = 5;
  local_180 = 6;
  local_17c = 7;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_628,&local_2f8);
  Counter::NumDestruct = Counter::NumDestruct + 8;
  local_628.AfterBack = local_628.AfterBack + 4;
  local_628.Front = local_628.Front + 4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_628,5)
  ;
  Counter::NumVoid = Counter::NumVoid + 8;
  local_2e8._First = &local_178;
  local_2e8._Last = &local_158;
  local_178.Value = 1;
  local_174 = 4;
  local_170 = 5;
  local_16c = 6;
  local_168 = 7;
  local_160 = 2;
  local_15c = 3;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_5c0,&local_2e8);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_628);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_5c0,local_5c0.Front,local_5c0.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_5c0.Front = 0;
  local_5c0.AfterBack = 0;
  local_454 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_5c0,0);
  if (local_5c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 8;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2d8,L"ShiftIndexToFront With Offset");
    (*pcVar3)(pFVar2,&local_2d8,0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_628,3);
  Counter::NumVoid = Counter::NumVoid + 8;
  local_2c8._First = &local_158;
  local_2c8._Last = local_138;
  local_158.Value = 1;
  local_154 = 4;
  local_150 = 5;
  local_14c = 7;
  local_144 = 2;
  local_140 = 3;
  local_13c = 6;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_578,&local_2c8);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_628);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_578,local_578.Front,local_578.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_578.Front = 0;
  local_578.AfterBack = 0;
  local_450 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_578,0);
  if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 8;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2b8,L"ShiftIndexToBack With Offset");
    (*pcVar3)(pFVar2,&local_2b8,0);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_628,local_628.Front,local_628.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_628.Front = 0;
  local_628.AfterBack = 0;
  local_4cc = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_628,0);
  if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.AllocatorInstance.Data);
  }
  Counter::NumVoid = Counter::NumVoid + 9;
  local_2a8._First = local_138 + 0x10;
  local_2a8._Last = local_138 + 0x19;
  local_138[0x10].Value = 0;
  local_138[0x11].Value = 1;
  local_138[0x12].Value = 2;
  local_138[0x13].Value = 3;
  local_138[0x14].Value = 4;
  local_138[0x15].Value = 5;
  local_138[0x16].Value = 6;
  local_138[0x17].Value = 7;
  local_138[0x18].Value = 8;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_610,&local_2a8);
  Counter::NumDestruct = Counter::NumDestruct + 9;
  if (local_610.IndexMask != 0xf) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_298,L"ShiftIndexToFront Cap - Capacity");
    (*pcVar3)(pFVar2,&local_298,0);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToFront(&local_610,5)
  ;
  Counter::NumVoid = Counter::NumVoid + 9;
  local_288._First = (Counter *)&local_d0;
  local_288._Last = &local_ac;
  local_d0 = 5;
  local_c8 = 1;
  local_c4 = 2;
  local_c0 = 3;
  local_bc = 4;
  local_b8 = 6;
  local_b4 = 7;
  local_b0 = 8;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_560,&local_288);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_610);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_560,local_560.Front,local_560.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_560.Front = 0;
  local_560.AfterBack = 0;
  local_44c = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_560,0);
  if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 9;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_278,L"ShiftIndexToFront Cap");
    (*pcVar3)(pFVar2,&local_278,0);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_610,3);
  Counter::NumVoid = Counter::NumVoid + 9;
  local_268._First = (Counter *)&local_a8;
  local_268._Last = &local_84;
  local_a8 = 5;
  local_a0 = 1;
  local_9c = 3;
  local_98 = 4;
  local_94 = 6;
  local_90 = 7;
  local_8c = 8;
  local_88 = 2;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_548,&local_268);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_610);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_548,local_548.Front,local_548.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_548.Front = 0;
  local_548.AfterBack = 0;
  local_448 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_548,0);
  if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 9;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_258,L"ShiftIndexToBack Cap");
    (*pcVar3)(pFVar2,&local_258,0);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_610,local_610.Front,local_610.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_610.Front = 0;
  local_610.AfterBack = 0;
  local_444 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_610,0);
  if (local_610.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.AllocatorInstance.Data);
  }
  local_640.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_640.IndexMask = 0xffffffff;
  for (lVar4 = 0x3f; 0x1fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_640.Front = 0;
  local_640.AfterBack = 0;
  uVar17 = 1 << ((byte)lVar4 & 0x1f);
  local_440 = (undefined4)lVar4;
  if (((int)uVar17 < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_640.IndexMask + 1 < uVar17) {
    TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_640,uVar17)
    ;
  }
  iVar18 = 7;
  do {
    Counter::NumVoid = Counter::NumVoid + 1;
    uVar15 = (local_640.AfterBack - local_640.Front) + 1;
    uVar17 = 1;
    if (uVar15 != 0) {
      uVar17 = uVar15;
    }
    uVar12 = (ulonglong)(uVar17 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_43c = (undefined4)lVar4;
    uVar17 = (uint)(uVar15 != 0) << ((byte)lVar4 & 0x1f);
    if ((0x7fffffff < uVar17 || uVar17 < uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_640.IndexMask + 1 < uVar17) {
      TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
                (&local_640,uVar17);
    }
    local_640.Front = local_640.Front - 1;
    *(int *)(local_640.AllocatorInstance.Data +
            (ulonglong)(local_640.IndexMask & local_640.Front) * 4) = iVar18;
    Counter::NumMove = Counter::NumMove + 1;
    Counter::NumDestruct = Counter::NumDestruct + 1;
    iVar18 = iVar18 + -1;
  } while (-1 < iVar18);
  if (local_640.AfterBack - local_640.Front == 0) {
    local_698 = 1;
    local_690 = local_640.AfterBack - local_640.Front;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PopCount <= static_cast<SizeType>(Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3ec,L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
    ;
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_640,local_640.AfterBack - 1,local_640.AfterBack);
  local_640.AfterBack = local_640.AfterBack - 1;
  iVar18 = local_640.AfterBack - local_640.Front;
  uVar17 = local_640.Front;
  if (iVar18 < 6) {
    local_698 = 5;
    local_690 = iVar18;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = local_640.Front;
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftLastToFirst
            (&local_640,uVar17,uVar17 + 5,-1);
  Counter::NumVoid = Counter::NumVoid + 7;
  local_248._First = (Counter *)&local_238;
  local_248._Last = &local_21c;
  local_238 = 5;
  local_230 = 1;
  local_22c = 2;
  local_228 = 3;
  local_224 = 4;
  local_220 = 6;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_530,&local_248);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_640);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_530,local_530.Front,local_530.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_530.Front = 0;
  local_530.AfterBack = 0;
  local_434 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_530,0);
  if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 7;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_418,L"ShiftIndexToFront Cap With Offset");
    (*pcVar3)(pFVar2,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_640,3);
  Counter::NumVoid = Counter::NumVoid + 7;
  local_408._First = (Counter *)&local_218;
  local_408._Last = &local_1fc;
  local_218 = 5;
  local_210 = 1;
  local_20c = 3;
  local_208 = 4;
  local_204 = 6;
  local_200 = 2;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_518,&local_408);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_640);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_518,local_518.Front,local_518.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_518.Front = 0;
  local_518.AfterBack = 0;
  local_430 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_518,0);
  if (local_518.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 7;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3f8,L"ShiftIndexToBack Cap With Offset");
    (*pcVar3)(pFVar2,&local_3f8,0);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_640,local_640.Front,local_640.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_640.Front = 0;
  local_640.AfterBack = 0;
  local_42c = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_640,0);
  if (local_640.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.AllocatorInstance.Data);
  }
  for (lVar4 = 0x3f; 0x1fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428 = (undefined4)lVar4;
  uVar17 = 1 << ((byte)lVar4 & 0x1f);
  local_658.IndexMask = 0xffffffff;
  local_658.Front = 0;
  local_658.AfterBack = 0;
  if (((int)uVar17 < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_658.IndexMask + 1 < uVar17) {
    TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_658,uVar17)
    ;
  }
  iVar18 = 7;
  do {
    Counter::NumVoid = Counter::NumVoid + 1;
    uVar15 = (local_658.AfterBack - local_658.Front) + 1;
    uVar17 = 1;
    if (uVar15 != 0) {
      uVar17 = uVar15;
    }
    uVar12 = (ulonglong)(uVar17 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_424 = (undefined4)lVar4;
    uVar17 = (uint)(uVar15 != 0) << ((byte)lVar4 & 0x1f);
    if ((0x7fffffff < uVar17 || uVar17 < uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_658.IndexMask + 1 < uVar17) {
      TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
                (&local_658,uVar17);
    }
    local_658.Front = local_658.Front - 1;
    *(int *)(local_658.AllocatorInstance.Data +
            (ulonglong)(local_658.IndexMask & local_658.Front) * 4) = iVar18;
    Counter::NumMove = Counter::NumMove + 1;
    Counter::NumDestruct = Counter::NumDestruct + 1;
    iVar18 = iVar18 + -1;
  } while (-1 < iVar18);
  Counter::NumVoid = Counter::NumVoid + 1;
  uVar15 = (local_658.AfterBack - local_658.Front) + 1;
  uVar17 = 1;
  if (uVar15 != 0) {
    uVar17 = uVar15;
  }
  uVar12 = (ulonglong)(uVar17 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  local_420 = (undefined4)lVar4;
  uVar17 = (uint)(uVar15 != 0) << ((byte)lVar4 & 0x1f);
  if ((0x7fffffff < uVar17 || uVar17 < uVar15) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_658.IndexMask + 1 < uVar17) {
    TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_658,uVar17)
    ;
  }
  uVar17 = local_658.AfterBack + 1;
  *(undefined4 *)
   (local_658.AllocatorInstance.Data + (ulonglong)(local_658.AfterBack & local_658.IndexMask) * 4) =
       8;
  Counter::NumMove = Counter::NumMove + 1;
  Counter::NumDestruct = Counter::NumDestruct + 1;
  local_658.AfterBack = uVar17;
  if ((int)(uVar17 - local_658.Front) < 9) {
    local_698 = 8;
    local_690 = uVar17 - local_658.Front;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftLastToFirst
            (&local_658,local_658.Front,local_658.Front + 8,-1);
  Counter::NumVoid = Counter::NumVoid + 9;
  local_3e8._First = (Counter *)&local_80;
  local_3e8._Last = &local_5c;
  local_80 = 8;
  local_78 = 1;
  local_74 = 2;
  local_70 = 3;
  local_6c = 4;
  local_68 = 5;
  local_64 = 6;
  local_60 = 7;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_5d8,&local_3e8);
  FVar16.Data = local_5d8.AllocatorInstance.Data;
  uVar17 = pTVar8->Front;
  iVar18 = pTVar8->AfterBack - uVar17;
  if (local_658.AfterBack - local_658.Front == iVar18) {
    if (0 < iVar18) {
      uVar15 = uVar17;
      do {
        if (*(int *)((pTVar8->AllocatorInstance).Data + (ulonglong)(pTVar8->IndexMask & uVar15) * 4)
            != *(int *)(local_658.AllocatorInstance.Data +
                       (ulonglong)((local_658.Front - uVar17) + uVar15 & local_658.IndexMask) * 4))
        goto LAB_141b0b8aa;
        uVar15 = uVar15 + 1;
      } while ((int)(uVar15 - uVar17) < iVar18);
    }
    bVar6 = false;
  }
  else {
LAB_141b0b8aa:
    bVar6 = true;
  }
  uVar17 = local_5d8.AfterBack - local_5d8.Front;
  if (local_5d8.IndexMask + 1 < uVar17) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar17 != 0) {
    local_5d8.Front = local_5d8.IndexMask & local_5d8.Front;
    FVar13.Data = local_5d8.AllocatorInstance.Data + (ulonglong)local_5d8.Front * 4;
    if ((local_5d8.IndexMask & local_5d8.AfterBack) <= local_5d8.Front) {
      DestructItems<FRingBufferTest::Counter,unsigned_int>
                ((Counter *)FVar13.Data,(local_5d8.IndexMask + 1) - local_5d8.Front);
      FVar13.Data = FVar16.Data;
      uVar17 = local_5d8.IndexMask & local_5d8.AfterBack;
    }
    DestructItems<FRingBufferTest::Counter,unsigned_int>((Counter *)FVar13.Data,uVar17);
  }
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_5d8.Front = 0;
  local_5d8.AfterBack = 0;
  local_4e8 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_5d8,0);
  if (local_5d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 9;
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3d8,L"ShiftIndexToFront Cap With Wrapped");
    (*pcVar3)(pFVar2,&local_3d8,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::ShiftIndexToBack(&local_658,0);
  Counter::NumVoid = Counter::NumVoid + 9;
  local_3c8._First = &local_58;
  local_3c8._Last = &local_34;
  local_58.Value = 0;
  local_54 = 1;
  local_50 = 2;
  local_4c = 3;
  local_48 = 4;
  local_44 = 5;
  local_40 = 6;
  local_3c = 7;
  local_38 = 8;
  pTVar8 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
           TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>(&local_500,&local_3c8);
  bVar6 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::
          operator==<TSizedDefaultAllocator<32>_>(pTVar8,&local_658);
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_500,local_500.Front,local_500.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_500.Front = 0;
  local_500.AfterBack = 0;
  local_4e4 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_500,0);
  if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.AllocatorInstance.Data);
  }
  Counter::NumDestruct = Counter::NumDestruct + 9;
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3b8,L"ShiftIndexToBack Cap With Wrapped");
    (*pcVar3)(pFVar2,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (&local_658,local_658.Front,local_658.AfterBack);
  for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  local_658.Front = 0;
  local_658.AfterBack = 0;
  local_4e0 = (undefined4)lVar4;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_658,0);
  if (local_658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.AllocatorInstance.Data);
  }
  do {
    Counter::NumVoid = Counter::NumVoid + 8;
    for (lVar4 = 0x3f; 0xfUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    local_138[0].Value = 0;
    uVar17 = 1 << ((byte)lVar4 & 0x1f);
    local_4dc = (undefined4)lVar4;
    local_138[1].Value = 1;
    local_138[2].Value = 2;
    local_138[3].Value = 3;
    local_138[4].Value = 4;
    local_138[5].Value = 5;
    local_138[6].Value = 6;
    local_138[7].Value = 7;
    local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_688.IndexMask = 0xffffffff;
    local_688.Front = 0;
    local_688.AfterBack = 0;
    if (((int)uVar17 < 8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_688.IndexMask + 1 < uVar17) {
      TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
                (&local_688,uVar17);
    }
    pCVar19 = local_138;
    do {
      uVar15 = (local_688.AfterBack - local_688.Front) + 1;
      uVar17 = 1;
      if (uVar15 != 0) {
        uVar17 = uVar15;
      }
      uVar12 = (ulonglong)(uVar17 - 1) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_4d8 = (undefined4)lVar4;
      uVar17 = (uint)(uVar15 != 0) << ((byte)lVar4 & 0x1f);
      if ((0x7fffffff < uVar17 || uVar17 < uVar15) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_688.IndexMask + 1 < uVar17) {
        TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
                  (&local_688,uVar17);
      }
      uVar17 = local_688.AfterBack + 1;
      puVar5 = &pCVar19->Value;
      pCVar19 = pCVar19 + 1;
      *(uint *)(local_688.AllocatorInstance.Data +
               (ulonglong)(local_688.AfterBack & local_688.IndexMask) * 4) = *puVar5;
      Counter::NumCopy = Counter::NumCopy + 1;
      local_688.AfterBack = uVar17;
    } while (pCVar19 != local_138 + 8);
    iVar18 = uVar17 - local_688.Front;
    Counter::NumDestruct = Counter::NumDestruct + 8;
    if ((iVar18 <= (int)uVar20) &&
       (local_698 = uVar20, local_690 = iVar18,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < Num())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
       , bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar16.Data = local_688.AllocatorInstance.Data;
    if (uVar20 != iVar18 - 1U) {
      uVar12 = (ulonglong)local_688.IndexMask;
      uVar15 = local_688.Front + uVar20;
      uVar17 = local_688.AfterBack - 1;
      CVar1.Value = *(uint *)(local_688.AllocatorInstance.Data +
                             (ulonglong)(local_688.IndexMask & uVar15) * 4);
      Counter::NumMove = Counter::NumMove + 1;
      if (uVar15 != uVar17) {
        while( true ) {
          uVar10 = (ulonglong)uVar15;
          DestructItems<FRingBufferTest::Counter,int>
                    ((Counter *)(FVar16.Data + (uVar10 & uVar12) * 4),1);
          uVar15 = uVar15 + 1;
          *(uint *)(FVar16.Data + (uVar10 & uVar12) * 4) =
               *(uint *)(FVar16.Data + (uVar15 & uVar12) * 4);
          Counter::NumMove = Counter::NumMove + 1;
          if (uVar15 == uVar17) break;
          uVar12 = (ulonglong)local_688.IndexMask;
        }
        uVar12 = (ulonglong)local_688.IndexMask;
      }
      DestructItems<FRingBufferTest::Counter,int>
                ((Counter *)(FVar16.Data + (uVar12 & uVar17) * 4),1);
      *(uint *)(FVar16.Data + (uVar12 & uVar17) * 4) = CVar1.Value;
      Counter::NumMove = Counter::NumMove + 1;
      Counter::NumDestruct = Counter::NumDestruct + 1;
    }
    uVar17 = 0;
    if (uVar20 == 0) goto LAB_141b0bf00;
    do {
      uVar15 = 0;
      if ((int)uVar17 < (int)(local_688.AfterBack - local_688.Front)) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_698 = uVar17, local_690 = local_688.AfterBack - local_688.Front,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 != *(uint *)(local_688.AllocatorInstance.Data +
                             (ulonglong)(local_688.Front + uVar17 & local_688.IndexMask) * 4)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_4c0,L"ShiftIndexToBack Entire Array Values (%d,%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_4c0.Data.ArrayNum != 0) {
          FVar16.Data = local_4c0.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_3a8,(wchar_t *)FVar16.Data);
        (*pcVar3)(pFVar2,&local_3a8,0);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = uVar17 + 1;
      iVar18 = local_690;
    } while ((int)uVar17 < (int)uVar20);
    while (local_690 = iVar18, (int)uVar17 < 7) {
LAB_141b0bf00:
      uVar15 = 0;
      if ((int)uVar17 < (int)(local_688.AfterBack - local_688.Front)) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_698 = uVar17, local_690 = local_688.AfterBack - local_688.Front,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = uVar17 + 1;
      uVar15 = local_688.Front + uVar17;
      uVar17 = uVar21;
      iVar18 = local_690;
      if (uVar21 != *(uint *)(local_688.AllocatorInstance.Data +
                             (ulonglong)(uVar15 & local_688.IndexMask) * 4)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_4b0,L"ShiftIndexToBack Entire Array Values (%d,%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_4b0.Data.ArrayNum != 0) {
          FVar16.Data = local_4b0.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_398,(wchar_t *)FVar16.Data);
        (*pcVar3)(pFVar2,&local_398,0);
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        iVar18 = local_690;
        if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
          iVar18 = local_690;
        }
      }
    }
    local_690 = local_688.AfterBack - local_688.Front;
    if (local_690 < 8) {
      local_698 = 7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
      iVar18 = local_690;
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_690 = iVar18;
    if (uVar20 != *(uint *)(local_688.AllocatorInstance.Data +
                           (ulonglong)(local_688.Front + 7 & local_688.IndexMask) * 4)) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_4a0,L"ShiftIndexToBack Entire Array Values (%d,%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_4a0.Data.ArrayNum != 0) {
        FVar16.Data = local_4a0.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_388,(wchar_t *)FVar16.Data);
      (*pcVar3)(pFVar2,&local_388,0);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
    }
    FVar16.Data = local_688.AllocatorInstance.Data;
    uVar17 = local_688.AfterBack - local_688.Front;
    if (local_688.IndexMask + 1 < uVar17) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x37f,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (uVar17 != 0) {
      uVar15 = local_688.Front & local_688.IndexMask;
      uVar21 = local_688.AfterBack & local_688.IndexMask;
      FVar13.Data = local_688.AllocatorInstance.Data + (ulonglong)uVar15 * 4;
      if (uVar21 <= uVar15) {
        DestructItems<FRingBufferTest::Counter,unsigned_int>
                  ((Counter *)(local_688.AllocatorInstance.Data + (ulonglong)uVar15 * 4),
                   (local_688.IndexMask + 1) - uVar15);
        FVar13.Data = FVar16.Data;
        uVar17 = uVar21;
      }
      DestructItems<FRingBufferTest::Counter,unsigned_int>((Counter *)FVar13.Data,uVar17);
    }
    for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    local_688.Front = 0;
    local_688.AfterBack = 0;
    local_4d4 = (undefined4)lVar4;
    TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_688,0);
    if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.AllocatorInstance.Data);
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 8);
  uVar20 = 0;
  do {
    Counter::NumVoid = Counter::NumVoid + 8;
    for (lVar4 = 0x3f; 0xfUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    local_138[8].Value = 0;
    local_4d0 = (undefined4)lVar4;
    uVar17 = 1 << ((byte)lVar4 & 0x1f);
    local_138[9].Value = 1;
    local_138[10].Value = 2;
    local_138[0xb].Value = 3;
    local_138[0xc].Value = 4;
    local_138[0xd].Value = 5;
    local_138[0xe].Value = 6;
    local_138[0xf].Value = 7;
    local_670.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_670.IndexMask = 0xffffffff;
    local_670.Front = 0;
    local_670.AfterBack = 0;
    if (((int)uVar17 < 8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_670.IndexMask + 1 < uVar17) {
      TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
                (&local_670,uVar17);
    }
    pCVar19 = local_138 + 8;
    do {
      uVar15 = (local_670.AfterBack - local_670.Front) + 1;
      uVar17 = 1;
      if (uVar15 != 0) {
        uVar17 = uVar15;
      }
      uVar12 = (ulonglong)(uVar17 - 1) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_438 = (undefined4)lVar4;
      uVar17 = (uint)(uVar15 != 0) << ((byte)lVar4 & 0x1f);
      if ((0x7fffffff < uVar17 || uVar17 < uVar15) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x39f,L"Integer overflow in TRingBuffer capacity"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_670.IndexMask + 1 < uVar17) {
        TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate
                  (&local_670,uVar17);
      }
      uVar17 = local_670.AfterBack + 1;
      puVar5 = &pCVar19->Value;
      pCVar19 = pCVar19 + 1;
      *(uint *)(local_670.AllocatorInstance.Data +
               (ulonglong)(local_670.AfterBack & local_670.IndexMask) * 4) = *puVar5;
      Counter::NumCopy = Counter::NumCopy + 1;
      local_670.AfterBack = uVar17;
    } while (pCVar19 != local_138 + 0x10);
    Counter::NumDestruct = Counter::NumDestruct + 8;
    if (((int)(uVar17 - local_670.Front) <= (int)uVar20) &&
       (local_698 = uVar20, local_690 = uVar17 - local_670.Front,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < Num())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
       , bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = local_670.Front;
    FVar16.Data = local_670.AllocatorInstance.Data;
    if (uVar20 != 0) {
      uVar10 = (ulonglong)local_670.Front;
      uVar12 = (ulonglong)local_670.IndexMask;
      uVar15 = local_670.Front + uVar20;
      local_5f8.Value =
           *(uint *)(local_670.AllocatorInstance.Data +
                    (ulonglong)(uVar15 & local_670.IndexMask) * 4);
      Counter::NumMove = Counter::NumMove + 1;
      if (uVar15 != local_670.Front) {
        while( true ) {
          uVar11 = (ulonglong)uVar15;
          DestructItems<FRingBufferTest::Counter,int>
                    ((Counter *)(FVar16.Data + (uVar11 & uVar12) * 4),1);
          uVar15 = uVar15 - 1;
          *(uint *)(FVar16.Data + (uVar11 & uVar12) * 4) =
               *(uint *)(FVar16.Data + (uVar15 & uVar12) * 4);
          Counter::NumMove = Counter::NumMove + 1;
          if (uVar15 == uVar17) break;
          uVar12 = (ulonglong)local_670.IndexMask;
        }
        uVar12 = (ulonglong)local_670.IndexMask;
      }
      CVar1.Value = local_5f8.Value;
      DestructItems<FRingBufferTest::Counter,int>
                ((Counter *)(FVar16.Data + (uVar12 & uVar10) * 4),1);
      *(uint *)(FVar16.Data + (uVar12 & uVar10) * 4) = CVar1.Value;
      Counter::NumMove = Counter::NumMove + 1;
      Counter::NumDestruct = Counter::NumDestruct + 1;
    }
    if ((int)(local_670.AfterBack - local_670.Front) < 1) {
      local_698 = 0;
      local_690 = local_670.AfterBack - local_670.Front;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar20 != *(uint *)(local_670.AllocatorInstance.Data +
                           (ulonglong)(local_670.Front & local_670.IndexMask) * 4)) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_490,L"ShiftIndexToFront Entire Array Values (%d,%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_490.Data.ArrayNum != 0) {
        FVar16.Data = local_490.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_378,(wchar_t *)FVar16.Data);
      (*pcVar3)(pFVar2,&local_378,0);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data.AllocatorInstance.Data);
      }
    }
    uVar17 = 1;
    if (uVar20 == 0) goto LAB_141b0c600;
    do {
      uVar15 = 0;
      if ((int)uVar17 < (int)(local_670.AfterBack - local_670.Front)) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_698 = uVar17, local_690 = local_670.AfterBack - local_670.Front,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 - 1 !=
          *(int *)(local_670.AllocatorInstance.Data +
                  (ulonglong)(local_670.Front + uVar17 & local_670.IndexMask) * 4)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_480,L"ShiftIndexToFront Entire Array Values (%d,%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_480.Data.ArrayNum != 0) {
          FVar16.Data = local_480.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_368,(wchar_t *)FVar16.Data);
        (*pcVar3)(pFVar2,&local_368,0);
        if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.Data.AllocatorInstance.Data);
        }
        if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = uVar17 + 1;
      FVar16.Data = local_670.AllocatorInstance.Data;
    } while ((int)uVar17 <= (int)uVar20);
    for (; local_670.AllocatorInstance.Data = FVar16.Data, (int)uVar17 < 8; uVar17 = uVar17 + 1) {
LAB_141b0c600:
      uVar15 = 0;
      if ((int)uVar17 < (int)(local_670.AfterBack - local_670.Front)) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_698 = uVar17, local_690 = local_670.AfterBack - local_670.Front,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 != *(uint *)(local_670.AllocatorInstance.Data +
                             (ulonglong)(local_670.Front + uVar17 & local_670.IndexMask) * 4)) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_470,L"ShiftIndexToFront Entire Array Values (%d,%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_470.Data.ArrayNum != 0) {
          FVar16.Data = local_470.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_358,(wchar_t *)FVar16.Data);
        (*pcVar3)(pFVar2,&local_358,0);
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
      }
      FVar16.Data = local_670.AllocatorInstance.Data;
    }
    uVar17 = local_670.AfterBack - local_670.Front;
    if (local_670.IndexMask + 1 < uVar17) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x37f,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (uVar17 != 0) {
      uVar15 = local_670.Front & local_670.IndexMask;
      uVar21 = local_670.AfterBack & local_670.IndexMask;
      pFVar14 = FVar16.Data + (ulonglong)uVar15 * 4;
      if (uVar21 <= uVar15) {
        DestructItems<FRingBufferTest::Counter,unsigned_int>
                  ((Counter *)(FVar16.Data + (ulonglong)uVar15 * 4),
                   (local_670.IndexMask + 1) - uVar15);
        pFVar14 = FVar16.Data;
        uVar17 = uVar21;
      }
      DestructItems<FRingBufferTest::Counter,unsigned_int>((Counter *)pFVar14,uVar17);
    }
    for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    local_670.Front = 0;
    local_670.AfterBack = 0;
    local_4c8 = (undefined4)lVar4;
    TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::Reallocate(&local_670,0);
    if (local_670.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.AllocatorInstance.Data);
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 8);
  return;
}

// ~Counter @ 141b2ada0

void __thiscall FRingBufferTest::Counter::~Counter(Counter *this)

{
  NumDestruct = NumDestruct + 1;
  return;
}

// operator() @ 141b30580

void __thiscall
`FRingBufferTest::Test'::__l226::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2,
          TRingBuffer<int,TSizedDefaultAllocator<32>_> *param_3,
          TRingBuffer<int,TSizedDefaultAllocator<32>_> *param_4)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  bVar3 = TRingBuffer<int,TSizedDefaultAllocator<32>_>::operator==<TSizedDefaultAllocator<32>_>
                    (param_3,param_4);
  if (bVar3 != param_2) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_48,L"Test equality - %s - A == B");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,(wchar_t *)FVar5.Data);
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TRingBuffer<int,TSizedDefaultAllocator<32>_>::operator==<TSizedDefaultAllocator<32>_>
                    (param_4,param_3);
  if (bVar3 != param_2) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_48,L"Test equality - %s - B == A");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,(wchar_t *)FVar5.Data);
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TRingBuffer<int,TSizedDefaultAllocator<32>_>::operator==<TSizedDefaultAllocator<32>_>
                    (param_3,param_4);
  if (!bVar3 != !param_2) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_48,L"Test equality - %s - A != B");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,(wchar_t *)FVar5.Data);
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TRingBuffer<int,TSizedDefaultAllocator<32>_>::operator==<TSizedDefaultAllocator<32>_>
                    (param_4,param_3);
  if (!bVar3 != !param_2) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_48,L"Test equality - %s - B != A");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,(wchar_t *)FVar5.Data);
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 141b33210

FString * __thiscall
`FRingBufferTest::Test'::__l239::<lambda_3>::operator()
          (void *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Test %s (%s)");
  return __return_storage_ptr__;
}

// operator() @ 141b33810

FString * __thiscall
`FRingBufferTest::Test'::__l418::<lambda_4>::operator()
          (void *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Test AddIntoPop - %s (%s)");
  return __return_storage_ptr__;
}

// operator() @ 141b34ea0

void __thiscall
`FRingBufferTest::Test'::__l490::<lambda_6>::operator()
          (void *this,wchar_t *param_1,int param_2,int param_3,int param_4,int param_5)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  if ((((param_2 != FRingBufferTest::Counter::NumVoid) ||
       (param_3 != FRingBufferTest::Counter::NumCopy)) ||
      (param_4 != FRingBufferTest::Counter::NumMove)) ||
     (param_5 != FRingBufferTest::Counter::NumDestruct)) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,param_1);
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 141b35540

void __thiscall
`FRingBufferTest::Test'::__l494::<lambda_7>::operator()
          (void *this,wchar_t *param_1,int param_2,int param_3,int param_4,int param_5,bool param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *this_00;
  void *this_01;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  Counter *pCVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar7 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0x10) -
          *(int *)(*(longlong *)((longlong)this + 0x18) + 0xc);
  if (iVar7 != 1) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_78,L"Test Add Constructors - %s%s ElementExists");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,(wchar_t *)FVar6.Data);
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (((param_6) && (iVar7 == 1)) &&
     (pCVar5 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::operator[]
                         (*(TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> **)
                           ((longlong)this + 0x18),0),
     pCVar5->Value != *(uint *)((longlong)this + 0x28))) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_68,L"Test Add Constructors - %s%s ValueEquals");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,(wchar_t *)FVar6.Data);
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  this_00 = *(TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> **)
             ((longlong)this + 0x18);
  if ((this_00->AfterBack == this_00->Front) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PopCount <= static_cast<SizeType>(Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3ec,
                         L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::DestructRange
            (this_00,this_00->Front,this_00->Front + 1);
  this_00->Front = this_00->Front + 1;
  this_01 = *(void **)((longlong)this + 0x10);
  ::FString::PrintfImpl(&local_58,L"Test Add Constructors - %s%s CountsEqual");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  __l490::<lambda_6>::operator()(this_01,(wchar_t *)FVar6.Data,param_2,param_3,param_4,param_5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FRingBufferTest::Counter::NumDestruct = 0;
  FRingBufferTest::Counter::NumMove = 0;
  FRingBufferTest::Counter::NumCopy = 0;
  FRingBufferTest::Counter::NumVoid = 0;
  return;
}

// operator() @ 141b359e0

void __thiscall `FRingBufferTest::Test'::__l519::<lambda_8>::operator()(void *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)((longlong)this + 8);
  piVar1 = piVar2 + 4;
  if (piVar2 != piVar1) {
    iVar3 = 0x54321;
    do {
      *piVar2 = iVar3;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  FRingBufferTest::Counter::NumDestruct = 0;
  FRingBufferTest::Counter::NumMove = 0;
  FRingBufferTest::Counter::NumCopy = 0;
  FRingBufferTest::Counter::NumVoid = 0;
  return;
}

// operator() @ 141b35ad0

void __thiscall
`FRingBufferTest::Test'::__l519::<lambda_9>::operator()
          (void *this,wchar_t *param_1,
          TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<FRingBufferTest::Counter,int> *param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  int iVar1;
  uint uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FAutomationTestFramework *pFVar9;
  Counter *pCVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong lVar14;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((((param_4 != FRingBufferTest::Counter::NumVoid) ||
       (param_5 != FRingBufferTest::Counter::NumCopy)) ||
      (param_6 != FRingBufferTest::Counter::NumMove)) ||
     (param_7 != FRingBufferTest::Counter::NumDestruct)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"%s: Constructor/destructor callcounts do not match");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_68,(wchar_t *)FVar12.Data);
    (*pcVar4)(pFVar3,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_3->ArrayNum;
  iVar11 = iVar1 + 4;
  if (param_2->AfterBack - param_2->Front == iVar11) {
    uVar13 = 0;
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        if (lVar14 < iVar1) {
          uVar7 = 0;
          if ((int)uVar13 < (int)(param_2->AfterBack - param_2->Front)) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < Num())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                 ,0x3e3,
                                 L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
             , bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = param_2->Front;
          uVar2 = param_2->IndexMask;
          pFVar5 = (param_2->AllocatorInstance).Data;
          uVar8 = 0;
          if ((int)uVar13 < param_3->ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = *(uint *)(pFVar5 + (ulonglong)(uVar7 + uVar13 & uVar2) * 4) ==
                  param_3->DataPtr[lVar14].Value;
        }
        else {
          pCVar10 = TRingBuffer<FRingBufferTest::Counter,TSizedDefaultAllocator<32>_>::operator[]
                              (param_2,uVar13);
          bVar6 = pCVar10->Value == uVar13 + (0x54321 - iVar1);
        }
        if (!bVar6) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar3 = pFVar9->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_78,L"%s: Element does not match");
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar12.Data = local_78.Data.AllocatorInstance.Data;
          }
          ::FString::FString(&local_48,(wchar_t *)FVar12.Data);
          (*pcVar4)(pFVar3,&local_48,0);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          return;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar11);
    }
  }
  else {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: Length does not match");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar12.Data = local_88.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_58,(wchar_t *)FVar12.Data);
    (*pcVar4)(pFVar3,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// IsIntegerRange @ 141b46650

bool __cdecl
FRingBufferTest::IsIntegerRange
          (TRingBuffer<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,uint param_2,uint param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_1->AfterBack;
  uVar7 = param_1->Front;
  if (uVar5 - uVar7 == param_3 - param_2) {
    uVar4 = 0;
    if (0 < (int)(uVar5 - uVar7)) {
      do {
        iVar6 = uVar5 - uVar7;
        if (param_4) {
          uVar7 = 0;
          if ((int)uVar4 < iVar6) {
            uVar7 = ~uVar4 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < Num())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                 ,0x3e3,
                                 L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
             , bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar7 = param_1->Front;
          uVar5 = uVar7 + uVar4;
        }
        else {
          uVar5 = (iVar6 - uVar4) - 1;
          uVar7 = 0;
          if ((int)uVar5 < iVar6) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < Num())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                 ,0x3e3,
                                 L"RingBuffer index out of bounds: %i from a RingBuffer of size %i")
             , bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar7 = param_1->Front;
          uVar5 = uVar7 + uVar5;
        }
        if (*(int *)((param_1->AllocatorInstance).Data + (ulonglong)(uVar5 & param_1->IndexMask) * 4
                    ) != uVar4 + param_2) goto LAB_141b4676e;
        uVar5 = param_1->AfterBack;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)(uVar5 - uVar7));
    }
    bVar2 = true;
  }
  else {
LAB_141b4676e:
    bVar2 = false;
  }
  return bVar2;
}

