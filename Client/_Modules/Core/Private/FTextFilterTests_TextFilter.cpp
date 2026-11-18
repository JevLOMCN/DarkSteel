// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141901070

EAutomationTestFlags __thiscall
FTextFilterTests_TextFilter::GetTestFlags(FTextFilterTests_TextFilter *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141901080

bool __thiscall FTextFilterTests_TextFilter::IsStressTest(FTextFilterTests_TextFilter *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141901090

uint __thiscall FTextFilterTests_TextFilter::GetRequiredDeviceNum(FTextFilterTests_TextFilter *this)

{
  return 1;
}

// GetTestSourceFileName @ 1419010a0

FString * __thiscall
FTextFilterTests_TextFilter::GetTestSourceFileName
          (FTextFilterTests_TextFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TextFilterTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1419010d0

int __thiscall FTextFilterTests_TextFilter::GetTestSourceFileLine(FTextFilterTests_TextFilter *this)

{
  return 0xfb;
}

// GetTests @ 1419010e0

/* WARNING: Removing unreachable block (ram,0x0001419011cd) */
/* WARNING: Removing unreachable block (ram,0x000141901298) */

void __thiscall
FTextFilterTests_TextFilter::GetTests
          (FTextFilterTests_TextFilter *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Text.TextFilter");
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

// RunTest @ 1419012c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FTextFilterTests_TextFilter::RunTest(FTextFilterTests_TextFilter *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStack_a78 [32];
  undefined1 local_a58 [8];
  FDelegateAllocation local_a50;
  undefined1 local_a40 [8];
  FDelegateAllocation local_a38;
  undefined1 local_a28 [8];
  FDelegateAllocation local_a20;
  undefined1 local_a10 [8];
  ForAnyElementType local_a08;
  ulonglong local_a00;
  FTestFilterExpression local_9f8;
  undefined ***local_9e0;
  ITestFilterExpression local_9d8;
  FTextFilterTests_TextFilter *local_9d0;
  undefined1 *local_9c8;
  undefined ***local_9c0;
  FDestructionSentinel local_9b8;
  FDestructionSentinel local_9a0;
  FDestructionSentinel local_988;
  FDestructionSentinel local_970;
  FDestructionSentinel local_958;
  FDelegateAllocation *local_940;
  FDestructionSentinel local_938;
  FDelegateAllocation *local_920;
  FDestructionSentinel local_918;
  FDelegateAllocation *local_900;
  FReadAccessScope local_8f8;
  FReadAccessScope local_8e0;
  FReadAccessScope local_8c8;
  undefined1 local_8a8 [88];
  void *local_850;
  undefined4 local_848;
  undefined **local_838;
  undefined8 local_830;
  longlong *plStack_828;
  undefined **local_820;
  TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_818;
  TDelegateBase<FNotThreadSafeDelegateMode> local_800;
  undefined8 local_7e8;
  FString *pFStack_7e0;
  undefined8 local_7d8;
  FTextFilterExpressionEvaluator local_7d0;
  FMRSWRecursiveAccessDetector local_458;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined **local_438;
  undefined8 local_430;
  longlong *plStack_428;
  undefined **local_420;
  TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_418;
  TDelegateBase<FNotThreadSafeDelegateMode> local_400;
  undefined8 local_3e8;
  FString *pFStack_3e0;
  undefined8 local_3d8;
  FTextFilterExpressionEvaluator local_3d0;
  FMRSWRecursiveAccessDetector local_58;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a78;
  TextFilterTests::FTestFilterItem::FTestFilterItem((FTestFilterItem *)local_8a8);
  local_a58 = (undefined1  [8])0x0;
  local_a50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a58,
             (FWriteAccessScope *)&local_958);
  local_940 = &local_a50;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_a50);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = TextFilterTests::FTestFilterItem::ExtractItemStrings;
  }
  if (local_958.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_958.Accessor,&local_958);
  }
  local_a00 = 0;
  local_838 = &___7__TTextFilter_PEBUFTestFilterItem_TextFilterTests____6B_;
  local_a10 = (undefined1  [8])0x0;
  local_820 = &
              ___7FTextFilterExpressionContext___TTextFilter_PEBUFTestFilterItem_TextFilterTests____6B_
  ;
  local_a08.Data = (FScriptContainerElement *)0x0;
  local_830 = 0;
  plStack_828 = (longlong *)0x0;
  TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            (&local_818,
             (TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)local_a58);
  TDelegate<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
  ::
  TDelegate<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
            (&local_800,
             (TDelegate<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,ETextFilterComparisonOperation,ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
              *)local_a10);
  local_7d8 = 0;
  local_7e8 = 0;
  pFStack_7e0 = (FString *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a10,
             (FWriteAccessScope *)&local_9b8);
  if (((int)local_a00 != 0) && (local_a08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a08,0,0,0x10);
    local_a00 = local_a00 & 0xffffffff00000000;
  }
  if (local_9b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9b8.Accessor,&local_9b8);
  }
  if (local_a08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a10);
  FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator(&local_7d0,BasicString);
  local_458.State = (atomic<unsigned___int64>)0x0;
  pTStack_450 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_448 = ___xmm_00000000000000020000000000000000;
  uStack_440 = _UNK_150631d48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a58,&local_8f8);
  if ((local_a50.DelegateSize == 0) ||
     (local_a50.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
LAB_1419014c0:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8f8);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTransformDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TextFilter.h"
                       ,0x27,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  else {
    cVar4 = (**(code **)(*(longlong *)local_a50.DelegateAllocator + 0x38))();
    if (cVar4 == '\0') goto LAB_1419014c0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a58,
             (FWriteAccessScope *)&local_9a0);
  if ((local_a50.DelegateSize != 0) &&
     (local_a50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a50,0,0,0x10);
    local_a50.DelegateSize = 0;
  }
  if (local_9a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a0.Accessor,&local_9a0);
  }
  if (local_a50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a58);
  local_9f8.TestItem = (FTestFilterItem *)local_8a8;
  local_9f8._padding_ = (longlong)&___7FTestFilterExpression_TextFilter_TextFilterTests__6B_;
  local_9e0 = &local_838;
  local_9f8.Test = (FAutomationTestBase *)this;
  bVar5 = TextFilterTests::TestAllCommonFilterExpressions((ITestFilterExpression *)&local_9f8);
  if (*(code **)(local_9f8._padding_ + 8) ==
      TextFilterTests::FTestFilterExpression::TestFilterExpression) {
    bVar6 = TextFilterTests::FTestFilterExpression::TestFilterExpression
                      (&local_9f8,L"Funky<String>",true);
  }
  else {
    bVar6 = (**(code **)(local_9f8._padding_ + 8))();
  }
  local_9f8._padding_ = (longlong)&___7ITestFilterExpression_TextFilterTests__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTStack_450,(int)local_448)
  ;
  if (pTStack_450 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTStack_450);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_458);
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator(&local_7d0);
  DestructItems<FString,int>(pFStack_7e0,(int)local_7d8);
  if (pFStack_7e0 != (FString *)0x0) {
    FMemory::Free(pFStack_7e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_800);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_818);
  local_820 = &___7ITextFilterExpressionContext__6B_;
  if (plStack_828 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_828 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_828 + 8))(plStack_828,1);
    }
  }
  local_a28 = (undefined1  [8])0x0;
  local_838 = &___7__IFilter_PEBUFTestFilterItem_TextFilterTests____6B_;
  local_a20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a20.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a28,
             (FWriteAccessScope *)&local_938);
  local_920 = &local_a20;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_a20);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = TextFilterTests::FTestFilterItem::TestItemComplexExpression;
  }
  if (local_938.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_938.Accessor,&local_938);
  }
  local_a40 = (undefined1  [8])0x0;
  local_a38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a38.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,
             (FWriteAccessScope *)&local_918);
  local_900 = &local_a38;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_a38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = TextFilterTests::FTestFilterItem::ExtractItemStrings;
  }
  if (local_918.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
  }
  local_438 = &___7__TTextFilter_PEBUFTestFilterItem_TextFilterTests____6B_;
  local_420 = &
              ___7FTextFilterExpressionContext___TTextFilter_PEBUFTestFilterItem_TextFilterTests____6B_
  ;
  local_430 = 0;
  plStack_428 = (longlong *)0x0;
  TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            (&local_418,
             (TDelegate<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)local_a40);
  TDelegate<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
  ::
  TDelegate<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
            (&local_400,
             (TDelegate<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,ETextFilterComparisonOperation,ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
              *)local_a28);
  local_3d8 = 0;
  local_3e8 = 0;
  pFStack_3e0 = (FString *)0x0;
  FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator(&local_3d0,Complex);
  local_58.State = (atomic<unsigned___int64>)0x0;
  pTStack_50 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_48 = ___xmm_00000000000000020000000000000000;
  uStack_40 = _UNK_150631d48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,&local_8e0);
  if ((local_a38.DelegateSize == 0) ||
     (local_a38.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
LAB_141901832:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8e0);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTransformDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TextFilter.h"
                       ,0x2e,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  else {
    cVar4 = (**(code **)(*(longlong *)local_a38.DelegateAllocator + 0x38))();
    if (cVar4 == '\0') goto LAB_141901832;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a28,&local_8c8);
  if ((local_a20.DelegateSize != 0) &&
     (local_a20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar4 = (**(code **)(*(longlong *)local_a20.DelegateAllocator + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_8c8);
      goto LAB_1419018d0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_8c8);
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("InTestComplexExpressionDelegate.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TextFilter.h"
                     ,0x2f,L"");
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
LAB_1419018d0:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,
             (FWriteAccessScope *)&local_988);
  if ((local_a38.DelegateSize != 0) &&
     (local_a38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a38,0,0,0x10);
    local_a38.DelegateSize = 0;
  }
  if (local_988.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_988.Accessor,&local_988);
  }
  if (local_a38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a28,
             (FWriteAccessScope *)&local_970);
  if ((local_a20.DelegateSize != 0) &&
     (local_a20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a20.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a20,0,0,0x10);
    local_a20.DelegateSize = 0;
  }
  if (local_970.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_970.Accessor,&local_970);
  }
  if (local_a20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a20.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a28);
  local_9c8 = local_8a8;
  local_9d8 = (ITestFilterExpression)&___7FTestFilterExpression_TextFilter_TextFilterTests__6B_;
  local_9c0 = &local_438;
  local_9d0 = this;
  bVar8 = TextFilterTests::TestAllComplexFilterExpressions(&local_9d8);
  local_9d8 = (ITestFilterExpression)&___7ITestFilterExpression_TextFilterTests__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTStack_50,(int)local_48);
  if (pTStack_50 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTStack_50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58);
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator(&local_3d0);
  DestructItems<FString,int>(pFStack_3e0,(int)local_3d8);
  if (pFStack_3e0 != (FString *)0x0) {
    FMemory::Free(pFStack_3e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_400);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_418);
  local_420 = &___7ITextFilterExpressionContext__6B_;
  if (plStack_428 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_428 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_428 + 8))(plStack_428,1);
    }
  }
  local_848 = 0;
  if (local_850 != (void *)0x0) {
    FMemory::Free(local_850);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_8a8 + 0x18));
  DestructItems<FString,int>((FString *)local_8a8._8_8_,local_8a8._16_4_);
  if ((FScriptContainerElement *)local_8a8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_8a8._8_8_);
  }
  return (bool)(bVar6 & bVar5 & bVar8);
}

// GetBeautifiedTestName @ 141901b10

FString * __thiscall
FTextFilterTests_TextFilter::GetBeautifiedTestName
          (FTextFilterTests_TextFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Text.TextFilter");
  return __return_storage_ptr__;
}

