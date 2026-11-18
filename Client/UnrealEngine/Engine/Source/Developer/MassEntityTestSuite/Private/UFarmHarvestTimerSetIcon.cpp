// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 9

// StaticClass @ 147086000

UClass * __cdecl UFarmHarvestTimerSetIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmHarvestTimerSetIcon",
               &Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.InnerSingleton,
               StaticRegisterNativesUFarmHarvestTimerSetIcon,0x450,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UFarmHarvestTimerSetIcon>,
               InternalVTableHelperCtorCaller<UFarmHarvestTimerSetIcon>,local_res8,
               UFarmProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.InnerSingleton;
}

// UFarmHarvestTimerSetIcon @ 1470f59f0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmHarvestTimerSetIcon * __thiscall
UFarmHarvestTimerSetIcon::UFarmHarvestTimerSetIcon
          (UFarmHarvestTimerSetIcon *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0);
  *(undefined ***)this = &___7UFarmHarvestTimerSetIcon__6B_;
  (this->HarvestIconISMC).field0_0x0.DebugPtr = (UHierarchicalInstancedStaticMeshComponent *)0x0;
  return this;
}

// UFarmHarvestTimerSetIcon @ 1470f5a40

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmHarvestTimerSetIcon * __thiscall
UFarmHarvestTimerSetIcon::UFarmHarvestTimerSetIcon(UFarmHarvestTimerSetIcon *this)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0,(UMassProcessor *)this);
  this->field_0x62 = this->field_0x62 & 0xfe;
  *(undefined ***)this = &___7UFarmHarvestTimerSetIcon__6B_;
  (this->HarvestIconISMC).field0_0x0.DebugPtr = (UHierarchicalInstancedStaticMeshComponent *)0x0;
  return this;
}

// ~UFarmHarvestTimerSetIcon @ 1470f8b40

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UFarmHarvestTimerSetIcon::~UFarmHarvestTimerSetIcon(UFarmHarvestTimerSetIcon *this)

{
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0);
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// operator() @ 1470fa740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UFarmHarvestTimerSetIcon::Execute'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  FMassCommandBuffer *pFVar3;
  FMassEntityHandle FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  UPackage *pUVar10;
  FMassEntityHandle *pFVar11;
  FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this_00;
  FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *this_01;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar12;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar13;
  longlong lVar14;
  undefined1 auStackY_148 [32];
  FLLMScope local_118;
  FLLMScope local_114;
  FEntityIterator local_110;
  FString local_f0;
  FName local_e0;
  FMemScope local_d8;
  FMemScope local_d0;
  TArrayView<FFarmVisualFragment,int> local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar10,
                         L"FarmGridCellData");
  }
  FVar12 = (param_1->FragmentViews).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           param_1;
  if (FVar12 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                 )0x0) {
    FVar13 = FVar12;
  }
  FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           ((longlong)(param_1->FragmentViews).ArrayNum * 0x20 + (longlong)FVar13);
  for (; FVar13 != FVar12;
      FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )((longlong)FVar13 + 0x20)) {
    if (*(UScriptStruct **)FVar13 ==
        Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton) goto LAB_1470fa88a;
  }
  FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           0x0;
  if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar10,
                         L"FarmGridCellData");
    if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0)
    {
      ::FString::FString(&local_f0,L"None");
      goto LAB_1470fa83b;
    }
  }
  local_e0 = (FName)(Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton)->_padding_;
  ::FName::ToString(&local_e0,&local_f0);
