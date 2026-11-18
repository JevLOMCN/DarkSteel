// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148867f90

EAutomationTestFlags __thiscall FRunExternalToolTest::GetTestFlags(FRunExternalToolTest *this)

{
  return EngineFilter|NonNullRHI|EditorContext;
}

// IsStressTest @ 148867fa0

bool __thiscall FRunExternalToolTest::IsStressTest(FRunExternalToolTest *this)

{
  return true;
}

// GetRequiredDeviceNum @ 148867fb0

uint __thiscall FRunExternalToolTest::GetRequiredDeviceNum(FRunExternalToolTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148867fc0

FString * __thiscall
FRunExternalToolTest::GetTestSourceFileName
          (FRunExternalToolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\ExternalToolTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148867ff0

int __thiscall FRunExternalToolTest::GetTestSourceFileLine(FRunExternalToolTest *this)

{
  return 0x53;
}

// GetTests @ 148868000

/* WARNING: Removing unreachable block (ram,0x000148868565) */
/* WARNING: Removing unreachable block (ram,0x000148868881) */
/* WARNING: Removing unreachable block (ram,0x0001488689ae) */
/* WARNING: Removing unreachable block (ram,0x000148868703) */

void __thiscall
FRunExternalToolTest::GetTests
          (FRunExternalToolTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UClass *this_00;
  IFileManager *pIVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  UObject *pUVar15;
  uint uVar16;
  wchar_t *pwVar17;
  int iVar18;
  undefined8 *puVar19;
  FString *pFVar20;
  uint local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString *local_100;
  undefined8 local_f8;
  FString local_f0;
  FString local_e0;
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  FString local_c0;
  UObject *local_b0;
  longlong local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar4 = false;
  bVar3 = false;
  this_00 = Z_Construct_UClass_UAutomationTestSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar15 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  local_b0 = pUVar15;
  if ((pUVar15 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutomationTestSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\ExternalToolTest.cpp"
                         ,0x5b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_138 = 0;
  if (0 < *(int *)&pUVar15[0x13].field_0x20) {
    local_a8 = 0;
    do {
      lVar14 = local_a8;
      uVar16 = 0;
      if ((int)local_138 < *(int *)&pUVar15[0x13].field_0x20) {
        uVar16 = ~local_138 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar19 = (undefined8 *)(lVar14 * 0x60 + *(longlong *)&pUVar15[0x13].field_0x18);
      uVar16 = *(int *)(puVar19 + 3) - 1;
      if (*(int *)(puVar19 + 3) == 0) {
        uVar16 = 0;
      }
      FVar13.Data = local_e0.Data.AllocatorInstance.Data;
      uVar5 = local_e0.Data._8_8_;
      if (0 < (int)uVar16) {
        iVar9 = *(int *)(puVar19 + 9) + -1;
        if (*(int *)(puVar19 + 9) == 0) {
          iVar9 = 0;
        }
        if (0 < iVar9) {
          iVar9 = *(int *)(puVar19 + 0xb) + -1;
          if (*(int *)(puVar19 + 0xb) == 0) {
            iVar9 = 0;
          }
          if (0 < iVar9) {
            uVar16 = 0;
            local_100 = (FString *)0x0;
            local_f8 = 0;
            bVar6 = ::FString::StartsWith((FString *)(puVar19 + 8),L".",1,IgnoreCase);
            iVar9 = *(int *)(puVar19 + 9);
            iVar18 = 0;
            if (bVar6) {
              bVar4 = true;
              iVar7 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar7 = iVar18;
              }
              if (iVar9 == 0) {
                pwVar17 = L"";
                iVar9 = iVar18;
              }
              else {
                pwVar17 = (wchar_t *)puVar19[8];
                iVar9 = iVar9 + -1;
              }
              iVar11 = iVar9;
              if (iVar7 + -1 < iVar9) {
                iVar11 = iVar7 + -1;
              }
              if (0 < iVar11) {
                iVar18 = iVar11;
              }
              ::FString::FString(&local_a0,pwVar17 + ((longlong)iVar9 - (longlong)iVar18));
              FVar13.Data = local_a0.Data.AllocatorInstance.Data;
              iVar9 = local_a0.Data.ArrayNum;
            }
            else {
              pvVar1 = (void *)puVar19[8];
              bVar3 = true;
              local_d0.Data = (FScriptContainerElement *)0x0;
              local_c8 = iVar9;
              if (iVar9 == 0) {
                local_c4 = 0;
                FVar13.Data = local_d0.Data;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar9,0,&local_d0,iVar9,&local_c4);
                memcpy(local_d0.Data,pvVar1,(longlong)iVar9 * 2);
                FVar13.Data = local_d0.Data;
                iVar9 = local_c8;
              }
            }
            local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c0.Data.ArrayNum = iVar9;
            if (iVar9 == 0) {
              local_c0.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar9,0,(ForAnyElementType *)&local_c0,iVar9,&local_c0.Data.ArrayMax);
              memcpy(local_c0.Data.AllocatorInstance.Data,FVar13.Data,(longlong)iVar9 * 2);
            }
            if ((bVar3) && (bVar3 = false, local_d0.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_d0.Data);
            }
            if ((bVar4) &&
               (bVar4 = false,
               local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            pIVar10 = IFileManager::Get();
            local_130.Data.ArrayNum = *(int *)(puVar19 + 0xb);
            lVar14 = (longlong)local_130.Data.ArrayNum;
            local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pcVar2 = *(code **)((longlong)*pIVar10 + 0x80);
            if (local_130.Data.ArrayNum == 0) {
              pFVar20 = &local_130;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,4,0,(ForAnyElementType *)pFVar20,0,&local_130.Data.ArrayMax);
            }
            else {
              pvVar1 = (void *)puVar19[10];
              uVar8 = local_130.Data.ArrayNum + 3;
              if ((int)uVar8 < local_130.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
              }
              pFVar20 = &local_130;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar8,0,(ForAnyElementType *)pFVar20,local_130.Data.ArrayNum,
                         &local_130.Data.ArrayMax);
              memcpy(local_130.Data.AllocatorInstance.Data,pvVar1,lVar14 * 2);
            }
            ::FString::PathAppend(&local_130,L"*.",2);
            ::FString::ConcatFF(&local_90,&local_130,&local_c0);
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_90.Data.ArrayNum != 0) {
              FVar13.Data = local_90.Data.AllocatorInstance.Data;
            }
            (*pcVar2)(pIVar10,&local_100,FVar13.Data,1,(ulonglong)pFVar20 & 0xffffffffffffff00);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            for (; (-1 < (int)uVar16 && ((int)uVar16 < (int)local_f8)); uVar16 = uVar16 + 1) {
              uVar8 = 0;
              if ((int)uVar16 < (int)local_f8) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FPaths::GetBaseFilename(&local_50,local_100 + (int)uVar16,true);
              ::FString::PrintfImpl(&local_70,L"%s: %s");
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
              FVar13.Data = (FScriptContainerElement *)L"";
              if (local_70.Data.ArrayNum != 0) {
                FVar13.Data = local_70.Data.AllocatorInstance.Data;
              }
              ::FString::FString(&local_120,(wchar_t *)FVar13.Data);
              pFVar12 = (param_1->AllocatorInstance).Data;
              if (((pFVar12 <= (FScriptContainerElement *)&local_120) &&
                  ((FScriptContainerElement *)&local_120 <
                   pFVar12 + (longlong)param_1->ArrayMax * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar9 = param_1->ArrayNum;
              if (iVar9 == param_1->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar9 + 1;
              pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar12 = 0;
              *(FScriptContainerElement **)pFVar12 = local_120.Data.AllocatorInstance.Data;
              *(int *)(pFVar12 + 8) = local_120.Data.ArrayNum;
              *(int *)(pFVar12 + 0xc) = local_120.Data.ArrayMax;
              local_120.Data.ArrayNum = 0;
              local_120.Data.ArrayMax = 0;
              local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              uVar8 = 0;
              if ((int)uVar16 < (int)local_f8) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              ::FString::PrintfImpl(&local_80,L"%s;%s;%s");
              FVar13.Data = (FScriptContainerElement *)L"";
              if (local_80.Data.ArrayNum != 0) {
                FVar13.Data = local_80.Data.AllocatorInstance.Data;
              }
              ::FString::FString(&local_110,(wchar_t *)FVar13.Data);
              pFVar12 = (param_2->AllocatorInstance).Data;
              if (((pFVar12 <= (FScriptContainerElement *)&local_110) &&
                  ((FScriptContainerElement *)&local_110 <
                   pFVar12 + (longlong)param_2->ArrayMax * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar9 = param_2->ArrayNum;
              if (iVar9 == param_2->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar9 + 1;
              pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar12 = 0;
              *(FScriptContainerElement **)pFVar12 = local_110.Data.AllocatorInstance.Data;
              *(int *)(pFVar12 + 8) = local_110.Data.ArrayNum;
              *(int *)(pFVar12 + 0xc) = local_110.Data.ArrayMax;
              local_110.Data.ArrayNum = 0;
              local_110.Data.ArrayMax = 0;
              local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            DestructItems<FString,int>(local_100,(int)local_f8);
            pUVar15 = local_b0;
            FVar13.Data = local_e0.Data.AllocatorInstance.Data;
            uVar5 = local_e0.Data._8_8_;
            if (local_100 != (FString *)0x0) {
              FMemory::Free(local_100);
              pUVar15 = local_b0;
              FVar13.Data = local_e0.Data.AllocatorInstance.Data;
              uVar5 = local_e0.Data._8_8_;
            }
            goto LAB_14886876c;
          }
        }
        if (*(int *)(puVar19 + 1) == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)*puVar19;
        }
        ::FString::FString(&local_f0,pwVar17);
        pFVar12 = (param_1->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 < pFVar12 + (longlong)param_1->ArrayMax * 0x10))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = param_1->ArrayNum;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar9 + 1;
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_f0.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_f0.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_f0.Data.ArrayMax;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::FString::PrintfImpl(&local_60,L"%s;%s;%s");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_60.Data.ArrayNum != 0) {
          FVar13.Data = local_60.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_e0,(wchar_t *)FVar13.Data);
        pFVar12 = (param_2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < pFVar12 + (longlong)param_2->ArrayMax * 0x10))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == param_2->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar9 + 1;
        pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_e0.Data.AllocatorInstance.Data;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar13.Data = local_e0.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_e0.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_e0.Data.ArrayMax;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        uVar5 = local_e0.Data._8_8_;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
          FVar13.Data = local_e0.Data.AllocatorInstance.Data;
          uVar5 = local_e0.Data._8_8_;
        }
      }
LAB_14886876c:
      local_e0.Data._8_8_ = uVar5;
      local_e0.Data.AllocatorInstance.Data = FVar13.Data;
      local_138 = local_138 + 1;
      local_a8 = local_a8 + 1;
    } while ((int)local_138 < *(int *)&pUVar15[0x13].field_0x20);
  }
  return;
}

// RunTest @ 1488689e0

/* WARNING: Removing unreachable block (ram,0x000148868a75) */
/* WARNING: Removing unreachable block (ram,0x000148868aa8) */
/* WARNING: Removing unreachable block (ram,0x000148868ab6) */
/* WARNING: Removing unreachable block (ram,0x000148868ae9) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRunExternalToolTest::RunTest(FRunExternalToolTest *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *this_00;
  FWaitForProcessToCompleteLatentCommand *pFVar5;
  FWaitForProcessToCompleteLatentCommand *pFVar6;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar7;
  wchar_t *pwVar8;
  undefined1 uVar9;
  TRawPtrProxy<FWaitForProcessToCompleteLatentCommand> local_res18;
  wchar_t local_res20 [4];
  ulonglong in_stack_ffffffffffffff60;
  uint in_stack_ffffffffffffff74;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<IAutomationLatentCommand,1> local_58;
  FProcHandle local_48;
  void *pvStack_40;
  void *local_38 [2];
  
  pFVar6 = (FWaitForProcessToCompleteLatentCommand *)0x0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_68,L";",false);
  FVar2.Data = local_68.AllocatorInstance.Data;
  if (local_68.ArrayNum == 3) {
    local_38[0] = (void *)0x0;
    local_48 = (FProcHandle)0x0;
    pvStack_40 = (void *)0x0;
    bVar3 = FWindowsPlatformProcess::CreatePipe(&pvStack_40,local_38,false);
    if (bVar3) {
      iVar1 = *(int *)(FVar2.Data + 0x28);
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      pFVar5 = pFVar6;
      if (0 < iVar4) {
        if (iVar1 == 0) {
          pFVar5 = (FWaitForProcessToCompleteLatentCommand *)L"";
        }
        else {
          pFVar5 = *(FWaitForProcessToCompleteLatentCommand **)(FVar2.Data + 0x20);
        }
      }
      if (*(int *)(FVar2.Data + 0x18) == 0) {
        uVar9 = 0x6c;
      }
      else {
        uVar9 = (undefined1)*(undefined8 *)(FVar2.Data + 0x10);
      }
      if (*(int *)(FVar2.Data + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)FVar2.Data;
      }
      local_48 = FWindowsPlatformProcess::CreateProc
                           (local_res20,pwVar8,(bool)uVar9,true,false,
                            (uint *)(in_stack_ffffffffffffff60 & 0xffffffffffffff00),0,
                            (wchar_t *)((ulonglong)in_stack_ffffffffffffff74 << 0x20),pFVar5,
                            local_38[0]);
      local_48 = *(FProcHandle *)local_48;
      if (local_48 != (FProcHandle)0x0) {
        this_00 = FAutomationTestFramework::Get();
        pFVar5 = ::operator_new(0x38);
        if (pFVar5 != (FWaitForProcessToCompleteLatentCommand *)0x0) {
          pFVar5->_padding_ = 0;
          pFVar5->_padding_ = 0;
          (pFVar5->ProcessInfo).ProcessHandle = local_48;
          (pFVar5->ProcessInfo).ReadPipe = pvStack_40;
          pFVar5->_padding_ = 0;
          (pFVar5->ProcessInfo).WritePipe = local_38[0];
          pFVar5->_padding_ = (longlong)&___7FWaitForProcessToCompleteLatentCommand__6B_;
          pFVar6 = pFVar5;
        }
        local_res18.Object = pFVar6;
        pTVar7 = TSharedPtr<IAutomationLatentCommand,1>::
                 TSharedPtr<IAutomationLatentCommand,1><FWaitForProcessToCompleteLatentCommand>
                           (&local_58,&local_res18);
        FAutomationTestFramework::EnqueueLatentCommand(this_00,pTVar7);
        bVar3 = true;
        goto LAB_148868c41;
      }
      if (1 < (byte)LogBaseAutomationTests._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBaseAutomationTests)
        ;
      }
      FWindowsPlatformProcess::ClosePipe(pvStack_40,local_38[0]);
    }
  }
  else if (1 < (byte)LogBaseAutomationTests._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBaseAutomationTests);
  }
  bVar3 = false;
LAB_148868c41:
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 148868ca0

FString * __thiscall
FRunExternalToolTest::GetBeautifiedTestName
          (FRunExternalToolTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"External");
  return __return_storage_ptr__;
}

