// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414dcfe0

EAutomationTestFlags __thiscall FAlgosTest::GetTestFlags(FAlgosTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414dcff0

bool __thiscall FAlgosTest::IsStressTest(FAlgosTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414dd000

uint __thiscall FAlgosTest::GetRequiredDeviceNum(FAlgosTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414dd010

FString * __thiscall
FAlgosTest::GetTestSourceFileName(FAlgosTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x5b,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x5b,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x5b,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
             ,0x5b);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414dd0b0

int __thiscall FAlgosTest::GetTestSourceFileLine(FAlgosTest *this)

{
  return 0x3a4;
}

// GetTests @ 1414dd0c0

/* WARNING: Removing unreachable block (ram,0x0001414dd209) */
/* WARNING: Removing unreachable block (ram,0x0001414dd2d4) */

void __thiscall
FAlgosTest::GetTests
          (FAlgosTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x17,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x17,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x17,"System.Core.Misc.Algos",0x17);
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

// RunTest @ 1414dd300

bool __thiscall FAlgosTest::RunTest(FAlgosTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  FIdentityFunctor local_res8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  FAlgosTestBase::Initialize((FAlgosTestBase *)this);
  FAlgosTestBase::TestCopy((FAlgosTestBase *)this);
  FAlgosTestBase::TestCopyIf((FAlgosTestBase *)this);
  FAlgosTestBase::TestTransform((FAlgosTestBase *)this);
  FAlgosTestBase::TestTransformIf((FAlgosTestBase *)this);
  FAlgosTestBase::TestBinarySearch((FAlgosTestBase *)this);
  FAlgosTestBase::TestIndexOf((FAlgosTestBase *)this);
  FVar12.Data = (FScriptContainerElement *)0x0;
  puVar2 = &this->field_0x100;
  local_40 = *(int *)&this->field_0x108;
  lVar11 = (longlong)local_40;
  pvVar3 = *(void **)puVar2;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    FVar13.Data = FVar12.Data;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40,0,&local_48,local_40,&local_3c);
    FVar13.Data = local_48.Data;
    memcpy(local_48.Data,pvVar3,lVar11 << 2);
  }
  iVar9 = local_40;
  AlgoImpl::HeapifyInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)FVar13.Data,local_40,local_res8,(TLess<void>)local_res8);
  lVar11 = 1;
  if (1 < (longlong)iVar9) {
    lVar14 = 1;
    pFVar10 = FVar12.Data;
    do {
      iVar8 = (int)pFVar10;
      iVar7 = iVar8;
      if (iVar8 < 0) {
        iVar7 = iVar8 + 1;
      }
      if (*(int *)(FVar13.Data + lVar14 * 4) < *(int *)(FVar13.Data + (longlong)(iVar7 >> 1) * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsHeap(TestArray)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x185,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1);
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar9);
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  local_50 = *(int *)&this->field_0x108;
  lVar14 = (longlong)local_50;
  pvVar3 = *(void **)puVar2;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    FVar13.Data = FVar12.Data;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50,0,&local_58,local_50,&local_4c);
    FVar13.Data = local_58.Data;
    memcpy(local_58.Data,pvVar3,lVar14 << 2);
  }
  iVar9 = local_50;
  AlgoImpl::HeapSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)FVar13.Data,local_50,local_res8,(TLess<void>)local_res8);
  pFVar10 = FVar12.Data;
  if (1 < (longlong)iVar9) {
    do {
      iVar8 = (int)pFVar10;
      iVar7 = iVar8;
      if (iVar8 < 0) {
        iVar7 = iVar8 + 1;
      }
      if (*(int *)(FVar13.Data + lVar11 * 4) < *(int *)(FVar13.Data + (longlong)(iVar7 >> 1) * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsHeap(TestArray)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x18d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      lVar11 = lVar11 + 1;
      pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1);
    } while (lVar11 < iVar9);
  }
  if ((iVar9 != 0) && (iVar9 = iVar9 + -1, iVar9 != 0)) {
    pFVar10 = FVar13.Data;
    iVar7 = *(int *)FVar13.Data;
    do {
      pFVar1 = pFVar10 + 4;
      pFVar10 = pFVar10 + 4;
      if (*(int *)pFVar1 < iVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(TestArray)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,399,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      iVar9 = iVar9 + -1;
      iVar7 = *(int *)pFVar1;
    } while (iVar9 != 0);
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  local_30 = *(int *)&this->field_0x108;
  lVar11 = (longlong)local_30;
  pvVar3 = *(void **)puVar2;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_30,0,&local_38,local_30,&local_2c);
    FVar12.Data = local_38.Data;
    memcpy(local_38.Data,pvVar3,lVar11 << 2);
  }
  iVar9 = local_30;
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)FVar12.Data,local_30,local_res8,(TLess<void>)local_res8);
  if ((iVar9 != 0) && (iVar9 = iVar9 + -1, iVar9 != 0)) {
    pFVar10 = FVar12.Data;
    iVar7 = *(int *)FVar12.Data;
    do {
      pFVar1 = pFVar10 + 4;
      pFVar10 = pFVar10 + 4;
      if (*(int *)pFVar1 < iVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(TestArray)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x197,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      iVar9 = iVar9 + -1;
      iVar7 = *(int *)pFVar1;
    } while (iVar9 != 0);
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  FAlgosTestBase::TestSort((FAlgosTestBase *)this);
  FAlgosTestBase::TestEditDistance((FAlgosTestBase *)this);
  FAlgosTestBase::TestEditDistanceArray((FAlgosTestBase *)this);
  FAlgosTestBase::TestIncludes((FAlgosTestBase *)this);
  FAlgosTestBase::TestMismatch((FAlgosTestBase *)this);
  FAlgosTestBase::TestRemoveIf((FAlgosTestBase *)this);
  *(undefined4 *)&this->field_0x108 = 0;
  if (*(int *)&this->field_0x10c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)puVar2,0,(int *)&this->field_0x10c);
  }
  *(undefined4 *)&this->field_0xf8 = 0;
  if (*(int *)&this->field_0xfc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->field_0xf0,0,(int *)&this->field_0xfc);
  }
  return true;
}

// GetBeautifiedTestName @ 1414dd700

FString * __thiscall
FAlgosTest::GetBeautifiedTestName(FAlgosTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x17,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x17,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x17,
             "System.Core.Misc.Algos",0x17);
  return __return_storage_ptr__;
}

