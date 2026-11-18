// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1488775b0

EAutomationTestFlags __thiscall FUnattendedLoadingTest::GetTestFlags(FUnattendedLoadingTest *this)

{
  return EngineFilter|ClientContext;
}

// IsStressTest @ 1488775c0

bool __thiscall FUnattendedLoadingTest::IsStressTest(FUnattendedLoadingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488775d0

uint __thiscall FUnattendedLoadingTest::GetRequiredDeviceNum(FUnattendedLoadingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488775e0

FString * __thiscall
FUnattendedLoadingTest::GetTestSourceFileName
          (FUnattendedLoadingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148877610

int __thiscall FUnattendedLoadingTest::GetTestSourceFileLine(FUnattendedLoadingTest *this)

{
  return 0xb8;
}

// GetTests @ 148877620

/* WARNING: Removing unreachable block (ram,0x00014887770d) */
/* WARNING: Removing unreachable block (ram,0x0001488777d8) */

void __thiscall
FUnattendedLoadingTest::GetTests
          (FUnattendedLoadingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"System.Engine.Loading.UnattendedAsyncLoadingTest");
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

// RunTest @ 148877800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FUnattendedLoadingTest::RunTest(FUnattendedLoadingTest *this,FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  double dVar3;
  BOOLEAN BVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStackY_f8 [32];
  FUnattendedLoader local_c8;
  undefined8 *local_a8;
  code *local_a0;
  undefined8 **local_98;
  FName local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar8 = ::FName::FName(&local_90,L"AssetRegistry");
  FVar1 = *pFVar8;
  this_00 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  (**(code **)(*plVar10 + 0x248))(plVar10);
  local_4c = 0x80;
  local_a8 = (undefined8 *)local_78;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_98 = &local_a8;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FUnattendedLoadingTest::RunTest'::__l2::<lambda_1>,bool,FAssetData_const_&>
             ::Call;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  (**(code **)(*plVar10 + 0xb0))(plVar10,&local_a0);
  pTVar11 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_78,
                       &local_88);
  local_c8.bFinished = false;
  local_c8.PackagesToLoad.Lock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
  local_c8.PackagesToLoad.Array.AllocatorInstance.Data = (pTVar11->AllocatorInstance).Data;
  (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_c8.PackagesToLoad.Array.ArrayNum = pTVar11->ArrayNum;
  local_c8.PackagesToLoad.Array.ArrayMax = pTVar11->ArrayMax;
  pTVar11->ArrayNum = 0;
  pTVar11->ArrayMax = 0;
  UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(&local_c8);
  dVar3 = __real_3ff0000000000000;
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
    dVar3 = __real_3ff0000000000000;
  }
  while ((iVar7 = GetNumAsyncPackages(), iVar7 != 0 || (local_c8.bFinished == false))) {
    ProcessAsyncLoading(true,false,dVar3);
  }
  if (local_c8.PackagesToLoad.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PackagesToLoad.Array.AllocatorInstance.Data);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_c8.PackagesToLoad);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_c8.PackagesToLoad);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar7 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return true;
}

// GetBeautifiedTestName @ 148877a30

FString * __thiscall
FUnattendedLoadingTest::GetBeautifiedTestName
          (FUnattendedLoadingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.UnattendedAsyncLoadingTest");
  return __return_storage_ptr__;
}

