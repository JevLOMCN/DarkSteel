// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e5340

EAutomationTestFlags __thiscall
FCVarEnvironmentReuseTest::GetTestFlags(FCVarEnvironmentReuseTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e5350

bool __thiscall FCVarEnvironmentReuseTest::IsStressTest(FCVarEnvironmentReuseTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e5360

uint __thiscall FCVarEnvironmentReuseTest::GetRequiredDeviceNum(FCVarEnvironmentReuseTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e5370

FString * __thiscall
FCVarEnvironmentReuseTest::GetTestSourceFileName
          (FCVarEnvironmentReuseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e53a0

int __thiscall FCVarEnvironmentReuseTest::GetTestSourceFileLine(FCVarEnvironmentReuseTest *this)

{
  return 0x132;
}

// GetTests @ 1487e53b0

/* WARNING: Removing unreachable block (ram,0x0001487e549d) */
/* WARNING: Removing unreachable block (ram,0x0001487e5568) */

void __thiscall
FCVarEnvironmentReuseTest::GetTests
          (FCVarEnvironmentReuseTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Automation.Environment.CVar Reuse");
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

// RunTest @ 1487e5590

bool __thiscall FCVarEnvironmentReuseTest::RunTest(FCVarEnvironmentReuseTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int local_res18 [4];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_188;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  TSharedPtr<FScopedTestEnvironment,1> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FStringFormatArg local_e8;
  TAutoConsoleVariable<int> local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  ::FString::FString(&local_158,L"Automation.DummyTestVariable");
  local_res18[0] = 0x6f;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar7.Data = local_158.Data.AllocatorInstance.Data;
  }
  iVar8 = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&local_c8,(wchar_t *)FVar7.Data,local_res18,
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
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar7.Data = local_158.Data.AllocatorInstance.Data;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,FVar7.Data,1);
  FVar7.Data = local_158.Data.AllocatorInstance.Data;
  if (plVar6 == (longlong *)0x0) {
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    if (local_158.Data.ArrayNum == 0) {
      local_148.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
                 local_158.Data.ArrayNum,&local_148.Data.ArrayMax);
      memcpy(local_148.Data.AllocatorInstance.Data,FVar7.Data,(longlong)local_158.Data.ArrayNum * 2)
      ;
    }
    FStringFormatArg::FStringFormatArg(&local_e8,&local_148);
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_188.AllocatorInstance,1,&local_188.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_188.AllocatorInstance.Data,&local_e8,1);
    ::FString::FormatImpl(&local_118,L"Could not find CVar for \'{0}\'",&local_188);
    (*pcVar1)(this,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
    if ((FStringFormatArg *)local_188.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    iVar4 = (**(code **)(*plVar6 + 200))(plVar6);
    FScopedTestEnvironment::Get(&local_128);
    do {
      if ((local_128.Object == (FScopedTestEnvironment *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_138,iVar8);
      FScopedTestEnvironment::SetConsoleVariableValue(local_128.Object,&local_158,&local_138);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      iVar5 = (**(code **)(*plVar6 + 200))(plVar6);
      if (iVar8 != iVar5) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        FStringFormatArg::FStringFormatArg(&local_68,iVar5);
        FStringFormatArg::FStringFormatArg(&local_48,iVar8);
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_168.AllocatorInstance,2,&local_168.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_168.AllocatorInstance.Data,&local_68,2);
        ::FString::FormatImpl
                  (&local_f8,
                   L"CVar was not set as the current value \'{0}\' does not match the expected value of \'{1}\'"
                   ,&local_168);
        (*pcVar1)(this,&local_f8,0);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
        bVar2 = false;
        goto LAB_1487e5a3b;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    iVar8 = (**(code **)(*plVar6 + 200))(plVar6);
    pcVar1 = *(code **)(*(longlong *)this + 0x30);
    FStringFormatArg::FStringFormatArg(&local_a8,iVar8);
    FStringFormatArg::FStringFormatArg(&local_88,iVar4);
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_178.AllocatorInstance.Data,&local_a8,2);
    ::FString::FormatImpl
              (&local_108,
               L"CVar was not reset as the current value of \'{0}\' does not match the initial value of \'{1}\'"
               ,&local_178);
    (*pcVar1)(this,iVar8 == iVar4,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
    if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
    }
    bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
    bVar2 = !bVar2;
  }
LAB_1487e5a3b:
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&local_c8);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 1487e5a90

FString * __thiscall
FCVarEnvironmentReuseTest::GetBeautifiedTestName
          (FCVarEnvironmentReuseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Automation.Environment.CVar Reuse");
  return __return_storage_ptr__;
}

