// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414c92e0

EAutomationTestFlags __thiscall
FConvertToSingleBufferGraphTest::GetTestFlags(FConvertToSingleBufferGraphTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414c92f0

bool __thiscall FConvertToSingleBufferGraphTest::IsStressTest(FConvertToSingleBufferGraphTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414c9300

uint __thiscall
FConvertToSingleBufferGraphTest::GetRequiredDeviceNum(FConvertToSingleBufferGraphTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414c9310

FString * __thiscall
FConvertToSingleBufferGraphTest::GetTestSourceFileName
          (FConvertToSingleBufferGraphTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x61,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x61,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x61,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\Graph\\GraphConvert.cpp"
             ,0x61);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414c93b0

int __thiscall
FConvertToSingleBufferGraphTest::GetTestSourceFileLine(FConvertToSingleBufferGraphTest *this)

{
  return 0x1d7;
}

// GetTests @ 1414c93c0

/* WARNING: Removing unreachable block (ram,0x0001414c9509) */
/* WARNING: Removing unreachable block (ram,0x0001414c95d4) */

void __thiscall
FConvertToSingleBufferGraphTest::GetTests
          (FConvertToSingleBufferGraphTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2d,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2d,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x2d,"System.Core.Graph.ConvertToSingleBufferGraph",0x2d);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414c9640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FConvertToSingleBufferGraphTest::RunTest(FConvertToSingleBufferGraphTest *this,FString *param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined1 auStackY_1a8 [32];
  <lambda_1> local_168;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_160;
  int local_150;
  longlong local_148;
  FConvertToSingleBufferGraphTest *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong local_130;
  int *local_128;
  undefined8 uStack_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FGraph local_e8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  ForAnyElementType local_78;
  undefined4 local_70;
  int local_6c;
  ForAnyElementType local_68;
  undefined4 local_60;
  int local_5c;
  ForAnyElementType local_58;
  undefined4 local_50;
  int local_4c;
  ForAnyElementType local_48;
  undefined4 local_40;
  int local_3c;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar13 = 0;
  local_c0 = 1;
  uStack_bc = 2;
  local_b8 = 3;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 3;
  local_140 = this;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_88.AllocatorInstance,3,&local_88.ArrayMax);
  local_138 = 0;
  *(ulonglong *)local_88.AllocatorInstance.Data = CONCAT44(uStack_bc,local_c0);
  *(undefined4 *)(local_88.AllocatorInstance.Data + 8) = local_b8;
  uStack_134 = 0x11;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_78,2,&local_6c);
  *(ulonglong *)local_78.Data = CONCAT44(uStack_134,local_138);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_68,1,&local_5c);
  local_b0 = 0;
  uStack_ac = 2;
  local_a8 = 2;
  *(undefined4 *)local_68.Data = 2;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_58,3,&local_4c);
  local_a0 = 1;
  *(ulonglong *)local_58.Data = CONCAT44(uStack_ac,local_b0);
  *(undefined4 *)(local_58.Data + 8) = local_a8;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 3;
  local_98 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_48,3,&local_3c);
  lVar8 = 5;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)local_48.Data = local_a0;
  *(undefined4 *)(local_48.Data + 8) = local_98;
  local_160.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_160.AllocatorInstance,5,&local_160.ArrayMax);
  ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
            (local_160.AllocatorInstance.Data,&local_88,5);
  puVar11 = local_38;
  do {
    puVar1 = puVar11 + -2;
    puVar11 = puVar11 + -2;
    lVar8 = lVar8 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar8 != 0);
  UE::Graph::
  ConvertToSingleBufferGraph<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,_FConvertToSingleBufferGraphTest::RunTest_::__l2::<lambda_1>_>
            (&local_e8,&local_160,local_168,None);
  iVar10 = local_160.ArrayNum;
  if (local_e8.EdgeLists.ArrayNum == local_160.ArrayNum) {
    if (0 < local_160.ArrayNum) {
      local_130 = 0;
      do {
        lVar8 = local_130;
        uVar7 = 0;
        uVar6 = 0;
        if ((int)uVar13 < local_e8.EdgeLists.ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        local_128 = *(int **)(local_e8.EdgeLists.AllocatorInstance.Data + lVar8);
        uStack_120 = *(undefined8 *)(local_e8.EdgeLists.AllocatorInstance.Data + lVar8 + 8);
        uVar6 = 0;
        if ((int)uVar13 < iVar10) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar12 = *(int *)(local_160.AllocatorInstance.Data + lVar8 + 8);
        local_148 = *(longlong *)(local_160.AllocatorInstance.Data + lVar8);
        local_150 = iVar12;
        if ((iVar12 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar9 = (int)uStack_120;
        if (iVar9 == iVar12) {
          if (0 < iVar9) {
            local_148 = local_148 - (longlong)local_128;
            piVar14 = local_128;
            do {
              uVar6 = 0;
              if ((int)uVar7 < iVar12) {
                uVar6 = ~uVar7 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              iVar10 = *(int *)(local_148 + (longlong)piVar14);
              uVar6 = 0;
              if ((int)uVar7 < iVar9) {
                uVar6 = ~uVar7 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              if (*piVar14 != iVar10) {
                pcVar2 = *(code **)(*(longlong *)local_140 + 0x28);
                ::FString::PrintfImpl
                          (&local_f8,L"Wrong vertex for edge %d from vertex %d. Expected %d, got %d"
                          );
                (*pcVar2)(local_140,&local_f8,0);
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
              }
              uVar7 = uVar7 + 1;
              piVar14 = piVar14 + 1;
              this = local_140;
              iVar10 = local_160.ArrayNum;
              iVar12 = local_150;
            } while ((int)uVar7 < iVar9);
          }
        }
        else {
          pcVar2 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl
                    (&local_108,L"Wrong size edge list for vertex %d. Expected %d, got %d");
          (*pcVar2)(this,&local_108,0);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = uVar13 + 1;
        local_130 = local_130 + 0x10;
      } while ((int)uVar13 < iVar10);
    }
    bVar4 = true;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_118,L"Wrong number of edge lists. Expected %d, got %d");
    (*pcVar2)(this,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_e8.EdgeLists.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.EdgeLists.AllocatorInstance.Data);
  }
  if (local_e8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Buffer.AllocatorInstance.Data);
  }
  FVar3.Data = local_160.AllocatorInstance.Data;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_160.AllocatorInstance.Data,iVar10);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar3.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 1414c9c30

FString * __thiscall
FConvertToSingleBufferGraphTest::GetBeautifiedTestName
          (FConvertToSingleBufferGraphTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2d,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2d,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x2d,
             "System.Core.Graph.ConvertToSingleBufferGraph",0x2d);
  return __return_storage_ptr__;
}

