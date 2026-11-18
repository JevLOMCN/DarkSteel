// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487db150

EAutomationTestFlags __thiscall FCVarEnvironmentTest::GetTestFlags(FCVarEnvironmentTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487db160

bool __thiscall FCVarEnvironmentTest::IsStressTest(FCVarEnvironmentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487db170

uint __thiscall FCVarEnvironmentTest::GetRequiredDeviceNum(FCVarEnvironmentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487db180

FString * __thiscall
FCVarEnvironmentTest::GetTestSourceFileName
          (FCVarEnvironmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487db1b0

int __thiscall FCVarEnvironmentTest::GetTestSourceFileLine(FCVarEnvironmentTest *this)

{
  return 0xea;
}

// GetTests @ 1487db1c0

/* WARNING: Removing unreachable block (ram,0x0001487db2ad) */
/* WARNING: Removing unreachable block (ram,0x0001487db378) */

void __thiscall
FCVarEnvironmentTest::GetTests
          (FCVarEnvironmentTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Automation.Environment.CVar");
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

// RunTest @ 1487db3a0

bool __thiscall FCVarEnvironmentTest::RunTest(FCVarEnvironmentTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar14;
  int local_res18 [2];
  FString local_248;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_238;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_228;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_218;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_208;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TSharedPtr<FScopedTestEnvironment,1> local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FScriptContainerElement *local_168;
  int local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FStringFormatArg local_128;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  TAutoConsoleVariable<int> local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  ::FString::FString(&local_248,L"Automation.DummyTestVariable");
  pwVar13 = L"";
  local_res18[0] = 0x6f;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar12.Data = local_248.Data.AllocatorInstance.Data;
  }
  _Src = (FScriptContainerElement *)0x0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&local_c8,(wchar_t *)FVar12.Data,local_res18,
             L"Used for the purposes of testing if the CVar is getting set and reset.",0);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar12.Data = local_248.Data.AllocatorInstance.Data;
  }
  plVar9 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,FVar12.Data,1);
  FVar12.Data = local_248.Data.AllocatorInstance.Data;
  if (plVar9 == (longlong *)0x0) {
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    if (local_248.Data.ArrayNum == 0) {
      local_1e8.Data.ArrayMax = local_248.Data.ArrayNum;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_248.Data.ArrayNum,0,(ForAnyElementType *)&local_1e8,
                 local_248.Data.ArrayNum,&local_1e8.Data.ArrayMax);
      memcpy(local_1e8.Data.AllocatorInstance.Data,FVar12.Data,(longlong)local_248.Data.ArrayNum * 2
            );
    }
    FStringFormatArg::FStringFormatArg(&local_128,&local_1e8);
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_238.AllocatorInstance,1,&local_238.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_238.AllocatorInstance.Data,&local_128,1);
    ::FString::FormatImpl(&local_198,L"Could not find CVar for \'{0}\'",&local_238);
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
    local_108.StringValue.Data.AllocatorInstance.Data =
         local_128.StringValue.Data.AllocatorInstance.Data;
    if ((FStringFormatArg *)local_238.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
      local_108.StringValue.Data.AllocatorInstance.Data =
           local_128.StringValue.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar4 = (**(code **)(*plVar9 + 200))(plVar9);
    if (iVar4 != 0x3039) {
      FScopedTestEnvironment::Get(&local_1a8);
      if (((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
            *)local_1a8.Object ==
           (TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
            *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_1b8,0x3039);
      FScopedTestEnvironment::SetConsoleVariableValue(local_1a8.Object,&local_248,&local_1b8);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      iVar5 = (**(code **)(*plVar9 + 200))(plVar9);
      if (iVar5 == iVar4) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        FStringFormatArg::FStringFormatArg(&local_e8,iVar4);
        local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_218.AllocatorInstance,1,&local_218.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_218.AllocatorInstance.Data,&local_e8,1);
        ::FString::FormatImpl
                  (&local_178,
                   L"CVar was not set as the current value matches the initial value of \'{0}\'",
                   &local_218);
        (*pcVar1)(this,&local_178,0);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
        if ((FStringFormatArg *)local_218.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_218.AllocatorInstance.Data);
        }
      }
      else {
        if (((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
              *)local_1a8.Object ==
             (TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar2 = IsInGameThread();
        if ((!bVar2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                               ,0x181,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar7 = local_248.Data.ArrayNum + -1;
        FVar12.Data = local_248.Data.AllocatorInstance.Data;
        if (local_248.Data.ArrayNum == 0) {
          iVar7 = 0;
          FVar12.Data = (FScriptContainerElement *)L"";
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar12.Data);
        iVar7 = TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
                            *)local_1a8.Object,uVar6,&local_248);
        if (iVar7 == -1) {
LAB_1487dbbe3:
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::FString(&local_138,
                             L"CVar was not found as being set in the ScopedTestEnvironment.");
          (*pcVar1)(this,&local_138,0);
        }
        else {
          lVar10 = (longlong)iVar7 * 0x40 + *(longlong *)&(local_1a8.Object)->Variables;
          pFVar14 = (FScriptContainerElement *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            pFVar14 = _Src;
          }
          if (pFVar14 == (FScriptContainerElement *)0x0) goto LAB_1487dbbe3;
          if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
              (IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Singleton != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x4fb,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if (*(int *)(pFVar14 + 0x10) != 0) {
            pwVar13 = *(wchar_t **)(pFVar14 + 8);
          }
          plVar11 = (longlong *)
                    (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                              (IConsoleManager::Singleton,pwVar13,1);
          if (plVar11 == (longlong *)0x0) {
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_261016140514328260>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                               ,0x13c,"ConsoleVariable");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            iVar7 = 0;
          }
          else {
            (**(code **)(*plVar11 + 0xd8))(plVar11,&local_168);
            _Src = local_168;
            iVar7 = local_160;
          }
          bVar2 = false;
          local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.Data.ArrayNum = 0;
          local_1d8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_1d8,iVar5);
          if (iVar7 == local_1d8.Data.ArrayNum) {
            if (1 < iVar7) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)_Src,(wchar_t *)local_1d8.Data.AllocatorInstance.Data);
              bVar2 = iVar8 == 0;
              goto LAB_1487db97e;
            }
          }
          else {
            bVar2 = local_1d8.Data.ArrayNum + iVar7 == 1;
LAB_1487db97e:
            bVar2 = !bVar2;
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (!bVar2) {
            if (_Src != (FScriptContainerElement *)0x0) {
              FMemory::Free(_Src);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a8.SharedReferenceCount.ReferenceController);
            iVar5 = (**(code **)(*plVar9 + 200))(plVar9);
            pcVar1 = *(code **)(*(longlong *)this + 0x30);
            FStringFormatArg::FStringFormatArg(&local_68,iVar5);
            FStringFormatArg::FStringFormatArg(&local_48,iVar4);
            local_1f8.ArrayNum = 2;
            local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_1f8.AllocatorInstance,2,&local_1f8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_1f8.AllocatorInstance.Data,&local_68,2);
            ::FString::FormatImpl
                      (&local_148,
                       L"CVar was not reset as the current value of \'{0}\' does not match the initial value of \'{1}\'"
                       ,&local_1f8);
            (*pcVar1)(this,iVar5 == iVar4,&local_148,0);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
            if ((FStringFormatArg *)local_1f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_1f8.AllocatorInstance.Data);
            }
            if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
            }
            bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
            bVar2 = !bVar2;
            goto LAB_1487dbc34;
          }
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          FStringFormatArg::FStringFormatArg(&local_a8,iVar5);
          local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Data.ArrayNum = iVar7;
          if (iVar7 == 0) {
            local_1c8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,0,(ForAnyElementType *)&local_1c8,iVar7,&local_1c8.Data.ArrayMax);
            memcpy(local_1c8.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
          }
          FStringFormatArg::FStringFormatArg(&local_88,&local_1c8);
          local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_208.AllocatorInstance,2,&local_208.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_208.AllocatorInstance.Data,&local_a8,2);
          ::FString::FormatImpl
                    (&local_158,
                     L"CVar value of \'{0}\' does not match the CVar value fetched from ScopedTestEnvironment \'{1}\'"
                     ,&local_208);
          (*pcVar1)(this,&local_158,0);
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
          if ((FStringFormatArg *)local_208.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_208.AllocatorInstance.Data);
          }
          local_138.Data.AllocatorInstance.Data = local_a8.StringValue.Data.AllocatorInstance.Data;
          if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
            local_138.Data.AllocatorInstance.Data = local_a8.StringValue.Data.AllocatorInstance.Data
            ;
          }
        }
        local_e8.StringValue.Data.AllocatorInstance.Data = _Src;
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      bVar2 = false;
      goto LAB_1487dbc34;
    }
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    FStringFormatArg::FStringFormatArg(&local_108,0x3039);
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_228.AllocatorInstance,1,&local_228.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_228.AllocatorInstance.Data,&local_108,1);
    ::FString::FormatImpl(&local_188,L"Initial and values to test are the same \'{0}\'",&local_228);
    (*pcVar1)(this,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
    if ((FStringFormatArg *)local_228.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
  }
  if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
  }
  bVar2 = false;
LAB_1487dbc34:
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&local_c8);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 1487dbc90

FString * __thiscall
FCVarEnvironmentTest::GetBeautifiedTestName
          (FCVarEnvironmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Automation.Environment.CVar");
  return __return_storage_ptr__;
}