LAB_1470fa83b:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1470fa88a:
  iVar1 = *(int *)((longlong)FVar13 + 0x18);
  lVar2 = *(longlong *)((longlong)FVar13 + 0x10);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FMassExecutionContext::GetMutableFragmentView<FFarmVisualFragment>(param_1,&local_c8);
  FMassExecutionContext::CreateEntityIterator(param_1,&local_110);
  while( true ) {
    iVar8 = local_110.EntityIndex;
    if ((local_110.SerialNumber == 0) || (local_110.NumEntities <= local_110.EntityIndex)) {
      return;
    }
    uVar7 = 0;
    if (local_110.EntityIndex < iVar1) {
      uVar7 = (uint)~local_110.EntityIndex >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = *(longlong *)this;
    local_78 = (double)*(float *)(lVar14 + 0x444);
    dStack_90 = (double)((float)*(ushort *)(lVar2 + 2 + (longlong)iVar8 * 4) *
                        *(float *)(lVar14 + 0x43c));
    local_b8 = UE::Math::TQuat<double>::Identity.X;
    dStack_b0 = UE::Math::TQuat<double>::Identity.Y;
    local_98 = (double)((float)*(ushort *)(lVar2 + (longlong)iVar8 * 4) * *(float *)(lVar14 + 0x438)
                       );
    local_a8 = UE::Math::TQuat<double>::Identity.Z;
    dStack_a0 = UE::Math::TQuat<double>::Identity.W;
    local_88 = (double)*(float *)(lVar14 + 0x440);
    uStack_80 = 0;
    uStack_60 = 0;
    dStack_70 = local_78;
    local_68 = local_78;
    iVar8 = (**(code **)(**(longlong **)(lVar14 + 0x430) + 0xbb0))
                      (*(longlong **)(lVar14 + 0x430),&local_b8,0);
    lVar14 = (longlong)local_110.EntityIndex;
    uVar7 = 0;
    if (local_110.EntityIndex < local_c8.ArrayNum) {
      uVar7 = (uint)~local_110.EntityIndex >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c8.DataPtr[lVar14].HarvestIconIndex = iVar8;
    pFVar11 = TArrayView<FMassEntityHandle,int>::operator[]
                        (&param_1->EntityListView,local_110.EntityIndex);
    pFVar3 = (param_1->DeferredCommandBuffer).Object;
    FVar4 = *pFVar11;
    if ((pFVar3->bIsFlushing != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DVar9 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar6)) break;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_118,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
               ::__l2::LLMScope_Name135,false,None,Default,true);
    FMemScope::FMemScope
              (&local_d8,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                ::__l2::LLMScope_Name135,true);
    this_00 = FMassCommandBuffer::
              CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>
                        (pFVar3);
    FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,FVar4);
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&local_d8);
    FLLMScope::~FLLMScope(&local_118);
    pFVar3 = (param_1->DeferredCommandBuffer).Object;
    if ((pFVar3->bIsFlushing != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DVar9 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_114,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
               ::__l2::LLMScope_Name135,false,None,Default,true);
    FMemScope::FMemScope
              (&local_d0,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                ::__l2::LLMScope_Name135,true);
    this_01 = FMassCommandBuffer::
              CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(pFVar3);
    FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_01,FVar4);
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&local_d0);
    FLLMScope::~FLLMScope(&local_114);
    local_110.EntityIndex = local_110.EntityIndex + 1;
    if ((((local_110.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_110.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_110.EntityIndex < local_110.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_110);
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ConfigureQueries @ 14711b300

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerSetIcon::ConfigureQueries
          (UFarmHarvestTimerSetIcon *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  undefined1 *this_00;
  
  this_00 = &this->field_0xe0;
  FMassFragmentRequirements::AddRequirement<FFarmGridCellData>
            ((FMassFragmentRequirements *)this_00,ReadOnly,All);
  FMassFragmentRequirements::AddRequirement<FFarmVisualFragment>
            ((FMassFragmentRequirements *)this_00,ReadWrite,All);
  FMassFragmentRequirements::AddTagRequirement<FFarmJustBecameReadyToHarvestTag>
            ((FMassFragmentRequirements *)this_00,All);
  return;
}

// Execute @ 14711d220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerSetIcon::Execute
          (UFarmHarvestTimerSetIcon *this,FMassEntityManager *param_1,FMassExecutionContext *param_2
          )

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UFarmHarvestTimerSetIcon::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_SET_ICON_SET_ICON_SET_ICON>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  undefined ***pppuVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_98;
  FName local_90;
  FStatMessage local_80;
  code *local_68 [2];
  undefined **local_58;
  UFarmHarvestTimerSetIcon *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->HarvestIconISMC).field0_0x0.DebugPtr ==
      (UHierarchicalInstancedStaticMeshComponent *)0x0) {
    return;
  }
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_SET_ICON_SET_ICON_SET_ICON ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UFarmHarvestTimerSetIcon::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_SET_ICON_SET_ICON_SET_ICON>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_98.s,"SET_ICON_SET_ICON_SET_ICON");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SET_ICON_SET_ICON_SET_ICON,*pFVar5,
                 L"SET_ICON_SET_ICON_SET_ICON","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_SET_ICON_SET_ICON_SET_ICON;
  if (StatPtr_SET_ICON_SET_ICON_SET_ICON ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UFarmHarvestTimerSetIcon::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_SET_ICON_SET_ICON_SET_ICON>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_80,"SET_ICON_SET_ICON_SET_ICON");
    FVar6 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UFarmHarvestTimerSetIcon::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_SET_ICON_SET_ICON_SET_ICON>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_SET_ICON_SET_ICON_SET_ICON,*pFVar5,
                         L"SET_ICON_SET_ICON_SET_ICON","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar7 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar9.Value;
        local_98.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassEntityTestFarmPlot.cpp"
                   ,0x9d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar9.Value;
      local_98.s.HighPart = uVar7;
      local_90 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_90.ComparisonIndex.Value;
      goto LAB_14711d3c0;
    }
  }
  bVar3 = false;
  FVar10 = local_90;
LAB_14711d3c0:
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UFarmHarvestTimerSetIcon::Execute'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UFarmHarvestTimerSetIcon::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                ::Call;
  local_50 = this;
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)&this->field_0xe0,param_2,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar8 = local_40;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_98);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 147120540

UClass * __cdecl UFarmHarvestTimerSetIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmHarvestTimerSetIcon",
               &Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.InnerSingleton,
               StaticRegisterNativesUFarmHarvestTimerSetIcon,0x450,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UFarmHarvestTimerSetIcon>,
               InternalVTableHelperCtorCaller<UFarmHarvestTimerSetIcon>,local_res8,
               UFarmProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.InnerSingleton;
}

// StaticRegisterNativesUFarmHarvestTimerSetIcon @ 1471aba70

void __cdecl UFarmHarvestTimerSetIcon::StaticRegisterNativesUFarmHarvestTimerSetIcon(void)

{
  return;
}

