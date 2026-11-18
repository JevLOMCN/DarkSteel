// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148873350

EAutomationTestFlags __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::GetTestFlags
          (FAsyncLoadingTestInvalidateExportDuringPreload *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 148873360

bool __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::IsStressTest
          (FAsyncLoadingTestInvalidateExportDuringPreload *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148873370

uint __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::GetRequiredDeviceNum
          (FAsyncLoadingTestInvalidateExportDuringPreload *this)

{
  return 1;
}

// GetTestSourceFileName @ 148873380

FString * __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::GetTestSourceFileName
          (FAsyncLoadingTestInvalidateExportDuringPreload *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1488733b0

int __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::GetTestSourceFileLine
          (FAsyncLoadingTestInvalidateExportDuringPreload *this)

{
  return 0x46;
}

// GetTests @ 1488733c0

/* WARNING: Removing unreachable block (ram,0x0001488734ad) */
/* WARNING: Removing unreachable block (ram,0x000148873578) */

void __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::GetTests
          (FAsyncLoadingTestInvalidateExportDuringPreload *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.InvalidateExportDuringPreload");
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

// RunTest @ 1488735b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::RunTest
          (FAsyncLoadingTestInvalidateExportDuringPreload *this,FString *param_1)

{
  FName FVar1;
  UPackage *pUVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res8;
  TFunction<void___cdecl(FLoadingTestsScope_&)> local_98;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  pUVar2 = LoadPackage((UPackage *)0x0,L"/Engine/LoadingTestsScope_Package1",0,(FArchive *)0x0,
                       (FLinkerInstancingContext *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"The pacakge should load successfully",
             pUVar2 != (UPackage *)0x0);
  pFVar3 = ::FName::FName(&local_res8,L"TestObject");
  FVar1 = *pFVar3;
  pUVar4 = UAsyncLoadingTests_Shared::StaticClass();
  pUVar5 = StaticFindObjectFast
                     (pUVar4,(UObject *)pUVar2,FVar1,ExactClass,RF_MirroredGarbage,Borrowed);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"The object should have been loaded",
             pUVar5 != (UObject *)0x0);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FLoadingTestsScope::FLoadingTestsScope(&local_68,(FAutomationTestBase *)this,&local_98);
  puVar6 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&UAsyncLoadingTests_Shared::OnSerialize);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive__PEAVUAsyncLoadingTests_Shared___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(FArchive_&,UAsyncLoadingTests_Shared_*),FNotThreadSafeNotCheckedDelegateUserPolicy,`FAsyncLoadingTestInvalidateExportDuringPreload::RunTest'::`4'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  pUVar2 = LoadPackage((UPackage *)0x0,L"/Engine/LoadingTestsScope_Package1",0,(FArchive *)0x0,
                       (FLinkerInstancingContext *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"The pacakge should load successfully",
             pUVar2 != (UPackage *)0x0);
  pFVar3 = ::FName::FName(&local_res8,L"TestObject");
  FVar1 = *pFVar3;
  pUVar4 = UAsyncLoadingTests_Shared::StaticClass();
  pUVar5 = StaticFindObjectFast
                     (pUVar4,(UObject *)pUVar2,FVar1,ExactClass,RF_MirroredGarbage,Borrowed);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"The object should not have been loaded",
             pUVar5 == (UObject *)0x0);
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 148873790

FString * __thiscall
FAsyncLoadingTestInvalidateExportDuringPreload::GetBeautifiedTestName
          (FAsyncLoadingTestInvalidateExportDuringPreload *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.InvalidateExportDuringPreload");
  return __return_storage_ptr__;
}

