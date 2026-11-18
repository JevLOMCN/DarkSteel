// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a5f40

EAutomationTestFlags __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::GetTestFlags
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a5f50

bool __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::IsStressTest
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a5f60

uint __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::GetRequiredDeviceNum
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a5f70

FString * __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::GetTestSourceFileName
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a5fa0

int __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::GetTestSourceFileLine
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this)

{
  return 0x1fd;
}

// GetTests @ 1418a5fb0

/* WARNING: Removing unreachable block (ram,0x0001418a609d) */
/* WARNING: Removing unreachable block (ram,0x0001418a6168) */

void __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::GetTests
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this,
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
  
  ::FString::FString(&local_18,"System.Core.MRSWRecursiveAccessDetector.TrivialRelocation");
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

// RunTest @ 1418a6190

bool __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::RunTest
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Dst;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_18,(int *)((longlong)&local_10 + 4));
  local_10._0_4_ = iVar4 + 1;
  DefaultConstructItems<FMRSWRecursiveAccessDetector,int>(local_18.Data + (longlong)iVar4 * 8,1);
  iVar4 = (int)local_10;
  if ((int)local_10 == local_10._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_18,(int *)((longlong)&local_10 + 4));
  }
  local_10 = CONCAT44(local_10._4_4_,iVar4 + 1);
  DefaultConstructItems<FMRSWRecursiveAccessDetector,int>(local_18.Data + (longlong)iVar4 * 8,1);
  if ((int)local_10 < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FMRSWRecursiveAccessDetector::AcquireWriteAccess
            ((FMRSWRecursiveAccessDetector *)(local_18.Data + 8));
  if ((int)local_10 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  _Dst.Data = local_18.Data;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18.Data);
  iVar4 = (int)local_10 + -1;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst.Data,_Dst.Data + (longlong)((int)local_10 - iVar4) * 8,(longlong)iVar4 << 3);
  }
  iVar4 = (int)local_10 + -1;
  local_10._0_4_ = iVar4;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&local_18,iVar4,(int *)((longlong)&local_10 + 4));
  if (local_10._4_4_ != (int)local_10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_10,&local_18,(int)local_10,(int *)((longlong)&local_10 + 4));
  }
  if ((int)local_10 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess((FMRSWRecursiveAccessDetector *)local_18.Data);
  DestructItems<FMRSWRecursiveAccessDetector,int>
            ((FMRSWRecursiveAccessDetector *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1418a6390

FString * __thiscall
FMRSWRecursiveAccessDetectorTrivialRelocationTest::GetBeautifiedTestName
          (FMRSWRecursiveAccessDetectorTrivialRelocationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.MRSWRecursiveAccessDetector.TrivialRelocation");
  return __return_storage_ptr__;
}

