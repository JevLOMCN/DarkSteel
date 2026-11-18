// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 148870f50

EAutomationTestFlags __thiscall
FThreadSafeAsyncLoadingTest::GetTestFlags(FThreadSafeAsyncLoadingTest *this)

{
  return EngineFilter|ClientContext;
}

// IsStressTest @ 148870f70

bool __thiscall FThreadSafeAsyncLoadingTest::IsStressTest(FThreadSafeAsyncLoadingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148870fb0

uint __thiscall FThreadSafeAsyncLoadingTest::GetRequiredDeviceNum(FThreadSafeAsyncLoadingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148870fd0

FString * __thiscall
FThreadSafeAsyncLoadingTest::GetTestSourceFileName
          (FThreadSafeAsyncLoadingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148871000

int __thiscall FThreadSafeAsyncLoadingTest::GetTestSourceFileLine(FThreadSafeAsyncLoadingTest *this)

{
  return 0x16;
}

// GetTests @ 1488711f0

/* WARNING: Removing unreachable block (ram,0x0001488712dd) */
/* WARNING: Removing unreachable block (ram,0x0001488713a8) */

void __thiscall
FThreadSafeAsyncLoadingTest::GetTests
          (FThreadSafeAsyncLoadingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"System.Engine.Loading.ThreadSafeAsyncLoadingTest");
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

// RunTest @ 1488715e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FThreadSafeAsyncLoadingTest::RunTest(FThreadSafeAsyncLoadingTest *this,FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_148 [32];
  <lambda_1> local_108;
  ForAnyElementType local_100;
  int local_f8 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_f0;
  undefined8 *local_e0;
  code *local_d8;
  undefined8 **local_d0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_c8;
  ForAnyElementType *local_c0;
  TArrayView<std::nullptr_t,int> local_b8;
  code *local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_a0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88 [2];
  TArrayView<int_const_,int> local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar6 = ::FName::FName(local_88,L"AssetRegistry");
  FVar1 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  (**(code **)(*plVar8 + 0x248))(plVar8);
  local_3c = 0x80;
  local_e0 = (undefined8 *)local_68;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_d0 = &local_e0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FThreadSafeAsyncLoadingTest::RunTest'::__l2::<lambda_1>,bool,FAssetData_const_&>
             ::Call;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  (**(code **)(*plVar8 + 0xb0))(plVar8,&local_d8,1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68,&local_f0);
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  iVar9 = local_f0.ArrayNum;
  if (iVar9 < 1) {
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_f0._8_8_ & 0xffffffff);
    }
  }
  else {
    local_f0.ArrayNum = iVar9;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar9,&local_100,local_f8,local_f8 + 1);
    memset(local_100.Data + (longlong)iVar5 * 4,0,(longlong)iVar9 << 2);
    iVar9 = local_f0.ArrayNum;
  }
  local_c8 = &local_f0;
  local_b8.DataPtr = (void **)0x0;
  local_c0 = &local_100;
  local_b8.ArrayNum = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FThreadSafeAsyncLoadingTest::RunTest'::__l2::<lambda_2>,void,int>::
             Call;
  local_a0 = &local_c8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar9,1,(TFunctionRef<void___cdecl(int)> *)&local_a8,local_108,None
             ,&local_b8);
  iStack_90 = local_f8[0];
  local_98 = local_100.Data;
  if (local_f8[0] < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78._12_4_ = uStack_8c;
  local_78.ArrayNum = iStack_90;
  local_78.DataPtr = (int *)local_98;
  FlushAsyncLoading(&local_78);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar9 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return true;
}

// GetBeautifiedTestName @ 148871890

FString * __thiscall
FThreadSafeAsyncLoadingTest::GetBeautifiedTestName
          (FThreadSafeAsyncLoadingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.ThreadSafeAsyncLoadingTest");
  return __return_storage_ptr__;
}

// operator() @ 1488816b0

void __thiscall
`FThreadSafeAsyncLoadingTest::RunTest'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  FString local_28;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = ::FName::ToString((FName *)(*plVar1 + (longlong)param_1 * 8),&local_28);
  iVar5 = LoadPackageAsync(pFVar6,(FGuid *)0x0);
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)(*plVar1 + (longlong)param_1 * 4) = iVar5;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

