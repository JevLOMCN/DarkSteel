// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a00cbe0

EAutomationTestFlags __thiscall
FPCGParsingTest_Robustness::GetTestFlags(FPCGParsingTest_Robustness *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a00cbf0

bool __thiscall FPCGParsingTest_Robustness::IsStressTest(FPCGParsingTest_Robustness *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a00cde0

uint __thiscall FPCGParsingTest_Robustness::GetRequiredDeviceNum(FPCGParsingTest_Robustness *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a00cdf0

FString * __thiscall
FPCGParsingTest_Robustness::GetTestSourceFileName
          (FPCGParsingTest_Robustness *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Parsing\\PCGParsingTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a00d330

int __thiscall FPCGParsingTest_Robustness::GetTestSourceFileLine(FPCGParsingTest_Robustness *this)

{
  return 0xd8;
}

// GetTests @ 14a00d370

/* WARNING: Removing unreachable block (ram,0x00014a00d45d) */
/* WARNING: Removing unreachable block (ram,0x00014a00d528) */

void __thiscall
FPCGParsingTest_Robustness::GetTests
          (FPCGParsingTest_Robustness *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Parsing.Robustness");
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

// RunTest @ 14a00d550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGParsingTest_Robustness::RunTest(FPCGParsingTest_Robustness *this,FString *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar11;
  TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar12;
  ForElementType<PCGIndexing::FPCGIndexRange> FVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_6f8 [32];
  FString local_6b8;
  TStringView<wchar_t> local_6a8;
  FPCGIndexCollection local_698;
  FPCGIndexCollection local_478;
  FPCGIndexCollection local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_258.ArraySize = 0x200;
  local_258.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_258.IndexRanges.ArrayNum = 0;
  local_698.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_698.IndexRanges.ArrayNum = 0;
  local_258.IndexRanges.ArrayMax = 0x40;
  local_698.ArraySize = 0x2a;
  local_698.IndexRanges.ArrayMax = 0x40;
  PCGIndexing::FPCGIndexCollection::AddRange(&local_698,0x15,0x29);
  lVar15 = (longlong)local_698.IndexRanges.ArrayNum;
  lVar16 = 4;
  local_478.ArraySize = local_698.ArraySize;
  local_478.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_478.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
  FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)&local_698.IndexRanges;
  if (local_698.IndexRanges.AllocatorInstance.SecondaryData !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
  }
  if (local_698.IndexRanges.ArrayNum == 0) {
    local_478.IndexRanges.ArrayMax = 0x40;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
              (8,4,local_698.IndexRanges.ArrayNum,0,&local_478.IndexRanges.AllocatorInstance,
               local_698.IndexRanges.ArrayNum,&local_478.IndexRanges.ArrayMax);
    FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)&local_478.IndexRanges;
    if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FVar11 = local_478.IndexRanges.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar11,(void *)FVar13,lVar15 << 3);
  }
  ::FString::FString(&local_6b8,"Copy construction");
  bVar6 = PCGIndexing::FPCGIndexCollection::operator==(&local_698,&local_478);
  if (bVar6) {
    bVar6 = false;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_6a8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_6a8,0);
    if ((FScriptContainerElement *)local_6a8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.DataPtr);
    }
    bVar6 = true;
  }
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
LAB_14a00d87b:
    if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData);
    }
    if (local_698.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_698.IndexRanges.AllocatorInstance.SecondaryData);
    }
  }
  else {
    if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData);
    }
    if (local_698.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_698.IndexRanges.AllocatorInstance.SecondaryData);
    }
    local_698.ArraySize = 0x2a;
    local_698.IndexRanges.AllocatorInstance.SecondaryData =
         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
    local_698.IndexRanges.ArrayNum = 0;
    local_698.IndexRanges.ArrayMax = 0x40;
    PCGIndexing::FPCGIndexCollection::AddRange(&local_698,0x15,0x29);
    lVar15 = (longlong)local_698.IndexRanges.ArrayNum;
    local_478.ArraySize = local_698.ArraySize;
    local_478.IndexRanges.AllocatorInstance.SecondaryData =
         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
    local_478.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
    FVar13 = (ForElementType<PCGIndexing::FPCGIndexRange>)&local_698.IndexRanges;
    if (local_698.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
    }
    if (local_698.IndexRanges.ArrayNum == 0) {
      local_478.IndexRanges.ArrayMax = 0x40;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
                (8,4,local_698.IndexRanges.ArrayNum,0,&local_478.IndexRanges.AllocatorInstance,
                 local_698.IndexRanges.ArrayNum,&local_478.IndexRanges.ArrayMax);
      FVar11 = (ForElementType<PCGIndexing::FPCGIndexRange>)&local_478.IndexRanges;
      if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FVar11 = local_478.IndexRanges.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar11,(void *)FVar13,lVar15 << 3);
    }
    ::FString::FString(&local_6b8,"Assignment operator");
    bVar6 = PCGIndexing::FPCGIndexCollection::operator==(&local_698,&local_478);
    if (bVar6) {
      bVar6 = false;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_6a8,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_6a8,0);
      if ((FScriptContainerElement *)local_6a8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.DataPtr);
      }
      bVar6 = true;
    }
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
    if (bVar6) goto LAB_14a00d87b;
    if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData);
    }
    if (local_698.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_698.IndexRanges.AllocatorInstance.SecondaryData);
    }
    ::FString::FString(&local_6b8,"00000000000000000");
    local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
    local_698.ArraySize = 0x200;
    local_698.IndexRanges.AllocatorInstance.SecondaryData =
         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
    local_698.IndexRanges.ArrayNum = 0;
    local_698.IndexRanges.ArrayMax = 0x40;
    local_6a8.Size = local_6b8.Data.ArrayNum + -1;
    if (local_6b8.Data.ArrayNum == 0) {
      local_6a8.Size = 0;
    }
    PCGParser::ParseIndexRanges(&local_698,&local_6a8);
    local_258.ArraySize = local_698.ArraySize;
    if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      lVar15 = 4;
      pTVar10 = &local_258.IndexRanges;
      pTVar12 = &local_698.IndexRanges;
      do {
        uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
        uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
        uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
        *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
             *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
        uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
        uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
        uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
        uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
        uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
        uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
        uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
        uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
        uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
        uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
        uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
        uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
        *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
        lVar15 = lVar15 + -1;
        pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                   *)((pTVar10->AllocatorInstance).InlineData + 0x80);
        pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                   *)((pTVar12->AllocatorInstance).InlineData + 0x80);
      } while (lVar15 != 0);
    }
    FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
    if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
      FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
      FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
    }
    local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
    local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
    local_698.IndexRanges.ArrayMax = 0x40;
    local_698.IndexRanges.AllocatorInstance.SecondaryData =
         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
    local_698.IndexRanges.ArrayNum = 0;
    local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
    iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
    ::FString::FString(&local_6b8,"Repeated 0s results in 0 index only");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_6b8.Data.ArrayNum != 0) {
      FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,1);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      ::FString::FString(&local_6b8,"1:2");
      local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
      local_698.ArraySize = 0x200;
      local_698.IndexRanges.AllocatorInstance.SecondaryData =
           (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
      local_698.IndexRanges.ArrayNum = 0;
      local_698.IndexRanges.ArrayMax = 0x40;
      local_6a8.Size = local_6b8.Data.ArrayNum + -1;
      if (local_6b8.Data.ArrayNum == 0) {
        local_6a8.Size = 0;
      }
      PCGParser::ParseIndexRanges(&local_698,&local_6a8);
      local_258.ArraySize = local_698.ArraySize;
      if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        lVar15 = 4;
        pTVar10 = &local_258.IndexRanges;
        pTVar12 = &local_698.IndexRanges;
        do {
          uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
          uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
          uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
          *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
               *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
          uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
          uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
          uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
          uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
          uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
          uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
          uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
          uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
          uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
          uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
          uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
          *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
          lVar15 = lVar15 + -1;
          pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                     *)((pTVar10->AllocatorInstance).InlineData + 0x80);
          pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                     *)((pTVar12->AllocatorInstance).InlineData + 0x80);
        } while (lVar15 != 0);
      }
      FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
      if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
        FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
        FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
      }
      local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
      local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
      local_698.IndexRanges.ArrayMax = 0x40;
      local_698.IndexRanges.AllocatorInstance.SecondaryData =
           (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
      local_698.IndexRanges.ArrayNum = 0;
      local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
      iVar7 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
      ::FString::FString(&local_6b8,"Single index range created");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_6b8.Data.ArrayNum != 0) {
        FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,1);
      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        ::FString::FString(&local_6b8,"2,");
        local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
        local_698.ArraySize = 0x200;
        local_698.IndexRanges.AllocatorInstance.SecondaryData =
             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
        local_698.IndexRanges.ArrayNum = 0;
        local_698.IndexRanges.ArrayMax = 0x40;
        iVar7 = 0;
        local_6a8.Size = local_6b8.Data.ArrayNum + -1;
        if (local_6b8.Data.ArrayNum == 0) {
          local_6a8.Size = iVar7;
        }
        PCGParser::ParseIndexRanges(&local_698,&local_6a8);
        local_258.ArraySize = local_698.ArraySize;
        if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          lVar15 = 4;
          pTVar10 = &local_258.IndexRanges;
          pTVar12 = &local_698.IndexRanges;
          do {
            uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
            uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
            uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
            *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
                 *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
            uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
            uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
            uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
            uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
            uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
            uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
            uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
            uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
            uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
            uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
            uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
            uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
            *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
            lVar15 = lVar15 + -1;
            pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                       *)((pTVar10->AllocatorInstance).InlineData + 0x80);
            pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                       *)((pTVar12->AllocatorInstance).InlineData + 0x80);
          } while (lVar15 != 0);
        }
        FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
        if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
          FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
        }
        local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
        local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
        local_698.IndexRanges.ArrayMax = 0x40;
        local_698.IndexRanges.AllocatorInstance.SecondaryData =
             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
        local_698.IndexRanges.ArrayNum = 0;
        local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
        }
        iVar8 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
        ::FString::FString(&local_6b8,"Empty value ignored, after");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_6b8.Data.ArrayNum != 0) {
          FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8,1);
        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          ::FString::FString(&local_6b8,",2");
          local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
          local_698.ArraySize = 0x200;
          local_698.IndexRanges.AllocatorInstance.SecondaryData =
               (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
          local_698.IndexRanges.ArrayNum = 0;
          local_698.IndexRanges.ArrayMax = 0x40;
          local_6a8.Size = local_6b8.Data.ArrayNum + -1;
          if (local_6b8.Data.ArrayNum == 0) {
            local_6a8.Size = iVar7;
          }
          PCGParser::ParseIndexRanges(&local_698,&local_6a8);
          local_258.ArraySize = local_698.ArraySize;
          if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
              (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
            lVar15 = 4;
            pTVar10 = &local_258.IndexRanges;
            pTVar12 = &local_698.IndexRanges;
            do {
              uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
              uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
              uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
              *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
                   *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
              uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
              uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
              uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
              uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
              uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
              uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
              uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
              uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
              uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
              uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
              uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
              uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
              *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
              lVar15 = lVar15 + -1;
              pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                         *)((pTVar10->AllocatorInstance).InlineData + 0x80);
              pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                         *)((pTVar12->AllocatorInstance).InlineData + 0x80);
            } while (lVar15 != 0);
          }
          FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
          if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
              (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
            FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
            FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
          }
          local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
          local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
          local_698.IndexRanges.ArrayMax = 0x40;
          local_698.IndexRanges.AllocatorInstance.SecondaryData =
               (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
          local_698.IndexRanges.ArrayNum = 0;
          local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
          if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
          }
          iVar8 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
          ::FString::FString(&local_6b8,"Empty value ignored, before");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_6b8.Data.ArrayNum != 0) {
            FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8,1);
          if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            ::FString::FString(&local_6b8,",,,,2,,,");
            local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
            local_698.ArraySize = 0x200;
            local_698.IndexRanges.AllocatorInstance.SecondaryData =
                 (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
            local_698.IndexRanges.ArrayNum = 0;
            local_698.IndexRanges.ArrayMax = 0x40;
            local_6a8.Size = local_6b8.Data.ArrayNum + -1;
            if (local_6b8.Data.ArrayNum == 0) {
              local_6a8.Size = iVar7;
            }
            PCGParser::ParseIndexRanges(&local_698,&local_6a8);
            local_258.ArraySize = local_698.ArraySize;
            if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
              lVar15 = 4;
              pTVar10 = &local_258.IndexRanges;
              pTVar12 = &local_698.IndexRanges;
              do {
                uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
                uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
                uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
                *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
                     *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
                uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
                uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
                uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
                uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
                uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
                uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
                uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
                uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
                uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
                uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
                uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
                *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
                lVar15 = lVar15 + -1;
                pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                           *)((pTVar10->AllocatorInstance).InlineData + 0x80);
                pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                           *)((pTVar12->AllocatorInstance).InlineData + 0x80);
              } while (lVar15 != 0);
            }
            FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
            if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
              FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
              FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
            }
            local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
            local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
            local_698.IndexRanges.ArrayMax = 0x40;
            local_698.IndexRanges.AllocatorInstance.SecondaryData =
                 (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
            local_698.IndexRanges.ArrayNum = 0;
            local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
            if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
            }
            iVar8 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
            ::FString::FString(&local_6b8,"Empty value ignored, multiple");
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_6b8.Data.ArrayNum != 0) {
              FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
            }
            bVar6 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8,1);
            if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              ::FString::FString(&local_6b8,"0,*");
              local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
              local_698.ArraySize = 0x200;
              local_698.IndexRanges.AllocatorInstance.SecondaryData =
                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
              local_698.IndexRanges.ArrayNum = 0;
              local_698.IndexRanges.ArrayMax = 0x40;
              local_6a8.Size = local_6b8.Data.ArrayNum + -1;
              if (local_6b8.Data.ArrayNum == 0) {
                local_6a8.Size = iVar7;
              }
              PCGParser::ParseIndexRanges(&local_698,&local_6a8);
              local_258.ArraySize = local_698.ArraySize;
              if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                lVar15 = 4;
                pTVar10 = &local_258.IndexRanges;
                pTVar12 = &local_698.IndexRanges;
                do {
                  uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
                  uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
                  uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
                  *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
                       *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
                  uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
                  uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
                  uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
                  uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
                  uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
                  uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
                  uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
                  uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
                  uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
                  uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
                  uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
                  uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
                  *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
                  lVar15 = lVar15 + -1;
                  pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                             *)((pTVar10->AllocatorInstance).InlineData + 0x80);
                  pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                             *)((pTVar12->AllocatorInstance).InlineData + 0x80);
                } while (lVar15 != 0);
              }
              FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
              if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
                FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
              }
              local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
              local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
              local_698.IndexRanges.ArrayMax = 0x40;
              local_698.IndexRanges.AllocatorInstance.SecondaryData =
                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
              local_698.IndexRanges.ArrayNum = 0;
              local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
              if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
              }
              iVar8 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
              ::FString::FString(&local_6b8,"Invalid character has no result");
              FVar14.Data = (FScriptContainerElement *)L"";
              if (local_6b8.Data.ArrayNum != 0) {
                FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
              }
              bVar6 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8,1);
              if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
              }
              if (bVar6) {
                ::FString::FString(&local_6b8,"");
                local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                local_478.ArraySize = 0x200;
                local_478.IndexRanges.AllocatorInstance.SecondaryData =
                     (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                local_478.IndexRanges.ArrayNum = 0;
                local_478.IndexRanges.ArrayMax = 0x40;
                iVar8 = 0;
                local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                if (local_6b8.Data.ArrayNum == 0) {
                  local_6a8.Size = iVar8;
                }
                PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                  FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData);
                }
                if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                }
                iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
                ::FString::FString(&local_6b8,"Empty expression has no result");
                FVar14.Data = (FScriptContainerElement *)L"";
                if (local_6b8.Data.ArrayNum != 0) {
                  FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                }
                bVar6 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar9,0);
                if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                }
                if (bVar6) {
                  ::FString::FString(&local_6b8,",");
                  local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                  local_698.ArraySize = 0x200;
                  local_698.IndexRanges.AllocatorInstance.SecondaryData =
                       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                  local_698.IndexRanges.ArrayNum = 0;
                  local_698.IndexRanges.ArrayMax = 0x40;
                  local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                  if (local_6b8.Data.ArrayNum == 0) {
                    local_6a8.Size = iVar8;
                  }
                  PCGParser::ParseIndexRanges(&local_698,&local_6a8);
                  local_258.ArraySize = local_698.ArraySize;
                  if (local_698.IndexRanges.AllocatorInstance.SecondaryData ==
                      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                    pTVar10 = &local_258.IndexRanges;
                    pTVar12 = &local_698.IndexRanges;
                    do {
                      uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 8);
                      uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x10);
                      uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x18);
                      *(undefined8 *)(pTVar10->AllocatorInstance).InlineData =
                           *(undefined8 *)(pTVar12->AllocatorInstance).InlineData;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar2;
                      uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x20);
                      uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x28);
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar3;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar4;
                      uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x30);
                      uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x38);
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar2;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar5;
                      uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x40);
                      uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x48);
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar3;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar4;
                      uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x50);
                      uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x58);
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar2;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar5;
                      uVar2 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x60);
                      uVar5 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x68);
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar3;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar4;
                      uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x70);
                      uVar4 = *(undefined8 *)((pTVar12->AllocatorInstance).InlineData + 0x78);
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar2;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar5;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar3;
                      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar4;
                      lVar16 = lVar16 + -1;
                      pTVar10 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                 *)((pTVar10->AllocatorInstance).InlineData + 0x80);
                      pTVar12 = (TArray<PCGIndexing::FPCGIndexRange,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                                 *)((pTVar12->AllocatorInstance).InlineData + 0x80);
                    } while (lVar16 != 0);
                  }
                  FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
                  if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
                      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                    FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
                    FVar13 = local_698.IndexRanges.AllocatorInstance.SecondaryData;
                  }
                  local_258.IndexRanges.ArrayNum = local_698.IndexRanges.ArrayNum;
                  local_258.IndexRanges.ArrayMax = local_698.IndexRanges.ArrayMax;
                  local_698.IndexRanges.ArrayMax = 0x40;
                  local_698.IndexRanges.AllocatorInstance.SecondaryData =
                       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                  local_698.IndexRanges.ArrayNum = 0;
                  local_258.IndexRanges.AllocatorInstance.SecondaryData = FVar13;
                  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                  }
                  iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
                  ::FString::FString(&local_6b8,"Element delimiter only has no result");
                  FVar14.Data = (FScriptContainerElement *)L"";
                  if (local_6b8.Data.ArrayNum != 0) {
                    FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                  }
                  bVar6 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar9,0);
                  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                  }
                  if (bVar6) {
                    ::FString::FString(&local_6b8,"#");
                    local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                    local_478.ArraySize = 0x200;
                    local_478.IndexRanges.AllocatorInstance.SecondaryData =
                         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                    local_478.IndexRanges.ArrayNum = 0;
                    local_478.IndexRanges.ArrayMax = 0x40;
                    local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                    if (local_6b8.Data.ArrayNum == 0) {
                      local_6a8.Size = iVar8;
                    }
                    PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                    PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                    if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                      FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData);
                    }
                    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                    }
                    iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
                    ::FString::FString(&local_6b8,"Invalid character has no result");
                    FVar14.Data = (FScriptContainerElement *)L"";
                    if (local_6b8.Data.ArrayNum != 0) {
                      FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                    }
                    bVar6 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar9,0);
                    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                    }
                    if (bVar6) {
                      ::FString::FString(&local_6b8,"0(,5:6");
                      local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                      local_478.ArraySize = 0x200;
                      local_478.IndexRanges.AllocatorInstance.SecondaryData =
                           (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                      local_478.IndexRanges.ArrayNum = 0;
                      local_478.IndexRanges.ArrayMax = 0x40;
                      local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                      if (local_6b8.Data.ArrayNum == 0) {
                        local_6a8.Size = iVar8;
                      }
                      PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                      PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                      if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                        FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData)
                        ;
                      }
                      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                      }
                      iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
                      ::FString::FString(&local_6b8,"Invalid character has no result");
                      FVar14.Data = (FScriptContainerElement *)L"";
                      if (local_6b8.Data.ArrayNum != 0) {
                        FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                      }
                      bVar6 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar9,0)
                      ;
                      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                      }
                      if (bVar6) {
                        ::FString::FString(&local_6b8,"3:");
                        local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                        local_478.ArraySize = 0x200;
                        local_478.IndexRanges.AllocatorInstance.SecondaryData =
                             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                        local_478.IndexRanges.ArrayNum = 0;
                        local_478.IndexRanges.ArrayMax = 0x40;
                        local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                        if (local_6b8.Data.ArrayNum == 0) {
                          local_6a8.Size = iVar8;
                        }
                        PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                        PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                        if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                          FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                SecondaryData);
                        }
                        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                        }
                        iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
                        ::FString::FString(&local_6b8,"Range end index missing has no result");
                        FVar14.Data = (FScriptContainerElement *)L"";
                        if (local_6b8.Data.ArrayNum != 0) {
                          FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                        }
                        bVar6 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar9,
                                           0x1fd);
                        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                        }
                        if (bVar6) {
                          ::FString::FString(&local_6b8,"0,1,2,5:2");
                          local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                          local_478.ArraySize = 0x200;
                          local_478.IndexRanges.AllocatorInstance.SecondaryData =
                               (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                          local_478.IndexRanges.ArrayNum = 0;
                          local_478.IndexRanges.ArrayMax = 0x40;
                          local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                          if (local_6b8.Data.ArrayNum == 0) {
                            local_6a8.Size = iVar8;
                          }
                          PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                          PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                          if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                              (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                            FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                  SecondaryData);
                          }
                          if (local_6b8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                          }
                          iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
                          ::FString::FString(&local_6b8,"Inverted range is excluded in the results")
                          ;
                          FVar14.Data = (FScriptContainerElement *)L"";
                          if (local_6b8.Data.ArrayNum != 0) {
                            FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                          }
                          bVar6 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                             iVar9,3);
                          if (local_6b8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                          }
                          if (bVar6) {
                            ::FString::FString(&local_6b8,"5:2");
                            local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                            local_478.ArraySize = 0x200;
                            local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                 (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                            local_478.IndexRanges.ArrayNum = 0;
                            local_478.IndexRanges.ArrayMax = 0x40;
                            local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                            if (local_6b8.Data.ArrayNum == 0) {
                              local_6a8.Size = iVar8;
                            }
                            PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                            PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                            if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                              FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                    SecondaryData);
                            }
                            if (local_6b8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                            }
                            iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258)
                            ;
                            ::FString::FString(&local_6b8,"Inverted range has no result");
                            FVar14.Data = (FScriptContainerElement *)L"";
                            if (local_6b8.Data.ArrayNum != 0) {
                              FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                            }
                            bVar6 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                               iVar9,0);
                            if (local_6b8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                            }
                            if (bVar6) {
                              local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                              ;
                              local_6b8.Data.ArrayNum = 0;
                              local_6b8.Data.ArrayMax = 0;
                              ::FString::AppendInt(&local_6b8,0x200);
                              local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                              local_478.ArraySize = 0x200;
                              local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                              local_478.IndexRanges.ArrayNum = 0;
                              local_478.IndexRanges.ArrayMax = 0x40;
                              local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                              if (local_6b8.Data.ArrayNum == 0) {
                                local_6a8.Size = iVar8;
                              }
                              PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                              PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                              if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                      SecondaryData);
                              }
                              if (local_6b8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                              }
                              iVar8 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                (&local_258);
                              ::FString::FString(&local_6b8,"Selected array max size");
                              FVar14.Data = (FScriptContainerElement *)L"";
                              if (local_6b8.Data.ArrayNum != 0) {
                                FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                              }
                              bVar6 = FAutomationTestBase::TestEqual
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                                 iVar8,0);
                              if (local_6b8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                              }
                              if (bVar6) {
                                local_6b8.Data.AllocatorInstance.Data =
                                     (FScriptContainerElement *)0x0;
                                local_6b8.Data.ArrayNum = 0;
                                local_6b8.Data.ArrayMax = 0;
                                ::FString::AppendInt(&local_6b8,0x201);
                                local_6a8.DataPtr = (wchar_t *)local_6b8.Data.AllocatorInstance.Data
                                ;
                                local_478.ArraySize = 0x200;
                                local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                     (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                local_478.IndexRanges.ArrayNum = 0;
                                local_478.IndexRanges.ArrayMax = 0x40;
                                iVar8 = 0;
                                local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                if (local_6b8.Data.ArrayNum == 0) {
                                  local_6a8.Size = iVar8;
                                }
                                PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478);
                                if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                  FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                        SecondaryData);
                                }
                                if (local_6b8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                }
                                iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                  (&local_258);
                                ::FString::FString(&local_6b8,
                                                   "Index outside the bounds of the array");
                                FVar14.Data = (FScriptContainerElement *)L"";
                                if (local_6b8.Data.ArrayNum != 0) {
                                  FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                }
                                bVar6 = FAutomationTestBase::TestEqual
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar14.Data,iVar9,0);
                                if (local_6b8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                }
                                if (bVar6) {
                                  local_6b8.Data.AllocatorInstance.Data =
                                       (FScriptContainerElement *)0x0;
                                  local_6b8.Data.ArrayNum = 0;
                                  local_6b8.Data.ArrayMax = 0;
                                  ::FString::AppendInt(&local_6b8,-0x201);
                                  local_6a8.DataPtr =
                                       (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                                  local_478.ArraySize = 0x200;
                                  local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                  local_478.IndexRanges.ArrayNum = 0;
                                  local_478.IndexRanges.ArrayMax = 0x40;
                                  local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                  if (local_6b8.Data.ArrayNum == 0) {
                                    local_6a8.Size = iVar8;
                                  }
                                  PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                  PCGIndexing::FPCGIndexCollection::operator=(&local_258,&local_478)
                                  ;
                                  if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                    FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                          SecondaryData);
                                  }
                                  if (local_6b8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                  }
                                  iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                    (&local_258);
                                  ::FString::FString(&local_6b8,
                                                     "Index outside the bounds of the array");
                                  FVar14.Data = (FScriptContainerElement *)L"";
                                  if (local_6b8.Data.ArrayNum != 0) {
                                    FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                  }
                                  bVar6 = FAutomationTestBase::TestEqual
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar14.Data,iVar9,0);
                                  if (local_6b8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar6) {
                                    ::FString::FString(&local_6b8,
                                                                                                              
                                                  "65465465498475309485730495873409587654684986146162342348438"
                                                  );
                                    local_6a8.DataPtr =
                                         (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                                    local_478.ArraySize = 0x7fffffff;
                                    local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                    local_478.IndexRanges.ArrayNum = 0;
                                    local_478.IndexRanges.ArrayMax = 0x40;
                                    local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                    if (local_6b8.Data.ArrayNum == 0) {
                                      local_6a8.Size = iVar8;
                                    }
                                    PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                    PCGIndexing::FPCGIndexCollection::operator=
                                              (&local_258,&local_478);
                                    if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                      FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.
                                                            SecondaryData);
                                    }
                                    if (local_6b8.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                    }
                                    iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                      (&local_258);
                                    ::FString::FString(&local_6b8,
                                                                                                              
                                                  "Large value converts to int32 max which is the max size of the array which fails with no result"
                                                  );
                                    FVar14.Data = (FScriptContainerElement *)L"";
                                    if (local_6b8.Data.ArrayNum != 0) {
                                      FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                    }
                                    bVar6 = FAutomationTestBase::TestEqual
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar14.Data,iVar9,0);
                                    if (local_6b8.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar6) {
                                      ::FString::FString(&local_6b8,":::::::::");
                                      local_6a8.DataPtr =
                                           (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                                      local_478.ArraySize = 0x200;
                                      local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                           (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                      local_478.IndexRanges.ArrayNum = 0;
                                      local_478.IndexRanges.ArrayMax = 0x40;
                                      local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                      if (local_6b8.Data.ArrayNum == 0) {
                                        local_6a8.Size = iVar8;
                                      }
                                      PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                      PCGIndexing::FPCGIndexCollection::operator=
                                                (&local_258,&local_478);
                                      if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                          (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                        FMemory::Free((void *)local_478.IndexRanges.
                                                              AllocatorInstance.SecondaryData);
                                      }
                                      if (local_6b8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                      }
                                      iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                        (&local_258);
                                      ::FString::FString(&local_6b8,
                                                         "Range delimiter only has no result");
                                      FVar14.Data = (FScriptContainerElement *)L"";
                                      if (local_6b8.Data.ArrayNum != 0) {
                                        FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                      }
                                      bVar6 = FAutomationTestBase::TestEqual
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar14.Data,iVar9,0);
                                      if (local_6b8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar6) {
                                        ::FString::FString(&local_6b8,"1:::::::::");
                                        local_6a8.DataPtr =
                                             (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                                        local_478.ArraySize = 0x200;
                                        local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                        local_478.IndexRanges.ArrayNum = 0;
                                        local_478.IndexRanges.ArrayMax = 0x40;
                                        local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                        if (local_6b8.Data.ArrayNum == 0) {
                                          local_6a8.Size = iVar8;
                                        }
                                        PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                        PCGIndexing::FPCGIndexCollection::operator=
                                                  (&local_258,&local_478);
                                        if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                                            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                          FMemory::Free((void *)local_478.IndexRanges.
                                                                AllocatorInstance.SecondaryData);
                                        }
                                        if (local_6b8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                        }
                                        iVar9 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount
                                                          (&local_258);
                                        ::FString::FString(&local_6b8,
                                                                                                                      
                                                  "Multiple range delimiter with start index has no result"
                                                  );
                                        FVar14.Data = (FScriptContainerElement *)L"";
                                        if (local_6b8.Data.ArrayNum != 0) {
                                          FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                        }
                                        bVar6 = FAutomationTestBase::TestEqual
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar14.Data,iVar9,0);
                                        if (local_6b8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                        }
                                        if (bVar6) {
                                          ::FString::FString(&local_6b8,"::::::::::1");
                                          local_6a8.DataPtr =
                                               (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                                          local_478.ArraySize = 0x200;
                                          local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                               (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                          local_478.IndexRanges.ArrayNum = 0;
                                          local_478.IndexRanges.ArrayMax = 0x40;
                                          local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                          if (local_6b8.Data.ArrayNum == 0) {
                                            local_6a8.Size = iVar8;
                                          }
                                          PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                          PCGIndexing::FPCGIndexCollection::operator=
                                                    (&local_258,&local_478);
                                          if (local_478.IndexRanges.AllocatorInstance.SecondaryData
                                              != (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                            FMemory::Free((void *)local_478.IndexRanges.
                                                                  AllocatorInstance.SecondaryData);
                                          }
                                          if (local_6b8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                          }
                                          iVar8 = PCGIndexing::FPCGIndexCollection::
                                                  GetTotalIndexCount(&local_258);
                                          ::FString::FString(&local_6b8,
                                                                                                                          
                                                  "Multiple range delimiter with end index has no result"
                                                  );
                                          FVar14.Data = (FScriptContainerElement *)L"";
                                          if (local_6b8.Data.ArrayNum != 0) {
                                            FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                          }
                                          bVar6 = FAutomationTestBase::TestEqual
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar14.Data,iVar8,0);
                                          if (local_6b8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar6) {
                                            ::FString::FString(&local_6b8,"1::::::::::1");
                                            local_6a8.DataPtr =
                                                 (wchar_t *)local_6b8.Data.AllocatorInstance.Data;
                                            local_478.ArraySize = 0x200;
                                            local_478.IndexRanges.AllocatorInstance.SecondaryData =
                                                 (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                            local_478.IndexRanges.ArrayNum = 0;
                                            local_478.IndexRanges.ArrayMax = 0x40;
                                            local_6a8.Size = local_6b8.Data.ArrayNum + -1;
                                            if (local_6b8.Data.ArrayNum == 0) {
                                              local_6a8.Size = iVar7;
                                            }
                                            PCGParser::ParseIndexRanges(&local_478,&local_6a8);
                                            PCGIndexing::FPCGIndexCollection::operator=
                                                      (&local_258,&local_478);
                                            if (local_478.IndexRanges.AllocatorInstance.
                                                SecondaryData !=
                                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                              FMemory::Free((void *)local_478.IndexRanges.
                                                                    AllocatorInstance.SecondaryData)
                                              ;
                                            }
                                            if (local_6b8.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                            }
                                            iVar7 = PCGIndexing::FPCGIndexCollection::
                                                    GetTotalIndexCount(&local_258);
                                            ::FString::FString(&local_6b8,
                                                                                                                              
                                                  "Redundant delimiter between indices has no result"
                                                  );
                                            FVar14.Data = (FScriptContainerElement *)L"";
                                            if (local_6b8.Data.ArrayNum != 0) {
                                              FVar14.Data = local_6b8.Data.AllocatorInstance.Data;
                                            }
                                            bVar6 = FAutomationTestBase::TestEqual
                                                              ((FAutomationTestBase *)this,
                                                               (wchar_t *)FVar14.Data,iVar7,0);
                                            if (local_6b8.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar6) {
                                              bVar6 = true;
                                              goto LAB_14a00d898;
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
  bVar6 = false;
LAB_14a00d898:
  if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 14a00f0c0

FString * __thiscall
FPCGParsingTest_Robustness::GetBeautifiedTestName
          (FPCGParsingTest_Robustness *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Parsing.Robustness");
  return __return_storage_ptr__;
}

