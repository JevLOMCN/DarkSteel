// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 52

// `dynamic_initializer_for_'FPagedArrayFilteringTestAutomationTestInstance'' @ 1413cbfe0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPagedArrayFilteringTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPagedArrayFilteringTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPagedArrayFilteringTestAutomationTestInstance,&local_18,false)
  ;
  FPagedArrayFilteringTestAutomationTestInstance._0_8_ = &___7FPagedArrayFilteringTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPagedArrayFilteringTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Insights_TraceServices'' @ 1413cc040

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Insights_TraceServices__(void)

{
  FName *pFVar1;
  FName local_res20;
  
  pFVar1 = FName::FName(&local_res20,L"Insights");
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Insights_TraceServices,L"Insights_TraceServices",(FName)0x0,*pFVar1,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'ModuleFeatureName'' @ 1413cc0a0

void __cdecl TraceServices::_dynamic_initializer_for__ModuleFeatureName__(void)

{
  ::FName::FName(&ModuleFeatureName,"TraceModuleFeature");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantTraceServices'' @ 1413cc0c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantTraceServices__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TraceServices";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TraceServices",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FTraceServicesModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14d4915e0

void * __thiscall
ITraceServicesModule::_scalar_deleting_destructor_(ITraceServicesModule *this,uint param_1)

{
  *this = (ITraceServicesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d491f90

void * __thiscall
FTraceServicesModule::_scalar_deleting_destructor_(FTraceServicesModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModuleService).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalysisService).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d495990

void * __thiscall
FPagedArrayFilteringTest::_scalar_deleting_destructor_(FPagedArrayFilteringTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>,int> @ 14d495c60

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::FModuleInfo,int> @ 14d495c90

void __cdecl DefaultConstructItems<TraceServices::FModuleInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FModuleInfoEx,int> @ 14d495cc0

void __cdecl DefaultConstructItems<TraceServices::FModuleInfoEx,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetElementRangeOverlappingGivenRange<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>_> @ 14d496140

FInt32Interval __cdecl
TraceServices::
GetElementRangeOverlappingGivenRange<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
          (TPagedArray<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion,TraceServices::TPagedArrayPage<_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion>_>
           *param_1,double param_2,double param_3,
          TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
          *param_4,TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
                   *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  FInt32Interval FVar9;
  longlong lVar10;
  longlong in_RDX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  uint local_res10;
  undefined8 *in_stack_00000030;
  
  param_1->Allocator = (ILinearAllocator *)0xffffffffffffffff;
  if (((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) < param_3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndTime >= StartTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                         ,0x30c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FInt32Interval)(*pcVar6)();
    return FVar9;
  }
  puVar3 = *(undefined8 **)(in_RDX + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = *(int *)(in_RDX + 0x30);
    uVar14 = *(uint *)(in_RDX + 0x10);
    iVar2 = *(int *)(in_RDX + 0x28);
    dVar17 = (double)(**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,*puVar3);
    if ((dVar17 < (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) ||
         dVar17 == (double)CONCAT44(in_XMM3_Db,in_XMM3_Da)) &&
       (dVar17 = (double)(*(code *)*in_stack_00000030)
                                   (in_stack_00000030[1],
                                    **(longlong **)(in_RDX + 0x20) + -0x10 +
                                    (*(longlong **)(in_RDX + 0x20))[1] * 0x10), param_3 < dVar17)) {
      uVar16 = 0;
      if (((int)uVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      local_res10 = 0;
      uVar12 = 0;
      uVar15 = uVar14;
      if (0 < (int)uVar14) {
        do {
          iVar13 = (uVar15 >> 1) + uVar12;
          dVar17 = (double)(*(code *)*in_stack_00000030)
                                     (in_stack_00000030[1],puVar3[(longlong)iVar13 * 2]);
          uVar11 = iVar13 + (uVar15 & 1);
          if (param_3 < dVar17) {
            uVar11 = uVar12;
          }
          uVar12 = uVar11;
          uVar11 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
          local_res10 = uVar12;
        } while (uVar11 != 0);
      }
      iVar13 = local_res10 - 1;
      if (iVar13 < 0) {
        *(undefined4 *)&param_1->Allocator = 0;
        iVar13 = 0;
      }
      else {
        lVar10 = (longlong)iVar13;
        lVar4 = puVar3[lVar10 * 2];
        uVar15 = *(uint *)(puVar3 + lVar10 * 2 + 1);
        if (((int)uVar15 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          FVar9 = (FInt32Interval)(*pcVar6)();
          return FVar9;
        }
        pcVar6 = (code *)*in_stack_00000030;
        uVar5 = in_stack_00000030[1];
        uVar12 = uVar16;
        uVar11 = uVar16;
        if (0 < (int)uVar15) {
          do {
            uVar16 = uVar15 >> 1;
            dVar17 = (double)(*pcVar6)(uVar5,(longlong)(int)(uVar16 + uVar12) * 0x10 + lVar4);
            uVar11 = uVar16 + uVar12 + (uVar15 & 1);
            if (param_3 < dVar17) {
              uVar11 = uVar12;
            }
            uVar7 = uVar15 >> 1;
            uVar15 = uVar16;
            uVar12 = uVar11;
          } while (uVar7 != 0);
          if (((int)uVar11 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                                 ,0x32f,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            FVar9 = (FInt32Interval)(*pcVar6)();
            return FVar9;
          }
        }
        if (((ulonglong)puVar3[lVar10 * 2 + 1] <= (ulonglong)(longlong)(int)uVar11) &&
           (local_res10 == uVar14)) {
          return (FInt32Interval)param_1;
        }
        *(uint *)&param_1->Allocator = iVar13 * iVar2 + uVar11;
        if ((iVar1 < (int)uVar11) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index <= NumPoints",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                               ,0x338,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          FVar9 = (FInt32Interval)(*pcVar6)();
          return FVar9;
        }
      }
      uVar14 = uVar14 - iVar13;
      if (((int)uVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      uVar15 = uVar16;
      if (0 < (int)uVar14) {
        do {
          iVar1 = (uVar14 >> 1) + uVar16;
          dVar17 = (double)(**(code **)param_5)
                                     (*(undefined8 *)&param_5->field_0x8,
                                      puVar3[(longlong)iVar13 * 2 + (longlong)iVar1 * 2]);
          uVar15 = iVar1 + (uVar14 & 1);
          if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) <= dVar17 &&
              dVar17 != (double)CONCAT44(in_XMM3_Db,in_XMM3_Da)) {
            uVar15 = uVar16;
          }
          uVar12 = uVar14 >> 1;
          uVar16 = uVar15;
          uVar14 = uVar14 >> 1;
        } while (uVar12 != 0);
        uVar16 = 0;
      }
      iVar13 = uVar15 + iVar13;
      if ((iVar13 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EndPageIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x343,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      lVar4 = puVar3[(longlong)iVar13 * 2 + -2];
      uVar14 = *(uint *)(puVar3 + (longlong)iVar13 * 2 + -1);
      if (((int)uVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
code_r0x00014d4965b1:
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      pcVar6 = *(code **)param_5;
      uVar5 = *(undefined8 *)&param_5->field_0x8;
      uVar15 = uVar14;
      if (0 < (int)uVar14) {
        do {
          iVar1 = (uVar15 >> 1) + uVar16;
          dVar17 = (double)(*pcVar6)(uVar5,(longlong)iVar1 * 0x10 + lVar4);
          uVar12 = iVar1 + (uVar15 & 1);
          if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) <= dVar17 &&
              dVar17 != (double)CONCAT44(in_XMM3_Db,in_XMM3_Da)) {
            uVar12 = uVar16;
          }
          uVar16 = uVar12;
          uVar12 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
        } while (uVar12 != 0);
        if (((int)uVar16 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                               ,0x34b,L""), bVar8)) goto code_r0x00014d4965b1;
      }
      if ((int)uVar16 < (int)uVar14) {
        uVar14 = uVar16;
      }
      *(uint *)((longlong)&param_1->Allocator + 4) = (iVar13 + -1) * iVar2 + -1 + uVar14;
    }
  }
  return (FInt32Interval)param_1;
}

// MakeShared<TraceServices::FAnalysisService,1,TraceServices::FModuleService_&> @ 14d496630

TSharedRef<TraceServices::FAnalysisService,1> * __cdecl
MakeShared<TraceServices::FAnalysisService,1,TraceServices::FModuleService_&>
          (TSharedRef<TraceServices::FAnalysisService,1> *__return_storage_ptr__,
          FModuleService *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TraceServices::FAnalysisService,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAnalysisService *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalysisService_TraceServices___00_SharedPointerInternals__6B_
    ;
    TraceServices::FAnalysisService::FAnalysisService((FAnalysisService *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FAnalysisService *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TraceServices::FAnalysisService,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TraceServices::FModuleService,1> @ 14d4966f0

TSharedRef<TraceServices::FModuleService,1> * __cdecl
MakeShared<TraceServices::FModuleService,1>
          (TSharedRef<TraceServices::FModuleService,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TraceServices::FModuleService,1> *pTVar4;
  
  pTVar3 = operator_new(0xe8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FModuleService *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModuleService_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FModuleService_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar3[1].SharedReferenceCount,4000);
    *(undefined1 *)&pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[7]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[7]._padding_ + 4) = 0x80;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xc]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0xc]._padding_ + 4) = 0x80;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xe]._padding_ = 0;
    __return_storage_ptr__->Object = (FModuleService *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FModuleService *)(pTVar3 + 1) == (FModuleService *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TraceServices::FModuleService,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// UpperBoundInternal<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,int,double,TFunctionRef<double___cdecl(`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&)>,TLess<void>_> @ 14d496820

int __cdecl
AlgoImpl::
UpperBoundInternal<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,int,double,TFunctionRef<double___cdecl(_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion_const_&)>,TLess<void>_>
          (FTimeRegion *param_1,int param_2,double *param_3,
          TFunctionRef<double___cdecl(_protected:_virtual_bool___cdecl_FPagedArrayFilteringTest::RunTest(FString_const_&)_::_2_::FTimeRegion_const_&)>
          *param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      dVar4 = (double)(**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,param_1 + iVar1);
      iVar1 = iVar1 + (param_2 & 1U);
      if (*param_3 <= dVar4 && dVar4 != *param_3) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// ~TPagedArray<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>_> @ 14d496960

void __thiscall
TraceServices::
TPagedArray<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion,TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>_>
::
~TPagedArray<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion,TraceServices::TPagedArrayPage<_FPagedArrayFilteringTest::RunTest_::__l2::FTimeRegion>_>
          (void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  lVar3 = (longlong)iVar1 * 0x10 + lVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    lVar2 = lVar2 + 0x10;
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

// operator!= @ 14d496bc0

bool __cdecl operator!=(FInt32Interval *param_1,FInt32Interval *param_2)

{
  if ((*(int *)param_1 == *(int *)param_2) &&
     (*(int *)&param_1->field_0x4 == *(int *)&param_2->field_0x4)) {
    return false;
  }
  return true;
}

// operator() @ 14d496be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TraceServices::BookmarksToCsv'::__l2::<lambda_1>::operator()(void *this,FBookmark *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_e8 [32];
  FString local_c8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  ::FString::PrintfImpl(&local_c8,L"%s,%.4f\n");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar4.Data = local_c8.Data.AllocatorInstance.Data;
  }
  StringCast<char,128,wchar_t>(&local_b8,(wchar_t *)FVar4.Data);
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = (longlong *)*plVar1;
  (**(code **)(*plVar1 + 0x188))(plVar1,local_b8.Ptr,(longlong)local_b8.StringLength);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14d496e80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FAllocationsProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FAllocationsProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d496ec0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FAnalysisService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FAnalysisService,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d496f00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCallstacksProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCallstacksProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d496f40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FContextSwitchesProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FContextSwitchesProvider,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d496f80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCookProfilerProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCookProfilerProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d496fc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCsvProfilerProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCsvProfilerProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497000

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FDiagnosticsProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FDiagnosticsProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497040

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FFileActivityProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FFileActivityProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497080

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FLoadTimeProfilerProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FLoadTimeProfilerProvider,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4970c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FMemoryProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FMemoryProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497100

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FMetadataProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FMetadataProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497140

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FModuleService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FModuleService,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497180

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FNetProfilerProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FNetProfilerProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4971c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FStackSamplesProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FStackSamplesProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497200

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTasksProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FTasksProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497240

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTimingProfilerProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FTimingProfilerProvider,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d497280

void * __thiscall
TraceServices::FModuleService::_scalar_deleting_destructor_(FModuleService *this,uint param_1)

{
  ~FModuleService(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4972c0

void * __thiscall
TraceServices::IModuleService::_scalar_deleting_destructor_(IModuleService *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// BookmarksToCsv @ 14d4972f0

void __cdecl
TraceServices::BookmarksToCsv
          (IBookmarkProvider *param_1,wchar_t *param_2,double param_3,double param_4)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  longlong *plVar4;
  longlong **local_res8;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  code *local_38;
  undefined8 **local_30;
  
  pIVar3 = IFileManager::Get();
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,param_2,0);
  local_48 = plVar4;
  local_40 = ::operator_new(0x18);
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    local_40->SharedReferenceCount = (atomic<int>)0x1;
    local_40->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_40->WeakReferenceCount = (atomic<int>)0x1;
    local_40[1]._padding_ = (longlong)plVar4;
  }
  if ((local_48 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*local_48 + 0x188))(local_48,"Name, Timestamp\n",0x10);
  local_res8 = &local_48;
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::BookmarksToCsv'::__l2::<lambda_1>,void,TraceServices::FBookmark_const_&>
             ::Call;
  (**(code **)((longlong)*param_1 + 0x28))(param_1,SUB84(param_3,0),SUB84(param_4,0),&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// EditCookProfilerProvider @ 14d497560

IEditableCookProfilerProvider * __cdecl
TraceServices::EditCookProfilerProvider(IAnalysisSession *param_1)

{
  IEditableCookProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CookProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableCookProfilerProvider *)
           (**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// EditTimingProfilerProvider @ 14d4975f0

IEditableTimingProfilerProvider * __cdecl
TraceServices::EditTimingProfilerProvider(IAnalysisSession *param_1)

{
  IEditableTimingProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TimingProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableTimingProfilerProvider *)
           (**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// GetCookProfilerProviderName @ 14d498090

FName __cdecl TraceServices::GetCookProfilerProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CookProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetCsvProfilerProviderName @ 14d498110

FName __cdecl TraceServices::GetCsvProfilerProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CsvProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetFileActivityProviderName @ 14d4987c0

FName __cdecl TraceServices::GetFileActivityProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"FileActivityProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetLoadTimeProfilerProviderName @ 14d498840

FName __cdecl TraceServices::GetLoadTimeProfilerProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"LoadTimeProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetTaskProviderName @ 14d498960

FName __cdecl TraceServices::GetTaskProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TasksProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetTimingProfilerProviderName @ 14d4989e0

FName __cdecl TraceServices::GetTimingProfilerProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TimingProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// ReadCookProfilerProvider @ 14d499010

ICookProfilerProvider * __cdecl TraceServices::ReadCookProfilerProvider(IAnalysisSession *param_1)

{
  ICookProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CookProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ICookProfilerProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadCsvProfilerProvider @ 14d4990a0

ICsvProfilerProvider * __cdecl TraceServices::ReadCsvProfilerProvider(IAnalysisSession *param_1)

{
  ICsvProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CsvProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ICsvProfilerProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadFileActivityProvider @ 14d499130

IFileActivityProvider * __cdecl TraceServices::ReadFileActivityProvider(IAnalysisSession *param_1)

{
  IFileActivityProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"FileActivityProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IFileActivityProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadLoadTimeProfilerProvider @ 14d4991c0

ILoadTimeProfilerProvider * __cdecl
TraceServices::ReadLoadTimeProfilerProvider(IAnalysisSession *param_1)

{
  ILoadTimeProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"LoadTimeProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ILoadTimeProfilerProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8)
  ;
  return pIVar1;
}

// ReadTasksProvider @ 14d499250

ITasksProvider * __cdecl TraceServices::ReadTasksProvider(IAnalysisSession *param_1)

{
  ITasksProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TasksProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ITasksProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadTimingProfilerProvider @ 14d4992e0

ITimingProfilerProvider * __cdecl
TraceServices::ReadTimingProfilerProvider(IAnalysisSession *param_1)

{
  ITimingProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"TimingProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ITimingProfilerProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// IMPLEMENT_MODULE_TraceServices @ 14d4999c0

void __cdecl IMPLEMENT_MODULE_TraceServices(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FPagedArrayFilteringTestAutomationTestInstance'' @ 150456280

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPagedArrayFilteringTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPagedArrayFilteringTestAutomationTestInstance);
  return;
}

