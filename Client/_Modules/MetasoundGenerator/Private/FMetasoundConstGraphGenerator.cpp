// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 7

// FMetasoundConstGraphGenerator @ 14b2a6700

FMetasoundConstGraphGenerator * __thiscall
Metasound::FMetasoundConstGraphGenerator::FMetasoundConstGraphGenerator
          (FMetasoundConstGraphGenerator *this,FGeneratorInitParams *param_1)

{
  FMetasoundGenerator::FMetasoundGenerator((FMetasoundGenerator *)this,&param_1->OperatorSettings);
  this->_padding_ = (longlong)&___7FMetasoundConstGraphGenerator_Metasound__6B_;
  (this->EnvironmentPtr).Ptr = (FMetasoundEnvironment *)0x0;
  (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
  (this->OperatorPoolID).bIsSet = false;
  this->bUseOperatorPool = false;
  Init(this,param_1);
  return this;
}

// FMetasoundConstGraphGenerator @ 14b2a6760

FMetasoundConstGraphGenerator * __thiscall
Metasound::FMetasoundConstGraphGenerator::FMetasoundConstGraphGenerator
          (FMetasoundConstGraphGenerator *this,FOperatorSettings *param_1)

{
  FMetasoundGenerator::FMetasoundGenerator((FMetasoundGenerator *)this,param_1);
  this->_padding_ = (longlong)&___7FMetasoundConstGraphGenerator_Metasound__6B_;
  (this->EnvironmentPtr).Ptr = (FMetasoundEnvironment *)0x0;
  (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
  (this->OperatorPoolID).bIsSet = false;
  this->bUseOperatorPool = false;
  return this;
}

// ~FMetasoundConstGraphGenerator @ 14b2a7ee0

void __thiscall
Metasound::FMetasoundConstGraphGenerator::~FMetasoundConstGraphGenerator
          (FMetasoundConstGraphGenerator *this)

{
  FAsyncTaskBase *pFVar1;
  FMetasoundEnvironment *pFVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FMetasoundConstGraphGenerator_Metasound__6B_;
  LOCK();
  NumActiveConstGraphs.Counter = NumActiveConstGraphs.Counter + -1;
  UNLOCK();
  if (__CsvProfilerStat925 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumActiveConstGraphs",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat925 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveConstGraphs",_GCsvCategory_Audio_Metasound.Index,NumActiveConstGraphs.Counter
             ,Set);
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(pFVar1,true,false);
    pFVar1 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
    if (pFVar1 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  if (this->bUseOperatorPool != false) {
    FMetasoundGenerator::UpdateGraphIfPending((FMetasoundGenerator *)this);
    ReleaseOperatorToCache(this);
  }
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  pFVar2 = (this->EnvironmentPtr).Ptr;
  if (pFVar2 != (FMetasoundEnvironment *)0x0) {
    DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
              ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                *)(pFVar2->Variables).Pairs.AllocatorInstance.Data,
               (pFVar2->Variables).Pairs.ArrayNum);
    pFVar3 = (pFVar2->Variables).Pairs.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x10);
  }
  FMetasoundGenerator::~FMetasoundGenerator((FMetasoundGenerator *)this);
  return;
}

// BuildGraph @ 14b2acd80

void __thiscall
Metasound::FMetasoundConstGraphGenerator::BuildGraph
          (FMetasoundConstGraphGenerator *this,FGeneratorInitParams *param_1)

