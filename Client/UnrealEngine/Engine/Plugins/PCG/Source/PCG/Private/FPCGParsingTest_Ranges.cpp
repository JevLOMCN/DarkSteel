// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetTestFlags @ 14a0099f0

EAutomationTestFlags __thiscall FPCGParsingTest_Ranges::GetTestFlags(FPCGParsingTest_Ranges *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a009a00

bool __thiscall FPCGParsingTest_Ranges::IsStressTest(FPCGParsingTest_Ranges *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a009a10

uint __thiscall FPCGParsingTest_Ranges::GetRequiredDeviceNum(FPCGParsingTest_Ranges *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a009a20

FString * __thiscall
FPCGParsingTest_Ranges::GetTestSourceFileName
          (FPCGParsingTest_Ranges *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Parsing\\PCGParsingTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a009a50

int __thiscall FPCGParsingTest_Ranges::GetTestSourceFileLine(FPCGParsingTest_Ranges *this)

{
  return 0x72;
}

// GetTests @ 14a009a60

/* WARNING: Removing unreachable block (ram,0x00014a009b4d) */
/* WARNING: Removing unreachable block (ram,0x00014a009c18) */

void __thiscall
FPCGParsingTest_Ranges::GetTests
          (FPCGParsingTest_Ranges *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Parsing.Ranges");
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

// RunTest @ 14a009c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPCGParsingTest_Ranges::RunTest(FPCGParsingTest_Ranges *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  longlong lVar11;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_4b8 [32];
  FString local_498;
  TStringView<wchar_t> local_488;
  FPCGParsingTest_Ranges *local_478;
  FPCGIndexCollection *local_470;
  FPCGIndexCollection local_468;
  FPCGIndexCollection local_248;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  uVar15 = 0;
  local_248.ArraySize = 0x200;
  local_470 = &local_248;
  local_248.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_248.IndexRanges.ArrayNum = 0;
  local_248.IndexRanges.ArrayMax = 0x40;
  local_478 = this;
  ::FString::FString(&local_498,"0:1");
  local_488.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
  local_468.ArraySize = 0x200;
  local_468.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_468.IndexRanges.ArrayNum = 0;
  local_468.IndexRanges.ArrayMax = 0x40;
  local_488.Size = local_498.Data.ArrayNum + -1;
  if (local_498.Data.ArrayNum == 0) {
    local_488.Size = 0;
  }
  PCGParser::ParseIndexRanges(&local_468,&local_488);
  lVar16 = 4;
  local_248.ArraySize = local_468.ArraySize;
  if (local_468.IndexRanges.AllocatorInstance.SecondaryData ==
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    lVar11 = 4;
    pTVar9 = &local_248.IndexRanges;
    pTVar10 = &local_468.IndexRanges;
    do {
      uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8);
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10);
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18);
      *(undefined8 *)(pTVar9->AllocatorInstance).InlineData =
           *(undefined8 *)(pTVar10->AllocatorInstance).InlineData;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 8) = uVar1;
      uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28);
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x10) = uVar2;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x18) = uVar3;
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30);
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38);
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x20) = uVar1;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x28) = uVar4;
      uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48);
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x30) = uVar2;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x38) = uVar3;
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50);
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58);
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x40) = uVar1;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x48) = uVar4;
      uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60);
      uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68);
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x50) = uVar2;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x58) = uVar3;
      uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70);
      uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78);
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x60) = uVar1;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x68) = uVar4;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x70) = uVar2;
      *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x78) = uVar3;
      lVar11 = lVar11 + -1;
      pTVar9 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                *)((pTVar9->AllocatorInstance).InlineData + 0x80);
      pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                 *)((pTVar10->AllocatorInstance).InlineData + 0x80);
    } while (lVar11 != 0);
  }
  FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
  if (local_248.IndexRanges.AllocatorInstance.SecondaryData !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FMemory::Free((void *)local_248.IndexRanges.AllocatorInstance.SecondaryData);
    FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
  }
  local_248.IndexRanges.ArrayNum = local_468.IndexRanges.ArrayNum;
  local_248.IndexRanges.ArrayMax = local_468.IndexRanges.ArrayMax;
  local_468.IndexRanges.ArrayMax = 0x40;
  local_468.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_468.IndexRanges.ArrayNum = 0;
  local_248.IndexRanges.AllocatorInstance.SecondaryData = FVar12;
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  iVar6 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_248);
  ::FString::FString(&local_498,"Sequential single index results in a single range");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_498.Data.ArrayNum != 0) {
    FVar13.Data = local_498.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar6,1)
  ;
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    iVar6 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_248);
    ::FString::FString(&local_498,"Sequential single index results in a single index");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_498.Data.ArrayNum != 0) {
      FVar13.Data = local_498.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar6,1);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    uVar14 = uVar15;
    if (bVar5) {
      do {
        bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_248,uVar14);
        if ((uVar14 == 0) != bVar5) {
          bVar5 = false;
          goto LAB_14a009ede;
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < 0x200);
      bVar5 = true;
LAB_14a009ede:
      ::FString::FString(&local_498,"Included indices verified");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_498.Data.ArrayNum != 0) {
        FVar13.Data = local_498.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar5);
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        ::FString::FString(&local_498,"0:10");
        local_488.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
        local_468.ArraySize = 0x200;
        local_468.IndexRanges.AllocatorInstance.SecondaryData =
             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
        local_468.IndexRanges.ArrayNum = 0;
        local_468.IndexRanges.ArrayMax = 0x40;
        iVar6 = 0;
        local_488.Size = local_498.Data.ArrayNum + -1;
        if (local_498.Data.ArrayNum == 0) {
          local_488.Size = iVar6;
        }
        PCGParser::ParseIndexRanges(&local_468,&local_488);
        local_248.ArraySize = local_468.ArraySize;
        if (local_468.IndexRanges.AllocatorInstance.SecondaryData ==
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          lVar11 = 4;
          pTVar9 = &local_248.IndexRanges;
          pTVar10 = &local_468.IndexRanges;
          do {
            uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8);
            uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10);
            uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18);
            *(undefined8 *)(pTVar9->AllocatorInstance).InlineData =
                 *(undefined8 *)(pTVar10->AllocatorInstance).InlineData;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 8) = uVar1;
            uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20);
            uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28);
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x10) = uVar2;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x18) = uVar3;
            uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30);
            uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38);
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x20) = uVar1;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x28) = uVar4;
            uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40);
            uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48);
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x30) = uVar2;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x38) = uVar3;
            uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50);
            uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58);
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x40) = uVar1;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x48) = uVar4;
            uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60);
            uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68);
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x50) = uVar2;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x58) = uVar3;
            uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70);
            uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78);
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x60) = uVar1;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x68) = uVar4;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x70) = uVar2;
            *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x78) = uVar3;
            lVar11 = lVar11 + -1;
            pTVar9 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                      *)((pTVar9->AllocatorInstance).InlineData + 0x80);
            pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                       *)((pTVar10->AllocatorInstance).InlineData + 0x80);
          } while (lVar11 != 0);
        }
        FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
        if (local_248.IndexRanges.AllocatorInstance.SecondaryData !=
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FMemory::Free((void *)local_248.IndexRanges.AllocatorInstance.SecondaryData);
          FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
        }
        local_248.IndexRanges.ArrayNum = local_468.IndexRanges.ArrayNum;
        local_248.IndexRanges.ArrayMax = local_468.IndexRanges.ArrayMax;
        local_468.IndexRanges.ArrayMax = 0x40;
        local_468.IndexRanges.AllocatorInstance.SecondaryData =
             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
        local_468.IndexRanges.ArrayNum = 0;
        local_248.IndexRanges.AllocatorInstance.SecondaryData = FVar12;
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
        iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_248);
        ::FString::FString(&local_498,"Single index range results in a single range");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_498.Data.ArrayNum != 0) {
          FVar13.Data = local_498.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7,1);
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_248);
          ::FString::FString(&local_498,"Single index range results in correct number of indices");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_498.Data.ArrayNum != 0) {
            FVar13.Data = local_498.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7,10);
          if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Data.AllocatorInstance.Data);
          }
          uVar14 = uVar15;
          if (bVar5) {
            do {
              bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_248,uVar14);
              if (uVar14 < 10 != bVar5) {
                bVar5 = false;
                goto LAB_14a00a14e;
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < 0x200);
            bVar5 = true;
LAB_14a00a14e:
            ::FString::FString(&local_498,"Included indices verified");
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_498.Data.ArrayNum != 0) {
              FVar13.Data = local_498.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar5);
            if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              ::FString::FString(&local_498,":10");
              local_488.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
              local_468.ArraySize = 0x200;
              local_468.IndexRanges.AllocatorInstance.SecondaryData =
                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
              local_468.IndexRanges.ArrayNum = 0;
              local_468.IndexRanges.ArrayMax = 0x40;
              local_488.Size = local_498.Data.ArrayNum + -1;
              if (local_498.Data.ArrayNum == 0) {
                local_488.Size = iVar6;
              }
              PCGParser::ParseIndexRanges(&local_468,&local_488);
              local_248.ArraySize = local_468.ArraySize;
              if (local_468.IndexRanges.AllocatorInstance.SecondaryData ==
                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                lVar11 = 4;
                pTVar9 = &local_248.IndexRanges;
                pTVar10 = &local_468.IndexRanges;
                do {
                  uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8);
                  uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10);
                  uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18);
                  *(undefined8 *)(pTVar9->AllocatorInstance).InlineData =
                       *(undefined8 *)(pTVar10->AllocatorInstance).InlineData;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 8) = uVar1;
                  uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20);
                  uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28);
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x10) = uVar2;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x18) = uVar3;
                  uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30);
                  uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38);
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x20) = uVar1;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x28) = uVar4;
                  uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40);
                  uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48);
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x30) = uVar2;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x38) = uVar3;
                  uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50);
                  uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58);
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x40) = uVar1;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x48) = uVar4;
                  uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60);
                  uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68);
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x50) = uVar2;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x58) = uVar3;
                  uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70);
                  uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78);
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x60) = uVar1;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x68) = uVar4;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x70) = uVar2;
                  *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x78) = uVar3;
                  lVar11 = lVar11 + -1;
                  pTVar9 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                            *)((pTVar9->AllocatorInstance).InlineData + 0x80);
                  pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                             *)((pTVar10->AllocatorInstance).InlineData + 0x80);
                } while (lVar11 != 0);
              }
              FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
              if (local_248.IndexRanges.AllocatorInstance.SecondaryData !=
                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                FMemory::Free((void *)local_248.IndexRanges.AllocatorInstance.SecondaryData);
                FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
              }
              local_248.IndexRanges.ArrayNum = local_468.IndexRanges.ArrayNum;
              local_248.IndexRanges.ArrayMax = local_468.IndexRanges.ArrayMax;
              local_468.IndexRanges.ArrayMax = 0x40;
              local_468.IndexRanges.AllocatorInstance.SecondaryData =
                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
              local_468.IndexRanges.ArrayNum = 0;
              local_248.IndexRanges.AllocatorInstance.SecondaryData = FVar12;
              if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_498.Data.AllocatorInstance.Data);
              }
              iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_248);
              ::FString::FString(&local_498,"Inferred start index results in a single range");
              FVar13.Data = (FScriptContainerElement *)L"";
              if (local_498.Data.ArrayNum != 0) {
                FVar13.Data = local_498.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7,1);
              if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_498.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_248);
                ::FString::FString(&local_498,
                                   "Inferred start index results in correct number of indices");
                FVar13.Data = (FScriptContainerElement *)L"";
                if (local_498.Data.ArrayNum != 0) {
                  FVar13.Data = local_498.Data.AllocatorInstance.Data;
                }
                bVar5 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7,10);
                if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_498.Data.AllocatorInstance.Data);
                }
                uVar14 = uVar15;
                if (bVar5) {
                  do {
                    bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_248,uVar14);
                    if (uVar14 < 10 != bVar5) {
                      bVar5 = false;
                      goto LAB_14a00a3be;
                    }
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < 0x200);
                  bVar5 = true;
