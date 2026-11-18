// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// GetTestFlags @ 141bc2860

EAutomationTestFlags __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::GetTestFlags(FUnicastDelegateBasicTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc2870

bool __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::IsStressTest(FUnicastDelegateBasicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc2880

uint __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::GetRequiredDeviceNum
          (FUnicastDelegateBasicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc2890

FString * __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::GetTestSourceFileName
          (FUnicastDelegateBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc28c0

int __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::GetTestSourceFileLine
          (FUnicastDelegateBasicTest *this)

{
  return 0x12;
}

// GetTests @ 141bc28d0

/* WARNING: Removing unreachable block (ram,0x000141bc2a4e) */

void __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::GetTests
          (FUnicastDelegateBasicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141bc2a70

bool __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::RunTest
          (FUnicastDelegateBasicTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc2aa0

FString * __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::GetBeautifiedTestName
          (FUnicastDelegateBasicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUnicastDelegateBasicTest @ 141bebbd0

FUnicastDelegateBasicTest * __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::FUnicastDelegateBasicTest
          (FUnicastDelegateBasicTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FUnicastDelegateBasicTest_TSDelegatesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Delegates::Unicast::Basic");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141beda60

void __thiscall
`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()
          (void *this)

{
  FDelegateAllocation *pFVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ForElementType<TAlignedBytes<16,16>_> this_01;
  ForElementType<TAlignedBytes<16,16>_> FVar5;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  FVar2 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x18);
  FVar5 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  this_01 = FVar5;
  if (FVar2 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined8 *)FVar2 = 0;
    *(undefined8 *)((longlong)FVar2 + 8) = 0;
    *(undefined4 *)((longlong)FVar2 + 0x10) = 0;
    this_01 = FVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
             (FWriteAccessScope *)&local_28);
  pFVar1 = (FDelegateAllocation *)((longlong)this_01 + 8);
  local_10 = pFVar1;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,pFVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    *(ForElementType<TAlignedBytes<16,16>_> *)(puVar3 + 3) = this_01;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
             (FReadAccessScope *)&local_28);
  if (*(int *)((longlong)this_01 + 0x10) != 0) {
    FVar5 = pFVar1->DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar5 + 0x60))(FVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)this;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x18);
  }
  return;
}

// operator() @ 141bedb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>::operator()
          (void *this)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_01;
  FReadAccessScope local_28;
  
  if (**(char **)((longlong)this + 8) != '\0') {
    this_01 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)this;
    if (this_01 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_01);
      if (*(void **)&this_01->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_01->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_01);
      ::operator_delete(this_01,0x18);
      return;
    }
    return;
  }
  **(char **)((longlong)this + 8) = '\x01';
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State != 0) {
    (**(code **)(*(longlong *)this_00[1].AccessDetector.State + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return;
  }
  (**(code **)(_DAT_00000000 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// operator() @ 141bedc20

void __thiscall
`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()
          (void *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ForElementType<TAlignedBytes<16,16>_> FVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  uVar1 = *(undefined8 *)this;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = uVar1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_48,(FReadAccessScope *)&local_30);
  FVar4 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_40.DelegateSize != 0) {
    FVar4 = local_40.DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// operator() @ 141bedd60

/* WARNING: Removing unreachable block (ram,0x000141bede33) */

void __thiscall
`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>::operator()
          (void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar2 = *(ForAnyElementType **)this;
  local_10 = 0;
  local_18 = 0;
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar6 = pFVar2->Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined4 *)(pFVar6 + 8) = 0;
  *(undefined8 *)pFVar6 = local_18;
  *(undefined4 *)(pFVar6 + 8) = (undefined4)local_10;
  return;
}

// operator() @ 141bf33c0

void __thiscall
`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()
          (void *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_40._8_8_ = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`11'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40._8_8_ = local_40._8_8_ & 0xffffffff00000000;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// TestBody @ 141c434c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody
          (FUnicastDelegateBasicTest *this,FString *param_1)

{
  atomic<unsigned_int> *paVar1;
  FDelegateAllocation *pFVar2;
  int *piVar3;
  undefined1 *puVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<bool> aVar5;
  atomic<unsigned_int> aVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FTaskBase *pFVar13;
  ForElementType<TAlignedBytes<16,16>_> FVar14;
  ForElementType<TAlignedBytes<16,16>_> FVar15;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar16;
  ForAnyElementType FVar17;
  longlong *plVar18;
  FTaskHandle *pFVar19;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  ForElementType<TAlignedBytes<16,16>_> this_02;
  longlong lVar20;
  longlong lVar21;
  char local_res18 [8];
  char local_res20 [8];
  char local_6b8;
  char local_6b7 [7];
  ForAnyElementType local_6b0;
  undefined8 local_6a8;
  ForAnyElementType local_6a0;
  undefined8 local_698;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_690;
  FDelegateAllocation local_688;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_678;
  ForAnyElementType local_670;
  int local_668;
  undefined1 local_660 [8];
  ForAnyElementType local_658;
  int local_650;
  undefined1 local_648;
  undefined1 local_647;
  undefined1 local_646;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_640;
  FDelegateAllocation local_638;
  undefined1 local_628 [8];
  FDelegateAllocation local_620;
  FDelegateAllocation local_610;
  undefined1 local_600 [8];
  FDelegateAllocation local_5f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5e8;
  FDelegateAllocation local_5e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5d0;
  ForAnyElementType local_5c8;
  int local_5c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5b8;
  FDelegateAllocation local_5b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5a0;
  FDelegateAllocation local_598;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_588;
  FDelegateAllocation local_580;
  FTaskBase *local_570;
  FTaskBase *local_568;
  TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_> local_560;
  FTaskEventBase *local_550;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_548;
  FTaskHandle local_540;
  ForElementType<TAlignedBytes<16,16>_> local_538;
  FTaskHandle local_530;
  FTaskEventBase *local_528;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_520;
  initializer_list<UE::Tasks::Private::FTaskHandle> local_508;
  FDestructionSentinel local_4f8;
  FDestructionSentinel local_4e0;
  FDestructionSentinel local_4c8;
  FDestructionSentinel local_4b0;
  FDestructionSentinel local_498;
  FDestructionSentinel local_480;
  FDestructionSentinel local_468;
  FDestructionSentinel local_450;
  FDestructionSentinel local_438;
  FDestructionSentinel local_420;
  FDestructionSentinel local_408;
  FDestructionSentinel local_3f0;
  FDestructionSentinel local_3d8;
  FDestructionSentinel local_3c0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDelegateAllocation *local_348;
  FDestructionSentinel local_340;
  FDelegateAllocation *local_328;
  FDestructionSentinel local_320;
  FDelegateAllocation *local_308;
  FDestructionSentinel local_300;
  FDelegateAllocation *local_2e8;
  FDestructionSentinel local_2e0;
  FDelegateAllocation *local_2c8;
  FDestructionSentinel local_2c0;
  FDelegateAllocation *local_2a8;
  FDestructionSentinel local_2a0;
  FDelegateAllocation *local_288;
  FDestructionSentinel local_280;
  FDelegateAllocation *local_268;
  FDestructionSentinel local_260;
  FDelegateAllocation *local_248;
  FDestructionSentinel local_240;
  FDelegateAllocation *local_228;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  FDestructionSentinel local_200;
  FDelegateAllocation *local_1e8;
  FDestructionSentinel local_1e0;
  FDelegateAllocation *local_1c8;
  FDestructionSentinel local_1c0;
  FDelegateAllocation *local_1a8;
  undefined1 local_1a0;
  FDelegateAllocation *local_198;
  FReadAccessScope local_190;
  FReadAccessScope local_178;
  FReadAccessScope local_160;
  FReadAccessScope local_148;
  FReadAccessScope local_130;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  this_02 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6b8 = '\0';
  local_640.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_638.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_638.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_640,(FWriteAccessScope *)&local_340);
  local_328 = &local_638;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_638);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = &local_6b8;
  }
  if (local_340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_640,&local_160);
  FVar15 = this_02;
  if (local_638.DelegateSize != 0) {
    FVar15 = local_638.DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar15 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_160);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_640,(FWriteAccessScope *)&local_4e0);
  if ((local_638.DelegateSize != 0) &&
     (local_638.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_638.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_638,0,0,0x10);
    local_638.DelegateSize = 0;
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  if ((local_6b8 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x1a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_640,(FWriteAccessScope *)&local_4c8);
  if ((local_638.DelegateSize != 0) &&
     (local_638.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_638.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_638,0,0,0x10);
    local_638.DelegateSize = 0;
  }
  if (local_4c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
  }
  if (local_638.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_638.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_640.AccessDetector);
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  lVar20 = 2;
  if (pFVar13 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`11'::<lambda_2>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(30)"
               ,Default,None,None);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`11'::<lambda_2>_>
          ::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar13);
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  local_588.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_580.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_580.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_588,(FWriteAccessScope *)&local_320);
  local_308 = &local_580;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_580);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`12'::<lambda_3>_>
                ::_vftable_;
  }
  if (local_320.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
  }
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar13 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`12'::<lambda_4>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(39)"
               ,Default,None,None);
    pFVar13[1]._padding_ = (longlong)&local_588;
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`12'::<lambda_4>_>
          ::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar13);
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_588,(FWriteAccessScope *)&local_4b0);
  if ((local_580.DelegateSize != 0) &&
     (local_580.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_580.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_580,0,0,0x10);
    local_580.DelegateSize = 0;
  }
  if (local_4b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b0.Accessor,&local_4b0);
  }
  if (local_580.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_580.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_588.AccessDetector);
  local_5a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_598.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_598.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5a0,(FWriteAccessScope *)&local_300);
  local_2e8 = &local_598;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_598);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`13'::<lambda_5>_>
                ::_vftable_;
  }
  if (local_300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
  }
  pFVar13 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar13 == (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar13,2,true);
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`13'::<lambda_6>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (pFVar13,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(45)"
               ,Default,None,None);
    pFVar13[1]._padding_ = (longlong)&local_5a0;
    pFVar13->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`13'::<lambda_6>_>
          ::_vftable_;
    Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
    Tasks::Private::FTaskBase::Wait(pFVar13);
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5a0,(FWriteAccessScope *)&local_498);
  if ((local_598.DelegateSize != 0) &&
     (local_598.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_598.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_598,0,0,0x10);
    local_598.DelegateSize = 0;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (local_598.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_598.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5a0.AccessDetector);
  local_5e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_5e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5e8,(FWriteAccessScope *)&local_2e0);
  local_2c8 = &local_5e0;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_5e0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &TCommonDelegateInstanceState<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy>
                ::_vftable_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`14'::<lambda_7>_>
                ::_vftable_;
    puVar11[3] = &local_648;
  }
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_5e8,&local_148);
  FVar15 = this_02;
  if (local_5e0.DelegateSize != 0) {
    FVar15 = local_5e0.DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar15 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5e8,(FWriteAccessScope *)&local_480);
  if ((local_5e0.DelegateSize != 0) &&
     (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5e0,0,0,0x10);
    local_5e0.DelegateSize = 0;
  }
  if (local_480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
  }
  if (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5e8.AccessDetector);
  local_690.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_688.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_688.DelegateSize = 0;
  local_res18[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_690,(FWriteAccessScope *)&local_360);
  local_348 = &local_688;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_688);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_8>_>
                ::_vftable_;
    puVar11[3] = local_res18;
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  local_678.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_670.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_690,(FWriteAccessScope *)&local_468);
  if (local_670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_670.Data);
  }
  local_670.Data = (FScriptContainerElement *)local_688.DelegateAllocator;
  local_668 = local_688.DelegateSize;
  local_688.DelegateSize = 0;
  local_688.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_690,&local_190);
  if (((local_688.DelegateSize == 0) ||
      (local_688.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar9 = (**(code **)(*(longlong *)local_688.DelegateAllocator + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Source.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                       ,0x43,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_678,&local_130);
  FVar17.Data = (FScriptContainerElement *)this_02;
  if (local_668 != 0) {
    FVar17.Data = local_670.Data;
  }
  (**(code **)(*(longlong *)FVar17.Data + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_130);
  if ((local_res18[0] == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x45,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_690,(FWriteAccessScope *)&local_2a0);
  local_288 = &local_688;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_688);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`15'::<lambda_9>_>
                ::_vftable_;
    puVar11[3] = local_res18;
  }
  if (local_2a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_690,(FWriteAccessScope *)&local_450);
  iVar10 = local_688.DelegateSize;
  FVar15 = local_688.DelegateAllocator;
  local_688.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_688.DelegateSize = 0;
  if (local_450.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_678,(FWriteAccessScope *)&local_438);
  if (local_668 == 0) {
LAB_141c43dff:
    if ((ForElementType<TAlignedBytes<16,16>_>)local_670.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_670.Data);
    }
  }
  else if ((ForElementType<TAlignedBytes<16,16>_>)local_670.Data !=
           (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    (*(code *)**(undefined8 **)local_670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_670,0,0,0x10);
    local_668 = 0;
    goto LAB_141c43dff;
  }
  local_670.Data = (FScriptContainerElement *)FVar15;
  local_668 = iVar10;
  if (local_438.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_690,&local_178);
  if (((local_688.DelegateSize == 0) ||
      (local_688.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar9 = (**(code **)(*(longlong *)local_688.DelegateAllocator + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Source.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                       ,0x4a,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_res18[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_678,&local_118);
  FVar17.Data = (FScriptContainerElement *)this_02;
  if (local_668 != 0) {
    FVar17.Data = local_670.Data;
  }
  (**(code **)(*(longlong *)FVar17.Data + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_118);
  if ((local_res18[0] == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x4d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_678,(FWriteAccessScope *)&local_420);
  if ((local_668 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_670.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_670,0,0,0x10);
    local_668 = 0;
  }
  if (local_420.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_670.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_670.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_678.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_690,(FWriteAccessScope *)&local_408);
  if ((local_688.DelegateSize != 0) &&
     (local_688.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_688.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_688,0,0,0x10);
    local_688.DelegateSize = 0;
  }
  if (local_408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
  }
  if (local_688.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_688.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_690.AccessDetector);
  local_600 = (undefined1  [8])0x0;
  local_5f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5f8.DelegateSize = 0;
  local_res20[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
             (FWriteAccessScope *)&local_280);
  local_268 = &local_5f8;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_5f8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`44'::<lambda_10>_>
                ::_vftable_;
    puVar11[3] = local_res20;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  local_660 = (undefined1  [8])0x0;
  local_658.Data = (FScriptContainerElement *)0x0;
  local_650 = 0;
  local_5d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_5c8.Data = (FScriptContainerElement *)0x0;
  local_5c0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,&local_100);
  if ((local_5f8.DelegateSize != 0) &&
     (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_5f8.DelegateAllocator + 0x50))
              (local_5f8.DelegateAllocator,&local_5d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5d0,(FWriteAccessScope *)&local_3f0);
  iVar10 = local_5c0;
  FVar17.Data = local_5c8.Data;
  local_5c8.Data = (FScriptContainerElement *)0x0;
  local_5c0 = 0;
  if (local_3f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f0.Accessor,&local_3f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,
             (FWriteAccessScope *)&local_3d8);
  if (local_650 == 0) {
LAB_141c44131:
    if (local_658.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data);
    }
  }
  else if (local_658.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_658.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_658,0,0,0x10);
    local_650 = 0;
    goto LAB_141c44131;
  }
  local_658.Data = FVar17.Data;
  local_650 = iVar10;
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5d0,(FWriteAccessScope *)&local_3c0);
  if ((local_5c0 != 0) && (local_5c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_5c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_5c8,0,0,0x10);
    local_5c0 = 0;
  }
  if (local_3c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
  }
  if (local_5c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,&local_e8);
  FVar17.Data = (FScriptContainerElement *)this_02;
  if (local_650 != 0) {
    FVar17.Data = local_658.Data;
  }
  (**(code **)(*(longlong *)FVar17.Data + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e8);
  if ((local_res20[0] == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x57,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_660,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_600);
  local_res20[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,&local_d0);
  FVar17.Data = (FScriptContainerElement *)this_02;
  if (local_650 != 0) {
    FVar17.Data = local_658.Data;
  }
  (**(code **)(*(longlong *)FVar17.Data + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d0);
  if ((local_res20[0] == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bExecuted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x5c,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,
             (FWriteAccessScope *)&local_3a8);
  if ((local_650 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_658.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_658.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_658,0,0,0x10);
    local_650 = 0;
  }
  if (local_3a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_658.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_658.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_660);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
             (FWriteAccessScope *)&local_390);
  if ((local_5f8.DelegateSize != 0) &&
     (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5f8,0,0,0x10);
    local_5f8.DelegateSize = 0;
  }
  if (local_390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
  }
  if (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_600);
  FVar14 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x18);
  FVar15 = this_02;
  if (FVar14 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined8 *)FVar14 = 0;
    *(undefined8 *)((longlong)FVar14 + 8) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x10) = 0;
    FVar15 = FVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,
             (FWriteAccessScope *)&local_260);
  pFVar2 = (FDelegateAllocation *)((longlong)FVar15 + 8);
  local_248 = pFVar2;
  puVar11 = Core::Private::DelegateAllocate(0x20,pFVar2);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`59'::<lambda_11>_>
                ::_vftable_;
    *(ForElementType<TAlignedBytes<16,16>_> *)(puVar11 + 3) = FVar15;
  }
  if (local_260.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,&local_58);
  FVar14 = this_02;
  if (*(int *)((longlong)FVar15 + 0x10) != 0) {
    FVar14 = pFVar2->DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar14 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  FVar14 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x18);
  FVar15 = this_02;
  if (FVar14 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined8 *)FVar14 = 0;
    *(undefined8 *)((longlong)FVar14 + 8) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x10) = 0;
    FVar15 = FVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,
             (FWriteAccessScope *)&local_240);
  pFVar2 = (FDelegateAllocation *)((longlong)FVar15 + 8);
  local_228 = pFVar2;
  puVar11 = Core::Private::DelegateAllocate(0x20,pFVar2);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`60'::<lambda_12>_>
                ::_vftable_;
    *(ForElementType<TAlignedBytes<16,16>_> *)(puVar11 + 3) = FVar15;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,&local_b8);
  FVar14 = this_02;
  if (*(int *)((longlong)FVar15 + 0x10) != 0) {
    FVar14 = pFVar2->DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar14 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  local_6b7[0] = '\0';
  FVar14 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x18);
  FVar15 = this_02;
  if (FVar14 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined8 *)FVar14 = 0;
    *(undefined8 *)((longlong)FVar14 + 8) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x10) = 0;
    FVar15 = FVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,
             (FWriteAccessScope *)&local_220);
  pFVar2 = (FDelegateAllocation *)((longlong)FVar15 + 8);
  local_208 = pFVar2;
  puVar11 = Core::Private::DelegateAllocate(0x28,pFVar2);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`61'::<lambda_13>_>
                ::_vftable_;
    *(ForElementType<TAlignedBytes<16,16>_> *)(puVar11 + 3) = FVar15;
    puVar11[4] = local_6b7;
  }
  if (local_220.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,&local_a0);
  FVar14 = this_02;
  if (*(int *)((longlong)FVar15 + 0x10) != 0) {
    FVar14 = pFVar2->DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar14 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if ((local_6b7[0] == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDestroy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp"
                         ,0x89,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar14 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x18);
  FVar15 = this_02;
  if (FVar14 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined8 *)FVar14 = 0;
    *(undefined8 *)((longlong)FVar14 + 8) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x10) = 0;
    FVar15 = FVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,
             (FWriteAccessScope *)&local_200);
  pFVar2 = (FDelegateAllocation *)((longlong)FVar15 + 8);
  local_1e8 = pFVar2;
  puVar11 = Core::Private::DelegateAllocate(0x20,pFVar2);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>_>
                ::_vftable_;
    *(ForElementType<TAlignedBytes<16,16>_> *)(puVar11 + 3) = FVar15;
  }
  if (local_200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,&local_88);
  FVar14 = this_02;
  if (*(int *)((longlong)FVar15 + 0x10) != 0) {
    FVar14 = pFVar2->DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar14 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  FVar14 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x18);
  FVar15 = this_02;
  if (FVar14 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined8 *)FVar14 = 0;
    *(undefined8 *)((longlong)FVar14 + 8) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x10) = 0;
    FVar15 = FVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,
             (FWriteAccessScope *)&local_1e0);
  pFVar2 = (FDelegateAllocation *)((longlong)FVar15 + 8);
  local_1c8 = pFVar2;
  puVar11 = Core::Private::DelegateAllocate(0x28,pFVar2);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`70'::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
                ::_vftable_;
    puVar11[4] = `UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder
                 ::SelfDestruct;
    *(ForElementType<TAlignedBytes<16,16>_> *)(puVar11 + 3) = FVar15;
    if ((FVar15 == (ForElementType<TAlignedBytes<16,16>_>)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar15,&local_70);
  FVar14 = this_02;
  if (*(int *)((longlong)FVar15 + 0x10) != 0) {
    FVar14 = pFVar2->DelegateAllocator;
  }
  (**(code **)(*(longlong *)FVar14 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  local_548.Reference =
       (FTaskBase *)
       Tasks::Private::FTaskEventBase::Create
                 (
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(182)"
                 );
  local_568 = (FTaskBase *)
              Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(183)"
                        );
  local_550 = Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(184)"
                        );
  local_570 = (FTaskBase *)
              Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(185)"
                        );
  local_5b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_5b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5b8,(FWriteAccessScope *)&local_1c0);
  local_1a8 = &local_5b0;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_5b0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFTaskEvent_Tasks_UE__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_15>_>
                ::_vftable_;
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  FVar15 = (ForElementType<TAlignedBytes<16,16>_>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  this_01.Reference = (FTaskBase *)this_02;
  if (FVar15 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar15,2,true);
    *(undefined ***)FVar15 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_16>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)FVar15,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(194)"
               ,Default,None,None);
    *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)((longlong)FVar15 + 0xd8) =
         &local_5b8;
    *(TRefCountPtr<UE::Tasks::Private::FTaskBase> **)((longlong)FVar15 + 0xe0) = &local_548;
    *(FTaskBase ***)((longlong)FVar15 + 0xe8) = &local_568;
    *(undefined ***)FVar15 =
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_16>_>
          ::_vftable_;
    this_01.Reference = (FTaskBase *)FVar15;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
  FVar15 = (ForElementType<TAlignedBytes<16,16>_>)
           TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Tasks::Private::SmallTaskAllocator);
  if (FVar15 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar15,2,true);
    *(undefined ***)FVar15 =
         &Tasks::Private::
          TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_17>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              ((FTaskBase *)FVar15,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Delegates\\TSDelegatesTest.cpp(195)"
               ,Default,None,None);
    *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)((longlong)FVar15 + 0xd8) =
         &local_5b8;
    *(FTaskEventBase ***)((longlong)FVar15 + 0xe0) = &local_550;
    *(FTaskBase ***)((longlong)FVar15 + 0xe8) = &local_570;
    *(undefined ***)FVar15 =
         &Tasks::Private::
          TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`71'::<lambda_17>_>
          ::_vftable_;
    this_02 = FVar15;
  }
  Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_02,0x100);
  local_530.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)local_548.Reference;
  if (local_548.Reference != (FTaskBase *)0x0) {
    LOCK();
    (local_548.Reference)->RefCount =
         (atomic<unsigned_int>)((int)(local_548.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_528 = local_550;
  if (local_550 != (FTaskEventBase *)0x0) {
    LOCK();
    *(int *)&local_550->field_0x30 = *(int *)&local_550->field_0x30 + 1;
    UNLOCK();
  }
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.ArrayNum = 2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_560.AllocatorInstance,2,&local_560.ArrayMax);
  ConstructItems<UE::Tasks::FTaskEvent,UE::Tasks::FTaskEvent,int>
            (local_560.AllocatorInstance.Data,(FTaskEvent *)&local_530,2);
  Tasks::Wait<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_>
            (&local_560,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::FTaskEvent,int>
            ((FTaskEvent *)local_560.AllocatorInstance.Data,local_560.ArrayNum);
  if ((FTaskEvent *)local_560.AllocatorInstance.Data != (FTaskEvent *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  pTVar16 = &local_520;
  lVar21 = 2;
  do {
    puVar11 = *(undefined8 **)&pTVar16[-1].ArrayNum;
    pTVar16 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
              &pTVar16[-1].ArrayNum;
    lVar21 = lVar21 + -1;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(puVar11 + 6);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
  } while (lVar21 != 0);
  if ((local_568 != (FTaskBase *)0x0) && ((local_568->Subsequents).bIsClosed == (atomic<bool>)0x0))
  {
    LOCK();
    aVar5 = local_568->TaskTriggered;
    local_568->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      local_568->RefCount = (atomic<unsigned_int>)((int)local_568->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(local_568,0xd8);
    }
  }
  if ((local_570 != (FTaskBase *)0x0) && ((local_570->Subsequents).bIsClosed == (atomic<bool>)0x0))
  {
    LOCK();
    aVar5 = local_570->TaskTriggered;
    local_570->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      local_570->RefCount = (atomic<unsigned_int>)((int)local_570->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(local_570,0xd8);
    }
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)this_01.Reference !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    LOCK();
    (this_01.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_01.Reference)->RefCount + 1);
    UNLOCK();
  }
  if (this_02 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    LOCK();
    *(int *)((longlong)this_02 + 0x30) = *(int *)((longlong)this_02 + 0x30) + 1;
    UNLOCK();
  }
  local_508._First = &local_540;
  local_508._Last = &local_530;
  local_540.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
  local_538 = this_02;
  pTVar16 = TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::
            TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>
                      (&local_520,&local_508);
  Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (pTVar16,(FTimespan)0x7fffffffffffffff);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_520.AllocatorInstance.Data,local_520.ArrayNum);
  if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.AllocatorInstance.Data);
  }
  pFVar19 = &local_530;
  do {
    pFVar13 = pFVar19[-1].Pimpl.Reference;
    pFVar19 = pFVar19 + -1;
    lVar20 = lVar20 + -1;
    if (pFVar13 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar13->RefCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
  } while (lVar20 != 0);
  if (this_02 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)this_02 + 0x30);
    iVar10 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (*(code *)**(undefined8 **)this_02)(this_02,1);
    }
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)this_01.Reference !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    LOCK();
    paVar1 = &(this_01.Reference)->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)(this_01.Reference)->_padding_)(this_01.Reference,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_5b8,(FWriteAccessScope *)&local_378);
  if ((local_5b0.DelegateSize != 0) &&
     (local_5b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5b0,0,0,0x10);
    local_5b0.DelegateSize = 0;
  }
  plVar18 = (longlong *)0x0;
  if (local_378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
  }
  if (local_5b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5b8.AccessDetector);
  if (local_570 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_570->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_570->_padding_)(local_570,1);
    }
  }
  if (local_550 != (FTaskEventBase *)0x0) {
    LOCK();
    puVar4 = &local_550->field_0x30;
    iVar10 = *(int *)puVar4;
    *(int *)puVar4 = *(int *)puVar4 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (*(code *)**(undefined8 **)local_550)(local_550,1);
    }
  }
  if (local_568 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &local_568->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)local_568->_padding_)(local_568,1);
    }
  }
  if (local_548.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &(local_548.Reference)->RefCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)(local_548.Reference)->_padding_)(local_548.Reference,1);
    }
  }
  local_6a0.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_198 = &local_610;
  local_698 = 0;
  local_610.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_610.DelegateSize = 0;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_610);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`72'::<lambda_18>_>
                ::_vftable_;
    puVar11[3] = &local_6a0;
  }
  if (((local_6a0.Data <= &local_610) &&
      (&local_610 < (FDelegateAllocation *)(local_6a0.Data + (longlong)local_698._4_4_ * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (int)local_698;
  if ((int)local_698 == local_698._4_4_) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_6a0,(int *)((longlong)&local_698 + 4));
  }
  local_698._0_4_ = iVar10 + 1;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (local_6a0.Data + (longlong)iVar10 * 0x10),
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_610)
  ;
  if (local_698._4_4_ != (int)local_698) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_698,&local_6a0,(int)local_698,(int *)((longlong)&local_698 + 4));
  }
  if (((int)local_698 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_647 = 0;
  if (*(int *)(local_6a0.Data + 8) != 0) {
    plVar18 = *(longlong **)local_6a0.Data;
  }
  (**(code **)(*plVar18 + 0x60))();
  local_646 = 0;
  if (local_610.DelegateSize != 0) {
    if (local_610.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_141c44eae;
    (*(code *)**(undefined8 **)local_610.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_610,0,0,0x10);
    local_610.DelegateSize = 0;
  }
  if (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_610.DelegateAllocator);
  }
LAB_141c44eae:
  DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             local_6a0.Data,(int)local_698);
  if ((FDelegateAllocation *)local_6a0.Data != (FDelegateAllocation *)0x0) {
    FMemory::Free(local_6a0.Data);
  }
  local_6b0.Data = (FScriptContainerElement *)0x0;
  local_6a8 = 0;
  iVar10 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_6b0,(int *)((longlong)&local_6a8 + 4));
  local_6a8 = CONCAT44(local_6a8._4_4_,iVar10 + 1);
  DefaultConstructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            (local_6b0.Data + (longlong)iVar10 * 0x18,1);
  local_628 = (undefined1  [8])0x0;
  local_620.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_620.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_628,
             (FWriteAccessScope *)&local_2c0);
  local_2a8 = &local_620;
  puVar11 = Core::Private::DelegateAllocate(0x20,&local_620);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`73'::<lambda_19>_>
                ::_vftable_;
  }
  if (local_2c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
  }
  if (((local_6b0.Data <= (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_628) &&
      ((FScriptContainerElement *)local_628 < local_6b0.Data + (longlong)local_6a8._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (int)local_6a8;
  if ((int)local_6a8 == local_6a8._4_4_) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_6b0,(int *)((longlong)&local_6a8 + 4));
  }
  this_00 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (local_6b0.Data + (longlong)iVar10 * 0x18);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&this_00->field_0x8 = 0;
  *(undefined4 *)&this_00->field_0x10 = 0;
  local_6a8._0_4_ = iVar10 + 1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_628);
  if (((local_6b0.Data <= (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_628) &&
      ((FScriptContainerElement *)local_628 < local_6b0.Data + (longlong)local_6a8._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((int)local_6a8 == local_6a8._4_4_) {
    local_6a8._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_6b0,(int *)((longlong)&local_6a8 + 4));
  }
  lVar20 = (longlong)(int)local_6a8;
  local_6a8 = CONCAT44(local_6a8._4_4_,(int)local_6a8 + 1);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_6b0.Data + lVar20 * 0x18),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_628);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_628,
             (FWriteAccessScope *)&local_4f8);
  if ((local_620.DelegateSize != 0) &&
     (local_620.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_620.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_620,0,0,0x10);
    local_620.DelegateSize = 0;
  }
  if (local_4f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
  }
  if (local_620.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_620.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_628);
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_6b0.Data,
             (int)local_6a8);
  if ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_6b0.Data !=
      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
    FMemory::Free(local_6b0.Data);
  }
  return;
}

