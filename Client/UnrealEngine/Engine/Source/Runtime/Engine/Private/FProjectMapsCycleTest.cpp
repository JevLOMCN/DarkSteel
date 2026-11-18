// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487ddad0

EAutomationTestFlags __thiscall FProjectMapsCycleTest::GetTestFlags(FProjectMapsCycleTest *this)

{
  return ProductFilter|ClientContext;
}

// IsStressTest @ 1487ddae0

bool __thiscall FProjectMapsCycleTest::IsStressTest(FProjectMapsCycleTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487ddaf0

uint __thiscall FProjectMapsCycleTest::GetRequiredDeviceNum(FProjectMapsCycleTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ddb00

FString * __thiscall
FProjectMapsCycleTest::GetTestSourceFileName
          (FProjectMapsCycleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ddb30

int __thiscall FProjectMapsCycleTest::GetTestSourceFileLine(FProjectMapsCycleTest *this)

{
  return 0x4fb;
}

// GetTests @ 1487ddc00

/* WARNING: Removing unreachable block (ram,0x0001487ddced) */
/* WARNING: Removing unreachable block (ram,0x0001487dddb8) */

void __thiscall
FProjectMapsCycleTest::GetTests
          (FProjectMapsCycleTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Project.Maps.Cycle");
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

// RunTest @ 1487ddde0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProjectMapsCycleTest::RunTest(FProjectMapsCycleTest *this,FString *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  FString *pFVar15;
  IAutomationLatentCommand *pIVar16;
  ulonglong uVar17;
  IAutomationLatentCommand *pIVar18;
  IAutomationLatentCommand *pIVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  undefined8 local_160;
  int local_158 [2];
  FString local_150;
  FString local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UObject *local_e0;
  FString local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  bVar9 = false;
  local_res18[0] = 0;
  pUVar12 = UAutomationTestSettings::StaticClass();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  local_e0 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((local_e0 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutomationTestSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x506,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_158[0] = 2;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  pwVar13 = FCommandLine::Get();
  bVar7 = FParse::Value(pwVar13,L"map=",&local_f0,true,(wchar_t **)0x0);
  if (bVar7) {
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_f0,&local_130,L"+",true);
    iVar11 = local_130.ArrayNum;
    pFVar23 = local_130.AllocatorInstance.Data + (longlong)local_130.ArrayNum * 0x10;
    FVar22.Data = local_130.AllocatorInstance.Data;
    while( true ) {
      if (local_130.ArrayNum != iVar11) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar22.Data == pFVar23) break;
      local_150.Data.ArrayNum = *(int *)(FVar22.Data + 8);
      lVar20 = (longlong)local_150.Data.ArrayNum;
      pvVar3 = *(void **)FVar22.Data;
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_150.Data.ArrayNum == 0) {
        local_150.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_150.Data.ArrayNum,0,(ForAnyElementType *)&local_150,
                   local_150.Data.ArrayNum,&local_150.Data.ArrayMax);
        memcpy(local_150.Data.AllocatorInstance.Data,pvVar3,lVar20 * 2);
      }
      bVar7 = FPackageName::SearchForPackageOnDisk((FString *)FVar22.Data,(FString *)0x0,&local_150)
      ;
      if (bVar7) {
        pFVar14 = FPackageName::GetMapPackageExtension();
        bVar9 = true;
        pFVar15 = FPaths::GetExtension(&local_68,&local_150,true);
        iVar10 = (pFVar14->Data).ArrayNum;
        iVar2 = (pFVar15->Data).ArrayNum;
        if (iVar2 == iVar10) {
          if (1 < iVar2) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                                (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
            bVar7 = iVar10 == 0;
            goto LAB_1487ddfc1;
          }
        }
        else {
          bVar7 = iVar10 + iVar2 == 1;
LAB_1487ddfc1:
          if (!bVar7) goto LAB_1487ddfcc;
        }
        bVar7 = true;
      }
      else {
LAB_1487ddfcc:
        bVar7 = false;
      }
      if ((bVar9) &&
         (bVar9 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        if (((local_168.Data <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             local_168.Data + (longlong)local_160._4_4_ * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar10 = (int)local_160;
        if ((int)local_160 == local_160._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_168,(int *)((longlong)&local_160 + 4));
        }
        FVar6.Data = local_150.Data.AllocatorInstance.Data;
        pFVar21 = local_168.Data + (longlong)iVar10 * 0x10;
        local_160 = CONCAT44(local_160._4_4_,iVar10 + 1);
        *(FScriptContainerElement **)pFVar21 = (FScriptContainerElement *)0x0;
        lVar20 = (longlong)local_150.Data.ArrayNum;
        *(int *)(pFVar21 + 8) = local_150.Data.ArrayNum;
        if (local_150.Data.ArrayNum == 0) {
          *(int *)(pFVar21 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_150.Data.ArrayNum,0,(ForAnyElementType *)pFVar21,
                     local_150.Data.ArrayNum,(int *)(pFVar21 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar21,FVar6.Data,lVar20 * 2);
        }
        if (3 < (byte)LogEngineAutomationTests._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
        }
      }
      else {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      FVar22.Data = FVar22.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  pwVar13 = FCommandLine::Get();
  FParse::Value(pwVar13,L"map.cycles=",local_158);
  if ((int)local_160 == 0) {
    pUVar12 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pFVar14 = UGameMapsSettings::GetGameDefaultMap(&local_58,Default);
    iVar10 = (pFVar14->Data).ArrayNum;
    iVar11 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (iVar11 != 0) {
      UGameMapsSettings::GetGameDefaultMap(&local_120,Default);
      if (3 < (byte)LogEngineAutomationTests._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
      }
      if (((local_168.Data <= (FScriptContainerElement *)&local_120) &&
          ((FScriptContainerElement *)&local_120 < local_168.Data + (longlong)local_160._4_4_ * 0x10
          )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar11 = (int)local_160;
      if ((int)local_160 == local_160._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_168,(int *)((longlong)&local_160 + 4));
      }
      FVar22.Data = local_120.Data.AllocatorInstance.Data;
      pFVar23 = local_168.Data + (longlong)iVar11 * 0x10;
      local_160 = CONCAT44(local_160._4_4_,iVar11 + 1);
      *(FScriptContainerElement **)pFVar23 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar23 + 8) = local_120.Data.ArrayNum;
      if (local_120.Data.ArrayNum == 0) {
        *(int *)(pFVar23 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_120.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,
                   local_120.Data.ArrayNum,(int *)(pFVar23 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar23,FVar22.Data,(longlong)local_120.Data.ArrayNum * 2);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    if ((int)local_160 == 0) {
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
    }
  }
  local_res18[0] = 1;
  if (0 < local_158[0]) {
    do {
      pIVar19 = (IAutomationLatentCommand *)0x0;
      pIVar16 = ::operator_new(0x30);
      if (pIVar16 != (IAutomationLatentCommand *)0x0) {
        ::FString::PrintfImpl(&local_d8,L"Starting Project.Maps Cycle (%d/%d)");
        pIVar16->_padding_ = 0;
        pIVar16->_padding_ = (longlong)&___7FEngineAutomationLogCommand__6B_;
        pIVar16->_padding_ = 0;
        pIVar16->StartTime = 0.0;
        ::FString::FString((FString *)(pIVar16 + 1),&local_d8);
        pIVar19 = pIVar16;
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
      iVar11 = (int)local_160;
      uVar17 = (ulonglong)(int)local_160;
      pFVar23 = local_168.Data + uVar17 * 0x10;
      FVar22.Data = local_168.Data;
      while( true ) {
        pIVar19 = (IAutomationLatentCommand *)0x0;
        if ((int)uVar17 != iVar11) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar22.Data == pFVar23) break;
        FPackageName::ObjectPathToPackageName(&local_140,(FString *)FVar22.Data);
        local_c8 = local_140.Data.AllocatorInstance.Data;
        pIVar16 = (IAutomationLatentCommand *)(ulonglong)(local_140.Data.ArrayNum - 1);
        if (local_140.Data.ArrayNum == 0) {
          pIVar16 = pIVar19;
        }
        iStack_c0 = (int)pIVar16;
        local_48._12_4_ = uStack_bc;
        local_48.Size = iStack_c0;
        local_48.DataPtr = (wchar_t *)local_140.Data.AllocatorInstance.Data;
        bVar9 = FPackageName::IsValidObjectPath(&local_48,(FText *)0x0);
        if ((bVar9) ||
           (bVar9 = FPackageName::SearchForPackageOnDisk(&local_140,(FString *)0x0,&local_140),
           bVar9)) {
          pIVar18 = ::operator_new(0x30);
          pIVar16 = pIVar19;
          if (pIVar18 != (IAutomationLatentCommand *)0x0) {
            ::FString::PrintfImpl(&local_b8,L"LoadMap-Begin: %s");
            pIVar18->_padding_ = 0;
            pIVar18->_padding_ = 0;
            pIVar18->StartTime = 0.0;
            pIVar18->_padding_ = (longlong)&___7FEngineAutomationLogCommand__6B_;
            ::FString::FString((FString *)(pIVar18 + 1),&local_b8);
            pIVar16 = pIVar18;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar16);
          pIVar16 = ::operator_new(0x30);
          if (pIVar16 != (IAutomationLatentCommand *)0x0) {
            local_110.Data.ArrayNum = *(int *)(FVar22.Data + 8);
            lVar20 = (longlong)local_110.Data.ArrayNum;
            local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pvVar3 = *(void **)FVar22.Data;
            if (local_110.Data.ArrayNum == 0) {
              local_110.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)&local_110,
                         local_110.Data.ArrayNum,&local_110.Data.ArrayMax);
              memcpy(local_110.Data.AllocatorInstance.Data,pvVar3,lVar20 * 2);
            }
            pIVar16->_padding_ = 0;
            pIVar16->_padding_ = (longlong)&___7FLoadGameMapCommand__6B_;
            pIVar16->_padding_ = 0;
            pIVar16->StartTime = 0.0;
            ::FString::FString((FString *)(pIVar16 + 1),&local_110);
            pIVar19 = pIVar16;
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
          pIVar16 = (IAutomationLatentCommand *)0x0;
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
          pIVar18 = ::operator_new(0x30);
          pIVar19 = pIVar16;
          if (pIVar18 != (IAutomationLatentCommand *)0x0) {
            ::FString::PrintfImpl(&local_a8,L"LoadMap-End: %s");
            pIVar18->_padding_ = 0;
            pIVar18->_padding_ = (longlong)&___7FEngineAutomationLogCommand__6B_;
            pIVar18->_padding_ = 0;
            pIVar18->StartTime = 0.0;
            ::FString::FString((FString *)(pIVar18 + 1),&local_a8);
            pIVar19 = pIVar18;
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
          pIVar18 = ::operator_new(0x30);
          pIVar19 = pIVar16;
          if (pIVar18 != (IAutomationLatentCommand *)0x0) {
            ::FString::PrintfImpl(&local_98,L"MapWait-Begin: %s");
            pIVar18->_padding_ = 0;
            pIVar18->_padding_ = 0;
            pIVar18->StartTime = 0.0;
            pIVar18->_padding_ = (longlong)&___7FEngineAutomationLogCommand__6B_;
            ::FString::FString((FString *)(pIVar18 + 1),&local_98);
            pIVar19 = pIVar18;
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
          pIVar18 = ::operator_new(0x20);
          pIVar19 = pIVar16;
          if (pIVar18 != (IAutomationLatentCommand *)0x0) {
            pIVar18->_padding_ = 0;
            pIVar18->_padding_ = (longlong)&___7FWaitForShadersToFinishCompilingInGame__6B_;
            pIVar18->_padding_ = 0;
            pIVar18->StartTime = 0.0;
            pIVar19 = pIVar18;
          }
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
          pIVar19 = ::operator_new(0x30);
          iVar10 = local_140.Data.ArrayNum;
          FVar6.Data = local_140.Data.AllocatorInstance.Data;
          if (pIVar19 != (IAutomationLatentCommand *)0x0) {
            local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_140.Data.ArrayNum == 0) {
              local_100.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                         local_140.Data.ArrayNum,&local_100.Data.ArrayMax);
              memcpy(local_100.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar10 * 2);
            }
            pIVar19->_padding_ = 0;
            pIVar19->_padding_ = (longlong)&___7FWaitForSpecifiedMapToLoadCommand__6B_;
            pIVar19->_padding_ = 0;
            pIVar19->StartTime = 0.0;
            ::FString::FString((FString *)(pIVar19 + 1),&local_100);
            pIVar16 = pIVar19;
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
          pIVar19 = (IAutomationLatentCommand *)0x0;
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar16);
          pIVar16 = ::operator_new(0x28);
          if (pIVar16 != (IAutomationLatentCommand *)0x0) {
            pIVar16->_padding_ = 0;
            pIVar16->_padding_ = 0;
            uVar1 = *(undefined4 *)(local_e0 + 0x15);
            pIVar16->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
            *(undefined4 *)&pIVar16[1]._padding_ = uVar1;
            pIVar16->StartTime = 0.0;
            pIVar19 = pIVar16;
          }
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
          pIVar19 = ::operator_new(0x30);
          if (pIVar19 == (IAutomationLatentCommand *)0x0) {
            pIVar19 = (IAutomationLatentCommand *)0x0;
          }
          else {
            ::FString::PrintfImpl(&local_88,L"MapWait-End: %s");
            pIVar19->_padding_ = 0;
            pIVar19->_padding_ = (longlong)&___7FEngineAutomationLogCommand__6B_;
            pIVar19->_padding_ = 0;
            pIVar19->StartTime = 0.0;
            ::FString::FString((FString *)(pIVar19 + 1),&local_88);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
        }
        else if (1 < (byte)LogEditorAutomationTests._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogEditorAutomationTests);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        uVar17 = local_160 & 0xffffffff;
        FVar22.Data = FVar22.Data + 0x10;
      }
      pIVar19 = ::operator_new(0x30);
      uVar5 = local_res18[0];
      if (pIVar19 == (IAutomationLatentCommand *)0x0) {
        pIVar19 = (IAutomationLatentCommand *)0x0;
      }
      else {
        ::FString::PrintfImpl(&local_78,L"Ended Project.Maps Cycle (%d/%d)");
        pIVar19->_padding_ = 0;
        pIVar19->_padding_ = (longlong)&___7FEngineAutomationLogCommand__6B_;
        pIVar19->_padding_ = 0;
        pIVar19->StartTime = 0.0;
        ::FString::FString((FString *)(pIVar19 + 1),&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      FAutomationTestBase::AddCommand((FAutomationTestBase *)this,pIVar19);
      local_res18[0] = uVar5 + 1;
    } while ((int)local_res18[0] <= local_158[0]);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_168.Data,(int)local_160);
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487de940

FString * __thiscall
FProjectMapsCycleTest::GetBeautifiedTestName
          (FProjectMapsCycleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Project.Maps.Cycle");
  return __return_storage_ptr__;
}

