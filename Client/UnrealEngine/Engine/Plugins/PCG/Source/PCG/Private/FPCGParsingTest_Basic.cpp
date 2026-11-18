// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a0087b0

EAutomationTestFlags __thiscall FPCGParsingTest_Basic::GetTestFlags(FPCGParsingTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a0087c0

bool __thiscall FPCGParsingTest_Basic::IsStressTest(FPCGParsingTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a0087d0

uint __thiscall FPCGParsingTest_Basic::GetRequiredDeviceNum(FPCGParsingTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a0087e0

FString * __thiscall
FPCGParsingTest_Basic::GetTestSourceFileName
          (FPCGParsingTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Parsing\\PCGParsingTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a008810

int __thiscall FPCGParsingTest_Basic::GetTestSourceFileLine(FPCGParsingTest_Basic *this)

{
  return 0x16;
}

// GetTests @ 14a008820

/* WARNING: Removing unreachable block (ram,0x00014a00890d) */
/* WARNING: Removing unreachable block (ram,0x00014a0089d8) */

void __thiscall
FPCGParsingTest_Basic::GetTests
          (FPCGParsingTest_Basic *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Parsing.Basic");
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

// RunTest @ 14a008a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FPCGParsingTest_Basic::RunTest(FPCGParsingTest_Basic *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_11e8 [32];
  ulonglong local_11c8;
  longlong local_11c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_11b8;
  FString local_11a8;
  FString local_1198;
  FString local_1188;
  FString local_1178;
  FString local_1168;
  FString local_1158;
  FString local_1148;
  FString local_1138;
  FString local_1128;
  FString local_1118;
  FString local_1108;
  FString local_10f8;
  FString local_10e8;
  FString local_10d8;
  FString local_10c8;
  FString local_10b8;
  FString local_10a8;
  FString local_1098;
  FString local_1088;
  FString local_1078;
  FString local_1068;
  FString local_1058;
  FString local_1048;
  FString local_1038;
  FString local_1028;
  FString local_1018;
  FString local_1008;
  FString local_ff8;
  FString local_fe8;
  FString local_fd8;
  FString local_fc8;
  FString local_fb8;
  FString local_fa8;
  FString local_f98;
  TStringView<wchar_t> local_f88;
  TStringView<wchar_t> local_f78;
  TStringView<wchar_t> local_f68;
  TStringView<wchar_t> local_f58;
  TStringView<wchar_t> local_f48;
  TStringView<wchar_t> local_f38;
  TStringView<wchar_t> local_f28;
  FPCGIndexCollection local_f18;
  FPCGIndexCollection local_cf8;
  FPCGIndexCollection local_ad8;
  FPCGIndexCollection local_8b8;
  FPCGIndexCollection local_698;
  FPCGIndexCollection local_478;
  FPCGIndexCollection local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_11e8;
  ::FString::FString(&local_11a8,"4");
  uVar7 = 0;
  local_f88.DataPtr = (wchar_t *)local_11a8.Data.AllocatorInstance.Data;
  local_258.ArraySize = 0x200;
  local_258.IndexRanges.AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  local_258.IndexRanges.ArrayNum = 0;
  local_258.IndexRanges.ArrayMax = 0x40;
  local_f88.Size = local_11a8.Data.ArrayNum + -1;
  if (local_11a8.Data.ArrayNum == 0) {
    local_f88.Size = 0;
  }
  PCGParser::ParseIndexRanges(&local_258,&local_f88);
  if (local_11a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a8.Data.AllocatorInstance.Data);
  }
  iVar4 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_258);
  ::FString::FString(&local_1198,"Singular non-range index has 1 index");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_1198.Data.ArrayNum != 0) {
    FVar6.Data = local_1198.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar4,1);
  if (local_1198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1198.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)local_258.IndexRanges.AllocatorInstance.SecondaryData;
  if (bVar2) {
    iVar4 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_258);
    ::FString::FString(&local_1188,"Singular non-range index has 1 range");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_1188.Data.ArrayNum != 0) {
      FVar6.Data = local_1188.Data.AllocatorInstance.Data;
    }
    bVar2 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar4,1);
    if (local_1188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.Data.AllocatorInstance.Data);
    }
    FVar6.Data = (FScriptContainerElement *)local_258.IndexRanges.AllocatorInstance.SecondaryData;
    if (bVar2) {
      bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_258,4);
      ::FString::FString(&local_1178,"Singular non-range index is correct");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_1178.Data.ArrayNum != 0) {
        FVar6.Data = local_1178.Data.AllocatorInstance.Data;
      }
      bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar2)
      ;
      if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1178.Data.AllocatorInstance.Data);
      }
      FVar6.Data = (FScriptContainerElement *)local_258.IndexRanges.AllocatorInstance.SecondaryData;
      if (bVar2) {
        if (local_258.IndexRanges.AllocatorInstance.SecondaryData !=
            (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
          FMemory::Free((void *)local_258.IndexRanges.AllocatorInstance.SecondaryData);
        }
        ::FString::FString(&local_1168,"-1");
        local_f78.DataPtr = (wchar_t *)local_1168.Data.AllocatorInstance.Data;
        local_478.ArraySize = 0x200;
        local_478.IndexRanges.AllocatorInstance.SecondaryData =
             (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
        local_478.IndexRanges.ArrayNum = 0;
        local_478.IndexRanges.ArrayMax = 0x40;
        iVar4 = 0;
        local_f78.Size = local_1168.Data.ArrayNum + -1;
        if (local_1168.Data.ArrayNum == 0) {
          local_f78.Size = iVar4;
        }
        PCGParser::ParseIndexRanges(&local_478,&local_f78);
        if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1168.Data.AllocatorInstance.Data);
        }
        iVar5 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_478);
        ::FString::FString(&local_1158,"Single final index has 1 index");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_1158.Data.ArrayNum != 0) {
          FVar6.Data = local_1158.Data.AllocatorInstance.Data;
        }
        bVar2 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar5,1);
        if (local_1158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1158.Data.AllocatorInstance.Data);
        }
        FVar6.Data = (FScriptContainerElement *)
                     local_478.IndexRanges.AllocatorInstance.SecondaryData;
        if (bVar2) {
          iVar5 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_478);
          ::FString::FString(&local_1148,"Single final index has 1 range");
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_1148.Data.ArrayNum != 0) {
            FVar6.Data = local_1148.Data.AllocatorInstance.Data;
          }
          bVar2 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar5,1);
          if (local_1148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1148.Data.AllocatorInstance.Data);
          }
          FVar6.Data = (FScriptContainerElement *)
                       local_478.IndexRanges.AllocatorInstance.SecondaryData;
          if (bVar2) {
            bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_478,0x1ff);
            ::FString::FString(&local_1138,"Single final index is correct");
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_1138.Data.ArrayNum != 0) {
              FVar6.Data = local_1138.Data.AllocatorInstance.Data;
            }
            bVar2 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar2);
            if (local_1138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1138.Data.AllocatorInstance.Data);
            }
            FVar6.Data = (FScriptContainerElement *)
                         local_478.IndexRanges.AllocatorInstance.SecondaryData;
            if (bVar2) {
              if (local_478.IndexRanges.AllocatorInstance.SecondaryData !=
                  (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                FMemory::Free((void *)local_478.IndexRanges.AllocatorInstance.SecondaryData);
              }
              ::FString::FString(&local_1128,"-4");
              local_f68.DataPtr = (wchar_t *)local_1128.Data.AllocatorInstance.Data;
              local_698.ArraySize = 0x200;
              local_698.IndexRanges.AllocatorInstance.SecondaryData =
                   (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
              local_698.IndexRanges.ArrayNum = 0;
              local_698.IndexRanges.ArrayMax = 0x40;
              local_f68.Size = local_1128.Data.ArrayNum + -1;
              if (local_1128.Data.ArrayNum == 0) {
                local_f68.Size = iVar4;
              }
              PCGParser::ParseIndexRanges(&local_698,&local_f68);
              if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1128.Data.AllocatorInstance.Data);
              }
              iVar5 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_698);
              ::FString::FString(&local_1118,"Negative non-range index has 1 index");
              FVar6.Data = (FScriptContainerElement *)L"";
              if (local_1118.Data.ArrayNum != 0) {
                FVar6.Data = local_1118.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar5,1);
              if (local_1118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1118.Data.AllocatorInstance.Data);
              }
              FVar6.Data = (FScriptContainerElement *)
                           local_698.IndexRanges.AllocatorInstance.SecondaryData;
              if (bVar2) {
                iVar5 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_698);
                ::FString::FString(&local_1108,"Negative non-range index has 1 range");
                FVar6.Data = (FScriptContainerElement *)L"";
                if (local_1108.Data.ArrayNum != 0) {
                  FVar6.Data = local_1108.Data.AllocatorInstance.Data;
                }
                bVar2 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar5,1);
                if (local_1108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1108.Data.AllocatorInstance.Data);
                }
                FVar6.Data = (FScriptContainerElement *)
                             local_698.IndexRanges.AllocatorInstance.SecondaryData;
                if (bVar2) {
                  bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_698,0x1fc);
                  ::FString::FString(&local_10f8,"Negative non-range index is correct");
                  FVar6.Data = (FScriptContainerElement *)L"";
                  if (local_10f8.Data.ArrayNum != 0) {
                    FVar6.Data = local_10f8.Data.AllocatorInstance.Data;
                  }
                  bVar2 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar2);
                  if (local_10f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_10f8.Data.AllocatorInstance.Data);
                  }
                  FVar6.Data = (FScriptContainerElement *)
                               local_698.IndexRanges.AllocatorInstance.SecondaryData;
                  if (bVar2) {
                    if (local_698.IndexRanges.AllocatorInstance.SecondaryData !=
                        (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                      FMemory::Free((void *)local_698.IndexRanges.AllocatorInstance.SecondaryData);
                    }
                    ::FString::FString(&local_10e8,"4,-4");
                    local_f58.DataPtr = (wchar_t *)local_10e8.Data.AllocatorInstance.Data;
                    local_ad8.ArraySize = 0x200;
                    local_ad8.IndexRanges.AllocatorInstance.SecondaryData =
                         (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                    local_ad8.IndexRanges.ArrayNum = 0;
                    local_ad8.IndexRanges.ArrayMax = 0x40;
                    local_f58.Size = local_10e8.Data.ArrayNum + -1;
                    if (local_10e8.Data.ArrayNum == 0) {
                      local_f58.Size = iVar4;
                    }
                    PCGParser::ParseIndexRanges(&local_ad8,&local_f58);
                    if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
                    }
                    iVar5 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_ad8);
                    ::FString::FString(&local_10d8,"Multiple index has 2 index");
                    iVar8 = 2;
                    FVar6.Data = (FScriptContainerElement *)L"";
                    if (local_10d8.Data.ArrayNum != 0) {
                      FVar6.Data = local_10d8.Data.AllocatorInstance.Data;
                    }
                    bVar2 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar5,2);
                    if (local_10d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_10d8.Data.AllocatorInstance.Data);
                    }
                    FVar6.Data = (FScriptContainerElement *)
                                 local_ad8.IndexRanges.AllocatorInstance.SecondaryData;
                    if (bVar2) {
                      iVar5 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_ad8);
                      ::FString::FString(&local_10c8,"Multiple index has 2 ranges");
                      FVar6.Data = (FScriptContainerElement *)L"";
                      if (local_10c8.Data.ArrayNum != 0) {
                        FVar6.Data = local_10c8.Data.AllocatorInstance.Data;
                      }
                      bVar2 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar5,2);
                      if (local_10c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_10c8.Data.AllocatorInstance.Data);
                      }
                      FVar6.Data = (FScriptContainerElement *)
                                   local_ad8.IndexRanges.AllocatorInstance.SecondaryData;
                      if (bVar2) {
                        bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_ad8,4);
                        if ((bVar2) &&
                           (bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                              (&local_ad8,0x1fc), bVar2)) {
                          bVar2 = true;
                        }
                        else {
                          bVar2 = false;
                        }
                        ::FString::FString(&local_10b8,"Multiple index (first) is correct");
                        FVar6.Data = (FScriptContainerElement *)L"";
                        if (local_10b8.Data.ArrayNum != 0) {
                          FVar6.Data = local_10b8.Data.AllocatorInstance.Data;
                        }
                        bVar2 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar2);
                        if (local_10b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_10b8.Data.AllocatorInstance.Data);
                        }
                        FVar6.Data = (FScriptContainerElement *)
                                     local_ad8.IndexRanges.AllocatorInstance.SecondaryData;
                        if (bVar2) {
                          if (local_ad8.IndexRanges.AllocatorInstance.SecondaryData !=
                              (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                            FMemory::Free((void *)local_ad8.IndexRanges.AllocatorInstance.
                                                  SecondaryData);
                          }
                          ::FString::FString(&local_10a8,"2:2");
                          local_f48.DataPtr = (wchar_t *)local_10a8.Data.AllocatorInstance.Data;
                          local_8b8.ArraySize = 0x200;
                          local_8b8.IndexRanges.AllocatorInstance.SecondaryData =
                               (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                          local_8b8.IndexRanges.ArrayNum = 0;
                          local_8b8.IndexRanges.ArrayMax = 0x40;
                          local_f48.Size = local_10a8.Data.ArrayNum + -1;
                          if (local_10a8.Data.ArrayNum == 0) {
                            local_f48.Size = iVar4;
                          }
                          PCGParser::ParseIndexRanges(&local_8b8,&local_f48);
                          if (local_10a8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_10a8.Data.AllocatorInstance.Data);
                          }
                          iVar4 = PCGIndexing::FPCGIndexCollection::GetTotalIndexCount(&local_8b8);
                          ::FString::FString(&local_1098,"Repeated index has 1 index");
                          FVar6.Data = (FScriptContainerElement *)L"";
                          if (local_1098.Data.ArrayNum != 0) {
                            FVar6.Data = local_1098.Data.AllocatorInstance.Data;
                          }
                          bVar2 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,iVar4
                                             ,1);
                          if (local_1098.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1098.Data.AllocatorInstance.Data);
                          }
                          FVar6.Data = (FScriptContainerElement *)
                                       local_8b8.IndexRanges.AllocatorInstance.SecondaryData;
                          if (bVar2) {
                            iVar4 = PCGIndexing::FPCGIndexCollection::GetTotalRangeCount(&local_8b8)
                            ;
                            ::FString::FString(&local_1088,"Repeated index has 1 range");
                            FVar6.Data = (FScriptContainerElement *)L"";
                            if (local_1088.Data.ArrayNum != 0) {
                              FVar6.Data = local_1088.Data.AllocatorInstance.Data;
                            }
                            bVar2 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
                                               iVar4,1);
                            if (local_1088.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1088.Data.AllocatorInstance.Data);
                            }
                            FVar6.Data = (FScriptContainerElement *)
                                         local_8b8.IndexRanges.AllocatorInstance.SecondaryData;
                            if (bVar2) {
                              bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex(&local_8b8,2);
                              ::FString::FString(&local_1078,"Repeated index is correct");
                              FVar6.Data = (FScriptContainerElement *)L"";
                              if (local_1078.Data.ArrayNum != 0) {
                                FVar6.Data = local_1078.Data.AllocatorInstance.Data;
                              }
                              bVar2 = FAutomationTestBase::TestTrue
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
                                                 bVar2);
                              if (local_1078.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_1078.Data.AllocatorInstance.Data);
                              }
                              FVar6.Data = (FScriptContainerElement *)
                                           local_8b8.IndexRanges.AllocatorInstance.SecondaryData;
                              if (bVar2) {
                                if (local_8b8.IndexRanges.AllocatorInstance.SecondaryData !=
                                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                  FMemory::Free((void *)local_8b8.IndexRanges.AllocatorInstance.
                                                        SecondaryData);
                                }
                                local_11b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                                local_11b8.ArrayNum = 0;
                                local_11b8.ArrayMax = 0;
                                TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                                          (&local_11b8,0x200,Default);
                                uVar9 = uVar7;
                                uVar10 = uVar7;
                                do {
                                  iVar4 = (int)uVar7;
                                  if ((local_11b8.ArrayNum <= iVar4) &&
                                     (local_11c8 = uVar10,
                                     local_11c0 = (longlong)local_11b8.ArrayNum,
                                     bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar2)) {
                                    pcVar1 = (code *)swi(3);
                                    uVar3 = (*pcVar1)();
                                    return (bool)uVar3;
                                  }
                                  uVar10 = uVar10 + 1;
                                  *(int *)(local_11b8.AllocatorInstance.Data + uVar9) = iVar4;
                                  uVar7 = (ulonglong)(iVar4 + 1U);
                                  uVar9 = uVar9 + 4;
                                } while ((int)(iVar4 + 1U) < 0x200);
                                ::FString::FString(&local_1068,"0,2:5,80:-10");
                                local_f38.DataPtr =
                                     (wchar_t *)local_1068.Data.AllocatorInstance.Data;
                                local_cf8.ArraySize = 0x200;
                                local_cf8.IndexRanges.AllocatorInstance.SecondaryData =
                                     (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                local_cf8.IndexRanges.ArrayNum = 0;
                                local_cf8.IndexRanges.ArrayMax = 0x40;
                                local_f38.Size = local_1068.Data.ArrayNum + -1;
                                if (local_1068.Data.ArrayNum == 0) {
                                  local_f38.Size = 0;
                                }
                                PCGParser::ParseIndexRanges(&local_cf8,&local_f38);
                                if (local_1068.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_1068.Data.AllocatorInstance.Data);
                                }
                                ::FString::FString(&local_1058,"80:-10,2:5,0");
                                local_f28.DataPtr =
                                     (wchar_t *)local_1058.Data.AllocatorInstance.Data;
                                local_f18.ArraySize = 0x200;
                                local_f18.IndexRanges.AllocatorInstance.SecondaryData =
                                     (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
                                local_f18.IndexRanges.ArrayNum = 0;
                                local_f18.IndexRanges.ArrayMax = 0x40;
                                local_f28.Size = local_1058.Data.ArrayNum + -1;
                                if (local_1058.Data.ArrayNum == 0) {
                                  local_f28.Size = 0;
                                }
                                PCGParser::ParseIndexRanges(&local_f18,&local_f28);
                                if (local_1058.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_1058.Data.AllocatorInstance.Data);
                                }
                                bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                  (&local_cf8,0);
                                ::FString::FString(&local_1048,"Valid single index");
                                FVar6.Data = (FScriptContainerElement *)L"";
                                if (local_1048.Data.ArrayNum != 0) {
                                  FVar6.Data = local_1048.Data.AllocatorInstance.Data;
                                }
                                bVar2 = FAutomationTestBase::TestTrue
                                                  ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data
                                                   ,bVar2);
                                if (local_1048.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_1048.Data.AllocatorInstance.Data);
                                }
                                if (bVar2) {
                                  bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                    (&local_f18,0);
                                  ::FString::FString(&local_1038,"Valid single index");
                                  FVar6.Data = (FScriptContainerElement *)L"";
                                  if (local_1038.Data.ArrayNum != 0) {
                                    FVar6.Data = local_1038.Data.AllocatorInstance.Data;
                                  }
                                  bVar2 = FAutomationTestBase::TestTrue
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar6.Data,bVar2);
                                  if (local_1038.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_1038.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar2) {
                                    bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                      (&local_cf8,1);
                                    ::FString::FString(&local_1028,"Missing single index");
                                    FVar6.Data = (FScriptContainerElement *)L"";
                                    if (local_1028.Data.ArrayNum != 0) {
                                      FVar6.Data = local_1028.Data.AllocatorInstance.Data;
                                    }
                                    bVar2 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar6.Data,!bVar2);
                                    if (local_1028.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_1028.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar2) {
                                      bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                        (&local_f18,1);
                                      ::FString::FString(&local_1018,"Missing single index");
                                      FVar6.Data = (FScriptContainerElement *)L"";
                                      if (local_1018.Data.ArrayNum != 0) {
                                        FVar6.Data = local_1018.Data.AllocatorInstance.Data;
                                      }
                                      bVar2 = FAutomationTestBase::TestTrue
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar6.Data,!bVar2);
                                      if (local_1018.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_1018.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar2) {
                                        do {
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_cf8,iVar8);
                                          ::FString::FString(&local_1008,"Valid range index");
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_1008.Data.ArrayNum != 0) {
                                            FVar6.Data = local_1008.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,bVar2);
                                          if (local_1008.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_1008.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) goto LAB_14a0098e9;
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_f18,iVar8);
                                          ::FString::FString(&local_ff8,"Valid range index");
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_ff8.Data.ArrayNum != 0) {
                                            FVar6.Data = local_ff8.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,bVar2);
                                          if (local_ff8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) goto LAB_14a0098e9;
                                          iVar8 = iVar8 + 1;
                                        } while (iVar8 < 5);
                                        iVar4 = 6;
                                        do {
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_cf8,iVar4);
                                          ::FString::FString(&local_fe8,"Missing range index");
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_fe8.Data.ArrayNum != 0) {
                                            FVar6.Data = local_fe8.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,!bVar2);
                                          if (local_fe8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) goto LAB_14a0098e9;
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_f18,iVar4);
                                          ::FString::FString(&local_fd8,"Missing range index");
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_fd8.Data.ArrayNum != 0) {
                                            FVar6.Data = local_fd8.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,!bVar2);
                                          if (local_fd8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) goto LAB_14a0098e9;
                                          iVar4 = iVar4 + 1;
                                        } while (iVar4 < 0x50);
                                        iVar4 = 0x50;
                                        do {
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_cf8,iVar4);
                                          ::FString::FString(&local_fc8,"Valid range negative index"
                                                            );
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_fc8.Data.ArrayNum != 0) {
                                            FVar6.Data = local_fc8.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,bVar2);
                                          if (local_fc8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) goto LAB_14a0098e9;
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_f18,iVar4);
                                          ::FString::FString(&local_fb8,"Valid range negative index"
                                                            );
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_fb8.Data.ArrayNum != 0) {
                                            FVar6.Data = local_fb8.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,bVar2);
                                          if (local_fb8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) goto LAB_14a0098e9;
                                          iVar4 = iVar4 + 1;
                                        } while (iVar4 < 0x1f6);
                                        iVar4 = 0x1f7;
                                        while( true ) {
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_cf8,iVar4);
                                          ::FString::FString(&local_fa8,
                                                             "Missing range negative index");
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_fa8.Data.ArrayNum != 0) {
                                            FVar6.Data = local_fa8.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,!bVar2);
                                          if (local_fa8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_fa8.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) break;
                                          bVar2 = PCGIndexing::FPCGIndexCollection::ContainsIndex
                                                            (&local_f18,iVar4);
                                          ::FString::FString(&local_f98,
                                                             "Missing range negative index");
                                          FVar6.Data = (FScriptContainerElement *)L"";
                                          if (local_f98.Data.ArrayNum != 0) {
                                            FVar6.Data = local_f98.Data.AllocatorInstance.Data;
                                          }
                                          bVar2 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar6.Data,!bVar2);
                                          if (local_f98.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_f98.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar2) break;
                                          iVar4 = iVar4 + 1;
                                          if (0x1ff < iVar4) {
                                            if (local_f18.IndexRanges.AllocatorInstance.
                                                SecondaryData !=
                                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                              FMemory::Free((void *)local_f18.IndexRanges.
                                                                    AllocatorInstance.SecondaryData)
                                              ;
                                            }
                                            if (local_cf8.IndexRanges.AllocatorInstance.
                                                SecondaryData !=
                                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                              FMemory::Free((void *)local_cf8.IndexRanges.
                                                                    AllocatorInstance.SecondaryData)
                                              ;
                                            }
                                            if ((ForElementType<PCGIndexing::FPCGIndexRange>)
                                                local_11b8.AllocatorInstance.Data !=
                                                (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                              FMemory::Free(local_11b8.AllocatorInstance.Data);
                                            }
                                            return true;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
LAB_14a0098e9:
                                if (local_f18.IndexRanges.AllocatorInstance.SecondaryData !=
                                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                  FMemory::Free((void *)local_f18.IndexRanges.AllocatorInstance.
                                                        SecondaryData);
                                }
                                FVar6.Data = local_11b8.AllocatorInstance.Data;
                                if (local_cf8.IndexRanges.AllocatorInstance.SecondaryData !=
                                    (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
                                  FMemory::Free((void *)local_cf8.IndexRanges.AllocatorInstance.
                                                        SecondaryData);
                                  FVar6.Data = local_11b8.AllocatorInstance.Data;
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
  if ((ForElementType<PCGIndexing::FPCGIndexRange>)FVar6.Data !=
      (ForElementType<PCGIndexing::FPCGIndexRange>)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return false;
}

// GetBeautifiedTestName @ 14a009980

FString * __thiscall
FPCGParsingTest_Basic::GetBeautifiedTestName
          (FPCGParsingTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Parsing.Basic");
  return __return_storage_ptr__;
}

