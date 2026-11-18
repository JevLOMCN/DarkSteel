// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 9

// StaticClass @ 1470846d0

UClass * __cdecl UFarmHarvestTimerExpired::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmHarvestTimerExpired.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmHarvestTimerExpired",
               &Z_Registration_Info_UClass_UFarmHarvestTimerExpired.InnerSingleton,
               StaticRegisterNativesUFarmHarvestTimerExpired,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UFarmHarvestTimerExpired>,
               InternalVTableHelperCtorCaller<UFarmHarvestTimerExpired>,local_res8,
               UFarmProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmHarvestTimerExpired.InnerSingleton;
}

// UFarmHarvestTimerExpired @ 1470f5960

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmHarvestTimerExpired * __thiscall
UFarmHarvestTimerExpired::UFarmHarvestTimerExpired
          (UFarmHarvestTimerExpired *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0);
  *(undefined ***)this = &___7UFarmHarvestTimerExpired__6B_;
  return this;
}

// UFarmHarvestTimerExpired @ 1470f59a0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmHarvestTimerExpired * __thiscall
UFarmHarvestTimerExpired::UFarmHarvestTimerExpired(UFarmHarvestTimerExpired *this)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0,(UMassProcessor *)this);
  this->field_0x62 = this->field_0x62 & 0xfe;
  *(undefined ***)this = &___7UFarmHarvestTimerExpired__6B_;
  return this;
}

// ~UFarmHarvestTimerExpired @ 1470f8b00

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UFarmHarvestTimerExpired::~UFarmHarvestTimerExpired(UFarmHarvestTimerExpired *this)

{
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0);
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// operator() @ 1470fa3c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UFarmHarvestTimerExpired::Execute'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  FMassCommandBuffer *this_00;
  FMassEntityHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  DWORD DVar7;
  UPackage *pUVar8;
  FMassEntityHandle *pFVar9;
  FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this_01;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar10;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar11;
  longlong lVar12;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FString local_58;
  FEntityIterator local_48;
  
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar8,
                         L"HarvestTimerFragment");
  }
  FVar10 = (param_1->FragmentViews).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           param_1;
  if (FVar10 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                 )0x0) {
    FVar11 = FVar10;
  }
  FVar10 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           ((longlong)(param_1->FragmentViews).ArrayNum * 0x20 + (longlong)FVar11);
  for (; FVar11 != FVar10;
      FVar11 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )((longlong)FVar11 + 0x20)) {
    if (*(UScriptStruct **)FVar11 ==
        Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton) goto LAB_1470fa4f0;
  }
  FVar11 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           0x0;
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar8,
                         L"HarvestTimerFragment");
    if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      ::FString::FString(&local_58,L"None");
      goto LAB_1470fa4a1;
    }
  }
  local_res18 = (FName)(Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton)->
                       _padding_;
  ::FName::ToString(&local_res18,&local_58);
LAB_1470fa4a1:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1470fa4f0:
  iVar1 = *(int *)((longlong)FVar11 + 0x18);
  lVar2 = *(longlong *)((longlong)FVar11 + 0x10);
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_1,&local_48);
  do {
    if ((local_48.SerialNumber == 0) ||
       (lVar12 = (longlong)local_48.EntityIndex, local_48.NumEntities <= local_48.EntityIndex)) {
      return;
    }
    uVar6 = 0;
    if (local_48.EntityIndex < iVar1) {
      uVar6 = (uint)~local_48.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(lVar2 + lVar12 * 4) == 0) {
      this_00 = (param_1->DeferredCommandBuffer).Object;
      pFVar9 = TArrayView<FMassEntityHandle,int>::operator[]
                         (&param_1->EntityListView,local_48.EntityIndex);
      FVar3 = *pFVar9;
      if ((this_00->bIsFlushing != false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsFlushing() == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                             ,0x84,
                             L"Trying to push commands is not supported while the given buffer is being flushed"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DVar7 = GetCurrentThreadId();
      if ((this_00->OwnerThreadId != DVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                             ,0x84,
                             L"Commands can be pushed only in the same thread where the command buffer was created."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                        ::__l2::LLMScope_Name135,L"Mass/PushCommand");
        _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (local_res10,
                 `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                 ::__l2::LLMScope_Name135,false,None,Default,true);
      FMemScope::FMemScope
                (&local_res20,
                 &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                  ::__l2::LLMScope_Name135,true);
      this_01 = FMassCommandBuffer::
                CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>
                          (this_00);
      FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_01,FVar3);
      this_00->ActiveCommandsCounter = this_00->ActiveCommandsCounter + 1;
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res10);
    }
    local_48.EntityIndex = local_48.EntityIndex + 1;
    if ((((local_48.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_48.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_48.EntityIndex < local_48.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_48);
    }
  } while( true );
}

// ConfigureQueries @ 14711b260

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerExpired::ConfigureQueries
          (UFarmHarvestTimerExpired *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  FMassFragmentRequirements::AddRequirement<FHarvestTimerFragment>
            ((FMassFragmentRequirements *)&this->field_0xe0,ReadOnly,All);
  FMassFragmentRequirements::AddTagRequirement<FFarmJustBecameReadyToHarvestTag>
            ((FMassFragmentRequirements *)&this->field_0xe0,None);
  if ((this->field_0x350 & 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x114,L"Modifying requirements before initialization is not supported.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FFarmReadyToHarvestTag>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->field_0x160,iVar3);
  *(short *)&this->field_0x352 = *(short *)&this->field_0x352 + 1;
  *(ushort *)&this->field_0x350 = *(ushort *)&this->field_0x350 & 0xfffe;
  return;
}

// Execute @ 14711ce90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerExpired::Execute
          (UFarmHarvestTimerExpired *this,FMassEntityManager *param_1,FMassExecutionContext *param_2
          )

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerExpired::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerExpired_Run>
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
  UFarmHarvestTimerExpired *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UFarmHarvestTimerExpired_Run ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerExpired::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerExpired_Run>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_98.s,"UFarmHarvestTimerExpired_Run");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UFarmHarvestTimerExpired_Run,*pFVar5,
                   L"UFarmHarvestTimerExpired_Run","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_UFarmHarvestTimerExpired_Run;
  if (StatPtr_UFarmHarvestTimerExpired_Run ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerExpired::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerExpired_Run>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_80,"UFarmHarvestTimerExpired_Run");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerExpired::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerExpired_Run>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UFarmHarvestTimerExpired_Run,*pFVar5,
                         L"UFarmHarvestTimerExpired_Run","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
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
                   ,0x7c);
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
      goto LAB_14711d019;
    }
  }
  bVar3 = false;
  FVar10 = local_90;
LAB_14711d019:
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UFarmHarvestTimerExpired::Execute'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UFarmHarvestTimerExpired::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
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

// GetPrivateStaticClass @ 147120480

UClass * __cdecl UFarmHarvestTimerExpired::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmHarvestTimerExpired.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmHarvestTimerExpired",
               &Z_Registration_Info_UClass_UFarmHarvestTimerExpired.InnerSingleton,
               StaticRegisterNativesUFarmHarvestTimerExpired,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UFarmHarvestTimerExpired>,
               InternalVTableHelperCtorCaller<UFarmHarvestTimerExpired>,local_res8,
               UFarmProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmHarvestTimerExpired.InnerSingleton;
}

// StaticRegisterNativesUFarmHarvestTimerExpired @ 1471aba60

void __cdecl UFarmHarvestTimerExpired::StaticRegisterNativesUFarmHarvestTimerExpired(void)

{
  return;
}

