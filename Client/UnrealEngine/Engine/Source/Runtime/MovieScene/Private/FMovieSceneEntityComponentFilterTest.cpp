// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 1462520a0

EAutomationTestFlags __thiscall
FMovieSceneEntityComponentFilterTest::GetTestFlags(FMovieSceneEntityComponentFilterTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1462520b0

bool __thiscall
FMovieSceneEntityComponentFilterTest::IsStressTest(FMovieSceneEntityComponentFilterTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1462520c0

uint __thiscall
FMovieSceneEntityComponentFilterTest::GetRequiredDeviceNum
          (FMovieSceneEntityComponentFilterTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1462520d0

FString * __thiscall
FMovieSceneEntityComponentFilterTest::GetTestSourceFileName
          (FMovieSceneEntityComponentFilterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146252100

int __thiscall
FMovieSceneEntityComponentFilterTest::GetTestSourceFileLine
          (FMovieSceneEntityComponentFilterTest *this)

{
  return 0x15;
}

// GetTests @ 146252110

/* WARNING: Removing unreachable block (ram,0x0001462521fd) */
/* WARNING: Removing unreachable block (ram,0x0001462522c8) */

void __thiscall
FMovieSceneEntityComponentFilterTest::GetTests
          (FMovieSceneEntityComponentFilterTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.EntitySystem.EntityComponentFilter");
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

// RunTest @ 1462522f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneEntityComponentFilterTest::RunTest
          (FMovieSceneEntityComponentFilterTest *this,FString *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ForAnyElementType FVar6;
  TBitArray<TFixedAllocator<12>_> *this_00;
  ushort *puVar7;
  int iVar8;
  undefined1 auStack_728 [32];
  <lambda_1> local_708;
  <lambda_1> local_707 [3];
  ushort local_704 [18];
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  ushort local_600 [4];
  TBitArray<TFixedAllocator<12>_> local_5f8;
  TBitArray<TFixedAllocator<12>_> local_5c0;
  TBitArray<TFixedAllocator<12>_> local_588;
  TBitArray<TFixedAllocator<12>_> local_550;
  TBitArray<TFixedAllocator<12>_> local_518;
  TBitArray<TFixedAllocator<12>_> local_4e0;
  TBitArray<TFixedAllocator<12>_> local_4a8;
  TBitArray<TFixedAllocator<12>_> local_470;
  TBitArray<TFixedAllocator<12>_> local_438;
  TBitArray<TFixedAllocator<12>_> local_400;
  TBitArray<TFixedAllocator<12>_> local_3c8;
  TBitArray<TFixedAllocator<12>_> local_390;
  TBitArray<TFixedAllocator<12>_> local_358;
  TBitArray<TFixedAllocator<12>_> local_320;
  FComponentMask local_2e8;
  FComponentMask local_2b0;
  FComponentMask local_278 [2];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_1d0;
  undefined4 local_1cc;
  void *local_1c8;
  undefined8 local_1c0;
  FEntityComponentFilter local_1b8;
  FEntityComponentFilter local_138;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_728;
  local_204 = 0x180;
  local_1cc = 0x180;
  local_1c8 = (void *)0x0;
  local_5c0.NumBits = 0;
  puVar7 = local_704;
  local_1c0 = 0;
  local_1b8.AllMask.Bits.NumBits = 0;
  local_1b8.AllMask.Bits.MaxBits = 0x180;
  local_1b8.NoneMask.Bits.NumBits = 0;
  local_1b8.NoneMask.Bits.MaxBits = 0x180;
  local_1b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ComplexMasks.ArrayNum = 0;
  local_1b8.ComplexMasks.ArrayMax = 0;
  local_138.AllMask.Bits.NumBits = 0;
  local_138.AllMask.Bits.MaxBits = 0x180;
  local_138.NoneMask.Bits.NumBits = 0;
  local_138.NoneMask.Bits.MaxBits = 0x180;
  local_138.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ComplexMasks.ArrayNum = 0;
  local_138.ComplexMasks.ArrayMax = 0;
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_208 = 0;
  local_1d0 = 0;
  local_704[0] = 0;
  local_704[1] = 2;
  local_5c0.MaxBits = 0x180;
  do {
    uVar2 = *puVar7;
    iVar8 = ((uint)uVar2 - local_5c0.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_5c0,false,iVar8);
    }
    if ((local_5c0.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar1 = local_5c0.AllocatorInstance.InlineData + (uVar2 >> 5);
    puVar7 = puVar7 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  } while (puVar7 != local_704 + 2);
  UE::Core::Private::
  BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&local_5c0,(TBitArray<TFixedAllocator<12>_> *)&local_1b8,MaxSize,&local_708);
  local_704[2] = 0;
  local_704[3] = 2;
  local_588.NumBits = 0;
  puVar7 = local_704 + 2;
  local_588.MaxBits = 0x180;
  do {
    uVar2 = *puVar7;
    iVar8 = ((uint)uVar2 - local_588.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_588,false,iVar8);
    }
    if ((local_588.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar1 = local_588.AllocatorInstance.InlineData + (uVar2 >> 5);
    puVar7 = puVar7 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  } while (puVar7 != local_704 + 4);
  UE::Core::Private::
  BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&local_588,&local_138.NoneMask.Bits,MaxSize,local_707);
  local_704[4] = 0;
  local_704[5] = 2;
  local_5f8.NumBits = 0;
  puVar7 = local_704 + 4;
  local_5f8.MaxBits = 0x180;
  do {
    uVar2 = *puVar7;
    iVar8 = ((uint)uVar2 - local_5f8.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_5f8,false,iVar8);
    }
    if ((local_5f8.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar1 = local_5f8.AllocatorInstance.InlineData + (uVar2 >> 5);
    puVar7 = puVar7 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  } while (puVar7 != local_704 + 6);
  if (0 < local_5f8.NumBits) {
    iVar8 = local_b8.ComplexMasks.ArrayNum;
    if (local_b8.ComplexMasks.ArrayNum == local_b8.ComplexMasks.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&local_b8.ComplexMasks.AllocatorInstance,
                         &local_b8.ComplexMasks.ArrayMax);
    }
    local_b8.ComplexMasks.ArrayNum = iVar8 + 1;
    this_00 = (TBitArray<TFixedAllocator<12>_> *)
              (local_b8.ComplexMasks.AllocatorInstance.Data + (longlong)iVar8 * 0x3c);
    this_00->NumBits = 0;
    this_00->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this_00,&local_5f8);
    this_00[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  local_704[6] = 0;
  local_704[7] = 2;
  local_550.NumBits = 0;
  puVar7 = local_704 + 6;
  local_550.MaxBits = 0x180;
  do {
    uVar2 = *puVar7;
    iVar8 = ((uint)uVar2 - local_550.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_550,false,iVar8);
    }
    if ((local_550.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pTVar1 = local_550.AllocatorInstance.InlineData + (uVar2 >> 5);
    puVar7 = puVar7 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  } while (puVar7 != local_704 + 8);
  bVar4 = UE::MovieScene::FEntityComponentFilter::Match(&local_1b8,(FComponentMask *)&local_550);
  ::FString::FString(&local_6d0,"Filter 1.1");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_6d0.Data.ArrayNum != 0) {
    FVar6.Data = local_6d0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
  if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_600[0] = 0;
    local_600[1] = 2;
    local_600[2] = 3;
    local_518.NumBits = 0;
    puVar7 = local_600;
    local_518.MaxBits = 0x180;
    do {
      uVar2 = *puVar7;
      iVar8 = ((uint)uVar2 - local_518.NumBits) + 1;
      if (0 < iVar8) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_518,false,iVar8);
      }
      if ((local_518.NumBits <= (int)(uint)uVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pTVar1 = local_518.AllocatorInstance.InlineData + (uVar2 >> 5);
      puVar7 = puVar7 + 1;
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
    } while (puVar7 != local_600 + 3);
    bVar4 = UE::MovieScene::FEntityComponentFilter::Match(&local_1b8,(FComponentMask *)&local_518);
    ::FString::FString(&local_6c0,"Filter 1.2");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_6c0.Data.ArrayNum != 0) {
      FVar6.Data = local_6c0.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
    if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      local_4e0.NumBits = 0;
      local_4e0.MaxBits = 0x180;
      TBitArray<TFixedAllocator<12>_>::Add(&local_4e0,false,1);
      if ((local_4e0.NumBits < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_4e0.AllocatorInstance.InlineData[0].Pad =
           local_4e0.AllocatorInstance.InlineData[0].Pad | 1;
      bVar4 = UE::MovieScene::FEntityComponentFilter::Match(&local_1b8,(FComponentMask *)&local_4e0)
      ;
      ::FString::FString(&local_6b0,"Filter 1.3");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_6b0.Data.ArrayNum != 0) {
        FVar6.Data = local_6b0.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestFalse
                        ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        local_2e8.Bits.NumBits = 0;
        local_2e8.Bits.MaxBits = 0x180;
        bVar4 = UE::MovieScene::FEntityComponentFilter::Match(&local_1b8,&local_2e8);
        ::FString::FString(&local_6a0,"Filter 1.4");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_6a0.Data.ArrayNum != 0) {
          FVar6.Data = local_6a0.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestFalse
                          ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
        if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          local_2b0.Bits.NumBits = 0;
          local_2b0.Bits.MaxBits = 0x180;
          bVar4 = UE::MovieScene::FEntityComponentFilter::Match(&local_138,&local_2b0);
          ::FString::FString(&local_690,"Filter 2.1");
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_690.Data.ArrayNum != 0) {
            FVar6.Data = local_690.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
          if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_690.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            local_4a8.NumBits = 0;
            local_4a8.MaxBits = 0x180;
            TBitArray<TFixedAllocator<12>_>::Add(&local_4a8,false,2);
            if ((local_4a8.NumBits < 2) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_4a8.AllocatorInstance.InlineData[0].Pad =
                 local_4a8.AllocatorInstance.InlineData[0].Pad | 2;
            bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                              (&local_138,(FComponentMask *)&local_4a8);
            ::FString::FString(&local_680,"Filter 2.2");
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_680.Data.ArrayNum != 0) {
              FVar6.Data = local_680.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
            if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_680.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              local_704[8] = 1;
              local_704[9] = 3;
              local_470.NumBits = 0;
              puVar7 = local_704 + 8;
              local_470.MaxBits = 0x180;
              do {
                uVar2 = *puVar7;
                iVar8 = ((uint)uVar2 - local_470.NumBits) + 1;
                if (0 < iVar8) {
                  TBitArray<TFixedAllocator<12>_>::Add(&local_470,false,iVar8);
                }
                if ((local_470.NumBits <= (int)(uint)uVar2) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                pTVar1 = local_470.AllocatorInstance.InlineData + (uVar2 >> 5);
                puVar7 = puVar7 + 1;
                *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
              } while (puVar7 != local_704 + 10);
              bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                (&local_138,(FComponentMask *)&local_470);
              ::FString::FString(&local_670,"Filter 2.3");
              FVar6.Data = (FScriptContainerElement *)L"";
              if (local_670.Data.ArrayNum != 0) {
                FVar6.Data = local_670.Data.AllocatorInstance.Data;
              }
              bVar4 = FAutomationTestBase::TestTrue
                                ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
              if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_670.Data.AllocatorInstance.Data);
              }
              if (bVar4) {
                local_438.NumBits = 0;
                local_438.MaxBits = 0x180;
                TBitArray<TFixedAllocator<12>_>::Add(&local_438,false,1);
                if ((local_438.NumBits < 1) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                local_438.AllocatorInstance.InlineData[0].Pad =
                     local_438.AllocatorInstance.InlineData[0].Pad | 1;
                bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                  (&local_138,(FComponentMask *)&local_438);
                ::FString::FString(&local_660,"Filter 2.4");
                FVar6.Data = (FScriptContainerElement *)L"";
                if (local_660.Data.ArrayNum != 0) {
                  FVar6.Data = local_660.Data.AllocatorInstance.Data;
                }
                bVar4 = FAutomationTestBase::TestFalse
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
                if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_660.Data.AllocatorInstance.Data);
                }
                if (bVar4) {
                  local_704[10] = 2;
                  local_704[0xb] = 3;
                  local_400.NumBits = 0;
                  puVar7 = local_704 + 10;
                  local_400.MaxBits = 0x180;
                  do {
                    uVar2 = *puVar7;
                    iVar8 = ((uint)uVar2 - local_400.NumBits) + 1;
                    if (0 < iVar8) {
                      TBitArray<TFixedAllocator<12>_>::Add(&local_400,false,iVar8);
                    }
                    if ((local_400.NumBits <= (int)(uint)uVar2) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5be,L""), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      uVar5 = (*pcVar3)();
                      return (bool)uVar5;
                    }
                    pTVar1 = local_400.AllocatorInstance.InlineData + (uVar2 >> 5);
                    puVar7 = puVar7 + 1;
                    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
                  } while (puVar7 != local_704 + 0xc);
                  bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                    (&local_138,(FComponentMask *)&local_400);
                  ::FString::FString(&local_650,"Filter 2.5");
                  FVar6.Data = (FScriptContainerElement *)L"";
                  if (local_650.Data.ArrayNum != 0) {
                    FVar6.Data = local_650.Data.AllocatorInstance.Data;
                  }
                  bVar4 = FAutomationTestBase::TestFalse
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
                  if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_650.Data.AllocatorInstance.Data);
                  }
                  if (bVar4) {
                    local_278[0].Bits.NumBits = 0;
                    local_278[0].Bits.MaxBits = 0x180;
                    bVar4 = UE::MovieScene::FEntityComponentFilter::Match(&local_b8,local_278);
                    ::FString::FString(&local_640,"Filter 3.1");
                    FVar6.Data = (FScriptContainerElement *)L"";
                    if (local_640.Data.ArrayNum != 0) {
                      FVar6.Data = local_640.Data.AllocatorInstance.Data;
                    }
                    bVar4 = FAutomationTestBase::TestFalse
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
                    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_640.Data.AllocatorInstance.Data);
                    }
                    if (bVar4) {
                      local_3c8.NumBits = 0;
                      local_3c8.MaxBits = 0x180;
                      TBitArray<TFixedAllocator<12>_>::Add(&local_3c8,false,2);
                      if ((local_3c8.NumBits < 2) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Index>=0 && Index<NumBits",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                             ,0x5be,L""), bVar4)) {
                        pcVar3 = (code *)swi(3);
                        uVar5 = (*pcVar3)();
                        return (bool)uVar5;
                      }
                      local_3c8.AllocatorInstance.InlineData[0].Pad =
                           local_3c8.AllocatorInstance.InlineData[0].Pad | 2;
                      bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                        (&local_b8,(FComponentMask *)&local_3c8);
                      ::FString::FString(&local_630,"Filter 3.2");
                      FVar6.Data = (FScriptContainerElement *)L"";
                      if (local_630.Data.ArrayNum != 0) {
                        FVar6.Data = local_630.Data.AllocatorInstance.Data;
                      }
                      bVar4 = FAutomationTestBase::TestFalse
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
                      if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_630.Data.AllocatorInstance.Data);
                      }
                      if (bVar4) {
                        local_704[0xc] = 1;
                        local_704[0xd] = 3;
                        local_390.NumBits = 0;
                        puVar7 = local_704 + 0xc;
                        local_390.MaxBits = 0x180;
                        do {
                          uVar2 = *puVar7;
                          iVar8 = ((uint)uVar2 - local_390.NumBits) + 1;
                          if (0 < iVar8) {
                            TBitArray<TFixedAllocator<12>_>::Add(&local_390,false,iVar8);
                          }
                          if ((local_390.NumBits <= (int)(uint)uVar2) &&
                             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Index>=0 && Index<NumBits",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                 ,0x5be,L""), bVar4)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          pTVar1 = local_390.AllocatorInstance.InlineData + (uVar2 >> 5);
                          puVar7 = puVar7 + 1;
                          *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
                        } while (puVar7 != local_704 + 0xe);
                        bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                          (&local_b8,(FComponentMask *)&local_390);
                        ::FString::FString(&local_620,"Filter 3.3");
                        FVar6.Data = (FScriptContainerElement *)L"";
                        if (local_620.Data.ArrayNum != 0) {
                          FVar6.Data = local_620.Data.AllocatorInstance.Data;
                        }
                        bVar4 = FAutomationTestBase::TestFalse
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
                        if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_620.Data.AllocatorInstance.Data);
                        }
                        if (bVar4) {
                          local_358.NumBits = 0;
                          local_358.MaxBits = 0x180;
                          TBitArray<TFixedAllocator<12>_>::Add(&local_358,false,1);
                          if ((local_358.NumBits < 1) &&
                             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Index>=0 && Index<NumBits",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                 ,0x5be,L""), bVar4)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          local_358.AllocatorInstance.InlineData[0].Pad =
                               local_358.AllocatorInstance.InlineData[0].Pad | 1;
                          bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                            (&local_b8,(FComponentMask *)&local_358);
                          ::FString::FString(&local_610,"Filter 3.4");
                          FVar6.Data = (FScriptContainerElement *)L"";
                          if (local_610.Data.ArrayNum != 0) {
                            FVar6.Data = local_610.Data.AllocatorInstance.Data;
                          }
                          bVar4 = FAutomationTestBase::TestTrue
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4
                                            );
                          if (local_610.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_610.Data.AllocatorInstance.Data);
                          }
                          if (bVar4) {
                            local_704[0xe] = 2;
                            local_704[0xf] = 3;
                            puVar7 = local_704 + 0xe;
                            local_320.NumBits = 0;
                            local_320.MaxBits = 0x180;
                            do {
                              uVar2 = *puVar7;
                              iVar8 = ((uint)uVar2 - local_320.NumBits) + 1;
                              if (0 < iVar8) {
                                TBitArray<TFixedAllocator<12>_>::Add(&local_320,false,iVar8);
                              }
                              if ((local_320.NumBits <= (int)(uint)uVar2) &&
                                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("Index>=0 && Index<NumBits",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x5be,L""), bVar4)) {
                                pcVar3 = (code *)swi(3);
                                uVar5 = (*pcVar3)();
                                return (bool)uVar5;
                              }
                              pTVar1 = local_320.AllocatorInstance.InlineData + (uVar2 >> 5);
                              puVar7 = puVar7 + 1;
                              *(uint *)pTVar1->Pad =
                                   *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
                            } while (puVar7 != local_704 + 0x10);
                            bVar4 = UE::MovieScene::FEntityComponentFilter::Match
                                              (&local_b8,(FComponentMask *)&local_320);
                            ::FString::FString(&local_6e0,"Filter 3.5");
                            FVar6.Data = (FScriptContainerElement *)L"";
                            if (local_6e0.Data.ArrayNum != 0) {
                              FVar6.Data = local_6e0.Data.AllocatorInstance.Data;
                            }
                            bVar4 = FAutomationTestBase::TestTrue
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
                                               bVar4);
                            if (local_6e0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
                            }
                            if (bVar4) {
                              bVar4 = true;
                              goto LAB_1462530df;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_1462530df:
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_138.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_1b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 146253160

FString * __thiscall
FMovieSceneEntityComponentFilterTest::GetBeautifiedTestName
          (FMovieSceneEntityComponentFilterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.EntitySystem.EntityComponentFilter");
  return __return_storage_ptr__;
}