LAB_14a00a3be:
                  ::FString::FString(&local_498,"Included indices verified");
                  FVar13.Data = (FScriptContainerElement *)L"";
                  if (local_498.Data.ArrayNum != 0) {
                    FVar13.Data = local_498.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar5);
                  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_498.Data.AllocatorInstance.Data);
                  }
                  if (bVar5) {
                    ::FString::FString(&local_498,":");
                    local_488.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
                    local_468.ArraySize = 0x200;
                    local_468.IndexRanges.AllocatorInstance.SecondaryData =
                         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                    local_468.IndexRanges.ArrayNum = 0;
                    local_468.IndexRanges.ArrayMax = 0x40;
                    local_488.Size = local_498.Data.ArrayNum + -1;
                    if (local_498.Data.ArrayNum == 0) {
                      local_488.Size = iVar6;
                    }
                    PCGParser::ParseIndexRanges(&local_468,&local_488);
                    local_248.ArraySize = local_468.ArraySize;
                    if (local_468.IndexRanges.AllocatorInstance.SecondaryData ==
                        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                      lVar11 = 4;
                      pTVar9 = &local_248.IndexRanges;
                      pTVar10 = &local_468.IndexRanges;
                      do {
                        uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8);
                        uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10);
                        uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18);
                        *(undefined8 *)(pTVar9->AllocatorInstance).InlineData =
                             *(undefined8 *)(pTVar10->AllocatorInstance).InlineData;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 8) = uVar1;
                        uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20);
                        uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28);
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x10) = uVar2;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x18) = uVar3;
                        uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30);
                        uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38);
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x20) = uVar1;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x28) = uVar4;
                        uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40);
                        uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48);
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x30) = uVar2;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x38) = uVar3;
                        uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50);
                        uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58);
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x40) = uVar1;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x48) = uVar4;
                        uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60);
                        uVar4 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68);
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x50) = uVar2;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x58) = uVar3;
                        uVar2 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70);
                        uVar3 = *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78);
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x60) = uVar1;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x68) = uVar4;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x70) = uVar2;
                        *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x78) = uVar3;
                        lVar11 = lVar11 + -1;
                        pTVar9 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                  *)((pTVar9->AllocatorInstance).InlineData + 0x80);
                        pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                   *)((pTVar10->AllocatorInstance).InlineData + 0x80);
                      } while (lVar11 != 0);
                    }
                    FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
                    if (local_248.IndexRanges.AllocatorInstance.SecondaryData !=
                        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                      FMemory::Free((void *)local_248.IndexRanges.AllocatorInstance.SecondaryData);
                      FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
                    }
                    local_248.IndexRanges.ArrayNum = local_468.IndexRanges.ArrayNum;
                    local_248.IndexRanges.ArrayMax = local_468.IndexRanges.ArrayMax;
                    local_468.IndexRanges.ArrayMax = 0x40;
                    local_468.IndexRanges.AllocatorInstance.SecondaryData =
                         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                    local_468.IndexRanges.ArrayNum = 0;
                    local_248.IndexRanges.AllocatorInstance.SecondaryData = FVar12;
                    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_498.Data.AllocatorInstance.Data);
                    }
                    iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_248);
                    ::FString::FString(&local_498,"Full range has single range");
                    FVar13.Data = (FScriptContainerElement *)L"";
                    if (local_498.Data.ArrayNum != 0) {
                      FVar13.Data = local_498.Data.AllocatorInstance.Data;
                    }
                    bVar5 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7,1);
                    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_498.Data.AllocatorInstance.Data);
                    }
                    if (bVar5) {
                      iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_248);
                      ::FString::FString(&local_498,"Full range has all indices");
                      FVar13.Data = (FScriptContainerElement *)L"";
                      if (local_498.Data.ArrayNum != 0) {
                        FVar13.Data = local_498.Data.AllocatorInstance.Data;
                      }
                      bVar5 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7,
                                         0x200);
                      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_498.Data.AllocatorInstance.Data);
                      }
                      uVar14 = uVar15;
                      if (bVar5) {
                        do {
                          bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_248,uVar14)
                          ;
                          if (!bVar5) {
                            bVar5 = false;
                            break;
                          }
                          uVar14 = uVar14 + 1;
                        } while ((int)uVar14 < 0x200);
                        ::FString::FString(&local_498,"Included indices verified");
                        FVar13.Data = (FScriptContainerElement *)L"";
                        if (local_498.Data.ArrayNum != 0) {
                          FVar13.Data = local_498.Data.AllocatorInstance.Data;
                        }
                        bVar5 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar5)
                        ;
                        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_498.Data.AllocatorInstance.Data);
                        }
                        if (bVar5) {
                          ::FString::FString(&local_498,"0:");
                          local_488.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
                          local_468.ArraySize = 0x200;
                          local_468.IndexRanges.AllocatorInstance.SecondaryData =
                               (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                          local_468.IndexRanges.ArrayNum = 0;
                          local_468.IndexRanges.ArrayMax = 0x40;
                          local_488.Size = local_498.Data.ArrayNum + -1;
                          if (local_498.Data.ArrayNum == 0) {
                            local_488.Size = iVar6;
                          }
                          PCGParser::ParseIndexRanges(&local_468,&local_488);
                          PCGIndexing::FPCGIndexCollection::operator=(&local_248,&local_468);
                          if (local_468.IndexRanges.AllocatorInstance.SecondaryData !=
                              (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                            FMemory::Free((void *)local_468.IndexRanges.AllocatorInstance.
                                                  SecondaryData);
                          }
                          if (local_498.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_498.Data.AllocatorInstance.Data);
                          }
                          iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_248);
                          ::FString::FString(&local_498,
                                             "Inferred end index results in a single range");
                          FVar13.Data = (FScriptContainerElement *)L"";
                          if (local_498.Data.ArrayNum != 0) {
                            FVar13.Data = local_498.Data.AllocatorInstance.Data;
                          }
                          bVar5 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                             iVar7,1);
                          if (local_498.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_498.Data.AllocatorInstance.Data);
                          }
                          if (bVar5) {
                            iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_248)
                            ;
                            ::FString::FString(&local_498,
                                               "Inferred end index results in correct number of indices"
                                              );
                            FVar13.Data = (FScriptContainerElement *)L"";
                            if (local_498.Data.ArrayNum != 0) {
                              FVar13.Data = local_498.Data.AllocatorInstance.Data;
                            }
                            bVar5 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                               iVar7,0x200);
                            if (local_498.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_498.Data.AllocatorInstance.Data);
                            }
                            uVar14 = uVar15;
                            if (bVar5) {
                              do {
                                bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                  (&local_248,uVar14);
                                if (!bVar5) {
                                  bVar5 = false;
                                  break;
                                }
                                uVar14 = uVar14 + 1;
                              } while ((int)uVar14 < 0x200);
                              ::FString::FString(&local_498,"Included indices verified");
                              FVar13.Data = (FScriptContainerElement *)L"";
                              if (local_498.Data.ArrayNum != 0) {
                                FVar13.Data = local_498.Data.AllocatorInstance.Data;
                              }
                              bVar5 = FAutomationTestBase::TestTrue
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                                 bVar5);
                              if (local_498.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_498.Data.AllocatorInstance.Data);
                              }
                              if (bVar5) {
                                ::FString::FString(&local_498,":-4");
                                local_488.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data
                                ;
                                local_468.ArraySize = 0x200;
                                local_468.IndexRanges.AllocatorInstance.SecondaryData =
                                     (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                local_468.IndexRanges.ArrayNum = 0;
                                local_468.IndexRanges.ArrayMax = 0x40;
                                local_488.Size = local_498.Data.ArrayNum + -1;
                                if (local_498.Data.ArrayNum == 0) {
                                  local_488.Size = iVar6;
                                }
                                PCGParser::ParseIndexRanges(&local_468,&local_488);
                                local_248.ArraySize = local_468.ArraySize;
                                if (local_468.IndexRanges.AllocatorInstance.SecondaryData ==
                                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                  lVar11 = 4;
                                  pTVar9 = &local_248.IndexRanges;
                                  pTVar10 = &local_468.IndexRanges;
                                  do {
                                    uVar1 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 8);
                                    uVar2 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x10);
                                    uVar3 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x18);
                                    *(undefined8 *)(pTVar9->AllocatorInstance).InlineData =
                                         *(undefined8 *)(pTVar10->AllocatorInstance).InlineData;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 8) =
                                         uVar1;
                                    uVar1 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x20);
                                    uVar4 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x28);
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x10) =
                                         uVar2;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x18) =
                                         uVar3;
                                    uVar2 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x30);
                                    uVar3 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x38);
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x20) =
                                         uVar1;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x28) =
                                         uVar4;
                                    uVar1 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x40);
                                    uVar4 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x48);
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x30) =
                                         uVar2;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x38) =
                                         uVar3;
                                    uVar2 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x50);
                                    uVar3 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x58);
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x40) =
                                         uVar1;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x48) =
                                         uVar4;
                                    uVar1 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x60);
                                    uVar4 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x68);
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x50) =
                                         uVar2;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x58) =
                                         uVar3;
                                    uVar2 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x70);
                                    uVar3 = *(undefined8 *)
                                             ((pTVar10->AllocatorInstance).InlineData + 0x78);
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x60) =
                                         uVar1;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x68) =
                                         uVar4;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x70) =
                                         uVar2;
                                    *(undefined8 *)((pTVar9->AllocatorInstance).InlineData + 0x78) =
                                         uVar3;
                                    lVar11 = lVar11 + -1;
                                    pTVar9 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                              *)((pTVar9->AllocatorInstance).InlineData + 0x80);
                                    pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                               *)((pTVar10->AllocatorInstance).InlineData + 0x80);
                                  } while (lVar11 != 0);
                                }
                                FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
                                if (local_248.IndexRanges.AllocatorInstance.SecondaryData !=
                                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                  FMemory::Free((void *)local_248.IndexRanges.AllocatorInstance.
                                                        SecondaryData);
                                  FVar12 = local_468.IndexRanges.AllocatorInstance.SecondaryData;
                                }
                                local_248.IndexRanges.ArrayNum = local_468.IndexRanges.ArrayNum;
                                local_248.IndexRanges.ArrayMax = local_468.IndexRanges.ArrayMax;
                                local_468.IndexRanges.ArrayMax = 0x40;
                                local_468.IndexRanges.AllocatorInstance.SecondaryData =
                                     (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                local_468.IndexRanges.ArrayNum = 0;
                                local_248.IndexRanges.AllocatorInstance.SecondaryData = FVar12;
                                if (local_498.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                }
                                iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount
                                                  (&local_248);
                                ::FString::FString(&local_498,
                                                                                                      
                                                  "Inferred start index, negative end index results in a single range"
                                                  );
                                FVar13.Data = (FScriptContainerElement *)L"";
                                if (local_498.Data.ArrayNum != 0) {
                                  FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                }
                                bVar5 = FAutomationTestBase::TestEqual
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar13.Data,iVar7,1);
                                if (local_498.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                }
                                if (bVar5) {
                                  iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                    (&local_248);
                                  ::FString::FString(&local_498,
                                                                                                          
                                                  "Inferred start index, negative end results in correct number of indices"
                                                  );
                                  FVar13.Data = (FScriptContainerElement *)L"";
                                  if (local_498.Data.ArrayNum != 0) {
                                    FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                  }
                                  bVar5 = FAutomationTestBase::TestEqual
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar13.Data,iVar7,0x1fc);
                                  if (local_498.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                  }
                                  uVar14 = uVar15;
                                  if (bVar5) {
                                    do {
                                      bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                        (&local_248,uVar14);
                                      if (uVar14 < 0x1fc != bVar5) {
                                        bVar5 = false;
                                        goto LAB_14a00aa41;
                                      }
                                      uVar14 = uVar14 + 1;
                                    } while ((int)uVar14 < 0x200);
                                    bVar5 = true;
LAB_14a00aa41:
                                    ::FString::FString(&local_498,"Included indices verified");
                                    FVar13.Data = (FScriptContainerElement *)L"";
                                    if (local_498.Data.ArrayNum != 0) {
                                      FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                    }
                                    bVar5 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar13.Data,bVar5);
                                    if (local_498.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar5) {
                                      ::FString::FString(&local_498,"0:10,2:5");
                                      local_488.DataPtr =
                                           (wchar_t *)local_498.Data.AllocatorInstance.Data;
                                      local_468.ArraySize = 0x200;
                                      local_468.IndexRanges.AllocatorInstance.SecondaryData =
                                           (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                      local_468.IndexRanges.ArrayNum = 0;
                                      local_468.IndexRanges.ArrayMax = 0x40;
                                      local_488.Size = local_498.Data.ArrayNum + -1;
                                      if (local_498.Data.ArrayNum == 0) {
                                        local_488.Size = iVar6;
                                      }
                                      PCGParser::ParseIndexRanges(&local_468,&local_488);
                                      PCGIndexing::FPCGIndexCollection::operator=
                                                (&local_248,&local_468);
                                      if (local_468.IndexRanges.AllocatorInstance.SecondaryData !=
                                          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                        FMemory::Free((void *)local_468.IndexRanges.
                                                              AllocatorInstance.SecondaryData);
                                      }
                                      if (local_498.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                      }
                                      iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount
                                                        (&local_248);
                                      ::FString::FString(&local_498,
                                                                                                                  
                                                  "Complete preceeding overlap collapsed into single index range"
                                                  );
                                      FVar13.Data = (FScriptContainerElement *)L"";
                                      if (local_498.Data.ArrayNum != 0) {
                                        FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                      }
                                      bVar5 = FAutomationTestBase::TestEqual
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar13.Data,iVar7,1);
                                      if (local_498.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar5) {
                                        iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                          (&local_248);
                                        ::FString::FString(&local_498,
                                                                                                                      
                                                  "Complete preceeding overlap collapsed into correct index count"
                                                  );
                                        FVar13.Data = (FScriptContainerElement *)L"";
                                        if (local_498.Data.ArrayNum != 0) {
                                          FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                        }
                                        bVar5 = FAutomationTestBase::TestEqual
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar13.Data,iVar7,10);
                                        if (local_498.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                        }
                                        uVar14 = uVar15;
                                        if (bVar5) {
                                          do {
                                            bVar5 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                              (&local_248,uVar14);
                                            if (uVar14 < 10 != bVar5) {
                                              bVar5 = false;
                                              goto LAB_14a00abfe;
                                            }
                                            uVar14 = uVar14 + 1;
                                          } while ((int)uVar14 < 0x200);
                                          bVar5 = true;
LAB_14a00abfe:
                                          ::FString::FString(&local_498,"Included indices verified")
                                          ;
                                          FVar13.Data = (FScriptContainerElement *)L"";
                                          if (local_498.Data.ArrayNum != 0) {
                                            FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                          }
                                          bVar5 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,bVar5);
                                          if (local_498.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar5) {
                                            ::FString::FString(&local_498,"2:5,0:10");
                                            local_488.DataPtr =
                                                 (wchar_t *)local_498.Data.AllocatorInstance.Data;
                                            local_468.ArraySize = 0x200;
                                            local_468.IndexRanges.AllocatorInstance.SecondaryData =
                                                 (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                            local_468.IndexRanges.ArrayNum = 0;
                                            local_468.IndexRanges.ArrayMax = 0x40;
                                            local_488.Size = local_498.Data.ArrayNum + -1;
                                            if (local_498.Data.ArrayNum == 0) {
                                              local_488.Size = iVar6;
                                            }
                                            PCGParser::ParseIndexRanges(&local_468,&local_488);
                                            local_248.ArraySize = local_468.ArraySize;
                                            if (local_468.IndexRanges.AllocatorInstance.
                                                SecondaryData ==
                                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                              lVar11 = 4;
                                              pTVar9 = &local_248.IndexRanges;
                                              pTVar10 = &local_468.IndexRanges;
                                              do {
                                                uVar1 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         8);
                                                uVar2 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x10);
                                                uVar3 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x18);
                                                *(undefined8 *)
                                                 (pTVar9->AllocatorInstance).InlineData =
                                                     *(undefined8 *)
                                                      (pTVar10->AllocatorInstance).InlineData;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 8) =
                                                     uVar1;
                                                uVar1 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x20);
                                                uVar4 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x28);
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x10) =
                                                     uVar2;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x18) =
                                                     uVar3;
                                                uVar2 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x30);
                                                uVar3 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x38);
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x20) =
                                                     uVar1;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x28) =
                                                     uVar4;
                                                uVar1 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x40);
                                                uVar4 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x48);
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x30) =
                                                     uVar2;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x38) =
                                                     uVar3;
                                                uVar2 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x50);
                                                uVar3 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x58);
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x40) =
                                                     uVar1;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x48) =
                                                     uVar4;
                                                uVar1 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x60);
                                                uVar4 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x68);
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x50) =
                                                     uVar2;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x58) =
                                                     uVar3;
                                                uVar2 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x70);
                                                uVar3 = *(undefined8 *)
                                                         ((pTVar10->AllocatorInstance).InlineData +
                                                         0x78);
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x60) =
                                                     uVar1;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x68) =
                                                     uVar4;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x70) =
                                                     uVar2;
                                                *(undefined8 *)
                                                 ((pTVar9->AllocatorInstance).InlineData + 0x78) =
                                                     uVar3;
                                                lVar11 = lVar11 + -1;
                                                pTVar9 = (
                                                  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                                  *)((pTVar9->AllocatorInstance).InlineData + 0x80);
                                                pTVar10 = (
                                                  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                                  *)((pTVar10->AllocatorInstance).InlineData + 0x80)
                                                ;
                                              } while (lVar11 != 0);
                                            }
                                            FVar12 = local_468.IndexRanges.AllocatorInstance.
                                                     SecondaryData;
                                            if (local_248.IndexRanges.AllocatorInstance.
                                                SecondaryData !=
                                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                              FMemory::Free((void *)local_248.IndexRanges.
                                                                    AllocatorInstance.SecondaryData)
                                              ;
                                              FVar12 = local_468.IndexRanges.AllocatorInstance.
                                                       SecondaryData;
                                            }
                                            local_248.IndexRanges.ArrayNum =
                                                 local_468.IndexRanges.ArrayNum;
                                            local_248.IndexRanges.ArrayMax =
                                                 local_468.IndexRanges.ArrayMax;
                                            local_468.IndexRanges.ArrayMax = 0x40;
                                            local_468.IndexRanges.AllocatorInstance.SecondaryData =
                                                 (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                            local_468.IndexRanges.ArrayNum = 0;
                                            local_248.IndexRanges.AllocatorInstance.SecondaryData =
                                                 FVar12;
                                            if (local_498.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                            }
                                            iVar7 = PCGIndexing::FPCGIndexCollection::
                                                    GetTotalRangeCount(&local_248);
                                            ::FString::FString(&local_498,
                                                                                                                              
                                                  "Complete subsequent overlap collapsed into single index range"
                                                  );
                                            FVar13.Data = (FScriptContainerElement *)L"";
                                            if (local_498.Data.ArrayNum != 0) {
                                              FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                            }
                                            bVar5 = FAutomationTestBase::TestEqual
                                                              ((FAutomationTestBase *)this,
                                                               (wchar_t *)FVar13.Data,iVar7,1);
                                            if (local_498.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_498.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar5) {
                                              iVar7 = PCGIndexing::FPCGIndexCollection::
                                                      GetTotalIndexCount(&local_248);
                                              ::FString::FString(&local_498,
                                                                                                                                  
                                                  "Complete subsequent overlap collapsed into correct index count"
                                                  );
                                              FVar13.Data = (FScriptContainerElement *)L"";
                                              if (local_498.Data.ArrayNum != 0) {
                                                FVar13.Data = local_498.Data.AllocatorInstance.Data;
                                              }
                                              bVar5 = FAutomationTestBase::TestEqual
                                                                ((FAutomationTestBase *)this,
                                                                 (wchar_t *)FVar13.Data,iVar7,10);
                                              if (local_498.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_498.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              uVar14 = uVar15;
                                              if (bVar5) {
                                                do {
                                                  bVar5 = PCGIndexing::FPCGIndexCollection::
                                                          ContainsIndex(&local_248,uVar14);
                                                  if (uVar14 < 10 != bVar5) {
                                                    bVar5 = false;
                                                    goto LAB_14a00ae6e;
                                                  }
                                                  uVar14 = uVar14 + 1;
                                                } while ((int)uVar14 < 0x200);
                                                bVar5 = true;
LAB_14a00ae6e:
                                                ::FString::FString(&local_498,
                                                                   "Included indices verified");
                                                FVar13.Data = (FScriptContainerElement *)L"";
                                                if (local_498.Data.ArrayNum != 0) {
                                                  FVar13.Data = local_498.Data.AllocatorInstance.
                                                                Data;
                                                }
                                                bVar5 = FAutomationTestBase::TestTrue
                                                                  ((FAutomationTestBase *)this,
                                                                   (wchar_t *)FVar13.Data,bVar5);
                                                if (local_498.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_498.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                if (bVar5) {
                                                  ::FString::FString(&local_498,
                                                                     "0,1,2,3:50,0:512,80:250");
                                                  local_488.DataPtr =
                                                       (wchar_t *)
                                                       local_498.Data.AllocatorInstance.Data;
                                                  local_468.ArraySize = 0x200;
                                                  local_468.IndexRanges.AllocatorInstance.
                                                  SecondaryData =
                                                       (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                       0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  local_488.Size = local_498.Data.ArrayNum + -1;
                                                  if (local_498.Data.ArrayNum == 0) {
                                                    local_488.Size = iVar6;
                                                  }
                                                  PCGParser::ParseIndexRanges(&local_468,&local_488)
                                                  ;
                                                  local_248.ArraySize = local_468.ArraySize;
                                                  if (local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData ==
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    pTVar9 = &local_248.IndexRanges;
                                                    pTVar10 = &local_468.IndexRanges;
                                                    do {
                                                      uVar1 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 8);
                                                      uVar2 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x10);
                                                      uVar3 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x18);
                                                      *(undefined8 *)
                                                       (pTVar9->AllocatorInstance).InlineData =
                                                           *(undefined8 *)
                                                            (pTVar10->AllocatorInstance).InlineData;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData + 8)
                                                           = uVar1;
                                                      uVar1 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x20);
                                                      uVar4 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x28);
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x10) = uVar2;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x18) = uVar3;
                                                      uVar2 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x30);
                                                      uVar3 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x38);
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x20) = uVar1;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x28) = uVar4;
                                                      uVar1 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x40);
                                                      uVar4 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x48);
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x30) = uVar2;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x38) = uVar3;
                                                      uVar2 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x50);
                                                      uVar3 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x58);
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x40) = uVar1;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x48) = uVar4;
                                                      uVar1 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x60);
                                                      uVar4 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x68);
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x50) = uVar2;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x58) = uVar3;
                                                      uVar2 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x70);
                                                      uVar3 = *(undefined8 *)
                                                               ((pTVar10->AllocatorInstance).
                                                                InlineData + 0x78);
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x60) = uVar1;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x68) = uVar4;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x70) = uVar2;
                                                      *(undefined8 *)
                                                       ((pTVar9->AllocatorInstance).InlineData +
                                                       0x78) = uVar3;
                                                      lVar16 = lVar16 + -1;
                                                      pTVar9 = (
                                                  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                                  *)((pTVar9->AllocatorInstance).InlineData + 0x80);
                                                  pTVar10 = (
                                                  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                                  *)((pTVar10->AllocatorInstance).InlineData + 0x80)
                                                  ;
                                                  } while (lVar16 != 0);
                                                  }
                                                  FVar12 = local_468.IndexRanges.AllocatorInstance.
                                                           SecondaryData;
                                                  if (local_248.IndexRanges.AllocatorInstance.
                                                      SecondaryData !=
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    FMemory::Free((void *)local_248.IndexRanges.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                    FVar12 = local_468.IndexRanges.AllocatorInstance
                                                             .SecondaryData;
                                                  }
                                                  local_248.IndexRanges.ArrayNum =
                                                       local_468.IndexRanges.ArrayNum;
                                                  local_248.IndexRanges.ArrayMax =
                                                       local_468.IndexRanges.ArrayMax;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  local_468.IndexRanges.AllocatorInstance.
                                                  SecondaryData =
                                                       (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                       0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_248.IndexRanges.AllocatorInstance.
                                                  SecondaryData = FVar12;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar7 = PCGIndexing::FPCGIndexCollection::
                                                          GetTotalRangeCount(&local_248);
                                                  ::FString::FString(&local_498,
                                                                                                                                          
                                                  "Multiple complete overlaps collapsed into single index range"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar7,1)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar7 = PCGIndexing::FPCGIndexCollection::
                                                            GetTotalIndexCount(&local_248);
                                                    ::FString::FString(&local_498,
                                                                                                                                              
                                                  "Multiple complete overlaps collapsed into correct index count"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar7,
                                                                     0x200);
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    do {
                                                      bVar5 = PCGIndexing::FPCGIndexCollection::
                                                              ContainsIndex(&local_248,uVar15);
                                                      if (!bVar5) {
                                                        bVar5 = false;
                                                        break;
                                                      }
                                                      uVar15 = uVar15 + 1;
                                                    } while ((int)uVar15 < 0x200);
                                                    ::FString::FString(&local_498,
                                                                       "Included indices verified");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_498.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_498.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,bVar5)
                                                    ;
                                                    if (local_498.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_498.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      ::FString::FString(&local_498,"0:50,25:75");
                                                      local_488.DataPtr =
                                                           (wchar_t *)
                                                           local_498.Data.AllocatorInstance.Data;
                                                      local_468.ArraySize = 0x200;
                                                      local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData =
                                                           (
                                                  ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  iVar7 = 0;
                                                  local_488.Size = local_498.Data.ArrayNum + -1;
                                                  if (local_498.Data.ArrayNum == 0) {
                                                    local_488.Size = iVar7;
                                                  }
                                                  PCGParser::ParseIndexRanges(&local_468,&local_488)
                                                  ;
                                                  PCGIndexing::FPCGIndexCollection::operator=
                                                            (&local_248,&local_468);
                                                  if (local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData !=
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    FMemory::Free((void *)local_468.IndexRanges.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar8 = PCGIndexing::FPCGIndexCollection::
                                                          GetTotalRangeCount(&local_248);
                                                  ::FString::FString(&local_498,
                                                                                                                                          
                                                  "Single partial overlap is collapsed with single range"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar8,1)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar8 = PCGIndexing::FPCGIndexCollection::
                                                            GetTotalIndexCount(&local_248);
                                                    ::FString::FString(&local_498,
                                                                                                                                              
                                                  "Single partial overlap is collapsed with correct index count"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar8,
                                                                     0x4b);
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    bVar5 = `FPCGParsingTest_Ranges::RunTest'::__l2
                                                            ::<lambda_1>::operator()
                                                                      (&local_478,0x4b);
                                                    ::FString::FString(&local_498,
                                                                       "Included indices verified");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_498.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_498.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,bVar5)
                                                    ;
                                                    if (local_498.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_498.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      ::FString::FString(&local_498,
                                                                                                                                                  
                                                  "0:50,25:75,1:5,13:72,30:40,40:50");
                                                  local_488.DataPtr =
                                                       (wchar_t *)
                                                       local_498.Data.AllocatorInstance.Data;
                                                  local_468.ArraySize = 0x200;
                                                  local_468.IndexRanges.AllocatorInstance.
                                                  SecondaryData =
                                                       (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                       0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  local_488.Size = local_498.Data.ArrayNum + -1;
                                                  if (local_498.Data.ArrayNum == 0) {
                                                    local_488.Size = iVar7;
                                                  }
                                                  PCGParser::ParseIndexRanges(&local_468,&local_488)
                                                  ;
                                                  PCGIndexing::FPCGIndexCollection::operator=
                                                            (&local_248,&local_468);
                                                  if (local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData !=
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    FMemory::Free((void *)local_468.IndexRanges.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar8 = PCGIndexing::FPCGIndexCollection::
                                                          GetTotalRangeCount(&local_248);
                                                  ::FString::FString(&local_498,
                                                                                                                                          
                                                  "Multiple partial overlap is collapsed with single range"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar8,1)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar8 = PCGIndexing::FPCGIndexCollection::
                                                            GetTotalIndexCount(&local_248);
                                                    ::FString::FString(&local_498,
                                                                                                                                              
                                                  "Multiple partial overlap is collapsed with correct index count"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar8,
                                                                     0x4b);
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    bVar5 = `FPCGParsingTest_Ranges::RunTest'::__l2
                                                            ::<lambda_1>::operator()
                                                                      (&local_478,0x4b);
                                                    ::FString::FString(&local_498,
                                                                       "Included indices verified");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_498.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_498.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,bVar5)
                                                    ;
                                                    if (local_498.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_498.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      ::FString::FString(&local_498,
                                                                         "0:2,1:3,2:4,3:5,4:6,5:7");
                                                      local_488.DataPtr =
                                                           (wchar_t *)
                                                           local_498.Data.AllocatorInstance.Data;
                                                      local_468.ArraySize = 0x200;
                                                      local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData =
                                                           (
                                                  ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  local_488.Size = local_498.Data.ArrayNum + -1;
                                                  if (local_498.Data.ArrayNum == 0) {
                                                    local_488.Size = iVar7;
                                                  }
                                                  PCGParser::ParseIndexRanges(&local_468,&local_488)
                                                  ;
                                                  PCGIndexing::FPCGIndexCollection::operator=
                                                            (&local_248,&local_468);
                                                  if (local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData !=
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    FMemory::Free((void *)local_468.IndexRanges.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar8 = PCGIndexing::FPCGIndexCollection::
                                                          GetTotalRangeCount(&local_248);
                                                  ::FString::FString(&local_498,
                                                                                                                                          
                                                  "Multiple partial overlap is collapsed with single range"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar8,1)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar8 = PCGIndexing::FPCGIndexCollection::
                                                            GetTotalIndexCount(&local_248);
                                                    ::FString::FString(&local_498,
                                                                                                                                              
                                                  "Multiple partial overlap is collapsed with correct index count"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar8,7)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    bVar5 = `FPCGParsingTest_Ranges::RunTest'::__l2
                                                            ::<lambda_1>::operator()(&local_478,7);
                                                    ::FString::FString(&local_498,
                                                                       "Included indices verified");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_498.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_498.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,bVar5)
                                                    ;
                                                    if (local_498.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_498.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      ::FString::FString(&local_498,"0:26,26:50");
                                                      local_488.DataPtr =
                                                           (wchar_t *)
                                                           local_498.Data.AllocatorInstance.Data;
                                                      local_468.ArraySize = 0x200;
                                                      local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData =
                                                           (
                                                  ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  local_488.Size = local_498.Data.ArrayNum + -1;
                                                  if (local_498.Data.ArrayNum == 0) {
                                                    local_488.Size = iVar7;
                                                  }
                                                  PCGParser::ParseIndexRanges(&local_468,&local_488)
                                                  ;
                                                  PCGIndexing::FPCGIndexCollection::operator=
                                                            (&local_248,&local_468);
                                                  if (local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData !=
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    FMemory::Free((void *)local_468.IndexRanges.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar7 = PCGIndexing::FPCGIndexCollection::
                                                          GetTotalRangeCount(&local_248);
                                                  ::FString::FString(&local_498,
                                                                                                                                          
                                                  "Multiple partial overlap is collapsed with one range"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar7,1)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar7 = PCGIndexing::FPCGIndexCollection::
                                                            GetTotalIndexCount(&local_248);
                                                    ::FString::FString(&local_498,
                                                                                                                                              
                                                  "Multiple partial overlap is collapsed with correct index count"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar7,
                                                                     0x32);
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    bVar5 = `FPCGParsingTest_Ranges::RunTest'::__l2
                                                            ::<lambda_1>::operator()
                                                                      (&local_478,0x32);
                                                    ::FString::FString(&local_498,
                                                                       "Included indices verified");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_498.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_498.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,bVar5)
                                                    ;
                                                    if (local_498.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_498.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      ::FString::FString(&local_498,
                                                                                                                                                  
                                                  "0:20,10:31,31:51,41:62,62:82,72:93");
                                                  local_488.DataPtr =
                                                       (wchar_t *)
                                                       local_498.Data.AllocatorInstance.Data;
                                                  local_468.ArraySize = 0x200;
                                                  local_468.IndexRanges.AllocatorInstance.
                                                  SecondaryData =
                                                       (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                       0x0;
                                                  local_468.IndexRanges.ArrayNum = 0;
                                                  local_468.IndexRanges.ArrayMax = 0x40;
                                                  local_488.Size = local_498.Data.ArrayNum + -1;
                                                  if (local_498.Data.ArrayNum == 0) {
                                                    local_488.Size = iVar6;
                                                  }
                                                  PCGParser::ParseIndexRanges(&local_468,&local_488)
                                                  ;
                                                  PCGIndexing::FPCGIndexCollection::operator=
                                                            (&local_248,&local_468);
                                                  if (local_468.IndexRanges.AllocatorInstance.
                                                      SecondaryData !=
                                                      (ForElementType<PCGIndexing::FPCGIndexRange>)
                                                      0x0) {
                                                    FMemory::Free((void *)local_468.IndexRanges.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar6 = PCGIndexing::FPCGIndexCollection::
                                                          GetTotalRangeCount(&local_248);
                                                  ::FString::FString(&local_498,
                                                                                                                                          
                                                  "Multiple partial overlap is collapsed with one range"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar6,1)
                                                  ;
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar6 = PCGIndexing::FPCGIndexCollection::
                                                            GetTotalIndexCount(&local_248);
                                                    ::FString::FString(&local_498,
                                                                                                                                              
                                                  "Multiple partial overlap is collapsed with correct index count"
                                                  );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_498.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_498.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar6,
                                                                     0x5d);
                                                  if (local_498.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_498.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    bVar5 = `FPCGParsingTest_Ranges::RunTest'::__l2
                                                            ::<lambda_1>::operator()
                                                                      (&local_478,0x5d);
                                                    ::FString::FString(&local_498,
                                                                       "Included indices verified");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_498.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_498.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,bVar5)
                                                    ;
                                                    if (local_498.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_498.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      bVar5 = true;
                                                      goto LAB_14a00b8ea;
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
  bVar5 = false;
LAB_14a00b8ea:
  if (local_248.IndexRanges.AllocatorInstance.SecondaryData !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FMemory::Free((void *)local_248.IndexRanges.AllocatorInstance.SecondaryData);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 14a00b930

FString * __thiscall
FPCGParsingTest_Ranges::GetBeautifiedTestName
          (FPCGParsingTest_Ranges *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Parsing.Ranges");
  return __return_storage_ptr__;
}

// operator() @ 14a0197f0

bool __thiscall
`FPCGParsingTest_Ranges::RunTest'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    bVar1 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                      (*(FPCGIndexCollection **)((longlong)this + 8),iVar2);
    if (iVar2 < param_1 != bVar1) {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x200);
  return true;
}

