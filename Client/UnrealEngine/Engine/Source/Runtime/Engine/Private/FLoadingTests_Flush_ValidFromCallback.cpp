// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14886fce0

EAutomationTestFlags __thiscall
FLoadingTests_Flush_ValidFromCallback::GetTestFlags(FLoadingTests_Flush_ValidFromCallback *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14886fcf0

bool __thiscall
FLoadingTests_Flush_ValidFromCallback::IsStressTest(FLoadingTests_Flush_ValidFromCallback *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886fd00

uint __thiscall
FLoadingTests_Flush_ValidFromCallback::GetRequiredDeviceNum
          (FLoadingTests_Flush_ValidFromCallback *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886fd10

FString * __thiscall
FLoadingTests_Flush_ValidFromCallback::GetTestSourceFileName
          (FLoadingTests_Flush_ValidFromCallback *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_Flushes.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886fd40

int __thiscall
FLoadingTests_Flush_ValidFromCallback::GetTestSourceFileLine
          (FLoadingTests_Flush_ValidFromCallback *this)

{
  return 0x38;
}

// GetTests @ 14886fd50

/* WARNING: Removing unreachable block (ram,0x00014886fe3d) */
/* WARNING: Removing unreachable block (ram,0x00014886ff08) */

void __thiscall
FLoadingTests_Flush_ValidFromCallback::GetTests
          (FLoadingTests_Flush_ValidFromCallback *this,
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
  
  ::FString::FString(&local_18,L"System.Engine.Loading.Flush.ValidFromCallback");
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

// RunTest @ 14886ff30

bool __thiscall
FLoadingTests_Flush_ValidFromCallback::RunTest
          (FLoadingTests_Flush_ValidFromCallback *this,FString *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FString local_b0;
  undefined1 local_98 [16];
  bool local_88;
  FDelegateAllocation *local_80;
  undefined8 local_70;
  FLoadingTestsScope local_68;
  
  local_98._0_8_ = 0;
  local_70 = 0;
  FLoadingTestsScope::FLoadingTestsScope
            (&local_68,(FAutomationTestBase *)this,
             (TFunction<void___cdecl(FLoadingTestsScope_&)> *)local_98);
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_98);
  local_80 = &local_c0;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FLoadingTests_Flush_ValidFromCallback::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_88 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_98._8_8_,(FDestructionSentinel *)local_98);
  }
  ::FString::FString(&local_b0,L"/Engine/LoadingTestsScope_Package1");
  LoadPackageAsync(&local_b0,
                   (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                    *)local_c8,0,PKG_None,-1);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::~FLoadingTestsScope(&local_68);
  return true;
}

// GetBeautifiedTestName @ 148870030

FString * __thiscall
FLoadingTests_Flush_ValidFromCallback::GetBeautifiedTestName
          (FLoadingTests_Flush_ValidFromCallback *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"System.Engine.Loading.Flush.ValidFromCallback");
  return __return_storage_ptr__;
}