{
  FAsyncTaskBase *pFVar1;
  bool bVar2;
  FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this_00;
  FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *pFVar3;
  bool local_res8 [8];
  FMetasoundConstGraphGenerator *local_res10;
  
  if ((param_1->bBuildSynchronous == false) &&
     (ConsoleVariables::bEnableAsyncMetaSoundGeneratorBuilder)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_res8[0] = true;
  local_res10 = this;
  this_00 = ::operator_new(0x128);
  pFVar3 = (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *)0x0;
  if (this_00 != (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *)0x0) {
    pFVar3 = FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::
             FAsyncTask<Metasound::FAsyncMetaSoundBuilder><Metasound::FMetasoundConstGraphGenerator_*,Metasound::FGeneratorInitParams,bool>
                       (this_00,&local_res10,param_1,local_res8);
  }
  pFVar1 = (this->BuilderTask).Ptr;
  (this->BuilderTask).Ptr = (FAsyncTaskBase *)pFVar3;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))();
  }
  pFVar1 = (this->BuilderTask).Ptr;
  if (bVar2) {
    FAsyncTaskBase::Start(pFVar1,false,GBackgroundPriorityThreadPool,Normal,None,-1,(wchar_t *)0x0);
    return;
  }
  FAsyncTaskBase::Start(pFVar1,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  pFVar1 = (this->BuilderTask).Ptr;
  (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  FMetasoundGenerator::UpdateGraphIfPending((FMetasoundGenerator *)this);
  return;
}

// Init @ 14b2b1a10

void __thiscall
Metasound::FMetasoundConstGraphGenerator::Init
          (FMetasoundConstGraphGenerator *this,FGeneratorInitParams *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGraphRenderCost *pFVar3;
  FAsyncTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FVertexInterface *this_00;
  FOutputVertexInterface *pFVar7;
  TSharedRef<Metasound::FGraphRenderCost,1> *pTVar8;
  FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this_01;
  FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *pFVar9;
  longlong lVar10;
  longlong lVar11;
  bool local_res18 [8];
  FMetasoundConstGraphGenerator *local_res20;
  FGraphRenderCost *local_48;
  FSharedReferencer<1> local_40;
  TSharedRef<Metasound::FGraphRenderCost,1> local_38;
  FGraphRenderCost *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  LOCK();
  NumActiveConstGraphs.Counter = NumActiveConstGraphs.Counter + 1;
  UNLOCK();
  if (!__CsvProfilerStat897) {
    FCsvProfilerTrace::OutputInlineStat("NumActiveConstGraphs",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat897 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveConstGraphs",_GCsvCategory_Audio_Metasound.Index,NumActiveConstGraphs.Counter
             ,Set);
  FMetasoundGenerator::InitBase((FMetasoundGenerator *)this,param_1);
  if ((ConsoleVariables::bEnableExperimentalAutoCachingForOneShotOperators != false) ||
     (ConsoleVariables::bEnableExperimentalAutoCachingForAllOperators != false)) {
    if (ConsoleVariables::bEnableExperimentalAutoCachingForAllOperators == false) {
      if (((param_1->Graph).Object == (IGraph *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FVertexInterface *)(**(code **)((longlong)*(param_1->Graph).Object + 0x20))();
      pFVar7 = FVertexInterface::GetOutputInterface(this_00);
      lVar10 = pFVar7->_padding_;
      lVar11 = (longlong)(int)pFVar7->_padding_ * 0x20 + lVar10;
      for (; lVar10 != lVar11; lVar10 = lVar10 + 0x20) {
        if (*(FName *)(lVar10 + 8) == Frontend::SourceOneShotInterface::Outputs::OnFinished)
        goto LAB_14b2b1af3;
      }
      bVar6 = false;
    }
    else {
LAB_14b2b1af3:
      bVar6 = true;
    }
    this->bUseOperatorPool = bVar6;
  }
  bVar6 = TryUseCachedOperator(this,param_1,true);
  if (!bVar6) {
    pTVar8 = FGraphRenderCost::MakeGraphRenderCost(&local_38);
    local_40.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_48 = pTVar8->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar1 = &this->_padding_;
    pFVar9 = (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *)0x0;
    if ((FGraphRenderCost **)plVar1 != &local_48) {
      *plVar1 = (longlong)local_48;
      local_48 = (FGraphRenderCost *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
    pFVar3 = (FGraphRenderCost *)*plVar1;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = (param_1->GraphRenderCost).Object;
    pTStack_20 = (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController;
    (param_1->GraphRenderCost).Object = pFVar3;
    (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    if ((param_1->bBuildSynchronous == false) &&
       (ConsoleVariables::bEnableAsyncMetaSoundGeneratorBuilder != false)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    local_res18[0] = true;
    local_res20 = this;
    this_01 = ::operator_new(0x128);
    if (this_01 != (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *)0x0) {
      pFVar9 = FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::
               FAsyncTask<Metasound::FAsyncMetaSoundBuilder><Metasound::FMetasoundConstGraphGenerator_*,Metasound::FGeneratorInitParams,bool>
                         (this_01,&local_res20,param_1,local_res18);
    }
    pFVar4 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)pFVar9;
    if (pFVar4 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x28))();
    }
    pFVar4 = (this->BuilderTask).Ptr;
    if (bVar6) {
      FAsyncTaskBase::Start
                (pFVar4,false,GBackgroundPriorityThreadPool,Normal,None,-1,(wchar_t *)0x0);
      return;
    }
    FAsyncTaskBase::Start(pFVar4,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
    pFVar4 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
    if (pFVar4 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
    }
    FMetasoundGenerator::UpdateGraphIfPending((FMetasoundGenerator *)this);
  }
  return;
}

// ReleaseOperatorToCache @ 14b2b6390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FMetasoundConstGraphGenerator::ReleaseOperatorToCache
          (FMetasoundConstGraphGenerator *this)

{
  bool bVar1;
  ForAnyElementType FVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FName *pFVar6;
  FMetasoundGeneratorModule *pFVar7;
  FOperatorPoolEntryID *pFVar8;
  code *pcVar9;
  bool bVar10;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> local_res8;
  FName local_res10;
  FOperatorPool *local_98;
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  longlong *local_78;
  FMetasoundEnvironment *local_70;
  undefined8 local_68;
  FInputVertexInterfaceData local_60;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundConstGraphGenerator::ReleaseOperatorToCache");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId991,"FMetasoundConstGraphGenerator::ReleaseOperatorToCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGenerator.cpp"
               ,0x3df);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId991);
  }
  if ((this->OperatorPoolID).bIsSet != false) {
    pFVar6 = ::FName::FName(&local_res10,"MetasoundGenerator");
    pFVar7 = FModuleManager::GetModuleChecked<Metasound::FMetasoundGeneratorModule>(*pFVar6);
    (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,&local_98);
    (**(code **)(this->_padding_ + 0x40))(this,&local_res8);
    local_60.bIsVertexInterfaceFrozen = SUB81(this->_padding_,0);
    local_60.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
    this->_padding_ = 0;
    local_60.Bindings.ArrayNum = (int)this->_padding_;
    local_60.Bindings.ArrayMax = *(int *)((longlong)&this->_padding_ + 4);
    this->_padding_ = 0;
    local_60.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
    this->_padding_ = 0;
    local_60.SubInterfaces.ArrayNum = (int)this->_padding_;
    local_60.SubInterfaces.ArrayMax = *(int *)((longlong)&this->_padding_ + 4);
    this->_padding_ = 0;
    if ((local_98 != (FOperatorPool *)0x0) && (local_res8.Ptr != (IOperator *)0x0)) {
      if (6 < (byte)LogMetasoundGenerator._0_1_) {
        pFVar8 = TOptional<Metasound::FOperatorPoolEntryID>::operator->(&this->OperatorPoolID);
        FOperatorPoolEntryID::ToString(pFVar8,&local_88);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (((this->EnvironmentPtr).Ptr != (FMetasoundEnvironment *)0x0) &&
         (pcVar9 = (code *)(**(code **)((longlong)*local_res8.Ptr + 0x30))(), pcVar9 != (code *)0x0)
         ) {
        local_78 = &this->_padding_;
        local_68 = 0;
        local_70 = (this->EnvironmentPtr).Ptr;
        (*pcVar9)(local_res8.Ptr,&local_78);
      }
      FMetasoundGenerator::ClearGraph((FMetasoundGenerator *)this);
      if ((local_98 == (FOperatorPool *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = TOptional<Metasound::FOperatorPoolEntryID>::operator*(&this->OperatorPoolID);
      FOperatorPool::AddOperator
                (local_98,pFVar8,&local_res8,&local_60,
                 (TSharedPtr<Metasound::FGraphRenderCost,1> *)&this->_padding_);
    }
    FVar4.Data = local_60.SubInterfaces.AllocatorInstance.Data;
    iVar3 = local_60.Bindings.ArrayNum;
    FVar2.Data = local_60.Bindings.AllocatorInstance.Data;
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_60.SubInterfaces.AllocatorInstance.Data,
               local_60.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)FVar4.Data != (FSubInterfaceLayout *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)FVar2.Data,iVar3);
    if ((FInputBinding *)FVar2.Data != (FInputBinding *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_res8.Ptr != (IOperator *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// TryUseCachedOperator @ 14b2b98b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::FMetasoundConstGraphGenerator::TryUseCachedOperator
          (FMetasoundConstGraphGenerator *this,FGeneratorInitParams *param_1,bool param_2)

{
  TOptional<Metasound::FOperatorPoolEntryID> *pTVar1;
  longlong *plVar2;
  TUniquePtr<Metasound::FMetasoundEnvironment,TDefaultDelete<Metasound::FMetasoundEnvironment>_>
  *pTVar3;
  IGraph *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraphRenderCost *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  FName *pFVar11;
  FMetasoundGeneratorModule *pFVar12;
  undefined8 *puVar13;
  TSharedRef<Metasound::FGraphRenderCost,1> *pTVar14;
  code *pcVar15;
  FMetasoundEnvironment *pFVar16;
  FMetasoundEnvironment *pFVar17;
  FMetasoundGeneratorData *pFVar18;
  bool bVar19;
  undefined1 auStackY_2d8 [32];
  TUniquePtr<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData>_>
  local_2a0;
  FGraphRenderCost *local_298;
  FSharedReferencer<1> local_290;
  FOperatorAndInputs local_288;
  FOperatorPool *local_248;
  TReferenceControllerBase<1> *local_240;
  undefined8 local_238;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_230;
  longlong *local_220;
  FMetasoundEnvironment *local_218;
  longlong local_210;
  FName local_208;
  longlong local_200;
  FString local_1f8;
  FString local_1e8;
  longlong local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  TSharedRef<Metasound::FGraphRenderCost,1> local_1c8;
  FGraphRenderCost *local_1b8;
  TReferenceControllerBase<1> *pTStack_1b0;
  FOperatorPoolEntryID local_1a8;
  FOperatorContext local_188;
  FMetasoundGeneratorData local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar8 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar8) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundConstGraphGenerator::TryUseCachedOperator");
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId943,"FMetasoundConstGraphGenerator::TryUseCachedOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGenerator.cpp"
               ,0x3af);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId943);
  }
  pFVar11 = ::FName::FName(&local_208,"MetasoundGenerator");
  pFVar12 = FModuleManager::GetModuleChecked<Metasound::FMetasoundGeneratorModule>(*pFVar11);
  (**(code **)(pFVar12->_padding_ + 0x40))(pFVar12,&local_248);
  if (local_248 != (FOperatorPool *)0x0) {
    if (((param_1->Graph).Object == (IGraph *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar15 = (code *)swi(3);
      uVar10 = (*pcVar15)();
      return (bool)uVar10;
    }
    puVar13 = (undefined8 *)(**(code **)((longlong)*(param_1->Graph).Object + 0x10))();
    local_1a8.OperatorSettings.SampleRate = (param_1->OperatorSettings).SampleRate;
    local_1a8.OperatorSettings.TargetBlockRate = (param_1->OperatorSettings).TargetBlockRate;
    local_1a8.OperatorSettings.ActualBlockRate = (param_1->OperatorSettings).ActualBlockRate;
    local_1a8.OperatorSettings.NumFramesPerBlock = (param_1->OperatorSettings).NumFramesPerBlock;
    pTVar1 = &this->OperatorPoolID;
    local_1a8.OperatorID._0_8_ = *puVar13;
    local_1a8.OperatorID._8_8_ = puVar13[1];
    if ((TOptional<Metasound::FOperatorPoolEntryID> *)&local_1a8 != pTVar1) {
      (pTVar1->TypedValue).OperatorID.A = local_1a8.OperatorID.A;
      (pTVar1->TypedValue).OperatorID.B = local_1a8.OperatorID.B;
      (this->OperatorPoolID).TypedValue.OperatorID.C = local_1a8.OperatorID.C;
      (this->OperatorPoolID).TypedValue.OperatorID.D = local_1a8.OperatorID.D;
      (this->OperatorPoolID).TypedValue.OperatorSettings.SampleRate =
           local_1a8.OperatorSettings.SampleRate;
      (this->OperatorPoolID).TypedValue.OperatorSettings.TargetBlockRate =
           local_1a8.OperatorSettings.TargetBlockRate;
      (this->OperatorPoolID).TypedValue.OperatorSettings.ActualBlockRate =
           local_1a8.OperatorSettings.ActualBlockRate;
      (this->OperatorPoolID).TypedValue.OperatorSettings.NumFramesPerBlock =
           local_1a8.OperatorSettings.NumFramesPerBlock;
      (this->OperatorPoolID).bIsSet = true;
    }
    if ((local_248 == (FOperatorPool *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar15 = (code *)swi(3);
      uVar10 = (*pcVar15)();
      return (bool)uVar10;
    }
    pIVar4 = (param_1->Graph).Object;
    if (pIVar4 == (IGraph *)0x0) {
      pFVar11 = &(param_1->AssetPath).PackageName;
    }
    else {
      pFVar11 = (FName *)(**(code **)((longlong)*pIVar4 + 0x50))();
    }
    local_188.GraphAssetPath.PackageName = *pFVar11;
    local_188.GraphAssetPath.AssetName = pFVar11[1];
    local_188.AssetPath.PackageName = (param_1->AssetPath).PackageName;
    local_188.AssetPath.AssetName = (param_1->AssetPath).AssetName;
    if (((this->OperatorPoolID).bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar15 = (code *)swi(3);
      uVar10 = (*pcVar15)();
      return (bool)uVar10;
    }
    FOperatorPool::ClaimOperator(local_248,&local_288,&pTVar1->TypedValue,&local_188);
    if (local_288.Operator.Ptr != (IOperator *)0x0) {
      if (6 < (byte)LogMetasoundGenerator._0_1_) {
        FTopLevelAssetPath::ToString(&param_1->AssetPath,&local_1e8);
        if (((this->OperatorPoolID).bIsSet == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar15 = (code *)swi(3);
          uVar10 = (*pcVar15)();
          return (bool)uVar10;
        }
        FOperatorPoolEntryID::ToString(&(this->OperatorPoolID).TypedValue,&local_1f8);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundGenerator);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      this->bUseOperatorPool = true;
      local_230.AllocatorInstance.Data = (param_1->DefaultParameters).AllocatorInstance.Data;
      pFVar17 = (FMetasoundEnvironment *)0x0;
      (param_1->DefaultParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230.ArrayNum = (param_1->DefaultParameters).ArrayNum;
      local_230.ArrayMax = (param_1->DefaultParameters).ArrayMax;
      (param_1->DefaultParameters).ArrayNum = 0;
      (param_1->DefaultParameters).ArrayMax = 0;
      GeneratorBuilder::ResetGraphOperatorInputs
                ((FOperatorSettings *)&this->_padding_,&local_230,&local_288.Inputs);
      plVar2 = &this->_padding_;
      if (local_288.RenderCost.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_288.RenderCost.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_288.RenderCost.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1d8 = *plVar2;
      pTStack_1d0 = (TReferenceControllerBase<1> *)this->_padding_;
      *plVar2 = (longlong)local_288.RenderCost.Object;
      this->_padding_ = (longlong)local_288.RenderCost.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1d0);
      if (*plVar2 == 0) {
        pTVar14 = FGraphRenderCost::MakeGraphRenderCost(&local_1c8);
        local_290.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
        local_298 = pTVar14->Object;
        if (local_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_290.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_290.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((FGraphRenderCost **)plVar2 != &local_298) {
          *plVar2 = (longlong)local_298;
          local_298 = (FGraphRenderCost *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&this->_padding_,&local_290);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_290.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.SharedReferenceCount.ReferenceController);
      }
      pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
      pFVar6 = (FGraphRenderCost *)this->_padding_;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b8 = (param_1->GraphRenderCost).Object;
      pTStack_1b0 = (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController;
      (param_1->GraphRenderCost).Object = pFVar6;
      (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1b0);
      pcVar15 = (code *)(**(code **)((longlong)*local_288.Operator.Ptr + 0x30))();
      if (pcVar15 != (code *)0x0) {
        pFVar16 = ::operator_new(0x10);
        if (pFVar16 != (FMetasoundEnvironment *)0x0) {
          pFVar17 = FMetasoundEnvironment::FMetasoundEnvironment(pFVar16,&param_1->Environment);
        }
        pTVar3 = &this->EnvironmentPtr;
        if (pTVar3 == (TUniquePtr<Metasound::FMetasoundEnvironment,TDefaultDelete<Metasound::FMetasoundEnvironment>_>
                       *)&local_200) {
          if (pFVar17 != (FMetasoundEnvironment *)0x0) {
            DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
                      ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                        *)(pFVar17->Variables).Pairs.AllocatorInstance.Data,
                       (pFVar17->Variables).Pairs.ArrayNum);
            pFVar7 = (pFVar17->Variables).Pairs.AllocatorInstance.Data;
            pFVar16 = pFVar17;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
            goto LAB_14b2b9ce3;
          }
        }
        else {
          pFVar16 = pTVar3->Ptr;
          pTVar3->Ptr = pFVar17;
          if (pFVar16 != (FMetasoundEnvironment *)0x0) {
            DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
                      ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                        *)(pFVar16->Variables).Pairs.AllocatorInstance.Data,
                       (pFVar16->Variables).Pairs.ArrayNum);
            pFVar7 = (pFVar16->Variables).Pairs.AllocatorInstance.Data;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
LAB_14b2b9ce3:
            ::operator_delete(pFVar16,0x10);
          }
        }
        local_220 = &this->_padding_;
        local_218 = (this->EnvironmentPtr).Ptr;
        local_210 = this->_padding_;
        (*pcVar15)(local_288.Operator.Ptr,&local_220);
      }
      local_238 = 0;
      GeneratorBuilder::BuildGeneratorData
                (&local_168,(FOperatorSettings *)&this->_padding_,param_1,&local_288,
                 (FGraphAnalyzer *)&local_238);
      pFVar18 = ::operator_new(0x120);
      if (pFVar18 == (FMetasoundGeneratorData *)0x0) {
        local_2a0.Ptr = (FMetasoundGeneratorData *)0x0;
        FMetasoundGenerator::SetGraph((FMetasoundGenerator *)this,&local_2a0,param_2);
      }
      else {
        pFVar18 = MetasoundGeneratorPrivate::FMetasoundGeneratorData::FMetasoundGeneratorData
                            (pFVar18,&local_168);
        local_2a0.Ptr = pFVar18;
        FMetasoundGenerator::SetGraph((FMetasoundGenerator *)this,&local_2a0,param_2);
        if (pFVar18 != (FMetasoundGeneratorData *)0x0) {
          MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(pFVar18);
          ::operator_delete(pFVar18,0x120);
        }
      }
      MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.RenderCost.SharedReferenceCount.ReferenceController);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_288.Inputs.SubInterfaces.AllocatorInstance.Data,
                 local_288.Inputs.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_288.Inputs.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_288.Inputs.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                ((FInputBinding *)local_288.Inputs.Bindings.AllocatorInstance.Data,
                 local_288.Inputs.Bindings.ArrayNum);
      if ((FInputBinding *)local_288.Inputs.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0)
      {
        FMemory::Free(local_288.Inputs.Bindings.AllocatorInstance.Data);
      }
      if (local_288.Operator.Ptr != (IOperator *)0x0) {
        (**(code **)*local_288.Operator.Ptr)(local_288.Operator.Ptr,1);
      }
      bVar9 = true;
      goto LAB_14b2b9e62;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288.RenderCost.SharedReferenceCount.ReferenceController);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_288.Inputs.SubInterfaces.AllocatorInstance.Data,
               local_288.Inputs.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_288.Inputs.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_288.Inputs.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)local_288.Inputs.Bindings.AllocatorInstance.Data,
               local_288.Inputs.Bindings.ArrayNum);
    if ((FInputBinding *)local_288.Inputs.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
      FMemory::Free(local_288.Inputs.Bindings.AllocatorInstance.Data);
    }
    if (local_288.Operator.Ptr != (IOperator *)0x0) {
      (**(code **)*local_288.Operator.Ptr)(local_288.Operator.Ptr,1);
    }
  }
  bVar9 = false;
LAB_14b2b9e62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_240);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar9;
}

